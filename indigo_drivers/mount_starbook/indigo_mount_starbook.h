// Copyright (c) 2017 CloudMakers, s. r. o.
// All rights reserved.
//
// You can use this software under the terms of 'INDIGO Astronomy
// open-source license' (see LICENSE.md).
//
// THIS SOFTWARE IS PROVIDED BY THE AUTHORS 'AS IS' AND ANY EXPRESS
// OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
// WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY
// DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTnexstarIAL
// DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
// GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
// WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
// NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
// SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

// version history
// 2.0 by Tsunoda Koji <tsunoda@astroarts.co.jp>

/** INDIGO Vixen StarBook driver
 \file indigo_mount_starbook.h
 */

#ifndef mount_starbook_h
#define mount_starbook_h

#include <indigo/indigo_driver.h>
#include <indigo/indigo_mount_driver.h>
#include <indigo/indigo_guider_driver.h>

#ifdef __cplusplus
extern "C" {
#endif

#define MOUNT_STARBOOK_NAME              "Mount Vixen StarBook"
#define MOUNT_STARBOOK_GUIDER_NAME       "Mount Vixen StarBook (guider)"


/** Create mount StarBook device instance
 */

extern indigo_result indigo_mount_starbook(indigo_driver_action action, indigo_driver_info *info);

#ifdef __cplusplus
}
#endif

#endif /* mount_starbook_h */
