void __fastcall GeoLocation___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FF560 & 1) == 0 )
  {
    sub_B16FFC(&GeoLocation_TypeInfo, v1);
    byte_40FF560 = 1;
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
  __int64 v3; // x2
  float v5; // s13
  UnityEngine_LocationInfo_o *result; // x0
  unsigned __int64 v7; // x22
  il2cpp_array_size_t v8; // w20
  int i; // w23
  __int64 v10; // x25
  il2cpp_array_size_t j; // w26
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
  float v29; // s0
  bool v30; // nf
  struct GeoLocation_StaticFields *v31; // x8
  struct UnityEngine_LocationInfo_array *v32; // x8
  char *v33; // x8
  __int128 v34; // q1
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_40FF55F & 1) == 0 )
  {
    sub_B16FFC(&GeoLocation_TypeInfo, v2);
    byte_40FF55F = 1;
  }
  v5 = 180.0;
  result = (UnityEngine_LocationInfo_o *)GeoLocation_TypeInfo;
  v7 = 0LL;
  v8 = 0;
  for ( i = 1; ; ++i )
  {
    if ( (HIBYTE(result[9].fields.m_Altitude) & 4) != 0 && !LODWORD(result[7].fields.m_Timestamp) )
    {
      j_il2cpp_runtime_class_init_0(result);
      result = (UnityEngine_LocationInfo_o *)GeoLocation_TypeInfo;
    }
    v31 = *(struct GeoLocation_StaticFields **)&result[5].fields.m_VerticalAccuracy;
    if ( (__int64)v7 >= v31->TEST_COUNT )
      break;
    v10 = 32LL * i + 32;
    for ( j = v7 + 1; ; ++j )
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
      if ( v7 >= infoArray->max_length )
        goto LABEL_41;
      latitude = UnityEngine_LocationInfo__get_latitude(&infoArray->m_Items[v7], 0LL);
      v15 = GeoLocation_TypeInfo->static_fields->infoArray;
      if ( !v15 )
        goto LABEL_40;
      if ( v7 >= v15->max_length )
        goto LABEL_41;
      v16 = latitude;
      longitude = UnityEngine_LocationInfo__get_longitude(&v15->m_Items[v7], 0LL);
      v18 = GeoLocation_TypeInfo->static_fields->infoArray;
      if ( !v18 )
        goto LABEL_40;
      if ( v7 >= v18->max_length )
        goto LABEL_41;
      v19 = longitude;
      altitude = UnityEngine_LocationInfo__get_altitude(&v18->m_Items[v7], 0LL);
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
      v28 = v26 + 360.0;
      v36.fields.z = UnityEngine_LocationInfo__get_altitude((UnityEngine_LocationInfo_o *)((char *)v27 + v10), 0LL);
      v35.fields.x = v16;
      v35.fields.y = v19 + 360.0;
      v35.fields.z = v22;
      v36.fields.x = v25;
      v36.fields.y = v28;
      v29 = UnityEngine_Vector3__Distance(v35, v36, 0LL);
      result = (UnityEngine_LocationInfo_o *)GeoLocation_TypeInfo;
      v30 = v29 < v5;
      if ( v29 < v5 )
        v5 = v29;
      if ( v30 )
        v8 = j;
      v10 += 32LL;
    }
    ++v7;
  }
  if ( (HIBYTE(result[9].fields.m_Altitude) & 4) != 0 && !LODWORD(result[7].fields.m_Timestamp) )
  {
    j_il2cpp_runtime_class_init_0(result);
    v31 = GeoLocation_TypeInfo->static_fields;
  }
  v32 = v31->infoArray;
  if ( !v32 )
LABEL_40:
    sub_B170D4();
  if ( v8 >= v32->max_length )
  {
LABEL_41:
    sub_B17100(result, v2, v3);
    sub_B170A0();
  }
  v33 = (char *)v32 + 32 * (int)v8;
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  GeoLocation_c *v11; // x0
  struct GeoLocation_StaticFields *static_fields; // x0

  if ( (byte_40FF55D & 1) == 0 )
  {
    sub_B16FFC(&GeoLocation_TypeInfo, someMonoForCoroutine);
    sub_B16FFC(&UnityEngine_LocationInfo___TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    byte_40FF55D = 1;
  }
  v11 = GeoLocation_TypeInfo;
  if ( (BYTE3(GeoLocation_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !GeoLocation_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GeoLocation_TypeInfo);
    v11 = GeoLocation_TypeInfo;
  }
  static_fields = v11->static_fields;
  static_fields->callBack = locDel;
  sub_B16F98(
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  GeoLocation__GetLocationCoroutine_d__9_o *v5; // x19

  if ( (byte_40FF55E & 1) == 0 )
  {
    sub_B16FFC(&GeoLocation__GetLocationCoroutine_d__9_TypeInfo, v1);
    byte_40FF55E = 1;
  }
  v5 = (GeoLocation__GetLocationCoroutine_d__9_o *)sub_B170CC(
                                                     GeoLocation__GetLocationCoroutine_d__9_TypeInfo,
                                                     v1,
                                                     v2,
                                                     v3,
                                                     v4);
  GeoLocation__GetLocationCoroutine_d__9___ctor(v5, 0, 0LL);
  return (System_Collections_IEnumerator_o *)v5;
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
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_40F68DF & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_LocationInfo_TypeInfo, *(_QWORD *)&result);
    sub_B16FFC(&GeoLocation_ResultState_TypeInfo, v10);
    byte_40F68DF = 1;
  }
  v12[2] = 0LL;
  v12[0] = j_il2cpp_value_box_0(GeoLocation_ResultState_TypeInfo, &v13);
  v12[1] = j_il2cpp_value_box_0(UnityEngine_LocationInfo_TypeInfo, locInfo);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v12, callback, object);
}


