#include "pch.h"
#include "AdaptiveActionEventArgs.h"

using namespace ABI::AdaptiveCards::XamlCardRenderer;

namespace AdaptiveCards { namespace XamlCardRenderer
{
    HRESULT AdaptiveActionEventArgs::RuntimeClassInitialize()
    {
        return S_OK;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveActionEventArgs::RuntimeClassInitialize(
        ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveActionElement* action)
    {
        m_action = action;

        return S_OK;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveActionEventArgs::get_Action(ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveActionElement** action)
    {
        *action = m_action.Get();
        return S_OK;
    }
}}