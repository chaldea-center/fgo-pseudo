void __fastcall EffectSynchronize___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x19
  struct EffectSynchronize_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7

  if ( (byte_42ECFBF & 1) == 0 )
  {
    sub_B5D5C4(&EffectSynchronize_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Animation___ctor__, v4, v5, v6);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SimpleAnimation___ctor__, v7, v8, v9);
    sub_B5D5C4(&System_Collections_Generic_List_SimpleAnimation__TypeInfo, v10, v11, v12);
    sub_B5D5C4(&System_Collections_Generic_List_Animation__TypeInfo, v13, v14, v15);
    byte_42ECFBF = 1;
  }
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_Animation__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_Animation___ctor__);
  static_fields = (BattleServantConfConponent_o *)EffectSynchronize_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v16;
  sub_B5D560(static_fields, (System_Int32_array **)v16, v18, v19, v20, v21, v22, v23);
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_SimpleAnimation__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_SimpleAnimation___ctor__);
  v25 = EffectSynchronize_TypeInfo->static_fields;
  v25->simpleAnimCompList = (struct System_Collections_Generic_List_SimpleAnimation__o *)v24;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v25->simpleAnimCompList,
    (System_Int32_array **)v24,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
}


void __fastcall EffectSynchronize___ctor(EffectSynchronize_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EffectSynchronize__Awake(EffectSynchronize_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  struct SimpleAnimation_o *Component_WebViewObject; // x0
  struct SimpleAnimation_o **p_simpleAnimComp; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x1
  EffectSynchronize_c *v32; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *simpleAnimCompList; // x0
  EffectSynchronize_c *v34; // x0
  struct UnityEngine_Animation_o *v35; // x0
  struct UnityEngine_Animation_o **p_animComp; // x20
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  EffectSynchronize_c *v43; // x0
  EffectSynchronize_c *v44; // x0

  if ( (byte_42ECFBB & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Animation___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v5, v6, v7);
    sub_B5D5C4(&EffectSynchronize_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Animation__Add__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SimpleAnimation__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Animation__Contains__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SimpleAnimation__Contains__, v20, v21, v22);
    byte_42ECFBB = 1;
  }
  Component_WebViewObject = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          (UnityEngine_Component_o *)this,
                                                          (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  p_simpleAnimComp = &this->fields.simpleAnimComp;
  this->fields.simpleAnimComp = Component_WebViewObject;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.simpleAnimComp,
    (System_Int32_array **)Component_WebViewObject,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v32 = EffectSynchronize_TypeInfo;
  if ( (BYTE3(EffectSynchronize_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EffectSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
    v32 = EffectSynchronize_TypeInfo;
  }
  simpleAnimCompList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v32->static_fields->simpleAnimCompList;
  if ( !simpleAnimCompList )
    goto LABEL_23;
  if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)simpleAnimCompList,
          (WarBoardManager_TaskList_o *)*p_simpleAnimComp,
          (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_SimpleAnimation__Contains__) )
  {
    v34 = EffectSynchronize_TypeInfo;
    if ( (BYTE3(EffectSynchronize_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EffectSynchronize_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
      v34 = EffectSynchronize_TypeInfo;
    }
    simpleAnimCompList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v34->static_fields->simpleAnimCompList;
    if ( !simpleAnimCompList )
      goto LABEL_23;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      simpleAnimCompList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)*p_simpleAnimComp,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SimpleAnimation__Add__);
  }
  v35 = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Animation___);
  p_animComp = &this->fields.animComp;
  this->fields.animComp = v35;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.animComp,
    (System_Int32_array **)v35,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  v43 = EffectSynchronize_TypeInfo;
  if ( (BYTE3(EffectSynchronize_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EffectSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
    v43 = EffectSynchronize_TypeInfo;
  }
  simpleAnimCompList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v43->static_fields->animCompList;
  if ( !simpleAnimCompList )
    goto LABEL_23;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         (System_Collections_Generic_List_WarBoardManager_TaskList__o *)simpleAnimCompList,
         (WarBoardManager_TaskList_o *)*p_animComp,
         (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_Animation__Contains__) )
  {
    return;
  }
  v44 = EffectSynchronize_TypeInfo;
  if ( (BYTE3(EffectSynchronize_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EffectSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
    v44 = EffectSynchronize_TypeInfo;
  }
  simpleAnimCompList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v44->static_fields->animCompList;
  if ( !simpleAnimCompList )
LABEL_23:
    sub_B5D69C(simpleAnimCompList, v31);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    simpleAnimCompList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)*p_animComp,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_Animation__Add__);
}


bool __fastcall EffectSynchronize__IsEqualsName(EffectSynchronize_o *this, const MethodInfo *method)
{
  System_String_o *syncAnimStr; // x0

  syncAnimStr = this->fields.syncAnimStr;
  if ( !syncAnimStr )
    sub_B5D69C(0LL, method);
  return System_String__Equals_44565128(syncAnimStr, this->fields.selfAnimStr, 0LL);
}


void __fastcall EffectSynchronize__OnDestroy(EffectSynchronize_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  UnityEngine_Object_o *simpleAnimComp; // x20
  __int64 v15; // x1
  EffectSynchronize_c *v16; // x0
  System_Collections_Generic_List_WarBoardManager_TaskList__o *simpleAnimCompList; // x0
  WarBoardManager_TaskList_o *v18; // x1
  __int64 *v19; // x8
  UnityEngine_Object_o *animComp; // x20
  EffectSynchronize_c *v21; // x0

  if ( (byte_42ECFBC & 1) == 0 )
  {
    sub_B5D5C4(&EffectSynchronize_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SimpleAnimation__Remove__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Animation__Remove__, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    byte_42ECFBC = 1;
  }
  simpleAnimComp = (UnityEngine_Object_o *)this->fields.simpleAnimComp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(simpleAnimComp, 0LL, 0LL) )
  {
    v16 = EffectSynchronize_TypeInfo;
    if ( (BYTE3(EffectSynchronize_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EffectSynchronize_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
      v16 = EffectSynchronize_TypeInfo;
    }
    simpleAnimCompList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v16->static_fields->simpleAnimCompList;
    if ( simpleAnimCompList )
    {
      v18 = (WarBoardManager_TaskList_o *)this->fields.simpleAnimComp;
      v19 = &Method_System_Collections_Generic_List_SimpleAnimation__Remove__;
LABEL_21:
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        simpleAnimCompList,
        v18,
        (const MethodInfo_305896C *)*v19);
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
    v21 = EffectSynchronize_TypeInfo;
    if ( (BYTE3(EffectSynchronize_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EffectSynchronize_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
      v21 = EffectSynchronize_TypeInfo;
    }
    simpleAnimCompList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v21->static_fields->animCompList;
    if ( simpleAnimCompList )
    {
      v18 = (WarBoardManager_TaskList_o *)this->fields.animComp;
      v19 = &Method_System_Collections_Generic_List_Animation__Remove__;
      goto LABEL_21;
    }
LABEL_23:
    sub_B5D69C(simpleAnimCompList, v15);
  }
}


void __fastcall EffectSynchronize__OnEnable(EffectSynchronize_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *simpleAnimComp; // x20
  const MethodInfo *v6; // x1
  SimpleAnimation_o *v7; // x0
  UnityEngine_Object_o *animComp; // x20

  if ( (byte_42ECFBE & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ECFBE = 1;
  }
  simpleAnimComp = (UnityEngine_Object_o *)this->fields.simpleAnimComp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(simpleAnimComp, 0LL, 0LL) )
  {
    v7 = this->fields.simpleAnimComp;
    if ( v7 )
    {
      SimpleAnimation__Play_16676044(v7, this->fields.selfAnimStr, 0LL);
      goto LABEL_15;
    }
LABEL_16:
    sub_B5D69C(v7, v6);
  }
  animComp = (UnityEngine_Object_o *)this->fields.animComp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(animComp, 0LL, 0LL) )
  {
    v7 = (SimpleAnimation_o *)this->fields.animComp;
    if ( v7 )
    {
      UnityEngine_Animation__Play_51249124((UnityEngine_Animation_o *)v7, this->fields.selfAnimStr, 0LL);
      goto LABEL_15;
    }
    goto LABEL_16;
  }
LABEL_15:
  EffectSynchronize__synchronize(this, v6);
}


void __fastcall EffectSynchronize__synchronize(EffectSynchronize_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  UnityEngine_Object_o *simpleAnimComp; // x20
  __int64 v36; // x1
  EffectSynchronize_c *v37; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *simpleAnimCompList; // x0
  _BOOL8 v39; // x0
  __int64 v40; // x1
  Il2CppObject *current; // x20
  const MethodInfo *v42; // x1
  __int64 v43; // x1
  bool IsEqualsName; // w8
  SimpleAnimation_o *v45; // x0
  SimpleAnimation_State_o *Item; // x0
  __int64 v47; // x1
  __int64 v48; // x3
  SimpleAnimation_State_o *v49; // x21
  SimpleAnimation_State_c *klass; // x8
  unsigned __int64 v51; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  SimpleAnimation_State_o *v54; // x0
  __int64 v55; // x1
  __int64 v56; // x3
  SimpleAnimation_State_o *v57; // x21
  SimpleAnimation_State_c *v58; // x8
  unsigned __int64 v59; // x10
  SimpleAnimation_State_c **v60; // x11
  __int64 v61; // x0
  float v62; // s0
  double v63; // d9
  SimpleAnimation_State_o *v64; // x0
  __int64 v65; // x1
  __int64 v66; // x3
  SimpleAnimation_State_o *v67; // x21
  SimpleAnimation_State_c *v68; // x8
  unsigned __int64 v69; // x10
  SimpleAnimation_State_c **v70; // x11
  __int64 v71; // x0
  float v72; // s0
  double v73; // d10
  UnityEngine_Object_o *v74; // x21
  UnityEngine_Object_o *animComp; // x20
  EffectSynchronize_c *v76; // x0
  _BOOL8 v77; // x0
  __int64 v78; // x1
  Il2CppObject *v79; // x20
  UnityEngine_TrackedReference_o *v80; // x0
  const MethodInfo *v81; // x1
  __int64 v82; // x1
  bool v83; // w8
  UnityEngine_Animation_o *v84; // x0
  UnityEngine_AnimationState_o *v85; // x0
  __int64 v86; // x1
  __int64 v87; // x1
  float length; // s0
  double v89; // d9
  UnityEngine_AnimationState_o *v90; // x0
  __int64 v91; // x1
  float v92; // s0
  double v93; // d10
  UnityEngine_Object_o *v94; // x21
  int v95; // w19
  System_Collections_Generic_List_Enumerator_T__o v96; // [xsp+0h] [xbp-C0h] BYREF
  int v97[4]; // [xsp+18h] [xbp-A8h]
  int v98; // [xsp+28h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v99; // [xsp+30h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v100; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_42ECFBD & 1) == 0 )
  {
    sub_B5D5C4(&EffectSynchronize_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_Animation__Dispose__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__Dispose__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_Animation__MoveNext__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__MoveNext__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__get_Current__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_Animation__get_Current__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Animation__GetEnumerator__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SimpleAnimation__GetEnumerator__, v26, v27, v28);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&SimpleAnimation_State_TypeInfo, v32, v33, v34);
    byte_42ECFBD = 1;
  }
  memset(&v100, 0, sizeof(v100));
  memset(&v99, 0, sizeof(v99));
  v98 = 0;
  simpleAnimComp = (UnityEngine_Object_o *)this->fields.simpleAnimComp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(simpleAnimComp, 0LL, 0LL) )
  {
    v37 = EffectSynchronize_TypeInfo;
    if ( (BYTE3(EffectSynchronize_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EffectSynchronize_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
      v37 = EffectSynchronize_TypeInfo;
    }
    simpleAnimCompList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v37->static_fields->simpleAnimCompList;
    if ( simpleAnimCompList )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v96,
        simpleAnimCompList,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_SimpleAnimation__GetEnumerator__);
      v100 = v96;
      while ( 1 )
      {
        v39 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v100,
                (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__MoveNext__);
        if ( !v39 )
          break;
        current = v100.fields.current;
        if ( !v100.fields.current )
          sub_B5D69C(v39, v40);
        if ( SimpleAnimation__get_Item((SimpleAnimation_o *)v100.fields.current, this->fields.syncAnimStr, 0LL) )
        {
          IsEqualsName = EffectSynchronize__IsEqualsName(this, v42);
          v45 = this->fields.simpleAnimComp;
          if ( IsEqualsName )
          {
            if ( !v45 )
              sub_B5D69C(0LL, v43);
            Item = SimpleAnimation__get_Item(v45, this->fields.syncAnimStr, 0LL);
            v49 = Item;
            if ( !Item )
              sub_B5D69C(0LL, v47);
            klass = Item->klass;
            if ( *(_WORD *)&Item->klass->_2.bitflags1 )
            {
              v51 = 0LL;
              p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
              while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
              {
                ++v51;
                p_offset += 2;
                if ( v51 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
                  goto LABEL_22;
              }
              p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13].method;
            }
            else
            {
LABEL_22:
              p_method = sub_AF54C0(Item, SimpleAnimation_State_TypeInfo, 13LL, v48);
            }
            (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(v49, *(_QWORD *)(p_method + 8));
          }
          else
          {
            if ( !v45 )
              sub_B5D69C(0LL, v43);
            v54 = SimpleAnimation__get_Item(v45, this->fields.selfAnimStr, 0LL);
            v57 = v54;
            if ( !v54 )
              sub_B5D69C(0LL, v55);
            v58 = v54->klass;
            if ( *(_WORD *)&v54->klass->_2.bitflags1 )
            {
              v59 = 0LL;
              v60 = (SimpleAnimation_State_c **)&v58->_1.interfaceOffsets->offset;
              while ( *(v60 - 1) != SimpleAnimation_State_TypeInfo )
              {
                ++v59;
                v60 += 2;
                if ( v59 >= *(unsigned __int16 *)&v54->klass->_2.bitflags1 )
                  goto LABEL_29;
              }
              v61 = (__int64)&v58->vtable[*(_DWORD *)v60 + 13].method;
            }
            else
            {
LABEL_29:
              v61 = sub_AF54C0(v54, SimpleAnimation_State_TypeInfo, 13LL, v56);
            }
            v62 = (*(float (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v61)(v57, *(_QWORD *)(v61 + 8));
          }
          if ( v62 == INFINITY )
            v63 = -INFINITY;
          else
            v63 = v62;
          v64 = SimpleAnimation__get_Item((SimpleAnimation_o *)current, this->fields.syncAnimStr, 0LL);
          v67 = v64;
          if ( !v64 )
            sub_B5D69C(0LL, v65);
          v68 = v64->klass;
          if ( *(_WORD *)&v64->klass->_2.bitflags1 )
          {
            v69 = 0LL;
            v70 = (SimpleAnimation_State_c **)&v68->_1.interfaceOffsets->offset;
            while ( *(v70 - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v69;
              v70 += 2;
              if ( v69 >= *(unsigned __int16 *)&v64->klass->_2.bitflags1 )
                goto LABEL_42;
            }
            v71 = (__int64)&v68->vtable[*(_DWORD *)v70 + 13].method;
          }
          else
          {
LABEL_42:
            v71 = sub_AF54C0(v64, SimpleAnimation_State_TypeInfo, 13LL, v66);
          }
          v72 = (*(float (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v71)(v67, *(_QWORD *)(v71 + 8));
          v73 = v72 == INFINITY ? -INFINITY : v72;
          if ( SimpleAnimation__get_isPlaying((SimpleAnimation_o *)current, 0LL)
            && UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)current, 0LL) )
          {
            v74 = (UnityEngine_Object_o *)this->fields.simpleAnimComp;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( (((int)v63 == (int)v73) & UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, v74, 0LL)) != 0 )
            {
              BasicHelper__SynchronizeAnimation_21085676(
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
      v97[0] = 470;
      v98 = 1;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v100,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__Dispose__);
      v98 = 0;
      return;
    }
LABEL_103:
    sub_B5D69C(simpleAnimCompList, v36);
  }
  animComp = (UnityEngine_Object_o *)this->fields.animComp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(animComp, 0LL, 0LL) )
    return;
  v76 = EffectSynchronize_TypeInfo;
  if ( (BYTE3(EffectSynchronize_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EffectSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
    v76 = EffectSynchronize_TypeInfo;
  }
  simpleAnimCompList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v76->static_fields->animCompList;
  if ( !simpleAnimCompList )
    goto LABEL_103;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v96,
    simpleAnimCompList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_Animation__GetEnumerator__);
  v99 = v96;
  while ( 1 )
  {
    v77 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v99,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_Animation__MoveNext__);
    if ( !v77 )
      break;
    v79 = v99.fields.current;
    if ( !v99.fields.current )
      sub_B5D69C(v77, v78);
    v80 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                              (UnityEngine_Animation_o *)v99.fields.current,
                                              this->fields.syncAnimStr,
                                              0LL);
    if ( !UnityEngine_TrackedReference__op_Equality(v80, 0LL, 0LL) )
    {
      v83 = EffectSynchronize__IsEqualsName(this, v81);
      v84 = this->fields.animComp;
      if ( v83 )
      {
        if ( !v84 )
          sub_B5D69C(0LL, v82);
        v85 = UnityEngine_Animation__get_Item(v84, this->fields.syncAnimStr, 0LL);
        if ( !v85 )
          sub_B5D69C(0LL, v86);
      }
      else
      {
        if ( !v84 )
          sub_B5D69C(0LL, v82);
        v85 = UnityEngine_Animation__get_Item(v84, this->fields.selfAnimStr, 0LL);
        if ( !v85 )
          sub_B5D69C(0LL, v87);
      }
      length = UnityEngine_AnimationState__get_length(v85, 0LL);
      if ( length == INFINITY )
        v89 = -INFINITY;
      else
        v89 = length;
      v90 = UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v79, this->fields.syncAnimStr, 0LL);
      if ( !v90 )
        sub_B5D69C(0LL, v91);
      v92 = UnityEngine_AnimationState__get_length(v90, 0LL);
      v93 = v92 == INFINITY ? -INFINITY : v92;
      if ( UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)v79, 0LL)
        && UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)v79, 0LL) )
      {
        v94 = (UnityEngine_Object_o *)this->fields.animComp;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( (((int)v89 == (int)v93) & UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v79, v94, 0LL)) != 0 )
        {
          BasicHelper__SynchronizeAnimation(
            this->fields.animComp,
            this->fields.selfAnimStr,
            this->fields.syncAnimStr,
            (UnityEngine_Animation_o *)v79,
            0LL);
          break;
        }
      }
    }
  }
  v97[0] = 470;
  v95 = ++v98;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v99,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_Animation__Dispose__);
  if ( v95 && v97[v95 - 1] == 470 )
    v98 = v95 - 1;
}