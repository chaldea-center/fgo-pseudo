void __fastcall WarBoardBreakPointComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v19; // x1
  struct WarBoardBreakPointComponent_StaticFields *v20; // x0
  System_Int32_array **v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct WarBoardBreakPointComponent_StaticFields *v28; // x0
  System_Int32_array **v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct WarBoardBreakPointComponent_StaticFields *v36; // x0
  System_Int32_array **v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  struct WarBoardBreakPointComponent_StaticFields *v44; // x0
  System_Int32_array **v45; // x1
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  struct WarBoardBreakPointComponent_StaticFields *v52; // x0
  System_Int32_array **v53; // x1
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  struct WarBoardBreakPointComponent_StaticFields *v60; // x0
  System_Int32_array **v61; // x1
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  struct WarBoardBreakPointComponent_StaticFields *v68; // x0
  System_Int32_array **v69; // x1
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  struct WarBoardBreakPointComponent_StaticFields *v76; // x0
  System_Int32_array **v77; // x1
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  struct WarBoardBreakPointComponent_StaticFields *v84; // x0
  System_Int32_array **v85; // x1
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7

  if ( (byte_41865DF & 1) == 0 )
  {
    sub_B2C35C(&WarBoardBreakPointComponent_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_8975/*"MasterPoint_recharge_effect_1"*/, v8);
    sub_B2C35C(&StringLiteral_16937/*"break_on_boss"*/, v9);
    sub_B2C35C(&StringLiteral_20412/*"master_gauge_off_{0}"*/, v10);
    sub_B2C35C(&StringLiteral_16935/*"break_off_boss"*/, v11);
    sub_B2C35C(&StringLiteral_16936/*"break_on"*/, v12);
    sub_B2C35C(&StringLiteral_16934/*"break_off"*/, v13);
    sub_B2C35C(&StringLiteral_23197/*"wall_gauge_{0}"*/, v14);
    sub_B2C35C(&StringLiteral_20413/*"master_gauge_{0}"*/, v15);
    sub_B2C35C(&StringLiteral_2865/*"BreakPoint_effect_{0}"*/, v16);
    sub_B2C35C(&StringLiteral_8974/*"MasterPoint_effect_{0}"*/, v17);
    byte_41865DF = 1;
  }
  static_fields = (BattleServantConfConponent_o *)WarBoardBreakPointComponent_TypeInfo->static_fields;
  v19 = (System_Int32_array **)StringLiteral_16936/*"break_on"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_16936/*"break_on"*/;
  sub_B2C2F8(static_fields, v19, v2, v3, v4, v5, v6, v7);
  v20 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v21 = (System_Int32_array **)StringLiteral_16934/*"break_off"*/;
  v20->BreakPointOffImageName = (struct System_String_o *)StringLiteral_16934/*"break_off"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v20->BreakPointOffImageName, v21, v22, v23, v24, v25, v26, v27);
  v28 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v29 = (System_Int32_array **)StringLiteral_16937/*"break_on_boss"*/;
  v28->EnemyBreakPointOnImageName = (struct System_String_o *)StringLiteral_16937/*"break_on_boss"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v28->EnemyBreakPointOnImageName, v29, v30, v31, v32, v33, v34, v35);
  v36 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v37 = (System_Int32_array **)StringLiteral_16935/*"break_off_boss"*/;
  v36->EnemyBreakPointOffImageName = (struct System_String_o *)StringLiteral_16935/*"break_off_boss"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v36->EnemyBreakPointOffImageName, v37, v38, v39, v40, v41, v42, v43);
  v44 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v45 = (System_Int32_array **)StringLiteral_2865/*"BreakPoint_effect_{0}"*/;
  v44->BreakPointEffectName = (struct System_String_o *)StringLiteral_2865/*"BreakPoint_effect_{0}"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v44->BreakPointEffectName, v45, v46, v47, v48, v49, v50, v51);
  v52 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v53 = (System_Int32_array **)StringLiteral_20413/*"master_gauge_{0}"*/;
  v52->MasterPointOnImageName = (struct System_String_o *)StringLiteral_20413/*"master_gauge_{0}"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v52->MasterPointOnImageName, v53, v54, v55, v56, v57, v58, v59);
  v60 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v61 = (System_Int32_array **)StringLiteral_20412/*"master_gauge_off_{0}"*/;
  v60->MasterPointOffImageName = (struct System_String_o *)StringLiteral_20412/*"master_gauge_off_{0}"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v60->MasterPointOffImageName, v61, v62, v63, v64, v65, v66, v67);
  v68 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v69 = (System_Int32_array **)StringLiteral_8974/*"MasterPoint_effect_{0}"*/;
  v68->MasterPointEffectName = (struct System_String_o *)StringLiteral_8974/*"MasterPoint_effect_{0}"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v68->MasterPointEffectName, v69, v70, v71, v72, v73, v74, v75);
  v76 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v77 = (System_Int32_array **)StringLiteral_8975/*"MasterPoint_recharge_effect_1"*/;
  v76->MasterPointRechargeEffectName = (struct System_String_o *)StringLiteral_8975/*"MasterPoint_recharge_effect_1"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v76->MasterPointRechargeEffectName, v77, v78, v79, v80, v81, v82, v83);
  v84 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v85 = (System_Int32_array **)StringLiteral_23197/*"wall_gauge_{0}"*/;
  v84->wallPointImageName = (struct System_String_o *)StringLiteral_23197/*"wall_gauge_{0}"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v84->wallPointImageName, v85, v86, v87, v88, v89, v90, v91);
}


void __fastcall WarBoardBreakPointComponent___ctor(WarBoardBreakPointComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


System_String_o *__fastcall WarBoardBreakPointComponent__GetBreakEffectName(
        WarBoardBreakPointComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
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

  if ( (byte_41865D8 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, method);
    sub_B2C35C(&WarBoardBreakPointComponent_TypeInfo, v3);
    byte_41865D8 = 1;
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
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(v7, v5);
  return System_String__Format(MasterPointEffectName, v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall WarBoardBreakPointComponent__GetImageName(
        WarBoardBreakPointComponent_o *this,
        bool isActiveSprite,
        const MethodInfo *method)
{
  __int64 v5; // x1
  WarBoardBreakPointComponent_c *v6; // x0
  int32_t objectColorNumber; // w9
  System_String_o *MasterPointOffImageName; // x19
  WarBoardBreakPointComponent_c *v9; // x0
  Il2CppObject *v10; // x0
  WarBoardBreakPointComponent_c *v12; // x0
  WarBoardBreakPointComponent_c *v13; // x0
  WarBoardBreakPointComponent_c *v14; // x0
  int32_t v15; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_41865D7 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, isActiveSprite);
    sub_B2C35C(&WarBoardBreakPointComponent_TypeInfo, v5);
    byte_41865D7 = 1;
  }
  if ( !isActiveSprite )
  {
    if ( !this->fields.isThirdForce )
    {
      if ( this->fields.isMaster )
      {
        v12 = WarBoardBreakPointComponent_TypeInfo;
        if ( (BYTE3(WarBoardBreakPointComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
          v12 = WarBoardBreakPointComponent_TypeInfo;
        }
        objectColorNumber = this->fields.objectColorNumber;
        MasterPointOffImageName = v12->static_fields->MasterPointOffImageName;
        goto LABEL_15;
      }
      v14 = WarBoardBreakPointComponent_TypeInfo;
      if ( this->fields.isEnemyServant )
      {
        if ( (WORD1(WarBoardBreakPointComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
          v14 = WarBoardBreakPointComponent_TypeInfo;
        }
        return v14->static_fields->EnemyBreakPointOffImageName;
      }
      else
      {
        if ( (WORD1(WarBoardBreakPointComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
          v14 = WarBoardBreakPointComponent_TypeInfo;
        }
        return v14->static_fields->BreakPointOffImageName;
      }
    }
LABEL_11:
    v9 = WarBoardBreakPointComponent_TypeInfo;
    if ( (BYTE3(WarBoardBreakPointComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
      v9 = WarBoardBreakPointComponent_TypeInfo;
    }
    objectColorNumber = this->fields.objectColorNumber;
    MasterPointOffImageName = v9->static_fields->wallPointImageName;
    goto LABEL_15;
  }
  if ( this->fields.isThirdForce )
    goto LABEL_11;
  if ( this->fields.isMaster )
  {
    v6 = WarBoardBreakPointComponent_TypeInfo;
    if ( (BYTE3(WarBoardBreakPointComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
      v6 = WarBoardBreakPointComponent_TypeInfo;
    }
    objectColorNumber = this->fields.objectColorNumber;
    MasterPointOffImageName = v6->static_fields->MasterPointOnImageName;
LABEL_15:
    v15 = objectColorNumber;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
    return System_String__Format(MasterPointOffImageName, v10, 0LL);
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
    return v13->static_fields->EnemyBreakPointOnImageName;
  }
  else
  {
    if ( (WORD1(WarBoardBreakPointComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
      v13 = WarBoardBreakPointComponent_TypeInfo;
    }
    return v13->static_fields->BreakPointOnImageName;
  }
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_41865D9 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&depth);
    byte_41865D9 = 1;
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
    sub_B2C434(v15, v14);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  WebViewManager_o *Instance; // x22
  const MethodInfo *v17; // x1
  char *BreakEffectName; // x0
  __int64 v19; // x1
  Il2CppObject *CommonEffectAsset_object; // x22
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_GameObject_o *v22; // x23
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  WarBoardCommonEffectPerformance_o *v29; // x0
  WarBoardCommonEffectPerformance_o *v30; // x22
  System_Int32_array **v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x8
  System_Delegate_o *EndCallback; // x23
  WarBoardTaskBase_TaskCallback_o *v40; // x24
  System_Int32_array **v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  WebViewManager_o *v48; // x19
  char *v49; // x20
  __int64 v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  __int64 v57; // x0
  __int64 v58; // x0
  const MethodInfo *v59; // [xsp+28h] [xbp-48h]
  System_Nullable_Vector3__o v60; // 0:x3.16
  System_Nullable_Vector3__o v61; // 0:x5.16

  if ( (byte_41865DA & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointEffectComponent___, taskList);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v7);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject____67450600, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10);
    sub_B2C35C(&WarBoardTaskBase_TaskCallback_TypeInfo, v11);
    sub_B2C35C(&Method_WarBoardBreakPointComponent__OnBreak_b__26_0__, v12);
    sub_B2C35C(&WarBoardCommonEffectPerformance_TypeInfo, v13);
    sub_B2C35C(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___, v14);
    sub_B2C35C(&WarBoardTaskBase___TypeInfo, v15);
    byte_41865DA = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  BreakEffectName = (char *)WarBoardBreakPointComponent__GetBreakEffectName(this, v17);
  if ( !Instance )
    goto LABEL_29;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)Instance,
                               (System_String_o *)BreakEffectName,
                               (const MethodInfo_20B3104 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
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
                                (const MethodInfo_2095F74 *)Method_UnityEngine_Object_Instantiate_GameObject____67450600);
    if ( !BreakEffectName )
      goto LABEL_29;
    v22 = (UnityEngine_GameObject_o *)BreakEffectName;
    BreakEffectName = (char *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                (UnityEngine_GameObject_o *)BreakEffectName,
                                (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointEffectComponent___);
    if ( !BreakEffectName )
      goto LABEL_29;
    *((_QWORD *)BreakEffectName + 3) = this;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(BreakEffectName + 24),
      (System_Int32_array **)this,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
    v29 = (WarBoardCommonEffectPerformance_o *)sub_B2C42C(WarBoardCommonEffectPerformance_TypeInfo);
    *(_QWORD *)&v60.fields.value.fields.x = 0LL;
    *(_QWORD *)&v60.fields.value.fields.z = 0LL;
    *(_QWORD *)&v61.fields.value.fields.x = 0LL;
    *(_QWORD *)&v61.fields.value.fields.z = 0LL;
    v30 = v29;
    WarBoardCommonEffectPerformance___ctor(v29, 0LL, v22, v60, v61, (System_Nullable_Vector3__o)0, 0, 0, 1, v59);
    if ( startCallback )
    {
      if ( !v30 )
        goto LABEL_29;
      v31 = (System_Int32_array **)System_Delegate__Combine(
                                     (System_Delegate_o *)v30->fields.StartCallback,
                                     (System_Delegate_o *)startCallback,
                                     0LL);
      v38 = v31;
      if ( v31 && *v31 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
        goto LABEL_30;
      v30->fields.StartCallback = (struct WarBoardTaskBase_TaskCallback_o *)v31;
      sub_B2C2F8((BattleServantConfConponent_o *)&v30->fields.StartCallback, v31, v32, v33, v34, v35, v36, v37);
    }
    else if ( !v30 )
    {
      goto LABEL_29;
    }
    EndCallback = (System_Delegate_o *)v30->fields.EndCallback;
    v40 = (WarBoardTaskBase_TaskCallback_o *)sub_B2C42C(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(
      v40,
      (Il2CppObject *)this,
      Method_WarBoardBreakPointComponent__OnBreak_b__26_0__,
      0LL);
    v41 = (System_Int32_array **)System_Delegate__Combine(EndCallback, (System_Delegate_o *)v40, 0LL);
    v38 = v41;
    if ( !v41 || *v41 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      v30->fields.EndCallback = (struct WarBoardTaskBase_TaskCallback_o *)v41;
      sub_B2C2F8((BattleServantConfConponent_o *)&v30->fields.EndCallback, v41, v42, v43, v44, v45, v46, v47);
      if ( taskList )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)taskList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v30,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
        return;
      }
      v48 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      BreakEffectName = (char *)sub_B2C374(WarBoardTaskBase___TypeInfo, 1LL);
      if ( !BreakEffectName )
        goto LABEL_29;
      v49 = BreakEffectName;
      v50 = sub_B2C41C(v30, *(_QWORD *)(*(_QWORD *)BreakEffectName + 64LL));
      if ( v50 )
      {
        if ( !*((_DWORD *)v49 + 6) )
        {
          v58 = sub_B2C460(v50);
          sub_B2C400(v58, 0LL);
        }
        *((_QWORD *)v49 + 4) = v30;
        sub_B2C2F8((BattleServantConfConponent_o *)(v49 + 32), (System_Int32_array **)v30, v51, v52, v53, v54, v55, v56);
        if ( v48 )
        {
          WarBoardManager__InsertTask((WarBoardManager_o *)v48, 0, (WarBoardTaskBase_array *)v49, 0LL);
          return;
        }
LABEL_29:
        sub_B2C434(BreakEffectName, v19);
      }
LABEL_31:
      v57 = sub_B2C454();
      sub_B2C400(v57, 0LL);
    }
LABEL_30:
    sub_B2C728(v38);
    goto LABEL_31;
  }
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_41865DC & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, active);
    byte_41865DC = 1;
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
    sub_B2C434(gameObject, v7);
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

  if ( (byte_41865DE & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41865DE = 1;
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
    sub_B2C434(v7, v6);
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

  if ( (byte_41865DD & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41865DD = 1;
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
    sub_B2C434(v7, v6);
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
    sub_B2C434(this, breakPoint);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  char *Instance; // x0
  __int64 v16; // x1
  WarBoardManager_o *v17; // x21
  Il2CppObject *CommonEffectAsset_object; // x21
  UnityEngine_Transform_o *transform; // x22
  UnityEngine_GameObject_o *v20; // x22
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  WarBoardCommonEffectPerformance_o *v27; // x0
  WarBoardCommonEffectPerformance_o *v28; // x21
  System_Delegate_o *StartCallback; // x23
  WarBoardTaskBase_TaskCallback_o *v30; // x24
  System_Int32_array **v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  WebViewManager_o *v38; // x19
  char *v39; // x20
  __int64 v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  __int64 v47; // x0
  __int64 v48; // x0
  const MethodInfo *v49; // [xsp+28h] [xbp-48h]
  System_Nullable_Vector3__o v50; // 0:x3.16
  System_Nullable_Vector3__o v51; // 0:x5.16

  if ( (byte_41865DB & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointEffectComponent___, taskList);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v5);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject____67450600, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v8);
    sub_B2C35C(&WarBoardTaskBase_TaskCallback_TypeInfo, v9);
    sub_B2C35C(&Method_WarBoardBreakPointComponent__ShowMasterRechargeEffect_b__27_0__, v10);
    sub_B2C35C(&WarBoardBreakPointComponent_TypeInfo, v11);
    sub_B2C35C(&WarBoardCommonEffectPerformance_TypeInfo, v12);
    sub_B2C35C(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___, v13);
    sub_B2C35C(&WarBoardTaskBase___TypeInfo, v14);
    byte_41865DB = 1;
  }
  Instance = (char *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v17 = (WarBoardManager_o *)Instance;
  if ( (BYTE3(WarBoardBreakPointComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
  }
  if ( !v17 )
    goto LABEL_27;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               v17,
                               WarBoardBreakPointComponent_TypeInfo->static_fields->MasterPointRechargeEffectName,
                               (const MethodInfo_20B3104 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
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
                         (const MethodInfo_2095F74 *)Method_UnityEngine_Object_Instantiate_GameObject____67450600);
    if ( !Instance )
      goto LABEL_27;
    v20 = (UnityEngine_GameObject_o *)Instance;
    Instance = (char *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                         (UnityEngine_GameObject_o *)Instance,
                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointEffectComponent___);
    if ( !Instance )
      goto LABEL_27;
    *((_QWORD *)Instance + 3) = this;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(Instance + 24),
      (System_Int32_array **)this,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
    v27 = (WarBoardCommonEffectPerformance_o *)sub_B2C42C(WarBoardCommonEffectPerformance_TypeInfo);
    *(_QWORD *)&v50.fields.value.fields.x = 0LL;
    *(_QWORD *)&v50.fields.value.fields.z = 0LL;
    *(_QWORD *)&v51.fields.value.fields.x = 0LL;
    *(_QWORD *)&v51.fields.value.fields.z = 0LL;
    v28 = v27;
    WarBoardCommonEffectPerformance___ctor(v27, 0LL, v20, v50, v51, (System_Nullable_Vector3__o)0, 0, 0, 1, v49);
    if ( !v28 )
      goto LABEL_27;
    StartCallback = (System_Delegate_o *)v28->fields.StartCallback;
    v30 = (WarBoardTaskBase_TaskCallback_o *)sub_B2C42C(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(
      v30,
      (Il2CppObject *)this,
      Method_WarBoardBreakPointComponent__ShowMasterRechargeEffect_b__27_0__,
      0LL);
    v31 = (System_Int32_array **)System_Delegate__Combine(StartCallback, (System_Delegate_o *)v30, 0LL);
    if ( v31 && *v31 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      sub_B2C728(v31);
    }
    else
    {
      v28->fields.StartCallback = (struct WarBoardTaskBase_TaskCallback_o *)v31;
      sub_B2C2F8((BattleServantConfConponent_o *)&v28->fields.StartCallback, v31, v32, v33, v34, v35, v36, v37);
      if ( taskList )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)taskList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v28,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
        return;
      }
      v38 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      Instance = (char *)sub_B2C374(WarBoardTaskBase___TypeInfo, 1LL);
      if ( !Instance )
        goto LABEL_27;
      v39 = Instance;
      v40 = sub_B2C41C(v28, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
      if ( v40 )
      {
        if ( !*((_DWORD *)v39 + 6) )
        {
          v48 = sub_B2C460(v40);
          sub_B2C400(v48, 0LL);
        }
        *((_QWORD *)v39 + 4) = v28;
        sub_B2C2F8((BattleServantConfConponent_o *)(v39 + 32), (System_Int32_array **)v28, v41, v42, v43, v44, v45, v46);
        if ( v38 )
        {
          WarBoardManager__InsertTask((WarBoardManager_o *)v38, 0, (WarBoardTaskBase_array *)v39, 0LL);
          return;
        }
LABEL_27:
        sub_B2C434(Instance, v16);
      }
    }
    v47 = sub_B2C454();
    sub_B2C400(v47, 0LL);
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