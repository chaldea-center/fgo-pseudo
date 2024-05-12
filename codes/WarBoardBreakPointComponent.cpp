void __fastcall WarBoardBreakPointComponent___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  struct WarBoardBreakPointComponent_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct WarBoardBreakPointComponent_StaticFields *v17; // x0
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct WarBoardBreakPointComponent_StaticFields *v25; // x0
  System_Int32_array **v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct WarBoardBreakPointComponent_StaticFields *v33; // x0
  System_Int32_array **v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  struct WarBoardBreakPointComponent_StaticFields *v41; // x0
  System_Int32_array **v42; // x1
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  struct WarBoardBreakPointComponent_StaticFields *v49; // x0
  System_Int32_array **v50; // x1
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  struct WarBoardBreakPointComponent_StaticFields *v57; // x0
  System_Int32_array **v58; // x1
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  struct WarBoardBreakPointComponent_StaticFields *v65; // x0
  System_Int32_array **v66; // x1
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  struct WarBoardBreakPointComponent_StaticFields *v73; // x0
  System_Int32_array **v74; // x1
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7

  if ( (byte_43899D9 & 1) == 0 )
  {
    sub_B775C4(&WarBoardBreakPointComponent_TypeInfo);
    sub_B775C4(&StringLiteral_9142/*"MasterPoint_recharge_effect_1"*/);
    sub_B775C4(&StringLiteral_17274/*"break_on_boss"*/);
    sub_B775C4(&StringLiteral_20828/*"master_gauge_off_{0}"*/);
    sub_B775C4(&StringLiteral_17272/*"break_off_boss"*/);
    sub_B775C4(&StringLiteral_17273/*"break_on"*/);
    sub_B775C4(&StringLiteral_17271/*"break_off"*/);
    sub_B775C4(&StringLiteral_23680/*"wall_gauge_{0}"*/);
    sub_B775C4(&StringLiteral_20829/*"master_gauge_{0}"*/);
    sub_B775C4(&StringLiteral_2975/*"BreakPoint_effect_{0}"*/);
    sub_B775C4(&StringLiteral_9141/*"MasterPoint_effect_{0}"*/);
    byte_43899D9 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)WarBoardBreakPointComponent_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_17273/*"break_on"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_17273/*"break_on"*/;
  sub_B77560(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_17271/*"break_off"*/;
  v9->BreakPointOffImageName = (struct System_String_o *)StringLiteral_17271/*"break_off"*/;
  sub_B77560((BattleServantConfConponent_o *)&v9->BreakPointOffImageName, v10, v11, v12, v13, v14, v15, v16);
  v17 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_17274/*"break_on_boss"*/;
  v17->EnemyBreakPointOnImageName = (struct System_String_o *)StringLiteral_17274/*"break_on_boss"*/;
  sub_B77560((BattleServantConfConponent_o *)&v17->EnemyBreakPointOnImageName, v18, v19, v20, v21, v22, v23, v24);
  v25 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v26 = (System_Int32_array **)StringLiteral_17272/*"break_off_boss"*/;
  v25->EnemyBreakPointOffImageName = (struct System_String_o *)StringLiteral_17272/*"break_off_boss"*/;
  sub_B77560((BattleServantConfConponent_o *)&v25->EnemyBreakPointOffImageName, v26, v27, v28, v29, v30, v31, v32);
  v33 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v34 = (System_Int32_array **)StringLiteral_2975/*"BreakPoint_effect_{0}"*/;
  v33->BreakPointEffectName = (struct System_String_o *)StringLiteral_2975/*"BreakPoint_effect_{0}"*/;
  sub_B77560((BattleServantConfConponent_o *)&v33->BreakPointEffectName, v34, v35, v36, v37, v38, v39, v40);
  v41 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v42 = (System_Int32_array **)StringLiteral_20829/*"master_gauge_{0}"*/;
  v41->MasterPointOnImageName = (struct System_String_o *)StringLiteral_20829/*"master_gauge_{0}"*/;
  sub_B77560((BattleServantConfConponent_o *)&v41->MasterPointOnImageName, v42, v43, v44, v45, v46, v47, v48);
  v49 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v50 = (System_Int32_array **)StringLiteral_20828/*"master_gauge_off_{0}"*/;
  v49->MasterPointOffImageName = (struct System_String_o *)StringLiteral_20828/*"master_gauge_off_{0}"*/;
  sub_B77560((BattleServantConfConponent_o *)&v49->MasterPointOffImageName, v50, v51, v52, v53, v54, v55, v56);
  v57 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v58 = (System_Int32_array **)StringLiteral_9141/*"MasterPoint_effect_{0}"*/;
  v57->MasterPointEffectName = (struct System_String_o *)StringLiteral_9141/*"MasterPoint_effect_{0}"*/;
  sub_B77560((BattleServantConfConponent_o *)&v57->MasterPointEffectName, v58, v59, v60, v61, v62, v63, v64);
  v65 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v66 = (System_Int32_array **)StringLiteral_9142/*"MasterPoint_recharge_effect_1"*/;
  v65->MasterPointRechargeEffectName = (struct System_String_o *)StringLiteral_9142/*"MasterPoint_recharge_effect_1"*/;
  sub_B77560((BattleServantConfConponent_o *)&v65->MasterPointRechargeEffectName, v66, v67, v68, v69, v70, v71, v72);
  v73 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v74 = (System_Int32_array **)StringLiteral_23680/*"wall_gauge_{0}"*/;
  v73->wallPointImageName = (struct System_String_o *)StringLiteral_23680/*"wall_gauge_{0}"*/;
  sub_B77560((BattleServantConfConponent_o *)&v73->wallPointImageName, v74, v75, v76, v77, v78, v79, v80);
}


