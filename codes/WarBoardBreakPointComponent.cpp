void __fastcall WarBoardBreakPointComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v39; // x1
  struct WarBoardBreakPointComponent_StaticFields *v40; // x0
  System_Int32_array **v41; // x1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  struct WarBoardBreakPointComponent_StaticFields *v48; // x0
  System_Int32_array **v49; // x1
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  struct WarBoardBreakPointComponent_StaticFields *v56; // x0
  System_Int32_array **v57; // x1
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  struct WarBoardBreakPointComponent_StaticFields *v64; // x0
  System_Int32_array **v65; // x1
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  struct WarBoardBreakPointComponent_StaticFields *v72; // x0
  System_Int32_array **v73; // x1
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  struct WarBoardBreakPointComponent_StaticFields *v80; // x0
  System_Int32_array **v81; // x1
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  struct WarBoardBreakPointComponent_StaticFields *v88; // x0
  System_Int32_array **v89; // x1
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  struct WarBoardBreakPointComponent_StaticFields *v96; // x0
  System_Int32_array **v97; // x1
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  struct WarBoardBreakPointComponent_StaticFields *v104; // x0
  System_Int32_array **v105; // x1
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7

  if ( (byte_42E76E1 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardBreakPointComponent_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_9069/*"MasterPoint_recharge_effect_1"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_17145/*"break_on_boss"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_20672/*"master_gauge_off_{0}"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_17143/*"break_off_boss"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_17144/*"break_on"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_17142/*"break_off"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_23506/*"wall_gauge_{0}"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_20673/*"master_gauge_{0}"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_2920/*"BreakPoint_effect_{0}"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_9068/*"MasterPoint_effect_{0}"*/, v35, v36, v37);
    byte_42E76E1 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)WarBoardBreakPointComponent_TypeInfo->static_fields;
  v39 = (System_Int32_array **)StringLiteral_17144/*"break_on"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_17144/*"break_on"*/;
  sub_B5D560(static_fields, v39, v2, v3, v4, v5, v6, v7);
  v40 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v41 = (System_Int32_array **)StringLiteral_17142/*"break_off"*/;
  v40->BreakPointOffImageName = (struct System_String_o *)StringLiteral_17142/*"break_off"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v40->BreakPointOffImageName, v41, v42, v43, v44, v45, v46, v47);
  v48 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v49 = (System_Int32_array **)StringLiteral_17145/*"break_on_boss"*/;
  v48->EnemyBreakPointOnImageName = (struct System_String_o *)StringLiteral_17145/*"break_on_boss"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v48->EnemyBreakPointOnImageName, v49, v50, v51, v52, v53, v54, v55);
  v56 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v57 = (System_Int32_array **)StringLiteral_17143/*"break_off_boss"*/;
  v56->EnemyBreakPointOffImageName = (struct System_String_o *)StringLiteral_17143/*"break_off_boss"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v56->EnemyBreakPointOffImageName, v57, v58, v59, v60, v61, v62, v63);
  v64 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v65 = (System_Int32_array **)StringLiteral_2920/*"BreakPoint_effect_{0}"*/;
  v64->BreakPointEffectName = (struct System_String_o *)StringLiteral_2920/*"BreakPoint_effect_{0}"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v64->BreakPointEffectName, v65, v66, v67, v68, v69, v70, v71);
  v72 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v73 = (System_Int32_array **)StringLiteral_20673/*"master_gauge_{0}"*/;
  v72->MasterPointOnImageName = (struct System_String_o *)StringLiteral_20673/*"master_gauge_{0}"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v72->MasterPointOnImageName, v73, v74, v75, v76, v77, v78, v79);
  v80 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v81 = (System_Int32_array **)StringLiteral_20672/*"master_gauge_off_{0}"*/;
  v80->MasterPointOffImageName = (struct System_String_o *)StringLiteral_20672/*"master_gauge_off_{0}"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v80->MasterPointOffImageName, v81, v82, v83, v84, v85, v86, v87);
  v88 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v89 = (System_Int32_array **)StringLiteral_9068/*"MasterPoint_effect_{0}"*/;
  v88->MasterPointEffectName = (struct System_String_o *)StringLiteral_9068/*"MasterPoint_effect_{0}"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v88->MasterPointEffectName, v89, v90, v91, v92, v93, v94, v95);
  v96 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v97 = (System_Int32_array **)StringLiteral_9069/*"MasterPoint_recharge_effect_1"*/;
  v96->MasterPointRechargeEffectName = (struct System_String_o *)StringLiteral_9069/*"MasterPoint_recharge_effect_1"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v96->MasterPointRechargeEffectName, v97, v98, v99, v100, v101, v102, v103);
  v104 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v105 = (System_Int32_array **)StringLiteral_23506/*"wall_gauge_{0}"*/;
  v104->wallPointImageName = (struct System_String_o *)StringLiteral_23506/*"wall_gauge_{0}"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v104->wallPointImageName, v105, v106, v107, v108, v109, v110, v111);
}


void __fastcall WarBoardBreakPointComponent___ctor(WarBoardBreakPointComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


System_String_o *__fastcall WarBoardBreakPointComponent__GetBreakEffectName(
        WarBoardBreakPointComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  WarBoardBreakPointComponent_c *v8; // x0
  int *v9; // x1
  System_String_o *MasterPointEffectName; // x19
  System_Int32_c *v11; // x0
  Il2CppObject *v12; // x0
  WarBoardBreakPointComponent_c *v14; // x0
  _BOOL4 isEnemyServant; // w9
  int v16; // w8
  int v17; // [xsp+8h] [xbp-18h] BYREF
  int v18; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E76DA & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&WarBoardBreakPointComponent_TypeInfo, v5, v6, v7);
    byte_42E76DA = 1;
  }
  if ( this->fields.isMaster || this->fields.isThirdForce )
  {
    v8 = WarBoardBreakPointComponent_TypeInfo;
    if ( (BYTE3(WarBoardBreakPointComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
      v8 = WarBoardBreakPointComponent_TypeInfo;
    }
    v9 = &v17;
    MasterPointEffectName = v8->static_fields->MasterPointEffectName;
    v11 = int_TypeInfo;
    v17 = 1;
  }
  else
  {
    v14 = WarBoardBreakPointComponent_TypeInfo;
    if ( (BYTE3(WarBoardBreakPointComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
      v14 = WarBoardBreakPointComponent_TypeInfo;
    }
    isEnemyServant = this->fields.isEnemyServant;
    v9 = &v18;
    MasterPointEffectName = v14->static_fields->BreakPointEffectName;
    v11 = int_TypeInfo;
    if ( isEnemyServant )
      v16 = 2;
    else
      v16 = 1;
    v18 = v16;
  }
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(v11, v9);
  return System_String__Format(MasterPointEffectName, v12, 0LL);
}


System_String_o *__fastcall WarBoardBreakPointComponent__GetImageName(
        WarBoardBreakPointComponent_o *this,
        bool isActiveSprite,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  WarBoardBreakPointComponent_c *v9; // x0
  int32_t objectColorNumber; // w9
  System_String_o *MasterPointOffImageName; // x19
  WarBoardBreakPointComponent_c *v12; // x0
  Il2CppObject *v13; // x0
  WarBoardBreakPointComponent_c *v15; // x0
  WarBoardBreakPointComponent_c *v16; // x0
  WarBoardBreakPointComponent_c *v17; // x0
  int32_t v18; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E76D9 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, isActiveSprite, (_DWORD)method, v3);
    sub_B5D5C4(&WarBoardBreakPointComponent_TypeInfo, v6, v7, v8);
    byte_42E76D9 = 1;
  }
  if ( !isActiveSprite )
  {
    if ( !this->fields.isThirdForce )
    {
      if ( this->fields.isMaster )
      {
        v15 = WarBoardBreakPointComponent_TypeInfo;
        if ( (BYTE3(WarBoardBreakPointComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
          v15 = WarBoardBreakPointComponent_TypeInfo;
        }
        objectColorNumber = this->fields.objectColorNumber;
        MasterPointOffImageName = v15->static_fields->MasterPointOffImageName;
        goto LABEL_15;
      }
      v17 = WarBoardBreakPointComponent_TypeInfo;
      if ( this->fields.isEnemyServant )
      {
        if ( (WORD1(WarBoardBreakPointComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
          v17 = WarBoardBreakPointComponent_TypeInfo;
        }
        return v17->static_fields->EnemyBreakPointOffImageName;
      }
      else
      {
        if ( (WORD1(WarBoardBreakPointComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
          v17 = WarBoardBreakPointComponent_TypeInfo;
        }
        return v17->static_fields->BreakPointOffImageName;
      }
    }
LABEL_11:
    v12 = WarBoardBreakPointComponent_TypeInfo;
    if ( (BYTE3(WarBoardBreakPointComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
      v12 = WarBoardBreakPointComponent_TypeInfo;
    }
    objectColorNumber = this->fields.objectColorNumber;
    MasterPointOffImageName = v12->static_fields->wallPointImageName;
    goto LABEL_15;
  }
  if ( this->fields.isThirdForce )
    goto LABEL_11;
  if ( this->fields.isMaster )
  {
    v9 = WarBoardBreakPointComponent_TypeInfo;
    if ( (BYTE3(WarBoardBreakPointComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
      v9 = WarBoardBreakPointComponent_TypeInfo;
    }
    objectColorNumber = this->fields.objectColorNumber;
    MasterPointOffImageName = v9->static_fields->MasterPointOnImageName;
LABEL_15:
    v18 = objectColorNumber;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
    return System_String__Format(MasterPointOffImageName, v13, 0LL);
  }
  v16 = WarBoardBreakPointComponent_TypeInfo;
  if ( this->fields.isEnemyServant )
  {
    if ( (WORD1(WarBoardBreakPointComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
      v16 = WarBoardBreakPointComponent_TypeInfo;
    }
    return v16->static_fields->EnemyBreakPointOnImageName;
  }
  else
  {
    if ( (WORD1(WarBoardBreakPointComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
      v16 = WarBoardBreakPointComponent_TypeInfo;
    }
    return v16->static_fields->BreakPointOnImageName;
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

  if ( (byte_42E76DB & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, depth, number, isMaster);
    byte_42E76DB = 1;
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
    sub_B5D69C(v15, v14);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  WebViewManager_o *Instance; // x22
  const MethodInfo *v35; // x1
  char *BreakEffectName; // x0
  __int64 v37; // x1
  Il2CppObject *CommonEffectAsset_object; // x22
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_GameObject_o *v40; // x23
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  WarBoardCommonEffectPerformance_o *v47; // x0
  WarBoardCommonEffectPerformance_o *v48; // x22
  System_Int32_array **v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Int32_array **v56; // x8
  System_Delegate_o *EndCallback; // x23
  WarBoardTaskBase_TaskCallback_o *v58; // x24
  System_Int32_array **v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  WebViewManager_o *v66; // x19
  char *v67; // x20
  __int64 v68; // x0
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  __int64 v75; // x0
  __int64 v76; // x0
  const MethodInfo *v77; // [xsp+28h] [xbp-48h]
  System_Nullable_Vector3__o v78; // 0:x3.16
  System_Nullable_Vector3__o v79; // 0:x5.16

  if ( (byte_42E76DC & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointEffectComponent___,
      (_DWORD)taskList,
      (_DWORD)startCallback,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v7, v8, v9);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject____68882800, v10, v11, v12);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v16, v17, v18);
    sub_B5D5C4(&WarBoardTaskBase_TaskCallback_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_WarBoardBreakPointComponent__OnBreak_b__26_0__, v22, v23, v24);
    sub_B5D5C4(&WarBoardCommonEffectPerformance_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___, v28, v29, v30);
    sub_B5D5C4(&WarBoardTaskBase___TypeInfo, v31, v32, v33);
    byte_42E76DC = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  BreakEffectName = (char *)WarBoardBreakPointComponent__GetBreakEffectName(this, v35);
  if ( !Instance )
    goto LABEL_29;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)Instance,
                               (System_String_o *)BreakEffectName,
                               (const MethodInfo_2E68600 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
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
                                (const MethodInfo_1E66414 *)Method_UnityEngine_Object_Instantiate_GameObject____68882800);
    if ( !BreakEffectName )
      goto LABEL_29;
    v40 = (UnityEngine_GameObject_o *)BreakEffectName;
    BreakEffectName = (char *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                (UnityEngine_GameObject_o *)BreakEffectName,
                                (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointEffectComponent___);
    if ( !BreakEffectName )
      goto LABEL_29;
    *((_QWORD *)BreakEffectName + 3) = this;
    sub_B5D560(
      (BattleServantConfConponent_o *)(BreakEffectName + 24),
      (System_Int32_array **)this,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
    v47 = (WarBoardCommonEffectPerformance_o *)sub_B5D694(WarBoardCommonEffectPerformance_TypeInfo);
    *(_QWORD *)&v78.fields.value.fields.x = 0LL;
    *(_QWORD *)&v78.fields.value.fields.z = 0LL;
    *(_QWORD *)&v79.fields.value.fields.x = 0LL;
    *(_QWORD *)&v79.fields.value.fields.z = 0LL;
    v48 = v47;
    WarBoardCommonEffectPerformance___ctor(v47, 0LL, v40, v78, v79, (System_Nullable_Vector3__o)0, 0, 0, 1, v77);
    if ( startCallback )
    {
      if ( !v48 )
        goto LABEL_29;
      v49 = (System_Int32_array **)System_Delegate__Combine(
                                     (System_Delegate_o *)v48->fields.StartCallback,
                                     (System_Delegate_o *)startCallback,
                                     0LL);
      v56 = v49;
      if ( v49 && *v49 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
        goto LABEL_30;
      v48->fields.StartCallback = (struct WarBoardTaskBase_TaskCallback_o *)v49;
      sub_B5D560((BattleServantConfConponent_o *)&v48->fields.StartCallback, v49, v50, v51, v52, v53, v54, v55);
    }
    else if ( !v48 )
    {
      goto LABEL_29;
    }
    EndCallback = (System_Delegate_o *)v48->fields.EndCallback;
    v58 = (WarBoardTaskBase_TaskCallback_o *)sub_B5D694(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(
      v58,
      (Il2CppObject *)this,
      Method_WarBoardBreakPointComponent__OnBreak_b__26_0__,
      0LL);
    v59 = (System_Int32_array **)System_Delegate__Combine(EndCallback, (System_Delegate_o *)v58, 0LL);
    v56 = v59;
    if ( !v59 || *v59 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      v48->fields.EndCallback = (struct WarBoardTaskBase_TaskCallback_o *)v59;
      sub_B5D560((BattleServantConfConponent_o *)&v48->fields.EndCallback, v59, v60, v61, v62, v63, v64, v65);
      if ( taskList )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)taskList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v48,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
        return;
      }
      v66 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      BreakEffectName = (char *)sub_B5D5DC(WarBoardTaskBase___TypeInfo, 1LL);
      if ( !BreakEffectName )
        goto LABEL_29;
      v67 = BreakEffectName;
      v68 = sub_B5D684(v48, *(_QWORD *)(*(_QWORD *)BreakEffectName + 64LL));
      if ( v68 )
      {
        if ( !*((_DWORD *)v67 + 6) )
        {
          v76 = sub_B5D6C8(v68);
          sub_B5D668(v76, 0LL);
        }
        *((_QWORD *)v67 + 4) = v48;
        sub_B5D560((BattleServantConfConponent_o *)(v67 + 32), (System_Int32_array **)v48, v69, v70, v71, v72, v73, v74);
        if ( v66 )
        {
          WarBoardManager__InsertTask((WarBoardManager_o *)v66, 0, (WarBoardTaskBase_array *)v67, 0LL);
          return;
        }
LABEL_29:
        sub_B5D69C(BreakEffectName, v37);
      }
LABEL_31:
      v75 = sub_B5D6BC();
      sub_B5D668(v75, 0LL);
    }
LABEL_30:
    sub_B5D990(v56);
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
  if ( (byte_42E76DE & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, active, force, method);
    byte_42E76DE = 1;
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
    sub_B5D69C(gameObject, v7);
  }
}


void __fastcall WarBoardBreakPointComponent__SetBreakPointFadeIn(
        WarBoardBreakPointComponent_o *this,
        float duration,
        const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  UnityEngine_Object_o *activeObject; // x20
  __int64 v8; // x1
  UnityEngine_Component_o *v9; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *deactiveObject; // x20
  UnityEngine_GameObject_o *v12; // x0

  if ( (byte_42E76E0 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v3, v4);
    byte_42E76E0 = 1;
  }
  activeObject = (UnityEngine_Object_o *)this->fields.activeObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(activeObject, 0LL, 0LL) )
  {
    v9 = (UnityEngine_Component_o *)this->fields.activeObject;
    if ( !v9 )
      goto LABEL_16;
    gameObject = UnityEngine_Component__get_gameObject(v9, 0LL);
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
      v12 = UnityEngine_Component__get_gameObject(v9, 0LL);
      TweenAlpha__Begin(v12, duration, 1.0, 0LL);
      return;
    }
LABEL_16:
    sub_B5D69C(v9, v8);
  }
}


void __fastcall WarBoardBreakPointComponent__SetBreakPointFadeOut(
        WarBoardBreakPointComponent_o *this,
        float duration,
        const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  UnityEngine_Object_o *activeObject; // x20
  __int64 v8; // x1
  UnityEngine_Component_o *v9; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *deactiveObject; // x20
  UnityEngine_GameObject_o *v12; // x0

  if ( (byte_42E76DF & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v3, v4);
    byte_42E76DF = 1;
  }
  activeObject = (UnityEngine_Object_o *)this->fields.activeObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(activeObject, 0LL, 0LL) )
  {
    v9 = (UnityEngine_Component_o *)this->fields.activeObject;
    if ( !v9 )
      goto LABEL_16;
    gameObject = UnityEngine_Component__get_gameObject(v9, 0LL);
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
      v12 = UnityEngine_Component__get_gameObject(v9, 0LL);
      TweenAlpha__Begin(v12, duration, 0.0, 0LL);
      return;
    }
LABEL_16:
    sub_B5D69C(v9, v8);
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
    sub_B5D69C(this, breakPoint);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  char *Instance; // x0
  __int64 v37; // x1
  WarBoardManager_o *v38; // x21
  Il2CppObject *CommonEffectAsset_object; // x21
  UnityEngine_Transform_o *transform; // x22
  UnityEngine_GameObject_o *v41; // x22
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  WarBoardCommonEffectPerformance_o *v48; // x0
  WarBoardCommonEffectPerformance_o *v49; // x21
  System_Delegate_o *StartCallback; // x23
  WarBoardTaskBase_TaskCallback_o *v51; // x24
  System_Int32_array **v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  WebViewManager_o *v59; // x19
  char *v60; // x20
  __int64 v61; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  __int64 v68; // x0
  __int64 v69; // x0
  const MethodInfo *v70; // [xsp+28h] [xbp-48h]
  System_Nullable_Vector3__o v71; // 0:x3.16
  System_Nullable_Vector3__o v72; // 0:x5.16

  if ( (byte_42E76DD & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointEffectComponent___,
      (_DWORD)taskList,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v6, v7, v8);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject____68882800, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v15, v16, v17);
    sub_B5D5C4(&WarBoardTaskBase_TaskCallback_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_WarBoardBreakPointComponent__ShowMasterRechargeEffect_b__27_0__, v21, v22, v23);
    sub_B5D5C4(&WarBoardBreakPointComponent_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&WarBoardCommonEffectPerformance_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___, v30, v31, v32);
    sub_B5D5C4(&WarBoardTaskBase___TypeInfo, v33, v34, v35);
    byte_42E76DD = 1;
  }
  Instance = (char *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v38 = (WarBoardManager_o *)Instance;
  if ( (BYTE3(WarBoardBreakPointComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
  }
  if ( !v38 )
    goto LABEL_27;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               v38,
                               WarBoardBreakPointComponent_TypeInfo->static_fields->MasterPointRechargeEffectName,
                               (const MethodInfo_2E68600 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
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
                         (const MethodInfo_1E66414 *)Method_UnityEngine_Object_Instantiate_GameObject____68882800);
    if ( !Instance )
      goto LABEL_27;
    v41 = (UnityEngine_GameObject_o *)Instance;
    Instance = (char *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                         (UnityEngine_GameObject_o *)Instance,
                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointEffectComponent___);
    if ( !Instance )
      goto LABEL_27;
    *((_QWORD *)Instance + 3) = this;
    sub_B5D560(
      (BattleServantConfConponent_o *)(Instance + 24),
      (System_Int32_array **)this,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
    v48 = (WarBoardCommonEffectPerformance_o *)sub_B5D694(WarBoardCommonEffectPerformance_TypeInfo);
    *(_QWORD *)&v71.fields.value.fields.x = 0LL;
    *(_QWORD *)&v71.fields.value.fields.z = 0LL;
    *(_QWORD *)&v72.fields.value.fields.x = 0LL;
    *(_QWORD *)&v72.fields.value.fields.z = 0LL;
    v49 = v48;
    WarBoardCommonEffectPerformance___ctor(v48, 0LL, v41, v71, v72, (System_Nullable_Vector3__o)0, 0, 0, 1, v70);
    if ( !v49 )
      goto LABEL_27;
    StartCallback = (System_Delegate_o *)v49->fields.StartCallback;
    v51 = (WarBoardTaskBase_TaskCallback_o *)sub_B5D694(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(
      v51,
      (Il2CppObject *)this,
      Method_WarBoardBreakPointComponent__ShowMasterRechargeEffect_b__27_0__,
      0LL);
    v52 = (System_Int32_array **)System_Delegate__Combine(StartCallback, (System_Delegate_o *)v51, 0LL);
    if ( v52 && *v52 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      sub_B5D990(v52);
    }
    else
    {
      v49->fields.StartCallback = (struct WarBoardTaskBase_TaskCallback_o *)v52;
      sub_B5D560((BattleServantConfConponent_o *)&v49->fields.StartCallback, v52, v53, v54, v55, v56, v57, v58);
      if ( taskList )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)taskList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v49,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
        return;
      }
      v59 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      Instance = (char *)sub_B5D5DC(WarBoardTaskBase___TypeInfo, 1LL);
      if ( !Instance )
        goto LABEL_27;
      v60 = Instance;
      v61 = sub_B5D684(v49, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
      if ( v61 )
      {
        if ( !*((_DWORD *)v60 + 6) )
        {
          v69 = sub_B5D6C8(v61);
          sub_B5D668(v69, 0LL);
        }
        *((_QWORD *)v60 + 4) = v49;
        sub_B5D560((BattleServantConfConponent_o *)(v60 + 32), (System_Int32_array **)v49, v62, v63, v64, v65, v66, v67);
        if ( v59 )
        {
          WarBoardManager__InsertTask((WarBoardManager_o *)v59, 0, (WarBoardTaskBase_array *)v60, 0LL);
          return;
        }
LABEL_27:
        sub_B5D69C(Instance, v37);
      }
    }
    v68 = sub_B5D6BC();
    sub_B5D668(v68, 0LL);
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