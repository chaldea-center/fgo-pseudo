void __fastcall WarBoardBreakPointComponent___cctor(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7
  int64_t v7; // x1
  struct WarBoardBreakPointComponent_StaticFields *static_fields; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x1
  struct WarBoardBreakPointComponent_StaticFields *v16; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x1
  struct WarBoardBreakPointComponent_StaticFields *v24; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x1
  struct WarBoardBreakPointComponent_StaticFields *v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x1
  struct WarBoardBreakPointComponent_StaticFields *v40; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  int64_t v47; // x1
  struct WarBoardBreakPointComponent_StaticFields *v48; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  int64_t v55; // x1
  struct WarBoardBreakPointComponent_StaticFields *v56; // x0
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  int64_t v63; // x1
  struct WarBoardBreakPointComponent_StaticFields *v64; // x0
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  struct WarBoardBreakPointComponent_StaticFields *v71; // x0
  int64_t v72; // x1
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7

  if ( (byte_4BD9E7D & 1) == 0 )
  {
    sub_1C21E38(&WarBoardBreakPointComponent_TypeInfo);
    sub_1C21E38(&StringLiteral_9100/*"MasterPoint_recharge_effect_1"*/);
    sub_1C21E38(&StringLiteral_17738/*"break_on_boss"*/);
    sub_1C21E38(&StringLiteral_21704/*"master_gauge_off_{0}"*/);
    sub_1C21E38(&StringLiteral_17736/*"break_off_boss"*/);
    sub_1C21E38(&StringLiteral_17737/*"break_on"*/);
    sub_1C21E38(&StringLiteral_17735/*"break_off"*/);
    sub_1C21E38(&StringLiteral_25049/*"wall_gauge_{0}"*/);
    sub_1C21E38(&StringLiteral_21705/*"master_gauge_{0}"*/);
    sub_1C21E38(&StringLiteral_3384/*"BreakPoint_effect_{0}"*/);
    sub_1C21E38(&StringLiteral_9099/*"MasterPoint_effect_{0}"*/);
    byte_4BD9E7D = 1;
  }
  WarBoardBreakPointComponent_TypeInfo->static_fields->BreakPointOnImageName = (struct System_String_o *)StringLiteral_17737/*"break_on"*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)WarBoardBreakPointComponent_TypeInfo->static_fields,
    StringLiteral_17737/*"break_on"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_17735/*"break_off"*/;
  static_fields = WarBoardBreakPointComponent_TypeInfo->static_fields;
  static_fields->BreakPointOffImageName = (struct System_String_o *)StringLiteral_17735/*"break_off"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->BreakPointOffImageName, v7, v9, v10, v11, v12, v13, v14);
  v15 = StringLiteral_17738/*"break_on_boss"*/;
  v16 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v16->EnemyBreakPointOnImageName = (struct System_String_o *)StringLiteral_17738/*"break_on_boss"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v16->EnemyBreakPointOnImageName, v15, v17, v18, v19, v20, v21, v22);
  v23 = StringLiteral_17736/*"break_off_boss"*/;
  v24 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v24->EnemyBreakPointOffImageName = (struct System_String_o *)StringLiteral_17736/*"break_off_boss"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v24->EnemyBreakPointOffImageName, v23, v25, v26, v27, v28, v29, v30);
  v31 = StringLiteral_3384/*"BreakPoint_effect_{0}"*/;
  v32 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v32->BreakPointEffectName = (struct System_String_o *)StringLiteral_3384/*"BreakPoint_effect_{0}"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v32->BreakPointEffectName, v31, v33, v34, v35, v36, v37, v38);
  v39 = StringLiteral_21705/*"master_gauge_{0}"*/;
  v40 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v40->MasterPointOnImageName = (struct System_String_o *)StringLiteral_21705/*"master_gauge_{0}"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v40->MasterPointOnImageName, v39, v41, v42, v43, v44, v45, v46);
  v47 = StringLiteral_21704/*"master_gauge_off_{0}"*/;
  v48 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v48->MasterPointOffImageName = (struct System_String_o *)StringLiteral_21704/*"master_gauge_off_{0}"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v48->MasterPointOffImageName, v47, v49, v50, v51, v52, v53, v54);
  v55 = StringLiteral_9099/*"MasterPoint_effect_{0}"*/;
  v56 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v56->MasterPointEffectName = (struct System_String_o *)StringLiteral_9099/*"MasterPoint_effect_{0}"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v56->MasterPointEffectName, v55, v57, v58, v59, v60, v61, v62);
  v63 = StringLiteral_9100/*"MasterPoint_recharge_effect_1"*/;
  v64 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v64->MasterPointRechargeEffectName = (struct System_String_o *)StringLiteral_9100/*"MasterPoint_recharge_effect_1"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v64->MasterPointRechargeEffectName, v63, v65, v66, v67, v68, v69, v70);
  v71 = WarBoardBreakPointComponent_TypeInfo->static_fields;
  v72 = StringLiteral_25049/*"wall_gauge_{0}"*/;
  v71->wallPointImageName = (struct System_String_o *)StringLiteral_25049/*"wall_gauge_{0}"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v71->wallPointImageName, v72, v73, v74, v75, v76, v77, v78);
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

  if ( (byte_4BD9E76 & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&WarBoardBreakPointComponent_TypeInfo);
    byte_4BD9E76 = 1;
  }
  if ( this->fields.isMaster || this->fields.isThirdForce )
  {
    v6 = WarBoardBreakPointComponent_TypeInfo;
    if ( !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
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
      j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
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
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(v8, v9, v2, v3, v4);
  return System_String__Format(MasterPointEffectName, v11, 0LL);
}


System_String_o *__fastcall WarBoardBreakPointComponent__GetImageName(
        WarBoardBreakPointComponent_o *this,
        bool isActiveSprite,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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

  if ( (byte_4BD9E75 & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&WarBoardBreakPointComponent_TypeInfo);
    byte_4BD9E75 = 1;
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
          j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
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
        j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
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
      j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
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
      j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
      v7 = WarBoardBreakPointComponent_TypeInfo;
    }
    objectColorNumber = this->fields.objectColorNumber;
    MasterPointOffImageName = v7->static_fields->MasterPointOnImageName;
LABEL_13:
    v20 = objectColorNumber;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, method, v3, v4);
    return System_String__Format(MasterPointOffImageName, v11, 0LL);
  }
  v14 = this->fields.isEnemyServant;
  v15 = WarBoardBreakPointComponent_TypeInfo;
  if ( !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
    v15 = WarBoardBreakPointComponent_TypeInfo;
  }
  p_BreakPointOnImageName = &v15->static_fields->BreakPointOnImageName;
  if ( v14 )
    return p_BreakPointOnImageName[2];
  else
    return *p_BreakPointOnImageName;
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
  if ( (byte_4BD9E77 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD9E77 = 1;
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
    sub_1C22094(v16, v15);
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
  Il2CppObject *Instance; // x22
  const MethodInfo *v8; // x1
  char *BreakEffectName; // x0
  __int64 v10; // x1
  Il2CppObject *CommonEffectAsset_object; // x22
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_GameObject_o *v13; // x23
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  WarBoardCommonEffectPerformance_o *v20; // x0
  int64_t v21; // x22
  System_Delegate_o **v22; // x23
  System_Delegate_o *v23; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  WarBoardTaskBase_TaskCallback_c *v30; // x8
  WarBoardTaskBase_TaskCallback_c *v31; // x1
  System_Delegate_o *v32; // x23
  WarBoardTaskBase_TaskCallback_o *v33; // x24
  System_Delegate_o *v34; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  WarBoardTaskBase_TaskCallback_c *v41; // x1
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  Il2CppClass **v51; // x0
  Il2CppObject *v52; // x19
  char *v53; // x20
  __int64 v54; // x0
  __int64 v55; // x1
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  __int64 v62; // x0
  System_Nullable_Vector3__o v63; // 0:x3.16
  System_Nullable_Vector3__o v64; // 0:x5.16

  if ( (byte_4BD9E78 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointEffectComponent___);
    sub_1C21E38(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject____77715568);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C21E38(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C21E38(&Method_WarBoardBreakPointComponent__OnBreak_b__26_0__);
    sub_1C21E38(&WarBoardCommonEffectPerformance_TypeInfo);
    sub_1C21E38(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
    sub_1C21E38(&WarBoardTaskBase___TypeInfo);
    byte_4BD9E78 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  BreakEffectName = (char *)WarBoardBreakPointComponent__GetBreakEffectName(this, v8);
  if ( !Instance )
    goto LABEL_37;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)Instance,
                               (System_String_o *)BreakEffectName,
                               (const MethodInfo_308EDEC *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)CommonEffectAsset_object, 0LL, 0LL) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    BreakEffectName = (char *)UnityEngine_Object__Instantiate_object__50551272(
                                CommonEffectAsset_object,
                                transform,
                                (const MethodInfo_30359E8 *)Method_UnityEngine_Object_Instantiate_GameObject____77715568);
    if ( !BreakEffectName )
      goto LABEL_37;
    v13 = (UnityEngine_GameObject_o *)BreakEffectName;
    BreakEffectName = (char *)UnityEngine_GameObject__GetComponent_object_(
                                (UnityEngine_GameObject_o *)BreakEffectName,
                                (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointEffectComponent___);
    if ( !BreakEffectName )
      goto LABEL_37;
    *((_QWORD *)BreakEffectName + 4) = this;
    sub_1C21DDC((PartyOrganizationUtility_o *)(BreakEffectName + 32), (int64_t)this, v14, v15, v16, v17, v18, v19);
    v20 = (WarBoardCommonEffectPerformance_o *)sub_1C22084(WarBoardCommonEffectPerformance_TypeInfo);
    *(_QWORD *)&v63.fields.hasValue = 0LL;
    *(_QWORD *)&v63.fields.value.fields.y = 0LL;
    *(_QWORD *)&v64.fields.hasValue = 0LL;
    *(_QWORD *)&v64.fields.value.fields.y = 0LL;
    v21 = (int64_t)v20;
    WarBoardCommonEffectPerformance___ctor(v20, 0LL, v13, v63, v64, (System_Nullable_Vector3__o)0, 0, 0, 1, 0LL);
    if ( startCallback )
    {
      if ( !v21 )
        goto LABEL_37;
      v22 = (System_Delegate_o **)(v21 + 32);
      v23 = System_Delegate__Combine(*(System_Delegate_o **)(v21 + 32), (System_Delegate_o *)startCallback, 0LL);
      v30 = (WarBoardTaskBase_TaskCallback_c *)v23;
      if ( v23 )
      {
        v31 = WarBoardTaskBase_TaskCallback_TypeInfo;
        if ( (WarBoardTaskBase_TaskCallback_c *)v23->klass != WarBoardTaskBase_TaskCallback_TypeInfo )
          goto LABEL_25;
        *v22 = v23;
        if ( (WarBoardTaskBase_TaskCallback_c *)v23->klass != v31 )
          goto LABEL_25;
      }
      else
      {
        *v22 = 0LL;
      }
      sub_1C21DDC((PartyOrganizationUtility_o *)(v21 + 32), (int64_t)v23, v24, v25, v26, v27, v28, v29);
    }
    else if ( !v21 )
    {
      goto LABEL_37;
    }
    startCallback = (WarBoardTaskBase_TaskCallback_o *)(v21 + 40);
    v32 = *(System_Delegate_o **)(v21 + 40);
    v33 = (WarBoardTaskBase_TaskCallback_o *)sub_1C22084(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(
      v33,
      (Il2CppObject *)this,
      Method_WarBoardBreakPointComponent__OnBreak_b__26_0__,
      0LL);
    v34 = System_Delegate__Combine(v32, (System_Delegate_o *)v33, 0LL);
    v30 = (WarBoardTaskBase_TaskCallback_c *)v34;
    if ( !v34 )
    {
LABEL_26:
      startCallback->klass = v30;
      goto LABEL_27;
    }
    v41 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v34->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      startCallback->klass = (WarBoardTaskBase_TaskCallback_c *)v34;
      if ( (WarBoardTaskBase_TaskCallback_c *)v34->klass == v41 )
      {
LABEL_27:
        sub_1C21DDC((PartyOrganizationUtility_o *)startCallback, (int64_t)v30, v35, v36, v37, v38, v39, v40);
        if ( taskList )
        {
          items = taskList->fields._items;
          v49 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
          ++taskList->fields._version;
          if ( items )
          {
            size = taskList->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)taskList,
                (Il2CppObject *)v21,
                *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
            }
            else
            {
              v51 = &items->obj.klass + size;
              taskList->fields._size = size + 1;
              v51[4] = (Il2CppClass *)v21;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v51 + 4), v21, v42, v43, v44, v45, v46, v47);
            }
            return;
          }
        }
        else
        {
          v52 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          BreakEffectName = (char *)sub_1C21EE0(WarBoardTaskBase___TypeInfo, 1LL);
          if ( BreakEffectName )
          {
            v53 = BreakEffectName;
            v54 = sub_1C21F74(v21, *(_QWORD *)(*(_QWORD *)BreakEffectName + 64LL));
            if ( !v54 )
            {
              v62 = sub_1C220B8();
              sub_1C21F60(v62, 0LL);
            }
            if ( !*((_DWORD *)v53 + 6) )
              sub_1C2209C(v54, v55);
            *((_QWORD *)v53 + 4) = v21;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v53 + 32), v21, v56, v57, v58, v59, v60, v61);
            if ( v52 )
            {
              WarBoardManager__InsertTask((WarBoardManager_o *)v52, 0, (WarBoardTaskBase_array *)v53, 0LL);
              return;
            }
          }
        }
LABEL_37:
        sub_1C22094(BreakEffectName, v10);
      }
    }
LABEL_25:
    sub_1C22354(v30);
    goto LABEL_26;
  }
}


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

  if ( (byte_4BD9E7A & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD9E7A = 1;
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
    sub_1C22094(gameObject, v7);
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

  if ( (byte_4BD9E7C & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD9E7C = 1;
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
    sub_1C22094(v7, v6);
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

  if ( (byte_4BD9E7B & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD9E7B = 1;
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
    sub_1C22094(v7, v6);
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
    sub_1C22094(this, breakPoint);
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
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  WarBoardManager_o *v7; // x21
  Il2CppObject *CommonEffectAsset_object; // x21
  UnityEngine_Transform_o *transform; // x22
  UnityEngine_GameObject_o *v10; // x22
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  WarBoardCommonEffectPerformance_o *v17; // x0
  int64_t v18; // x21
  System_Delegate_o **v19; // x22
  System_Delegate_o *v20; // x23
  WarBoardTaskBase_TaskCallback_o *v21; // x24
  System_Delegate_o *v22; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  WarBoardTaskBase_TaskCallback_c *v29; // x1
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  Il2CppObject *v40; // x19
  Il2CppObject *v41; // x20
  __int64 v42; // x0
  __int64 v43; // x1
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  __int64 v50; // x0
  System_Nullable_Vector3__o v51; // 0:x3.16
  System_Nullable_Vector3__o v52; // 0:x5.16

  if ( (byte_4BD9E79 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointEffectComponent___);
    sub_1C21E38(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject____77715568);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C21E38(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C21E38(&Method_WarBoardBreakPointComponent__ShowMasterRechargeEffect_b__27_0__);
    sub_1C21E38(&WarBoardBreakPointComponent_TypeInfo);
    sub_1C21E38(&WarBoardCommonEffectPerformance_TypeInfo);
    sub_1C21E38(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
    sub_1C21E38(&WarBoardTaskBase___TypeInfo);
    byte_4BD9E79 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v7 = (WarBoardManager_o *)Instance;
  if ( !WarBoardBreakPointComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardBreakPointComponent_TypeInfo);
  if ( !v7 )
    goto LABEL_30;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               v7,
                               WarBoardBreakPointComponent_TypeInfo->static_fields->MasterPointRechargeEffectName,
                               (const MethodInfo_308EDEC *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)CommonEffectAsset_object, 0LL, 0LL) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = UnityEngine_Object__Instantiate_object__50551272(
                 CommonEffectAsset_object,
                 transform,
                 (const MethodInfo_30359E8 *)Method_UnityEngine_Object_Instantiate_GameObject____77715568);
    if ( Instance )
    {
      v10 = (UnityEngine_GameObject_o *)Instance;
      Instance = UnityEngine_GameObject__GetComponent_object_(
                   (UnityEngine_GameObject_o *)Instance,
                   (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointEffectComponent___);
      if ( Instance )
      {
        Instance[2].klass = (Il2CppClass *)this;
        sub_1C21DDC((PartyOrganizationUtility_o *)&Instance[2], (int64_t)this, v11, v12, v13, v14, v15, v16);
        v17 = (WarBoardCommonEffectPerformance_o *)sub_1C22084(WarBoardCommonEffectPerformance_TypeInfo);
        *(_QWORD *)&v51.fields.hasValue = 0LL;
        *(_QWORD *)&v51.fields.value.fields.y = 0LL;
        *(_QWORD *)&v52.fields.hasValue = 0LL;
        *(_QWORD *)&v52.fields.value.fields.y = 0LL;
        v18 = (int64_t)v17;
        WarBoardCommonEffectPerformance___ctor(v17, 0LL, v10, v51, v52, (System_Nullable_Vector3__o)0, 0, 0, 1, 0LL);
        if ( v18 )
        {
          v19 = (System_Delegate_o **)(v18 + 32);
          v20 = *(System_Delegate_o **)(v18 + 32);
          v21 = (WarBoardTaskBase_TaskCallback_o *)sub_1C22084(WarBoardTaskBase_TaskCallback_TypeInfo);
          WarBoardTaskBase_TaskCallback___ctor(
            v21,
            (Il2CppObject *)this,
            Method_WarBoardBreakPointComponent__ShowMasterRechargeEffect_b__27_0__,
            0LL);
          v22 = System_Delegate__Combine(v20, (System_Delegate_o *)v21, 0LL);
          if ( v22 )
          {
            v29 = WarBoardTaskBase_TaskCallback_TypeInfo;
            if ( (WarBoardTaskBase_TaskCallback_c *)v22->klass != WarBoardTaskBase_TaskCallback_TypeInfo
              || (*v19 = v22, (WarBoardTaskBase_TaskCallback_c *)v22->klass != v29) )
            {
              sub_1C22354(v22);
              return;
            }
          }
          else
          {
            *v19 = 0LL;
          }
          sub_1C21DDC((PartyOrganizationUtility_o *)(v18 + 32), (int64_t)v22, v23, v24, v25, v26, v27, v28);
          if ( taskList )
          {
            items = taskList->fields._items;
            v37 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
            ++taskList->fields._version;
            if ( items )
            {
              size = taskList->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)taskList,
                  (Il2CppObject *)v18,
                  *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
              }
              else
              {
                v39 = &items->obj.klass + size;
                taskList->fields._size = size + 1;
                v39[4] = (Il2CppClass *)v18;
                sub_1C21DDC((PartyOrganizationUtility_o *)(v39 + 4), v18, v30, v31, v32, v33, v34, v35);
              }
              return;
            }
          }
          else
          {
            v40 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
            Instance = (Il2CppObject *)sub_1C21EE0(WarBoardTaskBase___TypeInfo, 1LL);
            if ( Instance )
            {
              v41 = Instance;
              v42 = sub_1C21F74(v18, Instance->klass->_1.element_class);
              if ( !v42 )
              {
                v50 = sub_1C220B8();
                sub_1C21F60(v50, 0LL);
              }
              if ( !LODWORD(v41[1].monitor) )
                sub_1C2209C(v42, v43);
              v41[2].klass = (Il2CppClass *)v18;
              sub_1C21DDC((PartyOrganizationUtility_o *)&v41[2], v18, v44, v45, v46, v47, v48, v49);
              if ( v40 )
              {
                WarBoardManager__InsertTask((WarBoardManager_o *)v40, 0, (WarBoardTaskBase_array *)v41, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_30:
    sub_1C22094(Instance, v6);
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