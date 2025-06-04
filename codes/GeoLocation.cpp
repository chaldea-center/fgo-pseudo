void __fastcall GeoLocation___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B01752 & 1) == 0 )
  {
    sub_1BC3008(&GeoLocation_TypeInfo, v1);
    byte_4B01752 = 1;
  }
  GeoLocation_TypeInfo->static_fields->TEST_COUNT = 3;
}


void __fastcall GeoLocation___ctor(GeoLocation_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall GeoLocation__CallDelegate(int32_t resultStat, const MethodInfo *method)
{
  ;
}


UnityEngine_LocationInfo_o *__fastcall GeoLocation__GetAppropriateOne(
        UnityEngine_LocationInfo_o *retstr,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x2
  UnityEngine_LocationInfo_o *result; // x0
  unsigned __int64 v5; // x23
  il2cpp_array_size_t v6; // w21
  float v7; // s14
  int i; // w27
  struct GeoLocation_StaticFields *v9; // x8
  __int64 v10; // x29
  il2cpp_array_size_t j; // w19
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
  bool v31; // nf
  struct UnityEngine_LocationInfo_array *v32; // x8
  char *v33; // x8
  __int128 v34; // q0

  if ( (byte_4B01751 & 1) == 0 )
  {
    sub_1BC3008(&GeoLocation_TypeInfo, v2);
    byte_4B01751 = 1;
  }
  result = (UnityEngine_LocationInfo_o *)GeoLocation_TypeInfo;
  v5 = 0LL;
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
        goto LABEL_40;
      if ( v5 >= infoArray->max_length )
        goto LABEL_41;
      latitude = UnityEngine_LocationInfo__get_latitude(&infoArray->m_Items[v5], 0LL);
      v15 = GeoLocation_TypeInfo->static_fields->infoArray;
      if ( !v15 )
        goto LABEL_40;
      if ( v5 >= v15->max_length )
        goto LABEL_41;
      v16 = latitude;
      longitude = UnityEngine_LocationInfo__get_longitude(&v15->m_Items[v5], 0LL);
      v18 = GeoLocation_TypeInfo->static_fields->infoArray;
      if ( !v18 )
        goto LABEL_40;
      if ( v5 >= v18->max_length )
        goto LABEL_41;
      v19 = longitude;
      altitude = UnityEngine_LocationInfo__get_altitude(&v18->m_Items[v5], 0LL);
      v21 = GeoLocation_TypeInfo->static_fields->infoArray;
      if ( !v21 )
        goto LABEL_40;
      if ( j >= v21->max_length )
        goto LABEL_41;
      v22 = altitude;
      v23 = UnityEngine_LocationInfo__get_latitude((UnityEngine_LocationInfo_o *)((char *)v21 + v10), 0LL);
      v24 = GeoLocation_TypeInfo->static_fields->infoArray;
      if ( !v24 )
        goto LABEL_40;
      if ( j >= v24->max_length )
        goto LABEL_41;
      v25 = v23;
      v26 = UnityEngine_LocationInfo__get_longitude((UnityEngine_LocationInfo_o *)((char *)v24 + v10), 0LL);
      v27 = GeoLocation_TypeInfo->static_fields->infoArray;
      if ( !v27 )
        goto LABEL_40;
      if ( j >= v27->max_length )
        goto LABEL_41;
      v28 = v26;
      v29 = UnityEngine_LocationInfo__get_altitude((UnityEngine_LocationInfo_o *)((char *)v27 + v10), 0LL);
      if ( !byte_4AFBDAF )
      {
        sub_1BC3008(&System_Math_TypeInfo, v2);
        byte_4AFBDAF = 1;
      }
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      result = (UnityEngine_LocationInfo_o *)GeoLocation_TypeInfo;
      v30 = sqrtf(
              (float)((float)((float)(v16 - v25) * (float)(v16 - v25))
                    + (float)((float)((float)(v19 + 360.0) - (float)(v28 + 360.0))
                            * (float)((float)(v19 + 360.0) - (float)(v28 + 360.0))))
            + (float)((float)(v22 - v29) * (float)(v22 - v29)));
      v31 = v30 < v7;
      if ( v30 < v7 )
        v7 = v30;
      if ( v31 )
        v6 = j;
      v10 += 32LL;
    }
    ++v5;
  }
  if ( !LODWORD(result[7].fields.m_Timestamp) )
  {
    j_il2cpp_runtime_class_init_0(result);
    v9 = GeoLocation_TypeInfo->static_fields;
  }
  v32 = v9->infoArray;
  if ( !v32 )
LABEL_40:
    sub_1BC3264(result, v2);
  if ( v6 >= v32->max_length )
LABEL_41:
    sub_1BC326C(result, v2, v3);
  v33 = (char *)v32 + 32 * (int)v6;
  v34 = *((_OWORD *)v33 + 3);
  *(_OWORD *)&retstr->fields.m_Timestamp = *((_OWORD *)v33 + 2);
  *(_OWORD *)&retstr->fields.m_Altitude = v34;
  return result;
}


