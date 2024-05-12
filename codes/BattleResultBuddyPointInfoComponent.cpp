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
  UnityEngine_GameObject_o *gameObject; // x20
  System_String_o *v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  struct BattleBuddyPointInfo_o *resultBuddyPointInfo; // x8
  int aftBuddyPoint; // w8
  int32_t befBuddyPoint; // w9
  UILabel_o *buddyPointLabel; // x20
  int v11; // w23
  Il2CppObject *v12; // x21
  __int64 v13; // x2
  Il2CppObject *v14; // x0
  const MethodInfo *v15; // x2
  struct BattleBuddyPointInfo_o *v16; // x8
  const MethodInfo *v17; // x1
  int v18; // [xsp+8h] [xbp-28h] BYREF
  int v19; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_438B7B1 & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&StringLiteral_24157/*"{0}（＋{1}）"*/);
    sub_B775C4(&iTween_TypeInfo);
    byte_438B7B1 = 1;
  }
  if ( this->fields.resultBuddyPointInfo )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__Stop_43295052(gameObject, 0LL);
    resultBuddyPointInfo = this->fields.resultBuddyPointInfo;
    if ( !resultBuddyPointInfo )
      goto LABEL_16;
    befBuddyPoint = resultBuddyPointInfo->fields.befBuddyPoint;
    aftBuddyPoint = resultBuddyPointInfo->fields.aftBuddyPoint;
    buddyPointLabel = this->fields.buddyPointLabel;
    v11 = aftBuddyPoint - befBuddyPoint;
    if ( aftBuddyPoint >= 9999999 )
      aftBuddyPoint = 9999999;
    v19 = aftBuddyPoint;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19, v6);
    v18 = v11;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, v13);
    v4 = System_String__Format_44897472((System_String_o *)StringLiteral_24157/*"{0}（＋{1}）"*/, v12, v14, 0LL);
    if ( !buddyPointLabel
      || (UILabel__set_text(buddyPointLabel, v4, 0LL), (v4 = (System_String_o *)this->fields.buddyPointLabel) == 0LL)
      || (UILabel__SetCondensedScale((UILabel_o *)v4, this->fields.pointLabelMaxWidth, 0LL),
          (v16 = this->fields.resultBuddyPointInfo) == 0LL) )
    {
LABEL_16:
      sub_B7769C(v4, v5);
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
  EventServantPointRankMaster_o *rankMaster; // x0
  struct EventServantPointRankMaster_o **p_rankMaster; // x21
  System_Int32_array **Master_WarQuestSelectionMaster; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct BattleBuddyPointInfo_o *resultBuddyPointInfo; // x8
  EventServantPointRankEntity_o *EnableEntity; // x0
  int32_t svtPointRank; // w8

  if ( (byte_438B7B0 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    byte_438B7B0 = 1;
  }
  p_rankMaster = &this->fields.rankMaster;
  rankMaster = this->fields.rankMaster;
  if ( !rankMaster )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    *p_rankMaster = (struct EventServantPointRankMaster_o *)Master_WarQuestSelectionMaster;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.rankMaster,
      Master_WarQuestSelectionMaster,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    rankMaster = *p_rankMaster;
  }
  resultBuddyPointInfo = this->fields.resultBuddyPointInfo;
  if ( !resultBuddyPointInfo || !rankMaster )
    sub_B7769C(rankMaster, *(_QWORD *)&buddyPoint);
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
  UnityEngine_GameObject_o *buddyPointRankUpObject; // x0
  __int64 v4; // x2
  Il2CppObject *v5; // x0
  System_String_o *v6; // x20
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_GameObject_o *v8; // x20
  UnityEngine_Transform_o *v9; // x21
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  UnityEngine_Object_o *v11; // x20
  __int64 v12; // x2
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  UILabel_o *buddyPointRankLabel; // x20
  System_String_o *v16; // x21
  int32_t beforeBuddyRank; // [xsp+8h] [xbp-38h] BYREF
  int32_t buddyPointEventId; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_438B7B2 & 1) == 0 )
  {
    sub_B775C4(&Method_AssetData_GetObject_GameObject____69465408);
    sub_B775C4(&AssetManager_TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_5961/*"Effect/BattleResult/{0}"*/);
    sub_B775C4(&StringLiteral_17069/*"bit_buddy_rankup"*/);
    sub_B775C4(&StringLiteral_2466/*"BATTLE_BUDDY_POINT_RANK_{0}"*/);
    byte_438B7B2 = 1;
  }
  buddyPointRankUpObject = this->fields.buddyPointRankUpObject;
  if ( !buddyPointRankUpObject )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(buddyPointRankUpObject, 1, 0LL);
  buddyPointEventId = this->fields.buddyPointEventId;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &buddyPointEventId, v4);
  v6 = System_String__Format((System_String_o *)StringLiteral_5961/*"Effect/BattleResult/{0}"*/, v5, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)AssetManager__getAssetStorage(v6, 0LL);
  if ( !buddyPointRankUpObject )
    goto LABEL_29;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               (AssetData_o *)buddyPointRankUpObject,
                                                                               (System_String_o *)StringLiteral_17069/*"bit_buddy_rankup"*/,
                                                                               (const MethodInfo_1C5FDDC *)Method_AssetData_GetObject_GameObject____69465408);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                         Object_WarBoardWaitTimeSetting,
                                                         (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !buddyPointRankUpObject )
    goto LABEL_29;
  v8 = buddyPointRankUpObject;
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                         buddyPointRankUpObject,
                                                         0LL);
  if ( !this->fields.buddyPointRankUpObject )
    goto LABEL_29;
  v9 = (UnityEngine_Transform_o *)buddyPointRankUpObject;
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                         this->fields.buddyPointRankUpObject,
                                                         0LL);
  if ( !v9 )
    goto LABEL_29;
  UnityEngine_Transform__SetParent(v9, (UnityEngine_Transform_o *)buddyPointRankUpObject, 0LL);
  zero = UnityEngine_Vector3__get_zero(0LL);
  UnityEngine_Transform__set_localPosition(v9, zero, 0LL);
  one = UnityEngine_Vector3__get_one(0LL);
  UnityEngine_Transform__set_localScale(v9, one, 0LL);
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v8,
                                                      (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  v11 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  v8,
                                  (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                         Component_srcLineSprite,
                                                         0LL,
                                                         0LL);
  if ( ((unsigned __int8)buddyPointRankUpObject & 1) != 0 )
  {
    if ( !Component_srcLineSprite )
      goto LABEL_29;
    UnityEngine_Animation__Play_51745976(
      (UnityEngine_Animation_o *)Component_srcLineSprite,
      (System_String_o *)StringLiteral_17069/*"bit_buddy_rankup"*/,
      0LL);
  }
  else
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v11, 0LL, 0LL);
    if ( ((unsigned __int8)buddyPointRankUpObject & 1) != 0 )
    {
      if ( !v11 )
        goto LABEL_29;
      SimpleAnimation__Play_16815192((SimpleAnimation_o *)v11, (System_String_o *)StringLiteral_17069/*"bit_buddy_rankup"*/, 0LL);
    }
  }
  beforeBuddyRank = this->fields.beforeBuddyRank;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &beforeBuddyRank, v12);
  v14 = System_String__Format((System_String_o *)StringLiteral_2466/*"BATTLE_BUDDY_POINT_RANK_{0}"*/, v13, 0LL);
  buddyPointRankLabel = this->fields.buddyPointRankLabel;
  v16 = v14;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v16, 0LL);
  if ( !buddyPointRankLabel
    || (UILabel__set_text(buddyPointRankLabel, (System_String_o *)buddyPointRankUpObject, 0LL),
        (buddyPointRankUpObject = (UnityEngine_GameObject_o *)this->fields.buddyPointRankLabel) == 0LL) )
  {
LABEL_29:
    sub_B7769C(buddyPointRankUpObject, method);
  }
  UILabel__SetCondensedScale((UILabel_o *)buddyPointRankUpObject, this->fields.pointLabelMaxWidth, 0LL);
}


