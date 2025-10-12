void GeoLocation___cctor(const MethodInfo *method)
{
  if ( (byte_4C370B5 & 1) == 0 )
  {
    sub_1C32C20(&GeoLocation_TypeInfo);
    byte_4C370B5 = 1;
  }
  GeoLocation_TypeInfo->static_fields->TEST_COUNT = 3;
}


void GeoLocation___ctor(GeoLocation_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void GeoLocation__CallDelegate(int32_t resultStat, const MethodInfo *method)
{
  ;
}


UnityEngine_LocationInfo_o *GeoLocation__GetAppropriateOne(
        UnityEngine_LocationInfo_o *__return_ptr retstr,
        const MethodInfo *method)
{
  UnityEngine_LocationInfo_o *result; // x0
  unsigned __int64 v3; // x23
  unsigned int v4; // w21
  float v5; // s14
  int i; // w27
  struct GeoLocation_StaticFields *v7; // x8
  __int64 v8; // x29
  unsigned int j; // w19
  struct GeoLocation_StaticFields *static_fields; // x8
  struct UnityEngine_LocationInfo_array *infoArray; // x8
  float latitude; // s0
  struct UnityEngine_LocationInfo_array *v13; // x8
  float v14; // s8
  float longitude; // s0
  struct UnityEngine_LocationInfo_array *v16; // x8
  float v17; // s9
  float altitude; // s0
  struct UnityEngine_LocationInfo_array *v19; // x8
  float v20; // s10
  float v21; // s0
  struct UnityEngine_LocationInfo_array *v22; // x8
  float v23; // s11
  float v24; // s0
  struct UnityEngine_LocationInfo_array *v25; // x8
  float v26; // s12
  float v27; // s13
  float v28; // s0
  struct UnityEngine_LocationInfo_array *v29; // x8
  char *v30; // x8
  __int128 v31; // q0

  if ( (byte_4C370B4 & 1) == 0 )
  {
    sub_1C32C20(&GeoLocation_TypeInfo);
    byte_4C370B4 = 1;
  }
  result = (UnityEngine_LocationInfo_o *)GeoLocation_TypeInfo;
  v3 = 0;
  v4 = 0;
  v5 = 180.0;
  for ( i = 1; ; ++i )
  {
    if ( !LODWORD(result[7].fields.m_Timestamp) )
    {
      j_il2cpp_runtime_class_init_0(result);
      result = (UnityEngine_LocationInfo_o *)GeoLocation_TypeInfo;
    }
    v7 = *(struct GeoLocation_StaticFields **)&result[5].fields.m_VerticalAccuracy;
    if ( (__int64)v3 >= v7->TEST_COUNT )
      break;
    v8 = 32LL * i + 32;
    for ( j = v3 + 1; ; ++j )
    {
      if ( !LODWORD(result[7].fields.m_Timestamp) )
      {
        j_il2cpp_runtime_class_init_0(result);
        result = (UnityEngine_LocationInfo_o *)GeoLocation_TypeInfo;
      }
      static_fields = *(struct GeoLocation_StaticFields **)&result[5].fields.m_VerticalAccuracy;
      if ( (signed int)j >= static_fields->TEST_COUNT )
        break;
      if ( !LODWORD(result[7].fields.m_Timestamp) )
      {
        j_il2cpp_runtime_class_init_0(result);
        static_fields = GeoLocation_TypeInfo->static_fields;
      }
      infoArray = static_fields->infoArray;
      if ( !infoArray )
        goto LABEL_38;
      if ( v3 >= LODWORD(infoArray->max_length) )
        goto LABEL_39;
      latitude = UnityEngine_LocationInfo__get_latitude(&infoArray->m_Items[v3], 0);
      v13 = GeoLocation_TypeInfo->static_fields->infoArray;
      if ( !v13 )
        goto LABEL_38;
      if ( v3 >= LODWORD(v13->max_length) )
        goto LABEL_39;
      v14 = latitude;
      longitude = UnityEngine_LocationInfo__get_longitude(&v13->m_Items[v3], 0);
      v16 = GeoLocation_TypeInfo->static_fields->infoArray;
      if ( !v16 )
        goto LABEL_38;
      if ( v3 >= LODWORD(v16->max_length) )
        goto LABEL_39;
      v17 = longitude;
      altitude = UnityEngine_LocationInfo__get_altitude(&v16->m_Items[v3], 0);
      v19 = GeoLocation_TypeInfo->static_fields->infoArray;
      if ( !v19 )
        goto LABEL_38;
      if ( j >= LODWORD(v19->max_length) )
        goto LABEL_39;
      v20 = altitude;
      v21 = UnityEngine_LocationInfo__get_latitude((UnityEngine_LocationInfo_o *)((char *)v19 + v8), 0);
      v22 = GeoLocation_TypeInfo->static_fields->infoArray;
      if ( !v22 )
        goto LABEL_38;
      if ( j >= LODWORD(v22->max_length) )
        goto LABEL_39;
      v23 = v21;
      v24 = UnityEngine_LocationInfo__get_longitude((UnityEngine_LocationInfo_o *)((char *)v22 + v8), 0);
      v25 = GeoLocation_TypeInfo->static_fields->infoArray;
      if ( !v25 )
        goto LABEL_38;
      if ( j >= LODWORD(v25->max_length) )
        goto LABEL_39;
      v26 = v24;
      v27 = UnityEngine_LocationInfo__get_altitude((UnityEngine_LocationInfo_o *)((char *)v25 + v8), 0);
      if ( !byte_4C313CF )
      {
        sub_1C32C20(&System_Math_TypeInfo);
        byte_4C313CF = 1;
      }
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      result = (UnityEngine_LocationInfo_o *)GeoLocation_TypeInfo;
      v28 = sqrtf(
              (float)((float)((float)(v14 - v23) * (float)(v14 - v23))
                    + (float)((float)((float)(v17 + 360.0) - (float)(v26 + 360.0))
                            * (float)((float)(v17 + 360.0) - (float)(v26 + 360.0))))
            + (float)((float)(v20 - v27) * (float)(v20 - v27)));
      if ( v28 < v5 )
      {
        v5 = v28;
        v4 = j;
      }
      v8 += 32;
    }
    ++v3;
  }
  if ( !LODWORD(result[7].fields.m_Timestamp) )
  {
    j_il2cpp_runtime_class_init_0(result);
    v7 = GeoLocation_TypeInfo->static_fields;
  }
  v29 = v7->infoArray;
  if ( !v29 )
LABEL_38:
    sub_1C32E7C(result);
  if ( v4 >= LODWORD(v29->max_length) )
LABEL_39:
    sub_1C32E84(result);
  v30 = (char *)v29 + 32 * (int)v4;
  v31 = *((_OWORD *)v30 + 3);
  *(_OWORD *)&retstr->fields.m_Timestamp = *((_OWORD *)v30 + 2);
  *(_OWORD *)&retstr->fields.m_Altitude = v31;
  return result;
}


void GeoLocation__GetLocation(
        GeoLocation_LocationDelegate_o *locDel,
        UnityEngine_MonoBehaviour_o *someMonoForCoroutine,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  GeoLocation_c *v5; // x0
  struct GeoLocation_StaticFields *static_fields; // x0

  if ( (byte_4C370B2 & 1) == 0 )
  {
    sub_1C32C20(&GeoLocation_TypeInfo);
    sub_1C32C20(&UnityEngine_LocationInfo___TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C370B2 = 1;
  }
  v5 = GeoLocation_TypeInfo;
  if ( !GeoLocation_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GeoLocation_TypeInfo);
    v5 = GeoLocation_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->callBack = locDel;
  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->callBack, (int32_t)locDel, (int32_t)method, v3);
  if ( !GeoLocation_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(GeoLocation_TypeInfo);
}


System_Collections_IEnumerator_o *GeoLocation__GetLocationCoroutine(const MethodInfo *method)
{
  __int64 v1; // x19

  if ( (byte_4C370B3 & 1) == 0 )
  {
    sub_1C32C20(&GeoLocation__GetLocationCoroutine_d__7_TypeInfo);
    byte_4C370B3 = 1;
  }
  v1 = sub_1C32E6C(GeoLocation__GetLocationCoroutine_d__7_TypeInfo);
  System_Object___ctor((Il2CppObject *)v1, 0);
  *(_DWORD *)(v1 + 16) = 0;
  return (System_Collections_IEnumerator_o *)v1;
}


bool GeoLocation__IsLocationEnabledByUser(const MethodInfo *method)
{
  return 0;
}


void GeoLocation_LocationDelegate___ctor(
        GeoLocation_LocationDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C32CE0(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C32E98(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C32D48(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A778DC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A77874;
}


System_IAsyncResult_o *GeoLocation_LocationDelegate__BeginInvoke(
        GeoLocation_LocationDelegate_o *this,
        int32_t result,
        UnityEngine_LocationInfo_o *locInfo,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v6; // x6
  __int64 v7; // x7
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  __int64 v15; // x5
  __int64 v16; // x6
  __int64 v17; // x7
  _QWORD v19[3]; // [xsp+0h] [xbp-60h] BYREF
  int32_t v20; // [xsp+1Ch] [xbp-44h] BYREF

  v20 = result;
  if ( (byte_4C370B6 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_LocationInfo_TypeInfo);
    sub_1C32C20(&GeoLocation_ResultState_TypeInfo);
    byte_4C370B6 = 1;
  }
  v19[2] = 0;
  v19[0] = j_il2cpp_value_box_0(GeoLocation_ResultState_TypeInfo, &v20, locInfo, callback, object, method, v6, v7);
  v19[1] = j_il2cpp_value_box_0(UnityEngine_LocationInfo_TypeInfo, locInfo, v12, v13, v14, v15, v16, v17);
  return (System_IAsyncResult_o *)sub_1C32BD4(this, v19, callback, object);
}


void GeoLocation_LocationDelegate__EndInvoke(
        GeoLocation_LocationDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C32BD8(result, 0, method);
}


void GeoLocation_LocationDelegate__Invoke(
        GeoLocation_LocationDelegate_o *this,
        int32_t result,
        UnityEngine_LocationInfo_o *locInfo,
        const MethodInfo *method)
{
  __int128 v4; // q0
  void (__fastcall *invoke_impl)(intptr_t, int32_t, _OWORD *, intptr_t); // x9
  intptr_t method_code; // x8
  _OWORD v7[2]; // [xsp+0h] [xbp-30h] BYREF

  v4 = *(_OWORD *)&locInfo->fields.m_Altitude;
  invoke_impl = (void (__fastcall *)(intptr_t, int32_t, _OWORD *, intptr_t))this->fields.invoke_impl;
  method_code = this->fields.method_code;
  v7[0] = *(_OWORD *)&locInfo->fields.m_Timestamp;
  v7[1] = v4;
  invoke_impl(method_code, result, v7, this->fields.method);
}


void GeoLocation__GetLocationCoroutine_d__7___ctor(
        GeoLocation__GetLocationCoroutine_d__7_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool GeoLocation__GetLocationCoroutine_d__7__MoveNext(
        GeoLocation__GetLocationCoroutine_d__7_o *this,
        const MethodInfo *method)
{
  if ( !this->fields.__1__state )
    this->fields.__1__state = -1;
  return 0;
}


Il2CppObject *GeoLocation__GetLocationCoroutine_d__7__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        GeoLocation__GetLocationCoroutine_d__7_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn GeoLocation__GetLocationCoroutine_d__7__System_Collections_IEnumerator_Reset(
        GeoLocation__GetLocationCoroutine_d__7_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_GeoLocation__GetLocationCoroutine_d__7_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
}


Il2CppObject *GeoLocation__GetLocationCoroutine_d__7__System_Collections_IEnumerator_get_Current(
        GeoLocation__GetLocationCoroutine_d__7_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void GeoLocation__GetLocationCoroutine_d__7__System_IDisposable_Dispose(
        GeoLocation__GetLocationCoroutine_d__7_o *this,
        const MethodInfo *method)
{
  ;
}