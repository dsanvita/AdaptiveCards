#include "FactSet.h"
#include "ParseUtil.h"
#include "Fact.h"

using namespace AdaptiveCards;

const std::unordered_map<CardElementType, std::function<std::shared_ptr<Fact>(const Json::Value&)>> FactSet::CardElementParsers =
{
    { CardElementType::Fact, Fact::Deserialize }
};

FactSet::FactSet() : BaseCardElement(CardElementType::FactSet)
{
}

FactSet::FactSet(
    SeparationStyle separation,
    std::string speak,
    std::vector<std::shared_ptr<Fact>>& facts) :
    BaseCardElement(CardElementType::FactSet, separation, speak),
    m_facts(facts)
{
}

FactSet::FactSet(
    SeparationStyle separation,
    std::string speak) :
    BaseCardElement(CardElementType::FactSet, separation, speak)
{
}

const std::vector<std::shared_ptr<Fact>>& FactSet::GetFacts() const
{
    return m_facts;
}

std::vector<std::shared_ptr<Fact>>& FactSet::GetFacts()
{
    return m_facts;
}

std::string FactSet::Serialize()
{
    return "";
}

std::shared_ptr<FactSet> FactSet::Deserialize(const Json::Value& value)
{
    ParseUtil::ExpectTypeString(value, CardElementType::FactSet);

    auto factSet = BaseCardElement::Deserialize<FactSet>(value);

    // Parse Items
    auto facts = ParseUtil::GetElementCollection<Fact>(value, AdaptiveCardSchemaKey::Items, FactSet::CardElementParsers);
    factSet->m_facts = std::move(facts);
    return factSet;
}