void __fastcall BattleResultBuddyPointInfoComponent__SetBuddyPointInfo(
        BattleResultBuddyPointInfoComponent_o *this,
        BattleBuddyPointInfo_o *buddyPointInfo,
        int32_t eventId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *buddyPointRankUpObject; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct EventServantPointRankMaster_o *Master_WarQuestSelectionMaster; // x0
  struct EventServantPointRankMaster_o **p_rankMaster; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct BattleBuddyPointInfo_o *resultBuddyPointInfo; // x8
  EventServantPointRankEntity_o *EnableEntity; // x0
  int32_t svtPointRank; // w8

  if ( (byte_438B7AD & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    byte_438B7AD = 1;
  }
  buddyPointRankUpObject = this->fields.buddyPointRankUpObject;
  if ( !buddyPointRankUpObject )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(buddyPointRankUpObject, 0, 0LL);
  this->fields.resultBuddyPointInfo = buddyPointInfo;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.resultBuddyPointInfo,
    (System_Int32_array **)buddyPointInfo,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  if ( !this->fields.resultBuddyPointInfo )
    return;
  this->fields.buddyPointEventId = eventId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (struct EventServantPointRankMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  this->fields.rankMaster = Master_WarQuestSelectionMaster;
  p_rankMaster = &this->fields.rankMaster;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.rankMaster,
    (System_Int32_array **)Master_WarQuestSelectionMaster,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  resultBuddyPointInfo = this->fields.resultBuddyPointInfo;
  if ( !resultBuddyPointInfo || (buddyPointRankUpObject = (UnityEngine_GameObject_o *)*p_rankMaster) == 0LL )
LABEL_15:
    sub_B7769C(buddyPointRankUpObject, buddyPointInfo);
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
  UnityEngine_GameObject_o *gameObject; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Object_array *v12; // x20
  __int64 v13; // x0
  System_Int32_array **v14; // x1
  __int64 v15; // x2
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **v22; // x21
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x1
  __int64 v30; // x2
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **v37; // x21
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x1
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
  __int64 v73; // x2
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  System_Int32_array **v80; // x21
  System_Collections_Hashtable_o *v81; // x0
  __int64 v82; // x0
  __int64 v83; // x0
  int v84; // [xsp+4h] [xbp-2Ch] BYREF
  int v85; // [xsp+8h] [xbp-28h] BYREF
  int v86; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_438B7AE & 1) == 0 )
  {
    sub_B775C4(&object___TypeInfo);
    sub_B775C4(&float_TypeInfo);
    sub_B775C4(&StringLiteral_19296/*"from"*/);
    sub_B775C4(&StringLiteral_23154/*"time"*/);
    sub_B775C4(&StringLiteral_21711/*"onupdate"*/);
    sub_B775C4(&StringLiteral_23192/*"to"*/);
    sub_B775C4(&StringLiteral_6829/*"FinishUpdateBuddyPoint"*/);
    sub_B775C4(&StringLiteral_21702/*"oncomplete"*/);
    sub_B775C4(&StringLiteral_15315/*"UpdateBuddyPointInfo"*/);
    sub_B775C4(&iTween_TypeInfo);
    byte_438B7AE = 1;
  }
  if ( this->fields.resultBuddyPointInfo )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v4 = sub_B775DC(object___TypeInfo, 10LL);
    if ( !v4 )
      sub_B7769C(0LL, v5);
    v12 = (System_Object_array *)v4;
    v13 = StringLiteral_19296/*"from"*/;
    if ( StringLiteral_19296/*"from"*/ )
    {
      v13 = sub_B77684(StringLiteral_19296/*"from"*/, v12->obj.klass->_1.element_class);
      if ( !v13 )
        goto LABEL_55;
      v14 = (System_Int32_array **)StringLiteral_19296/*"from"*/;
    }
    else
    {
      v14 = 0LL;
    }
    if ( !v12->max_length )
      goto LABEL_54;
    v12->m_Items[0] = (Il2CppObject *)v14;
    sub_B77560((BattleServantConfConponent_o *)v12->m_Items, v14, v6, v7, v8, v9, v10, v11);
    v86 = 0;
    v13 = j_il2cpp_value_box_0(float_TypeInfo, &v86, v15);
    v22 = (System_Int32_array **)v13;
    if ( !v13 || (v13 = sub_B77684(v13, v12->obj.klass->_1.element_class)) != 0 )
    {
      if ( v12->max_length <= 1 )
        goto LABEL_54;
      v12->m_Items[1] = (Il2CppObject *)v22;
      sub_B77560((BattleServantConfConponent_o *)&v12->m_Items[1], v22, v16, v17, v18, v19, v20, v21);
      v13 = StringLiteral_23192/*"to"*/;
      if ( StringLiteral_23192/*"to"*/ )
      {
        v13 = sub_B77684(StringLiteral_23192/*"to"*/, v12->obj.klass->_1.element_class);
        if ( !v13 )
          goto LABEL_55;
        v29 = (System_Int32_array **)StringLiteral_23192/*"to"*/;
      }
      else
      {
        v29 = 0LL;
      }
      if ( v12->max_length <= 2 )
        goto LABEL_54;
      v12->m_Items[2] = (Il2CppObject *)v29;
      sub_B77560((BattleServantConfConponent_o *)&v12->m_Items[2], v29, v23, v24, v25, v26, v27, v28);
      v85 = 1065353216;
      v13 = j_il2cpp_value_box_0(float_TypeInfo, &v85, v30);
      v37 = (System_Int32_array **)v13;
      if ( !v13 || (v13 = sub_B77684(v13, v12->obj.klass->_1.element_class)) != 0 )
      {
        if ( v12->max_length <= 3 )
          goto LABEL_54;
        v12->m_Items[3] = (Il2CppObject *)v37;
        sub_B77560((BattleServantConfConponent_o *)&v12->m_Items[3], v37, v31, v32, v33, v34, v35, v36);
        v13 = StringLiteral_21711/*"onupdate"*/;
        if ( StringLiteral_21711/*"onupdate"*/ )
        {
          v13 = sub_B77684(StringLiteral_21711/*"onupdate"*/, v12->obj.klass->_1.element_class);
          if ( !v13 )
            goto LABEL_55;
          v44 = (System_Int32_array **)StringLiteral_21711/*"onupdate"*/;
        }
        else
        {
          v44 = 0LL;
        }
        if ( v12->max_length <= 4 )
          goto LABEL_54;
        v12->m_Items[4] = (Il2CppObject *)v44;
        sub_B77560((BattleServantConfConponent_o *)&v12->m_Items[4], v44, v38, v39, v40, v41, v42, v43);
        v13 = StringLiteral_15315/*"UpdateBuddyPointInfo"*/;
        if ( StringLiteral_15315/*"UpdateBuddyPointInfo"*/ )
        {
          v13 = sub_B77684(StringLiteral_15315/*"UpdateBuddyPointInfo"*/, v12->obj.klass->_1.element_class);
          if ( !v13 )
            goto LABEL_55;
          v51 = (System_Int32_array **)StringLiteral_15315/*"UpdateBuddyPointInfo"*/;
        }
        else
        {
          v51 = 0LL;
        }
        if ( v12->max_length <= 5 )
          goto LABEL_54;
        v12->m_Items[5] = (Il2CppObject *)v51;
        sub_B77560((BattleServantConfConponent_o *)&v12->m_Items[5], v51, v45, v46, v47, v48, v49, v50);
        v13 = StringLiteral_21702/*"oncomplete"*/;
        if ( StringLiteral_21702/*"oncomplete"*/ )
        {
          v13 = sub_B77684(StringLiteral_21702/*"oncomplete"*/, v12->obj.klass->_1.element_class);
          if ( !v13 )
            goto LABEL_55;
          v58 = (System_Int32_array **)StringLiteral_21702/*"oncomplete"*/;
        }
        else
        {
          v58 = 0LL;
        }
        if ( v12->max_length <= 6 )
          goto LABEL_54;
        v12->m_Items[6] = (Il2CppObject *)v58;
        sub_B77560((BattleServantConfConponent_o *)&v12->m_Items[6], v58, v52, v53, v54, v55, v56, v57);
        v13 = StringLiteral_6829/*"FinishUpdateBuddyPoint"*/;
        if ( StringLiteral_6829/*"FinishUpdateBuddyPoint"*/ )
        {
          v13 = sub_B77684(StringLiteral_6829/*"FinishUpdateBuddyPoint"*/, v12->obj.klass->_1.element_class);
          if ( !v13 )
            goto LABEL_55;
          v65 = (System_Int32_array **)StringLiteral_6829/*"FinishUpdateBuddyPoint"*/;
        }
        else
        {
          v65 = 0LL;
        }
        if ( v12->max_length <= 7 )
          goto LABEL_54;
        v12->m_Items[7] = (Il2CppObject *)v65;
        sub_B77560((BattleServantConfConponent_o *)&v12->m_Items[7], v65, v59, v60, v61, v62, v63, v64);
        v13 = StringLiteral_23154/*"time"*/;
        if ( StringLiteral_23154/*"time"*/ )
        {
          v13 = sub_B77684(StringLiteral_23154/*"time"*/, v12->obj.klass->_1.element_class);
          if ( !v13 )
            goto LABEL_55;
          v72 = (System_Int32_array **)StringLiteral_23154/*"time"*/;
        }
        else
        {
          v72 = 0LL;
        }
        if ( v12->max_length <= 8 )
          goto LABEL_54;
        v12->m_Items[8] = (Il2CppObject *)v72;
        sub_B77560((BattleServantConfConponent_o *)&v12->m_Items[8], v72, v66, v67, v68, v69, v70, v71);
        v84 = 1072064102;
        v13 = j_il2cpp_value_box_0(float_TypeInfo, &v84, v73);
        v80 = (System_Int32_array **)v13;
        if ( !v13 || (v13 = sub_B77684(v13, v12->obj.klass->_1.element_class)) != 0 )
        {
          if ( v12->max_length > 9 )
          {
            v12->m_Items[9] = (Il2CppObject *)v80;
            sub_B77560((BattleServantConfConponent_o *)&v12->m_Items[9], v80, v74, v75, v76, v77, v78, v79);
            if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
            v81 = iTween__Hash(v12, 0LL);
            iTween__ValueTo(gameObject, v81, 0LL);
            return;
          }
LABEL_54:
          v82 = sub_B776C8(v13);
          sub_B77668(v82, 0LL);
        }
      }
    }
LABEL_55:
    v83 = sub_B776BC(v13);
    sub_B77668(v83, 0LL);
  }
}


