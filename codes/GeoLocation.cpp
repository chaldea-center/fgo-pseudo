void __fastcall GeoLocation___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418B048 & 1) == 0 )
  {
    sub_B2C35C(&GeoLocation_TypeInfo, v1);
    byte_418B048 = 1;
  }
  GeoLocation_TypeInfo->static_fields->TIME_OUT = 20;
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
  float v4; // s13
  UnityEngine_LocationInfo_o *result; // x0
  unsigned __int64 v6; // x22
  il2cpp_array_size_t v7; // w20
  int i; // w23
  __int64 v9; // x25
  il2cpp_array_size_t j; // w26
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
  float v28; // s0
  bool v29; // nf
  struct GeoLocation_StaticFields *v30; // x8
  struct UnityEngine_LocationInfo_array *v31; // x8
  char *v32; // x8
  __int128 v33; // q1
  __int64 v34; // x0
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_418B047 & 1) == 0 )
  {
    sub_B2C35C(&GeoLocation_TypeInfo, v2);
    byte_418B047 = 1;
  }
  v4 = 180.0;
  result = (UnityEngine_LocationInfo_o *)GeoLocation_TypeInfo;
  v6 = 0LL;
  v7 = 0;
  for ( i = 1; ; ++i )
  {
    if ( (HIBYTE(result[9].fields.m_Altitude) & 4) != 0 && !LODWORD(result[7].fields.m_Timestamp) )
    {
      j_il2cpp_runtime_class_init_0(result);
      result = (UnityEngine_LocationInfo_o *)GeoLocation_TypeInfo;
    }
    v30 = *(struct GeoLocation_StaticFields **)&result[5].fields.m_VerticalAccuracy;
    if ( (__int64)v6 >= v30->TEST_COUNT )
      break;
    v9 = 32LL * i + 32;
    for ( j = v6 + 1; ; ++j )
    {
      if ( (HIBYTE(result[9].fields.m_Altitude) & 4) != 0 && !LODWORD(result[7].fields.m_Timestamp) )
      {
        j_il2cpp_runtime_class_init_0(result);
        result = (UnityEngine_LocationInfo_o *)GeoLocation_TypeInfo;
      }
      static_fields = *(struct GeoLocation_StaticFields **)&result[5].fields.m_VerticalAccuracy;
      if ( (signed int)j >= static_fields->TEST_COUNT )
        break;
      if ( (HIBYTE(result[9].fields.m_Altitude) & 4) != 0 && !LODWORD(result[7].fields.m_Timestamp) )
      {
        j_il2cpp_runtime_class_init_0(result);
        static_fields = GeoLocation_TypeInfo->static_fields;
      }
      infoArray = static_fields->infoArray;
      if ( !infoArray )
        goto LABEL_40;
      if ( v6 >= infoArray->max_length )
        goto LABEL_41;
      latitude = UnityEngine_LocationInfo__get_latitude(&infoArray->m_Items[v6], 0LL);
      v14 = GeoLocation_TypeInfo->static_fields->infoArray;
      if ( !v14 )
        goto LABEL_40;
      if ( v6 >= v14->max_length )
        goto LABEL_41;
      v15 = latitude;
      longitude = UnityEngine_LocationInfo__get_longitude(&v14->m_Items[v6], 0LL);
      v17 = GeoLocation_TypeInfo->static_fields->infoArray;
      if ( !v17 )
        goto LABEL_40;
      if ( v6 >= v17->max_length )
        goto LABEL_41;
      v18 = longitude;
      altitude = UnityEngine_LocationInfo__get_altitude(&v17->m_Items[v6], 0LL);
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
      v27 = v25 + 360.0;
      v36.fields.z = UnityEngine_LocationInfo__get_altitude((UnityEngine_LocationInfo_o *)((char *)v26 + v9), 0LL);
      v35.fields.x = v15;
      v35.fields.y = v18 + 360.0;
      v35.fields.z = v21;
      v36.fields.x = v24;
      v36.fields.y = v27;
      v28 = UnityEngine_Vector3__Distance(v35, v36, 0LL);
      result = (UnityEngine_LocationInfo_o *)GeoLocation_TypeInfo;
      v29 = v28 < v4;
      if ( v28 < v4 )
        v4 = v28;
      if ( v29 )
        v7 = j;
      v9 += 32LL;
    }
    ++v6;
  }
  if ( (HIBYTE(result[9].fields.m_Altitude) & 4) != 0 && !LODWORD(result[7].fields.m_Timestamp) )
  {
    j_il2cpp_runtime_class_init_0(result);
    v30 = GeoLocation_TypeInfo->static_fields;
  }
  v31 = v30->infoArray;
  if ( !v31 )
