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
  struct BattleBuddyPointInfo_o *resultBuddyPointInfo; // x8
  int aftBuddyPoint; // w8
  int32_t befBuddyPoint; // w9
  UILabel_o *buddyPointLabel; // x20
  int v10; // w23
  Il2CppObject *v11; // x21
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  UILabel_o *v14; // x0
  const MethodInfo *v15; // x2
  struct BattleBuddyPointInfo_o *v16; // x8
  const MethodInfo *v17; // x1
  int v18; // [xsp+8h] [xbp-28h] BYREF
  int v19; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FA34A & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, method);
    sub_B16FFC(&StringLiteral_23575/*"{0}（＋{1}）"*/, v3);
    sub_B16FFC(&iTween_TypeInfo, v4);
    byte_40FA34A = 1;
  }
  if ( this->fields.resultBuddyPointInfo )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__Stop_18552136(gameObject, 0LL);
    resultBuddyPointInfo = this->fields.resultBuddyPointInfo;
    if ( !resultBuddyPointInfo )
      goto LABEL_16;
    befBuddyPoint = resultBuddyPointInfo->fields.befBuddyPoint;
    aftBuddyPoint = resultBuddyPointInfo->fields.aftBuddyPoint;
    buddyPointLabel = this->fields.buddyPointLabel;
    v10 = aftBuddyPoint - befBuddyPoint;
    if ( aftBuddyPoint >= 9999999 )
      aftBuddyPoint = 9999999;
    v19 = aftBuddyPoint;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
    v18 = v10;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
    v13 = System_String__Format_43739268((System_String_o *)StringLiteral_23575/*"{0}（＋{1}）"*/, v11, v12, 0LL);
    if ( !buddyPointLabel
      || (UILabel__set_text(buddyPointLabel, v13, 0LL), (v14 = this->fields.buddyPointLabel) == 0LL)
      || (UILabel__SetCondensedScale(v14, this->fields.pointLabelMaxWidth, 0LL),
          (v16 = this->fields.resultBuddyPointInfo) == 0LL) )
    {
LABEL_16:
      sub_B170D4();
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

  if ( (byte_40FA349 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_EventServantPointRankMaster___, *(_QWORD *)&buddyPoint);
    sub_B16FFC(&DataManager_TypeInfo, v5);
    byte_40FA349 = 1;
  }
  p_rankMaster = &this->fields.rankMaster;
  rankMaster = this->fields.rankMaster;
  if ( !rankMaster )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    *p_rankMaster = (struct EventServantPointRankMaster_o *)Master_WarQuestSelectionMaster;
    sub_B16F98(
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
    sub_B170D4();
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
  AssetData_o *AssetStorage; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_GameObject_o *v18; // x0
  UnityEngine_GameObject_o *v19; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v21; // x21
  UnityEngine_Transform_o *v22; // x0
  UnityEngine_Animation_o *Component_srcLineSprite; // x21
  SimpleAnimation_o *v24; // x20
  Il2CppObject *v25; // x0
  System_String_o *v26; // x0
  UILabel_o *buddyPointRankLabel; // x20
  System_String_o *v28; // x21
  System_String_o *v29; // x0
  UILabel_o *v30; // x0
  int32_t beforeBuddyRank; // [xsp+8h] [xbp-38h] BYREF
  int32_t buddyPointEventId; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FA34B & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, method);
    sub_B16FFC(&AssetManager_TypeInfo, v3);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_Animation___, v4);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v5);
    sub_B16FFC(&int_TypeInfo, v6);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_5798/*"Effect/BattleResult/{0}"*/, v10);
    sub_B16FFC(&StringLiteral_16673/*"bit_buddy_rankup"*/, v11);
    sub_B16FFC(&StringLiteral_2364/*"BATTLE_BUDDY_POINT_RANK_{0}"*/, v12);
    byte_40FA34B = 1;
  }
  buddyPointRankUpObject = this->fields.buddyPointRankUpObject;
  if ( !buddyPointRankUpObject )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(buddyPointRankUpObject, 1, 0LL);
  buddyPointEventId = this->fields.buddyPointEventId;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &buddyPointEventId);
  v15 = System_String__Format((System_String_o *)StringLiteral_5798/*"Effect/BattleResult/{0}"*/, v14, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(v15, 0LL);
  if ( !AssetStorage )
    goto LABEL_29;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               AssetStorage,
                                                                               (System_String_o *)StringLiteral_16673/*"bit_buddy_rankup"*/,
                                                                               (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v18 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      Object_WarBoardWaitTimeSetting,
                                      (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v18 )
    goto LABEL_29;
  v19 = v18;
  transform = UnityEngine_GameObject__get_transform(v18, 0LL);
  if ( !this->fields.buddyPointRankUpObject )
    goto LABEL_29;
  v21 = transform;
  v22 = UnityEngine_GameObject__get_transform(this->fields.buddyPointRankUpObject, 0LL);
  if ( !v21 )
    goto LABEL_29;
  UnityEngine_Transform__SetParent(v21, v22, 0LL);
  zero = UnityEngine_Vector3__get_zero(0LL);
  UnityEngine_Transform__set_localPosition(v21, zero, 0LL);
  one = UnityEngine_Vector3__get_one(0LL);
  UnityEngine_Transform__set_localScale(v21, one, 0LL);
  Component_srcLineSprite = (UnityEngine_Animation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         v19,
                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  v24 = (SimpleAnimation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                               v19,
                               (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
  {
    if ( !Component_srcLineSprite )
      goto LABEL_29;
    UnityEngine_Animation__Play_49744236(Component_srcLineSprite, (System_String_o *)StringLiteral_16673/*"bit_buddy_rankup"*/, 0LL);
  }
  else
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v24, 0LL, 0LL) )
    {
      if ( !v24 )
        goto LABEL_29;
      SimpleAnimation__Play_16380456(v24, (System_String_o *)StringLiteral_16673/*"bit_buddy_rankup"*/, 0LL);
    }
  }
  beforeBuddyRank = this->fields.beforeBuddyRank;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &beforeBuddyRank);
  v26 = System_String__Format((System_String_o *)StringLiteral_2364/*"BATTLE_BUDDY_POINT_RANK_{0}"*/, v25, 0LL);
  buddyPointRankLabel = this->fields.buddyPointRankLabel;
  v28 = v26;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v29 = LocalizationManager__Get(v28, 0LL);
  if ( !buddyPointRankLabel
    || (UILabel__set_text(buddyPointRankLabel, v29, 0LL), (v30 = this->fields.buddyPointRankLabel) == 0LL) )
  {
LABEL_29:
    sub_B170D4();
  }
  UILabel__SetCondensedScale(v30, this->fields.pointLabelMaxWidth, 0LL);
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
  EventServantPointRankMaster_o **p_rankMaster; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct BattleBuddyPointInfo_o *resultBuddyPointInfo; // x8
  EventServantPointRankEntity_o *EnableEntity; // x0
  int32_t svtPointRank; // w8

  if ( (byte_40FA346 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_EventServantPointRankMaster___, buddyPointInfo);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    byte_40FA346 = 1;
  }
  buddyPointRankUpObject = this->fields.buddyPointRankUpObject;
  if ( !buddyPointRankUpObject )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(buddyPointRankUpObject, 0, 0LL);
  this->fields.resultBuddyPointInfo = buddyPointInfo;
  sub_B16F98(
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
  Master_WarQuestSelectionMaster = (struct EventServantPointRankMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  this->fields.rankMaster = Master_WarQuestSelectionMaster;
  p_rankMaster = &this->fields.rankMaster;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.rankMaster,
    (System_Int32_array **)Master_WarQuestSelectionMaster,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  resultBuddyPointInfo = this->fields.resultBuddyPointInfo;
  if ( !resultBuddyPointInfo || !*p_rankMaster )
LABEL_15:
    sub_B170D4();
  EnableEntity = EventServantPointRankMaster__GetEnableEntity(
                   *p_rankMaster,
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
  __int64 v13; // x2
  __int64 v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Object_array *v21; // x20
  __int64 v22; // x0
  System_Int32_array **v23; // x1
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x21
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **v40; // x21
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_Int32_array **v71; // x21
  System_Collections_Hashtable_o *v72; // x0
  int v73; // [xsp+4h] [xbp-2Ch] BYREF
  int v74; // [xsp+8h] [xbp-28h] BYREF
  int v75; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FA347 & 1) == 0 )
  {
    sub_B16FFC(&object___TypeInfo, method);
    sub_B16FFC(&float_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_18842/*"from"*/, v4);
    sub_B16FFC(&StringLiteral_22584/*"time"*/, v5);
    sub_B16FFC(&StringLiteral_21182/*"onupdate"*/, v6);
    sub_B16FFC(&StringLiteral_22621/*"to"*/, v7);
    sub_B16FFC(&StringLiteral_6656/*"FinishUpdateBuddyPoint"*/, v8);
    sub_B16FFC(&StringLiteral_21173/*"oncomplete"*/, v9);
    sub_B16FFC(&StringLiteral_14998/*"UpdateBuddyPointInfo"*/, v10);
    sub_B16FFC(&iTween_TypeInfo, v11);
    byte_40FA347 = 1;
  }
  if ( this->fields.resultBuddyPointInfo )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v14 = sub_B17014(object___TypeInfo, 10LL, v13);
    if ( !v14 )
      sub_B170D4();
    v21 = (System_Object_array *)v14;
    v22 = StringLiteral_18842/*"from"*/;
    if ( StringLiteral_18842/*"from"*/ )
    {
      v22 = sub_B170BC(StringLiteral_18842/*"from"*/, v21->obj.klass->_1.element_class);
      if ( !v22 )
        goto LABEL_55;
      v23 = (System_Int32_array **)StringLiteral_18842/*"from"*/;
    }
    else
    {
      v23 = 0LL;
    }
    if ( !v21->max_length )
      goto LABEL_54;
    v21->m_Items[0] = (Il2CppObject *)v23;
    sub_B16F98((BattleServantConfConponent_o *)v21->m_Items, v23, v15, v16, v17, v18, v19, v20);
    v75 = 0;
    v22 = j_il2cpp_value_box_0(float_TypeInfo, &v75);
    v29 = (System_Int32_array **)v22;
    if ( !v22 || (v22 = sub_B170BC(v22, v21->obj.klass->_1.element_class)) != 0 )
    {
      if ( v21->max_length <= 1 )
        goto LABEL_54;
      v21->m_Items[1] = (Il2CppObject *)v29;
      sub_B16F98((BattleServantConfConponent_o *)&v21->m_Items[1], v29, v15, v24, v25, v26, v27, v28);
      v22 = StringLiteral_22621/*"to"*/;
      if ( StringLiteral_22621/*"to"*/ )
      {
        v22 = sub_B170BC(StringLiteral_22621/*"to"*/, v21->obj.klass->_1.element_class);
        if ( !v22 )
          goto LABEL_55;
        v23 = (System_Int32_array **)StringLiteral_22621/*"to"*/;
      }
      else
      {
        v23 = 0LL;
      }
      if ( v21->max_length <= 2 )
        goto LABEL_54;
      v21->m_Items[2] = (Il2CppObject *)v23;
      sub_B16F98((BattleServantConfConponent_o *)&v21->m_Items[2], v23, v15, v30, v31, v32, v33, v34);
      v74 = 1065353216;
      v22 = j_il2cpp_value_box_0(float_TypeInfo, &v74);
      v40 = (System_Int32_array **)v22;
      if ( !v22 || (v22 = sub_B170BC(v22, v21->obj.klass->_1.element_class)) != 0 )
      {
        if ( v21->max_length <= 3 )
          goto LABEL_54;
        v21->m_Items[3] = (Il2CppObject *)v40;
        sub_B16F98((BattleServantConfConponent_o *)&v21->m_Items[3], v40, v15, v35, v36, v37, v38, v39);
        v22 = StringLiteral_21182/*"onupdate"*/;
        if ( StringLiteral_21182/*"onupdate"*/ )
        {
          v22 = sub_B170BC(StringLiteral_21182/*"onupdate"*/, v21->obj.klass->_1.element_class);
          if ( !v22 )
            goto LABEL_55;
          v23 = (System_Int32_array **)StringLiteral_21182/*"onupdate"*/;
        }
        else
        {
          v23 = 0LL;
        }
        if ( v21->max_length <= 4 )
          goto LABEL_54;
        v21->m_Items[4] = (Il2CppObject *)v23;
        sub_B16F98((BattleServantConfConponent_o *)&v21->m_Items[4], v23, v15, v41, v42, v43, v44, v45);
        v22 = StringLiteral_14998/*"UpdateBuddyPointInfo"*/;
        if ( StringLiteral_14998/*"UpdateBuddyPointInfo"*/ )
        {
          v22 = sub_B170BC(StringLiteral_14998/*"UpdateBuddyPointInfo"*/, v21->obj.klass->_1.element_class);
          if ( !v22 )
            goto LABEL_55;
          v23 = (System_Int32_array **)StringLiteral_14998/*"UpdateBuddyPointInfo"*/;
        }
        else
        {
          v23 = 0LL;
        }
        if ( v21->max_length <= 5 )
          goto LABEL_54;
        v21->m_Items[5] = (Il2CppObject *)v23;
        sub_B16F98((BattleServantConfConponent_o *)&v21->m_Items[5], v23, v15, v46, v47, v48, v49, v50);
        v22 = StringLiteral_21173/*"oncomplete"*/;
        if ( StringLiteral_21173/*"oncomplete"*/ )
        {
          v22 = sub_B170BC(StringLiteral_21173/*"oncomplete"*/, v21->obj.klass->_1.element_class);
          if ( !v22 )
            goto LABEL_55;
          v23 = (System_Int32_array **)StringLiteral_21173/*"oncomplete"*/;
        }
        else
        {
          v23 = 0LL;
        }
        if ( v21->max_length <= 6 )
          goto LABEL_54;
        v21->m_Items[6] = (Il2CppObject *)v23;
        sub_B16F98((BattleServantConfConponent_o *)&v21->m_Items[6], v23, v15, v51, v52, v53, v54, v55);
        v22 = StringLiteral_6656/*"FinishUpdateBuddyPoint"*/;
        if ( StringLiteral_6656/*"FinishUpdateBuddyPoint"*/ )
        {
          v22 = sub_B170BC(StringLiteral_6656/*"FinishUpdateBuddyPoint"*/, v21->obj.klass->_1.element_class);
          if ( !v22 )
            goto LABEL_55;
          v23 = (System_Int32_array **)StringLiteral_6656/*"FinishUpdateBuddyPoint"*/;
        }
        else
        {
          v23 = 0LL;
        }
        if ( v21->max_length <= 7 )
          goto LABEL_54;
        v21->m_Items[7] = (Il2CppObject *)v23;
        sub_B16F98((BattleServantConfConponent_o *)&v21->m_Items[7], v23, v15, v56, v57, v58, v59, v60);
        v22 = StringLiteral_22584/*"time"*/;
        if ( StringLiteral_22584/*"time"*/ )
        {
          v22 = sub_B170BC(StringLiteral_22584/*"time"*/, v21->obj.klass->_1.element_class);
          if ( !v22 )
            goto LABEL_55;
          v23 = (System_Int32_array **)StringLiteral_22584/*"time"*/;
        }
        else
        {
          v23 = 0LL;
        }
        if ( v21->max_length <= 8 )
          goto LABEL_54;
        v21->m_Items[8] = (Il2CppObject *)v23;
        sub_B16F98((BattleServantConfConponent_o *)&v21->m_Items[8], v23, v15, v61, v62, v63, v64, v65);
        v73 = 1072064102;
        v22 = j_il2cpp_value_box_0(float_TypeInfo, &v73);
        v71 = (System_Int32_array **)v22;
        if ( !v22 || (v22 = sub_B170BC(v22, v21->obj.klass->_1.element_class)) != 0 )
        {
          if ( v21->max_length > 9 )
          {
            v21->m_Items[9] = (Il2CppObject *)v71;
            sub_B16F98((BattleServantConfConponent_o *)&v21->m_Items[9], v71, v15, v66, v67, v68, v69, v70);
            if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
            v72 = iTween__Hash(v21, 0LL);
            iTween__ValueTo(gameObject, v72, 0LL);
            return;
          }
LABEL_54:
          sub_B17100(v22, v23, v15);
          sub_B170A0();
        }
      }
    }
LABEL_55:
    sub_B170F4(v22);
    sub_B170A0();
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
  System_String_o *v19; // x0
  UILabel_o *v20; // x0
  Il2CppObject *v21; // x0
  System_String_o *v22; // x0
  UILabel_o *buddyPointRankLabel; // x19
  System_String_o *v24; // x20
  System_String_o *v25; // x0
  int32_t beforeBuddyRank; // [xsp+Ch] [xbp-44h] BYREF
  __int64 v27; // [xsp+10h] [xbp-40h] BYREF
  int v28; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_40FA348 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, method);
    sub_B16FFC(&long_TypeInfo, v5);
    sub_B16FFC(&LocalizationManager_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_2364/*"BATTLE_BUDDY_POINT_RANK_{0}"*/, v7);
    sub_B16FFC(&StringLiteral_23575/*"{0}（＋{1}）"*/, v8);
    byte_40FA348 = 1;
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
      v28 = v15;
      v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
      v27 = v14;
      v18 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v27);
      v19 = System_String__Format_43739268((System_String_o *)StringLiteral_23575/*"{0}（＋{1}）"*/, v17, v18, 0LL);
      if ( buddyPointLabel )
      {
        UILabel__set_text(buddyPointLabel, v19, 0LL);
        v20 = this->fields.buddyPointLabel;
        if ( v20 )
        {
          UILabel__SetCondensedScale(v20, this->fields.pointLabelMaxWidth, 0LL);
          beforeBuddyRank = this->fields.beforeBuddyRank;
          v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &beforeBuddyRank);
          v22 = System_String__Format((System_String_o *)StringLiteral_2364/*"BATTLE_BUDDY_POINT_RANK_{0}"*/, v21, 0LL);
          buddyPointRankLabel = this->fields.buddyPointRankLabel;
          v24 = v22;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v25 = LocalizationManager__Get(v24, 0LL);
          if ( buddyPointRankLabel )
          {
            UILabel__set_text(buddyPointRankLabel, v25, 0LL);
            return;
          }
        }
      }
    }
LABEL_16:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}