void __fastcall GeoLocation_LocationDelegate__EndInvoke(
        GeoLocation_LocationDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
  __int128 v12; // q0
  unsigned int v13; // w23
  __int64 v14; // x8
  unsigned __int64 v15; // x10
  _DWORD *v16; // x11
  __int64 v17; // x0
  __int128 v18; // q0
  void (__fastcall **v19)(__int64 *, _QWORD, __int128 *, _QWORD); // x0
  __int128 v20; // q0
  __int128 v21; // q1
  __int128 v22; // q0
  __int64 v23; // x8
  void (__fastcall *v24)(__int64 *, _QWORD, __int128 *, _QWORD); // x9
  __int64 v25; // x0
  void (__fastcall *v26)(__int64 *, _QWORD, __int128 *, _QWORD); // x8
  void (__fastcall *v27)(__int64 *, _QWORD, __int128 *, _QWORD); // x8
  GeoLocation_LocationDelegate_o *v28; // x8
  __int64 *v29; // x22
  __int64 v30; // x23
  void (__fastcall *v31)(__int64 *, __int64, __int128 *, __int64); // x24
  __int128 v32; // q0
  char v33; // w24
  char v34; // w0
  unsigned int v35; // w24
  __int128 v36; // q0
  __int64 v37; // x8
  __int64 v38; // x1
  __int64 v39; // x2
  unsigned __int64 v40; // x10
  _DWORD *v41; // x11
  __int128 v42; // q0
  __int64 v43; // x1
  __int128 *v44; // x2
  __int128 v45; // q0
  __int128 v46; // q0
  __int128 v47[2]; // [xsp+0h] [xbp-190h] BYREF
  __int128 v48[2]; // [xsp+20h] [xbp-170h] BYREF
  __int128 v49; // [xsp+40h] [xbp-150h]
  __int128 v50; // [xsp+50h] [xbp-140h]
  __int128 v51; // [xsp+60h] [xbp-130h]
  __int128 v52; // [xsp+70h] [xbp-120h]
  __int128 v53; // [xsp+80h] [xbp-110h]
  __int128 v54; // [xsp+90h] [xbp-100h]
  __int128 v55; // [xsp+A0h] [xbp-F0h]
  __int128 v56; // [xsp+B0h] [xbp-E0h]
  __int128 v57[2]; // [xsp+C0h] [xbp-D0h] BYREF
  __int128 v58; // [xsp+E0h] [xbp-B0h] BYREF
  __int128 v59; // [xsp+F0h] [xbp-A0h] BYREF
  unsigned int v60; // [xsp+104h] [xbp-8Ch]
  GeoLocation_LocationDelegate_o *v61; // [xsp+108h] [xbp-88h] BYREF
  __int128 v62; // [xsp+110h] [xbp-80h] BYREF
  __int128 v63; // [xsp+120h] [xbp-70h]

  v61 = this;
  v60 = result;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v61;
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
      v28 = v8[v9];
      v29 = *(__int64 **)&v28->fields.method;
      v30 = *(_QWORD *)&v28->fields.extra_arg;
      v31 = *(void (__fastcall **)(__int64 *, __int64, __int128 *, __int64))&v28->fields.method_ptr;
      if ( *(__int16 *)(v30 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v28->fields.extra_arg, *(_QWORD *)&result, locInfo);
      if ( (sub_B1702C(v30) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v30 + 74) != 2 )
      {
        v45 = *(_OWORD *)&locInfo->fields.m_Altitude;
        v43 = v60;
        v44 = v57;
        v57[0] = *(_OWORD *)&locInfo->fields.m_Timestamp;
        v57[1] = v45;
LABEL_38:
        v31(v29, v43, v44, v30);
        goto LABEL_40;
      }
      v32 = *(_OWORD *)&locInfo->fields.m_Altitude;
      v58 = *(_OWORD *)&locInfo->fields.m_Timestamp;
      v59 = v32;
      ((void (__fastcall *)(_QWORD, __int128 *, __int64))v31)(v60, &v58, v30);
LABEL_40:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v29 )
    {
      v46 = *(_OWORD *)&locInfo->fields.m_Altitude;
      v48[0] = *(_OWORD *)&locInfo->fields.m_Timestamp;
      v48[1] = v46;
      ((void (__fastcall *)(char *, __int128 *, __int64))v31)((char *)&v59 + 4, v48, v30);
      goto LABEL_40;
    }
    if ( *(__int16 *)(v30 + 72) != -1 && (*(_BYTE *)(*v29 + 277) & 1) == 0 && this->fields.m_target )
    {
      v33 = sub_B17024(v30);
      v34 = sub_B17428(v30);
      if ( (v33 & 1) != 0 )
      {
        v35 = v60;
        if ( (v34 & 1) != 0 )
        {
          v36 = *(_OWORD *)&locInfo->fields.m_Altitude;
          v55 = *(_OWORD *)&locInfo->fields.m_Timestamp;
          v56 = v36;
          v37 = *v29;
          v38 = *(_QWORD *)(v30 + 24);
          v39 = *(unsigned __int16 *)(v30 + 72);
          if ( *(_WORD *)(*v29 + 298) )
          {
            v40 = 0LL;
            v41 = (_DWORD *)(*(_QWORD *)(v37 + 176) + 8LL);
            while ( *((_QWORD *)v41 - 1) != v38 )
            {
              ++v40;
              v41 += 4;
              if ( v40 >= *(unsigned __int16 *)(*v29 + 298) )
                goto LABEL_35;
            }
            v25 = v37 + 16LL * (*v41 + (int)v39) + 312;
          }
          else
          {
LABEL_35:
            v25 = sub_AAFEF8(v29, v38, v39);
          }
          v19 = (void (__fastcall **)(__int64 *, _QWORD, __int128 *, _QWORD))sub_B170AC(*(_QWORD *)(v25 + 8), v30);
          v21 = v55;
          v20 = v56;
        }
        else
        {
          v18 = *(_OWORD *)&locInfo->fields.m_Altitude;
          v53 = *(_OWORD *)&locInfo->fields.m_Timestamp;
          v54 = v18;
          v19 = (void (__fastcall **)(__int64 *, _QWORD, __int128 *, _QWORD))sub_B170AC(
                                                                               *(_QWORD *)(*v29
                                                                                         + 16LL
                                                                                         * *(unsigned __int16 *)(v30 + 72)
                                                                                         + 320),
                                                                               v30);
          v21 = v53;
          v20 = v54;
        }
        v26 = *v19;
        v62 = v21;
        v63 = v20;
        v26(v29, v35, &v62, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v30 + 72);
        if ( (v34 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v30);
          v12 = *(_OWORD *)&locInfo->fields.m_Altitude;
          v13 = v60;
          v51 = *(_OWORD *)&locInfo->fields.m_Timestamp;
          v52 = v12;
          v14 = *v29;
          if ( *(_WORD *)(*v29 + 298) )
          {
            v15 = 0LL;
            v16 = (_DWORD *)(*(_QWORD *)(v14 + 176) + 8LL);
            while ( *((_QWORD *)v16 - 1) != class_0 )
            {
              ++v15;
              v16 += 4;
              if ( v15 >= *(unsigned __int16 *)(*v29 + 298) )
                goto LABEL_11;
            }
            v17 = v14 + 16LL * (int)(*v16 + v10) + 312;
          }
          else
          {
LABEL_11:
            v17 = sub_AAFEF8(v29, class_0, v10);
          }
          v27 = *(void (__fastcall **)(__int64 *, _QWORD, __int128 *, _QWORD))v17;
          v62 = v51;
          v63 = v52;
          v27(v29, v13, &v62, *(_QWORD *)(v17 + 8));
        }
        else
        {
          v22 = *(_OWORD *)&locInfo->fields.m_Altitude;
          v49 = *(_OWORD *)&locInfo->fields.m_Timestamp;
          v50 = v22;
          v23 = *v29 + 16LL * v10;
          v24 = *(void (__fastcall **)(__int64 *, _QWORD, __int128 *, _QWORD))(v23 + 312);
          v62 = v49;
          v63 = v22;
          v24(v29, v60, &v62, *(_QWORD *)(v23 + 320));
        }
      }
      goto LABEL_40;
    }
    v42 = *(_OWORD *)&locInfo->fields.m_Altitude;
    v43 = v60;
    v44 = v47;
    v47[0] = *(_OWORD *)&locInfo->fields.m_Timestamp;
    v47[1] = v42;
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_GeoLocation__GetLocationCoroutine_d__9_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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