void __fastcall WarBoardBreakPointComponent___ctor(WarBoardBreakPointComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


System_String_o *__fastcall WarBoardBreakPointComponent__GetBreakEffectName(
        WarBoardBreakPointComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  WarBoardBreakPointComponent_c *v4; // x0
  int *v5; // x1
  System_String_o *MasterPointEffectName; // x19
  System_Int32_c *v7; // x0
  Il2CppObject *v8; // x0
  WarBoardBreakPointComponent_c *v10; // x0
  _BOOL4 isEnemyServant; // w9
  int v12; // w8
  int v13; // [xsp+8h] [xbp-18h] BYREF
  int v14; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_43899D2 & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&WarBoardBreakPointComponent_TypeInfo);
    byte_43899D2 = 1;
  }
  if ( this->fields.isMaster || this->fields.isThirdForce )
  {
    v4 = WarBoardBreakPointComponent_TypeInfo;
    if ( (BYTE3(WarBoardBreakPointComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
      v4 = WarBoardBreakPointComponent_TypeInfo;
    }
    v5 = &v13;
    MasterPointEffectName = v4->static_fields->MasterPointEffectName;
    v7 = int_TypeInfo;
    v13 = 1;
  }
  else
  {
    v10 = WarBoardBreakPointComponent_TypeInfo;
    if ( (BYTE3(WarBoardBreakPointComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
      v10 = WarBoardBreakPointComponent_TypeInfo;
    }
    isEnemyServant = this->fields.isEnemyServant;
    v5 = &v14;
    MasterPointEffectName = v10->static_fields->BreakPointEffectName;
    v7 = int_TypeInfo;
    if ( isEnemyServant )
      v12 = 2;
    else
      v12 = 1;
    v14 = v12;
  }
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(v7, v5, v2);
  return System_String__Format(MasterPointEffectName, v8, 0LL);
}


System_String_o *__fastcall WarBoardBreakPointComponent__GetImageName(
        WarBoardBreakPointComponent_o *this,
        bool isActiveSprite,
        const MethodInfo *method)
{
  WarBoardBreakPointComponent_c *v5; // x0
  int32_t objectColorNumber; // w9
  System_String_o *MasterPointOffImageName; // x19
  WarBoardBreakPointComponent_c *v8; // x0
  Il2CppObject *v9; // x0
  WarBoardBreakPointComponent_c *v11; // x0
  WarBoardBreakPointComponent_c *v12; // x0
  WarBoardBreakPointComponent_c *v13; // x0
  int32_t v14; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_43899D1 & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&WarBoardBreakPointComponent_TypeInfo);
    byte_43899D1 = 1;
  }
  if ( !isActiveSprite )
  {
    if ( !this->fields.isThirdForce )
    {
      if ( this->fields.isMaster )
      {
        v11 = WarBoardBreakPointComponent_TypeInfo;
        if ( (BYTE3(WarBoardBreakPointComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
          v11 = WarBoardBreakPointComponent_TypeInfo;
        }
        objectColorNumber = this->fields.objectColorNumber;
        MasterPointOffImageName = v11->static_fields->MasterPointOffImageName;
        goto LABEL_15;
      }
      v13 = WarBoardBreakPointComponent_TypeInfo;
      if ( this->fields.isEnemyServant )
      {
        if ( (WORD1(WarBoardBreakPointComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
          v13 = WarBoardBreakPointComponent_TypeInfo;
        }
        return v13->static_fields->EnemyBreakPointOffImageName;
      }
      else
      {
        if ( (WORD1(WarBoardBreakPointComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
          v13 = WarBoardBreakPointComponent_TypeInfo;
        }
        return v13->static_fields->BreakPointOffImageName;
      }
    }
LABEL_11:
    v8 = WarBoardBreakPointComponent_TypeInfo;
    if ( (BYTE3(WarBoardBreakPointComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
      v8 = WarBoardBreakPointComponent_TypeInfo;
    }
    objectColorNumber = this->fields.objectColorNumber;
    MasterPointOffImageName = v8->static_fields->wallPointImageName;
    goto LABEL_15;
  }
  if ( this->fields.isThirdForce )
    goto LABEL_11;
  if ( this->fields.isMaster )
  {
    v5 = WarBoardBreakPointComponent_TypeInfo;
    if ( (BYTE3(WarBoardBreakPointComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
      v5 = WarBoardBreakPointComponent_TypeInfo;
    }
    objectColorNumber = this->fields.objectColorNumber;
    MasterPointOffImageName = v5->static_fields->MasterPointOnImageName;
LABEL_15:
    v14 = objectColorNumber;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14, method);
    return System_String__Format(MasterPointOffImageName, v9, 0LL);
  }
  v12 = WarBoardBreakPointComponent_TypeInfo;
  if ( this->fields.isEnemyServant )
  {
    if ( (WORD1(WarBoardBreakPointComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
      v12 = WarBoardBreakPointComponent_TypeInfo;
    }
    return v12->static_fields->EnemyBreakPointOnImageName;
  }
  else
  {
    if ( (WORD1(WarBoardBreakPointComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
      v12 = WarBoardBreakPointComponent_TypeInfo;
    }
    return v12->static_fields->BreakPointOnImageName;
  }
}


void __fastcall WarBoardBreakPointComponent__Initialize(
        WarBoardBreakPointComponent_o *this,
        int32_t depth,
        int32_t number,
        bool isMaster,
        bool isEnemyServant,
        bool isThirdForce,
        const MethodInfo *method)
{
  UnityEngine_Object_o *activeObject; // x22
  __int64 v14; // x1
  UIWidget_o *v15; // x0
  const MethodInfo *v16; // x3
  UnityEngine_Object_o *deactiveObject; // x22
  const MethodInfo *v18; // x3
  UnityEngine_Object_o *baseObject; // x22
  const MethodInfo *v20; // x3

  if ( (byte_43899D3 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_43899D3 = 1;
  }
  this->fields.objectColorNumber = number;
  this->fields.isMaster = isMaster;
  this->fields.isEnemyServant = isEnemyServant;
  this->fields.isThirdForce = isThirdForce;
  activeObject = (UnityEngine_Object_o *)this->fields.activeObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(activeObject, 0LL, 0LL) )
  {
    v15 = (UIWidget_o *)this->fields.activeObject;
    if ( !v15 )
      goto LABEL_23;
    UIWidget__set_depth(v15, depth + 1, 0LL);
    WarBoardBreakPointComponent__SetChangeBreakPoint(this, this->fields.activeObject, 1, v16);
  }
  deactiveObject = (UnityEngine_Object_o *)this->fields.deactiveObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(deactiveObject, 0LL, 0LL) )
  {
    v15 = (UIWidget_o *)this->fields.deactiveObject;
    if ( !v15 )
      goto LABEL_23;
    UIWidget__set_depth(v15, depth + 1, 0LL);
    WarBoardBreakPointComponent__SetChangeBreakPoint(this, this->fields.deactiveObject, 0, v18);
  }
  baseObject = (UnityEngine_Object_o *)this->fields.baseObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(baseObject, 0LL, 0LL) )
  {
    v15 = (UIWidget_o *)this->fields.baseObject;
    if ( v15 )
    {
      UIWidget__set_depth(v15, depth, 0LL);
      if ( !isThirdForce )
        WarBoardBreakPointComponent__SetChangeBreakPoint(this, this->fields.baseObject, 0, v20);
      goto LABEL_22;
    }
LABEL_23:
    sub_B7769C(v15, v14);
  }
LABEL_22:
  WarBoardBreakPointComponent__SetActive(this, this->fields.startState, 0, v20);
}


void __fastcall WarBoardBreakPointComponent__OnBreak(
        WarBoardBreakPointComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        WarBoardTaskBase_TaskCallback_o *startCallback,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x22
  const MethodInfo *v8; // x1
  char *BreakEffectName; // x0
  __int64 v10; // x1
  Il2CppObject *CommonEffectAsset_object; // x22
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_GameObject_o *v13; // x23
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  WarBoardCommonEffectPerformance_o *v20; // x0
  WarBoardCommonEffectPerformance_o *v21; // x22
  System_Int32_array **v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x8
  System_Delegate_o *EndCallback; // x23
  WarBoardTaskBase_TaskCallback_o *v31; // x24
  System_Int32_array **v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  WebViewManager_o *v39; // x19
  char *v40; // x20
  __int64 v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  __int64 v48; // x0
  __int64 v49; // x0
  const MethodInfo *v50; // [xsp+28h] [xbp-48h]
  System_Nullable_Vector3__o v51; // 0:x3.16
  System_Nullable_Vector3__o v52; // 0:x5.16

  if ( (byte_43899D4 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointEffectComponent___);
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject____69541584);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B775C4(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_B775C4(&Method_WarBoardBreakPointComponent__OnBreak_b__26_0__);
    sub_B775C4(&WarBoardCommonEffectPerformance_TypeInfo);
    sub_B775C4(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
    sub_B775C4(&WarBoardTaskBase___TypeInfo);
    byte_43899D4 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  BreakEffectName = (char *)WarBoardBreakPointComponent__GetBreakEffectName(this, v8);
  if ( !Instance )
    goto LABEL_29;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)Instance,
                               (System_String_o *)BreakEffectName,
                               (const MethodInfo_2E2592C *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)CommonEffectAsset_object, 0LL, 0LL) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    BreakEffectName = (char *)UnityEngine_Object__Instantiate_UILabel_(
                                (UILabel_o *)CommonEffectAsset_object,
                                transform,
                                (const MethodInfo_1DF9A3C *)Method_UnityEngine_Object_Instantiate_GameObject____69541584);
    if ( !BreakEffectName )
      goto LABEL_29;
    v13 = (UnityEngine_GameObject_o *)BreakEffectName;
    BreakEffectName = (char *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                (UnityEngine_GameObject_o *)BreakEffectName,
                                (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointEffectComponent___);
    if ( !BreakEffectName )
      goto LABEL_29;
    *((_QWORD *)BreakEffectName + 3) = this;
    sub_B77560(
      (BattleServantConfConponent_o *)(BreakEffectName + 24),
      (System_Int32_array **)this,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    v20 = (WarBoardCommonEffectPerformance_o *)sub_B77694(WarBoardCommonEffectPerformance_TypeInfo);
    *(_QWORD *)&v51.fields.value.fields.x = 0LL;
    *(_QWORD *)&v51.fields.value.fields.z = 0LL;
    *(_QWORD *)&v52.fields.value.fields.x = 0LL;
    *(_QWORD *)&v52.fields.value.fields.z = 0LL;
    v21 = v20;
    WarBoardCommonEffectPerformance___ctor(v20, 0LL, v13, v51, v52, (System_Nullable_Vector3__o)0, 0, 0, 1, v50);
    if ( startCallback )
    {
      if ( !v21 )
        goto LABEL_29;
      v22 = (System_Int32_array **)System_Delegate__Combine(
                                     (System_Delegate_o *)v21->fields.StartCallback,
                                     (System_Delegate_o *)startCallback,
                                     0LL);
      v29 = v22;
      if ( v22 && *v22 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
        goto LABEL_30;
      v21->fields.StartCallback = (struct WarBoardTaskBase_TaskCallback_o *)v22;
      sub_B77560((BattleServantConfConponent_o *)&v21->fields.StartCallback, v22, v23, v24, v25, v26, v27, v28);
    }
    else if ( !v21 )
    {
      goto LABEL_29;
    }
    EndCallback = (System_Delegate_o *)v21->fields.EndCallback;
    v31 = (WarBoardTaskBase_TaskCallback_o *)sub_B77694(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(
      v31,
      (Il2CppObject *)this,
      Method_WarBoardBreakPointComponent__OnBreak_b__26_0__,
      0LL);
    v32 = (System_Int32_array **)System_Delegate__Combine(EndCallback, (System_Delegate_o *)v31, 0LL);
    v29 = v32;
    if ( !v32 || *v32 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      v21->fields.EndCallback = (struct WarBoardTaskBase_TaskCallback_o *)v32;
      sub_B77560((BattleServantConfConponent_o *)&v21->fields.EndCallback, v32, v33, v34, v35, v36, v37, v38);
      if ( taskList )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)taskList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
        return;
      }
      v39 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      BreakEffectName = (char *)sub_B775DC(WarBoardTaskBase___TypeInfo, 1LL);
      if ( !BreakEffectName )
        goto LABEL_29;
      v40 = BreakEffectName;
      v41 = sub_B77684(v21, *(_QWORD *)(*(_QWORD *)BreakEffectName + 64LL));
      if ( v41 )
      {
        if ( !*((_DWORD *)v40 + 6) )
        {
          v49 = sub_B776C8(v41);
          sub_B77668(v49, 0LL);
        }
        *((_QWORD *)v40 + 4) = v21;
        sub_B77560((BattleServantConfConponent_o *)(v40 + 32), (System_Int32_array **)v21, v42, v43, v44, v45, v46, v47);
        if ( v39 )
        {
          WarBoardManager__InsertTask((WarBoardManager_o *)v39, 0, (WarBoardTaskBase_array *)v40, 0LL);
          return;
        }
LABEL_29:
        sub_B7769C(BreakEffectName, v10);
      }
LABEL_31:
      v48 = sub_B776BC();
      sub_B77668(v48, 0LL);
    }
LABEL_30:
    sub_B77990(v29);
    goto LABEL_31;
  }
}


void __fastcall WarBoardBreakPointComponent__SetActive(
        WarBoardBreakPointComponent_o *this,
        bool active,
        bool force,
        const MethodInfo *method)
{
  _BOOL4 v4; // w19
  UnityEngine_Object_o *activeObject; // x21
  __int64 v7; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *deactiveObject; // x21

  v4 = active;
  if ( (byte_43899D6 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_43899D6 = 1;
  }
  if ( ((!this->fields._isActive_k__BackingField ^ v4) & 1) == 0 )
  {
    activeObject = (UnityEngine_Object_o *)this->fields.activeObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(activeObject, 0LL, 0LL) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.activeObject;
      if ( !gameObject )
        goto LABEL_20;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_20;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v4, 0LL);
    }
    deactiveObject = (UnityEngine_Object_o *)this->fields.deactiveObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(deactiveObject, 0LL, 0LL) )
      goto LABEL_18;
    gameObject = (UnityEngine_Component_o *)this->fields.deactiveObject;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, !v4, 0LL);
LABEL_18:
        this->fields._isActive_k__BackingField = v4;
        return;
      }
    }
LABEL_20:
    sub_B7769C(gameObject, v7);
  }
}


void __fastcall WarBoardBreakPointComponent__SetBreakPointFadeIn(
        WarBoardBreakPointComponent_o *this,
        float duration,
        const MethodInfo *method)
{
  UnityEngine_Object_o *activeObject; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *v7; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *deactiveObject; // x20
  UnityEngine_GameObject_o *v10; // x0

  if ( (byte_43899D8 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_43899D8 = 1;
  }
  activeObject = (UnityEngine_Object_o *)this->fields.activeObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(activeObject, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Component_o *)this->fields.activeObject;
    if ( !v7 )
      goto LABEL_16;
    gameObject = UnityEngine_Component__get_gameObject(v7, 0LL);
    TweenAlpha__Begin(gameObject, duration, 1.0, 0LL);
  }
  deactiveObject = (UnityEngine_Object_o *)this->fields.deactiveObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(deactiveObject, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Component_o *)this->fields.deactiveObject;
    if ( v7 )
    {
      v10 = UnityEngine_Component__get_gameObject(v7, 0LL);
      TweenAlpha__Begin(v10, duration, 1.0, 0LL);
      return;
    }
LABEL_16:
    sub_B7769C(v7, v6);
  }
}


void __fastcall WarBoardBreakPointComponent__SetBreakPointFadeOut(
        WarBoardBreakPointComponent_o *this,
        float duration,
        const MethodInfo *method)
{
  UnityEngine_Object_o *activeObject; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *v7; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *deactiveObject; // x20
  UnityEngine_GameObject_o *v10; // x0

  if ( (byte_43899D7 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_43899D7 = 1;
  }
  activeObject = (UnityEngine_Object_o *)this->fields.activeObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(activeObject, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Component_o *)this->fields.activeObject;
    if ( !v7 )
      goto LABEL_16;
    gameObject = UnityEngine_Component__get_gameObject(v7, 0LL);
    TweenAlpha__Begin(gameObject, duration, 0.0, 0LL);
  }
  deactiveObject = (UnityEngine_Object_o *)this->fields.deactiveObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(deactiveObject, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Component_o *)this->fields.deactiveObject;
    if ( v7 )
    {
      v10 = UnityEngine_Component__get_gameObject(v7, 0LL);
      TweenAlpha__Begin(v10, duration, 0.0, 0LL);
      return;
    }
LABEL_16:
    sub_B7769C(v7, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardBreakPointComponent__SetChangeBreakPoint(
        WarBoardBreakPointComponent_o *this,
        UISprite_o *breakPoint,
        bool isActive,
        const MethodInfo *method)
{
  UIAtlas_o *mAtlas; // x20
  UISpriteData_o *Sprite; // x0

  if ( !breakPoint
    || (mAtlas = breakPoint->fields.mAtlas,
        this = (WarBoardBreakPointComponent_o *)WarBoardBreakPointComponent__GetImageName(
                                                  this,
                                                  isActive,
                                                  (const MethodInfo *)isActive),
        !mAtlas) )
  {
    sub_B7769C(this, breakPoint);
  }
  Sprite = UIAtlas__GetSprite(mAtlas, (System_String_o *)this, 0LL);
  if ( Sprite )
    UISprite__set_spriteName(breakPoint, Sprite->fields.name, 0LL);
}


void __fastcall WarBoardBreakPointComponent__ShowMasterRechargeEffect(
        WarBoardBreakPointComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  char *Instance; // x0
  __int64 v6; // x1
  WarBoardManager_o *v7; // x21
  Il2CppObject *CommonEffectAsset_object; // x21
  UnityEngine_Transform_o *transform; // x22
  UnityEngine_GameObject_o *v10; // x22
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  WarBoardCommonEffectPerformance_o *v17; // x0
  WarBoardCommonEffectPerformance_o *v18; // x21
  System_Delegate_o *StartCallback; // x23
  WarBoardTaskBase_TaskCallback_o *v20; // x24
  System_Int32_array **v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  WebViewManager_o *v28; // x19
  char *v29; // x20
  __int64 v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  __int64 v37; // x0
  __int64 v38; // x0
  const MethodInfo *v39; // [xsp+28h] [xbp-48h]
  System_Nullable_Vector3__o v40; // 0:x3.16
  System_Nullable_Vector3__o v41; // 0:x5.16

  if ( (byte_43899D5 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointEffectComponent___);
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject____69541584);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B775C4(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_B775C4(&Method_WarBoardBreakPointComponent__ShowMasterRechargeEffect_b__27_0__);
    sub_B775C4(&WarBoardBreakPointComponent_TypeInfo);
    sub_B775C4(&WarBoardCommonEffectPerformance_TypeInfo);
    sub_B775C4(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
    sub_B775C4(&WarBoardTaskBase___TypeInfo);
    byte_43899D5 = 1;
  }
  Instance = (char *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v7 = (WarBoardManager_o *)Instance;
  if ( (BYTE3(WarBoardBreakPointComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
  }
  if ( !v7 )
    goto LABEL_27;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               v7,
                               WarBoardBreakPointComponent_TypeInfo->static_fields->MasterPointRechargeEffectName,
                               (const MethodInfo_2E2592C *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)CommonEffectAsset_object, 0LL, 0LL) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Instance = (char *)UnityEngine_Object__Instantiate_UILabel_(
                         (UILabel_o *)CommonEffectAsset_object,
                         transform,
                         (const MethodInfo_1DF9A3C *)Method_UnityEngine_Object_Instantiate_GameObject____69541584);
    if ( !Instance )
      goto LABEL_27;
    v10 = (UnityEngine_GameObject_o *)Instance;
    Instance = (char *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                         (UnityEngine_GameObject_o *)Instance,
                         (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointEffectComponent___);
    if ( !Instance )
      goto LABEL_27;
    *((_QWORD *)Instance + 3) = this;
    sub_B77560(
      (BattleServantConfConponent_o *)(Instance + 24),
      (System_Int32_array **)this,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    v17 = (WarBoardCommonEffectPerformance_o *)sub_B77694(WarBoardCommonEffectPerformance_TypeInfo);
    *(_QWORD *)&v40.fields.value.fields.x = 0LL;
    *(_QWORD *)&v40.fields.value.fields.z = 0LL;
    *(_QWORD *)&v41.fields.value.fields.x = 0LL;
    *(_QWORD *)&v41.fields.value.fields.z = 0LL;
    v18 = v17;
    WarBoardCommonEffectPerformance___ctor(v17, 0LL, v10, v40, v41, (System_Nullable_Vector3__o)0, 0, 0, 1, v39);
    if ( !v18 )
      goto LABEL_27;
    StartCallback = (System_Delegate_o *)v18->fields.StartCallback;
    v20 = (WarBoardTaskBase_TaskCallback_o *)sub_B77694(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(
      v20,
      (Il2CppObject *)this,
      Method_WarBoardBreakPointComponent__ShowMasterRechargeEffect_b__27_0__,
      0LL);
    v21 = (System_Int32_array **)System_Delegate__Combine(StartCallback, (System_Delegate_o *)v20, 0LL);
    if ( v21 && *v21 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      sub_B77990(v21);
    }
    else
    {
      v18->fields.StartCallback = (struct WarBoardTaskBase_TaskCallback_o *)v21;
      sub_B77560((BattleServantConfConponent_o *)&v18->fields.StartCallback, v21, v22, v23, v24, v25, v26, v27);
      if ( taskList )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)taskList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v18,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
        return;
      }
      v28 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      Instance = (char *)sub_B775DC(WarBoardTaskBase___TypeInfo, 1LL);
      if ( !Instance )
        goto LABEL_27;
      v29 = Instance;
      v30 = sub_B77684(v18, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
      if ( v30 )
      {
        if ( !*((_DWORD *)v29 + 6) )
        {
          v38 = sub_B776C8(v30);
          sub_B77668(v38, 0LL);
        }
        *((_QWORD *)v29 + 4) = v18;
        sub_B77560((BattleServantConfConponent_o *)(v29 + 32), (System_Int32_array **)v18, v31, v32, v33, v34, v35, v36);
        if ( v28 )
        {
          WarBoardManager__InsertTask((WarBoardManager_o *)v28, 0, (WarBoardTaskBase_array *)v29, 0LL);
          return;
        }
LABEL_27:
        sub_B7769C(Instance, v6);
      }
    }
    v37 = sub_B776BC();
    sub_B77668(v37, 0LL);
  }
}


void __fastcall WarBoardBreakPointComponent___OnBreak_b__26_0(
        WarBoardBreakPointComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  WarBoardBreakPointComponent__SetActive(this, 0, 0, v2);
}


void __fastcall WarBoardBreakPointComponent___ShowMasterRechargeEffect_b__27_0(
        WarBoardBreakPointComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  WarBoardBreakPointComponent__SetActive(this, 1, 0, v2);
}


bool __fastcall WarBoardBreakPointComponent__get_isActive(
        WarBoardBreakPointComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._isActive_k__BackingField;
}


void __fastcall WarBoardBreakPointComponent__set_isActive(
        WarBoardBreakPointComponent_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._isActive_k__BackingField = value;
}