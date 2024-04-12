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

  if ( (byte_42B4636 & 1) == 0 )
  {
    sub_B52984(&EffectSynchronize_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Animation___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_SimpleAnimation___ctor__);
    sub_B52984(&System_Collections_Generic_List_SimpleAnimation__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_Animation__TypeInfo);
    byte_42B4636 = 1;
  }
  v1 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_Animation__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v1,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_Animation___ctor__);
  static_fields = (BattleServantConfConponent_o *)EffectSynchronize_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_SimpleAnimation__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_SimpleAnimation___ctor__);
  v10 = EffectSynchronize_TypeInfo->static_fields;
  v10->simpleAnimCompList = (struct System_Collections_Generic_List_SimpleAnimation__o *)v9;
  sub_B52920(
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

  if ( (byte_42B4632 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_B52984(&EffectSynchronize_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Animation__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_SimpleAnimation__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_Animation__Contains__);
    sub_B52984(&Method_System_Collections_Generic_List_SimpleAnimation__Contains__);
    byte_42B4632 = 1;
  }
  Component_WebViewObject = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          (UnityEngine_Component_o *)this,
                                                          (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  p_simpleAnimComp = &this->fields.simpleAnimComp;
  this->fields.simpleAnimComp = Component_WebViewObject;
  sub_B52920(
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
          (const MethodInfo_2FF1A54 *)Method_System_Collections_Generic_List_SimpleAnimation__Contains__) )
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
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_SimpleAnimation__Add__);
  }
  v15 = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_Animation___);
  p_animComp = &this->fields.animComp;
  this->fields.animComp = v15;
  sub_B52920(
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
         (const MethodInfo_2FF1A54 *)Method_System_Collections_Generic_List_Animation__Contains__) )
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
    sub_B52A5C(simpleAnimCompList, v11);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    simpleAnimCompList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)*p_animComp,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_Animation__Add__);
}


bool __fastcall EffectSynchronize__IsEqualsName(EffectSynchronize_o *this, const MethodInfo *method)
{
  System_String_o *syncAnimStr; // x0

  syncAnimStr = this->fields.syncAnimStr;
  if ( !syncAnimStr )
    sub_B52A5C(0LL, method);
  return System_String__Equals_44555656(syncAnimStr, this->fields.selfAnimStr, 0LL);
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

  if ( (byte_42B4633 & 1) == 0 )
  {
    sub_B52984(&EffectSynchronize_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_SimpleAnimation__Remove__);
    sub_B52984(&Method_System_Collections_Generic_List_Animation__Remove__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B4633 = 1;
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
        (const MethodInfo_2FF2FB0 *)*v8);
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
    sub_B52A5C(simpleAnimCompList, v4);
  }
}


