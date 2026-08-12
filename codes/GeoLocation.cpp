void GeoLocation___cctor(const MethodInfo *method)
{
  if ( (byte_596FEC2 & 1) == 0 )
  {
    sub_2213A60(&GeoLocation_TypeInfo);
    byte_596FEC2 = 1;
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
  unsigned __int64 v4; // x24
  unsigned int v5; // w21
  float v6; // s14
  int i; // w19
  struct GeoLocation_StaticFields *v8; // x8
  __int64 v9; // x29
  __int64 v10; // x27
  __int64 j; // x19
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
  unsigned int v22; // w28
  float v23; // s10
  float v24; // s0
  struct UnityEngine_LocationInfo_array *v25; // x8
  float v26; // s11
  float v27; // s0
  struct UnityEngine_LocationInfo_array *v28; // x8
  float v29; // s12
  float v30; // s13
  float v31; // s0
  struct UnityEngine_LocationInfo_array *v32; // x8
  char *v33; // x8
  __int128 v34; // q1

  if ( (byte_596FEC1 & 1) == 0 )
  {
    sub_2213A60(&GeoLocation_TypeInfo);
    byte_596FEC1 = 1;
  }
  result = (UnityEngine_LocationInfo_o *)GeoLocation_TypeInfo;
  v4 = 0;
  v5 = 0;
  v6 = 180.0;
  for ( i = 1; ; i = v9 + 1 )
  {
    if ( !HIDWORD(result[7].fields.m_Timestamp) )
    {
      j_il2cpp_runtime_class_init_0(result, v2);
      result = (UnityEngine_LocationInfo_o *)GeoLocation_TypeInfo;
    }
    v8 = *(struct GeoLocation_StaticFields **)&result[5].fields.m_VerticalAccuracy;
    if ( (__int64)v4 >= v8->TEST_COUNT )
      break;
    v9 = i;
    v10 = 0;
    for ( j = 32LL * i + 32; ; j += 32 )
    {
      if ( !HIDWORD(result[7].fields.m_Timestamp) )
      {
        j_il2cpp_runtime_class_init_0(result, v2);
        result = (UnityEngine_LocationInfo_o *)GeoLocation_TypeInfo;
      }
      static_fields = *(struct GeoLocation_StaticFields **)&result[5].fields.m_VerticalAccuracy;
      if ( v9 + v10 >= static_fields->TEST_COUNT )
        break;
      if ( !HIDWORD(result[7].fields.m_Timestamp) )
      {
        j_il2cpp_runtime_class_init_0(result, v2);
        static_fields = GeoLocation_TypeInfo->static_fields;
      }
      infoArray = static_fields->infoArray;
      if ( !infoArray )
        goto LABEL_38;
      if ( v4 >= LODWORD(infoArray->max_length) )
        goto LABEL_39;
      latitude = UnityEngine_LocationInfo__get_latitude(&infoArray->m_Items[v4], 0);
      v15 = GeoLocation_TypeInfo->static_fields->infoArray;
      if ( !v15 )
        goto LABEL_38;
      if ( v4 >= LODWORD(v15->max_length) )
        goto LABEL_39;
      v16 = latitude;
      longitude = UnityEngine_LocationInfo__get_longitude(&v15->m_Items[v4], 0);
      v18 = GeoLocation_TypeInfo->static_fields->infoArray;
      if ( !v18 )
        goto LABEL_38;
      if ( v4 >= LODWORD(v18->max_length) )
        goto LABEL_39;
      v19 = longitude;
      altitude = UnityEngine_LocationInfo__get_altitude(&v18->m_Items[v4], 0);
      v21 = GeoLocation_TypeInfo->static_fields->infoArray;
      if ( !v21 )
        goto LABEL_38;
      v22 = v4 + v10 + 1;
      if ( v22 >= LODWORD(v21->max_length) )
        goto LABEL_39;
      v23 = altitude;
      v24 = UnityEngine_LocationInfo__get_latitude((UnityEngine_LocationInfo_o *)((char *)v21 + j), 0);
      v25 = GeoLocation_TypeInfo->static_fields->infoArray;
      if ( !v25 )
        goto LABEL_38;
      if ( v22 >= LODWORD(v25->max_length) )
        goto LABEL_39;
      v26 = v24;
      v27 = UnityEngine_LocationInfo__get_longitude((UnityEngine_LocationInfo_o *)((char *)v25 + j), 0);
      v28 = GeoLocation_TypeInfo->static_fields->infoArray;
      if ( !v28 )
        goto LABEL_38;
      if ( v22 >= LODWORD(v28->max_length) )
        goto LABEL_39;
      v29 = v27;
      v30 = UnityEngine_LocationInfo__get_altitude((UnityEngine_LocationInfo_o *)((char *)v28 + j), 0);
      if ( !byte_5969ADE )
      {
        sub_2213A60(&System_Math_TypeInfo);
        byte_5969ADE = 1;
      }
      if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v2);
      result = (UnityEngine_LocationInfo_o *)GeoLocation_TypeInfo;
      ++v10;
      v31 = sqrtf(
              (float)((float)((float)(v16 - v26) * (float)(v16 - v26))
                    + (float)((float)((float)(v19 + 360.0) - (float)(v29 + 360.0))
                            * (float)((float)(v19 + 360.0) - (float)(v29 + 360.0))))
            + (float)((float)(v23 - v30) * (float)(v23 - v30)));
      if ( v31 < v6 )
      {
        v6 = v31;
        v5 = v22;
      }
    }
    ++v4;
  }
  if ( !HIDWORD(result[7].fields.m_Timestamp) )
  {
    j_il2cpp_runtime_class_init_0(result, v2);
    v8 = GeoLocation_TypeInfo->static_fields;
  }
  v32 = v8->infoArray;
  if ( !v32 )
LABEL_38:
    sub_2213CDC(result, v2);
  if ( v5 >= LODWORD(v32->max_length) )
LABEL_39:
    sub_2213CE4(result);
  v33 = (char *)v32 + 32 * (int)v5;
  v34 = *((_OWORD *)v33 + 3);
  *(_OWORD *)&retstr->fields.m_Timestamp = *((_OWORD *)v33 + 2);
  *(_OWORD *)&retstr->fields.m_Altitude = v34;
  return result;
}


