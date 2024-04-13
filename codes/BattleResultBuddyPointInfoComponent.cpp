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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_GameObject_o *gameObject; // x20
  System_String_o *v12; // x0
  __int64 v13; // x1
  struct BattleBuddyPointInfo_o *resultBuddyPointInfo; // x8
  int aftBuddyPoint; // w8
  int32_t befBuddyPoint; // w9
  UILabel_o *buddyPointLabel; // x20
  int v18; // w23
  Il2CppObject *v19; // x21
  Il2CppObject *v20; // x0
  const MethodInfo *v21; // x2
  struct BattleBuddyPointInfo_o *v22; // x8
  const MethodInfo *v23; // x1
  int v24; // [xsp+8h] [xbp-28h] BYREF
  int v25; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E88AD & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_23981/*"{0}（＋{1}）"*/, v5, v6, v7);
    sub_B5D5C4(&iTween_TypeInfo, v8, v9, v10);
    byte_42E88AD = 1;
  }
  if ( this->fields.resultBuddyPointInfo )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__Stop_43300928(gameObject, 0LL);
    resultBuddyPointInfo = this->fields.resultBuddyPointInfo;
    if ( !resultBuddyPointInfo )
      goto LABEL_16;
    befBuddyPoint = resultBuddyPointInfo->fields.befBuddyPoint;
    aftBuddyPoint = resultBuddyPointInfo->fields.aftBuddyPoint;
    buddyPointLabel = this->fields.buddyPointLabel;
    v18 = aftBuddyPoint - befBuddyPoint;
    if ( aftBuddyPoint >= 9999999 )
      aftBuddyPoint = 9999999;
    v25 = aftBuddyPoint;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25);
    v24 = v18;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
    v12 = System_String__Format_44573324((System_String_o *)StringLiteral_23981/*"{0}（＋{1}）"*/, v19, v20, 0LL);
    if ( !buddyPointLabel
      || (UILabel__set_text(buddyPointLabel, v12, 0LL), (v12 = (System_String_o *)this->fields.buddyPointLabel) == 0LL)
      || (UILabel__SetCondensedScale((UILabel_o *)v12, this->fields.pointLabelMaxWidth, 0LL),
          (v22 = this->fields.resultBuddyPointInfo) == 0LL) )
    {
LABEL_16:
      sub_B5D69C(v12, v13);
    }
    if ( BattleResultBuddyPointInfoComponent__IsRankUpBuddyRank(this, v22->fields.aftBuddyPoint, v21) )
      BattleResultBuddyPointInfoComponent__PlayBuddyRankUp(this, v23);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleResultBuddyPointInfoComponent__IsRankUpBuddyRank(
        BattleResultBuddyPointInfoComponent_o *this,
        int32_t buddyPoint,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  EventServantPointRankMaster_o *rankMaster; // x0
  struct EventServantPointRankMaster_o **p_rankMaster; // x21
  System_Int32_array **Master_WarQuestSelectionMaster; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct BattleBuddyPointInfo_o *resultBuddyPointInfo; // x8
  EventServantPointRankEntity_o *EnableEntity; // x0
  int32_t svtPointRank; // w8

  if ( (byte_42E88AC & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_EventServantPointRankMaster___, buddyPoint, (_DWORD)method, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v6, v7, v8);
    byte_42E88AC = 1;
  }
  p_rankMaster = &this->fields.rankMaster;
  rankMaster = this->fields.rankMaster;
  if ( !rankMaster )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    *p_rankMaster = (struct EventServantPointRankMaster_o *)Master_WarQuestSelectionMaster;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.rankMaster,
      Master_WarQuestSelectionMaster,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    rankMaster = *p_rankMaster;
  }
  resultBuddyPointInfo = this->fields.resultBuddyPointInfo;
  if ( !resultBuddyPointInfo || !rankMaster )
    sub_B5D69C(rankMaster, *(_QWORD *)&buddyPoint);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
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
  UnityEngine_GameObject_o *buddyPointRankUpObject; // x0
  Il2CppObject *v36; // x0
  System_String_o *v37; // x20
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_GameObject_o *v39; // x20
  UnityEngine_Transform_o *v40; // x21
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  UnityEngine_Object_o *v42; // x20
  Il2CppObject *v43; // x0
  System_String_o *v44; // x0
  UILabel_o *buddyPointRankLabel; // x20
  System_String_o *v46; // x21
  int32_t beforeBuddyRank; // [xsp+8h] [xbp-38h] BYREF
  int32_t buddyPointEventId; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E88AE & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AssetManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_Animation___, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v11, v12, v13);
    sub_B5D5C4(&int_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v20, v21, v22);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_5893/*"Effect/BattleResult/{0}"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_16943/*"bit_buddy_rankup"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_2413/*"BATTLE_BUDDY_POINT_RANK_{0}"*/, v32, v33, v34);
    byte_42E88AE = 1;
  }
  buddyPointRankUpObject = this->fields.buddyPointRankUpObject;
  if ( !buddyPointRankUpObject )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(buddyPointRankUpObject, 1, 0LL);
  buddyPointEventId = this->fields.buddyPointEventId;
  v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &buddyPointEventId);
  v37 = System_String__Format((System_String_o *)StringLiteral_5893/*"Effect/BattleResult/{0}"*/, v36, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)AssetManager__getAssetStorage(v37, 0LL);
  if ( !buddyPointRankUpObject )
    goto LABEL_29;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               (AssetData_o *)buddyPointRankUpObject,
                                                                               (System_String_o *)StringLiteral_16943/*"bit_buddy_rankup"*/,
                                                                               (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                         Object_WarBoardWaitTimeSetting,
                                                         (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !buddyPointRankUpObject )
    goto LABEL_29;
  v39 = buddyPointRankUpObject;
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                         buddyPointRankUpObject,
                                                         0LL);
  if ( !this->fields.buddyPointRankUpObject )
    goto LABEL_29;
  v40 = (UnityEngine_Transform_o *)buddyPointRankUpObject;
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                         this->fields.buddyPointRankUpObject,
                                                         0LL);
  if ( !v40 )
    goto LABEL_29;
  UnityEngine_Transform__SetParent(v40, (UnityEngine_Transform_o *)buddyPointRankUpObject, 0LL);
  zero = UnityEngine_Vector3__get_zero(0LL);
  UnityEngine_Transform__set_localPosition(v40, zero, 0LL);
  one = UnityEngine_Vector3__get_one(0LL);
  UnityEngine_Transform__set_localScale(v40, one, 0LL);
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v39,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  v42 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  v39,
                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                         Component_srcLineSprite,
                                                         0LL,
                                                         0LL);
  if ( ((unsigned __int8)buddyPointRankUpObject & 1) != 0 )
  {
    if ( !Component_srcLineSprite )
      goto LABEL_29;
    UnityEngine_Animation__Play_51249124(
      (UnityEngine_Animation_o *)Component_srcLineSprite,
      (System_String_o *)StringLiteral_16943/*"bit_buddy_rankup"*/,
      0LL);
  }
  else
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v42, 0LL, 0LL);
    if ( ((unsigned __int8)buddyPointRankUpObject & 1) != 0 )
    {
      if ( !v42 )
        goto LABEL_29;
      SimpleAnimation__Play_16676044((SimpleAnimation_o *)v42, (System_String_o *)StringLiteral_16943/*"bit_buddy_rankup"*/, 0LL);
    }
  }
  beforeBuddyRank = this->fields.beforeBuddyRank;
  v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &beforeBuddyRank);
  v44 = System_String__Format((System_String_o *)StringLiteral_2413/*"BATTLE_BUDDY_POINT_RANK_{0}"*/, v43, 0LL);
  buddyPointRankLabel = this->fields.buddyPointRankLabel;
  v46 = v44;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v46, 0LL);
  if ( !buddyPointRankLabel
    || (UILabel__set_text(buddyPointRankLabel, (System_String_o *)buddyPointRankUpObject, 0LL),
        (buddyPointRankUpObject = (UnityEngine_GameObject_o *)this->fields.buddyPointRankLabel) == 0LL) )
  {
LABEL_29:
    sub_B5D69C(buddyPointRankUpObject, method);
  }
  UILabel__SetCondensedScale((UILabel_o *)buddyPointRankUpObject, this->fields.pointLabelMaxWidth, 0LL);
}


