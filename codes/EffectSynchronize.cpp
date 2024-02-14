void __fastcall EffectSynchronize___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x19
  struct EffectSynchronize_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_4218B7A & 1) == 0 )
  {
    sub_B0D8A4(&EffectSynchronize_TypeInfo, v1);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Animation___ctor__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SimpleAnimation___ctor__, v4);
    sub_B0D8A4(&System_Collections_Generic_List_SimpleAnimation__TypeInfo, v5);
    sub_B0D8A4(&System_Collections_Generic_List_Animation__TypeInfo, v6);
    byte_4218B7A = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_Animation__TypeInfo,
                                                                                                 v1,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_Animation___ctor__);
  static_fields = (BattleServantConfConponent_o *)EffectSynchronize_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v7;
  sub_B0D840(static_fields, (System_Int32_array **)v7, v9, v10, v11, v12, v13, v14);
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_SimpleAnimation__TypeInfo,
                                                                                                  v15,
                                                                                                  v16);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_SimpleAnimation___ctor__);
  v18 = EffectSynchronize_TypeInfo->static_fields;
  v18->simpleAnimCompList = (struct System_Collections_Generic_List_SimpleAnimation__o *)v17;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v18->simpleAnimCompList,
    (System_Int32_array **)v17,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
}


void __fastcall EffectSynchronize___ctor(EffectSynchronize_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EffectSynchronize__Awake(EffectSynchronize_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct SimpleAnimation_o *Component_WebViewObject; // x0
  struct SimpleAnimation_o **p_simpleAnimComp; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  EffectSynchronize_c *v17; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *simpleAnimCompList; // x0
  EffectSynchronize_c *v19; // x0
  struct UnityEngine_Animation_o *v20; // x0
  struct UnityEngine_Animation_o **p_animComp; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  EffectSynchronize_c *v28; // x0
  EffectSynchronize_c *v29; // x0

  if ( (byte_4218B76 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_Animation___, method);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v3);
    sub_B0D8A4(&EffectSynchronize_TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Animation__Add__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SimpleAnimation__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Animation__Contains__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SimpleAnimation__Contains__, v8);
    byte_4218B76 = 1;
  }
  Component_WebViewObject = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          (UnityEngine_Component_o *)this,
                                                          (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  p_simpleAnimComp = &this->fields.simpleAnimComp;
  this->fields.simpleAnimComp = Component_WebViewObject;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.simpleAnimComp,
    (System_Int32_array **)Component_WebViewObject,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = EffectSynchronize_TypeInfo;
  if ( (BYTE3(EffectSynchronize_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EffectSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
    v17 = EffectSynchronize_TypeInfo;
  }
  simpleAnimCompList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v17->static_fields->simpleAnimCompList;
  if ( !simpleAnimCompList )
    goto LABEL_23;
  if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)simpleAnimCompList,
          (WarBoardManager_TaskList_o *)*p_simpleAnimComp,
          (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_SimpleAnimation__Contains__) )
  {
    v19 = EffectSynchronize_TypeInfo;
    if ( (BYTE3(EffectSynchronize_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EffectSynchronize_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
      v19 = EffectSynchronize_TypeInfo;
    }
    simpleAnimCompList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v19->static_fields->simpleAnimCompList;
    if ( !simpleAnimCompList )
      goto LABEL_23;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      simpleAnimCompList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)*p_simpleAnimComp,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_SimpleAnimation__Add__);
  }
  v20 = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_Animation___);
  p_animComp = &this->fields.animComp;
  this->fields.animComp = v20;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.animComp,
    (System_Int32_array **)v20,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = EffectSynchronize_TypeInfo;
  if ( (BYTE3(EffectSynchronize_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EffectSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
    v28 = EffectSynchronize_TypeInfo;
  }
  simpleAnimCompList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v28->static_fields->animCompList;
  if ( !simpleAnimCompList )
    goto LABEL_23;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         (System_Collections_Generic_List_WarBoardManager_TaskList__o *)simpleAnimCompList,
         (WarBoardManager_TaskList_o *)*p_animComp,
         (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_Animation__Contains__) )
  {
    return;
  }
  v29 = EffectSynchronize_TypeInfo;
  if ( (BYTE3(EffectSynchronize_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EffectSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
    v29 = EffectSynchronize_TypeInfo;
  }
  simpleAnimCompList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v29->static_fields->animCompList;
  if ( !simpleAnimCompList )
LABEL_23:
    sub_B0D97C(simpleAnimCompList);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    simpleAnimCompList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)*p_animComp,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_Animation__Add__);
}


bool __fastcall EffectSynchronize__IsEqualsName(EffectSynchronize_o *this, const MethodInfo *method)
{
  System_String_o *syncAnimStr; // x0

  syncAnimStr = this->fields.syncAnimStr;
  if ( !syncAnimStr )
    sub_B0D97C(0LL);
  return System_String__Equals_43837244(syncAnimStr, this->fields.selfAnimStr, 0LL);
}


void __fastcall EffectSynchronize__OnDestroy(EffectSynchronize_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *simpleAnimComp; // x20
  EffectSynchronize_c *v7; // x0
  System_Collections_Generic_List_WarBoardManager_TaskList__o *simpleAnimCompList; // x0
  WarBoardManager_TaskList_o *v9; // x1
  __int64 *v10; // x8
  UnityEngine_Object_o *animComp; // x20
  EffectSynchronize_c *v12; // x0

  if ( (byte_4218B77 & 1) == 0 )
  {
    sub_B0D8A4(&EffectSynchronize_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SimpleAnimation__Remove__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Animation__Remove__, v4);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_4218B77 = 1;
  }
  simpleAnimComp = (UnityEngine_Object_o *)this->fields.simpleAnimComp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(simpleAnimComp, 0LL, 0LL) )
  {
    v7 = EffectSynchronize_TypeInfo;
    if ( (BYTE3(EffectSynchronize_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EffectSynchronize_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
      v7 = EffectSynchronize_TypeInfo;
    }
    simpleAnimCompList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v7->static_fields->simpleAnimCompList;
    if ( simpleAnimCompList )
    {
      v9 = (WarBoardManager_TaskList_o *)this->fields.simpleAnimComp;
      v10 = &Method_System_Collections_Generic_List_SimpleAnimation__Remove__;
LABEL_21:
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        simpleAnimCompList,
        v9,
        (const MethodInfo_2FC7094 *)*v10);
      return;
    }
    goto LABEL_23;
  }
  animComp = (UnityEngine_Object_o *)this->fields.animComp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(animComp, 0LL, 0LL) )
  {
    v12 = EffectSynchronize_TypeInfo;
    if ( (BYTE3(EffectSynchronize_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EffectSynchronize_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
      v12 = EffectSynchronize_TypeInfo;
    }
    simpleAnimCompList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v12->static_fields->animCompList;
    if ( simpleAnimCompList )
    {
      v9 = (WarBoardManager_TaskList_o *)this->fields.animComp;
      v10 = &Method_System_Collections_Generic_List_Animation__Remove__;
      goto LABEL_21;
    }
LABEL_23:
    sub_B0D97C(simpleAnimCompList);
  }
}


void __fastcall EffectSynchronize__OnEnable(EffectSynchronize_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *simpleAnimComp; // x20
  SimpleAnimation_o *v4; // x0
  const MethodInfo *v5; // x1
  UnityEngine_Object_o *animComp; // x20

  if ( (byte_4218B79 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4218B79 = 1;
  }
  simpleAnimComp = (UnityEngine_Object_o *)this->fields.simpleAnimComp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(simpleAnimComp, 0LL, 0LL) )
  {
    v4 = this->fields.simpleAnimComp;
    if ( v4 )
    {
      SimpleAnimation__Play_50482404(v4, this->fields.selfAnimStr, 0LL);
      goto LABEL_15;
    }
LABEL_16:
    sub_B0D97C(v4);
  }
  animComp = (UnityEngine_Object_o *)this->fields.animComp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(animComp, 0LL, 0LL) )
  {
    v4 = (SimpleAnimation_o *)this->fields.animComp;
    if ( v4 )
    {
      UnityEngine_Animation__Play_50564840((UnityEngine_Animation_o *)v4, this->fields.selfAnimStr, 0LL);
      goto LABEL_15;
    }
    goto LABEL_16;
  }
LABEL_15:
  EffectSynchronize__synchronize(this, v5);
}


void __fastcall EffectSynchronize__synchronize(EffectSynchronize_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_Object_o *simpleAnimComp; // x20
  EffectSynchronize_c *v14; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *simpleAnimCompList; // x0
  _BOOL8 v16; // x0
  Il2CppObject *current; // x20
  const MethodInfo *v18; // x1
  bool IsEqualsName; // w8
  SimpleAnimation_o *v20; // x0
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_o *v22; // x21
  SimpleAnimation_State_c *klass; // x8
  unsigned __int64 v24; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  SimpleAnimation_State_o *v27; // x0
  SimpleAnimation_State_o *v28; // x21
  SimpleAnimation_State_c *v29; // x8
  unsigned __int64 v30; // x10
  SimpleAnimation_State_c **v31; // x11
  __int64 v32; // x0
  float v33; // s0
  double v34; // d9
  SimpleAnimation_State_o *v35; // x0
  SimpleAnimation_State_o *v36; // x21
  SimpleAnimation_State_c *v37; // x8
  unsigned __int64 v38; // x10
  SimpleAnimation_State_c **v39; // x11
  __int64 v40; // x0
  float v41; // s0
  double v42; // d10
  UnityEngine_Object_o *v43; // x21
  UnityEngine_Object_o *animComp; // x20
  EffectSynchronize_c *v45; // x0
  _BOOL8 v46; // x0
  Il2CppObject *v47; // x20
  UnityEngine_TrackedReference_o *v48; // x0
  const MethodInfo *v49; // x1
  bool v50; // w8
  UnityEngine_Animation_o *v51; // x0
  UnityEngine_AnimationState_o *v52; // x0
  float length; // s0
  double v54; // d9
  UnityEngine_AnimationState_o *v55; // x0
  float v56; // s0
  double v57; // d10
  UnityEngine_Object_o *v58; // x21
  int v59; // w19
  System_Collections_Generic_List_Enumerator_T__o v60; // [xsp+0h] [xbp-C0h] BYREF
  int v61[4]; // [xsp+18h] [xbp-A8h]
  int v62; // [xsp+28h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v63; // [xsp+30h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v64; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_4218B78 & 1) == 0 )
  {
    sub_B0D8A4(&EffectSynchronize_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_Animation__Dispose__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__Dispose__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_Animation__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__MoveNext__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__get_Current__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_Animation__get_Current__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Animation__GetEnumerator__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SimpleAnimation__GetEnumerator__, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    sub_B0D8A4(&SimpleAnimation_State_TypeInfo, v12);
    byte_4218B78 = 1;
  }
  memset(&v64, 0, sizeof(v64));
  memset(&v63, 0, sizeof(v63));
  v62 = 0;
  simpleAnimComp = (UnityEngine_Object_o *)this->fields.simpleAnimComp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(simpleAnimComp, 0LL, 0LL) )
  {
    v14 = EffectSynchronize_TypeInfo;
    if ( (BYTE3(EffectSynchronize_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EffectSynchronize_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
      v14 = EffectSynchronize_TypeInfo;
    }
    simpleAnimCompList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v14->static_fields->simpleAnimCompList;
    if ( simpleAnimCompList )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v60,
        simpleAnimCompList,
        (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_SimpleAnimation__GetEnumerator__);
      v64 = v60;
      while ( 1 )
      {
        v16 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v64,
                (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__MoveNext__);
        if ( !v16 )
          break;
        current = v64.fields.current;
        if ( !v64.fields.current )
          sub_B0D97C(v16);
        if ( SimpleAnimation__get_Item((SimpleAnimation_o *)v64.fields.current, this->fields.syncAnimStr, 0LL) )
        {
          IsEqualsName = EffectSynchronize__IsEqualsName(this, v18);
          v20 = this->fields.simpleAnimComp;
          if ( IsEqualsName )
          {
            if ( !v20 )
              sub_B0D97C(0LL);
            Item = SimpleAnimation__get_Item(v20, this->fields.syncAnimStr, 0LL);
            v22 = Item;
            if ( !Item )
              sub_B0D97C(0LL);
            klass = Item->klass;
            if ( *(_WORD *)&Item->klass->_2.bitflags1 )
            {
              v24 = 0LL;
              p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
              while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
              {
                ++v24;
                p_offset += 2;
                if ( v24 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
                  goto LABEL_22;
              }
              p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13].method;
            }
            else
            {
LABEL_22:
              p_method = sub_AA67A0(Item, SimpleAnimation_State_TypeInfo, 13LL);
            }
            (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(v22, *(_QWORD *)(p_method + 8));
          }
          else
          {
            if ( !v20 )
              sub_B0D97C(0LL);
            v27 = SimpleAnimation__get_Item(v20, this->fields.selfAnimStr, 0LL);
            v28 = v27;
            if ( !v27 )
              sub_B0D97C(0LL);
            v29 = v27->klass;
            if ( *(_WORD *)&v27->klass->_2.bitflags1 )
            {
              v30 = 0LL;
              v31 = (SimpleAnimation_State_c **)&v29->_1.interfaceOffsets->offset;
              while ( *(v31 - 1) != SimpleAnimation_State_TypeInfo )
              {
                ++v30;
                v31 += 2;
                if ( v30 >= *(unsigned __int16 *)&v27->klass->_2.bitflags1 )
                  goto LABEL_29;
              }
              v32 = (__int64)&v29->vtable[*(_DWORD *)v31 + 13].method;
            }
            else
            {
LABEL_29:
              v32 = sub_AA67A0(v27, SimpleAnimation_State_TypeInfo, 13LL);
            }
            v33 = (*(float (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v32)(v28, *(_QWORD *)(v32 + 8));
          }
          if ( v33 == INFINITY )
            v34 = -INFINITY;
          else
            v34 = v33;
          v35 = SimpleAnimation__get_Item((SimpleAnimation_o *)current, this->fields.syncAnimStr, 0LL);
          v36 = v35;
          if ( !v35 )
            sub_B0D97C(0LL);
          v37 = v35->klass;
          if ( *(_WORD *)&v35->klass->_2.bitflags1 )
          {
            v38 = 0LL;
            v39 = (SimpleAnimation_State_c **)&v37->_1.interfaceOffsets->offset;
            while ( *(v39 - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v38;
              v39 += 2;
              if ( v38 >= *(unsigned __int16 *)&v35->klass->_2.bitflags1 )
                goto LABEL_42;
            }
            v40 = (__int64)&v37->vtable[*(_DWORD *)v39 + 13].method;
          }
          else
          {
LABEL_42:
            v40 = sub_AA67A0(v35, SimpleAnimation_State_TypeInfo, 13LL);
          }
          v41 = (*(float (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v40)(v36, *(_QWORD *)(v40 + 8));
          v42 = v41 == INFINITY ? -INFINITY : v41;
          if ( SimpleAnimation__get_isPlaying((SimpleAnimation_o *)current, 0LL)
            && UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)current, 0LL) )
          {
            v43 = (UnityEngine_Object_o *)this->fields.simpleAnimComp;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( (((int)v34 == (int)v42) & UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, v43, 0LL)) != 0 )
            {
              BasicHelper__SynchronizeAnimation_18714532(
                this->fields.simpleAnimComp,
                this->fields.selfAnimStr,
                this->fields.syncAnimStr,
                (SimpleAnimation_o *)current,
                0LL);
              break;
            }
          }
        }
      }
      v61[0] = 470;
      v62 = 1;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v64,
        (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__Dispose__);
      v62 = 0;
      return;
    }
LABEL_103:
    sub_B0D97C(simpleAnimCompList);
  }
  animComp = (UnityEngine_Object_o *)this->fields.animComp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(animComp, 0LL, 0LL) )
    return;
  v45 = EffectSynchronize_TypeInfo;
  if ( (BYTE3(EffectSynchronize_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EffectSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
    v45 = EffectSynchronize_TypeInfo;
  }
  simpleAnimCompList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v45->static_fields->animCompList;
  if ( !simpleAnimCompList )
    goto LABEL_103;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v60,
    simpleAnimCompList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_Animation__GetEnumerator__);
  v63 = v60;
  while ( 1 )
  {
    v46 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v63,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_Animation__MoveNext__);
    if ( !v46 )
      break;
    v47 = v63.fields.current;
    if ( !v63.fields.current )
      sub_B0D97C(v46);
    v48 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                              (UnityEngine_Animation_o *)v63.fields.current,
                                              this->fields.syncAnimStr,
                                              0LL);
    if ( !UnityEngine_TrackedReference__op_Equality(v48, 0LL, 0LL) )
    {
      v50 = EffectSynchronize__IsEqualsName(this, v49);
      v51 = this->fields.animComp;
      if ( v50 )
      {
        if ( !v51 )
          sub_B0D97C(0LL);
        v52 = UnityEngine_Animation__get_Item(v51, this->fields.syncAnimStr, 0LL);
        if ( !v52 )
          sub_B0D97C(0LL);
      }
      else
      {
        if ( !v51 )
          sub_B0D97C(0LL);
        v52 = UnityEngine_Animation__get_Item(v51, this->fields.selfAnimStr, 0LL);
        if ( !v52 )
          sub_B0D97C(0LL);
      }
      length = UnityEngine_AnimationState__get_length(v52, 0LL);
      if ( length == INFINITY )
        v54 = -INFINITY;
      else
        v54 = length;
      v55 = UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v47, this->fields.syncAnimStr, 0LL);
      if ( !v55 )
        sub_B0D97C(0LL);
      v56 = UnityEngine_AnimationState__get_length(v55, 0LL);
      v57 = v56 == INFINITY ? -INFINITY : v56;
      if ( UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)v47, 0LL)
        && UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)v47, 0LL) )
      {
        v58 = (UnityEngine_Object_o *)this->fields.animComp;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( (((int)v54 == (int)v57) & UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v47, v58, 0LL)) != 0 )
        {
          BasicHelper__SynchronizeAnimation(
            this->fields.animComp,
            this->fields.selfAnimStr,
            this->fields.syncAnimStr,
            (UnityEngine_Animation_o *)v47,
            0LL);
          break;
        }
      }
    }
  }
  v61[0] = 470;
  v59 = ++v62;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v63,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_Animation__Dispose__);
  if ( v59 && v61[v59 - 1] == 470 )
    v62 = v59 - 1;
}