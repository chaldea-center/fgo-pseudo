void GeoLocation___cctor(const MethodInfo *method)
{
  if ( (byte_4C269DE & 1) == 0 )
  {
    sub_1C2D490(&GeoLocation_TypeInfo);
    byte_4C269DE = 1;
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
  __int64 v3; // x2
  UnityEngine_LocationInfo_o *result; // x0
  unsigned __int64 v5; // x23
  unsigned int v6; // w21
  float v7; // s14
  int i; // w27
  struct GeoLocation_StaticFields *v9; // x8
  __int64 v10; // x29
  unsigned int j; // w19
  struct GeoLocation_StaticFields *static_fields; // x8
  struct UnityEngine_LocationInfo_array *infoArray; // x8
  float latitude; // s0
  struct UnityEngine_LocationInfo_array *v15; // x8
  float v16; // s8
  float longitude; // s0
  struct UnityEngine_LocationInfo_array *v18; // x8
  float v19; // s9
  float altitude; // s0
  struct UnityEngine_LocationInfo_array *v21; // x8
  float v22; // s10
  float v23; // s0
  struct UnityEngine_LocationInfo_array *v24; // x8
  float v25; // s11
  float v26; // s0
  struct UnityEngine_LocationInfo_array *v27; // x8
  float v28; // s12
  float v29; // s13
  float v30; // s0
  struct UnityEngine_LocationInfo_array *v31; // x8
  char *v32; // x8
  __int128 v33; // q0

  if ( (byte_4C269DD & 1) == 0 )
  {
    sub_1C2D490(&GeoLocation_TypeInfo);
    byte_4C269DD = 1;
  }
  result = (UnityEngine_LocationInfo_o *)GeoLocation_TypeInfo;
  v5 = 0;
  v6 = 0;
  v7 = 180.0;
  for ( i = 1; ; ++i )
  {
    if ( !LODWORD(result[7].fields.m_Timestamp) )
    {
      j_il2cpp_runtime_class_init_0(result);
      result = (UnityEngine_LocationInfo_o *)GeoLocation_TypeInfo;
    }
    v9 = *(struct GeoLocation_StaticFields **)&result[5].fields.m_VerticalAccuracy;
    if ( (__int64)v5 >= v9->TEST_COUNT )
      break;
    v10 = 32LL * i + 32;
    for ( j = v5 + 1; ; ++j )
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
      if ( v5 >= LODWORD(infoArray->max_length) )
        goto LABEL_39;
      latitude = UnityEngine_LocationInfo__get_latitude(&infoArray->m_Items[v5], 0);
      v15 = GeoLocation_TypeInfo->static_fields->infoArray;
      if ( !v15 )
        goto LABEL_38;
      if ( v5 >= LODWORD(v15->max_length) )
        goto LABEL_39;
      v16 = latitude;
      longitude = UnityEngine_LocationInfo__get_longitude(&v15->m_Items[v5], 0);
      v18 = GeoLocation_TypeInfo->static_fields->infoArray;
      if ( !v18 )
        goto LABEL_38;
      if ( v5 >= LODWORD(v18->max_length) )
        goto LABEL_39;
      v19 = longitude;
      altitude = UnityEngine_LocationInfo__get_altitude(&v18->m_Items[v5], 0);
      v21 = GeoLocation_TypeInfo->static_fields->infoArray;
      if ( !v21 )
        goto LABEL_38;
      if ( j >= LODWORD(v21->max_length) )
        goto LABEL_39;
      v22 = altitude;
      v23 = UnityEngine_LocationInfo__get_latitude((UnityEngine_LocationInfo_o *)((char *)v21 + v10), 0);
      v24 = GeoLocation_TypeInfo->static_fields->infoArray;
      if ( !v24 )
        goto LABEL_38;
      if ( j >= LODWORD(v24->max_length) )
        goto LABEL_39;
      v25 = v23;
      v26 = UnityEngine_LocationInfo__get_longitude((UnityEngine_LocationInfo_o *)((char *)v24 + v10), 0);
      v27 = GeoLocation_TypeInfo->static_fields->infoArray;
      if ( !v27 )
        goto LABEL_38;
      if ( j >= LODWORD(v27->max_length) )
        goto LABEL_39;
      v28 = v26;
      v29 = UnityEngine_LocationInfo__get_altitude((UnityEngine_LocationInfo_o *)((char *)v27 + v10), 0);
      if ( !byte_4C20D9F )
      {
        sub_1C2D490(&System_Math_TypeInfo);
        byte_4C20D9F = 1;
      }
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      result = (UnityEngine_LocationInfo_o *)GeoLocation_TypeInfo;
      v30 = sqrtf(
              (float)((float)((float)(v16 - v25) * (float)(v16 - v25))
                    + (float)((float)((float)(v19 + 360.0) - (float)(v28 + 360.0))
                            * (float)((float)(v19 + 360.0) - (float)(v28 + 360.0))))
            + (float)((float)(v22 - v29) * (float)(v22 - v29)));
      if ( v30 < v7 )
      {
        v7 = v30;
        v6 = j;
      }
      v10 += 32;
    }
    ++v5;
  }
  if ( !LODWORD(result[7].fields.m_Timestamp) )
  {
    j_il2cpp_runtime_class_init_0(result);
    v9 = GeoLocation_TypeInfo->static_fields;
  }
  v31 = v9->infoArray;
  if ( !v31 )
LABEL_38:
    sub_1C2D6EC(result, v2);
  if ( v6 >= LODWORD(v31->max_length) )
LABEL_39:
    sub_1C2D6F4(result, v2, v3);
  v32 = (char *)v31 + 32 * (int)v6;
  v33 = *((_OWORD *)v32 + 3);
  *(_OWORD *)&retstr->fields.m_Timestamp = *((_OWORD *)v32 + 2);
  *(_OWORD *)&retstr->fields.m_Altitude = v33;
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

  if ( (byte_4C269DB & 1) == 0 )
  {
    sub_1C2D490(&GeoLocation_TypeInfo);
    sub_1C2D490(&UnityEngine_LocationInfo___TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C269DB = 1;
  }
  v5 = GeoLocation_TypeInfo;
  if ( !GeoLocation_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GeoLocation_TypeInfo);
    v5 = GeoLocation_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->callBack = locDel;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->callBack, (int32_t)locDel, (int32_t)method, v3);
  if ( !GeoLocation_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(GeoLocation_TypeInfo);
}


System_Collections_IEnumerator_o *GeoLocation__GetLocationCoroutine(const MethodInfo *method)
{
  __int64 v1; // x19

  if ( (byte_4C269DC & 1) == 0 )
  {
    sub_1C2D490(&GeoLocation__GetLocationCoroutine_d__7_TypeInfo);
    byte_4C269DC = 1;
  }
  v1 = sub_1C2D6DC(GeoLocation__GetLocationCoroutine_d__7_TypeInfo);
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A721B4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A7214C;
}


System_IAsyncResult_o *GeoLocation_LocationDelegate__BeginInvoke(
        GeoLocation_LocationDelegate_o *this,
        int32_t result,
        UnityEngine_LocationInfo_o *locInfo,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  _QWORD v14[3]; // [xsp+0h] [xbp-60h] BYREF
  int32_t v15; // [xsp+1Ch] [xbp-44h] BYREF

  v15 = result;
  if ( (byte_4C269DF & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_LocationInfo_TypeInfo);
    sub_1C2D490(&GeoLocation_ResultState_TypeInfo);
    byte_4C269DF = 1;
  }
  v14[2] = 0;
  v14[0] = j_il2cpp_value_box_0(GeoLocation_ResultState_TypeInfo, &v15, locInfo, callback, object);
  v14[1] = j_il2cpp_value_box_0(UnityEngine_LocationInfo_TypeInfo, locInfo, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v14, callback, object);
}


void GeoLocation_LocationDelegate__EndInvoke(
        GeoLocation_LocationDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
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

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_GeoLocation__GetLocationCoroutine_d__7_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
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