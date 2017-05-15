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
        ABI::AdaptiveCards::XamlCardRenderer::ActionType actionType, 
        ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveActionElement* action)
    {
        m_actionType = actionType;
        m_action = action;

        return S_OK;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveActionEventArgs::get_ActionType(ABI::AdaptiveCards::XamlCardRenderer::ActionType* actionType)
    {
        *actionType = m_actionType;
        return S_OK;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveActionEventArgs::get_Action(ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveActionElement** action)
    {
        return E_NOTIMPL;
    }
}}