void __fastcall WarBoardBreakPointComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  int64_t v28; // x1
  struct WarBoardBreakPointComponent_StaticFields *static_fields; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int64_t v36; // x1
  struct WarBoardBreakPointComponent_StaticFields *v37; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x1
  struct WarBoardBreakPointComponent_StaticFields *v45; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  int64_t v52; // x1
  struct WarBoardBreakPointComponent_StaticFields *v53; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  int64_t v60; // x1
  struct WarBoardBreakPointComponent_StaticFields *v61; // x0
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  int64_t v68; // x1
  struct WarBoardBreakPointComponent_StaticFields *v69; // x0
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  int64_t v76; // x1
  struct WarBoardBreakPointComponent_StaticFields *v77; // x0
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  int64_t v84; // x1
  struct WarBoardBreakPointComponent_StaticFields *v85; // x0
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  struct WarBoardBreakPointComponent_StaticFields *v92; // x0
  int64_t v93; // x1
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7

  if ( (byte_4B13B83 & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardBreakPointComponent_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_9039/*"MasterPoint_recharge_effect_1"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_17622/*"break_on_boss"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_21551/*"master_gauge_off_{0}"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_17620/*"break_off_boss"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_17621/*"break_on"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_17619/*"break_off"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_24862/*"wall_gauge_{0}"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_21552/*"master_gauge_{0}"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_3361/*"BreakPoint_effect_{0}"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_9038/*"MasterPoint_effect_{0}"*/, v26, v27);
    byte_4B13B83 = 1;
  }
  WarBoardBreakPointComponent_TypeInfo->static_fields->BreakPointOnImageName = (struct System_String_o *)StringLiteral_17621/*"break_on"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)WarBoardBreakPointComponent_TypeInfo->static_fields,
    StringLiteral_17621/*"break_on"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v28 = StringLiteral_17619/*"break_off"*/;
  static_fields = WarBoardBreakPointComponent_TypeInfo->static_fields;
  static_fields->BreakPointOffImageName = (struct System_String_o *)StringLiteral_17619/*"break_off"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->BreakPointOffImageName, v28, v30, v31, v32, v33, v34, v35);
  v36 = StringLiteral_17622/*"break_on_boss"*/;
  v37 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v37->EnemyBreakPointOnImageName = (struct System_String_o *)StringLiteral_17622/*"break_on_boss"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v37->EnemyBreakPointOnImageName, v36, v38, v39, v40, v41, v42, v43);
  v44 = StringLiteral_17620/*"break_off_boss"*/;
  v45 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v45->EnemyBreakPointOffImageName = (struct System_String_o *)StringLiteral_17620/*"break_off_boss"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v45->EnemyBreakPointOffImageName, v44, v46, v47, v48, v49, v50, v51);
  v52 = StringLiteral_3361/*"BreakPoint_effect_{0}"*/;
  v53 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v53->BreakPointEffectName = (struct System_String_o *)StringLiteral_3361/*"BreakPoint_effect_{0}"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v53->BreakPointEffectName, v52, v54, v55, v56, v57, v58, v59);
  v60 = StringLiteral_21552/*"master_gauge_{0}"*/;
  v61 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v61->MasterPointOnImageName = (struct System_String_o *)StringLiteral_21552/*"master_gauge_{0}"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v61->MasterPointOnImageName, v60, v62, v63, v64, v65, v66, v67);
  v68 = StringLiteral_21551/*"master_gauge_off_{0}"*/;
  v69 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v69->MasterPointOffImageName = (struct System_String_o *)StringLiteral_21551/*"master_gauge_off_{0}"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v69->MasterPointOffImageName, v68, v70, v71, v72, v73, v74, v75);
  v76 = StringLiteral_9038/*"MasterPoint_effect_{0}"*/;
  v77 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v77->MasterPointEffectName = (struct System_String_o *)StringLiteral_9038/*"MasterPoint_effect_{0}"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v77->MasterPointEffectName, v76, v78, v79, v80, v81, v82, v83);
  v84 = StringLiteral_9039/*"MasterPoint_recharge_effect_1"*/;
  v85 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v85->MasterPointRechargeEffectName = (struct System_String_o *)StringLiteral_9039/*"MasterPoint_recharge_effect_1"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v85->MasterPointRechargeEffectName, v84, v86, v87, v88, v89, v90, v91);
  v92 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v93 = StringLiteral_24862/*"wall_gauge_{0}"*/;
  v92->wallPointImageName = (struct System_String_o *)StringLiteral_24862/*"wall_gauge_{0}"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v92->wallPointImageName, v93, v94, v95, v96, v97, v98, v99);
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
  __int64 v4; // x1
  __int64 v5; // x2
  WarBoardBreakPointComponent_c *v6; // x0
  struct WarBoardBreakPointComponent_StaticFields *static_fields; // x8
  System_Int32_c *v8; // x0
  int *v9; // x1
  System_String_o *MasterPointEffectName; // x19
  Il2CppObject *v11; // x0
  WarBoardBreakPointComponent_c *v13; // x0
  struct WarBoardBreakPointComponent_StaticFields *v14; // x8
  _BOOL4 isEnemyServant; // w9
  int v16; // w8
  int v17; // [xsp+8h] [xbp-28h] BYREF
  int v18; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B13B7C & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, method, v2);
    sub_1BCA7E0(&WarBoardBreakPointComponent_TypeInfo, v4, v5);
    byte_4B13B7C = 1;
  }
  if ( this->fields.isMaster || this->fields.isThirdForce )
  {
    v6 = WarBoardBreakPointComponent_TypeInfo;
    if ( !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo, method);
      v6 = WarBoardBreakPointComponent_TypeInfo;
    }
    static_fields = v6->static_fields;
    v8 = int_TypeInfo;
    v9 = &v17;
    MasterPointEffectName = static_fields->MasterPointEffectName;
    v17 = 1;
  }
  else
  {
    v13 = WarBoardBreakPointComponent_TypeInfo;
    if ( !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo, method);
      v13 = WarBoardBreakPointComponent_TypeInfo;
    }
    v14 = v13->static_fields;
    isEnemyServant = this->fields.isEnemyServant;
    v8 = int_TypeInfo;
    v9 = &v18;
    MasterPointEffectName = v14->BreakPointEffectName;
    if ( isEnemyServant )
      v16 = 2;
    else
      v16 = 1;
    v18 = v16;
  }
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(v8, v9);
  return System_String__Format(MasterPointEffectName, v11, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall WarBoardBreakPointComponent__GetImageName(
        WarBoardBreakPointComponent_o *this,
        bool isActiveSprite,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  WarBoardBreakPointComponent_c *v7; // x0
  int32_t objectColorNumber; // w9
  System_String_o *MasterPointOffImageName; // x19
  WarBoardBreakPointComponent_c *v10; // x0
  Il2CppObject *v11; // x0
  WarBoardBreakPointComponent_c *v13; // x0
  _BOOL4 v14; // w19
  WarBoardBreakPointComponent_c *v15; // x0
  System_String_o **p_BreakPointOnImageName; // x8
  _BOOL4 isEnemyServant; // w19
  WarBoardBreakPointComponent_c *v18; // x0
  struct WarBoardBreakPointComponent_StaticFields *static_fields; // x8
  int32_t v20; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B13B7B & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, isActiveSprite, method);
    sub_1BCA7E0(&WarBoardBreakPointComponent_TypeInfo, v5, v6);
    byte_4B13B7B = 1;
  }
  if ( !isActiveSprite )
  {
    if ( !this->fields.isThirdForce )
    {
      if ( this->fields.isMaster )
      {
        v13 = WarBoardBreakPointComponent_TypeInfo;
        if ( !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo, isActiveSprite);
          v13 = WarBoardBreakPointComponent_TypeInfo;
        }
        objectColorNumber = this->fields.objectColorNumber;
        MasterPointOffImageName = v13->static_fields->MasterPointOffImageName;
        goto LABEL_13;
      }
      isEnemyServant = this->fields.isEnemyServant;
      v18 = WarBoardBreakPointComponent_TypeInfo;
      if ( !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo, isActiveSprite);
        v18 = WarBoardBreakPointComponent_TypeInfo;
      }
      static_fields = v18->static_fields;
      if ( isEnemyServant )
        return static_fields->EnemyBreakPointOffImageName;
      else
        return static_fields->BreakPointOffImageName;
    }
LABEL_10:
    v10 = WarBoardBreakPointComponent_TypeInfo;
    if ( !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo, isActiveSprite);
      v10 = WarBoardBreakPointComponent_TypeInfo;
    }
    objectColorNumber = this->fields.objectColorNumber;
    MasterPointOffImageName = v10->static_fields->wallPointImageName;
    goto LABEL_13;
  }
  if ( this->fields.isThirdForce )
    goto LABEL_10;
  if ( this->fields.isMaster )
  {
    v7 = WarBoardBreakPointComponent_TypeInfo;
    if ( !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo, isActiveSprite);
      v7 = WarBoardBreakPointComponent_TypeInfo;
    }
    objectColorNumber = this->fields.objectColorNumber;
    MasterPointOffImageName = v7->static_fields->MasterPointOnImageName;
LABEL_13:
    v20 = objectColorNumber;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
    return System_String__Format(MasterPointOffImageName, v11, 0LL);
  }
  v14 = this->fields.isEnemyServant;
  v15 = WarBoardBreakPointComponent_TypeInfo;
  if ( !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo, isActiveSprite);
    v15 = WarBoardBreakPointComponent_TypeInfo;
  }
  p_BreakPointOnImageName = &v15->static_fields->BreakPointOnImageName;
  if ( v14 )
    return p_BreakPointOnImageName[2];
  else
    return *p_BreakPointOnImageName;
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
  bool v11; // w26
  bool v12; // w25
  bool v13; // w24
  UnityEngine_Object_o *activeObject; // x22
  __int64 v15; // x1
  UIWidget_o *v16; // x0
  const MethodInfo *v17; // x3
  UnityEngine_Object_o *deactiveObject; // x22
  const MethodInfo *v19; // x3
  UnityEngine_Object_o *baseObject; // x22
  const MethodInfo *v21; // x3

  v11 = isMaster;
  v12 = isEnemyServant;
  v13 = isThirdForce;
  if ( (byte_4B13B7D & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&depth, *(_QWORD *)&number);
    byte_4B13B7D = 1;
  }
  this->fields.isMaster = v11;
  this->fields.isEnemyServant = v12;
  this->fields.isThirdForce = v13;
  this->fields.objectColorNumber = number;
  activeObject = (UnityEngine_Object_o *)this->fields.activeObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&depth);
  if ( UnityEngine_Object__op_Inequality(activeObject, 0LL, 0LL) )
  {
    v16 = (UIWidget_o *)this->fields.activeObject;
    if ( !v16 )
      goto LABEL_20;
    UIWidget__set_depth(v16, depth + 1, 0LL);
    WarBoardBreakPointComponent__SetChangeBreakPoint(this, this->fields.activeObject, 1, v17);
  }
  deactiveObject = (UnityEngine_Object_o *)this->fields.deactiveObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  if ( UnityEngine_Object__op_Inequality(deactiveObject, 0LL, 0LL) )
  {
    v16 = (UIWidget_o *)this->fields.deactiveObject;
    if ( !v16 )
      goto LABEL_20;
    UIWidget__set_depth(v16, depth + 1, 0LL);
    WarBoardBreakPointComponent__SetChangeBreakPoint(this, this->fields.deactiveObject, 0, v19);
  }
  baseObject = (UnityEngine_Object_o *)this->fields.baseObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  if ( UnityEngine_Object__op_Inequality(baseObject, 0LL, 0LL) )
  {
    v16 = (UIWidget_o *)this->fields.baseObject;
    if ( v16 )
    {
      UIWidget__set_depth(v16, depth, 0LL);
      if ( !isThirdForce )
        WarBoardBreakPointComponent__SetChangeBreakPoint(this, this->fields.baseObject, 0, v21);
      goto LABEL_19;
    }
LABEL_20:
    sub_1BCAA3C(v16, v15);
  }
LABEL_19:
  WarBoardBreakPointComponent__SetActive(this, this->fields.startState, 0, v21);
}


void __fastcall WarBoardBreakPointComponent__OnBreak(
        WarBoardBreakPointComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        WarBoardTaskBase_TaskCallback_o *startCallback,
        const MethodInfo *method)
{
  System_Delegate_o *v4; // x21
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  Il2CppObject *Instance; // x22
  const MethodInfo *v26; // x1
  char *BreakEffectName; // x0
  __int64 v28; // x1
  __int64 v29; // x1
  Il2CppObject *CommonEffectAsset_object; // x22
  __int64 v31; // x1
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_GameObject_o *v33; // x23
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  WarBoardCommonEffectPerformance_o *v43; // x0
  int64_t v44; // x22
  __int64 v45; // x2
  __int64 v46; // x3
  System_Delegate_o **v47; // x23
  System_Delegate_o *v48; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  int64_t v55; // x8
  WarBoardTaskBase_TaskCallback_c *v56; // x1
  System_Delegate_o *v57; // x23
  WarBoardTaskBase_TaskCallback_o *v58; // x24
  System_Delegate_o *v59; // x0
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  WarBoardTaskBase_TaskCallback_c *v66; // x1
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v74; // x9
  __int64 size; // x10
  Il2CppClass **v76; // x0
  Il2CppObject *v77; // x19
  char *v78; // x20
  __int64 v79; // x0
  __int64 v80; // x1
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  __int64 v87; // x0
  System_Nullable_Vector3__o v88; // 0:x3.16
  System_Nullable_Vector3__o v89; // 0:x5.16

  v4 = (System_Delegate_o *)startCallback;
  if ( (byte_4B13B7E & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointEffectComponent___,
      taskList,
      startCallback);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v13, v14);
    sub_1BCA7E0(&WarBoardTaskBase_TaskCallback_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_WarBoardBreakPointComponent__OnBreak_b__26_0__, v17, v18);
    sub_1BCA7E0(&WarBoardCommonEffectPerformance_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___, v21, v22);
    sub_1BCA7E0(&WarBoardTaskBase___TypeInfo, v23, v24);
    byte_4B13B7E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  BreakEffectName = (char *)WarBoardBreakPointComponent__GetBreakEffectName(this, v26);
  if ( !Instance )
    goto LABEL_37;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)Instance,
                               (System_String_o *)BreakEffectName,
                               (const MethodInfo_2FF0B1C *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)CommonEffectAsset_object, 0LL, 0LL) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31);
    BreakEffectName = (char *)UnityEngine_Object__Instantiate_object__49903816(
                                CommonEffectAsset_object,
                                transform,
                                (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
    if ( !BreakEffectName )
      goto LABEL_37;
    v33 = (UnityEngine_GameObject_o *)BreakEffectName;
    BreakEffectName = (char *)UnityEngine_GameObject__GetComponent_object_(
                                (UnityEngine_GameObject_o *)BreakEffectName,
                                (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointEffectComponent___);
    if ( !BreakEffectName )
      goto LABEL_37;
    *((_QWORD *)BreakEffectName + 4) = this;
    sub_1BCA784((PartyOrganizationUtility_o *)(BreakEffectName + 32), (int64_t)this, v34, v35, v36, v37, v38, v39);
    v43 = (WarBoardCommonEffectPerformance_o *)sub_1BCAA2C(WarBoardCommonEffectPerformance_TypeInfo, v40, v41, v42);
    *(_QWORD *)&v88.fields.hasValue = 0LL;
    *(_QWORD *)&v88.fields.value.fields.y = 0LL;
    *(_QWORD *)&v89.fields.hasValue = 0LL;
    *(_QWORD *)&v89.fields.value.fields.y = 0LL;
    v44 = (int64_t)v43;
    WarBoardCommonEffectPerformance___ctor(v43, 0LL, v33, v88, v89, (System_Nullable_Vector3__o)0, 0, 0, 1, 0LL);
    if ( v4 )
    {
      if ( !v44 )
        goto LABEL_37;
      v47 = (System_Delegate_o **)(v44 + 32);
      v48 = System_Delegate__Combine(*(System_Delegate_o **)(v44 + 32), v4, 0LL);
      v55 = (int64_t)v48;
      if ( v48 )
      {
        v56 = WarBoardTaskBase_TaskCallback_TypeInfo;
        if ( (WarBoardTaskBase_TaskCallback_c *)v48->klass != WarBoardTaskBase_TaskCallback_TypeInfo )
          goto LABEL_25;
        *v47 = v48;
        if ( (WarBoardTaskBase_TaskCallback_c *)v48->klass != v56 )
          goto LABEL_25;
      }
      else
      {
        *v47 = 0LL;
      }
      sub_1BCA784((PartyOrganizationUtility_o *)(v44 + 32), (int64_t)v48, v49, v50, v51, v52, v53, v54);
    }
    else if ( !v44 )
    {
      goto LABEL_37;
    }
    v4 = (System_Delegate_o *)(v44 + 40);
    v57 = *(System_Delegate_o **)(v44 + 40);
    v58 = (WarBoardTaskBase_TaskCallback_o *)sub_1BCAA2C(WarBoardTaskBase_TaskCallback_TypeInfo, v28, v45, v46);
    WarBoardTaskBase_TaskCallback___ctor(
      v58,
      (Il2CppObject *)this,
      Method_WarBoardBreakPointComponent__OnBreak_b__26_0__,
      0LL);
    v59 = System_Delegate__Combine(v57, (System_Delegate_o *)v58, 0LL);
    v55 = (int64_t)v59;
    if ( !v59 )
    {
LABEL_26:
      v4->klass = (System_Delegate_c *)v55;
      goto LABEL_27;
    }
    v66 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v59->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      v4->klass = (System_Delegate_c *)v59;
      if ( (WarBoardTaskBase_TaskCallback_c *)v59->klass == v66 )
      {
LABEL_27:
        sub_1BCA784((PartyOrganizationUtility_o *)v4, v55, v60, v61, v62, v63, v64, v65);
        if ( taskList )
        {
          items = taskList->fields._items;
          v74 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
          ++taskList->fields._version;
          if ( items )
          {
            size = taskList->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)taskList,
                (Il2CppObject *)v44,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
            }
            else
            {
              v76 = &items->obj.klass + size;
              taskList->fields._size = size + 1;
              v76[4] = (Il2CppClass *)v44;
              sub_1BCA784((PartyOrganizationUtility_o *)(v76 + 4), v44, v67, v68, v69, v70, v71, v72);
            }
            return;
          }
        }
        else
        {
          v77 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          BreakEffectName = (char *)sub_1BCA888(WarBoardTaskBase___TypeInfo, 1LL);
          if ( BreakEffectName )
          {
            v78 = BreakEffectName;
            v79 = sub_1BCA91C(v44, *(_QWORD *)(*(_QWORD *)BreakEffectName + 64LL));
            if ( !v79 )
            {
              v87 = sub_1BCAA60();
              sub_1BCA908(v87, 0LL);
            }
            if ( !*((_DWORD *)v78 + 6) )
              sub_1BCAA44(v79, v80);
            *((_QWORD *)v78 + 4) = v44;
            sub_1BCA784((PartyOrganizationUtility_o *)(v78 + 32), v44, v81, v82, v83, v84, v85, v86);
            if ( v77 )
            {
              WarBoardManager__InsertTask((WarBoardManager_o *)v77, 0, (WarBoardTaskBase_array *)v78, 0LL);
              return;
            }
          }
        }
LABEL_37:
        sub_1BCAA3C(BreakEffectName, v28);
      }
    }
LABEL_25:
    sub_1BCACFC(v55);
    goto LABEL_26;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardBreakPointComponent__SetActive(
        WarBoardBreakPointComponent_o *this,
        bool active,
        bool force,
        const MethodInfo *method)
{
  UnityEngine_Object_o *activeObject; // x21
  __int64 v7; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *deactiveObject; // x21

  if ( (byte_4B13B80 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, active, force);
    byte_4B13B80 = 1;
  }
  if ( this->fields._isActive_k__BackingField != active )
  {
    activeObject = (UnityEngine_Object_o *)this->fields.activeObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, active);
    if ( UnityEngine_Object__op_Inequality(activeObject, 0LL, 0LL) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.activeObject;
      if ( !gameObject )
        goto LABEL_18;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_18;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, active, 0LL);
    }
    deactiveObject = (UnityEngine_Object_o *)this->fields.deactiveObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    if ( !UnityEngine_Object__op_Inequality(deactiveObject, 0LL, 0LL) )
      goto LABEL_16;
    gameObject = (UnityEngine_Component_o *)this->fields.deactiveObject;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, !active, 0LL);
LABEL_16:
        this->fields._isActive_k__BackingField = active;
        return;
      }
    }
LABEL_18:
    sub_1BCAA3C(gameObject, v7);
  }
}


void __fastcall WarBoardBreakPointComponent__SetBreakPointFadeIn(
        WarBoardBreakPointComponent_o *this,
        float duration,
        const MethodInfo *method)
{
  __int64 v3; // x2
  UnityEngine_Object_o *activeObject; // x20
  __int64 v7; // x1
  UnityEngine_Component_o *v8; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *deactiveObject; // x20
  UnityEngine_GameObject_o *v11; // x0

  if ( (byte_4B13B82 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v3);
    byte_4B13B82 = 1;
  }
  activeObject = (UnityEngine_Object_o *)this->fields.activeObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(activeObject, 0LL, 0LL) )
  {
    v8 = (UnityEngine_Component_o *)this->fields.activeObject;
    if ( !v8 )
      goto LABEL_14;
    gameObject = UnityEngine_Component__get_gameObject(v8, 0LL);
    TweenAlpha__Begin(gameObject, duration, 1.0, 0LL);
  }
  deactiveObject = (UnityEngine_Object_o *)this->fields.deactiveObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(deactiveObject, 0LL, 0LL) )
  {
    v8 = (UnityEngine_Component_o *)this->fields.deactiveObject;
    if ( v8 )
    {
      v11 = UnityEngine_Component__get_gameObject(v8, 0LL);
      TweenAlpha__Begin(v11, duration, 1.0, 0LL);
      return;
    }
LABEL_14:
    sub_1BCAA3C(v8, v7);
  }
}


void __fastcall WarBoardBreakPointComponent__SetBreakPointFadeOut(
        WarBoardBreakPointComponent_o *this,
        float duration,
        const MethodInfo *method)
{
  __int64 v3; // x2
  UnityEngine_Object_o *activeObject; // x20
  __int64 v7; // x1
  UnityEngine_Component_o *v8; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *deactiveObject; // x20
  UnityEngine_GameObject_o *v11; // x0

  if ( (byte_4B13B81 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v3);
    byte_4B13B81 = 1;
  }
  activeObject = (UnityEngine_Object_o *)this->fields.activeObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(activeObject, 0LL, 0LL) )
  {
    v8 = (UnityEngine_Component_o *)this->fields.activeObject;
    if ( !v8 )
      goto LABEL_14;
    gameObject = UnityEngine_Component__get_gameObject(v8, 0LL);
    TweenAlpha__Begin(gameObject, duration, 0.0, 0LL);
  }
  deactiveObject = (UnityEngine_Object_o *)this->fields.deactiveObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(deactiveObject, 0LL, 0LL) )
  {
    v8 = (UnityEngine_Component_o *)this->fields.deactiveObject;
    if ( v8 )
    {
      v11 = UnityEngine_Component__get_gameObject(v8, 0LL);
      TweenAlpha__Begin(v11, duration, 0.0, 0LL);
      return;
    }
LABEL_14:
    sub_1BCAA3C(v8, v7);
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
    sub_1BCAA3C(this, breakPoint);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  Il2CppObject *Instance; // x0
  __int64 v26; // x1
  WarBoardManager_o *v27; // x21
  __int64 v28; // x1
  Il2CppObject *CommonEffectAsset_object; // x21
  __int64 v30; // x1
  UnityEngine_Transform_o *transform; // x22
  UnityEngine_GameObject_o *v32; // x22
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  WarBoardCommonEffectPerformance_o *v42; // x0
  int64_t v43; // x21
  __int64 v44; // x2
  __int64 v45; // x3
  System_Delegate_o **v46; // x22
  System_Delegate_o *v47; // x23
  WarBoardTaskBase_TaskCallback_o *v48; // x24
  System_Delegate_o *v49; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  WarBoardTaskBase_TaskCallback_c *v56; // x1
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v64; // x9
  __int64 size; // x10
  Il2CppClass **v66; // x0
  Il2CppObject *v67; // x19
  Il2CppObject *v68; // x20
  __int64 v69; // x0
  __int64 v70; // x1
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  __int64 v77; // x0
  System_Nullable_Vector3__o v78; // 0:x3.16
  System_Nullable_Vector3__o v79; // 0:x5.16

  if ( (byte_4B13B7F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointEffectComponent___, taskList, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v11, v12);
    sub_1BCA7E0(&WarBoardTaskBase_TaskCallback_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_WarBoardBreakPointComponent__ShowMasterRechargeEffect_b__27_0__, v15, v16);
    sub_1BCA7E0(&WarBoardBreakPointComponent_TypeInfo, v17, v18);
    sub_1BCA7E0(&WarBoardCommonEffectPerformance_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___, v21, v22);
    sub_1BCA7E0(&WarBoardTaskBase___TypeInfo, v23, v24);
    byte_4B13B7F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v27 = (WarBoardManager_o *)Instance;
  if ( !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo, v26);
  if ( !v27 )
    goto LABEL_30;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               v27,
                               WarBoardBreakPointComponent_TypeInfo->static_fields->MasterPointRechargeEffectName,
                               (const MethodInfo_2FF0B1C *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)CommonEffectAsset_object, 0LL, 0LL) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30);
    Instance = UnityEngine_Object__Instantiate_object__49903816(
                 CommonEffectAsset_object,
                 transform,
                 (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
    if ( Instance )
    {
      v32 = (UnityEngine_GameObject_o *)Instance;
      Instance = UnityEngine_GameObject__GetComponent_object_(
                   (UnityEngine_GameObject_o *)Instance,
                   (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointEffectComponent___);
      if ( Instance )
      {
        Instance[2].klass = (Il2CppClass *)this;
        sub_1BCA784((PartyOrganizationUtility_o *)&Instance[2], (int64_t)this, v33, v34, v35, v36, v37, v38);
        v42 = (WarBoardCommonEffectPerformance_o *)sub_1BCAA2C(WarBoardCommonEffectPerformance_TypeInfo, v39, v40, v41);
        *(_QWORD *)&v78.fields.hasValue = 0LL;
        *(_QWORD *)&v78.fields.value.fields.y = 0LL;
        *(_QWORD *)&v79.fields.hasValue = 0LL;
        *(_QWORD *)&v79.fields.value.fields.y = 0LL;
        v43 = (int64_t)v42;
        WarBoardCommonEffectPerformance___ctor(v42, 0LL, v32, v78, v79, (System_Nullable_Vector3__o)0, 0, 0, 1, 0LL);
        if ( v43 )
        {
          v46 = (System_Delegate_o **)(v43 + 32);
          v47 = *(System_Delegate_o **)(v43 + 32);
          v48 = (WarBoardTaskBase_TaskCallback_o *)sub_1BCAA2C(WarBoardTaskBase_TaskCallback_TypeInfo, v26, v44, v45);
          WarBoardTaskBase_TaskCallback___ctor(
            v48,
            (Il2CppObject *)this,
            Method_WarBoardBreakPointComponent__ShowMasterRechargeEffect_b__27_0__,
            0LL);
          v49 = System_Delegate__Combine(v47, (System_Delegate_o *)v48, 0LL);
          if ( v49 )
          {
            v56 = WarBoardTaskBase_TaskCallback_TypeInfo;
            if ( (WarBoardTaskBase_TaskCallback_c *)v49->klass != WarBoardTaskBase_TaskCallback_TypeInfo
              || (*v46 = v49, (WarBoardTaskBase_TaskCallback_c *)v49->klass != v56) )
            {
              sub_1BCACFC(v49);
              return;
            }
          }
          else
          {
            *v46 = 0LL;
          }
          sub_1BCA784((PartyOrganizationUtility_o *)(v43 + 32), (int64_t)v49, v50, v51, v52, v53, v54, v55);
          if ( taskList )
          {
            items = taskList->fields._items;
            v64 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
            ++taskList->fields._version;
            if ( items )
            {
              size = taskList->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)taskList,
                  (Il2CppObject *)v43,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
              }
              else
              {
                v66 = &items->obj.klass + size;
                taskList->fields._size = size + 1;
                v66[4] = (Il2CppClass *)v43;
                sub_1BCA784((PartyOrganizationUtility_o *)(v66 + 4), v43, v57, v58, v59, v60, v61, v62);
              }
              return;
            }
          }
          else
          {
            v67 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
            Instance = (Il2CppObject *)sub_1BCA888(WarBoardTaskBase___TypeInfo, 1LL);
            if ( Instance )
            {
              v68 = Instance;
              v69 = sub_1BCA91C(v43, Instance->klass->_1.element_class);
              if ( !v69 )
              {
                v77 = sub_1BCAA60();
                sub_1BCA908(v77, 0LL);
              }
              if ( !LODWORD(v68[1].monitor) )
                sub_1BCAA44(v69, v70);
              v68[2].klass = (Il2CppClass *)v43;
              sub_1BCA784((PartyOrganizationUtility_o *)&v68[2], v43, v71, v72, v73, v74, v75, v76);
              if ( v67 )
              {
                WarBoardManager__InsertTask((WarBoardManager_o *)v67, 0, (WarBoardTaskBase_array *)v68, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_30:
    sub_1BCAA3C(Instance, v26);
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