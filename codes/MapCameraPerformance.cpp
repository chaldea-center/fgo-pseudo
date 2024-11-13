void __fastcall MapCameraPerformance___ctor(
        MapCameraPerformance_o *this,
        MapCamera_o *mapCamera,
        float second,
        System_Nullable_Vector2__o position,
        System_Nullable_float__o size,
        int32_t easeType,
        const MethodInfo *method)
{
  float y; // w21
  __int64 v11; // x22
  PartyOrganizationUtility_o *v13; // x24
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  y = position.fields.value.fields.y;
  v11 = *(_QWORD *)&position.fields.hasValue;
  v13 = (PartyOrganizationUtility_o *)this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v13->fields._PartyItem_k__BackingField = (struct PartyListViewItem_o *)mapCamera;
  v13 = (PartyOrganizationUtility_o *)((char *)v13 + 72);
  sub_1BCA784(v13, (int64_t)mapCamera, v14, v15, v16, v17, v18, v19);
  *(float *)(&v13[-1].fields._IsNormalFlowQuest_k__BackingField + 3) = second;
  *(_QWORD *)(&v13[-1].fields._WaveBattleRestartWave_k__BackingField + 1) = v11;
  *((float *)&v13[-1].fields.temporaryPartyInfo + 1) = y;
  v13[-1].fields._TransitionDestinationFromDetail_k__BackingField = (struct System_String_o *)size;
  *(_DWORD *)&v13[-1].fields._IsQuestStartMenuMode_k__BackingField = easeType;
}


