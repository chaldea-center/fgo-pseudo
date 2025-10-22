void GeoLocation___cctor(const MethodInfo *method)
{
  if ( (byte_4C5644E & 1) == 0 )
  {
    sub_1C3E564(&GeoLocation_TypeInfo);
    byte_4C5644E = 1;
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
  __int64 v2; // x1
  UnityEngine_LocationInfo_o *result; // x0
  unsigned __int64 v4; // x23
  unsigned int v5; // w21
  float v6; // s14
  int i; // w27
  struct GeoLocation_StaticFields *v8; // x8
  __int64 v9; // x29
  unsigned int j; // w19
  struct GeoLocation_StaticFields *static_fields; // x8
  struct UnityEngine_LocationInfo_array *infoArray; // x8
  float latitude; // s0
  struct UnityEngine_LocationInfo_array *v14; // x8
  float v15; // s8
  float longitude; // s0
  struct UnityEngine_LocationInfo_array *v17; // x8
  float v18; // s9
  float altitude; // s0
  struct UnityEngine_LocationInfo_array *v20; // x8
  float v21; // s10
  float v22; // s0
  struct UnityEngine_LocationInfo_array *v23; // x8
  float v24; // s11
  float v25; // s0
  struct UnityEngine_LocationInfo_array *v26; // x8
  float v27; // s12
  float v28; // s13
  float v29; // s0
  struct UnityEngine_LocationInfo_array *v30; // x8
  char *v31; // x8
  __int128 v32; // q0

  if ( (byte_4C5644D & 1) == 0 )
  {
    sub_1C3E564(&GeoLocation_TypeInfo);
    byte_4C5644D = 1;
  }
  result = (UnityEngine_LocationInfo_o *)GeoLocation_TypeInfo;
  v4 = 0;
  v5 = 0;
  v6 = 180.0;
  for ( i = 1; ; ++i )
  {
    if ( !LODWORD(result[7].fields.m_Timestamp) )
    {
      j_il2cpp_runtime_class_init_0(result);
      result = (UnityEngine_LocationInfo_o *)GeoLocation_TypeInfo;
    }
    v8 = *(struct GeoLocation_StaticFields **)&result[5].fields.m_VerticalAccuracy;
    if ( (__int64)v4 >= v8->TEST_COUNT )
      break;
    v9 = 32LL * i + 32;
    for ( j = v4 + 1; ; ++j )
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
      if ( v4 >= LODWORD(infoArray->max_length) )
        goto LABEL_39;
      latitude = UnityEngine_LocationInfo__get_latitude(&infoArray->m_Items[v4], 0);
      v14 = GeoLocation_TypeInfo->static_fields->infoArray;
      if ( !v14 )
        goto LABEL_38;
      if ( v4 >= LODWORD(v14->max_length) )
        goto LABEL_39;
      v15 = latitude;
      longitude = UnityEngine_LocationInfo__get_longitude(&v14->m_Items[v4], 0);
      v17 = GeoLocation_TypeInfo->static_fields->infoArray;
      if ( !v17 )
        goto LABEL_38;
      if ( v4 >= LODWORD(v17->max_length) )
        goto LABEL_39;
      v18 = longitude;
      altitude = UnityEngine_LocationInfo__get_altitude(&v17->m_Items[v4], 0);
      v20 = GeoLocation_TypeInfo->static_fields->infoArray;
      if ( !v20 )
        goto LABEL_38;
      if ( j >= LODWORD(v20->max_length) )
        goto LABEL_39;
      v21 = altitude;
      v22 = UnityEngine_LocationInfo__get_latitude((UnityEngine_LocationInfo_o *)((char *)v20 + v9), 0);
      v23 = GeoLocation_TypeInfo->static_fields->infoArray;
      if ( !v23 )
        goto LABEL_38;
      if ( j >= LODWORD(v23->max_length) )
        goto LABEL_39;
      v24 = v22;
      v25 = UnityEngine_LocationInfo__get_longitude((UnityEngine_LocationInfo_o *)((char *)v23 + v9), 0);
      v26 = GeoLocation_TypeInfo->static_fields->infoArray;
      if ( !v26 )
        goto LABEL_38;
      if ( j >= LODWORD(v26->max_length) )
        goto LABEL_39;
      v27 = v25;
      v28 = UnityEngine_LocationInfo__get_altitude((UnityEngine_LocationInfo_o *)((char *)v26 + v9), 0);
      if ( !byte_4C5069F )
      {
        sub_1C3E564(&System_Math_TypeInfo);
        byte_4C5069F = 1;
      }
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      result = (UnityEngine_LocationInfo_o *)GeoLocation_TypeInfo;
      v29 = sqrtf(
              (float)((float)((float)(v15 - v24) * (float)(v15 - v24))
                    + (float)((float)((float)(v18 + 360.0) - (float)(v27 + 360.0))
                            * (float)((float)(v18 + 360.0) - (float)(v27 + 360.0))))
            + (float)((float)(v21 - v28) * (float)(v21 - v28)));
      if ( v29 < v6 )
      {
        v6 = v29;
        v5 = j;
      }
      v9 += 32;
    }
    ++v4;
  }
  if ( !LODWORD(result[7].fields.m_Timestamp) )
  {
    j_il2cpp_runtime_class_init_0(result);
    v8 = GeoLocation_TypeInfo->static_fields;
  }
  v30 = v8->infoArray;
  if ( !v30 )
LABEL_38:
    sub_1C3E7C0(result, v2);
  if ( v5 >= LODWORD(v30->max_length) )
LABEL_39:
    sub_1C3E7C8(result, v2);
  v31 = (char *)v30 + 32 * (int)v5;
  v32 = *((_OWORD *)v31 + 3);
  *(_OWORD *)&retstr->fields.m_Timestamp = *((_OWORD *)v31 + 2);
  *(_OWORD *)&retstr->fields.m_Altitude = v32;
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

  if ( (byte_4C5644B & 1) == 0 )
  {
    sub_1C3E564(&GeoLocation_TypeInfo);
    sub_1C3E564(&UnityEngine_LocationInfo___TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C5644B = 1;
  }
  v5 = GeoLocation_TypeInfo;
  if ( !GeoLocation_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GeoLocation_TypeInfo);
    v5 = GeoLocation_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->callBack = locDel;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->callBack, (int32_t)locDel, (int32_t)method, v3);
  if ( !GeoLocation_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(GeoLocation_TypeInfo);
}


System_Collections_IEnumerator_o *GeoLocation__GetLocationCoroutine(const MethodInfo *method)
{
  __int64 v1; // x19

  if ( (byte_4C5644C & 1) == 0 )
  {
    sub_1C3E564(&GeoLocation__GetLocationCoroutine_d__7_TypeInfo);
    byte_4C5644C = 1;
  }
  v1 = sub_1C3E7B0(GeoLocation__GetLocationCoroutine_d__7_TypeInfo);
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
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C3E624(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C3E7DC(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3E68C(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A82FB4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A82F4C;
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
  if ( (byte_4C5644F & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_LocationInfo_TypeInfo);
    sub_1C3E564(&GeoLocation_ResultState_TypeInfo);
    byte_4C5644F = 1;
  }
  v19[2] = 0;
  v19[0] = j_il2cpp_value_box_0(GeoLocation_ResultState_TypeInfo, &v20, locInfo, callback, object, method, v6, v7);
  v19[1] = j_il2cpp_value_box_0(UnityEngine_LocationInfo_TypeInfo, locInfo, v12, v13, v14, v15, v16, v17);
  return (System_IAsyncResult_o *)sub_1C3E518(this, v19, callback, object);
}


void GeoLocation_LocationDelegate__EndInvoke(
        GeoLocation_LocationDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3E51C(result, 0, method);
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

  v2 = sub_1C3E578(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3E7B0(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3E578(&Method_GeoLocation__GetLocationCoroutine_d__7_System_Collections_IEnumerator_Reset__);
  sub_1C3E68C(v3, v4);
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