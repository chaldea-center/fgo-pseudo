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
  __int64 v7; // x3
  __int64 v8; // x4
  struct BattleBuddyPointInfo_o *resultBuddyPointInfo; // x8
  int aftBuddyPoint; // w9
  UILabel_o *buddyPointLabel; // x20
  int v12; // w24
  int v13; // w8
  Il2CppObject *v14; // x21
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *v18; // x0
  const MethodInfo *v19; // x2
  struct BattleBuddyPointInfo_o *v20; // x8
  const MethodInfo *v21; // x1
  int v22; // [xsp+8h] [xbp-38h] BYREF
  int v23; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BDF8FF & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&StringLiteral_25568/*"{0}（＋{1}）"*/);
    sub_1C21E38(&iTween_TypeInfo);
    byte_4BDF8FF = 1;
  }
  if ( this->fields.resultBuddyPointInfo )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__Stop_61763404(gameObject, 0LL);
    resultBuddyPointInfo = this->fields.resultBuddyPointInfo;
    if ( !resultBuddyPointInfo )
      goto LABEL_16;
    aftBuddyPoint = resultBuddyPointInfo->fields.aftBuddyPoint;
    buddyPointLabel = this->fields.buddyPointLabel;
    v12 = aftBuddyPoint - resultBuddyPointInfo->fields.befBuddyPoint;
    v13 = aftBuddyPoint >= 9999999 ? 9999999 : resultBuddyPointInfo->fields.aftBuddyPoint;
    v23 = v13;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23, v6, v7, v8);
    v22 = v12;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22, v15, v16, v17);
    v4 = System_String__Format_63129848((System_String_o *)StringLiteral_25568/*"{0}（＋{1}）"*/, v14, v18, 0LL);
    if ( !buddyPointLabel
      || (UILabel__set_text(buddyPointLabel, v4, 0LL), (v4 = (System_String_o *)this->fields.buddyPointLabel) == 0LL)
      || (UILabel__SetCondensedScale((UILabel_o *)v4, this->fields.pointLabelMaxWidth, 0, 0LL),
          (v20 = this->fields.resultBuddyPointInfo) == 0LL) )
    {
LABEL_16:
      sub_1C22094(v4, v5);
    }
    if ( BattleResultBuddyPointInfoComponent__IsRankUpBuddyRank(this, v20->fields.aftBuddyPoint, v19) )
      BattleResultBuddyPointInfoComponent__PlayBuddyRankUp(this, v21);
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
  Il2CppObject *Master_object; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct BattleBuddyPointInfo_o *resultBuddyPointInfo; // x8
  EventServantPointRankEntity_o *EnableEntity; // x0
  int32_t svtPointRank; // w8

  if ( (byte_4BDF8FE & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    byte_4BDF8FE = 1;
  }
  p_rankMaster = &this->fields.rankMaster;
  rankMaster = this->fields.rankMaster;
  if ( !rankMaster )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    *p_rankMaster = (struct EventServantPointRankMaster_o *)Master_object;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.rankMaster,
      (int64_t)Master_object,
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
    sub_1C22094(rankMaster, *(_QWORD *)&buddyPoint);
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
  __int64 v5; // x3
  __int64 v6; // x4
  Il2CppObject *v7; // x0
  System_String_o *v8; // x20
  Il2CppObject *Object_object__49880776; // x20
  UnityEngine_GameObject_o *v10; // x20
  UnityEngine_Transform_o *v11; // x21
  Il2CppObject *Component_object; // x21
  Il2CppObject *v13; // x20
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  Il2CppObject *v17; // x0
  System_String_o *v18; // x0
  UILabel_o *buddyPointRankLabel; // x20
  System_String_o *v20; // x21
  int32_t beforeBuddyRank; // [xsp+8h] [xbp-58h] BYREF
  int32_t buddyPointEventId; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4BDF900 & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetData_GetObject_GameObject____77626288);
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_5972/*"Effect/BattleResult/{0}"*/);
    sub_1C21E38(&StringLiteral_17497/*"bit_buddy_rankup"*/);
    sub_1C21E38(&StringLiteral_2855/*"BATTLE_BUDDY_POINT_RANK_{0}"*/);
    byte_4BDF900 = 1;
  }
  buddyPointRankUpObject = this->fields.buddyPointRankUpObject;
  if ( !buddyPointRankUpObject )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(buddyPointRankUpObject, 1, 0LL);
  buddyPointEventId = this->fields.buddyPointEventId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &buddyPointEventId, v4, v5, v6);
  v8 = System_String__Format((System_String_o *)StringLiteral_5972/*"Effect/BattleResult/{0}"*/, v7, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)AssetManager__getAssetStorage(v8, 0LL);
  if ( !buddyPointRankUpObject )
    goto LABEL_29;
  Object_object__49880776 = AssetData__GetObject_object__49880776(
                              (AssetData_o *)buddyPointRankUpObject,
                              (System_String_o *)StringLiteral_17497/*"bit_buddy_rankup"*/,
                              (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                         Object_object__49880776,
                                                         (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !buddyPointRankUpObject )
    goto LABEL_29;
  v10 = buddyPointRankUpObject;
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                         buddyPointRankUpObject,
                                                         0LL);
  if ( !this->fields.buddyPointRankUpObject )
    goto LABEL_29;
  v11 = (UnityEngine_Transform_o *)buddyPointRankUpObject;
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                         this->fields.buddyPointRankUpObject,
                                                         0LL);
  if ( !v11 )
    goto LABEL_29;
  UnityEngine_Transform__SetParent(v11, (UnityEngine_Transform_o *)buddyPointRankUpObject, 0LL);
  if ( !byte_4BD6BB1 )
  {
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB1 = 1;
  }
  UnityEngine_Transform__set_localPosition(v11, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  if ( !byte_4BD6BB6 )
  {
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB6 = 1;
  }
  UnityEngine_Transform__set_localScale(v11, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v10,
                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  v13 = UnityEngine_GameObject__GetComponent_object_(
          v10,
          (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                         (UnityEngine_Object_o *)Component_object,
                                                         0LL,
                                                         0LL);
  if ( ((unsigned __int8)buddyPointRankUpObject & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_29;
    UnityEngine_Animation__Play_70614020(
      (UnityEngine_Animation_o *)Component_object,
      (System_String_o *)StringLiteral_17497/*"bit_buddy_rankup"*/,
      0LL);
  }
  else
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                           (UnityEngine_Object_o *)v13,
                                                           0LL,
                                                           0LL);
    if ( ((unsigned __int8)buddyPointRankUpObject & 1) != 0 )
    {
      if ( !v13 )
        goto LABEL_29;
      SimpleAnimation__Play_65253852((SimpleAnimation_o *)v13, (System_String_o *)StringLiteral_17497/*"bit_buddy_rankup"*/, 0LL);
    }
  }
  beforeBuddyRank = this->fields.beforeBuddyRank;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &beforeBuddyRank, v14, v15, v16);
  v18 = System_String__Format((System_String_o *)StringLiteral_2855/*"BATTLE_BUDDY_POINT_RANK_{0}"*/, v17, 0LL);
  buddyPointRankLabel = this->fields.buddyPointRankLabel;
  v20 = v18;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v20, 0LL);
  if ( !buddyPointRankLabel
    || (UILabel__set_text(buddyPointRankLabel, (System_String_o *)buddyPointRankUpObject, 0LL),
        (buddyPointRankUpObject = (UnityEngine_GameObject_o *)this->fields.buddyPointRankLabel) == 0LL) )
  {
LABEL_29:
    sub_1C22094(buddyPointRankUpObject, method);
  }
  UILabel__SetCondensedScale((UILabel_o *)buddyPointRankUpObject, this->fields.pointLabelMaxWidth, 0, 0LL);
}


