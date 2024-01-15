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

  if ( (byte_40F892E & 1) == 0 )
  {
    sub_B16FFC(&WarBoardBreakPointComponent_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_8945/*"MasterPoint_recharge_effect_1"*/, v8);
    sub_B16FFC(&StringLiteral_16871/*"break_on_boss"*/, v9);
    sub_B16FFC(&StringLiteral_20329/*"master_gauge_off_{0}"*/, v10);
    sub_B16FFC(&StringLiteral_16869/*"break_off_boss"*/, v11);
    sub_B16FFC(&StringLiteral_16870/*"break_on"*/, v12);
    sub_B16FFC(&StringLiteral_16868/*"break_off"*/, v13);
    sub_B16FFC(&StringLiteral_23103/*"wall_gauge_{0}"*/, v14);
    sub_B16FFC(&StringLiteral_20330/*"master_gauge_{0}"*/, v15);
    sub_B16FFC(&StringLiteral_2853/*"BreakPoint_effect_{0}"*/, v16);
    sub_B16FFC(&StringLiteral_8944/*"MasterPoint_effect_{0}"*/, v17);
    byte_40F892E = 1;
  }
  static_fields = (BattleServantConfConponent_o *)WarBoardBreakPointComponent_TypeInfo->static_fields;
  v19 = (System_Int32_array **)StringLiteral_16870/*"break_on"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_16870/*"break_on"*/;
  sub_B16F98(static_fields, v19, v2, v3, v4, v5, v6, v7);
  v20 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v21 = (System_Int32_array **)StringLiteral_16868/*"break_off"*/;
  v20->BreakPointOffImageName = (struct System_String_o *)StringLiteral_16868/*"break_off"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v20->BreakPointOffImageName, v21, v22, v23, v24, v25, v26, v27);
  v28 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v29 = (System_Int32_array **)StringLiteral_16871/*"break_on_boss"*/;
  v28->EnemyBreakPointOnImageName = (struct System_String_o *)StringLiteral_16871/*"break_on_boss"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v28->EnemyBreakPointOnImageName, v29, v30, v31, v32, v33, v34, v35);
  v36 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v37 = (System_Int32_array **)StringLiteral_16869/*"break_off_boss"*/;
  v36->EnemyBreakPointOffImageName = (struct System_String_o *)StringLiteral_16869/*"break_off_boss"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v36->EnemyBreakPointOffImageName, v37, v38, v39, v40, v41, v42, v43);
  v44 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v45 = (System_Int32_array **)StringLiteral_2853/*"BreakPoint_effect_{0}"*/;
  v44->BreakPointEffectName = (struct System_String_o *)StringLiteral_2853/*"BreakPoint_effect_{0}"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v44->BreakPointEffectName, v45, v46, v47, v48, v49, v50, v51);
  v52 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v53 = (System_Int32_array **)StringLiteral_20330/*"master_gauge_{0}"*/;
  v52->MasterPointOnImageName = (struct System_String_o *)StringLiteral_20330/*"master_gauge_{0}"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v52->MasterPointOnImageName, v53, v54, v55, v56, v57, v58, v59);
  v60 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v61 = (System_Int32_array **)StringLiteral_20329/*"master_gauge_off_{0}"*/;
  v60->MasterPointOffImageName = (struct System_String_o *)StringLiteral_20329/*"master_gauge_off_{0}"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v60->MasterPointOffImageName, v61, v62, v63, v64, v65, v66, v67);
  v68 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v69 = (System_Int32_array **)StringLiteral_8944/*"MasterPoint_effect_{0}"*/;
  v68->MasterPointEffectName = (struct System_String_o *)StringLiteral_8944/*"MasterPoint_effect_{0}"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v68->MasterPointEffectName, v69, v70, v71, v72, v73, v74, v75);
  v76 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v77 = (System_Int32_array **)StringLiteral_8945/*"MasterPoint_recharge_effect_1"*/;
  v76->MasterPointRechargeEffectName = (struct System_String_o *)StringLiteral_8945/*"MasterPoint_recharge_effect_1"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v76->MasterPointRechargeEffectName, v77, v78, v79, v80, v81, v82, v83);
  v84 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v85 = (System_Int32_array **)StringLiteral_23103/*"wall_gauge_{0}"*/;
  v84->wallPointImageName = (struct System_String_o *)StringLiteral_23103/*"wall_gauge_{0}"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v84->wallPointImageName, v85, v86, v87, v88, v89, v90, v91);
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

  if ( (byte_40F8927 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, method);
    sub_B16FFC(&WarBoardBreakPointComponent_TypeInfo, v3);
    byte_40F8927 = 1;
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

  if ( (byte_40F8926 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, isActiveSprite);
    sub_B16FFC(&WarBoardBreakPointComponent_TypeInfo, v5);
    byte_40F8926 = 1;
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
  UIWidget_o *v14; // x0
  const MethodInfo *v15; // x3
  UnityEngine_Object_o *deactiveObject; // x22
  UIWidget_o *v17; // x0
  const MethodInfo *v18; // x3
  UnityEngine_Object_o *baseObject; // x22
  const MethodInfo *v20; // x3
  UIWidget_o *v21; // x0

  if ( (byte_40F8928 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&depth);
    byte_40F8928 = 1;
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
    v14 = (UIWidget_o *)this->fields.activeObject;
    if ( !v14 )
      goto LABEL_23;
    UIWidget__set_depth(v14, depth + 1, 0LL);
    WarBoardBreakPointComponent__SetChangeBreakPoint(this, this->fields.activeObject, 1, v15);
  }
  deactiveObject = (UnityEngine_Object_o *)this->fields.deactiveObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(deactiveObject, 0LL, 0LL) )
  {
    v17 = (UIWidget_o *)this->fields.deactiveObject;
    if ( !v17 )
      goto LABEL_23;
    UIWidget__set_depth(v17, depth + 1, 0LL);
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
    v21 = (UIWidget_o *)this->fields.baseObject;
    if ( v21 )
    {
      UIWidget__set_depth(v21, depth, 0LL);
      if ( !isThirdForce )
        WarBoardBreakPointComponent__SetChangeBreakPoint(this, this->fields.baseObject, 0, v20);
      goto LABEL_22;
    }
LABEL_23:
    sub_B170D4();
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
  System_String_o *BreakEffectName; // x0
  Il2CppObject *CommonEffectAsset_object; // x22
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_GameObject_o *v21; // x0
  UnityEngine_GameObject_o *v22; // x23
  srcLineSprite_o *Component_srcLineSprite; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  WarBoardCommonEffectPerformance_o *v34; // x0
  WarBoardCommonEffectPerformance_o *v35; // x22
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  System_Int32_array **v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **v47; // x8
  System_Delegate_o *EndCallback; // x23
  WarBoardTaskBase_TaskCallback_o *v49; // x24
  System_Int32_array **v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  WebViewManager_o *v57; // x19
  __int64 v58; // x2
  __int64 v59; // x0
  __int64 v60; // x20
  __int64 v61; // x0
  __int64 v62; // x1
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  const MethodInfo *v69; // [xsp+28h] [xbp-48h]
  System_Nullable_Vector3__o v70; // 0:x3.16
  System_Nullable_Vector3__o v71; // 0:x5.16

  if ( (byte_40F8929 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointEffectComponent___, taskList);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v7);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject____66874888, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10);
    sub_B16FFC(&WarBoardTaskBase_TaskCallback_TypeInfo, v11);
    sub_B16FFC(&Method_WarBoardBreakPointComponent__OnBreak_b__26_0__, v12);
    sub_B16FFC(&WarBoardCommonEffectPerformance_TypeInfo, v13);
    sub_B16FFC(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___, v14);
    sub_B16FFC(&WarBoardTaskBase___TypeInfo, v15);
    byte_40F8929 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  BreakEffectName = WarBoardBreakPointComponent__GetBreakEffectName(this, v17);
  if ( !Instance )
    goto LABEL_29;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)Instance,
                               BreakEffectName,
                               (const MethodInfo_2266354 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
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
    v21 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                        (UILabel_o *)CommonEffectAsset_object,
                                        transform,
                                        (const MethodInfo_19DE348 *)Method_UnityEngine_Object_Instantiate_GameObject____66874888);
    if ( !v21 )
      goto LABEL_29;
    v22 = v21;
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                v21,
                                (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointEffectComponent___);
    if ( !Component_srcLineSprite )
      goto LABEL_29;
    Component_srcLineSprite->fields.mFSM = (struct CStateManager_srcLineSprite__o *)this;
    sub_B16F98(
      (BattleServantConfConponent_o *)&Component_srcLineSprite->fields.mFSM,
      (System_Int32_array **)this,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
    v34 = (WarBoardCommonEffectPerformance_o *)sub_B170CC(WarBoardCommonEffectPerformance_TypeInfo, v30, v31, v32, v33);
    *(_QWORD *)&v70.fields.value.fields.x = 0LL;
    *(_QWORD *)&v70.fields.value.fields.z = 0LL;
    *(_QWORD *)&v71.fields.value.fields.x = 0LL;
    *(_QWORD *)&v71.fields.value.fields.z = 0LL;
    v35 = v34;
    WarBoardCommonEffectPerformance___ctor(v34, 0LL, v22, v70, v71, (System_Nullable_Vector3__o)0, 0, 0, 1, v69);
    if ( startCallback )
    {
      if ( !v35 )
        goto LABEL_29;
      v40 = (System_Int32_array **)System_Delegate__Combine(
                                     (System_Delegate_o *)v35->fields.StartCallback,
                                     (System_Delegate_o *)startCallback,
                                     0LL);
      v47 = v40;
      if ( v40 && *v40 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
        goto LABEL_30;
      v35->fields.StartCallback = (struct WarBoardTaskBase_TaskCallback_o *)v40;
      sub_B16F98((BattleServantConfConponent_o *)&v35->fields.StartCallback, v40, v41, v42, v43, v44, v45, v46);
    }
    else if ( !v35 )
    {
      goto LABEL_29;
    }
    EndCallback = (System_Delegate_o *)v35->fields.EndCallback;
    v49 = (WarBoardTaskBase_TaskCallback_o *)sub_B170CC(WarBoardTaskBase_TaskCallback_TypeInfo, v36, v37, v38, v39);
    WarBoardTaskBase_TaskCallback___ctor(
      v49,
      (Il2CppObject *)this,
      Method_WarBoardBreakPointComponent__OnBreak_b__26_0__,
      0LL);
    v50 = (System_Int32_array **)System_Delegate__Combine(EndCallback, (System_Delegate_o *)v49, 0LL);
    v47 = v50;
    if ( !v50 || *v50 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      v35->fields.EndCallback = (struct WarBoardTaskBase_TaskCallback_o *)v50;
      sub_B16F98((BattleServantConfConponent_o *)&v35->fields.EndCallback, v50, v51, v52, v53, v54, v55, v56);
      if ( taskList )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)taskList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v35,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
        return;
      }
      v57 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      v59 = sub_B17014(WarBoardTaskBase___TypeInfo, 1LL, v58);
      if ( !v59 )
        goto LABEL_29;
      v60 = v59;
      v61 = sub_B170BC(v35, *(_QWORD *)(*(_QWORD *)v59 + 64LL));
      if ( v61 )
      {
        if ( !*(_DWORD *)(v60 + 24) )
        {
          sub_B17100(v61, v62, v63);
          sub_B170A0();
        }
        *(_QWORD *)(v60 + 32) = v35;
        sub_B16F98((BattleServantConfConponent_o *)(v60 + 32), (System_Int32_array **)v35, v63, v64, v65, v66, v67, v68);
        if ( v57 )
        {
          WarBoardManager__InsertTask((WarBoardManager_o *)v57, 0, (WarBoardTaskBase_array *)v60, 0LL);
          return;
        }
LABEL_29:
        sub_B170D4();
      }
LABEL_31:
      sub_B170F4(v61);
      sub_B170A0();
    }
LABEL_30:
    v61 = sub_B173C8(v47);
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
  UnityEngine_Component_o *v7; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *deactiveObject; // x21
  UnityEngine_Component_o *v10; // x0
  UnityEngine_GameObject_o *v11; // x0

  v4 = active;
  if ( (byte_40F892B & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, active);
    byte_40F892B = 1;
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
      v7 = (UnityEngine_Component_o *)this->fields.activeObject;
      if ( !v7 )
        goto LABEL_20;
      gameObject = UnityEngine_Component__get_gameObject(v7, 0LL);
      if ( !gameObject )
        goto LABEL_20;
      UnityEngine_GameObject__SetActive(gameObject, v4, 0LL);
    }
    deactiveObject = (UnityEngine_Object_o *)this->fields.deactiveObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(deactiveObject, 0LL, 0LL) )
      goto LABEL_18;
    v10 = (UnityEngine_Component_o *)this->fields.deactiveObject;
    if ( v10 )
    {
      v11 = UnityEngine_Component__get_gameObject(v10, 0LL);
      if ( v11 )
      {
        UnityEngine_GameObject__SetActive(v11, !v4, 0LL);
LABEL_18:
        this->fields._isActive_k__BackingField = v4;
        return;
      }
    }
LABEL_20:
    sub_B170D4();
  }
}


void __fastcall WarBoardBreakPointComponent__SetBreakPointFadeIn(
        WarBoardBreakPointComponent_o *this,
        float duration,
        const MethodInfo *method)
{
  UnityEngine_Object_o *activeObject; // x20
  UnityEngine_Component_o *v6; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *deactiveObject; // x20
  UnityEngine_Component_o *v9; // x0
  UnityEngine_GameObject_o *v10; // x0

  if ( (byte_40F892D & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F892D = 1;
  }
  activeObject = (UnityEngine_Object_o *)this->fields.activeObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(activeObject, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.activeObject;
    if ( !v6 )
      goto LABEL_16;
    gameObject = UnityEngine_Component__get_gameObject(v6, 0LL);
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
    v9 = (UnityEngine_Component_o *)this->fields.deactiveObject;
    if ( v9 )
    {
      v10 = UnityEngine_Component__get_gameObject(v9, 0LL);
      TweenAlpha__Begin(v10, duration, 1.0, 0LL);
      return;
    }
LABEL_16:
    sub_B170D4();
  }
}


void __fastcall WarBoardBreakPointComponent__SetBreakPointFadeOut(
        WarBoardBreakPointComponent_o *this,
        float duration,
        const MethodInfo *method)
{
  UnityEngine_Object_o *activeObject; // x20
  UnityEngine_Component_o *v6; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *deactiveObject; // x20
  UnityEngine_Component_o *v9; // x0
  UnityEngine_GameObject_o *v10; // x0

  if ( (byte_40F892C & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F892C = 1;
  }
  activeObject = (UnityEngine_Object_o *)this->fields.activeObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(activeObject, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.activeObject;
    if ( !v6 )
      goto LABEL_16;
    gameObject = UnityEngine_Component__get_gameObject(v6, 0LL);
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
    v9 = (UnityEngine_Component_o *)this->fields.deactiveObject;
    if ( v9 )
    {
      v10 = UnityEngine_Component__get_gameObject(v9, 0LL);
      TweenAlpha__Begin(v10, duration, 0.0, 0LL);
      return;
    }
LABEL_16:
    sub_B170D4();
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
  System_String_o *ImageName; // x0
  UISpriteData_o *Sprite; // x0

  if ( !breakPoint
    || (mAtlas = breakPoint->fields.mAtlas,
        ImageName = WarBoardBreakPointComponent__GetImageName(this, isActive, (const MethodInfo *)isActive),
        !mAtlas) )
  {
    sub_B170D4();
  }
  Sprite = UIAtlas__GetSprite(mAtlas, ImageName, 0LL);
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
  WebViewManager_o *Instance; // x21
  Il2CppObject *CommonEffectAsset_object; // x21
  UnityEngine_Transform_o *transform; // x22
  UnityEngine_GameObject_o *v18; // x0
  UnityEngine_GameObject_o *v19; // x22
  srcLineSprite_o *Component_srcLineSprite; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  WarBoardCommonEffectPerformance_o *v31; // x0
  WarBoardCommonEffectPerformance_o *v32; // x21
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  System_Delegate_o *StartCallback; // x23
  WarBoardTaskBase_TaskCallback_o *v38; // x24
  System_Int32_array **v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  WebViewManager_o *v46; // x19
  __int64 v47; // x2
  __int64 v48; // x0
  __int64 v49; // x20
  __int64 v50; // x0
  __int64 v51; // x1
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  const MethodInfo *v58; // [xsp+28h] [xbp-48h]
  System_Nullable_Vector3__o v59; // 0:x3.16
  System_Nullable_Vector3__o v60; // 0:x5.16

  if ( (byte_40F892A & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointEffectComponent___, taskList);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v5);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject____66874888, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v8);
    sub_B16FFC(&WarBoardTaskBase_TaskCallback_TypeInfo, v9);
    sub_B16FFC(&Method_WarBoardBreakPointComponent__ShowMasterRechargeEffect_b__27_0__, v10);
    sub_B16FFC(&WarBoardBreakPointComponent_TypeInfo, v11);
    sub_B16FFC(&WarBoardCommonEffectPerformance_TypeInfo, v12);
    sub_B16FFC(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___, v13);
    sub_B16FFC(&WarBoardTaskBase___TypeInfo, v14);
    byte_40F892A = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( (BYTE3(WarBoardBreakPointComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
  }
  if ( !Instance )
    goto LABEL_27;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)Instance,
                               WarBoardBreakPointComponent_TypeInfo->static_fields->MasterPointRechargeEffectName,
                               (const MethodInfo_2266354 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
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
    v18 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                        (UILabel_o *)CommonEffectAsset_object,
                                        transform,
                                        (const MethodInfo_19DE348 *)Method_UnityEngine_Object_Instantiate_GameObject____66874888);
    if ( !v18 )
      goto LABEL_27;
    v19 = v18;
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                v18,
                                (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointEffectComponent___);
    if ( !Component_srcLineSprite )
      goto LABEL_27;
    Component_srcLineSprite->fields.mFSM = (struct CStateManager_srcLineSprite__o *)this;
    sub_B16F98(
      (BattleServantConfConponent_o *)&Component_srcLineSprite->fields.mFSM,
      (System_Int32_array **)this,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
    v31 = (WarBoardCommonEffectPerformance_o *)sub_B170CC(WarBoardCommonEffectPerformance_TypeInfo, v27, v28, v29, v30);
    *(_QWORD *)&v59.fields.value.fields.x = 0LL;
    *(_QWORD *)&v59.fields.value.fields.z = 0LL;
    *(_QWORD *)&v60.fields.value.fields.x = 0LL;
    *(_QWORD *)&v60.fields.value.fields.z = 0LL;
    v32 = v31;
    WarBoardCommonEffectPerformance___ctor(v31, 0LL, v19, v59, v60, (System_Nullable_Vector3__o)0, 0, 0, 1, v58);
    if ( !v32 )
      goto LABEL_27;
    StartCallback = (System_Delegate_o *)v32->fields.StartCallback;
    v38 = (WarBoardTaskBase_TaskCallback_o *)sub_B170CC(WarBoardTaskBase_TaskCallback_TypeInfo, v33, v34, v35, v36);
    WarBoardTaskBase_TaskCallback___ctor(
      v38,
      (Il2CppObject *)this,
      Method_WarBoardBreakPointComponent__ShowMasterRechargeEffect_b__27_0__,
      0LL);
    v39 = (System_Int32_array **)System_Delegate__Combine(StartCallback, (System_Delegate_o *)v38, 0LL);
    if ( v39 && *v39 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      v50 = sub_B173C8(v39);
    }
    else
    {
      v32->fields.StartCallback = (struct WarBoardTaskBase_TaskCallback_o *)v39;
      sub_B16F98((BattleServantConfConponent_o *)&v32->fields.StartCallback, v39, v40, v41, v42, v43, v44, v45);
      if ( taskList )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)taskList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v32,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
        return;
      }
      v46 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      v48 = sub_B17014(WarBoardTaskBase___TypeInfo, 1LL, v47);
      if ( !v48 )
        goto LABEL_27;
      v49 = v48;
      v50 = sub_B170BC(v32, *(_QWORD *)(*(_QWORD *)v48 + 64LL));
      if ( v50 )
      {
        if ( !*(_DWORD *)(v49 + 24) )
        {
          sub_B17100(v50, v51, v52);
          sub_B170A0();
        }
        *(_QWORD *)(v49 + 32) = v32;
        sub_B16F98((BattleServantConfConponent_o *)(v49 + 32), (System_Int32_array **)v32, v52, v53, v54, v55, v56, v57);
        if ( v46 )
        {
          WarBoardManager__InsertTask((WarBoardManager_o *)v46, 0, (WarBoardTaskBase_array *)v49, 0LL);
          return;
        }
LABEL_27:
        sub_B170D4();
      }
    }
    sub_B170F4(v50);
    sub_B170A0();
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