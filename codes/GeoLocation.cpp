void __fastcall GeoLocation___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49FBB1A & 1) == 0 )
  {
    sub_1B640C8(&GeoLocation_TypeInfo, v1);
    byte_49FBB1A = 1;
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
  UnityEngine_LocationInfo_o *result; // x0
  unsigned __int64 v4; // x23
  il2cpp_array_size_t v5; // w21
  float v6; // s14
  int i; // w27
  struct GeoLocation_StaticFields *v8; // x8
  __int64 v9; // x29
  il2cpp_array_size_t j; // w19
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
  bool v30; // nf
  struct UnityEngine_LocationInfo_array *v31; // x8
  char *v32; // x8
  __int128 v33; // q0

  if ( (byte_49FBB19 & 1) == 0 )
  {
    sub_1B640C8(&GeoLocation_TypeInfo, v2);
    byte_49FBB19 = 1;
  }
  result = (UnityEngine_LocationInfo_o *)GeoLocation_TypeInfo;
  v4 = 0LL;
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
        goto LABEL_40;
      if ( v4 >= infoArray->max_length )
        goto LABEL_41;
      latitude = UnityEngine_LocationInfo__get_latitude(&infoArray->m_Items[v4], 0LL);
      v14 = GeoLocation_TypeInfo->static_fields->infoArray;
      if ( !v14 )
        goto LABEL_40;
      if ( v4 >= v14->max_length )
        goto LABEL_41;
      v15 = latitude;
      longitude = UnityEngine_LocationInfo__get_longitude(&v14->m_Items[v4], 0LL);
      v17 = GeoLocation_TypeInfo->static_fields->infoArray;
      if ( !v17 )
        goto LABEL_40;
      if ( v4 >= v17->max_length )
        goto LABEL_41;
      v18 = longitude;
      altitude = UnityEngine_LocationInfo__get_altitude(&v17->m_Items[v4], 0LL);
      v20 = GeoLocation_TypeInfo->static_fields->infoArray;
      if ( !v20 )
        goto LABEL_40;
      if ( j >= v20->max_length )
        goto LABEL_41;
      v21 = altitude;
      v22 = UnityEngine_LocationInfo__get_latitude((UnityEngine_LocationInfo_o *)((char *)v20 + v9), 0LL);
      v23 = GeoLocation_TypeInfo->static_fields->infoArray;
      if ( !v23 )
        goto LABEL_40;
      if ( j >= v23->max_length )
        goto LABEL_41;
      v24 = v22;
      v25 = UnityEngine_LocationInfo__get_longitude((UnityEngine_LocationInfo_o *)((char *)v23 + v9), 0LL);
      v26 = GeoLocation_TypeInfo->static_fields->infoArray;
      if ( !v26 )
        goto LABEL_40;
      if ( j >= v26->max_length )
        goto LABEL_41;
      v27 = v25;
      v28 = UnityEngine_LocationInfo__get_altitude((UnityEngine_LocationInfo_o *)((char *)v26 + v9), 0LL);
      if ( !byte_49F710F )
      {
        sub_1B640C8(&System_Math_TypeInfo, v2);
        byte_49F710F = 1;
      }
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      result = (UnityEngine_LocationInfo_o *)GeoLocation_TypeInfo;
      v29 = sqrtf(
              (float)((float)((float)(v15 - v24) * (float)(v15 - v24))
                    + (float)((float)((float)(v18 + 360.0) - (float)(v27 + 360.0))
                            * (float)((float)(v18 + 360.0) - (float)(v27 + 360.0))))
            + (float)((float)(v21 - v28) * (float)(v21 - v28)));
      v30 = v29 < v6;
      if ( v29 < v6 )
        v6 = v29;
      if ( v30 )
        v5 = j;
      v9 += 32LL;
    }
    ++v4;
  }
  if ( !LODWORD(result[7].fields.m_Timestamp) )
  {
    j_il2cpp_runtime_class_init_0(result);
    v8 = GeoLocation_TypeInfo->static_fields;
  }
  v31 = v8->infoArray;
  if ( !v31 )
LABEL_40:
    sub_1B64324(result);
  if ( v5 >= v31->max_length )
LABEL_41:
    sub_1B6432C(result, v2);
  v32 = (char *)v31 + 32 * (int)v5;
  v33 = *((_OWORD *)v32 + 3);
  *(_OWORD *)&retstr->fields.m_Timestamp = *((_OWORD *)v32 + 2);
  *(_OWORD *)&retstr->fields.m_Altitude = v33;
  return result;
}


void __fastcall GeoLocation__GetLocation(
        GeoLocation_LocationDelegate_o *locDel,
        UnityEngine_MonoBehaviour_o *someMonoForCoroutine,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v5; // x1
  __int64 v6; // x1
  GeoLocation_c *v7; // x0
  struct GeoLocation_StaticFields *static_fields; // x0

  if ( (byte_49FBB17 & 1) == 0 )
  {
    sub_1B640C8(&GeoLocation_TypeInfo, someMonoForCoroutine);
    sub_1B640C8(&UnityEngine_LocationInfo___TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_49FBB17 = 1;
  }
  v7 = GeoLocation_TypeInfo;
  if ( !GeoLocation_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GeoLocation_TypeInfo);
    v7 = GeoLocation_TypeInfo;
  }
  static_fields = v7->static_fields;
  static_fields->callBack = locDel;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->callBack, (int32_t)locDel, (int32_t)method, v3);
  if ( !GeoLocation_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(GeoLocation_TypeInfo);
}


System_Collections_IEnumerator_o *__fastcall GeoLocation__GetLocationCoroutine(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x19

  if ( (byte_49FBB18 & 1) == 0 )
  {
    sub_1B640C8(&GeoLocation__GetLocationCoroutine_d__7_TypeInfo, v1);
    byte_49FBB18 = 1;
  }
  v3 = sub_1B64314(GeoLocation__GetLocationCoroutine_d__7_TypeInfo, v1, v2);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  return (System_Collections_IEnumerator_o *)v3;
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19AC1C8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19AC160;
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
  __int64 v12[3]; // [xsp+0h] [xbp-60h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-44h] BYREF

  v13 = result;
  if ( (byte_49FBB1B & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_LocationInfo_TypeInfo, *(_QWORD *)&result);
    sub_1B640C8(&GeoLocation_ResultState_TypeInfo, v10);
    byte_49FBB1B = 1;
  }
  v12[2] = 0LL;
  v12[0] = j_il2cpp_value_box_0(GeoLocation_ResultState_TypeInfo, &v13);
  v12[1] = j_il2cpp_value_box_0(UnityEngine_LocationInfo_TypeInfo, locInfo);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v12, callback, object);
}


void __fastcall GeoLocation_LocationDelegate__EndInvoke(
        GeoLocation_LocationDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_GeoLocation__GetLocationCoroutine_d__7_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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