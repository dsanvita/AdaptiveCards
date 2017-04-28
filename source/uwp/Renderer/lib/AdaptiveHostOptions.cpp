#include "pch.h"
#include "AdaptiveHostOptions.h"
#include "Util.h"
#include <windows.foundation.collections.h>
#include "XamlCardRendererComponent.h"

using namespace Microsoft::WRL;
using namespace Microsoft::WRL::Wrappers;
using namespace ABI::AdaptiveCards::XamlCardRenderer;
using namespace ABI::Windows::Foundation::Collections;
using namespace ABI::Windows::UI::Xaml;
using namespace ABI::Windows::UI::Xaml::Controls;

namespace AdaptiveCards { namespace XamlCardRenderer
{
    HRESULT AdaptiveHostOptions::RuntimeClassInitialize() noexcept try
    {
        return S_OK;
    } CATCH_RETURN;

    _Use_decl_annotations_
    HRESULT AdaptiveHostOptions::get_FontFamily(HSTRING* text)
    {
        return UTF8ToHString(m_sharedHostOptions.fontFamily, text);
    }

    _Use_decl_annotations_
    HRESULT AdaptiveHostOptions::put_FontFamily(HSTRING text)
    {
        std::string out;
        RETURN_IF_FAILED(HStringToUTF8(text, out));
        m_sharedHostOptions.fontFamily = out;
        return S_OK;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveHostOptions::get_FontSizes(IAdaptiveFontSizeOptions** )
    {
        return E_NOTIMPL;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveHostOptions::put_FontSizes(IAdaptiveFontSizeOptions* )
    {
        return E_NOTIMPL;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveHostOptions::get_SupportsInteractivity(boolean* supporsInteractivity)
    {
        *supporsInteractivity = m_sharedHostOptions.supportsInteractivity;
        return S_OK;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveHostOptions::put_SupportsInteractivity(boolean supportsInteractivity)
    {
        m_sharedHostOptions.supportsInteractivity = Boolify(supportsInteractivity);
        return S_OK;
    }

    _Use_decl_annotations_
    HRESULT  AdaptiveHostOptions::get_Colors(ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveColorOptions ** )
    {
        return E_NOTIMPL;
    }

    _Use_decl_annotations_
    HRESULT  AdaptiveHostOptions::put_Colors(ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveColorOptions * )
    {
        return E_NOTIMPL;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveHostOptions::get_FontSizes(ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveColorOptions ** )
    {
        return E_NOTIMPL;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveHostOptions::put_FontSizes(ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveColorOptions * )
    {
        return E_NOTIMPL;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveHostOptions::get_ImageSizes(ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveImageSizeOptions ** )
    {
        return E_NOTIMPL;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveHostOptions::put_ImageSizes(ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveImageSizeOptions * )
    {
        return E_NOTIMPL;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveHostOptions::get_MaxActions(INT32* maxActions)
    {
        *maxActions = m_sharedHostOptions.maxActions;
        return S_OK;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveHostOptions::put_MaxActions(INT32 maxActions)
    {
        m_sharedHostOptions.maxActions = maxActions;
        return S_OK;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveHostOptions::get_StrongSeparation(ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveSeparationOptions**)
    {
        return E_NOTIMPL;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveHostOptions::put_StrongSeparation(ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveSeparationOptions*)
    {
        return E_NOTIMPL;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveHostOptions::get_AdaptiveCard(ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveCardOptions** )
    {
        return E_NOTIMPL;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveHostOptions::put_AdaptiveCard(ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveCardOptions* )
    {
        return E_NOTIMPL;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveHostOptions::get_ImageSet(ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveImageSetOptions** )
    {
        return E_NOTIMPL;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveHostOptions::put_ImageSet(ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveImageSetOptions* )
    {
        return E_NOTIMPL;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveHostOptions::get_Image(ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveImageOptions ** )
    {
        return E_NOTIMPL;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveHostOptions::put_Image(ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveImageOptions * )
    {
        return E_NOTIMPL;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveHostOptions::get_FactSet(ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveFactSetOptions ** )
    {
        return E_NOTIMPL;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveHostOptions::put_FactSet(ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveFactSetOptions * )
    {
        return E_NOTIMPL;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveHostOptions::get_Column(ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveColumnOptions ** )
    {
        return E_NOTIMPL;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveHostOptions::put_Column(ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveColumnOptions * )
    {
        return E_NOTIMPL;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveHostOptions::get_Container(ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveContainerOptions ** )
    {
        return E_NOTIMPL;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveHostOptions::put_Container(ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveContainerOptions * )
    {
        return E_NOTIMPL;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveHostOptions::get_ColumnSet(ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveColumnSetOptions ** )
    {
        return E_NOTIMPL;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveHostOptions::put_ColumnSet(ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveColumnSetOptions * )
    {
        return E_NOTIMPL;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveHostOptions::get_TextBlock(ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveTextBlockOptions ** )
    {
        return E_NOTIMPL;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveHostOptions::put_TextBlock(ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveTextBlockOptions * )
    {
        return E_NOTIMPL;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveHostOptions::get_DateInput(ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveDateInputOptions ** )
    {
        return E_NOTIMPL;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveHostOptions::put_DateInput(ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveDateInputOptions * )
    {
        return E_NOTIMPL;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveHostOptions::get_TimeInput(ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveTimeInputOptions ** )
    {
        return E_NOTIMPL;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveHostOptions::put_TimeInput(ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveTimeInputOptions * )
    {
        return E_NOTIMPL;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveHostOptions::get_NumberInput(ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveNumberInputOptions ** )
    {
        return E_NOTIMPL;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveHostOptions::put_NumberInput(ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveNumberInputOptions * )
    {
        return E_NOTIMPL;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveHostOptions::get_ToggleInput(ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveToggleInputOptions ** )
    {
        return E_NOTIMPL;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveHostOptions::put_ToggleInput(ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveToggleInputOptions * )
    {
        return E_NOTIMPL;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveHostOptions::get_TextInput(ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveTextInputOptions ** )
    {
        return E_NOTIMPL;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveHostOptions::put_TextInput(ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveTextInputOptions * )
    {
        return E_NOTIMPL;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveHostOptions::get_ChoiceSetInput(ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveChoiceSetInputOptions ** )
    {
        return E_NOTIMPL;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveHostOptions::put_ChoiceSetInput(ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveChoiceSetInputOptions * )
    {
        return E_NOTIMPL;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveHostOptions::get_Actions(ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveActionOptions ** )
    {
        return E_NOTIMPL;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveHostOptions::put_Actions(ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveActionOptions * )
    {
        return E_NOTIMPL;
    }
}}
