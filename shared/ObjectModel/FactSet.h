#pragma once

#include "pch.h"
#include "Enums.h"
#include "Fact.h"
#include "BaseCardElement.h"

namespace AdaptiveCards
{
class BaseCardElement;
class FactSet : public BaseCardElement
{
public:
    FactSet();
    FactSet(SeparationStyle separation, std::string speak);
    FactSet(SeparationStyle separation, std::string speak, std::vector<std::shared_ptr<Fact>>& facts);

    virtual std::string Serialize();

    std::vector<std::shared_ptr<Fact>>& GetFacts();
    const std::vector<std::shared_ptr<Fact>>& GetFacts() const;
    static std::shared_ptr<FactSet> Deserialize(const Json::Value& root);

private:
    static const std::unordered_map<CardElementType, std::function<std::shared_ptr<Fact>(const Json::Value&)>> CardElementParsers;
    std::vector<std::shared_ptr<Fact>> m_facts; 
};
}