void __fastcall BattleResultBuddyPointInfoComponent__SetBuddyPointInfo(
        BattleResultBuddyPointInfoComponent_o *this,
        BattleBuddyPointInfo_o *buddyPointInfo,
        int32_t eventId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *buddyPointRankUpObject; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  Il2CppObject *Master_object; // x0
  struct EventServantPointRankMaster_o **p_rankMaster; // x20
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct BattleBuddyPointInfo_o *resultBuddyPointInfo; // x8
  EventServantPointRankEntity_o *EnableEntity; // x0
  int32_t svtPointRank; // w8

  if ( (byte_4BDF8FB & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    byte_4BDF8FB = 1;
  }
  buddyPointRankUpObject = this->fields.buddyPointRankUpObject;
  if ( !buddyPointRankUpObject )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(buddyPointRankUpObject, 0, 0LL);
  this->fields.resultBuddyPointInfo = buddyPointInfo;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.resultBuddyPointInfo,
    (int64_t)buddyPointInfo,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  if ( !this->fields.resultBuddyPointInfo )
    return;
  this->fields.buddyPointEventId = eventId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  this->fields.rankMaster = (struct EventServantPointRankMaster_o *)Master_object;
  p_rankMaster = &this->fields.rankMaster;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.rankMaster,
    (int64_t)Master_object,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  resultBuddyPointInfo = this->fields.resultBuddyPointInfo;
  if ( !resultBuddyPointInfo || (buddyPointRankUpObject = (UnityEngine_GameObject_o *)*p_rankMaster) == 0LL )
LABEL_14:
    sub_1C22094(buddyPointRankUpObject, buddyPointInfo);
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
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  System_Object_array *v12; // x20
  __int64 v13; // x0
  int64_t v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x21
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t v40; // x21
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  __int64 v71; // x2
  __int64 v72; // x3
  __int64 v73; // x4
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  int64_t v80; // x21
  System_Collections_Hashtable_o *v81; // x0
  __int64 v82; // x0
  int v83; // [xsp+4h] [xbp-3Ch] BYREF
  int v84; // [xsp+8h] [xbp-38h] BYREF
  int v85; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BDF8FC & 1) == 0 )
  {
    sub_1C21E38(&object___TypeInfo);
    sub_1C21E38(&float_TypeInfo);
    sub_1C21E38(&StringLiteral_19990/*"from"*/);
    sub_1C21E38(&StringLiteral_24360/*"time"*/);
    sub_1C21E38(&StringLiteral_22688/*"onupdate"*/);
    sub_1C21E38(&StringLiteral_24401/*"to"*/);
    sub_1C21E38(&StringLiteral_6868/*"FinishUpdateBuddyPoint"*/);
    sub_1C21E38(&StringLiteral_22680/*"oncomplete"*/);
    sub_1C21E38(&StringLiteral_15444/*"UpdateBuddyPointInfo"*/);
    sub_1C21E38(&iTween_TypeInfo);
    byte_4BDF8FC = 1;
  }
  if ( this->fields.resultBuddyPointInfo )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v4 = sub_1C21EE0(object___TypeInfo, 10LL);
    if ( !v4 )
      sub_1C22094(0LL, v5);
    v12 = (System_Object_array *)v4;
    v13 = StringLiteral_19990/*"from"*/;
    if ( StringLiteral_19990/*"from"*/ )
    {
      v13 = sub_1C21F74(StringLiteral_19990/*"from"*/, v12->obj.klass->_1.element_class);
      if ( !v13 )
        goto LABEL_54;
      v14 = StringLiteral_19990/*"from"*/;
    }
    else
    {
      v14 = 0LL;
    }
    if ( !v12->max_length )
      goto LABEL_53;
    v12->m_Items[0] = (Il2CppObject *)v14;
    sub_1C21DDC((PartyOrganizationUtility_o *)v12->m_Items, v14, v6, v7, v8, v9, v10, v11);
    v85 = 0;
    v13 = j_il2cpp_value_box_0(float_TypeInfo, &v85, v15, v16, v17);
    v24 = v13;
    if ( !v13 || (v13 = sub_1C21F74(v13, v12->obj.klass->_1.element_class)) != 0 )
    {
      if ( v12->max_length <= 1 )
        goto LABEL_53;
      v12->m_Items[1] = (Il2CppObject *)v24;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v12->m_Items[1], v24, v18, v19, v20, v21, v22, v23);
      v13 = StringLiteral_24401/*"to"*/;
      if ( StringLiteral_24401/*"to"*/ )
      {
        v13 = sub_1C21F74(StringLiteral_24401/*"to"*/, v12->obj.klass->_1.element_class);
        if ( !v13 )
          goto LABEL_54;
        v14 = StringLiteral_24401/*"to"*/;
      }
      else
      {
        v14 = 0LL;
      }
      if ( v12->max_length <= 2 )
        goto LABEL_53;
      v12->m_Items[2] = (Il2CppObject *)v14;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v12->m_Items[2], v14, v25, v26, v27, v28, v29, v30);
      v84 = 1065353216;
      v13 = j_il2cpp_value_box_0(float_TypeInfo, &v84, v31, v32, v33);
      v40 = v13;
      if ( !v13 || (v13 = sub_1C21F74(v13, v12->obj.klass->_1.element_class)) != 0 )
      {
        if ( v12->max_length <= 3 )
          goto LABEL_53;
        v12->m_Items[3] = (Il2CppObject *)v40;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v12->m_Items[3], v40, v34, v35, v36, v37, v38, v39);
        v13 = StringLiteral_22688/*"onupdate"*/;
        if ( StringLiteral_22688/*"onupdate"*/ )
        {
          v13 = sub_1C21F74(StringLiteral_22688/*"onupdate"*/, v12->obj.klass->_1.element_class);
          if ( !v13 )
            goto LABEL_54;
          v14 = StringLiteral_22688/*"onupdate"*/;
        }
        else
        {
          v14 = 0LL;
        }
        if ( v12->max_length <= 4 )
          goto LABEL_53;
        v12->m_Items[4] = (Il2CppObject *)v14;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v12->m_Items[4], v14, v41, v42, v43, v44, v45, v46);
        v13 = StringLiteral_15444/*"UpdateBuddyPointInfo"*/;
        if ( StringLiteral_15444/*"UpdateBuddyPointInfo"*/ )
        {
          v13 = sub_1C21F74(StringLiteral_15444/*"UpdateBuddyPointInfo"*/, v12->obj.klass->_1.element_class);
          if ( !v13 )
            goto LABEL_54;
          v14 = StringLiteral_15444/*"UpdateBuddyPointInfo"*/;
        }
        else
        {
          v14 = 0LL;
        }
        if ( v12->max_length <= 5 )
          goto LABEL_53;
        v12->m_Items[5] = (Il2CppObject *)v14;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v12->m_Items[5], v14, v47, v48, v49, v50, v51, v52);
        v13 = StringLiteral_22680/*"oncomplete"*/;
        if ( StringLiteral_22680/*"oncomplete"*/ )
        {
          v13 = sub_1C21F74(StringLiteral_22680/*"oncomplete"*/, v12->obj.klass->_1.element_class);
          if ( !v13 )
            goto LABEL_54;
          v14 = StringLiteral_22680/*"oncomplete"*/;
        }
        else
        {
          v14 = 0LL;
        }
        if ( v12->max_length <= 6 )
          goto LABEL_53;
        v12->m_Items[6] = (Il2CppObject *)v14;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v12->m_Items[6], v14, v53, v54, v55, v56, v57, v58);
        v13 = StringLiteral_6868/*"FinishUpdateBuddyPoint"*/;
        if ( StringLiteral_6868/*"FinishUpdateBuddyPoint"*/ )
        {
          v13 = sub_1C21F74(StringLiteral_6868/*"FinishUpdateBuddyPoint"*/, v12->obj.klass->_1.element_class);
          if ( !v13 )
            goto LABEL_54;
          v14 = StringLiteral_6868/*"FinishUpdateBuddyPoint"*/;
        }
        else
        {
          v14 = 0LL;
        }
        if ( v12->max_length <= 7 )
          goto LABEL_53;
        v12->m_Items[7] = (Il2CppObject *)v14;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v12->m_Items[7], v14, v59, v60, v61, v62, v63, v64);
        v13 = StringLiteral_24360/*"time"*/;
        if ( StringLiteral_24360/*"time"*/ )
        {
          v13 = sub_1C21F74(StringLiteral_24360/*"time"*/, v12->obj.klass->_1.element_class);
          if ( !v13 )
            goto LABEL_54;
          v14 = StringLiteral_24360/*"time"*/;
        }
        else
        {
          v14 = 0LL;
        }
        if ( v12->max_length <= 8 )
          goto LABEL_53;
        v12->m_Items[8] = (Il2CppObject *)v14;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v12->m_Items[8], v14, v65, v66, v67, v68, v69, v70);
        v83 = 1072064102;
        v13 = j_il2cpp_value_box_0(float_TypeInfo, &v83, v71, v72, v73);
        v80 = v13;
        if ( !v13 || (v13 = sub_1C21F74(v13, v12->obj.klass->_1.element_class)) != 0 )
        {
          if ( v12->max_length > 9 )
          {
            v12->m_Items[9] = (Il2CppObject *)v80;
            sub_1C21DDC((PartyOrganizationUtility_o *)&v12->m_Items[9], v80, v74, v75, v76, v77, v78, v79);
            if ( !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
            v81 = iTween__Hash(v12, 0LL);
            iTween__ValueTo(gameObject, v81, 0LL);
            return;
          }
LABEL_53:
          sub_1C2209C(v13, v14);
        }
      }
    }
