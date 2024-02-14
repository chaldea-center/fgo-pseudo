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

  if ( (byte_4213391 & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardBreakPointComponent_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_8998/*"MasterPoint_recharge_effect_1"*/, v8);
    sub_B0D8A4(&StringLiteral_16988/*"break_on_boss"*/, v9);
    sub_B0D8A4(&StringLiteral_20475/*"master_gauge_off_{0}"*/, v10);
    sub_B0D8A4(&StringLiteral_16986/*"break_off_boss"*/, v11);
    sub_B0D8A4(&StringLiteral_16987/*"break_on"*/, v12);
    sub_B0D8A4(&StringLiteral_16985/*"break_off"*/, v13);
    sub_B0D8A4(&StringLiteral_23275/*"wall_gauge_{0}"*/, v14);
    sub_B0D8A4(&StringLiteral_20476/*"master_gauge_{0}"*/, v15);
    sub_B0D8A4(&StringLiteral_2876/*"BreakPoint_effect_{0}"*/, v16);
    sub_B0D8A4(&StringLiteral_8997/*"MasterPoint_effect_{0}"*/, v17);
    byte_4213391 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)WarBoardBreakPointComponent_TypeInfo->static_fields;
  v19 = (System_Int32_array **)StringLiteral_16987/*"break_on"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_16987/*"break_on"*/;
  sub_B0D840(static_fields, v19, v2, v3, v4, v5, v6, v7);
  v20 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v21 = (System_Int32_array **)StringLiteral_16985/*"break_off"*/;
  v20->BreakPointOffImageName = (struct System_String_o *)StringLiteral_16985/*"break_off"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v20->BreakPointOffImageName, v21, v22, v23, v24, v25, v26, v27);
  v28 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v29 = (System_Int32_array **)StringLiteral_16988/*"break_on_boss"*/;
  v28->EnemyBreakPointOnImageName = (struct System_String_o *)StringLiteral_16988/*"break_on_boss"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v28->EnemyBreakPointOnImageName, v29, v30, v31, v32, v33, v34, v35);
  v36 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v37 = (System_Int32_array **)StringLiteral_16986/*"break_off_boss"*/;
  v36->EnemyBreakPointOffImageName = (struct System_String_o *)StringLiteral_16986/*"break_off_boss"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v36->EnemyBreakPointOffImageName, v37, v38, v39, v40, v41, v42, v43);
  v44 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v45 = (System_Int32_array **)StringLiteral_2876/*"BreakPoint_effect_{0}"*/;
  v44->BreakPointEffectName = (struct System_String_o *)StringLiteral_2876/*"BreakPoint_effect_{0}"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v44->BreakPointEffectName, v45, v46, v47, v48, v49, v50, v51);
  v52 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v53 = (System_Int32_array **)StringLiteral_20476/*"master_gauge_{0}"*/;
  v52->MasterPointOnImageName = (struct System_String_o *)StringLiteral_20476/*"master_gauge_{0}"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v52->MasterPointOnImageName, v53, v54, v55, v56, v57, v58, v59);
  v60 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v61 = (System_Int32_array **)StringLiteral_20475/*"master_gauge_off_{0}"*/;
  v60->MasterPointOffImageName = (struct System_String_o *)StringLiteral_20475/*"master_gauge_off_{0}"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v60->MasterPointOffImageName, v61, v62, v63, v64, v65, v66, v67);
  v68 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v69 = (System_Int32_array **)StringLiteral_8997/*"MasterPoint_effect_{0}"*/;
  v68->MasterPointEffectName = (struct System_String_o *)StringLiteral_8997/*"MasterPoint_effect_{0}"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v68->MasterPointEffectName, v69, v70, v71, v72, v73, v74, v75);
  v76 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v77 = (System_Int32_array **)StringLiteral_8998/*"MasterPoint_recharge_effect_1"*/;
  v76->MasterPointRechargeEffectName = (struct System_String_o *)StringLiteral_8998/*"MasterPoint_recharge_effect_1"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v76->MasterPointRechargeEffectName, v77, v78, v79, v80, v81, v82, v83);
  v84 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v85 = (System_Int32_array **)StringLiteral_23275/*"wall_gauge_{0}"*/;
  v84->wallPointImageName = (struct System_String_o *)StringLiteral_23275/*"wall_gauge_{0}"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v84->wallPointImageName, v85, v86, v87, v88, v89, v90, v91);
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

  if ( (byte_421338A & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, method);
    sub_B0D8A4(&WarBoardBreakPointComponent_TypeInfo, v3);
    byte_421338A = 1;
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

  if ( (byte_4213389 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, isActiveSprite);
    sub_B0D8A4(&WarBoardBreakPointComponent_TypeInfo, v5);
    byte_4213389 = 1;
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
  const MethodInfo *v17; // x3
  UnityEngine_Object_o *baseObject; // x22
  const MethodInfo *v19; // x3

  if ( (byte_421338B & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&depth);
    byte_421338B = 1;
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
    v14 = (UIWidget_o *)this->fields.deactiveObject;
    if ( !v14 )
      goto LABEL_23;
    UIWidget__set_depth(v14, depth + 1, 0LL);
    WarBoardBreakPointComponent__SetChangeBreakPoint(this, this->fields.deactiveObject, 0, v17);
  }
  baseObject = (UnityEngine_Object_o *)this->fields.baseObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(baseObject, 0LL, 0LL) )
  {
    v14 = (UIWidget_o *)this->fields.baseObject;
    if ( v14 )
    {
      UIWidget__set_depth(v14, depth, 0LL);
      if ( !isThirdForce )
        WarBoardBreakPointComponent__SetChangeBreakPoint(this, this->fields.baseObject, 0, v19);
      goto LABEL_22;
    }
LABEL_23:
    sub_B0D97C(v14);
  }
LABEL_22:
  WarBoardBreakPointComponent__SetActive(this, this->fields.startState, 0, v19);
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
  Il2CppObject *CommonEffectAsset_object; // x22
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_GameObject_o *v21; // x23
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v28; // x1
  __int64 v29; // x2
  WarBoardCommonEffectPerformance_o *v30; // x0
  WarBoardCommonEffectPerformance_o *v31; // x22
  __int64 v32; // x1
  __int64 v33; // x2
  System_Int32_array **v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **v41; // x8
  System_Delegate_o *EndCallback; // x23
  WarBoardTaskBase_TaskCallback_o *v43; // x24
  System_Int32_array **v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  WebViewManager_o *v51; // x19
  char *v52; // x20
  __int64 v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  __int64 v60; // x0
  __int64 v61; // x0
  const MethodInfo *v62; // [xsp+28h] [xbp-48h]
  System_Nullable_Vector3__o v63; // 0:x3.16
  System_Nullable_Vector3__o v64; // 0:x5.16

  if ( (byte_421338C & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointEffectComponent___, taskList);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v7);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject____68025336, v8);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10);
    sub_B0D8A4(&WarBoardTaskBase_TaskCallback_TypeInfo, v11);
    sub_B0D8A4(&Method_WarBoardBreakPointComponent__OnBreak_b__26_0__, v12);
    sub_B0D8A4(&WarBoardCommonEffectPerformance_TypeInfo, v13);
    sub_B0D8A4(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___, v14);
    sub_B0D8A4(&WarBoardTaskBase___TypeInfo, v15);
    byte_421338C = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  BreakEffectName = (char *)WarBoardBreakPointComponent__GetBreakEffectName(this, v17);
  if ( !Instance )
    goto LABEL_29;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)Instance,
                               (System_String_o *)BreakEffectName,
                               (const MethodInfo_2FC9D88 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
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
                                (const MethodInfo_204AAC0 *)Method_UnityEngine_Object_Instantiate_GameObject____68025336);
    if ( !BreakEffectName )
      goto LABEL_29;
    v21 = (UnityEngine_GameObject_o *)BreakEffectName;
    BreakEffectName = (char *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                (UnityEngine_GameObject_o *)BreakEffectName,
                                (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointEffectComponent___);
    if ( !BreakEffectName )
      goto LABEL_29;
    *((_QWORD *)BreakEffectName + 3) = this;
    sub_B0D840(
      (BattleServantConfConponent_o *)(BreakEffectName + 24),
      (System_Int32_array **)this,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    v30 = (WarBoardCommonEffectPerformance_o *)sub_B0D974(WarBoardCommonEffectPerformance_TypeInfo, v28, v29);
    *(_QWORD *)&v63.fields.value.fields.x = 0LL;
    *(_QWORD *)&v63.fields.value.fields.z = 0LL;
    *(_QWORD *)&v64.fields.value.fields.x = 0LL;
    *(_QWORD *)&v64.fields.value.fields.z = 0LL;
    v31 = v30;
    WarBoardCommonEffectPerformance___ctor(v30, 0LL, v21, v63, v64, (System_Nullable_Vector3__o)0, 0, 0, 1, v62);
    if ( startCallback )
    {
      if ( !v31 )
        goto LABEL_29;
      v34 = (System_Int32_array **)System_Delegate__Combine(
                                     (System_Delegate_o *)v31->fields.StartCallback,
                                     (System_Delegate_o *)startCallback,
                                     0LL);
      v41 = v34;
      if ( v34 && *v34 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
        goto LABEL_30;
      v31->fields.StartCallback = (struct WarBoardTaskBase_TaskCallback_o *)v34;
      sub_B0D840((BattleServantConfConponent_o *)&v31->fields.StartCallback, v34, v35, v36, v37, v38, v39, v40);
    }
    else if ( !v31 )
    {
      goto LABEL_29;
    }
    EndCallback = (System_Delegate_o *)v31->fields.EndCallback;
    v43 = (WarBoardTaskBase_TaskCallback_o *)sub_B0D974(WarBoardTaskBase_TaskCallback_TypeInfo, v32, v33);
    WarBoardTaskBase_TaskCallback___ctor(
      v43,
      (Il2CppObject *)this,
      Method_WarBoardBreakPointComponent__OnBreak_b__26_0__,
      0LL);
    v44 = (System_Int32_array **)System_Delegate__Combine(EndCallback, (System_Delegate_o *)v43, 0LL);
    v41 = v44;
    if ( !v44 || *v44 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      v31->fields.EndCallback = (struct WarBoardTaskBase_TaskCallback_o *)v44;
      sub_B0D840((BattleServantConfConponent_o *)&v31->fields.EndCallback, v44, v45, v46, v47, v48, v49, v50);
      if ( taskList )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)taskList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v31,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
        return;
      }
      v51 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      BreakEffectName = (char *)sub_B0D8BC(WarBoardTaskBase___TypeInfo, 1LL);
      if ( !BreakEffectName )
        goto LABEL_29;
      v52 = BreakEffectName;
      v53 = sub_B0D964(v31, *(_QWORD *)(*(_QWORD *)BreakEffectName + 64LL));
      if ( v53 )
      {
        if ( !*((_DWORD *)v52 + 6) )
        {
          v61 = sub_B0D9A8(v53);
          sub_B0D948(v61, 0LL);
        }
        *((_QWORD *)v52 + 4) = v31;
        sub_B0D840((BattleServantConfConponent_o *)(v52 + 32), (System_Int32_array **)v31, v54, v55, v56, v57, v58, v59);
        if ( v51 )
        {
          WarBoardManager__InsertTask((WarBoardManager_o *)v51, 0, (WarBoardTaskBase_array *)v52, 0LL);
          return;
        }
LABEL_29:
        sub_B0D97C(BreakEffectName);
      }
LABEL_31:
      v60 = sub_B0D99C();
      sub_B0D948(v60, 0LL);
    }
LABEL_30:
    sub_B0DC70(v41);
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
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *deactiveObject; // x21

  v4 = active;
  if ( (byte_421338E & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, active);
    byte_421338E = 1;
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
    sub_B0D97C(gameObject);
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
  UnityEngine_GameObject_o *v9; // x0

  if ( (byte_4213390 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4213390 = 1;
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
    v6 = (UnityEngine_Component_o *)this->fields.deactiveObject;
    if ( v6 )
    {
      v9 = UnityEngine_Component__get_gameObject(v6, 0LL);
      TweenAlpha__Begin(v9, duration, 1.0, 0LL);
      return;
    }
LABEL_16:
    sub_B0D97C(v6);
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
  UnityEngine_GameObject_o *v9; // x0

  if ( (byte_421338F & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_421338F = 1;
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
    v6 = (UnityEngine_Component_o *)this->fields.deactiveObject;
    if ( v6 )
    {
      v9 = UnityEngine_Component__get_gameObject(v6, 0LL);
      TweenAlpha__Begin(v9, duration, 0.0, 0LL);
      return;
    }
LABEL_16:
    sub_B0D97C(v6);
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
    sub_B0D97C(this);
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
  WarBoardManager_o *v16; // x21
  Il2CppObject *CommonEffectAsset_object; // x21
  UnityEngine_Transform_o *transform; // x22
  UnityEngine_GameObject_o *v19; // x22
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 v26; // x1
  __int64 v27; // x2
  WarBoardCommonEffectPerformance_o *v28; // x0
  WarBoardCommonEffectPerformance_o *v29; // x21
  __int64 v30; // x1
  __int64 v31; // x2
  System_Delegate_o *StartCallback; // x23
  WarBoardTaskBase_TaskCallback_o *v33; // x24
  System_Int32_array **v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  WebViewManager_o *v41; // x19
  char *v42; // x20
  __int64 v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  __int64 v50; // x0
  __int64 v51; // x0
  const MethodInfo *v52; // [xsp+28h] [xbp-48h]
  System_Nullable_Vector3__o v53; // 0:x3.16
  System_Nullable_Vector3__o v54; // 0:x5.16

  if ( (byte_421338D & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointEffectComponent___, taskList);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v5);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject____68025336, v6);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v8);
    sub_B0D8A4(&WarBoardTaskBase_TaskCallback_TypeInfo, v9);
    sub_B0D8A4(&Method_WarBoardBreakPointComponent__ShowMasterRechargeEffect_b__27_0__, v10);
    sub_B0D8A4(&WarBoardBreakPointComponent_TypeInfo, v11);
    sub_B0D8A4(&WarBoardCommonEffectPerformance_TypeInfo, v12);
    sub_B0D8A4(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___, v13);
    sub_B0D8A4(&WarBoardTaskBase___TypeInfo, v14);
    byte_421338D = 1;
  }
  Instance = (char *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v16 = (WarBoardManager_o *)Instance;
  if ( (BYTE3(WarBoardBreakPointComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
  }
  if ( !v16 )
    goto LABEL_27;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               v16,
                               WarBoardBreakPointComponent_TypeInfo->static_fields->MasterPointRechargeEffectName,
                               (const MethodInfo_2FC9D88 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
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
                         (const MethodInfo_204AAC0 *)Method_UnityEngine_Object_Instantiate_GameObject____68025336);
    if ( !Instance )
      goto LABEL_27;
    v19 = (UnityEngine_GameObject_o *)Instance;
    Instance = (char *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                         (UnityEngine_GameObject_o *)Instance,
                         (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointEffectComponent___);
    if ( !Instance )
      goto LABEL_27;
    *((_QWORD *)Instance + 3) = this;
    sub_B0D840(
      (BattleServantConfConponent_o *)(Instance + 24),
      (System_Int32_array **)this,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    v28 = (WarBoardCommonEffectPerformance_o *)sub_B0D974(WarBoardCommonEffectPerformance_TypeInfo, v26, v27);
    *(_QWORD *)&v53.fields.value.fields.x = 0LL;
    *(_QWORD *)&v53.fields.value.fields.z = 0LL;
    *(_QWORD *)&v54.fields.value.fields.x = 0LL;
    *(_QWORD *)&v54.fields.value.fields.z = 0LL;
    v29 = v28;
    WarBoardCommonEffectPerformance___ctor(v28, 0LL, v19, v53, v54, (System_Nullable_Vector3__o)0, 0, 0, 1, v52);
    if ( !v29 )
      goto LABEL_27;
    StartCallback = (System_Delegate_o *)v29->fields.StartCallback;
    v33 = (WarBoardTaskBase_TaskCallback_o *)sub_B0D974(WarBoardTaskBase_TaskCallback_TypeInfo, v30, v31);
    WarBoardTaskBase_TaskCallback___ctor(
      v33,
      (Il2CppObject *)this,
      Method_WarBoardBreakPointComponent__ShowMasterRechargeEffect_b__27_0__,
      0LL);
    v34 = (System_Int32_array **)System_Delegate__Combine(StartCallback, (System_Delegate_o *)v33, 0LL);
    if ( v34 && *v34 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      sub_B0DC70(v34);
    }
    else
    {
      v29->fields.StartCallback = (struct WarBoardTaskBase_TaskCallback_o *)v34;
      sub_B0D840((BattleServantConfConponent_o *)&v29->fields.StartCallback, v34, v35, v36, v37, v38, v39, v40);
      if ( taskList )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)taskList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v29,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
        return;
      }
      v41 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      Instance = (char *)sub_B0D8BC(WarBoardTaskBase___TypeInfo, 1LL);
      if ( !Instance )
        goto LABEL_27;
      v42 = Instance;
      v43 = sub_B0D964(v29, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
      if ( v43 )
      {
        if ( !*((_DWORD *)v42 + 6) )
        {
          v51 = sub_B0D9A8(v43);
          sub_B0D948(v51, 0LL);
        }
        *((_QWORD *)v42 + 4) = v29;
        sub_B0D840((BattleServantConfConponent_o *)(v42 + 32), (System_Int32_array **)v29, v44, v45, v46, v47, v48, v49);
        if ( v41 )
        {
          WarBoardManager__InsertTask((WarBoardManager_o *)v41, 0, (WarBoardTaskBase_array *)v42, 0LL);
          return;
        }
LABEL_27:
        sub_B0D97C(Instance);
      }
    }
    v50 = sub_B0D99C();
    sub_B0D948(v50, 0LL);
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