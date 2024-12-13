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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  int64_t v18; // x1
  struct WarBoardBreakPointComponent_StaticFields *static_fields; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x1
  struct WarBoardBreakPointComponent_StaticFields *v27; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x1
  struct WarBoardBreakPointComponent_StaticFields *v35; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t v42; // x1
  struct WarBoardBreakPointComponent_StaticFields *v43; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  int64_t v50; // x1
  struct WarBoardBreakPointComponent_StaticFields *v51; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  int64_t v58; // x1
  struct WarBoardBreakPointComponent_StaticFields *v59; // x0
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  int64_t v66; // x1
  struct WarBoardBreakPointComponent_StaticFields *v67; // x0
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  int64_t v74; // x1
  struct WarBoardBreakPointComponent_StaticFields *v75; // x0
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  struct WarBoardBreakPointComponent_StaticFields *v82; // x0
  int64_t v83; // x1
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7

  if ( (byte_4B34B18 & 1) == 0 )
  {
    sub_1BD3458(&WarBoardBreakPointComponent_TypeInfo, v1);
    sub_1BD3458(&StringLiteral_9053/*"MasterPoint_recharge_effect_1"*/, v8);
    sub_1BD3458(&StringLiteral_17648/*"break_on_boss"*/, v9);
    sub_1BD3458(&StringLiteral_21583/*"master_gauge_off_{0}"*/, v10);
    sub_1BD3458(&StringLiteral_17646/*"break_off_boss"*/, v11);
    sub_1BD3458(&StringLiteral_17647/*"break_on"*/, v12);
    sub_1BD3458(&StringLiteral_17645/*"break_off"*/, v13);
    sub_1BD3458(&StringLiteral_24897/*"wall_gauge_{0}"*/, v14);
    sub_1BD3458(&StringLiteral_21584/*"master_gauge_{0}"*/, v15);
    sub_1BD3458(&StringLiteral_3368/*"BreakPoint_effect_{0}"*/, v16);
    sub_1BD3458(&StringLiteral_9052/*"MasterPoint_effect_{0}"*/, v17);
    byte_4B34B18 = 1;
  }
  WarBoardBreakPointComponent_TypeInfo->static_fields->BreakPointOnImageName = (struct System_String_o *)StringLiteral_17647/*"break_on"*/;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)WarBoardBreakPointComponent_TypeInfo->static_fields,
    StringLiteral_17647/*"break_on"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v18 = StringLiteral_17645/*"break_off"*/;
  static_fields = WarBoardBreakPointComponent_TypeInfo->static_fields;
  static_fields->BreakPointOffImageName = (struct System_String_o *)StringLiteral_17645/*"break_off"*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)&static_fields->BreakPointOffImageName, v18, v20, v21, v22, v23, v24, v25);
  v26 = StringLiteral_17648/*"break_on_boss"*/;
  v27 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v27->EnemyBreakPointOnImageName = (struct System_String_o *)StringLiteral_17648/*"break_on_boss"*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v27->EnemyBreakPointOnImageName, v26, v28, v29, v30, v31, v32, v33);
  v34 = StringLiteral_17646/*"break_off_boss"*/;
  v35 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v35->EnemyBreakPointOffImageName = (struct System_String_o *)StringLiteral_17646/*"break_off_boss"*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v35->EnemyBreakPointOffImageName, v34, v36, v37, v38, v39, v40, v41);
  v42 = StringLiteral_3368/*"BreakPoint_effect_{0}"*/;
  v43 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v43->BreakPointEffectName = (struct System_String_o *)StringLiteral_3368/*"BreakPoint_effect_{0}"*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v43->BreakPointEffectName, v42, v44, v45, v46, v47, v48, v49);
  v50 = StringLiteral_21584/*"master_gauge_{0}"*/;
  v51 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v51->MasterPointOnImageName = (struct System_String_o *)StringLiteral_21584/*"master_gauge_{0}"*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v51->MasterPointOnImageName, v50, v52, v53, v54, v55, v56, v57);
  v58 = StringLiteral_21583/*"master_gauge_off_{0}"*/;
  v59 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v59->MasterPointOffImageName = (struct System_String_o *)StringLiteral_21583/*"master_gauge_off_{0}"*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v59->MasterPointOffImageName, v58, v60, v61, v62, v63, v64, v65);
  v66 = StringLiteral_9052/*"MasterPoint_effect_{0}"*/;
  v67 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v67->MasterPointEffectName = (struct System_String_o *)StringLiteral_9052/*"MasterPoint_effect_{0}"*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v67->MasterPointEffectName, v66, v68, v69, v70, v71, v72, v73);
  v74 = StringLiteral_9053/*"MasterPoint_recharge_effect_1"*/;
  v75 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v75->MasterPointRechargeEffectName = (struct System_String_o *)StringLiteral_9053/*"MasterPoint_recharge_effect_1"*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v75->MasterPointRechargeEffectName, v74, v76, v77, v78, v79, v80, v81);
  v82 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v83 = StringLiteral_24897/*"wall_gauge_{0}"*/;
  v82->wallPointImageName = (struct System_String_o *)StringLiteral_24897/*"wall_gauge_{0}"*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v82->wallPointImageName, v83, v84, v85, v86, v87, v88, v89);
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  WarBoardBreakPointComponent_c *v7; // x0
  struct WarBoardBreakPointComponent_StaticFields *static_fields; // x8
  System_Int32_c *v9; // x0
  int *v10; // x1
  System_String_o *MasterPointEffectName; // x19
  Il2CppObject *v12; // x0
  WarBoardBreakPointComponent_c *v14; // x0
  struct WarBoardBreakPointComponent_StaticFields *v15; // x8
  _BOOL4 isEnemyServant; // w9
  int v17; // w8
  int v18; // [xsp+8h] [xbp-28h] BYREF
  int v19; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B34B11 & 1) == 0 )
  {
    sub_1BD3458(&int_TypeInfo, method);
    sub_1BD3458(&WarBoardBreakPointComponent_TypeInfo, v6);
    byte_4B34B11 = 1;
  }
  if ( this->fields.isMaster || this->fields.isThirdForce )
  {
    v7 = WarBoardBreakPointComponent_TypeInfo;
    if ( !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
      v7 = WarBoardBreakPointComponent_TypeInfo;
    }
    static_fields = v7->static_fields;
    v9 = int_TypeInfo;
    v10 = &v18;
    MasterPointEffectName = static_fields->MasterPointEffectName;
    v18 = 1;
  }
  else
  {
    v14 = WarBoardBreakPointComponent_TypeInfo;
    if ( !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
      v14 = WarBoardBreakPointComponent_TypeInfo;
    }
    v15 = v14->static_fields;
    isEnemyServant = this->fields.isEnemyServant;
    v9 = int_TypeInfo;
    v10 = &v19;
    MasterPointEffectName = v15->BreakPointEffectName;
    if ( isEnemyServant )
      v17 = 2;
    else
      v17 = 1;
    v19 = v17;
  }
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(v9, v10, v2, v3, v4);
  return System_String__Format(MasterPointEffectName, v12, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall WarBoardBreakPointComponent__GetImageName(
        WarBoardBreakPointComponent_o *this,
        bool isActiveSprite,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  WarBoardBreakPointComponent_c *v8; // x0
  int32_t objectColorNumber; // w9
  System_String_o *MasterPointOffImageName; // x19
  WarBoardBreakPointComponent_c *v11; // x0
  Il2CppObject *v12; // x0
  WarBoardBreakPointComponent_c *v14; // x0
  _BOOL4 v15; // w19
  WarBoardBreakPointComponent_c *v16; // x0
  System_String_o **p_BreakPointOnImageName; // x8
  _BOOL4 isEnemyServant; // w19
  WarBoardBreakPointComponent_c *v19; // x0
  struct WarBoardBreakPointComponent_StaticFields *static_fields; // x8
  int32_t v21; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B34B10 & 1) == 0 )
  {
    sub_1BD3458(&int_TypeInfo, isActiveSprite);
    sub_1BD3458(&WarBoardBreakPointComponent_TypeInfo, v7);
    byte_4B34B10 = 1;
  }
  if ( !isActiveSprite )
  {
    if ( !this->fields.isThirdForce )
    {
      if ( this->fields.isMaster )
      {
        v14 = WarBoardBreakPointComponent_TypeInfo;
        if ( !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
          v14 = WarBoardBreakPointComponent_TypeInfo;
        }
        objectColorNumber = this->fields.objectColorNumber;
        MasterPointOffImageName = v14->static_fields->MasterPointOffImageName;
        goto LABEL_13;
      }
      isEnemyServant = this->fields.isEnemyServant;
      v19 = WarBoardBreakPointComponent_TypeInfo;
      if ( !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
        v19 = WarBoardBreakPointComponent_TypeInfo;
      }
      static_fields = v19->static_fields;
      if ( isEnemyServant )
        return static_fields->EnemyBreakPointOffImageName;
      else
        return static_fields->BreakPointOffImageName;
    }
LABEL_10:
    v11 = WarBoardBreakPointComponent_TypeInfo;
    if ( !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
      v11 = WarBoardBreakPointComponent_TypeInfo;
    }
    objectColorNumber = this->fields.objectColorNumber;
    MasterPointOffImageName = v11->static_fields->wallPointImageName;
    goto LABEL_13;
  }
  if ( this->fields.isThirdForce )
    goto LABEL_10;
  if ( this->fields.isMaster )
  {
    v8 = WarBoardBreakPointComponent_TypeInfo;
    if ( !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
      v8 = WarBoardBreakPointComponent_TypeInfo;
    }
    objectColorNumber = this->fields.objectColorNumber;
    MasterPointOffImageName = v8->static_fields->MasterPointOnImageName;
LABEL_13:
    v21 = objectColorNumber;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21, method, v3, v4);
    return System_String__Format(MasterPointOffImageName, v12, 0LL);
  }
  v15 = this->fields.isEnemyServant;
  v16 = WarBoardBreakPointComponent_TypeInfo;
  if ( !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
    v16 = WarBoardBreakPointComponent_TypeInfo;
  }
  p_BreakPointOnImageName = &v16->static_fields->BreakPointOnImageName;
  if ( v15 )
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
  if ( (byte_4B34B12 & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, *(_QWORD *)&depth);
    byte_4B34B12 = 1;
  }
  this->fields.isMaster = v11;
  this->fields.isEnemyServant = v12;
  this->fields.isThirdForce = v13;
  this->fields.objectColorNumber = number;
  activeObject = (UnityEngine_Object_o *)this->fields.activeObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1BD36B4(v16, v15);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  Il2CppObject *Instance; // x22
  const MethodInfo *v17; // x1
  char *BreakEffectName; // x0
  __int64 v19; // x1
  Il2CppObject *CommonEffectAsset_object; // x22
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_GameObject_o *v22; // x23
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  WarBoardCommonEffectPerformance_o *v29; // x0
  int64_t v30; // x22
  System_Delegate_o **v31; // x23
  System_Delegate_o *v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  WarBoardTaskBase_TaskCallback_c *v39; // x8
  WarBoardTaskBase_TaskCallback_c *v40; // x1
  System_Delegate_o *v41; // x23
  WarBoardTaskBase_TaskCallback_o *v42; // x24
  System_Delegate_o *v43; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  WarBoardTaskBase_TaskCallback_c *v50; // x1
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v58; // x9
  __int64 size; // x10
  Il2CppClass **v60; // x0
  Il2CppObject *v61; // x19
  char *v62; // x20
  __int64 v63; // x0
  __int64 v64; // x1
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  __int64 v71; // x0
  System_Nullable_Vector3__o v72; // 0:x3.16
  System_Nullable_Vector3__o v73; // 0:x5.16

  if ( (byte_4B34B13 & 1) == 0 )
  {
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointEffectComponent___, taskList);
    sub_1BD3458(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v7);
    sub_1BD3458(&Method_UnityEngine_Object_Instantiate_GameObject____77057344, v8);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v9);
    sub_1BD3458(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10);
    sub_1BD3458(&WarBoardTaskBase_TaskCallback_TypeInfo, v11);
    sub_1BD3458(&Method_WarBoardBreakPointComponent__OnBreak_b__26_0__, v12);
    sub_1BD3458(&WarBoardCommonEffectPerformance_TypeInfo, v13);
    sub_1BD3458(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___, v14);
    sub_1BD3458(&WarBoardTaskBase___TypeInfo, v15);
    byte_4B34B13 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  BreakEffectName = (char *)WarBoardBreakPointComponent__GetBreakEffectName(this, v17);
  if ( !Instance )
    goto LABEL_37;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)Instance,
                               (System_String_o *)BreakEffectName,
                               (const MethodInfo_3010154 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)CommonEffectAsset_object, 0LL, 0LL) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    BreakEffectName = (char *)UnityEngine_Object__Instantiate_object__50031952(
                                CommonEffectAsset_object,
                                transform,
                                (const MethodInfo_2FB6D50 *)Method_UnityEngine_Object_Instantiate_GameObject____77057344);
    if ( !BreakEffectName )
      goto LABEL_37;
    v22 = (UnityEngine_GameObject_o *)BreakEffectName;
    BreakEffectName = (char *)UnityEngine_GameObject__GetComponent_object_(
                                (UnityEngine_GameObject_o *)BreakEffectName,
                                (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointEffectComponent___);
    if ( !BreakEffectName )
      goto LABEL_37;
    *((_QWORD *)BreakEffectName + 4) = this;
    sub_1BD33FC((PartyOrganizationUtility_o *)(BreakEffectName + 32), (int64_t)this, v23, v24, v25, v26, v27, v28);
    v29 = (WarBoardCommonEffectPerformance_o *)sub_1BD36A4(WarBoardCommonEffectPerformance_TypeInfo);
    *(_QWORD *)&v72.fields.hasValue = 0LL;
    *(_QWORD *)&v72.fields.value.fields.y = 0LL;
    *(_QWORD *)&v73.fields.hasValue = 0LL;
    *(_QWORD *)&v73.fields.value.fields.y = 0LL;
    v30 = (int64_t)v29;
    WarBoardCommonEffectPerformance___ctor(v29, 0LL, v22, v72, v73, (System_Nullable_Vector3__o)0, 0, 0, 1, 0LL);
    if ( startCallback )
    {
      if ( !v30 )
        goto LABEL_37;
      v31 = (System_Delegate_o **)(v30 + 32);
      v32 = System_Delegate__Combine(*(System_Delegate_o **)(v30 + 32), (System_Delegate_o *)startCallback, 0LL);
      v39 = (WarBoardTaskBase_TaskCallback_c *)v32;
      if ( v32 )
      {
        v40 = WarBoardTaskBase_TaskCallback_TypeInfo;
        if ( (WarBoardTaskBase_TaskCallback_c *)v32->klass != WarBoardTaskBase_TaskCallback_TypeInfo )
          goto LABEL_25;
        *v31 = v32;
        if ( (WarBoardTaskBase_TaskCallback_c *)v32->klass != v40 )
          goto LABEL_25;
      }
      else
      {
        *v31 = 0LL;
      }
      sub_1BD33FC((PartyOrganizationUtility_o *)(v30 + 32), (int64_t)v32, v33, v34, v35, v36, v37, v38);
    }
    else if ( !v30 )
    {
      goto LABEL_37;
    }
    startCallback = (WarBoardTaskBase_TaskCallback_o *)(v30 + 40);
    v41 = *(System_Delegate_o **)(v30 + 40);
    v42 = (WarBoardTaskBase_TaskCallback_o *)sub_1BD36A4(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(
      v42,
      (Il2CppObject *)this,
      Method_WarBoardBreakPointComponent__OnBreak_b__26_0__,
      0LL);
    v43 = System_Delegate__Combine(v41, (System_Delegate_o *)v42, 0LL);
    v39 = (WarBoardTaskBase_TaskCallback_c *)v43;
    if ( !v43 )
    {
LABEL_26:
      startCallback->klass = v39;
      goto LABEL_27;
    }
    v50 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v43->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      startCallback->klass = (WarBoardTaskBase_TaskCallback_c *)v43;
      if ( (WarBoardTaskBase_TaskCallback_c *)v43->klass == v50 )
      {
LABEL_27:
        sub_1BD33FC((PartyOrganizationUtility_o *)startCallback, (int64_t)v39, v44, v45, v46, v47, v48, v49);
        if ( taskList )
        {
          items = taskList->fields._items;
          v58 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
          ++taskList->fields._version;
          if ( items )
          {
            size = taskList->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)taskList,
                (Il2CppObject *)v30,
                *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
            }
            else
            {
              v60 = &items->obj.klass + size;
              taskList->fields._size = size + 1;
              v60[4] = (Il2CppClass *)v30;
              sub_1BD33FC((PartyOrganizationUtility_o *)(v60 + 4), v30, v51, v52, v53, v54, v55, v56);
            }
            return;
          }
        }
        else
        {
          v61 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          BreakEffectName = (char *)sub_1BD3500(WarBoardTaskBase___TypeInfo, 1LL);
          if ( BreakEffectName )
          {
            v62 = BreakEffectName;
            v63 = sub_1BD3594(v30, *(_QWORD *)(*(_QWORD *)BreakEffectName + 64LL));
            if ( !v63 )
            {
              v71 = sub_1BD36D8();
              sub_1BD3580(v71, 0LL);
            }
            if ( !*((_DWORD *)v62 + 6) )
              sub_1BD36BC(v63, v64);
            *((_QWORD *)v62 + 4) = v30;
            sub_1BD33FC((PartyOrganizationUtility_o *)(v62 + 32), v30, v65, v66, v67, v68, v69, v70);
            if ( v61 )
            {
              WarBoardManager__InsertTask((WarBoardManager_o *)v61, 0, (WarBoardTaskBase_array *)v62, 0LL);
              return;
            }
          }
        }
LABEL_37:
        sub_1BD36B4(BreakEffectName, v19);
      }
    }
LABEL_25:
    sub_1BD3974(v39);
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

  if ( (byte_4B34B15 & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, active);
    byte_4B34B15 = 1;
  }
  if ( this->fields._isActive_k__BackingField != active )
  {
    activeObject = (UnityEngine_Object_o *)this->fields.activeObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1BD36B4(gameObject, v7);
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

  if ( (byte_4B34B17 & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, method);
    byte_4B34B17 = 1;
  }
  activeObject = (UnityEngine_Object_o *)this->fields.activeObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(activeObject, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Component_o *)this->fields.activeObject;
    if ( !v7 )
      goto LABEL_14;
    gameObject = UnityEngine_Component__get_gameObject(v7, 0LL);
    TweenAlpha__Begin(gameObject, duration, 1.0, 0LL);
  }
  deactiveObject = (UnityEngine_Object_o *)this->fields.deactiveObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(deactiveObject, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Component_o *)this->fields.deactiveObject;
    if ( v7 )
    {
      v10 = UnityEngine_Component__get_gameObject(v7, 0LL);
      TweenAlpha__Begin(v10, duration, 1.0, 0LL);
      return;
    }
LABEL_14:
    sub_1BD36B4(v7, v6);
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

  if ( (byte_4B34B16 & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, method);
    byte_4B34B16 = 1;
  }
  activeObject = (UnityEngine_Object_o *)this->fields.activeObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(activeObject, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Component_o *)this->fields.activeObject;
    if ( !v7 )
      goto LABEL_14;
    gameObject = UnityEngine_Component__get_gameObject(v7, 0LL);
    TweenAlpha__Begin(gameObject, duration, 0.0, 0LL);
  }
  deactiveObject = (UnityEngine_Object_o *)this->fields.deactiveObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(deactiveObject, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Component_o *)this->fields.deactiveObject;
    if ( v7 )
    {
      v10 = UnityEngine_Component__get_gameObject(v7, 0LL);
      TweenAlpha__Begin(v10, duration, 0.0, 0LL);
      return;
    }
LABEL_14:
    sub_1BD36B4(v7, v6);
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
    sub_1BD36B4(this, breakPoint);
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
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  WarBoardManager_o *v17; // x21
  Il2CppObject *CommonEffectAsset_object; // x21
  UnityEngine_Transform_o *transform; // x22
  UnityEngine_GameObject_o *v20; // x22
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  WarBoardCommonEffectPerformance_o *v27; // x0
  int64_t v28; // x21
  System_Delegate_o **v29; // x22
  System_Delegate_o *v30; // x23
  WarBoardTaskBase_TaskCallback_o *v31; // x24
  System_Delegate_o *v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  WarBoardTaskBase_TaskCallback_c *v39; // x1
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  Il2CppClass **v49; // x0
  Il2CppObject *v50; // x19
  Il2CppObject *v51; // x20
  __int64 v52; // x0
  __int64 v53; // x1
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  __int64 v60; // x0
  System_Nullable_Vector3__o v61; // 0:x3.16
  System_Nullable_Vector3__o v62; // 0:x5.16

  if ( (byte_4B34B14 & 1) == 0 )
  {
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointEffectComponent___, taskList);
    sub_1BD3458(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v5);
    sub_1BD3458(&Method_UnityEngine_Object_Instantiate_GameObject____77057344, v6);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v7);
    sub_1BD3458(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v8);
    sub_1BD3458(&WarBoardTaskBase_TaskCallback_TypeInfo, v9);
    sub_1BD3458(&Method_WarBoardBreakPointComponent__ShowMasterRechargeEffect_b__27_0__, v10);
    sub_1BD3458(&WarBoardBreakPointComponent_TypeInfo, v11);
    sub_1BD3458(&WarBoardCommonEffectPerformance_TypeInfo, v12);
    sub_1BD3458(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___, v13);
    sub_1BD3458(&WarBoardTaskBase___TypeInfo, v14);
    byte_4B34B14 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v17 = (WarBoardManager_o *)Instance;
  if ( !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
  if ( !v17 )
    goto LABEL_30;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               v17,
                               WarBoardBreakPointComponent_TypeInfo->static_fields->MasterPointRechargeEffectName,
                               (const MethodInfo_3010154 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)CommonEffectAsset_object, 0LL, 0LL) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = UnityEngine_Object__Instantiate_object__50031952(
                 CommonEffectAsset_object,
                 transform,
                 (const MethodInfo_2FB6D50 *)Method_UnityEngine_Object_Instantiate_GameObject____77057344);
    if ( Instance )
    {
      v20 = (UnityEngine_GameObject_o *)Instance;
      Instance = UnityEngine_GameObject__GetComponent_object_(
                   (UnityEngine_GameObject_o *)Instance,
                   (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointEffectComponent___);
      if ( Instance )
      {
        Instance[2].klass = (Il2CppClass *)this;
        sub_1BD33FC((PartyOrganizationUtility_o *)&Instance[2], (int64_t)this, v21, v22, v23, v24, v25, v26);
        v27 = (WarBoardCommonEffectPerformance_o *)sub_1BD36A4(WarBoardCommonEffectPerformance_TypeInfo);
        *(_QWORD *)&v61.fields.hasValue = 0LL;
        *(_QWORD *)&v61.fields.value.fields.y = 0LL;
        *(_QWORD *)&v62.fields.hasValue = 0LL;
        *(_QWORD *)&v62.fields.value.fields.y = 0LL;
        v28 = (int64_t)v27;
        WarBoardCommonEffectPerformance___ctor(v27, 0LL, v20, v61, v62, (System_Nullable_Vector3__o)0, 0, 0, 1, 0LL);
        if ( v28 )
        {
          v29 = (System_Delegate_o **)(v28 + 32);
          v30 = *(System_Delegate_o **)(v28 + 32);
          v31 = (WarBoardTaskBase_TaskCallback_o *)sub_1BD36A4(WarBoardTaskBase_TaskCallback_TypeInfo);
          WarBoardTaskBase_TaskCallback___ctor(
            v31,
            (Il2CppObject *)this,
            Method_WarBoardBreakPointComponent__ShowMasterRechargeEffect_b__27_0__,
            0LL);
          v32 = System_Delegate__Combine(v30, (System_Delegate_o *)v31, 0LL);
          if ( v32 )
          {
            v39 = WarBoardTaskBase_TaskCallback_TypeInfo;
            if ( (WarBoardTaskBase_TaskCallback_c *)v32->klass != WarBoardTaskBase_TaskCallback_TypeInfo
              || (*v29 = v32, (WarBoardTaskBase_TaskCallback_c *)v32->klass != v39) )
            {
              sub_1BD3974(v32);
              return;
            }
          }
          else
          {
            *v29 = 0LL;
          }
          sub_1BD33FC((PartyOrganizationUtility_o *)(v28 + 32), (int64_t)v32, v33, v34, v35, v36, v37, v38);
          if ( taskList )
          {
            items = taskList->fields._items;
            v47 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
            ++taskList->fields._version;
            if ( items )
            {
              size = taskList->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)taskList,
                  (Il2CppObject *)v28,
                  *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
              }
              else
              {
                v49 = &items->obj.klass + size;
                taskList->fields._size = size + 1;
                v49[4] = (Il2CppClass *)v28;
                sub_1BD33FC((PartyOrganizationUtility_o *)(v49 + 4), v28, v40, v41, v42, v43, v44, v45);
              }
              return;
            }
          }
          else
          {
            v50 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
            Instance = (Il2CppObject *)sub_1BD3500(WarBoardTaskBase___TypeInfo, 1LL);
            if ( Instance )
            {
              v51 = Instance;
              v52 = sub_1BD3594(v28, Instance->klass->_1.element_class);
              if ( !v52 )
              {
                v60 = sub_1BD36D8();
                sub_1BD3580(v60, 0LL);
              }
              if ( !LODWORD(v51[1].monitor) )
                sub_1BD36BC(v52, v53);
              v51[2].klass = (Il2CppClass *)v28;
              sub_1BD33FC((PartyOrganizationUtility_o *)&v51[2], v28, v54, v55, v56, v57, v58, v59);
              if ( v50 )
              {
                WarBoardManager__InsertTask((WarBoardManager_o *)v50, 0, (WarBoardTaskBase_array *)v51, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_30:
    sub_1BD36B4(Instance, v16);
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