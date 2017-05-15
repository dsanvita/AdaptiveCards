#pragma once
#include "AdaptiveCards.XamlCardRenderer.h"

namespace AdaptiveCards { namespace XamlCardRenderer
{
    class AdaptiveActionEventArgs :
        public Microsoft::WRL::RuntimeClass<
        Microsoft::WRL::RuntimeClassFlags<Microsoft::WRL::RuntimeClassType::WinRt>,
        ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveActionEventArgs>
    {
        InspectableClass(RuntimeClass_AdaptiveCards_XamlCardRenderer_AdaptiveActionEventArgs, BaseTrust)

    public:
        AdaptiveActionEventArgs() :
            m_actionType(ABI::AdaptiveCards::XamlCardRenderer::ActionType_Unsupported)
        {}

        HRESULT RuntimeClassInitialize();
        HRESULT RuntimeClassInitialize(ABI::AdaptiveCards::XamlCardRenderer::ActionType actionType, ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveActionElement* action);

        // IAdaptiveActionEventArgs
        IFACEMETHODIMP get_ActionType(_Out_ ABI::AdaptiveCards::XamlCardRenderer::ActionType* actionType);
        IFACEMETHODIMP get_Action(ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveActionElement** action);

        ABI::AdaptiveCards::XamlCardRenderer::ActionType m_actionType;
        Microsoft::WRL::ComPtr<ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveActionElement> m_action;
    };
}}