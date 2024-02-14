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
  struct BattleBuddyPointInfo_o *resultBuddyPointInfo; // x8
  int aftBuddyPoint; // w8
  int32_t befBuddyPoint; // w9
  UILabel_o *buddyPointLabel; // x20
  int v11; // w23
  Il2CppObject *v12; // x21
  Il2CppObject *v13; // x0
  const MethodInfo *v14; // x2
  struct BattleBuddyPointInfo_o *v15; // x8
  const MethodInfo *v16; // x1
  int v17; // [xsp+8h] [xbp-28h] BYREF
  int v18; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4214889 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_23747/*"{0}（＋{1}）"*/, v3);
    sub_B0D8A4(&iTween_TypeInfo, v4);
    byte_4214889 = 1;
  }
  if ( this->fields.resultBuddyPointInfo )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__Stop_42502584(gameObject, 0LL);
    resultBuddyPointInfo = this->fields.resultBuddyPointInfo;
    if ( !resultBuddyPointInfo )
      goto LABEL_16;
    befBuddyPoint = resultBuddyPointInfo->fields.befBuddyPoint;
    aftBuddyPoint = resultBuddyPointInfo->fields.aftBuddyPoint;
    buddyPointLabel = this->fields.buddyPointLabel;
    v11 = aftBuddyPoint - befBuddyPoint;
    if ( aftBuddyPoint >= 9999999 )
      aftBuddyPoint = 9999999;
    v18 = aftBuddyPoint;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
    v17 = v11;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
    v6 = System_String__Format_43845440((System_String_o *)StringLiteral_23747/*"{0}（＋{1}）"*/, v12, v13, 0LL);
    if ( !buddyPointLabel
      || (UILabel__set_text(buddyPointLabel, v6, 0LL), (v6 = (System_String_o *)this->fields.buddyPointLabel) == 0LL)
      || (UILabel__SetCondensedScale((UILabel_o *)v6, this->fields.pointLabelMaxWidth, 0LL),
          (v15 = this->fields.resultBuddyPointInfo) == 0LL) )
    {
LABEL_16:
      sub_B0D97C(v6);
    }
    if ( BattleResultBuddyPointInfoComponent__IsRankUpBuddyRank(this, v15->fields.aftBuddyPoint, v14) )
      BattleResultBuddyPointInfoComponent__PlayBuddyRankUp(this, v16);
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

  if ( (byte_4214888 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_EventServantPointRankMaster___, *(_QWORD *)&buddyPoint);
    sub_B0D8A4(&DataManager_TypeInfo, v5);
    byte_4214888 = 1;
  }
  p_rankMaster = &this->fields.rankMaster;
  rankMaster = this->fields.rankMaster;
  if ( !rankMaster )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    *p_rankMaster = (struct EventServantPointRankMaster_o *)Master_WarQuestSelectionMaster;
    sub_B0D840(
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
    sub_B0D97C(rankMaster);
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

  if ( (byte_421488A & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, method);
    sub_B0D8A4(&AssetManager_TypeInfo, v3);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_Animation___, v4);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v5);
    sub_B0D8A4(&int_TypeInfo, v6);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v7);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_5831/*"Effect/BattleResult/{0}"*/, v10);
    sub_B0D8A4(&StringLiteral_16786/*"bit_buddy_rankup"*/, v11);
    sub_B0D8A4(&StringLiteral_2384/*"BATTLE_BUDDY_POINT_RANK_{0}"*/, v12);
    byte_421488A = 1;
  }
  buddyPointRankUpObject = this->fields.buddyPointRankUpObject;
  if ( !buddyPointRankUpObject )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(buddyPointRankUpObject, 1, 0LL);
  buddyPointEventId = this->fields.buddyPointEventId;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &buddyPointEventId);
  v15 = System_String__Format((System_String_o *)StringLiteral_5831/*"Effect/BattleResult/{0}"*/, v14, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)AssetManager__getAssetStorage(v15, 0LL);
  if ( !buddyPointRankUpObject )
    goto LABEL_29;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               (AssetData_o *)buddyPointRankUpObject,
                                                                               (System_String_o *)StringLiteral_16786/*"bit_buddy_rankup"*/,
                                                                               (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                         Object_WarBoardWaitTimeSetting,
                                                         (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
                                                      (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  v20 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  v17,
                                  (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                         Component_srcLineSprite,
                                                         0LL,
                                                         0LL);
  if ( ((unsigned __int8)buddyPointRankUpObject & 1) != 0 )
  {
    if ( !Component_srcLineSprite )
      goto LABEL_29;
    UnityEngine_Animation__Play_50564840(
      (UnityEngine_Animation_o *)Component_srcLineSprite,
      (System_String_o *)StringLiteral_16786/*"bit_buddy_rankup"*/,
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
      SimpleAnimation__Play_50482404((SimpleAnimation_o *)v20, (System_String_o *)StringLiteral_16786/*"bit_buddy_rankup"*/, 0LL);
    }
  }
  beforeBuddyRank = this->fields.beforeBuddyRank;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &beforeBuddyRank);
  v22 = System_String__Format((System_String_o *)StringLiteral_2384/*"BATTLE_BUDDY_POINT_RANK_{0}"*/, v21, 0LL);
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
    sub_B0D97C(buddyPointRankUpObject);
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

  if ( (byte_4214885 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_EventServantPointRankMaster___, buddyPointInfo);
    sub_B0D8A4(&DataManager_TypeInfo, v7);
    byte_4214885 = 1;
  }
  buddyPointRankUpObject = this->fields.buddyPointRankUpObject;
  if ( !buddyPointRankUpObject )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(buddyPointRankUpObject, 0, 0LL);
  this->fields.resultBuddyPointInfo = buddyPointInfo;
  sub_B0D840(
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
  Master_WarQuestSelectionMaster = (struct EventServantPointRankMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  this->fields.rankMaster = Master_WarQuestSelectionMaster;
  p_rankMaster = &this->fields.rankMaster;
  sub_B0D840(
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
    sub_B0D97C(buddyPointRankUpObject);
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
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Object_array *v20; // x20
  __int64 v21; // x0
  System_Int32_array **v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x21
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array **v36; // x1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x21
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **v50; // x1
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Int32_array **v57; // x1
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_Int32_array **v64; // x1
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_Int32_array **v71; // x1
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_Int32_array **v78; // x1
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  System_Int32_array **v85; // x21
  System_Collections_Hashtable_o *v86; // x0
  __int64 v87; // x0
  __int64 v88; // x0
  int v89; // [xsp+4h] [xbp-2Ch] BYREF
  int v90; // [xsp+8h] [xbp-28h] BYREF
  int v91; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4214886 & 1) == 0 )
  {
    sub_B0D8A4(&object___TypeInfo, method);
    sub_B0D8A4(&float_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_18972/*"from"*/, v4);
    sub_B0D8A4(&StringLiteral_22753/*"time"*/, v5);
    sub_B0D8A4(&StringLiteral_21341/*"onupdate"*/, v6);
    sub_B0D8A4(&StringLiteral_22790/*"to"*/, v7);
    sub_B0D8A4(&StringLiteral_6697/*"FinishUpdateBuddyPoint"*/, v8);
    sub_B0D8A4(&StringLiteral_21332/*"oncomplete"*/, v9);
    sub_B0D8A4(&StringLiteral_15104/*"UpdateBuddyPointInfo"*/, v10);
    sub_B0D8A4(&iTween_TypeInfo, v11);
    byte_4214886 = 1;
  }
  if ( this->fields.resultBuddyPointInfo )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v13 = sub_B0D8BC(object___TypeInfo, 10LL);
    if ( !v13 )
      sub_B0D97C(0LL);
    v20 = (System_Object_array *)v13;
    v21 = StringLiteral_18972/*"from"*/;
    if ( StringLiteral_18972/*"from"*/ )
    {
      v21 = sub_B0D964(StringLiteral_18972/*"from"*/, v20->obj.klass->_1.element_class);
      if ( !v21 )
        goto LABEL_55;
      v22 = (System_Int32_array **)StringLiteral_18972/*"from"*/;
    }
    else
    {
      v22 = 0LL;
    }
    if ( !v20->max_length )
      goto LABEL_54;
    v20->m_Items[0] = (Il2CppObject *)v22;
    sub_B0D840((BattleServantConfConponent_o *)v20->m_Items, v22, v14, v15, v16, v17, v18, v19);
    v91 = 0;
    v21 = j_il2cpp_value_box_0(float_TypeInfo, &v91);
    v29 = (System_Int32_array **)v21;
    if ( !v21 || (v21 = sub_B0D964(v21, v20->obj.klass->_1.element_class)) != 0 )
    {
      if ( v20->max_length <= 1 )
        goto LABEL_54;
      v20->m_Items[1] = (Il2CppObject *)v29;
      sub_B0D840((BattleServantConfConponent_o *)&v20->m_Items[1], v29, v23, v24, v25, v26, v27, v28);
      v21 = StringLiteral_22790/*"to"*/;
      if ( StringLiteral_22790/*"to"*/ )
      {
        v21 = sub_B0D964(StringLiteral_22790/*"to"*/, v20->obj.klass->_1.element_class);
        if ( !v21 )
          goto LABEL_55;
        v36 = (System_Int32_array **)StringLiteral_22790/*"to"*/;
      }
      else
      {
        v36 = 0LL;
      }
      if ( v20->max_length <= 2 )
        goto LABEL_54;
      v20->m_Items[2] = (Il2CppObject *)v36;
      sub_B0D840((BattleServantConfConponent_o *)&v20->m_Items[2], v36, v30, v31, v32, v33, v34, v35);
      v90 = 1065353216;
      v21 = j_il2cpp_value_box_0(float_TypeInfo, &v90);
      v43 = (System_Int32_array **)v21;
      if ( !v21 || (v21 = sub_B0D964(v21, v20->obj.klass->_1.element_class)) != 0 )
      {
        if ( v20->max_length <= 3 )
          goto LABEL_54;
        v20->m_Items[3] = (Il2CppObject *)v43;
        sub_B0D840((BattleServantConfConponent_o *)&v20->m_Items[3], v43, v37, v38, v39, v40, v41, v42);
        v21 = StringLiteral_21341/*"onupdate"*/;
        if ( StringLiteral_21341/*"onupdate"*/ )
        {
          v21 = sub_B0D964(StringLiteral_21341/*"onupdate"*/, v20->obj.klass->_1.element_class);
          if ( !v21 )
            goto LABEL_55;
          v50 = (System_Int32_array **)StringLiteral_21341/*"onupdate"*/;
        }
        else
        {
          v50 = 0LL;
        }
        if ( v20->max_length <= 4 )
          goto LABEL_54;
        v20->m_Items[4] = (Il2CppObject *)v50;
        sub_B0D840((BattleServantConfConponent_o *)&v20->m_Items[4], v50, v44, v45, v46, v47, v48, v49);
        v21 = StringLiteral_15104/*"UpdateBuddyPointInfo"*/;
        if ( StringLiteral_15104/*"UpdateBuddyPointInfo"*/ )
        {
          v21 = sub_B0D964(StringLiteral_15104/*"UpdateBuddyPointInfo"*/, v20->obj.klass->_1.element_class);
          if ( !v21 )
            goto LABEL_55;
          v57 = (System_Int32_array **)StringLiteral_15104/*"UpdateBuddyPointInfo"*/;
        }
        else
        {
          v57 = 0LL;
        }
        if ( v20->max_length <= 5 )
          goto LABEL_54;
        v20->m_Items[5] = (Il2CppObject *)v57;
        sub_B0D840((BattleServantConfConponent_o *)&v20->m_Items[5], v57, v51, v52, v53, v54, v55, v56);
        v21 = StringLiteral_21332/*"oncomplete"*/;
        if ( StringLiteral_21332/*"oncomplete"*/ )
        {
          v21 = sub_B0D964(StringLiteral_21332/*"oncomplete"*/, v20->obj.klass->_1.element_class);
          if ( !v21 )
            goto LABEL_55;
          v64 = (System_Int32_array **)StringLiteral_21332/*"oncomplete"*/;
        }
        else
        {
          v64 = 0LL;
        }
        if ( v20->max_length <= 6 )
          goto LABEL_54;
        v20->m_Items[6] = (Il2CppObject *)v64;
        sub_B0D840((BattleServantConfConponent_o *)&v20->m_Items[6], v64, v58, v59, v60, v61, v62, v63);
        v21 = StringLiteral_6697/*"FinishUpdateBuddyPoint"*/;
        if ( StringLiteral_6697/*"FinishUpdateBuddyPoint"*/ )
        {
          v21 = sub_B0D964(StringLiteral_6697/*"FinishUpdateBuddyPoint"*/, v20->obj.klass->_1.element_class);
          if ( !v21 )
            goto LABEL_55;
          v71 = (System_Int32_array **)StringLiteral_6697/*"FinishUpdateBuddyPoint"*/;
        }
        else
        {
          v71 = 0LL;
        }
        if ( v20->max_length <= 7 )
          goto LABEL_54;
        v20->m_Items[7] = (Il2CppObject *)v71;
        sub_B0D840((BattleServantConfConponent_o *)&v20->m_Items[7], v71, v65, v66, v67, v68, v69, v70);
        v21 = StringLiteral_22753/*"time"*/;
        if ( StringLiteral_22753/*"time"*/ )
        {
          v21 = sub_B0D964(StringLiteral_22753/*"time"*/, v20->obj.klass->_1.element_class);
          if ( !v21 )
            goto LABEL_55;
          v78 = (System_Int32_array **)StringLiteral_22753/*"time"*/;
        }
        else
        {
          v78 = 0LL;
        }
        if ( v20->max_length <= 8 )
          goto LABEL_54;
        v20->m_Items[8] = (Il2CppObject *)v78;
        sub_B0D840((BattleServantConfConponent_o *)&v20->m_Items[8], v78, v72, v73, v74, v75, v76, v77);
        v89 = 1072064102;
        v21 = j_il2cpp_value_box_0(float_TypeInfo, &v89);
        v85 = (System_Int32_array **)v21;
        if ( !v21 || (v21 = sub_B0D964(v21, v20->obj.klass->_1.element_class)) != 0 )
        {
          if ( v20->max_length > 9 )
          {
            v20->m_Items[9] = (Il2CppObject *)v85;
            sub_B0D840((BattleServantConfConponent_o *)&v20->m_Items[9], v85, v79, v80, v81, v82, v83, v84);
            if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
            v86 = iTween__Hash(v20, 0LL);
            iTween__ValueTo(gameObject, v86, 0LL);
            return;
          }
LABEL_54:
          v87 = sub_B0D9A8(v21);
          sub_B0D948(v87, 0LL);
        }
      }
    }
LABEL_55:
    v88 = sub_B0D99C(v21);
    sub_B0D948(v88, 0LL);
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
  struct BattleBuddyPointInfo_o *v11; // x8
  int32_t befBuddyPoint; // w20
  int v13; // w8
  __int64 v14; // x23
  int v15; // w8
  UILabel_o *buddyPointLabel; // x20
  Il2CppObject *v17; // x21
  Il2CppObject *v18; // x0
  Il2CppObject *v19; // x0
  System_String_o *v20; // x0
  UILabel_o *buddyPointRankLabel; // x19
  System_String_o *v22; // x20
  int32_t beforeBuddyRank; // [xsp+Ch] [xbp-44h] BYREF
  __int64 v24; // [xsp+10h] [xbp-40h] BYREF
  int v25; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4214887 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, method);
    sub_B0D8A4(&long_TypeInfo, v5);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_2384/*"BATTLE_BUDDY_POINT_RANK_{0}"*/, v7);
    sub_B0D8A4(&StringLiteral_23747/*"{0}（＋{1}）"*/, v8);
    byte_4214887 = 1;
  }
  resultBuddyPointInfo = this->fields.resultBuddyPointInfo;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  if ( resultBuddyPointInfo )
  {
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    v11 = this->fields.resultBuddyPointInfo;
    if ( v11 )
    {
      befBuddyPoint = v11->fields.befBuddyPoint;
      v13 = v11->fields.aftBuddyPoint - befBuddyPoint;
      v14 = v13;
      v15 = BattleUtility__FloorToInt((float)v13 * val, 0LL) + befBuddyPoint;
      buddyPointLabel = this->fields.buddyPointLabel;
      if ( v15 >= 9999999 )
        v15 = 9999999;
      v25 = v15;
      v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25);
      v24 = v14;
      v18 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v24);
      gameObject = (UnityEngine_GameObject_o *)System_String__Format_43845440(
                                                 (System_String_o *)StringLiteral_23747/*"{0}（＋{1}）"*/,
                                                 v17,
                                                 v18,
                                                 0LL);
      if ( buddyPointLabel )
      {
        UILabel__set_text(buddyPointLabel, (System_String_o *)gameObject, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.buddyPointLabel;
        if ( gameObject )
        {
          UILabel__SetCondensedScale((UILabel_o *)gameObject, this->fields.pointLabelMaxWidth, 0LL);
          beforeBuddyRank = this->fields.beforeBuddyRank;
          v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &beforeBuddyRank);
          v20 = System_String__Format((System_String_o *)StringLiteral_2384/*"BATTLE_BUDDY_POINT_RANK_{0}"*/, v19, 0LL);
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
    sub_B0D97C(gameObject);
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}