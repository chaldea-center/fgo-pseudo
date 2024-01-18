void __fastcall EffectSynchronize___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  struct EffectSynchronize_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_418BD57 & 1) == 0 )
  {
    sub_B2C35C(&EffectSynchronize_TypeInfo, v1);
    sub_B2C35C(&Method_System_Collections_Generic_List_Animation___ctor__, v2);
    sub_B2C35C(&Method_System_Collections_Generic_List_SimpleAnimation___ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_List_SimpleAnimation__TypeInfo, v4);
    sub_B2C35C(&System_Collections_Generic_List_Animation__TypeInfo, v5);
    byte_418BD57 = 1;
  }
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_Animation__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_Animation___ctor__);
  static_fields = (BattleServantConfConponent_o *)EffectSynchronize_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v6;
  sub_B2C2F8(static_fields, (System_Int32_array **)v6, v8, v9, v10, v11, v12, v13);
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_SimpleAnimation__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_SimpleAnimation___ctor__);
  v15 = EffectSynchronize_TypeInfo->static_fields;
  v15->simpleAnimCompList = (struct System_Collections_Generic_List_SimpleAnimation__o *)v14;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v15->simpleAnimCompList,
    (System_Int32_array **)v14,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
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
  __int64 v17; // x1
  EffectSynchronize_c *v18; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *simpleAnimCompList; // x0
  EffectSynchronize_c *v20; // x0
  struct UnityEngine_Animation_o *v21; // x0
  struct UnityEngine_Animation_o **p_animComp; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  EffectSynchronize_c *v29; // x0
  EffectSynchronize_c *v30; // x0

  if ( (byte_418BD53 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Animation___, method);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v3);
    sub_B2C35C(&EffectSynchronize_TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Animation__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_SimpleAnimation__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Animation__Contains__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_SimpleAnimation__Contains__, v8);
    byte_418BD53 = 1;
  }
  Component_WebViewObject = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          (UnityEngine_Component_o *)this,
                                                          (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  p_simpleAnimComp = &this->fields.simpleAnimComp;
  this->fields.simpleAnimComp = Component_WebViewObject;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.simpleAnimComp,
    (System_Int32_array **)Component_WebViewObject,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v18 = EffectSynchronize_TypeInfo;
  if ( (BYTE3(EffectSynchronize_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EffectSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
    v18 = EffectSynchronize_TypeInfo;
  }
  simpleAnimCompList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v18->static_fields->simpleAnimCompList;
  if ( !simpleAnimCompList )
    goto LABEL_23;
  if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)simpleAnimCompList,
          (WarBoardManager_TaskList_o *)*p_simpleAnimComp,
          (const MethodInfo_2EF48B0 *)Method_System_Collections_Generic_List_SimpleAnimation__Contains__) )
  {
    v20 = EffectSynchronize_TypeInfo;
    if ( (BYTE3(EffectSynchronize_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EffectSynchronize_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
      v20 = EffectSynchronize_TypeInfo;
    }
    simpleAnimCompList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v20->static_fields->simpleAnimCompList;
    if ( !simpleAnimCompList )
      goto LABEL_23;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      simpleAnimCompList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)*p_simpleAnimComp,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SimpleAnimation__Add__);
  }
  v21 = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Animation___);
  p_animComp = &this->fields.animComp;
  this->fields.animComp = v21;
  sub_B2C2F8(
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
  simpleAnimCompList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v29->static_fields->animCompList;
  if ( !simpleAnimCompList )
    goto LABEL_23;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         (System_Collections_Generic_List_WarBoardManager_TaskList__o *)simpleAnimCompList,
         (WarBoardManager_TaskList_o *)*p_animComp,
         (const MethodInfo_2EF48B0 *)Method_System_Collections_Generic_List_Animation__Contains__) )
  {
    return;
  }
  v30 = EffectSynchronize_TypeInfo;
  if ( (BYTE3(EffectSynchronize_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EffectSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
    v30 = EffectSynchronize_TypeInfo;
  }
  simpleAnimCompList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v30->static_fields->animCompList;
  if ( !simpleAnimCompList )
LABEL_23:
    sub_B2C434(simpleAnimCompList, v17);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    simpleAnimCompList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)*p_animComp,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_Animation__Add__);
}


bool __fastcall EffectSynchronize__IsEqualsName(EffectSynchronize_o *this, const MethodInfo *method)
{
  System_String_o *syncAnimStr; // x0

  syncAnimStr = this->fields.syncAnimStr;
  if ( !syncAnimStr )
    sub_B2C434(0LL, method);
  return System_String__Equals_44292872(syncAnimStr, this->fields.selfAnimStr, 0LL);
}