void __fastcall BattleResultBuddyPointInfoComponent__UpdateBuddyPointInfo(
        BattleResultBuddyPointInfoComponent_o *this,
        float val,
        const MethodInfo *method)
{
  struct BattleBuddyPointInfo_o *resultBuddyPointInfo; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  struct BattleBuddyPointInfo_o *v8; // x8
  int32_t befBuddyPoint; // w20
  int v10; // w8
  __int64 v11; // x23
  __int64 v12; // x2
  int v13; // w8
  UILabel_o *buddyPointLabel; // x20
  Il2CppObject *v15; // x21
  __int64 v16; // x2
  Il2CppObject *v17; // x0
  __int64 v18; // x2
  Il2CppObject *v19; // x0
  System_String_o *v20; // x0
  UILabel_o *buddyPointRankLabel; // x19
  System_String_o *v22; // x20
  int32_t beforeBuddyRank; // [xsp+Ch] [xbp-44h] BYREF
  __int64 v24; // [xsp+10h] [xbp-40h] BYREF
  int v25; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_438B7AF & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&long_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_2466/*"BATTLE_BUDDY_POINT_RANK_{0}"*/);
    sub_B775C4(&StringLiteral_24157/*"{0}（＋{1}）"*/);
    byte_438B7AF = 1;
  }
  resultBuddyPointInfo = this->fields.resultBuddyPointInfo;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  if ( resultBuddyPointInfo )
  {
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    v8 = this->fields.resultBuddyPointInfo;
    if ( v8 )
    {
      befBuddyPoint = v8->fields.befBuddyPoint;
      v10 = v8->fields.aftBuddyPoint - befBuddyPoint;
      v11 = v10;
      v13 = BattleUtility__FloorToInt((float)v10 * val, 0LL) + befBuddyPoint;
      buddyPointLabel = this->fields.buddyPointLabel;
      if ( v13 >= 9999999 )
        v13 = 9999999;
      v25 = v13;
      v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25, v12);
      v24 = v11;
      v17 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v24, v16);
      gameObject = (UnityEngine_GameObject_o *)System_String__Format_44897472(
                                                 (System_String_o *)StringLiteral_24157/*"{0}（＋{1}）"*/,
                                                 v15,
                                                 v17,
                                                 0LL);
      if ( buddyPointLabel )
      {
        UILabel__set_text(buddyPointLabel, (System_String_o *)gameObject, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.buddyPointLabel;
        if ( gameObject )
        {
          UILabel__SetCondensedScale((UILabel_o *)gameObject, this->fields.pointLabelMaxWidth, 0LL);
          beforeBuddyRank = this->fields.beforeBuddyRank;
          v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &beforeBuddyRank, v18);
          v20 = System_String__Format((System_String_o *)StringLiteral_2466/*"BATTLE_BUDDY_POINT_RANK_{0}"*/, v19, 0LL);
          buddyPointRankLabel = this->fields.buddyPointRankLabel;
          v22 = v20;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v22, 0LL);
          if ( buddyPointRankLabel )
          {
            UILabel__set_text(buddyPointRankLabel, (System_String_o *)gameObject, 0LL);
            return;
          }
        }
      }
    }
LABEL_16:
    sub_B7769C(gameObject, v7);
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}