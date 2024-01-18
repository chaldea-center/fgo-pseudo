void __fastcall BattleResultBuddyPointInfoComponent___ctor(
        BattleResultBuddyPointInfoComponent_o *this,
        const MethodInfo *method)
{
  this->fields.pointLabelMaxWidth = 150;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleResultBuddyPointInfoComponent__FinishUpdateBuddyPoint(
        BattleResultBuddyPointInfoComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  System_String_o *v6; // x0
  __int64 v7; // x1
  struct BattleBuddyPointInfo_o *resultBuddyPointInfo; // x8
  int aftBuddyPoint; // w8
  int32_t befBuddyPoint; // w9
  UILabel_o *buddyPointLabel; // x20
  int v12; // w23
  Il2CppObject *v13; // x21
  Il2CppObject *v14; // x0
  const MethodInfo *v15; // x2
  struct BattleBuddyPointInfo_o *v16; // x8
  const MethodInfo *v17; // x1
  int v18; // [xsp+8h] [xbp-28h] BYREF
  int v19; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4187E69 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, method);
    sub_B2C35C(&StringLiteral_23669/*"{0}（＋{1}）"*/, v3);
    sub_B2C35C(&iTween_TypeInfo, v4);
    byte_4187E69 = 1;
  }
  if ( this->fields.resultBuddyPointInfo )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__Stop_42850528(gameObject, 0LL);
    resultBuddyPointInfo = this->fields.resultBuddyPointInfo;
    if ( !resultBuddyPointInfo )
      goto LABEL_16;
    befBuddyPoint = resultBuddyPointInfo->fields.befBuddyPoint;
    aftBuddyPoint = resultBuddyPointInfo->fields.aftBuddyPoint;
    buddyPointLabel = this->fields.buddyPointLabel;
    v12 = aftBuddyPoint - befBuddyPoint;
    if ( aftBuddyPoint >= 9999999 )
      aftBuddyPoint = 9999999;
    v19 = aftBuddyPoint;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
    v18 = v12;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
    v6 = System_String__Format_44301068((System_String_o *)StringLiteral_23669/*"{0}（＋{1}）"*/, v13, v14, 0LL);
    if ( !buddyPointLabel
      || (UILabel__set_text(buddyPointLabel, v6, 0LL), (v6 = (System_String_o *)this->fields.buddyPointLabel) == 0LL)
      || (UILabel__SetCondensedScale((UILabel_o *)v6, this->fields.pointLabelMaxWidth, 0LL),
          (v16 = this->fields.resultBuddyPointInfo) == 0LL) )
    {
LABEL_16:
      sub_B2C434(v6, v7);
    }
    if ( BattleResultBuddyPointInfoComponent__IsRankUpBuddyRank(this, v16->fields.aftBuddyPoint, v15) )
      BattleResultBuddyPointInfoComponent__PlayBuddyRankUp(this, v17);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleResultBuddyPointInfoComponent__IsRankUpBuddyRank(
        BattleResultBuddyPointInfoComponent_o *this,
        int32_t buddyPoint,
        const MethodInfo *method)
{
  __int64 v5; // x1
  EventServantPointRankMaster_o *rankMaster; // x0
  struct EventServantPointRankMaster_o **p_rankMaster; // x21
  System_Int32_array **Master_WarQuestSelectionMaster; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct BattleBuddyPointInfo_o *resultBuddyPointInfo; // x8
  EventServantPointRankEntity_o *EnableEntity; // x0
  int32_t svtPointRank; // w8

  if ( (byte_4187E68 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_EventServantPointRankMaster___, *(_QWORD *)&buddyPoint);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    byte_4187E68 = 1;
  }
  p_rankMaster = &this->fields.rankMaster;
  rankMaster = this->fields.rankMaster;
  if ( !rankMaster )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    *p_rankMaster = (struct EventServantPointRankMaster_o *)Master_WarQuestSelectionMaster;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.rankMaster,
      Master_WarQuestSelectionMaster,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    rankMaster = *p_rankMaster;
  }
  resultBuddyPointInfo = this->fields.resultBuddyPointInfo;
  if ( !resultBuddyPointInfo || !rankMaster )
    sub_B2C434(rankMaster, *(_QWORD *)&buddyPoint);
  EnableEntity = EventServantPointRankMaster__GetEnableEntity(
                   rankMaster,
                   this->fields.buddyPointEventId,
                   buddyPoint,
                   resultBuddyPointInfo->fields.svtId,
                   0LL);
  if ( EnableEntity )
  {
    svtPointRank = EnableEntity->fields.svtPointRank;
    if ( this->fields.beforeBuddyRank >= svtPointRank )
    {
      LOBYTE(EnableEntity) = 0;
    }
    else
    {
      LOBYTE(EnableEntity) = 1;
      this->fields.beforeBuddyRank = svtPointRank;
    }
  }
  return (char)EnableEntity;
}


