#include "pch.h"
#include "AdaptiveHostOptions.h"
#include "Util.h"
#include <windows.foundation.collections.h>
#include "XamlCardRendererComponent.h"
#include "AdaptiveFactSetOptions.h"
#include "AdaptiveSeparationOptions.h"
#include "AdaptiveTextOptions.h"

using namespace Microsoft::WRL;
using namespace Microsoft::WRL::Wrappers;
using namespace ABI::AdaptiveCards::XamlCardRenderer;
using namespace ABI::Windows::Foundation::Collections;
using namespace ABI::Windows::UI::Xaml;
using namespace ABI::Windows::UI::Xaml::Controls;

namespace AdaptiveCards { namespace XamlCardRenderer
{
    HRESULT AdaptiveFactSetOptions::RuntimeClassInitialize() noexcept try
    {
        return S_OK;
    } CATCH_RETURN;


    HRESULT AdaptiveFactSetOptions::RuntimeClassInitialize(FactSetOptions factSetOptions) noexcept
    {
        m_sharedFactSetOptions = factSetOptions;
        return S_OK;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveFactSetOptions::get_Title(ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveTextOptions ** titleTextOptions)
    {
        return MakeAndInitialize<AdaptiveTextOptions>(titleTextOptions, m_sharedFactSetOptions.title);
    }

    _Use_decl_annotations_
    HRESULT AdaptiveFactSetOptions::put_Title(ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveTextOptions * titleTextOptions)
    {
        return E_NOTIMPL;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveFactSetOptions::get_Value(ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveTextOptions ** valueTextOptions)
    {
        return MakeAndInitialize<AdaptiveTextOptions>(valueTextOptions, m_sharedFactSetOptions.title);
    }

    _Use_decl_annotations_
    HRESULT AdaptiveFactSetOptions::put_Value(ABI::AdaptiveCards::XamlCardRenderer::IAdaptiveTextOptions * valueTextOptions)
    {
        return E_NOTIMPL;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveFactSetOptions::get_Spacing(INT32 * value)
    {
        *value = m_sharedFactSetOptions.spacing;
        return S_OK;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveFactSetOptions::put_Spacing(INT32 value)
    {
        m_sharedFactSetOptions.spacing = value;
        return S_OK;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveFactSetOptions::get_Separation(IAdaptiveSeparationOptions** separationOptions)
    {
        return MakeAndInitialize<AdaptiveSeparationOptions>(separationOptions, m_sharedFactSetOptions.separation);
    }

    _Use_decl_annotations_
    HRESULT AdaptiveFactSetOptions::put_Separation(IAdaptiveSeparationOptions*)
    {
        return E_NOTIMPL;
    }
}
}