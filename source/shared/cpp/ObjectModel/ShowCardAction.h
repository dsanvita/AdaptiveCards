#pragma once

#include "pch.h"
#include "AdaptiveCard.h"
#include "BaseActionElement.h"
#include "Enums.h"

namespace AdaptiveCards
{
class ShowCardAction : public BaseActionElement
{
public:
    ShowCardAction();

    static std::shared_ptr<ShowCardAction> Deserialize(const Json::Value& root);
    static std::shared_ptr<ShowCardAction> DeserializeFromString(const std::string& jsonString);

    virtual std::string Serialize();

    std::shared_ptr<AdaptiveCard> GetCard() const;
    void SetCard(const std::shared_ptr<AdaptiveCard>);

private:
    std::shared_ptr<AdaptiveCard> m_card;
};
}