void __fastcall EffectSynchronize___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x19
  struct EffectSynchronize_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_40FE275 & 1) == 0 )
  {
    sub_B16FFC(&EffectSynchronize_TypeInfo, v1);
    sub_B16FFC(&Method_System_Collections_Generic_List_Animation___ctor__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_SimpleAnimation___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_List_SimpleAnimation__TypeInfo, v7);
    sub_B16FFC(&System_Collections_Generic_List_Animation__TypeInfo, v8);
    byte_40FE275 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_Animation__TypeInfo,
                                                                                                 v1,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_Animation___ctor__);
  static_fields = (BattleServantConfConponent_o *)EffectSynchronize_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v9;
  sub_B16F98(static_fields, (System_Int32_array **)v9, v11, v12, v13, v14, v15, v16);
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_SimpleAnimation__TypeInfo,
                                                                                                  v17,
                                                                                                  v18,
                                                                                                  v19,
                                                                                                  v20);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_SimpleAnimation___ctor__);
  v22 = EffectSynchronize_TypeInfo->static_fields;
  v22->simpleAnimCompList = (struct System_Collections_Generic_List_SimpleAnimation__o *)v21;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v22->simpleAnimCompList,
    (System_Int32_array **)v21,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
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
  System_Collections_Generic_List_WarBoardManager_TaskList__o *simpleAnimCompList; // x0
  EffectSynchronize_c *v19; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x0
  struct UnityEngine_Animation_o *v21; // x0
  struct UnityEngine_Animation_o **p_animComp; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  EffectSynchronize_c *v29; // x0
  System_Collections_Generic_List_WarBoardManager_TaskList__o *animCompList; // x0
  EffectSynchronize_c *v31; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v32; // x0

  if ( (byte_40FE271 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Animation___, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v3);
    sub_B16FFC(&EffectSynchronize_TypeInfo, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Animation__Add__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_SimpleAnimation__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Animation__Contains__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_SimpleAnimation__Contains__, v8);
    byte_40FE271 = 1;
  }
  Component_WebViewObject = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          (UnityEngine_Component_o *)this,
                                                          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  p_simpleAnimComp = &this->fields.simpleAnimComp;
  this->fields.simpleAnimComp = Component_WebViewObject;
  sub_B16F98(
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
  simpleAnimCompList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v17->static_fields->simpleAnimCompList;
  if ( !simpleAnimCompList )
    goto LABEL_23;
  if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
          simpleAnimCompList,
          (WarBoardManager_TaskList_o *)*p_simpleAnimComp,
          (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_SimpleAnimation__Contains__) )
  {
    v19 = EffectSynchronize_TypeInfo;
    if ( (BYTE3(EffectSynchronize_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EffectSynchronize_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
      v19 = EffectSynchronize_TypeInfo;
    }
    v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v19->static_fields->simpleAnimCompList;
    if ( !v20 )
      goto LABEL_23;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v20,
      (EventMissionProgressRequest_Argument_ProgressData_o *)*p_simpleAnimComp,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SimpleAnimation__Add__);
  }
  v21 = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Animation___);
  p_animComp = &this->fields.animComp;
  this->fields.animComp = v21;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.animComp,
    (System_Int32_array **)v21,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v29 = EffectSynchronize_TypeInfo;
  if ( (BYTE3(EffectSynchronize_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EffectSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
    v29 = EffectSynchronize_TypeInfo;
  }
  animCompList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v29->static_fields->animCompList;
  if ( !animCompList )
    goto LABEL_23;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         animCompList,
         (WarBoardManager_TaskList_o *)*p_animComp,
         (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_Animation__Contains__) )
  {
    return;
  }
  v31 = EffectSynchronize_TypeInfo;
  if ( (BYTE3(EffectSynchronize_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EffectSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
    v31 = EffectSynchronize_TypeInfo;
  }
  v32 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v31->static_fields->animCompList;
  if ( !v32 )
LABEL_23:
    sub_B170D4();
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v32,
    (EventMissionProgressRequest_Argument_ProgressData_o *)*p_animComp,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_Animation__Add__);
}


bool __fastcall EffectSynchronize__IsEqualsName(EffectSynchronize_o *this, const MethodInfo *method)
{
  System_String_o *syncAnimStr; // x0

  syncAnimStr = this->fields.syncAnimStr;
  if ( !syncAnimStr )
    sub_B170D4();
  return System_String__Equals_43731072(syncAnimStr, this->fields.selfAnimStr, 0LL);
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

  if ( (byte_40FE272 & 1) == 0 )
  {
    sub_B16FFC(&EffectSynchronize_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_SimpleAnimation__Remove__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Animation__Remove__, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FE272 = 1;
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
        (const MethodInfo_2F27684 *)*v10);
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
    sub_B170D4();
  }
}


void __fastcall EffectSynchronize__OnEnable(EffectSynchronize_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *simpleAnimComp; // x20
  SimpleAnimation_o *v4; // x0
  const MethodInfo *v5; // x1
  UnityEngine_Object_o *animComp; // x20
  UnityEngine_Animation_o *v7; // x0

  if ( (byte_40FE274 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FE274 = 1;
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
      SimpleAnimation__Play_16380456(v4, this->fields.selfAnimStr, 0LL);
      goto LABEL_15;
    }
LABEL_16:
    sub_B170D4();
  }
  animComp = (UnityEngine_Object_o *)this->fields.animComp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(animComp, 0LL, 0LL) )
  {
    v7 = this->fields.animComp;
    if ( v7 )
    {
      UnityEngine_Animation__Play_49744236(v7, this->fields.selfAnimStr, 0LL);
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
  Il2CppObject *current; // x20
  const MethodInfo *v17; // x1
  bool IsEqualsName; // w8
  SimpleAnimation_o *v19; // x0
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_o *v21; // x21
  SimpleAnimation_State_c *klass; // x8
  unsigned __int64 v23; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  SimpleAnimation_State_o *v26; // x0
  SimpleAnimation_State_o *v27; // x21
  SimpleAnimation_State_c *v28; // x8
  unsigned __int64 v29; // x10
  SimpleAnimation_State_c **v30; // x11
  __int64 v31; // x0
  float v32; // s0
  double v33; // d9
  SimpleAnimation_State_o *v34; // x0
  SimpleAnimation_State_o *v35; // x21
  SimpleAnimation_State_c *v36; // x8
  unsigned __int64 v37; // x10
  SimpleAnimation_State_c **v38; // x11
  __int64 v39; // x0
  float v40; // s0
  double v41; // d10
  UnityEngine_Object_o *v42; // x21
  UnityEngine_Object_o *animComp; // x20
  EffectSynchronize_c *v44; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *animCompList; // x0
  Il2CppObject *v46; // x20
  UnityEngine_TrackedReference_o *v47; // x0
  const MethodInfo *v48; // x1
  bool v49; // w8
  UnityEngine_Animation_o *v50; // x0
  UnityEngine_AnimationState_o *v51; // x0
  float length; // s0
  double v53; // d9
  UnityEngine_AnimationState_o *v54; // x0
  float v55; // s0
  double v56; // d10
  UnityEngine_Object_o *v57; // x21
  int v58; // w19
  System_Collections_Generic_List_Enumerator_T__o v59; // [xsp+0h] [xbp-C0h] BYREF
  int v60[4]; // [xsp+18h] [xbp-A8h]
  int v61; // [xsp+28h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v62; // [xsp+30h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v63; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_40FE273 & 1) == 0 )
  {
    sub_B16FFC(&EffectSynchronize_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_Animation__Dispose__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__Dispose__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_Animation__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__get_Current__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_Animation__get_Current__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Animation__GetEnumerator__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_SimpleAnimation__GetEnumerator__, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, v12);
    byte_40FE273 = 1;
  }
  memset(&v63, 0, sizeof(v63));
  memset(&v62, 0, sizeof(v62));
  v61 = 0;
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
        &v59,
        simpleAnimCompList,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_SimpleAnimation__GetEnumerator__);
      v63 = v59;
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v63,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__MoveNext__) )
      {
        current = v63.fields.current;
        if ( !v63.fields.current )
          sub_B170D4();
        if ( SimpleAnimation__get_Item((SimpleAnimation_o *)v63.fields.current, this->fields.syncAnimStr, 0LL) )
        {
          IsEqualsName = EffectSynchronize__IsEqualsName(this, v17);
          v19 = this->fields.simpleAnimComp;
          if ( IsEqualsName )
          {
            if ( !v19 )
              sub_B170D4();
            Item = SimpleAnimation__get_Item(v19, this->fields.syncAnimStr, 0LL);
            v21 = Item;
            if ( !Item )
              sub_B170D4();
            klass = Item->klass;
            if ( *(_WORD *)&Item->klass->_2.bitflags1 )
            {
              v23 = 0LL;
              p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
              while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
              {
                ++v23;
                p_offset += 2;
                if ( v23 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
                  goto LABEL_22;
              }
              p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13].method;
            }
            else
            {
LABEL_22:
              p_method = sub_AAFEF8(Item, SimpleAnimation_State_TypeInfo, 13LL);
            }
            (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(v21, *(_QWORD *)(p_method + 8));
          }
          else
          {
            if ( !v19 )
              sub_B170D4();
            v26 = SimpleAnimation__get_Item(v19, this->fields.selfAnimStr, 0LL);
            v27 = v26;
            if ( !v26 )
              sub_B170D4();
            v28 = v26->klass;
            if ( *(_WORD *)&v26->klass->_2.bitflags1 )
            {
              v29 = 0LL;
              v30 = (SimpleAnimation_State_c **)&v28->_1.interfaceOffsets->offset;
              while ( *(v30 - 1) != SimpleAnimation_State_TypeInfo )
              {
                ++v29;
                v30 += 2;
                if ( v29 >= *(unsigned __int16 *)&v26->klass->_2.bitflags1 )
                  goto LABEL_29;
              }
              v31 = (__int64)&v28->vtable[*(_DWORD *)v30 + 13].method;
            }
            else
            {
LABEL_29:
              v31 = sub_AAFEF8(v26, SimpleAnimation_State_TypeInfo, 13LL);
            }
            v32 = (*(float (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v31)(v27, *(_QWORD *)(v31 + 8));
          }
          if ( v32 == INFINITY )
            v33 = -INFINITY;
          else
            v33 = v32;
          v34 = SimpleAnimation__get_Item((SimpleAnimation_o *)current, this->fields.syncAnimStr, 0LL);
          v35 = v34;
          if ( !v34 )
            sub_B170D4();
          v36 = v34->klass;
          if ( *(_WORD *)&v34->klass->_2.bitflags1 )
          {
            v37 = 0LL;
            v38 = (SimpleAnimation_State_c **)&v36->_1.interfaceOffsets->offset;
            while ( *(v38 - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v37;
              v38 += 2;
              if ( v37 >= *(unsigned __int16 *)&v34->klass->_2.bitflags1 )
                goto LABEL_42;
            }
            v39 = (__int64)&v36->vtable[*(_DWORD *)v38 + 13].method;
          }
          else
          {
LABEL_42:
            v39 = sub_AAFEF8(v34, SimpleAnimation_State_TypeInfo, 13LL);
          }
          v40 = (*(float (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v39)(v35, *(_QWORD *)(v39 + 8));
          v41 = v40 == INFINITY ? -INFINITY : v40;
          if ( SimpleAnimation__get_isPlaying((SimpleAnimation_o *)current, 0LL)
            && UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)current, 0LL) )
          {
            v42 = (UnityEngine_Object_o *)this->fields.simpleAnimComp;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( (((int)v33 == (int)v41) & UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, v42, 0LL)) != 0 )
            {
              BasicHelper__SynchronizeAnimation_19260668(
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
      v60[0] = 470;
      v61 = 1;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v63,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__Dispose__);
      v61 = 0;
      return;
    }
LABEL_103:
    sub_B170D4();
  }
  animComp = (UnityEngine_Object_o *)this->fields.animComp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(animComp, 0LL, 0LL) )
    return;
  v44 = EffectSynchronize_TypeInfo;
  if ( (BYTE3(EffectSynchronize_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EffectSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
    v44 = EffectSynchronize_TypeInfo;
  }
  animCompList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v44->static_fields->animCompList;
  if ( !animCompList )
    goto LABEL_103;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v59,
    animCompList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_Animation__GetEnumerator__);
  v62 = v59;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v62,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_Animation__MoveNext__) )
  {
    v46 = v62.fields.current;
    if ( !v62.fields.current )
      sub_B170D4();
    v47 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                              (UnityEngine_Animation_o *)v62.fields.current,
                                              this->fields.syncAnimStr,
                                              0LL);
    if ( !UnityEngine_TrackedReference__op_Equality(v47, 0LL, 0LL) )
    {
      v49 = EffectSynchronize__IsEqualsName(this, v48);
      v50 = this->fields.animComp;
      if ( v49 )
      {
        if ( !v50 )
          sub_B170D4();
        v51 = UnityEngine_Animation__get_Item(v50, this->fields.syncAnimStr, 0LL);
        if ( !v51 )
          sub_B170D4();
      }
      else
      {
        if ( !v50 )
          sub_B170D4();
        v51 = UnityEngine_Animation__get_Item(v50, this->fields.selfAnimStr, 0LL);
        if ( !v51 )
          sub_B170D4();
      }
      length = UnityEngine_AnimationState__get_length(v51, 0LL);
      if ( length == INFINITY )
        v53 = -INFINITY;
      else
        v53 = length;
      v54 = UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v46, this->fields.syncAnimStr, 0LL);
      if ( !v54 )
        sub_B170D4();
      v55 = UnityEngine_AnimationState__get_length(v54, 0LL);
      v56 = v55 == INFINITY ? -INFINITY : v55;
      if ( UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)v46, 0LL)
        && UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)v46, 0LL) )
      {
        v57 = (UnityEngine_Object_o *)this->fields.animComp;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( (((int)v53 == (int)v56) & UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v46, v57, 0LL)) != 0 )
        {
          BasicHelper__SynchronizeAnimation(
            this->fields.animComp,
            this->fields.selfAnimStr,
            this->fields.syncAnimStr,
            (UnityEngine_Animation_o *)v46,
            0LL);
          break;
        }
      }
    }
  }
  v60[0] = 470;
  v58 = ++v61;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v62,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_Animation__Dispose__);
  if ( v58 && v60[v58 - 1] == 470 )
    v61 = v58 - 1;
}