void GeoLocation__GetLocation(
        GeoLocation_LocationDelegate_o *locDel,
        UnityEngine_MonoBehaviour_o *someMonoForCoroutine,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  GeoLocation_c *v9; // x0
  struct GeoLocation_StaticFields *static_fields; // x0
  __int64 v11; // x1

  if ( (byte_596FEBF & 1) == 0 )
  {
    sub_2213A60(&GeoLocation_TypeInfo);
    sub_2213A60(&UnityEngine_LocationInfo___TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596FEBF = 1;
  }
  v9 = GeoLocation_TypeInfo;
  if ( !*(&GeoLocation_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(GeoLocation_TypeInfo, someMonoForCoroutine);
    v9 = GeoLocation_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->callBack = locDel;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->callBack,
    (int32_t)locDel,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !*(&GeoLocation_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(GeoLocation_TypeInfo, v11);
}


System_Collections_IEnumerator_o *GeoLocation__GetLocationCoroutine(const MethodInfo *method)
{
  __int64 v1; // x19

  if ( (byte_596FEC0 & 1) == 0 )
  {
    sub_2213A60(&GeoLocation__GetLocationCoroutine_d__7_TypeInfo);
    byte_596FEC0 = 1;
  }
  v1 = sub_2213CCC(GeoLocation__GetLocationCoroutine_d__7_TypeInfo);
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
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_200D618;
LABEL_6:
  this->fields.extra_arg = (intptr_t)&loc_200D5B0;
}


System_IAsyncResult_o *GeoLocation_LocationDelegate__BeginInvoke(
        GeoLocation_LocationDelegate_o *this,
        int32_t result,
        UnityEngine_LocationInfo_o *locInfo,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v11[3]; // [xsp+0h] [xbp-60h] BYREF
  int32_t v12; // [xsp+1Ch] [xbp-44h] BYREF

  v12 = result;
  if ( (byte_596FEC3 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_LocationInfo_TypeInfo);
    sub_2213A60(&GeoLocation_ResultState_TypeInfo);
    byte_596FEC3 = 1;
  }
  v11[2] = 0;
  v11[0] = j_il2cpp_value_box_0(GeoLocation_ResultState_TypeInfo, &v12);
  v11[1] = j_il2cpp_value_box_0(UnityEngine_LocationInfo_TypeInfo, locInfo);
  return sub_2213A14(this, v11, callback, object);
}


void GeoLocation_LocationDelegate__EndInvoke(
        GeoLocation_LocationDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void GeoLocation_LocationDelegate__Invoke(
        GeoLocation_LocationDelegate_o *this,
        int32_t result,
        UnityEngine_LocationInfo_o *locInfo,
        const MethodInfo *method)
{
  __int128 v4; // q1
  void (__fastcall *invoke_impl)(intptr_t, int32_t, _OWORD *, intptr_t); // x9
  intptr_t v6; // x3
  intptr_t method_code; // x0
  _OWORD v8[2]; // [xsp+0h] [xbp-30h] BYREF

  v4 = *(_OWORD *)&locInfo->fields.m_Altitude;
  invoke_impl = (void (__fastcall *)(intptr_t, int32_t, _OWORD *, intptr_t))this->fields.invoke_impl;
  v6 = this->fields.method;
  method_code = this->fields.method_code;
  v8[0] = *(_OWORD *)&locInfo->fields.m_Timestamp;
  v8[1] = v4;
  invoke_impl(method_code, result, v8, v6);
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_GeoLocation__GetLocationCoroutine_d__7_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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