// bslfwd_bslmf_nil.h                                                 -*-C++-*-
#ifndef INCLUDED_BSLFWD_BSLMF_NIL
#define INCLUDED_BSLFWD_BSLMF_NIL

#include <bslfwd_buildtarget.h>

//@PURPOSE: Provide a forward-declaration for the corresponding BDE type.
//
//@DEPRECATED: Do not use.
//
//@SEE_ALSO: bslfwd_buildtarget
//
//@DESCRIPTION: This header provides a forward-declaration for the
// corresponding BDE type in order to enable client code to safely use a
// forward-declaration for that type during the period where the BDE libraries
// transition to C++ namespaces.  If 'BSLFWD_BUILDTARGET_BSL_USING_NAMESPACES'
// is defined this header will forward declare the type in the appropriate C++
// namespace (e.g., 'bslma::Allocator') otherwise it will forward declare the
// type in the legacy-namespace style (e.g., 'bslma_Allocator').

#ifdef BSLFWD_BUILDTARGET_BSL_USING_NAMESPACES

namespace BloombergLP {
    namespace bslmf {
        struct Nil;
    }  // close namespace bslmf

    typedef bslmf::Nil bslmf_Nil;
}  // close enterprise namespace

#else

namespace BloombergLP {
    struct bslmf_Nil;
}

#endif

#endif

// ----------------------------------------------------------------------------
// Copyright 2013 Bloomberg Finance L.P.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
// ----------------------------- END-OF-FILE ----------------------------------
