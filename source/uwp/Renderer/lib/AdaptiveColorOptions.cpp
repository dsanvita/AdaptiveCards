#include "pch.h"
#include "AdaptiveHostOptions.h"
#include "Util.h"
#include <windows.foundation.collections.h>
#include "XamlCardRendererComponent.h"
#include "AdaptiveColorOptions.h"

using namespace Microsoft::WRL;
using namespace Microsoft::WRL::Wrappers;
using namespace ABI::AdaptiveCards::XamlCardRenderer;
using namespace ABI::Windows::Foundation::Collections;
using namespace ABI::Windows::UI::Xaml;
using namespace ABI::Windows::UI::Xaml::Controls;

namespace AdaptiveCards { namespace XamlCardRenderer
{
    HRESULT AdaptiveColorOptions::RuntimeClassInitialize() noexcept try
    {
        return S_OK;
    } CATCH_RETURN;


    HRESULT AdaptiveColorOptions::RuntimeClassInitialize(ColorOptions colorOptions) noexcept
    {
        m_sharedColorOptions = colorOptions;
        return S_OK;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveColorOptions::get_Default(ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveColorOption** value)
    {
        return E_NOTIMPL;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveColorOptions::put_Default(ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveColorOption* value)
    {
        return E_NOTIMPL;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveColorOptions::get_Accent(ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveColorOption** value)
    {
        return E_NOTIMPL;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveColorOptions::put_Accent(ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveColorOption* value)
    {
        return E_NOTIMPL;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveColorOptions::get_Dark(ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveColorOption** value)
    {
        return E_NOTIMPL;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveColorOptions::put_Dark(ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveColorOption* value)
    {
        return E_NOTIMPL;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveColorOptions::get_Light(ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveColorOption** value)
    {
        return E_NOTIMPL;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveColorOptions::put_Light(ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveColorOption* value)
    {
        return E_NOTIMPL;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveColorOptions::get_Good(ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveColorOption** value)
    {
        return E_NOTIMPL;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveColorOptions::put_Good(ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveColorOption* value)
    {
        return E_NOTIMPL;
    }
    _Use_decl_annotations_
    HRESULT AdaptiveColorOptions::get_Warning(ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveColorOption** value)
    {
        return E_NOTIMPL;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveColorOptions::put_Warning(ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveColorOption* value)
    {
        return E_NOTIMPL;
    }
    
    _Use_decl_annotations_
    HRESULT AdaptiveColorOptions::get_Attention(ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveColorOption** value)
    {
        return E_NOTIMPL;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveColorOptions::put_Attention(ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveColorOption* value)
    {
        return E_NOTIMPL;
    }
}
}
