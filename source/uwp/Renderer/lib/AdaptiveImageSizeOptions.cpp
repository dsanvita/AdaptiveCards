#include "pch.h"
#include "AdaptiveHostOptions.h"
#include "Util.h"
#include <windows.foundation.collections.h>
#include "XamlCardRendererComponent.h"
#include "AdaptiveImageSizeOptions.h"

using namespace Microsoft::WRL;
using namespace Microsoft::WRL::Wrappers;
using namespace ABI::AdaptiveCards::XamlCardRenderer;
using namespace ABI::Windows::Foundation::Collections;
using namespace ABI::Windows::UI::Xaml;
using namespace ABI::Windows::UI::Xaml::Controls;

namespace AdaptiveCards { namespace XamlCardRenderer
{
    HRESULT AdaptiveImageSizeOptions::RuntimeClassInitialize() noexcept try
    {
        return S_OK;
    } CATCH_RETURN;


    HRESULT AdaptiveImageSizeOptions::RuntimeClassInitialize(ImageSizeOptions imageSizeOptions) noexcept
    {
        m_sharedImageSizeOptions = imageSizeOptions;
        return S_OK;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveImageSizeOptions::get_Small(INT32* smallish)
    {
        *smallish = m_sharedImageSizeOptions.smallish;
        return S_OK;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveImageSizeOptions::put_Small(INT32 smallish)
    {
        m_sharedImageSizeOptions.smallish = smallish;
        return S_OK;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveImageSizeOptions::get_Medium(INT32* medium)
    {
        *medium = m_sharedImageSizeOptions.medium;
        return S_OK;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveImageSizeOptions::put_Medium(INT32 medium)
    {
        m_sharedImageSizeOptions.medium = medium;
        return S_OK;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveImageSizeOptions::get_Large(INT32* large)
    {
        *large = m_sharedImageSizeOptions.large;
        return S_OK;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveImageSizeOptions::put_Large(INT32 large)
    {
        m_sharedImageSizeOptions.large = large;
        return S_OK;
    }
}
}