LABEL_40:
    sub_B2C434(result, v2);
  if ( v7 >= v31->max_length )
  {
LABEL_41:
    v34 = sub_B2C460(result);
    sub_B2C400(v34, 0LL);
  }
  v32 = (char *)v31 + 32 * (int)v7;
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  GeoLocation_c *v11; // x0
  struct GeoLocation_StaticFields *static_fields; // x0

  if ( (byte_418B045 & 1) == 0 )
  {
    sub_B2C35C(&GeoLocation_TypeInfo, someMonoForCoroutine);
    sub_B2C35C(&UnityEngine_LocationInfo___TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    byte_418B045 = 1;
  }
  v11 = GeoLocation_TypeInfo;
  if ( (BYTE3(GeoLocation_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !GeoLocation_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GeoLocation_TypeInfo);
    v11 = GeoLocation_TypeInfo;
  }
  static_fields = v11->static_fields;
  static_fields->callBack = locDel;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&static_fields->callBack,
    (System_Int32_array **)locDel,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( (BYTE3(GeoLocation_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !GeoLocation_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(GeoLocation_TypeInfo);
}


System_Collections_IEnumerator_o *__fastcall GeoLocation__GetLocationCoroutine(const MethodInfo *method)
{
  __int64 v1; // x1
  GeoLocation__GetLocationCoroutine_d__9_o *v2; // x19

  if ( (byte_418B046 & 1) == 0 )
  {
    sub_B2C35C(&GeoLocation__GetLocationCoroutine_d__9_TypeInfo, v1);
    byte_418B046 = 1;
  }
  v2 = (GeoLocation__GetLocationCoroutine_d__9_o *)sub_B2C42C(GeoLocation__GetLocationCoroutine_d__9_TypeInfo);
  GeoLocation__GetLocationCoroutine_d__9___ctor(v2, 0, 0LL);
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
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B2C2F8(p_method, object);
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
  __int64 v12[3]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v13; // [xsp+2Ch] [xbp-24h] BYREF

  v13 = result;
  if ( (byte_41841F5 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_LocationInfo_TypeInfo, *(_QWORD *)&result);
    sub_B2C35C(&GeoLocation_ResultState_TypeInfo, v10);
    byte_41841F5 = 1;
  }
  v12[2] = 0LL;
  v12[0] = j_il2cpp_value_box_0(GeoLocation_ResultState_TypeInfo, &v13);
  v12[1] = j_il2cpp_value_box_0(UnityEngine_LocationInfo_TypeInfo, locInfo);
  return (System_IAsyncResult_o *)sub_B2C300(this, v12, callback, object);
}


void __fastcall GeoLocation_LocationDelegate__EndInvoke(
        GeoLocation_LocationDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GeoLocation_LocationDelegate__Invoke(
        GeoLocation_LocationDelegate_o *this,
        int32_t result,
        UnityEngine_LocationInfo_o *locInfo,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v7; // x25
  GeoLocation_LocationDelegate_o **v8; // x26
  __int64 v9; // x27
  unsigned int v10; // w24
  __int64 class_0; // x0
  __int64 v12; // x3
  __int128 v13; // q0
  unsigned int v14; // w23
  __int64 v15; // x8
  unsigned __int64 v16; // x10
  _DWORD *v17; // x11
  __int64 v18; // x0
  __int128 v19; // q0
  void (__fastcall **v20)(__int64 *, _QWORD, __int128 *, _QWORD); // x0
  __int128 v21; // q0
  __int128 v22; // q1
  __int128 v23; // q0
  __int64 v24; // x8
  void (__fastcall *v25)(__int64 *, _QWORD, __int128 *, _QWORD); // x9
  __int64 v26; // x0
  void (__fastcall *v27)(__int64 *, _QWORD, __int128 *, _QWORD); // x8
  void (__fastcall *v28)(__int64 *, _QWORD, __int128 *, _QWORD); // x8
  GeoLocation_LocationDelegate_o *v29; // x8
  __int64 *v30; // x22
  __int64 v31; // x23
  void (__fastcall *v32)(__int64 *, __int64, __int128 *, __int64); // x24
  __int128 v33; // q0
  char v34; // w24
  char v35; // w0
  __int64 v36; // x3
  unsigned int v37; // w24
  __int128 v38; // q0
  __int64 v39; // x8
  __int64 v40; // x1
  __int64 v41; // x2
  unsigned __int64 v42; // x10
  _DWORD *v43; // x11
  __int128 v44; // q0
  __int64 v45; // x1
  __int128 *v46; // x2
  __int128 v47; // q0
  __int128 v48; // q0
  __int128 v49[2]; // [xsp+0h] [xbp-190h] BYREF
  __int128 v50[2]; // [xsp+20h] [xbp-170h] BYREF
  __int128 v51; // [xsp+40h] [xbp-150h]
  __int128 v52; // [xsp+50h] [xbp-140h]
  __int128 v53; // [xsp+60h] [xbp-130h]
  __int128 v54; // [xsp+70h] [xbp-120h]
  __int128 v55; // [xsp+80h] [xbp-110h]
  __int128 v56; // [xsp+90h] [xbp-100h]
  __int128 v57; // [xsp+A0h] [xbp-F0h]
  __int128 v58; // [xsp+B0h] [xbp-E0h]
  __int128 v59[2]; // [xsp+C0h] [xbp-D0h] BYREF
  __int128 v60; // [xsp+E0h] [xbp-B0h] BYREF
  __int128 v61; // [xsp+F0h] [xbp-A0h] BYREF
  unsigned int v62; // [xsp+104h] [xbp-8Ch]
  GeoLocation_LocationDelegate_o *v63; // [xsp+108h] [xbp-88h] BYREF
  __int128 v64; // [xsp+110h] [xbp-80h] BYREF
  __int128 v65; // [xsp+120h] [xbp-70h]

  v63 = this;
  v62 = result;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v63;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (GeoLocation_LocationDelegate_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v29 = v8[v9];
      v30 = *(__int64 **)&v29->fields.method;
      v31 = *(_QWORD *)&v29->fields.extra_arg;
      v32 = *(void (__fastcall **)(__int64 *, __int64, __int128 *, __int64))&v29->fields.method_ptr;
      if ( *(__int16 *)(v31 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v29->fields.extra_arg, *(_QWORD *)&result, locInfo, method);
      if ( (sub_B2C38C(v31) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v31 + 74) != 2 )
      {
        v47 = *(_OWORD *)&locInfo->fields.m_Altitude;
        v45 = v62;
        v46 = v59;
        v59[0] = *(_OWORD *)&locInfo->fields.m_Timestamp;
        v59[1] = v47;
LABEL_38:
        v32(v30, v45, v46, v31);
        goto LABEL_40;
      }
      v33 = *(_OWORD *)&locInfo->fields.m_Altitude;
      v60 = *(_OWORD *)&locInfo->fields.m_Timestamp;
      v61 = v33;
      ((void (__fastcall *)(_QWORD, __int128 *, __int64))v32)(v62, &v60, v31);
LABEL_40:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v30 )
    {
      v48 = *(_OWORD *)&locInfo->fields.m_Altitude;
      v50[0] = *(_OWORD *)&locInfo->fields.m_Timestamp;
      v50[1] = v48;
      ((void (__fastcall *)(char *, __int128 *, __int64))v32)((char *)&v61 + 4, v50, v31);
      goto LABEL_40;
    }
    if ( *(__int16 *)(v31 + 72) != -1 && (*(_BYTE *)(*v30 + 277) & 1) == 0 && this->fields.m_target )
    {
      v34 = sub_B2C384(v31);
      v35 = sub_B2C788(v31);
      if ( (v34 & 1) != 0 )
      {
        v37 = v62;
        if ( (v35 & 1) != 0 )
        {
          v38 = *(_OWORD *)&locInfo->fields.m_Altitude;
          v57 = *(_OWORD *)&locInfo->fields.m_Timestamp;
          v58 = v38;
          v39 = *v30;
          v40 = *(_QWORD *)(v31 + 24);
          v41 = *(unsigned __int16 *)(v31 + 72);
          if ( *(_WORD *)(*v30 + 298) )
          {
            v42 = 0LL;
            v43 = (_DWORD *)(*(_QWORD *)(v39 + 176) + 8LL);
            while ( *((_QWORD *)v43 - 1) != v40 )
            {
              ++v42;
              v43 += 4;
              if ( v42 >= *(unsigned __int16 *)(*v30 + 298) )
                goto LABEL_35;
            }
            v26 = v39 + 16LL * (*v43 + (int)v41) + 312;
          }
          else
          {
LABEL_35:
            v26 = sub_AC5258(v30, v40, v41, v36);
          }
          v20 = (void (__fastcall **)(__int64 *, _QWORD, __int128 *, _QWORD))sub_B2C40C(*(_QWORD *)(v26 + 8), v31);
          v22 = v57;
          v21 = v58;
        }
        else
        {
          v19 = *(_OWORD *)&locInfo->fields.m_Altitude;
          v55 = *(_OWORD *)&locInfo->fields.m_Timestamp;
          v56 = v19;
          v20 = (void (__fastcall **)(__int64 *, _QWORD, __int128 *, _QWORD))sub_B2C40C(
                                                                               *(_QWORD *)(*v30
                                                                                         + 16LL
                                                                                         * *(unsigned __int16 *)(v31 + 72)
                                                                                         + 320),
                                                                               v31);
          v22 = v55;
          v21 = v56;
        }
        v27 = *v20;
        v64 = v22;
        v65 = v21;
        v27(v30, v37, &v64, v20);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v31 + 72);
        if ( (v35 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v31);
          v13 = *(_OWORD *)&locInfo->fields.m_Altitude;
          v14 = v62;
          v53 = *(_OWORD *)&locInfo->fields.m_Timestamp;
          v54 = v13;
          v15 = *v30;
          if ( *(_WORD *)(*v30 + 298) )
          {
            v16 = 0LL;
            v17 = (_DWORD *)(*(_QWORD *)(v15 + 176) + 8LL);
            while ( *((_QWORD *)v17 - 1) != class_0 )
            {
              ++v16;
              v17 += 4;
              if ( v16 >= *(unsigned __int16 *)(*v30 + 298) )
                goto LABEL_11;
            }
            v18 = v15 + 16LL * (int)(*v17 + v10) + 312;
          }
          else
          {
LABEL_11:
            v18 = sub_AC5258(v30, class_0, v10, v12);
          }
          v28 = *(void (__fastcall **)(__int64 *, _QWORD, __int128 *, _QWORD))v18;
          v64 = v53;
          v65 = v54;
          v28(v30, v14, &v64, *(_QWORD *)(v18 + 8));
        }
        else
        {
          v23 = *(_OWORD *)&locInfo->fields.m_Altitude;
          v51 = *(_OWORD *)&locInfo->fields.m_Timestamp;
          v52 = v23;
          v24 = *v30 + 16LL * v10;
          v25 = *(void (__fastcall **)(__int64 *, _QWORD, __int128 *, _QWORD))(v24 + 312);
          v64 = v51;
          v65 = v23;
          v25(v30, v62, &v64, *(_QWORD *)(v24 + 320));
        }
      }
      goto LABEL_40;
    }
    v44 = *(_OWORD *)&locInfo->fields.m_Altitude;
    v45 = v62;
    v46 = v49;
    v49[0] = *(_OWORD *)&locInfo->fields.m_Timestamp;
    v49[1] = v44;
    goto LABEL_38;
  }
}


void __fastcall GeoLocation__GetLocationCoroutine_d__9___ctor(
        GeoLocation__GetLocationCoroutine_d__9_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall GeoLocation__GetLocationCoroutine_d__9__MoveNext(
        GeoLocation__GetLocationCoroutine_d__9_o *this,
        const MethodInfo *method)
{
  if ( !this->fields.__1__state )
    this->fields.__1__state = -1;
  return 0;
}


Il2CppObject *__fastcall GeoLocation__GetLocationCoroutine_d__9__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        GeoLocation__GetLocationCoroutine_d__9_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn GeoLocation__GetLocationCoroutine_d__9__System_Collections_IEnumerator_Reset(
        GeoLocation__GetLocationCoroutine_d__9_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_GeoLocation__GetLocationCoroutine_d__9_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
}


Il2CppObject *__fastcall GeoLocation__GetLocationCoroutine_d__9__System_Collections_IEnumerator_get_Current(
        GeoLocation__GetLocationCoroutine_d__9_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall GeoLocation__GetLocationCoroutine_d__9__System_IDisposable_Dispose(
        GeoLocation__GetLocationCoroutine_d__9_o *this,
        const MethodInfo *method)
{
  ;
}