System_Collections_IEnumerator_o *__fastcall MapCameraPerformance__Execute(
        MapCameraPerformance_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B17C15 & 1) == 0 )
  {
    sub_1BCA7E0(&MapCameraPerformance__Execute_d__6_TypeInfo, method, v2);
    byte_4B17C15 = 1;
  }
  v5 = sub_1BCAA2C(MapCameraPerformance__Execute_d__6_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall MapCameraPerformance__Execute_d__6___ctor(
        MapCameraPerformance__Execute_d__6_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MapCameraPerformance__Execute_d__6__MoveNext(
        MapCameraPerformance__Execute_d__6_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  int32_t _1__state; // w8
  struct MapCameraPerformance_o *_4__this; // x25
  __int64 v25; // x20
  _BOOL8 v26; // x0
  __int64 v27; // x1
  UnityEngine_Object_o *v28; // x21
  const MethodInfo_36C2D28 *v29; // x2
  __int64 v30; // x3
  bool result; // w0
  MapCamera_o *v32; // x21
  float v33; // s8
  __int64 v34; // x22
  __int64 v35; // x23
  System_Nullable_float__o v36; // x24
  int32_t value_low; // w25
  System_Action_o *v38; // x26
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  System_Func_bool__o *v42; // x21
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  UnityEngine_WaitUntil_o *v46; // x20
  Il2CppObject **p__2__current; // x19
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  __int64 v54; // [xsp+0h] [xbp-60h] BYREF
  __int64 v55; // [xsp+8h] [xbp-58h]
  System_Nullable_float__o v56; // 0:x3.8
  System_Nullable_Vector3__o v57; // 0:x0.16
  System_Nullable_Vector3__o v58; // 0:x1.16
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B17C16 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&System_Func_bool__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Nullable_Vector2__GetValueOrDefault__, v7, v8);
    sub_1BCA7E0(&Method_System_Nullable_Vector3___ctor__, v9, v10);
    sub_1BCA7E0(&Method_System_Nullable_Vector2__get_HasValue__, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_MapCameraPerformance___c__DisplayClass6_0__Execute_b__0__, v15, v16);
    sub_1BCA7E0(&Method_MapCameraPerformance___c__DisplayClass6_0__Execute_b__1__, v17, v18);
    sub_1BCA7E0(&MapCameraPerformance___c__DisplayClass6_0_TypeInfo, v19, v20);
    sub_1BCA7E0(&UnityEngine_WaitUntil_TypeInfo, v21, v22);
    byte_4B17C16 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    result = 0;
    this->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    this->fields.__1__state = -1;
    _4__this = this->fields.__4__this;
    v25 = sub_1BCAA2C(MapCameraPerformance___c__DisplayClass6_0_TypeInfo, method, v2, v3);
    System_Object___ctor((Il2CppObject *)v25, 0LL);
    if ( !_4__this )
      goto LABEL_17;
    v28 = *(UnityEngine_Object_o **)&_4__this->fields.second;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
    v26 = UnityEngine_Object__op_Equality(v28, 0LL, 0LL);
    if ( v26 )
      return 0;
    if ( !v25 )
      goto LABEL_17;
    *(_BYTE *)(v25 + 16) = 0;
    v32 = *(MapCamera_o **)&_4__this->fields.second;
    v33 = *(float *)&_4__this->fields.easeType;
    if ( *(&_4__this->fields._IsPause_k__BackingField + 3) )
    {
      v59.fields.x = *(float *)&_4__this->fields.position.fields.hasValue;
      v59.fields.y = _4__this->fields.position.fields.value.fields.x;
      *(_QWORD *)&v57.fields.hasValue = &v54;
      v59.fields.z = 0.0;
      v54 = 0LL;
      v55 = 0LL;
      *(_QWORD *)&v57.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
      System_Nullable_Vector3____ctor(v57, v59, v29);
      v35 = v54;
      v34 = v55;
    }
    else
    {
      v34 = 0LL;
      v35 = 0LL;
    }
    v36 = *(System_Nullable_float__o *)&_4__this->fields.position.fields.value.fields.y;
    value_low = LODWORD(_4__this->fields.size.fields.value);
    v38 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v27, v29, v30);
    System_Action___ctor(
      v38,
      (Il2CppObject *)v25,
      Method_MapCameraPerformance___c__DisplayClass6_0__Execute_b__0__,
      0LL);
    if ( !v32 )
LABEL_17:
      sub_1BCAA3C(v26, v27);
    *(_QWORD *)&v58.fields.hasValue = v35;
    *(_QWORD *)&v58.fields.value.fields.y = v34;
    v56 = v36;
    MapCamera__StartAutoWork(v32, v33, v58, v56, value_low, v38, 0LL);
    v42 = (System_Func_bool__o *)sub_1BCAA2C(System_Func_bool__TypeInfo, v39, v40, v41);
    System_Func_bool____ctor(
      v42,
      (Il2CppObject *)v25,
      Method_MapCameraPerformance___c__DisplayClass6_0__Execute_b__1__,
      0LL);
    v46 = (UnityEngine_WaitUntil_o *)sub_1BCAA2C(UnityEngine_WaitUntil_TypeInfo, v43, v44, v45);
    UnityEngine_WaitUntil___ctor(v46, v42, 0LL);
    this->fields.__2__current = (Il2CppObject *)v46;
    p__2__current = &this->fields.__2__current;
    sub_1BCA784((PartyOrganizationUtility_o *)p__2__current, (int64_t)v46, v48, v49, v50, v51, v52, v53);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
  }
  return result;
}


Il2CppObject *__fastcall MapCameraPerformance__Execute_d__6__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MapCameraPerformance__Execute_d__6_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MapCameraPerformance__Execute_d__6__System_Collections_IEnumerator_Reset(
        MapCameraPerformance__Execute_d__6_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_MapCameraPerformance__Execute_d__6_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall MapCameraPerformance__Execute_d__6__System_Collections_IEnumerator_get_Current(
        MapCameraPerformance__Execute_d__6_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MapCameraPerformance__Execute_d__6__System_IDisposable_Dispose(
        MapCameraPerformance__Execute_d__6_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MapCameraPerformance___c__DisplayClass6_0___ctor(
        MapCameraPerformance___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MapCameraPerformance___c__DisplayClass6_0___Execute_b__0(
        MapCameraPerformance___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  this->fields.workFinished = 1;
}


bool __fastcall MapCameraPerformance___c__DisplayClass6_0___Execute_b__1(
        MapCameraPerformance___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  return this->fields.workFinished;
}