void __fastcall EffectSynchronize__OnEnable(EffectSynchronize_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *simpleAnimComp; // x20
  const MethodInfo *v4; // x1
  SimpleAnimation_o *v5; // x0
  UnityEngine_Object_o *animComp; // x20

  if ( (byte_42B4635 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B4635 = 1;
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
      SimpleAnimation__Play_16625408(v5, this->fields.selfAnimStr, 0LL);
      goto LABEL_15;
    }
LABEL_16:
    sub_B52A5C(v5, v4);
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
      UnityEngine_Animation__Play_51067744((UnityEngine_Animation_o *)v5, this->fields.selfAnimStr, 0LL);
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
  __int64 v16; // x3
  SimpleAnimation_State_o *v17; // x21
  SimpleAnimation_State_c *klass; // x8
  unsigned __int64 v19; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  SimpleAnimation_State_o *v22; // x0
  __int64 v23; // x1
  __int64 v24; // x3
  SimpleAnimation_State_o *v25; // x21
  SimpleAnimation_State_c *v26; // x8
  unsigned __int64 v27; // x10
  SimpleAnimation_State_c **v28; // x11
  __int64 v29; // x0
  float v30; // s0
  double v31; // d9
  SimpleAnimation_State_o *v32; // x0
  __int64 v33; // x1
  __int64 v34; // x3
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
  _BOOL8 v45; // x0
  __int64 v46; // x1
  Il2CppObject *v47; // x20
  UnityEngine_TrackedReference_o *v48; // x0
  const MethodInfo *v49; // x1
  __int64 v50; // x1
  bool v51; // w8
  UnityEngine_Animation_o *v52; // x0
  UnityEngine_AnimationState_o *v53; // x0
  __int64 v54; // x1
  __int64 v55; // x1
  float length; // s0
  double v57; // d9
  UnityEngine_AnimationState_o *v58; // x0
  __int64 v59; // x1
  float v60; // s0
  double v61; // d10
  UnityEngine_Object_o *v62; // x21
  int v63; // w19
  System_Collections_Generic_List_Enumerator_T__o v64; // [xsp+0h] [xbp-C0h] BYREF
  int v65[4]; // [xsp+18h] [xbp-A8h]
  int v66; // [xsp+28h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v67; // [xsp+30h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v68; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_42B4634 & 1) == 0 )
  {
    sub_B52984(&EffectSynchronize_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_Animation__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_Animation__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_Animation__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_Animation__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_SimpleAnimation__GetEnumerator__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&SimpleAnimation_State_TypeInfo);
    byte_42B4634 = 1;
  }
  memset(&v68, 0, sizeof(v68));
  memset(&v67, 0, sizeof(v67));
  v66 = 0;
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
        &v64,
        simpleAnimCompList,
        (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_SimpleAnimation__GetEnumerator__);
      v68 = v64;
      while ( 1 )
      {
        v7 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
               &v68,
               (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__MoveNext__);
        if ( !v7 )
          break;
        current = v68.fields.current;
        if ( !v68.fields.current )
          sub_B52A5C(v7, v8);
        if ( SimpleAnimation__get_Item((SimpleAnimation_o *)v68.fields.current, this->fields.syncAnimStr, 0LL) )
        {
          IsEqualsName = EffectSynchronize__IsEqualsName(this, v10);
          v13 = this->fields.simpleAnimComp;
          if ( IsEqualsName )
          {
            if ( !v13 )
              sub_B52A5C(0LL, v11);
            Item = SimpleAnimation__get_Item(v13, this->fields.syncAnimStr, 0LL);
            v17 = Item;
            if ( !Item )
              sub_B52A5C(0LL, v15);
            klass = Item->klass;
            if ( *(_WORD *)&Item->klass->_2.bitflags1 )
            {
              v19 = 0LL;
              p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
              while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
              {
                ++v19;
                p_offset += 2;
                if ( v19 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
                  goto LABEL_22;
              }
              p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13].method;
            }
            else
            {
LABEL_22:
              p_method = sub_AEB880(Item, SimpleAnimation_State_TypeInfo, 13LL, v16);
            }
            (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(v17, *(_QWORD *)(p_method + 8));
          }
          else
          {
            if ( !v13 )
              sub_B52A5C(0LL, v11);
            v22 = SimpleAnimation__get_Item(v13, this->fields.selfAnimStr, 0LL);
            v25 = v22;
            if ( !v22 )
              sub_B52A5C(0LL, v23);
            v26 = v22->klass;
            if ( *(_WORD *)&v22->klass->_2.bitflags1 )
            {
              v27 = 0LL;
              v28 = (SimpleAnimation_State_c **)&v26->_1.interfaceOffsets->offset;
              while ( *(v28 - 1) != SimpleAnimation_State_TypeInfo )
              {
                ++v27;
                v28 += 2;
                if ( v27 >= *(unsigned __int16 *)&v22->klass->_2.bitflags1 )
                  goto LABEL_29;
              }
              v29 = (__int64)&v26->vtable[*(_DWORD *)v28 + 13].method;
            }
            else
            {
LABEL_29:
              v29 = sub_AEB880(v22, SimpleAnimation_State_TypeInfo, 13LL, v24);
            }
            v30 = (*(float (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v29)(v25, *(_QWORD *)(v29 + 8));
          }
          if ( v30 == INFINITY )
            v31 = -INFINITY;
          else
            v31 = v30;
          v32 = SimpleAnimation__get_Item((SimpleAnimation_o *)current, this->fields.syncAnimStr, 0LL);
          v35 = v32;
          if ( !v32 )
            sub_B52A5C(0LL, v33);
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
                goto LABEL_42;
            }
            v39 = (__int64)&v36->vtable[*(_DWORD *)v38 + 13].method;
          }
          else
          {
LABEL_42:
            v39 = sub_AEB880(v32, SimpleAnimation_State_TypeInfo, 13LL, v34);
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
            if ( (((int)v31 == (int)v41) & UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, v42, 0LL)) != 0 )
            {
              BasicHelper__SynchronizeAnimation_19348940(
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
      v65[0] = 470;
      v66 = 1;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v68,
        (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__Dispose__);
      v66 = 0;
      return;
    }
LABEL_103:
    sub_B52A5C(simpleAnimCompList, v4);
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
  simpleAnimCompList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v44->static_fields->animCompList;
  if ( !simpleAnimCompList )
    goto LABEL_103;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v64,
    simpleAnimCompList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_Animation__GetEnumerator__);
  v67 = v64;
  while ( 1 )
  {
    v45 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v67,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_Animation__MoveNext__);
    if ( !v45 )
      break;
    v47 = v67.fields.current;
    if ( !v67.fields.current )
      sub_B52A5C(v45, v46);
    v48 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                              (UnityEngine_Animation_o *)v67.fields.current,
                                              this->fields.syncAnimStr,
                                              0LL);
    if ( !UnityEngine_TrackedReference__op_Equality(v48, 0LL, 0LL) )
    {
      v51 = EffectSynchronize__IsEqualsName(this, v49);
      v52 = this->fields.animComp;
      if ( v51 )
      {
        if ( !v52 )
          sub_B52A5C(0LL, v50);
        v53 = UnityEngine_Animation__get_Item(v52, this->fields.syncAnimStr, 0LL);
        if ( !v53 )
          sub_B52A5C(0LL, v54);
      }
      else
      {
        if ( !v52 )
          sub_B52A5C(0LL, v50);
        v53 = UnityEngine_Animation__get_Item(v52, this->fields.selfAnimStr, 0LL);
        if ( !v53 )
          sub_B52A5C(0LL, v55);
      }
      length = UnityEngine_AnimationState__get_length(v53, 0LL);
      if ( length == INFINITY )
        v57 = -INFINITY;
      else
        v57 = length;
      v58 = UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v47, this->fields.syncAnimStr, 0LL);
      if ( !v58 )
        sub_B52A5C(0LL, v59);
      v60 = UnityEngine_AnimationState__get_length(v58, 0LL);
      v61 = v60 == INFINITY ? -INFINITY : v60;
      if ( UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)v47, 0LL)
        && UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)v47, 0LL) )
      {
        v62 = (UnityEngine_Object_o *)this->fields.animComp;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( (((int)v57 == (int)v61) & UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v47, v62, 0LL)) != 0 )
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
  v65[0] = 470;
  v63 = ++v66;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v67,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_Animation__Dispose__);
  if ( v63 && v65[v63 - 1] == 470 )
    v66 = v63 - 1;
}