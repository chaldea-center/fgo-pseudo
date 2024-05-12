void __fastcall EffectSynchronize___cctor(const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x19
  struct EffectSynchronize_StaticFields *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_438FA5C & 1) == 0 )
  {
    sub_B775C4(&EffectSynchronize_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Animation___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_SimpleAnimation___ctor__);
    sub_B775C4(&System_Collections_Generic_List_SimpleAnimation__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_Animation__TypeInfo);
    byte_438FA5C = 1;
  }
  v1 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_Animation__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v1,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_Animation___ctor__);
  static_fields = (BattleServantConfConponent_o *)EffectSynchronize_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_SimpleAnimation__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_SimpleAnimation___ctor__);
  v10 = EffectSynchronize_TypeInfo->static_fields;
  v10->simpleAnimCompList = (struct System_Collections_Generic_List_SimpleAnimation__o *)v9;
  sub_B77560(
    (BattleServantConfConponent_o *)&v10->simpleAnimCompList,
    (System_Int32_array **)v9,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}


void __fastcall EffectSynchronize___ctor(EffectSynchronize_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EffectSynchronize__Awake(EffectSynchronize_o *this, const MethodInfo *method)
{
  struct SimpleAnimation_o *Component_WebViewObject; // x0
  struct SimpleAnimation_o **p_simpleAnimComp; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  __int64 v11; // x1
  EffectSynchronize_c *v12; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *simpleAnimCompList; // x0
  EffectSynchronize_c *v14; // x0
  struct UnityEngine_Animation_o *v15; // x0
  struct UnityEngine_Animation_o **p_animComp; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  EffectSynchronize_c *v23; // x0
  EffectSynchronize_c *v24; // x0

  if ( (byte_438FA58 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_B775C4(&EffectSynchronize_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Animation__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_SimpleAnimation__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_Animation__Contains__);
    sub_B775C4(&Method_System_Collections_Generic_List_SimpleAnimation__Contains__);
    byte_438FA58 = 1;
  }
  Component_WebViewObject = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          (UnityEngine_Component_o *)this,
                                                          (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  p_simpleAnimComp = &this->fields.simpleAnimComp;
  this->fields.simpleAnimComp = Component_WebViewObject;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.simpleAnimComp,
    (System_Int32_array **)Component_WebViewObject,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v12 = EffectSynchronize_TypeInfo;
  if ( (BYTE3(EffectSynchronize_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EffectSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
    v12 = EffectSynchronize_TypeInfo;
  }
  simpleAnimCompList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v12->static_fields->simpleAnimCompList;
  if ( !simpleAnimCompList )
    goto LABEL_23;
  if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)simpleAnimCompList,
          (WarBoardManager_TaskList_o *)*p_simpleAnimComp,
          (const MethodInfo_30536E8 *)Method_System_Collections_Generic_List_SimpleAnimation__Contains__) )
  {
    v14 = EffectSynchronize_TypeInfo;
    if ( (BYTE3(EffectSynchronize_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EffectSynchronize_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
      v14 = EffectSynchronize_TypeInfo;
    }
    simpleAnimCompList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v14->static_fields->simpleAnimCompList;
    if ( !simpleAnimCompList )
      goto LABEL_23;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      simpleAnimCompList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)*p_simpleAnimComp,
      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_SimpleAnimation__Add__);
  }
  v15 = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_Animation___);
  p_animComp = &this->fields.animComp;
  this->fields.animComp = v15;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.animComp,
    (System_Int32_array **)v15,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v23 = EffectSynchronize_TypeInfo;
  if ( (BYTE3(EffectSynchronize_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EffectSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
    v23 = EffectSynchronize_TypeInfo;
  }
  simpleAnimCompList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v23->static_fields->animCompList;
  if ( !simpleAnimCompList )
    goto LABEL_23;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         (System_Collections_Generic_List_WarBoardManager_TaskList__o *)simpleAnimCompList,
         (WarBoardManager_TaskList_o *)*p_animComp,
         (const MethodInfo_30536E8 *)Method_System_Collections_Generic_List_Animation__Contains__) )
  {
    return;
  }
  v24 = EffectSynchronize_TypeInfo;
  if ( (BYTE3(EffectSynchronize_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EffectSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
    v24 = EffectSynchronize_TypeInfo;
  }
  simpleAnimCompList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v24->static_fields->animCompList;
  if ( !simpleAnimCompList )
LABEL_23:
    sub_B7769C(simpleAnimCompList, v11);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    simpleAnimCompList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)*p_animComp,
    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_Animation__Add__);
}


bool __fastcall EffectSynchronize__IsEqualsName(EffectSynchronize_o *this, const MethodInfo *method)
{
  System_String_o *syncAnimStr; // x0

  syncAnimStr = this->fields.syncAnimStr;
  if ( !syncAnimStr )
    sub_B7769C(0LL, method);
  return System_String__Equals_44889276(syncAnimStr, this->fields.selfAnimStr, 0LL);
}


void __fastcall EffectSynchronize__OnDestroy(EffectSynchronize_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *simpleAnimComp; // x20
  __int64 v4; // x1
  EffectSynchronize_c *v5; // x0
  System_Collections_Generic_List_WarBoardManager_TaskList__o *simpleAnimCompList; // x0
  WarBoardManager_TaskList_o *v7; // x1
  __int64 *v8; // x8
  UnityEngine_Object_o *animComp; // x20
  EffectSynchronize_c *v10; // x0

  if ( (byte_438FA59 & 1) == 0 )
  {
    sub_B775C4(&EffectSynchronize_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_SimpleAnimation__Remove__);
    sub_B775C4(&Method_System_Collections_Generic_List_Animation__Remove__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438FA59 = 1;
  }
  simpleAnimComp = (UnityEngine_Object_o *)this->fields.simpleAnimComp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(simpleAnimComp, 0LL, 0LL) )
  {
    v5 = EffectSynchronize_TypeInfo;
    if ( (BYTE3(EffectSynchronize_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EffectSynchronize_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
      v5 = EffectSynchronize_TypeInfo;
    }
    simpleAnimCompList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v5->static_fields->simpleAnimCompList;
    if ( simpleAnimCompList )
    {
      v7 = (WarBoardManager_TaskList_o *)this->fields.simpleAnimComp;
      v8 = &Method_System_Collections_Generic_List_SimpleAnimation__Remove__;
LABEL_21:
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        simpleAnimCompList,
        v7,
        (const MethodInfo_3054C44 *)*v8);
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
    v10 = EffectSynchronize_TypeInfo;
    if ( (BYTE3(EffectSynchronize_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EffectSynchronize_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
      v10 = EffectSynchronize_TypeInfo;
    }
    simpleAnimCompList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v10->static_fields->animCompList;
    if ( simpleAnimCompList )
    {
      v7 = (WarBoardManager_TaskList_o *)this->fields.animComp;
      v8 = &Method_System_Collections_Generic_List_Animation__Remove__;
      goto LABEL_21;
    }
LABEL_23:
    sub_B7769C(simpleAnimCompList, v4);
  }
}


void __fastcall EffectSynchronize__OnEnable(EffectSynchronize_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *simpleAnimComp; // x20
  const MethodInfo *v4; // x1
  SimpleAnimation_o *v5; // x0
  UnityEngine_Object_o *animComp; // x20

  if ( (byte_438FA5B & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438FA5B = 1;
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
      SimpleAnimation__Play_16815192(v5, this->fields.selfAnimStr, 0LL);
      goto LABEL_15;
    }
LABEL_16:
    sub_B7769C(v5, v4);
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
      UnityEngine_Animation__Play_51745976((UnityEngine_Animation_o *)v5, this->fields.selfAnimStr, 0LL);
      goto LABEL_15;
    }
    goto LABEL_16;
  }
LABEL_15:
  EffectSynchronize__synchronize(this, v4);
}


void __fastcall EffectSynchronize__synchronize(EffectSynchronize_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *simpleAnimComp; // x20
  __int64 v4; // x1
  EffectSynchronize_c *v5; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *simpleAnimCompList; // x0
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *current; // x20
  const MethodInfo *v10; // x1
  __int64 v11; // x1
  bool IsEqualsName; // w8
  SimpleAnimation_o *v13; // x0
  SimpleAnimation_State_o *Item; // x0
  __int64 v15; // x1
  SimpleAnimation_State_o *v16; // x21
  SimpleAnimation_State_c *klass; // x8
  unsigned __int64 v18; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  SimpleAnimation_State_o *v21; // x0
  __int64 v22; // x1
  SimpleAnimation_State_o *v23; // x21
  SimpleAnimation_State_c *v24; // x8
  unsigned __int64 v25; // x10
  SimpleAnimation_State_c **v26; // x11
  __int64 v27; // x0
  float v28; // s0
  double v29; // d9
  SimpleAnimation_State_o *v30; // x0
  __int64 v31; // x1
  SimpleAnimation_State_o *v32; // x21
  SimpleAnimation_State_c *v33; // x8
  unsigned __int64 v34; // x10
  SimpleAnimation_State_c **v35; // x11
  __int64 v36; // x0
  float v37; // s0
  double v38; // d10
  UnityEngine_Object_o *v39; // x21
  UnityEngine_Object_o *animComp; // x20
  EffectSynchronize_c *v41; // x0
  _BOOL8 v42; // x0
  __int64 v43; // x1
  Il2CppObject *v44; // x20
  UnityEngine_TrackedReference_o *v45; // x0
  const MethodInfo *v46; // x1
  __int64 v47; // x1
  bool v48; // w8
  UnityEngine_Animation_o *v49; // x0
  UnityEngine_AnimationState_o *v50; // x0
  __int64 v51; // x1
  __int64 v52; // x1
  float length; // s0
  double v54; // d9
  UnityEngine_AnimationState_o *v55; // x0
  __int64 v56; // x1
  float v57; // s0
  double v58; // d10
  UnityEngine_Object_o *v59; // x21
  int v60; // w19
  System_Collections_Generic_List_Enumerator_T__o v61; // [xsp+0h] [xbp-C0h] BYREF
  int v62[4]; // [xsp+18h] [xbp-A8h]
  int v63; // [xsp+28h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v64; // [xsp+30h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v65; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_438FA5A & 1) == 0 )
  {
    sub_B775C4(&EffectSynchronize_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_Animation__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_Animation__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_Animation__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_Animation__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_SimpleAnimation__GetEnumerator__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&SimpleAnimation_State_TypeInfo);
    byte_438FA5A = 1;
  }
  memset(&v65, 0, sizeof(v65));
  memset(&v64, 0, sizeof(v64));
  v63 = 0;
  simpleAnimComp = (UnityEngine_Object_o *)this->fields.simpleAnimComp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(simpleAnimComp, 0LL, 0LL) )
  {
    v5 = EffectSynchronize_TypeInfo;
    if ( (BYTE3(EffectSynchronize_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EffectSynchronize_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
      v5 = EffectSynchronize_TypeInfo;
    }
    simpleAnimCompList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v5->static_fields->simpleAnimCompList;
    if ( simpleAnimCompList )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v61,
        simpleAnimCompList,
        (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_SimpleAnimation__GetEnumerator__);
      v65 = v61;
      while ( 1 )
      {
        v7 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
               &v65,
               (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__MoveNext__);
        if ( !v7 )
          break;
        current = v65.fields.current;
        if ( !v65.fields.current )
          sub_B7769C(v7, v8);
        if ( SimpleAnimation__get_Item((SimpleAnimation_o *)v65.fields.current, this->fields.syncAnimStr, 0LL) )
        {
          IsEqualsName = EffectSynchronize__IsEqualsName(this, v10);
          v13 = this->fields.simpleAnimComp;
          if ( IsEqualsName )
          {
            if ( !v13 )
              sub_B7769C(0LL, v11);
            Item = SimpleAnimation__get_Item(v13, this->fields.syncAnimStr, 0LL);
            v16 = Item;
            if ( !Item )
              sub_B7769C(0LL, v15);
            klass = Item->klass;
            if ( *(_WORD *)&Item->klass->_2.bitflags1 )
            {
              v18 = 0LL;
              p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
              while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
              {
                ++v18;
                p_offset += 2;
                if ( v18 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
                  goto LABEL_22;
              }
              p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13].method;
            }
            else
            {
LABEL_22:
              p_method = sub_B0F4C0(Item, SimpleAnimation_State_TypeInfo, 13LL);
            }
            (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(v16, *(_QWORD *)(p_method + 8));
          }
          else
          {
            if ( !v13 )
              sub_B7769C(0LL, v11);
            v21 = SimpleAnimation__get_Item(v13, this->fields.selfAnimStr, 0LL);
            v23 = v21;
            if ( !v21 )
              sub_B7769C(0LL, v22);
            v24 = v21->klass;
            if ( *(_WORD *)&v21->klass->_2.bitflags1 )
            {
              v25 = 0LL;
              v26 = (SimpleAnimation_State_c **)&v24->_1.interfaceOffsets->offset;
              while ( *(v26 - 1) != SimpleAnimation_State_TypeInfo )
              {
                ++v25;
                v26 += 2;
                if ( v25 >= *(unsigned __int16 *)&v21->klass->_2.bitflags1 )
                  goto LABEL_29;
              }
              v27 = (__int64)&v24->vtable[*(_DWORD *)v26 + 13].method;
            }
            else
            {
LABEL_29:
              v27 = sub_B0F4C0(v21, SimpleAnimation_State_TypeInfo, 13LL);
            }
            v28 = (*(float (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v27)(v23, *(_QWORD *)(v27 + 8));
          }
          if ( v28 == INFINITY )
            v29 = -INFINITY;
          else
            v29 = v28;
          v30 = SimpleAnimation__get_Item((SimpleAnimation_o *)current, this->fields.syncAnimStr, 0LL);
          v32 = v30;
          if ( !v30 )
            sub_B7769C(0LL, v31);
          v33 = v30->klass;
          if ( *(_WORD *)&v30->klass->_2.bitflags1 )
          {
            v34 = 0LL;
            v35 = (SimpleAnimation_State_c **)&v33->_1.interfaceOffsets->offset;
            while ( *(v35 - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v34;
              v35 += 2;
              if ( v34 >= *(unsigned __int16 *)&v30->klass->_2.bitflags1 )
                goto LABEL_42;
            }
            v36 = (__int64)&v33->vtable[*(_DWORD *)v35 + 13].method;
          }
          else
          {
LABEL_42:
            v36 = sub_B0F4C0(v30, SimpleAnimation_State_TypeInfo, 13LL);
          }
          v37 = (*(float (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v36)(v32, *(_QWORD *)(v36 + 8));
          v38 = v37 == INFINITY ? -INFINITY : v37;
          if ( SimpleAnimation__get_isPlaying((SimpleAnimation_o *)current, 0LL)
            && UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)current, 0LL) )
          {
            v39 = (UnityEngine_Object_o *)this->fields.simpleAnimComp;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( (((int)v29 == (int)v38) & UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, v39, 0LL)) != 0 )
            {
              BasicHelper__SynchronizeAnimation_22416652(
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
      v62[0] = 470;
      v63 = 1;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v65,
        (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__Dispose__);
      v63 = 0;
      return;
    }
LABEL_103:
    sub_B7769C(simpleAnimCompList, v4);
  }
  animComp = (UnityEngine_Object_o *)this->fields.animComp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(animComp, 0LL, 0LL) )
    return;
  v41 = EffectSynchronize_TypeInfo;
  if ( (BYTE3(EffectSynchronize_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EffectSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
    v41 = EffectSynchronize_TypeInfo;
  }
  simpleAnimCompList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v41->static_fields->animCompList;
  if ( !simpleAnimCompList )
    goto LABEL_103;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v61,
    simpleAnimCompList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_Animation__GetEnumerator__);
  v64 = v61;
  while ( 1 )
  {
    v42 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v64,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_Animation__MoveNext__);
    if ( !v42 )
      break;
    v44 = v64.fields.current;
    if ( !v64.fields.current )
      sub_B7769C(v42, v43);
    v45 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                              (UnityEngine_Animation_o *)v64.fields.current,
                                              this->fields.syncAnimStr,
                                              0LL);
    if ( !UnityEngine_TrackedReference__op_Equality(v45, 0LL, 0LL) )
    {
      v48 = EffectSynchronize__IsEqualsName(this, v46);
      v49 = this->fields.animComp;
      if ( v48 )
      {
        if ( !v49 )
          sub_B7769C(0LL, v47);
        v50 = UnityEngine_Animation__get_Item(v49, this->fields.syncAnimStr, 0LL);
        if ( !v50 )
          sub_B7769C(0LL, v51);
      }
      else
      {
        if ( !v49 )
          sub_B7769C(0LL, v47);
        v50 = UnityEngine_Animation__get_Item(v49, this->fields.selfAnimStr, 0LL);
        if ( !v50 )
          sub_B7769C(0LL, v52);
      }
      length = UnityEngine_AnimationState__get_length(v50, 0LL);
      if ( length == INFINITY )
        v54 = -INFINITY;
      else
        v54 = length;
      v55 = UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v44, this->fields.syncAnimStr, 0LL);
      if ( !v55 )
        sub_B7769C(0LL, v56);
      v57 = UnityEngine_AnimationState__get_length(v55, 0LL);
      v58 = v57 == INFINITY ? -INFINITY : v57;
      if ( UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)v44, 0LL)
        && UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)v44, 0LL) )
      {
        v59 = (UnityEngine_Object_o *)this->fields.animComp;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( (((int)v54 == (int)v58) & UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v44, v59, 0LL)) != 0 )
        {
          BasicHelper__SynchronizeAnimation(
            this->fields.animComp,
            this->fields.selfAnimStr,
            this->fields.syncAnimStr,
            (UnityEngine_Animation_o *)v44,
            0LL);
          break;
        }
      }
    }
  }
  v62[0] = 470;
  v60 = ++v63;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v64,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_Animation__Dispose__);
  if ( v60 && v62[v60 - 1] == 470 )
    v63 = v60 - 1;
}