LABEL_54:
    v82 = sub_1C220B8(v13);
    sub_1C21F60(v82, 0LL);
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
  __int64 v11; // x25
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  int v15; // w8
  UILabel_o *buddyPointLabel; // x20
  Il2CppObject *v17; // x21
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  Il2CppObject *v21; // x0
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  Il2CppObject *v25; // x0
  System_String_o *v26; // x0
  UILabel_o *buddyPointRankLabel; // x19
  System_String_o *v28; // x20
  __int64 v29; // [xsp+8h] [xbp-58h] BYREF
  int32_t beforeBuddyRank; // [xsp+18h] [xbp-48h] BYREF
  int v31; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4BDF8FD & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&long_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_2855/*"BATTLE_BUDDY_POINT_RANK_{0}"*/);
    sub_1C21E38(&StringLiteral_25568/*"{0}（＋{1}）"*/);
    byte_4BDF8FD = 1;
  }
  resultBuddyPointInfo = this->fields.resultBuddyPointInfo;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_15;
  if ( resultBuddyPointInfo )
  {
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    v8 = this->fields.resultBuddyPointInfo;
    if ( v8 )
    {
      befBuddyPoint = v8->fields.befBuddyPoint;
      v10 = v8->fields.aftBuddyPoint - befBuddyPoint;
      v11 = v10;
      v15 = BattleUtility__FloorToInt((float)v10 * val, 0LL) + befBuddyPoint;
      buddyPointLabel = this->fields.buddyPointLabel;
      if ( v15 >= 9999999 )
        v15 = 9999999;
      v31 = v15;
      v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31, v12, v13, v14);
      v29 = v11;
      v21 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v29, v18, v19, v20);
      gameObject = (UnityEngine_GameObject_o *)System_String__Format_63129848(
                                                 (System_String_o *)StringLiteral_25568/*"{0}（＋{1}）"*/,
                                                 v17,
                                                 v21,
                                                 0LL);
      if ( buddyPointLabel )
      {
        UILabel__set_text(buddyPointLabel, (System_String_o *)gameObject, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.buddyPointLabel;
        if ( gameObject )
        {
          UILabel__SetCondensedScale((UILabel_o *)gameObject, this->fields.pointLabelMaxWidth, 0, 0LL);
          beforeBuddyRank = this->fields.beforeBuddyRank;
          v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &beforeBuddyRank, v22, v23, v24);
          v26 = System_String__Format((System_String_o *)StringLiteral_2855/*"BATTLE_BUDDY_POINT_RANK_{0}"*/, v25, 0LL);
          buddyPointRankLabel = this->fields.buddyPointRankLabel;
          v28 = v26;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v28, 0LL);
          if ( buddyPointRankLabel )
          {
            UILabel__set_text(buddyPointRankLabel, (System_String_o *)gameObject, 0LL);
            return;
          }
        }
      }
    }
LABEL_15:
    sub_1C22094(gameObject, v7);
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}