void __fastcall BattleResultBuddyPointInfoComponent__SetBuddyPointInfo(
        BattleResultBuddyPointInfoComponent_o *this,
        BattleBuddyPointInfo_o *buddyPointInfo,
        int32_t eventId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  UnityEngine_GameObject_o *buddyPointRankUpObject; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct EventServantPointRankMaster_o *Master_WarQuestSelectionMaster; // x0
  struct EventServantPointRankMaster_o **p_rankMaster; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct BattleBuddyPointInfo_o *resultBuddyPointInfo; // x8
  EventServantPointRankEntity_o *EnableEntity; // x0
  int32_t svtPointRank; // w8

  if ( (byte_42E88A9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_EventServantPointRankMaster___, (_DWORD)buddyPointInfo, eventId, method);
    sub_B5D5C4(&DataManager_TypeInfo, v7, v8, v9);
    byte_42E88A9 = 1;
  }
  buddyPointRankUpObject = this->fields.buddyPointRankUpObject;
  if ( !buddyPointRankUpObject )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(buddyPointRankUpObject, 0, 0LL);
  this->fields.resultBuddyPointInfo = buddyPointInfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.resultBuddyPointInfo,
    (System_Int32_array **)buddyPointInfo,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  if ( !this->fields.resultBuddyPointInfo )
    return;
  this->fields.buddyPointEventId = eventId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (struct EventServantPointRankMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  this->fields.rankMaster = Master_WarQuestSelectionMaster;
  p_rankMaster = &this->fields.rankMaster;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.rankMaster,
    (System_Int32_array **)Master_WarQuestSelectionMaster,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  resultBuddyPointInfo = this->fields.resultBuddyPointInfo;
  if ( !resultBuddyPointInfo || (buddyPointRankUpObject = (UnityEngine_GameObject_o *)*p_rankMaster) == 0LL )
LABEL_15:
    sub_B5D69C(buddyPointRankUpObject, buddyPointInfo);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
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
  UnityEngine_GameObject_o *gameObject; // x19
  __int64 v33; // x0
  __int64 v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Object_array *v41; // x20
  __int64 v42; // x0
  System_Int32_array **v43; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **v50; // x21
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
  System_Int32_array **v64; // x21
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
  System_Int32_array **v85; // x1
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  System_Int32_array **v92; // x1
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  System_Int32_array **v99; // x1
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  System_Int32_array **v106; // x21
  System_Collections_Hashtable_o *v107; // x0
  __int64 v108; // x0
  __int64 v109; // x0
  int v110; // [xsp+4h] [xbp-2Ch] BYREF
  int v111; // [xsp+8h] [xbp-28h] BYREF
  int v112; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E88AA & 1) == 0 )
  {
    sub_B5D5C4(&object___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&float_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_19153/*"from"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_22982/*"time"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_21551/*"onupdate"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_23019/*"to"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_6760/*"FinishUpdateBuddyPoint"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_21542/*"oncomplete"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_15216/*"UpdateBuddyPointInfo"*/, v26, v27, v28);
    sub_B5D5C4(&iTween_TypeInfo, v29, v30, v31);
    byte_42E88AA = 1;
  }
  if ( this->fields.resultBuddyPointInfo )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v33 = sub_B5D5DC(object___TypeInfo, 10LL);
    if ( !v33 )
      sub_B5D69C(0LL, v34);
    v41 = (System_Object_array *)v33;
    v42 = StringLiteral_19153/*"from"*/;
    if ( StringLiteral_19153/*"from"*/ )
    {
      v42 = sub_B5D684(StringLiteral_19153/*"from"*/, v41->obj.klass->_1.element_class);
      if ( !v42 )
        goto LABEL_55;
      v43 = (System_Int32_array **)StringLiteral_19153/*"from"*/;
    }
    else
    {
      v43 = 0LL;
    }
    if ( !v41->max_length )
      goto LABEL_54;
    v41->m_Items[0] = (Il2CppObject *)v43;
    sub_B5D560((BattleServantConfConponent_o *)v41->m_Items, v43, v35, v36, v37, v38, v39, v40);
    v112 = 0;
    v42 = j_il2cpp_value_box_0(float_TypeInfo, &v112);
    v50 = (System_Int32_array **)v42;
    if ( !v42 || (v42 = sub_B5D684(v42, v41->obj.klass->_1.element_class)) != 0 )
    {
      if ( v41->max_length <= 1 )
        goto LABEL_54;
      v41->m_Items[1] = (Il2CppObject *)v50;
      sub_B5D560((BattleServantConfConponent_o *)&v41->m_Items[1], v50, v44, v45, v46, v47, v48, v49);
      v42 = StringLiteral_23019/*"to"*/;
      if ( StringLiteral_23019/*"to"*/ )
      {
        v42 = sub_B5D684(StringLiteral_23019/*"to"*/, v41->obj.klass->_1.element_class);
        if ( !v42 )
          goto LABEL_55;
        v57 = (System_Int32_array **)StringLiteral_23019/*"to"*/;
      }
      else
      {
        v57 = 0LL;
      }
      if ( v41->max_length <= 2 )
        goto LABEL_54;
      v41->m_Items[2] = (Il2CppObject *)v57;
      sub_B5D560((BattleServantConfConponent_o *)&v41->m_Items[2], v57, v51, v52, v53, v54, v55, v56);
      v111 = 1065353216;
      v42 = j_il2cpp_value_box_0(float_TypeInfo, &v111);
      v64 = (System_Int32_array **)v42;
      if ( !v42 || (v42 = sub_B5D684(v42, v41->obj.klass->_1.element_class)) != 0 )
      {
        if ( v41->max_length <= 3 )
          goto LABEL_54;
        v41->m_Items[3] = (Il2CppObject *)v64;
        sub_B5D560((BattleServantConfConponent_o *)&v41->m_Items[3], v64, v58, v59, v60, v61, v62, v63);
        v42 = StringLiteral_21551/*"onupdate"*/;
        if ( StringLiteral_21551/*"onupdate"*/ )
        {
          v42 = sub_B5D684(StringLiteral_21551/*"onupdate"*/, v41->obj.klass->_1.element_class);
          if ( !v42 )
            goto LABEL_55;
          v71 = (System_Int32_array **)StringLiteral_21551/*"onupdate"*/;
        }
        else
        {
          v71 = 0LL;
        }
        if ( v41->max_length <= 4 )
          goto LABEL_54;
        v41->m_Items[4] = (Il2CppObject *)v71;
        sub_B5D560((BattleServantConfConponent_o *)&v41->m_Items[4], v71, v65, v66, v67, v68, v69, v70);
        v42 = StringLiteral_15216/*"UpdateBuddyPointInfo"*/;
        if ( StringLiteral_15216/*"UpdateBuddyPointInfo"*/ )
        {
          v42 = sub_B5D684(StringLiteral_15216/*"UpdateBuddyPointInfo"*/, v41->obj.klass->_1.element_class);
          if ( !v42 )
            goto LABEL_55;
          v78 = (System_Int32_array **)StringLiteral_15216/*"UpdateBuddyPointInfo"*/;
        }
        else
        {
          v78 = 0LL;
        }
        if ( v41->max_length <= 5 )
          goto LABEL_54;
        v41->m_Items[5] = (Il2CppObject *)v78;
        sub_B5D560((BattleServantConfConponent_o *)&v41->m_Items[5], v78, v72, v73, v74, v75, v76, v77);
        v42 = StringLiteral_21542/*"oncomplete"*/;
        if ( StringLiteral_21542/*"oncomplete"*/ )
        {
          v42 = sub_B5D684(StringLiteral_21542/*"oncomplete"*/, v41->obj.klass->_1.element_class);
          if ( !v42 )
            goto LABEL_55;
          v85 = (System_Int32_array **)StringLiteral_21542/*"oncomplete"*/;
        }
        else
        {
          v85 = 0LL;
        }
        if ( v41->max_length <= 6 )
          goto LABEL_54;
        v41->m_Items[6] = (Il2CppObject *)v85;
        sub_B5D560((BattleServantConfConponent_o *)&v41->m_Items[6], v85, v79, v80, v81, v82, v83, v84);
        v42 = StringLiteral_6760/*"FinishUpdateBuddyPoint"*/;
        if ( StringLiteral_6760/*"FinishUpdateBuddyPoint"*/ )
        {
          v42 = sub_B5D684(StringLiteral_6760/*"FinishUpdateBuddyPoint"*/, v41->obj.klass->_1.element_class);
          if ( !v42 )
            goto LABEL_55;
          v92 = (System_Int32_array **)StringLiteral_6760/*"FinishUpdateBuddyPoint"*/;
        }
        else
        {
          v92 = 0LL;
        }
        if ( v41->max_length <= 7 )
          goto LABEL_54;
        v41->m_Items[7] = (Il2CppObject *)v92;
        sub_B5D560((BattleServantConfConponent_o *)&v41->m_Items[7], v92, v86, v87, v88, v89, v90, v91);
        v42 = StringLiteral_22982/*"time"*/;
        if ( StringLiteral_22982/*"time"*/ )
        {
          v42 = sub_B5D684(StringLiteral_22982/*"time"*/, v41->obj.klass->_1.element_class);
          if ( !v42 )
            goto LABEL_55;
          v99 = (System_Int32_array **)StringLiteral_22982/*"time"*/;
        }
        else
        {
          v99 = 0LL;
        }
        if ( v41->max_length <= 8 )
          goto LABEL_54;
        v41->m_Items[8] = (Il2CppObject *)v99;
        sub_B5D560((BattleServantConfConponent_o *)&v41->m_Items[8], v99, v93, v94, v95, v96, v97, v98);
        v110 = 1072064102;
        v42 = j_il2cpp_value_box_0(float_TypeInfo, &v110);
        v106 = (System_Int32_array **)v42;
        if ( !v42 || (v42 = sub_B5D684(v42, v41->obj.klass->_1.element_class)) != 0 )
        {
          if ( v41->max_length > 9 )
          {
            v41->m_Items[9] = (Il2CppObject *)v106;
            sub_B5D560((BattleServantConfConponent_o *)&v41->m_Items[9], v106, v100, v101, v102, v103, v104, v105);
            if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
            v107 = iTween__Hash(v41, 0LL);
            iTween__ValueTo(gameObject, v107, 0LL);
            return;
          }
LABEL_54:
          v108 = sub_B5D6C8(v42);
          sub_B5D668(v108, 0LL);
        }
      }
    }
