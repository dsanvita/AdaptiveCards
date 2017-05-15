#include "pch.h"
#include "AdaptiveShowCardActionEventArgs.h"

using namespace ABI::AdaptiveCards::XamlCardRenderer;

namespace AdaptiveCards { namespace XamlCardRenderer
{
    HRESULT AdaptiveShowCardActionEventArgs::RuntimeClassInitialize()
    {
        return S_OK;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveShowCardActionEventArgs::get_ActionType(ABI::AdaptiveCards::XamlCardRenderer::ActionType* actionType)
    {
        *actionType = ActionType_ShowCard;
        return S_OK;
    }
}}