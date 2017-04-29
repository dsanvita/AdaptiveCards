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
    HRESULT AdaptiveImageSizeOptions::get_Small(INT32* smallSize)
    {
        *smallSize = m_sharedImageSizeOptions.smallSize;
        return S_OK;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveImageSizeOptions::put_Small(INT32 smallSize)
    {
        m_sharedImageSizeOptions.smallSize = smallSize;
        return S_OK;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveImageSizeOptions::get_Medium(INT32* mediumSize)
    {
        *mediumSize = m_sharedImageSizeOptions.mediumSize;
        return S_OK;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveImageSizeOptions::put_Medium(INT32 mediumSize)
    {
        m_sharedImageSizeOptions.mediumSize = mediumSize;
        return S_OK;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveImageSizeOptions::get_Large(INT32* largeSize)
    {
        *largeSize = m_sharedImageSizeOptions.largeSize;
        return S_OK;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveImageSizeOptions::put_Large(INT32 largeSize)
    {
        m_sharedImageSizeOptions.largeSize = largeSize;
        return S_OK;
    }
}
}