void __fastcall EffectSynchronize__OnDestroy(EffectSynchronize_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *simpleAnimComp; // x20
  __int64 v7; // x1
  EffectSynchronize_c *v8; // x0
  System_Collections_Generic_List_WarBoardManager_TaskList__o *simpleAnimCompList; // x0
  WarBoardManager_TaskList_o *v10; // x1
  __int64 *v11; // x8
  UnityEngine_Object_o *animComp; // x20
  EffectSynchronize_c *v13; // x0

  if ( (byte_418BD54 & 1) == 0 )
  {
    sub_B2C35C(&EffectSynchronize_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_SimpleAnimation__Remove__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Animation__Remove__, v4);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_418BD54 = 1;
  }
  simpleAnimComp = (UnityEngine_Object_o *)this->fields.simpleAnimComp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(simpleAnimComp, 0LL, 0LL) )
  {
    v8 = EffectSynchronize_TypeInfo;
    if ( (BYTE3(EffectSynchronize_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EffectSynchronize_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
      v8 = EffectSynchronize_TypeInfo;
    }
    simpleAnimCompList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v8->static_fields->simpleAnimCompList;
    if ( simpleAnimCompList )
    {
      v10 = (WarBoardManager_TaskList_o *)this->fields.simpleAnimComp;
      v11 = &Method_System_Collections_Generic_List_SimpleAnimation__Remove__;
LABEL_21:
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        simpleAnimCompList,
        v10,
        (const MethodInfo_2EF5E0C *)*v11);
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
    v13 = EffectSynchronize_TypeInfo;
    if ( (BYTE3(EffectSynchronize_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EffectSynchronize_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
      v13 = EffectSynchronize_TypeInfo;
    }
    simpleAnimCompList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v13->static_fields->animCompList;
    if ( simpleAnimCompList )
    {
      v10 = (WarBoardManager_TaskList_o *)this->fields.animComp;
      v11 = &Method_System_Collections_Generic_List_Animation__Remove__;
      goto LABEL_21;
    }
LABEL_23:
    sub_B2C434(simpleAnimCompList, v7);
  }
}


void __fastcall EffectSynchronize__OnEnable(EffectSynchronize_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *simpleAnimComp; // x20
  const MethodInfo *v4; // x1
  SimpleAnimation_o *v5; // x0
  UnityEngine_Object_o *animComp; // x20

  if ( (byte_418BD56 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418BD56 = 1;
  }
  simpleAnimComp = (UnityEngine_Object_o *)this->fields.simpleAnimComp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(simpleAnimComp, 0LL, 0LL) )
  {
    v5 = this->fields.simpleAnimComp;
    if ( v5 )
    {
      SimpleAnimation__Play_16486620(v5, this->fields.selfAnimStr, 0LL);
      goto LABEL_15;
    }
LABEL_16:
    sub_B2C434(v5, v4);
  }
  animComp = (UnityEngine_Object_o *)this->fields.animComp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(animComp, 0LL, 0LL) )
  {
    v5 = (SimpleAnimation_o *)this->fields.animComp;
    if ( v5 )
    {
      UnityEngine_Animation__Play_50201580((UnityEngine_Animation_o *)v5, this->fields.selfAnimStr, 0LL);
      goto LABEL_15;
    }
    goto LABEL_16;
  }
LABEL_15:
  EffectSynchronize__synchronize(this, v4);
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
  __int64 v14; // x1
  EffectSynchronize_c *v15; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *simpleAnimCompList; // x0
  _BOOL8 v17; // x0
  __int64 v18; // x1
  Il2CppObject *current; // x20
  const MethodInfo *v20; // x1
  __int64 v21; // x1
  bool IsEqualsName; // w8
  SimpleAnimation_o *v23; // x0
  SimpleAnimation_State_o *Item; // x0
  __int64 v25; // x1
  __int64 v26; // x3
  SimpleAnimation_State_o *v27; // x21
  SimpleAnimation_State_c *klass; // x8
  unsigned __int64 v29; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  SimpleAnimation_State_o *v32; // x0
  __int64 v33; // x1
  __int64 v34; // x3
  SimpleAnimation_State_o *v35; // x21
  SimpleAnimation_State_c *v36; // x8
  unsigned __int64 v37; // x10
  SimpleAnimation_State_c **v38; // x11
  __int64 v39; // x0
  float v40; // s0
  double v41; // d9
  SimpleAnimation_State_o *v42; // x0
  __int64 v43; // x1
  __int64 v44; // x3
  SimpleAnimation_State_o *v45; // x21
  SimpleAnimation_State_c *v46; // x8
  unsigned __int64 v47; // x10
  SimpleAnimation_State_c **v48; // x11
  __int64 v49; // x0
  float v50; // s0
  double v51; // d10
  UnityEngine_Object_o *v52; // x21
  UnityEngine_Object_o *animComp; // x20
  EffectSynchronize_c *v54; // x0
  _BOOL8 v55; // x0
  __int64 v56; // x1
  Il2CppObject *v57; // x20
  UnityEngine_TrackedReference_o *v58; // x0
  const MethodInfo *v59; // x1
  __int64 v60; // x1
  bool v61; // w8
  UnityEngine_Animation_o *v62; // x0
  UnityEngine_AnimationState_o *v63; // x0
  __int64 v64; // x1
  __int64 v65; // x1
  float length; // s0
  double v67; // d9
  UnityEngine_AnimationState_o *v68; // x0
  __int64 v69; // x1
  float v70; // s0
  double v71; // d10
  UnityEngine_Object_o *v72; // x21
  int v73; // w19
  System_Collections_Generic_List_Enumerator_T__o v74; // [xsp+0h] [xbp-C0h] BYREF
  int v75[4]; // [xsp+18h] [xbp-A8h]
  int v76; // [xsp+28h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v77; // [xsp+30h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v78; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_418BD55 & 1) == 0 )
  {
    sub_B2C35C(&EffectSynchronize_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_Animation__Dispose__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__Dispose__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_Animation__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_Animation__get_Current__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Animation__GetEnumerator__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_SimpleAnimation__GetEnumerator__, v10);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    sub_B2C35C(&SimpleAnimation_State_TypeInfo, v12);
    byte_418BD55 = 1;
  }
  memset(&v78, 0, sizeof(v78));
  memset(&v77, 0, sizeof(v77));
  v76 = 0;
  simpleAnimComp = (UnityEngine_Object_o *)this->fields.simpleAnimComp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(simpleAnimComp, 0LL, 0LL) )
  {
    v15 = EffectSynchronize_TypeInfo;
    if ( (BYTE3(EffectSynchronize_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EffectSynchronize_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
      v15 = EffectSynchronize_TypeInfo;
    }
    simpleAnimCompList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v15->static_fields->simpleAnimCompList;
    if ( simpleAnimCompList )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v74,
        simpleAnimCompList,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_SimpleAnimation__GetEnumerator__);
      v78 = v74;
      while ( 1 )
      {
        v17 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v78,
                (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__MoveNext__);
        if ( !v17 )
          break;
        current = v78.fields.current;
        if ( !v78.fields.current )
          sub_B2C434(v17, v18);
        if ( SimpleAnimation__get_Item((SimpleAnimation_o *)v78.fields.current, this->fields.syncAnimStr, 0LL) )
        {
          IsEqualsName = EffectSynchronize__IsEqualsName(this, v20);
          v23 = this->fields.simpleAnimComp;
          if ( IsEqualsName )
          {
            if ( !v23 )
              sub_B2C434(0LL, v21);
            Item = SimpleAnimation__get_Item(v23, this->fields.syncAnimStr, 0LL);
            v27 = Item;
            if ( !Item )
              sub_B2C434(0LL, v25);
            klass = Item->klass;
            if ( *(_WORD *)&Item->klass->_2.bitflags1 )
            {
              v29 = 0LL;
              p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
              while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
              {
                ++v29;
                p_offset += 2;
                if ( v29 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
                  goto LABEL_22;
              }
              p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13].method;
            }
            else
            {
LABEL_22:
              p_method = sub_AC5258(Item, SimpleAnimation_State_TypeInfo, 13LL, v26);
            }
            (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(v27, *(_QWORD *)(p_method + 8));
          }
          else
          {
            if ( !v23 )
              sub_B2C434(0LL, v21);
            v32 = SimpleAnimation__get_Item(v23, this->fields.selfAnimStr, 0LL);
            v35 = v32;
            if ( !v32 )
              sub_B2C434(0LL, v33);
            v36 = v32->klass;
            if ( *(_WORD *)&v32->klass->_2.bitflags1 )
            {
              v37 = 0LL;
              v38 = (SimpleAnimation_State_c **)&v36->_1.interfaceOffsets->offset;
              while ( *(v38 - 1) != SimpleAnimation_State_TypeInfo )
              {
                ++v37;
                v38 += 2;
                if ( v37 >= *(unsigned __int16 *)&v32->klass->_2.bitflags1 )
                  goto LABEL_29;
              }
              v39 = (__int64)&v36->vtable[*(_DWORD *)v38 + 13].method;
            }
            else
            {
LABEL_29:
              v39 = sub_AC5258(v32, SimpleAnimation_State_TypeInfo, 13LL, v34);
            }
            v40 = (*(float (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v39)(v35, *(_QWORD *)(v39 + 8));
          }
          if ( v40 == INFINITY )
            v41 = -INFINITY;
          else
            v41 = v40;
          v42 = SimpleAnimation__get_Item((SimpleAnimation_o *)current, this->fields.syncAnimStr, 0LL);
          v45 = v42;
          if ( !v42 )
            sub_B2C434(0LL, v43);
          v46 = v42->klass;
          if ( *(_WORD *)&v42->klass->_2.bitflags1 )
          {
            v47 = 0LL;
            v48 = (SimpleAnimation_State_c **)&v46->_1.interfaceOffsets->offset;
            while ( *(v48 - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v47;
              v48 += 2;
              if ( v47 >= *(unsigned __int16 *)&v42->klass->_2.bitflags1 )
                goto LABEL_42;
            }
            v49 = (__int64)&v46->vtable[*(_DWORD *)v48 + 13].method;
          }
          else
          {
LABEL_42:
            v49 = sub_AC5258(v42, SimpleAnimation_State_TypeInfo, 13LL, v44);
          }
          v50 = (*(float (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v49)(v45, *(_QWORD *)(v49 + 8));
          v51 = v50 == INFINITY ? -INFINITY : v50;
          if ( SimpleAnimation__get_isPlaying((SimpleAnimation_o *)current, 0LL)
            && UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)current, 0LL) )
          {
            v52 = (UnityEngine_Object_o *)this->fields.simpleAnimComp;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( (((int)v41 == (int)v51) & UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, v52, 0LL)) != 0 )
            {
              BasicHelper__SynchronizeAnimation_19216972(
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
      v75[0] = 470;
      v76 = 1;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v78,
        (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__Dispose__);
      v76 = 0;
      return;
    }
LABEL_103:
    sub_B2C434(simpleAnimCompList, v14);
  }
  animComp = (UnityEngine_Object_o *)this->fields.animComp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(animComp, 0LL, 0LL) )
    return;
  v54 = EffectSynchronize_TypeInfo;
  if ( (BYTE3(EffectSynchronize_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EffectSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
    v54 = EffectSynchronize_TypeInfo;
  }
  simpleAnimCompList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v54->static_fields->animCompList;
  if ( !simpleAnimCompList )
    goto LABEL_103;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v74,
    simpleAnimCompList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_Animation__GetEnumerator__);
  v77 = v74;
  while ( 1 )
  {
    v55 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v77,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_Animation__MoveNext__);
    if ( !v55 )
      break;
    v57 = v77.fields.current;
    if ( !v77.fields.current )
      sub_B2C434(v55, v56);
    v58 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                              (UnityEngine_Animation_o *)v77.fields.current,
                                              this->fields.syncAnimStr,
                                              0LL);
    if ( !UnityEngine_TrackedReference__op_Equality(v58, 0LL, 0LL) )
    {
      v61 = EffectSynchronize__IsEqualsName(this, v59);
      v62 = this->fields.animComp;
      if ( v61 )
      {
        if ( !v62 )
          sub_B2C434(0LL, v60);
        v63 = UnityEngine_Animation__get_Item(v62, this->fields.syncAnimStr, 0LL);
        if ( !v63 )
          sub_B2C434(0LL, v64);
      }
      else
      {
        if ( !v62 )
          sub_B2C434(0LL, v60);
        v63 = UnityEngine_Animation__get_Item(v62, this->fields.selfAnimStr, 0LL);
        if ( !v63 )
          sub_B2C434(0LL, v65);
      }
      length = UnityEngine_AnimationState__get_length(v63, 0LL);
      if ( length == INFINITY )
        v67 = -INFINITY;
      else
        v67 = length;
      v68 = UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v57, this->fields.syncAnimStr, 0LL);
      if ( !v68 )
        sub_B2C434(0LL, v69);
      v70 = UnityEngine_AnimationState__get_length(v68, 0LL);
      v71 = v70 == INFINITY ? -INFINITY : v70;
      if ( UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)v57, 0LL)
        && UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)v57, 0LL) )
      {
        v72 = (UnityEngine_Object_o *)this->fields.animComp;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( (((int)v67 == (int)v71) & UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v57, v72, 0LL)) != 0 )
        {
          BasicHelper__SynchronizeAnimation(
            this->fields.animComp,
            this->fields.selfAnimStr,
            this->fields.syncAnimStr,
            (UnityEngine_Animation_o *)v57,
            0LL);
          break;
        }
      }
    }
  }
  v75[0] = 470;
  v73 = ++v76;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v77,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_Animation__Dispose__);
  if ( v73 && v75[v73 - 1] == 470 )
    v76 = v73 - 1;
}