void __fastcall BattleResultBuddyPointInfoComponent__PlayBuddyRankUp(
        BattleResultBuddyPointInfoComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_GameObject_o *buddyPointRankUpObject; // x0
  Il2CppObject *v14; // x0
  System_String_o *v15; // x20
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_GameObject_o *v17; // x20
  UnityEngine_Transform_o *v18; // x21
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  UnityEngine_Object_o *v20; // x20
  Il2CppObject *v21; // x0
  System_String_o *v22; // x0
  UILabel_o *buddyPointRankLabel; // x20
  System_String_o *v24; // x21
  int32_t beforeBuddyRank; // [xsp+8h] [xbp-38h] BYREF
  int32_t buddyPointEventId; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4187E6A & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, method);
    sub_B2C35C(&AssetManager_TypeInfo, v3);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_Animation___, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v5);
    sub_B2C35C(&int_TypeInfo, v6);
    sub_B2C35C(&LocalizationManager_TypeInfo, v7);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_5815/*"Effect/BattleResult/{0}"*/, v10);
    sub_B2C35C(&StringLiteral_16737/*"bit_buddy_rankup"*/, v11);
    sub_B2C35C(&StringLiteral_2374/*"BATTLE_BUDDY_POINT_RANK_{0}"*/, v12);
    byte_4187E6A = 1;
  }
  buddyPointRankUpObject = this->fields.buddyPointRankUpObject;
  if ( !buddyPointRankUpObject )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(buddyPointRankUpObject, 1, 0LL);
  buddyPointEventId = this->fields.buddyPointEventId;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &buddyPointEventId);
  v15 = System_String__Format((System_String_o *)StringLiteral_5815/*"Effect/BattleResult/{0}"*/, v14, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)AssetManager__getAssetStorage(v15, 0LL);
  if ( !buddyPointRankUpObject )
    goto LABEL_29;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               (AssetData_o *)buddyPointRankUpObject,
                                                                               (System_String_o *)StringLiteral_16737/*"bit_buddy_rankup"*/,
                                                                               (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                         Object_WarBoardWaitTimeSetting,
                                                         (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !buddyPointRankUpObject )
    goto LABEL_29;
  v17 = buddyPointRankUpObject;
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                         buddyPointRankUpObject,
                                                         0LL);
  if ( !this->fields.buddyPointRankUpObject )
    goto LABEL_29;
  v18 = (UnityEngine_Transform_o *)buddyPointRankUpObject;
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                         this->fields.buddyPointRankUpObject,
                                                         0LL);
  if ( !v18 )
    goto LABEL_29;
  UnityEngine_Transform__SetParent(v18, (UnityEngine_Transform_o *)buddyPointRankUpObject, 0LL);
  zero = UnityEngine_Vector3__get_zero(0LL);
  UnityEngine_Transform__set_localPosition(v18, zero, 0LL);
  one = UnityEngine_Vector3__get_one(0LL);
  UnityEngine_Transform__set_localScale(v18, one, 0LL);
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v17,
                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  v20 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  v17,
                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                         Component_srcLineSprite,
                                                         0LL,
                                                         0LL);
  if ( ((unsigned __int8)buddyPointRankUpObject & 1) != 0 )
  {
    if ( !Component_srcLineSprite )
      goto LABEL_29;
    UnityEngine_Animation__Play_50201580(
      (UnityEngine_Animation_o *)Component_srcLineSprite,
      (System_String_o *)StringLiteral_16737/*"bit_buddy_rankup"*/,
      0LL);
  }
  else
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v20, 0LL, 0LL);
    if ( ((unsigned __int8)buddyPointRankUpObject & 1) != 0 )
    {
      if ( !v20 )
        goto LABEL_29;
      SimpleAnimation__Play_16486620((SimpleAnimation_o *)v20, (System_String_o *)StringLiteral_16737/*"bit_buddy_rankup"*/, 0LL);
    }
  }
  beforeBuddyRank = this->fields.beforeBuddyRank;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &beforeBuddyRank);
  v22 = System_String__Format((System_String_o *)StringLiteral_2374/*"BATTLE_BUDDY_POINT_RANK_{0}"*/, v21, 0LL);
  buddyPointRankLabel = this->fields.buddyPointRankLabel;
  v24 = v22;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v24, 0LL);
  if ( !buddyPointRankLabel
    || (UILabel__set_text(buddyPointRankLabel, (System_String_o *)buddyPointRankUpObject, 0LL),
        (buddyPointRankUpObject = (UnityEngine_GameObject_o *)this->fields.buddyPointRankLabel) == 0LL) )
  {
LABEL_29:
    sub_B2C434(buddyPointRankUpObject, method);
  }
  UILabel__SetCondensedScale((UILabel_o *)buddyPointRankUpObject, this->fields.pointLabelMaxWidth, 0LL);
}


