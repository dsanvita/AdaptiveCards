#pragma once
#include "AdaptiveCards.XamlCardRenderer.h"

namespace AdaptiveCards { namespace XamlCardRenderer
{
    class AdaptiveShowCardActionEventArgs :
        public Microsoft::WRL::RuntimeClass<
        Microsoft::WRL::RuntimeClassFlags<Microsoft::WRL::RuntimeClassType::WinRt>,
        ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveShowCardActionEventArgs,
        ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveActionEventArgs>
    {
        InspectableClass(RuntimeClass_AdaptiveCards_XamlCardRenderer_AdaptiveShowCardActionEventArgs, BaseTrust)

    public:
        HRESULT RuntimeClassInitialize();

        // IAdaptiveActionEventArgs
        IFACEMETHODIMP get_ActionType(_Out_ ABI::AdaptiveCards::XamlCardRenderer::ActionType* actionType);

        // IAdaptiveShowCardActionEventArgs
        IFACEMETHODIMP get_Card(ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveCard ** card);
    };

    ActivatableClass(AdaptiveShowCardActionEventArgs);
}}