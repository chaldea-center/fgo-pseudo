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
  struct BattleBuddyPointInfo_o *resultBuddyPointInfo; // x8
  int aftBuddyPoint; // w8
  int32_t befBuddyPoint; // w9
  UILabel_o *buddyPointLabel; // x20
  int v10; // w23
  Il2CppObject *v11; // x21
  Il2CppObject *v12; // x0
  const MethodInfo *v13; // x2
  struct BattleBuddyPointInfo_o *v14; // x8
  const MethodInfo *v15; // x1
  int v16; // [xsp+8h] [xbp-28h] BYREF
  int v17; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42B0244 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&StringLiteral_23863/*"{0}（＋{1}）"*/);
    sub_B52984(&iTween_TypeInfo);
    byte_42B0244 = 1;
  }
  if ( this->fields.resultBuddyPointInfo )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__Stop_43341232(gameObject, 0LL);
    resultBuddyPointInfo = this->fields.resultBuddyPointInfo;
    if ( !resultBuddyPointInfo )
      goto LABEL_16;
    befBuddyPoint = resultBuddyPointInfo->fields.befBuddyPoint;
    aftBuddyPoint = resultBuddyPointInfo->fields.aftBuddyPoint;
    buddyPointLabel = this->fields.buddyPointLabel;
    v10 = aftBuddyPoint - befBuddyPoint;
    if ( aftBuddyPoint >= 9999999 )
      aftBuddyPoint = 9999999;
    v17 = aftBuddyPoint;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
    v16 = v10;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
    v4 = System_String__Format_44563852((System_String_o *)StringLiteral_23863/*"{0}（＋{1}）"*/, v11, v12, 0LL);
    if ( !buddyPointLabel
      || (UILabel__set_text(buddyPointLabel, v4, 0LL), (v4 = (System_String_o *)this->fields.buddyPointLabel) == 0LL)
      || (UILabel__SetCondensedScale((UILabel_o *)v4, this->fields.pointLabelMaxWidth, 0LL),
          (v14 = this->fields.resultBuddyPointInfo) == 0LL) )
    {
LABEL_16:
      sub_B52A5C(v4, v5);
    }
    if ( BattleResultBuddyPointInfoComponent__IsRankUpBuddyRank(this, v14->fields.aftBuddyPoint, v13) )
      BattleResultBuddyPointInfoComponent__PlayBuddyRankUp(this, v15);
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

  if ( (byte_42B0243 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_B52984(&DataManager_TypeInfo);
    byte_42B0243 = 1;
  }
  p_rankMaster = &this->fields.rankMaster;
  rankMaster = this->fields.rankMaster;
  if ( !rankMaster )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    *p_rankMaster = (struct EventServantPointRankMaster_o *)Master_WarQuestSelectionMaster;
    sub_B52920(
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
    sub_B52A5C(rankMaster, *(_QWORD *)&buddyPoint);
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
  Il2CppObject *v4; // x0
  System_String_o *v5; // x20
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_GameObject_o *v7; // x20
  UnityEngine_Transform_o *v8; // x21
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  UnityEngine_Object_o *v10; // x20
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  UILabel_o *buddyPointRankLabel; // x20
  System_String_o *v14; // x21
  int32_t beforeBuddyRank; // [xsp+8h] [xbp-38h] BYREF
  int32_t buddyPointEventId; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42B0245 & 1) == 0 )
  {
    sub_B52984(&Method_AssetData_GetObject_GameObject____68579952);
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_5857/*"Effect/BattleResult/{0}"*/);
    sub_B52984(&StringLiteral_16852/*"bit_buddy_rankup"*/);
    sub_B52984(&StringLiteral_2405/*"BATTLE_BUDDY_POINT_RANK_{0}"*/);
    byte_42B0245 = 1;
  }
  buddyPointRankUpObject = this->fields.buddyPointRankUpObject;
  if ( !buddyPointRankUpObject )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(buddyPointRankUpObject, 1, 0LL);
  buddyPointEventId = this->fields.buddyPointEventId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &buddyPointEventId);
  v5 = System_String__Format((System_String_o *)StringLiteral_5857/*"Effect/BattleResult/{0}"*/, v4, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)AssetManager__getAssetStorage(v5, 0LL);
  if ( !buddyPointRankUpObject )
    goto LABEL_29;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               (AssetData_o *)buddyPointRankUpObject,
                                                                               (System_String_o *)StringLiteral_16852/*"bit_buddy_rankup"*/,
                                                                               (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_GameObject____68579952);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                         Object_WarBoardWaitTimeSetting,
                                                         (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !buddyPointRankUpObject )
    goto LABEL_29;
  v7 = buddyPointRankUpObject;
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                         buddyPointRankUpObject,
                                                         0LL);
  if ( !this->fields.buddyPointRankUpObject )
    goto LABEL_29;
  v8 = (UnityEngine_Transform_o *)buddyPointRankUpObject;
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                         this->fields.buddyPointRankUpObject,
                                                         0LL);
  if ( !v8 )
    goto LABEL_29;
  UnityEngine_Transform__SetParent(v8, (UnityEngine_Transform_o *)buddyPointRankUpObject, 0LL);
  zero = UnityEngine_Vector3__get_zero(0LL);
  UnityEngine_Transform__set_localPosition(v8, zero, 0LL);
  one = UnityEngine_Vector3__get_one(0LL);
  UnityEngine_Transform__set_localScale(v8, one, 0LL);
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v7,
                                                      (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  v10 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  v7,
                                  (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                         Component_srcLineSprite,
                                                         0LL,
                                                         0LL);
  if ( ((unsigned __int8)buddyPointRankUpObject & 1) != 0 )
  {
    if ( !Component_srcLineSprite )
      goto LABEL_29;
    UnityEngine_Animation__Play_51067744(
      (UnityEngine_Animation_o *)Component_srcLineSprite,
      (System_String_o *)StringLiteral_16852/*"bit_buddy_rankup"*/,
      0LL);
  }
  else
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v10, 0LL, 0LL);
    if ( ((unsigned __int8)buddyPointRankUpObject & 1) != 0 )
    {
      if ( !v10 )
        goto LABEL_29;
      SimpleAnimation__Play_16625408((SimpleAnimation_o *)v10, (System_String_o *)StringLiteral_16852/*"bit_buddy_rankup"*/, 0LL);
    }
  }
  beforeBuddyRank = this->fields.beforeBuddyRank;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &beforeBuddyRank);
  v12 = System_String__Format((System_String_o *)StringLiteral_2405/*"BATTLE_BUDDY_POINT_RANK_{0}"*/, v11, 0LL);
  buddyPointRankLabel = this->fields.buddyPointRankLabel;
  v14 = v12;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v14, 0LL);
  if ( !buddyPointRankLabel
    || (UILabel__set_text(buddyPointRankLabel, (System_String_o *)buddyPointRankUpObject, 0LL),
        (buddyPointRankUpObject = (UnityEngine_GameObject_o *)this->fields.buddyPointRankLabel) == 0LL) )
  {
LABEL_29:
    sub_B52A5C(buddyPointRankUpObject, method);
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

  if ( (byte_42B0240 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_B52984(&DataManager_TypeInfo);
    byte_42B0240 = 1;
  }
  buddyPointRankUpObject = this->fields.buddyPointRankUpObject;
  if ( !buddyPointRankUpObject )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(buddyPointRankUpObject, 0, 0LL);
  this->fields.resultBuddyPointInfo = buddyPointInfo;
  sub_B52920(
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
  Master_WarQuestSelectionMaster = (struct EventServantPointRankMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  this->fields.rankMaster = Master_WarQuestSelectionMaster;
  p_rankMaster = &this->fields.rankMaster;
  sub_B52920(
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
    sub_B52A5C(buddyPointRankUpObject, buddyPointInfo);
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
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Int32_array **v21; // x21
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array **v35; // x21
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x1
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Int32_array **v49; // x1
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Int32_array **v56; // x1
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_Int32_array **v63; // x1
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_Int32_array **v70; // x1
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_Int32_array **v77; // x21
  System_Collections_Hashtable_o *v78; // x0
  __int64 v79; // x0
  __int64 v80; // x0
  int v81; // [xsp+4h] [xbp-2Ch] BYREF
  int v82; // [xsp+8h] [xbp-28h] BYREF
  int v83; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42B0241 & 1) == 0 )
  {
    sub_B52984(&object___TypeInfo);
    sub_B52984(&float_TypeInfo);
    sub_B52984(&StringLiteral_19056/*"from"*/);
    sub_B52984(&StringLiteral_22867/*"time"*/);
    sub_B52984(&StringLiteral_21442/*"onupdate"*/);
    sub_B52984(&StringLiteral_22904/*"to"*/);
    sub_B52984(&StringLiteral_6724/*"FinishUpdateBuddyPoint"*/);
    sub_B52984(&StringLiteral_21433/*"oncomplete"*/);
    sub_B52984(&StringLiteral_15157/*"UpdateBuddyPointInfo"*/);
    sub_B52984(&iTween_TypeInfo);
    byte_42B0241 = 1;
  }
  if ( this->fields.resultBuddyPointInfo )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v4 = sub_B5299C(object___TypeInfo, 10LL);
    if ( !v4 )
      sub_B52A5C(0LL, v5);
    v12 = (System_Object_array *)v4;
    v13 = StringLiteral_19056/*"from"*/;
    if ( StringLiteral_19056/*"from"*/ )
    {
      v13 = sub_B52A44(StringLiteral_19056/*"from"*/, v12->obj.klass->_1.element_class);
      if ( !v13 )
        goto LABEL_55;
      v14 = (System_Int32_array **)StringLiteral_19056/*"from"*/;
    }
    else
    {
      v14 = 0LL;
    }
    if ( !v12->max_length )
      goto LABEL_54;
    v12->m_Items[0] = (Il2CppObject *)v14;
    sub_B52920((BattleServantConfConponent_o *)v12->m_Items, v14, v6, v7, v8, v9, v10, v11);
    v83 = 0;
    v13 = j_il2cpp_value_box_0(float_TypeInfo, &v83);
    v21 = (System_Int32_array **)v13;
    if ( !v13 || (v13 = sub_B52A44(v13, v12->obj.klass->_1.element_class)) != 0 )
    {
      if ( v12->max_length <= 1 )
        goto LABEL_54;
      v12->m_Items[1] = (Il2CppObject *)v21;
      sub_B52920((BattleServantConfConponent_o *)&v12->m_Items[1], v21, v15, v16, v17, v18, v19, v20);
      v13 = StringLiteral_22904/*"to"*/;
      if ( StringLiteral_22904/*"to"*/ )
      {
        v13 = sub_B52A44(StringLiteral_22904/*"to"*/, v12->obj.klass->_1.element_class);
        if ( !v13 )
          goto LABEL_55;
        v28 = (System_Int32_array **)StringLiteral_22904/*"to"*/;
      }
      else
      {
        v28 = 0LL;
      }
      if ( v12->max_length <= 2 )
        goto LABEL_54;
      v12->m_Items[2] = (Il2CppObject *)v28;
      sub_B52920((BattleServantConfConponent_o *)&v12->m_Items[2], v28, v22, v23, v24, v25, v26, v27);
      v82 = 1065353216;
      v13 = j_il2cpp_value_box_0(float_TypeInfo, &v82);
      v35 = (System_Int32_array **)v13;
      if ( !v13 || (v13 = sub_B52A44(v13, v12->obj.klass->_1.element_class)) != 0 )
      {
        if ( v12->max_length <= 3 )
          goto LABEL_54;
        v12->m_Items[3] = (Il2CppObject *)v35;
        sub_B52920((BattleServantConfConponent_o *)&v12->m_Items[3], v35, v29, v30, v31, v32, v33, v34);
        v13 = StringLiteral_21442/*"onupdate"*/;
        if ( StringLiteral_21442/*"onupdate"*/ )
        {
          v13 = sub_B52A44(StringLiteral_21442/*"onupdate"*/, v12->obj.klass->_1.element_class);
          if ( !v13 )
            goto LABEL_55;
          v42 = (System_Int32_array **)StringLiteral_21442/*"onupdate"*/;
        }
        else
        {
          v42 = 0LL;
        }
        if ( v12->max_length <= 4 )
          goto LABEL_54;
        v12->m_Items[4] = (Il2CppObject *)v42;
        sub_B52920((BattleServantConfConponent_o *)&v12->m_Items[4], v42, v36, v37, v38, v39, v40, v41);
        v13 = StringLiteral_15157/*"UpdateBuddyPointInfo"*/;
        if ( StringLiteral_15157/*"UpdateBuddyPointInfo"*/ )
        {
          v13 = sub_B52A44(StringLiteral_15157/*"UpdateBuddyPointInfo"*/, v12->obj.klass->_1.element_class);
          if ( !v13 )
            goto LABEL_55;
          v49 = (System_Int32_array **)StringLiteral_15157/*"UpdateBuddyPointInfo"*/;
        }
        else
        {
          v49 = 0LL;
        }
        if ( v12->max_length <= 5 )
          goto LABEL_54;
        v12->m_Items[5] = (Il2CppObject *)v49;
        sub_B52920((BattleServantConfConponent_o *)&v12->m_Items[5], v49, v43, v44, v45, v46, v47, v48);
        v13 = StringLiteral_21433/*"oncomplete"*/;
        if ( StringLiteral_21433/*"oncomplete"*/ )
        {
          v13 = sub_B52A44(StringLiteral_21433/*"oncomplete"*/, v12->obj.klass->_1.element_class);
          if ( !v13 )
            goto LABEL_55;
          v56 = (System_Int32_array **)StringLiteral_21433/*"oncomplete"*/;
        }
        else
        {
          v56 = 0LL;
        }
        if ( v12->max_length <= 6 )
          goto LABEL_54;
        v12->m_Items[6] = (Il2CppObject *)v56;
        sub_B52920((BattleServantConfConponent_o *)&v12->m_Items[6], v56, v50, v51, v52, v53, v54, v55);
        v13 = StringLiteral_6724/*"FinishUpdateBuddyPoint"*/;
        if ( StringLiteral_6724/*"FinishUpdateBuddyPoint"*/ )
        {
          v13 = sub_B52A44(StringLiteral_6724/*"FinishUpdateBuddyPoint"*/, v12->obj.klass->_1.element_class);
          if ( !v13 )
            goto LABEL_55;
          v63 = (System_Int32_array **)StringLiteral_6724/*"FinishUpdateBuddyPoint"*/;
        }
        else
        {
          v63 = 0LL;
        }
        if ( v12->max_length <= 7 )
          goto LABEL_54;
        v12->m_Items[7] = (Il2CppObject *)v63;
        sub_B52920((BattleServantConfConponent_o *)&v12->m_Items[7], v63, v57, v58, v59, v60, v61, v62);
        v13 = StringLiteral_22867/*"time"*/;
        if ( StringLiteral_22867/*"time"*/ )
        {
          v13 = sub_B52A44(StringLiteral_22867/*"time"*/, v12->obj.klass->_1.element_class);
          if ( !v13 )
            goto LABEL_55;
          v70 = (System_Int32_array **)StringLiteral_22867/*"time"*/;
        }
        else
        {
          v70 = 0LL;
        }
        if ( v12->max_length <= 8 )
          goto LABEL_54;
        v12->m_Items[8] = (Il2CppObject *)v70;
        sub_B52920((BattleServantConfConponent_o *)&v12->m_Items[8], v70, v64, v65, v66, v67, v68, v69);
        v81 = 1072064102;
        v13 = j_il2cpp_value_box_0(float_TypeInfo, &v81);
        v77 = (System_Int32_array **)v13;
        if ( !v13 || (v13 = sub_B52A44(v13, v12->obj.klass->_1.element_class)) != 0 )
        {
          if ( v12->max_length > 9 )
          {
            v12->m_Items[9] = (Il2CppObject *)v77;
            sub_B52920((BattleServantConfConponent_o *)&v12->m_Items[9], v77, v71, v72, v73, v74, v75, v76);
            if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
            v78 = iTween__Hash(v12, 0LL);
            iTween__ValueTo(gameObject, v78, 0LL);
            return;
          }
LABEL_54:
          v79 = sub_B52A88(v13);
          sub_B52A28(v79, 0LL);
        }
      }
    }
LABEL_55:
    v80 = sub_B52A7C(v13);
    sub_B52A28(v80, 0LL);
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
  int v12; // w8
  UILabel_o *buddyPointLabel; // x20
  Il2CppObject *v14; // x21
  Il2CppObject *v15; // x0
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  UILabel_o *buddyPointRankLabel; // x19
  System_String_o *v19; // x20
  int32_t beforeBuddyRank; // [xsp+Ch] [xbp-44h] BYREF
  __int64 v21; // [xsp+10h] [xbp-40h] BYREF
  int v22; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_42B0242 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&long_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_2405/*"BATTLE_BUDDY_POINT_RANK_{0}"*/);
    sub_B52984(&StringLiteral_23863/*"{0}（＋{1}）"*/);
    byte_42B0242 = 1;
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
      v12 = BattleUtility__FloorToInt((float)v10 * val, 0LL) + befBuddyPoint;
      buddyPointLabel = this->fields.buddyPointLabel;
      if ( v12 >= 9999999 )
        v12 = 9999999;
      v22 = v12;
      v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
      v21 = v11;
      v15 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v21);
      gameObject = (UnityEngine_GameObject_o *)System_String__Format_44563852(
                                                 (System_String_o *)StringLiteral_23863/*"{0}（＋{1}）"*/,
                                                 v14,
                                                 v15,
                                                 0LL);
      if ( buddyPointLabel )
      {
        UILabel__set_text(buddyPointLabel, (System_String_o *)gameObject, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.buddyPointLabel;
        if ( gameObject )
        {
          UILabel__SetCondensedScale((UILabel_o *)gameObject, this->fields.pointLabelMaxWidth, 0LL);
          beforeBuddyRank = this->fields.beforeBuddyRank;
          v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &beforeBuddyRank);
          v17 = System_String__Format((System_String_o *)StringLiteral_2405/*"BATTLE_BUDDY_POINT_RANK_{0}"*/, v16, 0LL);
          buddyPointRankLabel = this->fields.buddyPointRankLabel;
          v19 = v17;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v19, 0LL);
          if ( buddyPointRankLabel )
          {
            UILabel__set_text(buddyPointRankLabel, (System_String_o *)gameObject, 0LL);
            return;
          }
        }
      }
    }
LABEL_16:
    sub_B52A5C(gameObject, v7);
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}