void __fastcall BattleResultBuddyPointInfoComponent__SetBuddyPointInfo(
        BattleResultBuddyPointInfoComponent_o *this,
        BattleBuddyPointInfo_o *buddyPointInfo,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_GameObject_o *buddyPointRankUpObject; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct EventServantPointRankMaster_o *Master_WarQuestSelectionMaster; // x0
  struct EventServantPointRankMaster_o **p_rankMaster; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct BattleBuddyPointInfo_o *resultBuddyPointInfo; // x8
  EventServantPointRankEntity_o *EnableEntity; // x0
  int32_t svtPointRank; // w8

  if ( (byte_4187E65 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_EventServantPointRankMaster___, buddyPointInfo);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    byte_4187E65 = 1;
  }
  buddyPointRankUpObject = this->fields.buddyPointRankUpObject;
  if ( !buddyPointRankUpObject )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(buddyPointRankUpObject, 0, 0LL);
  this->fields.resultBuddyPointInfo = buddyPointInfo;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.resultBuddyPointInfo,
    (System_Int32_array **)buddyPointInfo,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  if ( !this->fields.resultBuddyPointInfo )
    return;
  this->fields.buddyPointEventId = eventId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (struct EventServantPointRankMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  this->fields.rankMaster = Master_WarQuestSelectionMaster;
  p_rankMaster = &this->fields.rankMaster;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.rankMaster,
    (System_Int32_array **)Master_WarQuestSelectionMaster,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  resultBuddyPointInfo = this->fields.resultBuddyPointInfo;
  if ( !resultBuddyPointInfo || (buddyPointRankUpObject = (UnityEngine_GameObject_o *)*p_rankMaster) == 0LL )
LABEL_15:
    sub_B2C434(buddyPointRankUpObject, buddyPointInfo);
  EnableEntity = EventServantPointRankMaster__GetEnableEntity(
                   (EventServantPointRankMaster_o *)buddyPointRankUpObject,
                   this->fields.buddyPointEventId,
                   resultBuddyPointInfo->fields.befBuddyPoint,
                   resultBuddyPointInfo->fields.svtId,
                   0LL);
  if ( EnableEntity )
    svtPointRank = EnableEntity->fields.svtPointRank;
  else
    svtPointRank = 0;
  this->fields.beforeBuddyRank = svtPointRank;
}


void __fastcall BattleResultBuddyPointInfoComponent__StartUpdateBuddyPoint(
        BattleResultBuddyPointInfoComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_GameObject_o *gameObject; // x19
  __int64 v13; // x0
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Object_array *v21; // x20
  __int64 v22; // x0
  System_Int32_array **v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Int32_array **v30; // x21
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x21
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array **v51; // x1
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int32_array **v58; // x1
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Int32_array **v65; // x1
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_Int32_array **v72; // x1
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  System_Int32_array **v79; // x1
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  System_Int32_array **v86; // x21
  System_Collections_Hashtable_o *v87; // x0
  __int64 v88; // x0
  __int64 v89; // x0
  int v90; // [xsp+4h] [xbp-2Ch] BYREF
  int v91; // [xsp+8h] [xbp-28h] BYREF
  int v92; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4187E66 & 1) == 0 )
  {
    sub_B2C35C(&object___TypeInfo, method);
    sub_B2C35C(&float_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_18914/*"from"*/, v4);
    sub_B2C35C(&StringLiteral_22677/*"time"*/, v5);
    sub_B2C35C(&StringLiteral_21272/*"onupdate"*/, v6);
    sub_B2C35C(&StringLiteral_22714/*"to"*/, v7);
    sub_B2C35C(&StringLiteral_6680/*"FinishUpdateBuddyPoint"*/, v8);
    sub_B2C35C(&StringLiteral_21263/*"oncomplete"*/, v9);
    sub_B2C35C(&StringLiteral_15058/*"UpdateBuddyPointInfo"*/, v10);
    sub_B2C35C(&iTween_TypeInfo, v11);
    byte_4187E66 = 1;
  }
  if ( this->fields.resultBuddyPointInfo )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v13 = sub_B2C374(object___TypeInfo, 10LL);
    if ( !v13 )
      sub_B2C434(0LL, v14);
    v21 = (System_Object_array *)v13;
    v22 = StringLiteral_18914/*"from"*/;
    if ( StringLiteral_18914/*"from"*/ )
    {
      v22 = sub_B2C41C(StringLiteral_18914/*"from"*/, v21->obj.klass->_1.element_class);
      if ( !v22 )
        goto LABEL_55;
      v23 = (System_Int32_array **)StringLiteral_18914/*"from"*/;
    }
    else
    {
      v23 = 0LL;
    }
    if ( !v21->max_length )
      goto LABEL_54;
    v21->m_Items[0] = (Il2CppObject *)v23;
    sub_B2C2F8((BattleServantConfConponent_o *)v21->m_Items, v23, v15, v16, v17, v18, v19, v20);
    v92 = 0;
    v22 = j_il2cpp_value_box_0(float_TypeInfo, &v92);
    v30 = (System_Int32_array **)v22;
    if ( !v22 || (v22 = sub_B2C41C(v22, v21->obj.klass->_1.element_class)) != 0 )
    {
      if ( v21->max_length <= 1 )
        goto LABEL_54;
      v21->m_Items[1] = (Il2CppObject *)v30;
      sub_B2C2F8((BattleServantConfConponent_o *)&v21->m_Items[1], v30, v24, v25, v26, v27, v28, v29);
      v22 = StringLiteral_22714/*"to"*/;
      if ( StringLiteral_22714/*"to"*/ )
      {
        v22 = sub_B2C41C(StringLiteral_22714/*"to"*/, v21->obj.klass->_1.element_class);
        if ( !v22 )
          goto LABEL_55;
        v37 = (System_Int32_array **)StringLiteral_22714/*"to"*/;
      }
      else
      {
        v37 = 0LL;
      }
      if ( v21->max_length <= 2 )
        goto LABEL_54;
      v21->m_Items[2] = (Il2CppObject *)v37;
      sub_B2C2F8((BattleServantConfConponent_o *)&v21->m_Items[2], v37, v31, v32, v33, v34, v35, v36);
      v91 = 1065353216;
      v22 = j_il2cpp_value_box_0(float_TypeInfo, &v91);
      v44 = (System_Int32_array **)v22;
      if ( !v22 || (v22 = sub_B2C41C(v22, v21->obj.klass->_1.element_class)) != 0 )
      {
        if ( v21->max_length <= 3 )
          goto LABEL_54;
        v21->m_Items[3] = (Il2CppObject *)v44;
        sub_B2C2F8((BattleServantConfConponent_o *)&v21->m_Items[3], v44, v38, v39, v40, v41, v42, v43);
        v22 = StringLiteral_21272/*"onupdate"*/;
        if ( StringLiteral_21272/*"onupdate"*/ )
        {
          v22 = sub_B2C41C(StringLiteral_21272/*"onupdate"*/, v21->obj.klass->_1.element_class);
          if ( !v22 )
            goto LABEL_55;
          v51 = (System_Int32_array **)StringLiteral_21272/*"onupdate"*/;
        }
        else
        {
          v51 = 0LL;
        }
        if ( v21->max_length <= 4 )
          goto LABEL_54;
        v21->m_Items[4] = (Il2CppObject *)v51;
        sub_B2C2F8((BattleServantConfConponent_o *)&v21->m_Items[4], v51, v45, v46, v47, v48, v49, v50);
        v22 = StringLiteral_15058/*"UpdateBuddyPointInfo"*/;
        if ( StringLiteral_15058/*"UpdateBuddyPointInfo"*/ )
        {
          v22 = sub_B2C41C(StringLiteral_15058/*"UpdateBuddyPointInfo"*/, v21->obj.klass->_1.element_class);
          if ( !v22 )
            goto LABEL_55;
          v58 = (System_Int32_array **)StringLiteral_15058/*"UpdateBuddyPointInfo"*/;
        }
        else
        {
          v58 = 0LL;
        }
        if ( v21->max_length <= 5 )
          goto LABEL_54;
        v21->m_Items[5] = (Il2CppObject *)v58;
        sub_B2C2F8((BattleServantConfConponent_o *)&v21->m_Items[5], v58, v52, v53, v54, v55, v56, v57);
        v22 = StringLiteral_21263/*"oncomplete"*/;
        if ( StringLiteral_21263/*"oncomplete"*/ )
        {
          v22 = sub_B2C41C(StringLiteral_21263/*"oncomplete"*/, v21->obj.klass->_1.element_class);
          if ( !v22 )
            goto LABEL_55;
          v65 = (System_Int32_array **)StringLiteral_21263/*"oncomplete"*/;
        }
        else
        {
          v65 = 0LL;
        }
        if ( v21->max_length <= 6 )
          goto LABEL_54;
        v21->m_Items[6] = (Il2CppObject *)v65;
        sub_B2C2F8((BattleServantConfConponent_o *)&v21->m_Items[6], v65, v59, v60, v61, v62, v63, v64);
        v22 = StringLiteral_6680/*"FinishUpdateBuddyPoint"*/;
        if ( StringLiteral_6680/*"FinishUpdateBuddyPoint"*/ )
        {
          v22 = sub_B2C41C(StringLiteral_6680/*"FinishUpdateBuddyPoint"*/, v21->obj.klass->_1.element_class);
          if ( !v22 )
            goto LABEL_55;
          v72 = (System_Int32_array **)StringLiteral_6680/*"FinishUpdateBuddyPoint"*/;
        }
        else
        {
          v72 = 0LL;
        }
        if ( v21->max_length <= 7 )
          goto LABEL_54;
        v21->m_Items[7] = (Il2CppObject *)v72;
        sub_B2C2F8((BattleServantConfConponent_o *)&v21->m_Items[7], v72, v66, v67, v68, v69, v70, v71);
        v22 = StringLiteral_22677/*"time"*/;
        if ( StringLiteral_22677/*"time"*/ )
        {
          v22 = sub_B2C41C(StringLiteral_22677/*"time"*/, v21->obj.klass->_1.element_class);
          if ( !v22 )
            goto LABEL_55;
          v79 = (System_Int32_array **)StringLiteral_22677/*"time"*/;
        }
        else
        {
          v79 = 0LL;
        }
        if ( v21->max_length <= 8 )
          goto LABEL_54;
        v21->m_Items[8] = (Il2CppObject *)v79;
        sub_B2C2F8((BattleServantConfConponent_o *)&v21->m_Items[8], v79, v73, v74, v75, v76, v77, v78);
        v90 = 1072064102;
        v22 = j_il2cpp_value_box_0(float_TypeInfo, &v90);
        v86 = (System_Int32_array **)v22;
        if ( !v22 || (v22 = sub_B2C41C(v22, v21->obj.klass->_1.element_class)) != 0 )
        {
          if ( v21->max_length > 9 )
          {
            v21->m_Items[9] = (Il2CppObject *)v86;
            sub_B2C2F8((BattleServantConfConponent_o *)&v21->m_Items[9], v86, v80, v81, v82, v83, v84, v85);
            if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
            v87 = iTween__Hash(v21, 0LL);
            iTween__ValueTo(gameObject, v87, 0LL);
            return;
          }
LABEL_54:
          v88 = sub_B2C460(v22);
          sub_B2C400(v88, 0LL);
        }
      }
    }