void __fastcall GeoLocation__GetLocation(
        GeoLocation_LocationDelegate_o *locDel,
        UnityEngine_MonoBehaviour_o *someMonoForCoroutine,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x1
  GeoLocation_c *v7; // x0
  struct GeoLocation_StaticFields *static_fields; // x0

  if ( (byte_4B0174F & 1) == 0 )
  {
    sub_1BC3008(&GeoLocation_TypeInfo, someMonoForCoroutine);
    sub_1BC3008(&UnityEngine_LocationInfo___TypeInfo, v5);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4B0174F = 1;
  }
  v7 = GeoLocation_TypeInfo;
  if ( !GeoLocation_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GeoLocation_TypeInfo);
    v7 = GeoLocation_TypeInfo;
  }
  static_fields = v7->static_fields;
  static_fields->callBack = locDel;
  sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->callBack, (int32_t)locDel, (int32_t)method, v3);
  if ( !GeoLocation_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(GeoLocation_TypeInfo);
}


System_Collections_IEnumerator_o *__fastcall GeoLocation__GetLocationCoroutine(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x19

  if ( (byte_4B01750 & 1) == 0 )
  {
    sub_1BC3008(&GeoLocation__GetLocationCoroutine_d__7_TypeInfo, v1);
    byte_4B01750 = 1;
  }
  v2 = sub_1BC3254(GeoLocation__GetLocationCoroutine_d__7_TypeInfo);
  System_Object___ctor((Il2CppObject *)v2, 0LL);
  *(_DWORD *)(v2 + 16) = 0;
  return (System_Collections_IEnumerator_o *)v2;
}


bool __fastcall GeoLocation__IsLocationEnabledByUser(const MethodInfo *method)
{
  return 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GeoLocation_LocationDelegate___ctor(
        GeoLocation_LocationDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BC30C8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BC3280(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BC3130(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A0DA8C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0DA24;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall GeoLocation_LocationDelegate__BeginInvoke(
        GeoLocation_LocationDelegate_o *this,
        int32_t result,
        UnityEngine_LocationInfo_o *locInfo,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v15[3]; // [xsp+0h] [xbp-60h] BYREF
  int32_t v16; // [xsp+1Ch] [xbp-44h] BYREF

  v16 = result;
  if ( (byte_4B01753 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_LocationInfo_TypeInfo, *(_QWORD *)&result);
    sub_1BC3008(&GeoLocation_ResultState_TypeInfo, v10);
    byte_4B01753 = 1;
  }
  v15[2] = 0LL;
  v15[0] = j_il2cpp_value_box_0(GeoLocation_ResultState_TypeInfo, &v16, locInfo, callback, object);
  v15[1] = j_il2cpp_value_box_0(UnityEngine_LocationInfo_TypeInfo, locInfo, v11, v12, v13);
  return (System_IAsyncResult_o *)sub_1BC2FBC(this, v15, callback, object);
}


void __fastcall GeoLocation_LocationDelegate__EndInvoke(
        GeoLocation_LocationDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BC2FC0(result, 0LL, method);
}


void __fastcall GeoLocation_LocationDelegate__Invoke(
        GeoLocation_LocationDelegate_o *this,
        int32_t result,
        UnityEngine_LocationInfo_o *locInfo,
        const MethodInfo *method)
{
  __int128 v4; // q0
  Il2CppObject *m_target; // x9
  struct System_Reflection_MethodInfo_o *original_method_info; // x8
  __int128 v7[2]; // [xsp+0h] [xbp-30h] BYREF

  v4 = *(_OWORD *)&locInfo->fields.m_Altitude;
  m_target = this->fields.m_target;
  original_method_info = this->fields.original_method_info;
  v7[0] = *(_OWORD *)&locInfo->fields.m_Timestamp;
  v7[1] = v4;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, __int128 *, _QWORD))m_target)(
    original_method_info,
    result,
    v7,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall GeoLocation__GetLocationCoroutine_d__7___ctor(
        GeoLocation__GetLocationCoroutine_d__7_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall GeoLocation__GetLocationCoroutine_d__7__MoveNext(
        GeoLocation__GetLocationCoroutine_d__7_o *this,
        const MethodInfo *method)
{
  if ( !this->fields.__1__state )
    this->fields.__1__state = -1;
  return 0;
}


Il2CppObject *__fastcall GeoLocation__GetLocationCoroutine_d__7__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        GeoLocation__GetLocationCoroutine_d__7_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn GeoLocation__GetLocationCoroutine_d__7__System_Collections_IEnumerator_Reset(
        GeoLocation__GetLocationCoroutine_d__7_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BC301C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BC3254(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BC301C(&Method_GeoLocation__GetLocationCoroutine_d__7_System_Collections_IEnumerator_Reset__);
  sub_1BC3130(v3, v4);
}


Il2CppObject *__fastcall GeoLocation__GetLocationCoroutine_d__7__System_Collections_IEnumerator_get_Current(
        GeoLocation__GetLocationCoroutine_d__7_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall GeoLocation__GetLocationCoroutine_d__7__System_IDisposable_Dispose(
        GeoLocation__GetLocationCoroutine_d__7_o *this,
        const MethodInfo *method)
{
  ;
}