LABEL_55:
    v109 = sub_B5D6BC(v42);
    sub_B5D668(v109, 0LL);
  }
}


void __fastcall BattleResultBuddyPointInfoComponent__UpdateBuddyPointInfo(
        BattleResultBuddyPointInfoComponent_o *this,
        float val,
        const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
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
  struct BattleBuddyPointInfo_o *resultBuddyPointInfo; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v21; // x1
  struct BattleBuddyPointInfo_o *v22; // x8
  int32_t befBuddyPoint; // w20
  int v24; // w8
  __int64 v25; // x23
  int v26; // w8
  UILabel_o *buddyPointLabel; // x20
  Il2CppObject *v28; // x21
  Il2CppObject *v29; // x0
  Il2CppObject *v30; // x0
  System_String_o *v31; // x0
  UILabel_o *buddyPointRankLabel; // x19
  System_String_o *v33; // x20
  int32_t beforeBuddyRank; // [xsp+Ch] [xbp-44h] BYREF
  __int64 v35; // [xsp+10h] [xbp-40h] BYREF
  int v36; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_42E88AB & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)method, v3, v4);
    sub_B5D5C4(&long_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_2413/*"BATTLE_BUDDY_POINT_RANK_{0}"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_23981/*"{0}（＋{1}）"*/, v16, v17, v18);
    byte_42E88AB = 1;
  }
  resultBuddyPointInfo = this->fields.resultBuddyPointInfo;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  if ( resultBuddyPointInfo )
  {
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    v22 = this->fields.resultBuddyPointInfo;
    if ( v22 )
    {
      befBuddyPoint = v22->fields.befBuddyPoint;
      v24 = v22->fields.aftBuddyPoint - befBuddyPoint;
      v25 = v24;
      v26 = BattleUtility__FloorToInt((float)v24 * val, 0LL) + befBuddyPoint;
      buddyPointLabel = this->fields.buddyPointLabel;
      if ( v26 >= 9999999 )
        v26 = 9999999;
      v36 = v26;
      v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36);
      v35 = v25;
      v29 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v35);
      gameObject = (UnityEngine_GameObject_o *)System_String__Format_44573324(
                                                 (System_String_o *)StringLiteral_23981/*"{0}（＋{1}）"*/,
                                                 v28,
                                                 v29,
                                                 0LL);
      if ( buddyPointLabel )
      {
        UILabel__set_text(buddyPointLabel, (System_String_o *)gameObject, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.buddyPointLabel;
        if ( gameObject )
        {
          UILabel__SetCondensedScale((UILabel_o *)gameObject, this->fields.pointLabelMaxWidth, 0LL);
          beforeBuddyRank = this->fields.beforeBuddyRank;
          v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &beforeBuddyRank);
          v31 = System_String__Format((System_String_o *)StringLiteral_2413/*"BATTLE_BUDDY_POINT_RANK_{0}"*/, v30, 0LL);
          buddyPointRankLabel = this->fields.buddyPointRankLabel;
          v33 = v31;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v33, 0LL);
          if ( buddyPointRankLabel )
          {
            UILabel__set_text(buddyPointRankLabel, (System_String_o *)gameObject, 0LL);
            return;
          }
        }
      }
    }
LABEL_16:
    sub_B5D69C(gameObject, v21);
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}