LABEL_55:
    v89 = sub_B2C454(v22);
    sub_B2C400(v89, 0LL);
  }
}


void __fastcall BattleResultBuddyPointInfoComponent__UpdateBuddyPointInfo(
        BattleResultBuddyPointInfoComponent_o *this,
        float val,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct BattleBuddyPointInfo_o *resultBuddyPointInfo; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  struct BattleBuddyPointInfo_o *v12; // x8
  int32_t befBuddyPoint; // w20
  int v14; // w8
  __int64 v15; // x23
  int v16; // w8
  UILabel_o *buddyPointLabel; // x20
  Il2CppObject *v18; // x21
  Il2CppObject *v19; // x0
  Il2CppObject *v20; // x0
  System_String_o *v21; // x0
  UILabel_o *buddyPointRankLabel; // x19
  System_String_o *v23; // x20
  int32_t beforeBuddyRank; // [xsp+Ch] [xbp-44h] BYREF
  __int64 v25; // [xsp+10h] [xbp-40h] BYREF
  int v26; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4187E67 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, method);
    sub_B2C35C(&long_TypeInfo, v5);
    sub_B2C35C(&LocalizationManager_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_2374/*"BATTLE_BUDDY_POINT_RANK_{0}"*/, v7);
    sub_B2C35C(&StringLiteral_23669/*"{0}（＋{1}）"*/, v8);
    byte_4187E67 = 1;
  }
  resultBuddyPointInfo = this->fields.resultBuddyPointInfo;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  if ( resultBuddyPointInfo )
  {
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    v12 = this->fields.resultBuddyPointInfo;
    if ( v12 )
    {
      befBuddyPoint = v12->fields.befBuddyPoint;
      v14 = v12->fields.aftBuddyPoint - befBuddyPoint;
      v15 = v14;
      v16 = BattleUtility__FloorToInt((float)v14 * val, 0LL) + befBuddyPoint;
      buddyPointLabel = this->fields.buddyPointLabel;
      if ( v16 >= 9999999 )
        v16 = 9999999;
      v26 = v16;
      v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
      v25 = v15;
      v19 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v25);
      gameObject = (UnityEngine_GameObject_o *)System_String__Format_44301068(
                                                 (System_String_o *)StringLiteral_23669/*"{0}（＋{1}）"*/,
                                                 v18,
                                                 v19,
                                                 0LL);
      if ( buddyPointLabel )
      {
        UILabel__set_text(buddyPointLabel, (System_String_o *)gameObject, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.buddyPointLabel;
        if ( gameObject )
        {
          UILabel__SetCondensedScale((UILabel_o *)gameObject, this->fields.pointLabelMaxWidth, 0LL);
          beforeBuddyRank = this->fields.beforeBuddyRank;
          v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &beforeBuddyRank);
          v21 = System_String__Format((System_String_o *)StringLiteral_2374/*"BATTLE_BUDDY_POINT_RANK_{0}"*/, v20, 0LL);
          buddyPointRankLabel = this->fields.buddyPointRankLabel;
          v23 = v21;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v23, 0LL);
          if ( buddyPointRankLabel )
          {
            UILabel__set_text(buddyPointRankLabel, (System_String_o *)gameObject, 0LL);
            return;
          }
        }
      }
    }
LABEL_16:
    sub_B2C434(gameObject, v11);
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}