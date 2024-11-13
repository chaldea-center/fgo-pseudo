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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  System_String_o *v10; // x0
  __int64 v11; // x1
  struct BattleBuddyPointInfo_o *resultBuddyPointInfo; // x8
  int aftBuddyPoint; // w9
  UILabel_o *buddyPointLabel; // x20
  int v15; // w24
  int v16; // w8
  Il2CppObject *v17; // x21
  Il2CppObject *v18; // x0
  const MethodInfo *v19; // x2
  struct BattleBuddyPointInfo_o *v20; // x8
  const MethodInfo *v21; // x1
  int v22; // [xsp+8h] [xbp-38h] BYREF
  int v23; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B194C2 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_25376/*"{0}（＋{1}）"*/, v4, v5);
    sub_1BCA7E0(&iTween_TypeInfo, v6, v7);
    byte_4B194C2 = 1;
  }
  if ( this->fields.resultBuddyPointInfo )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v8);
    iTween__Stop_61049892(gameObject, 0LL);
    resultBuddyPointInfo = this->fields.resultBuddyPointInfo;
    if ( !resultBuddyPointInfo )
      goto LABEL_16;
    aftBuddyPoint = resultBuddyPointInfo->fields.aftBuddyPoint;
    buddyPointLabel = this->fields.buddyPointLabel;
    v15 = aftBuddyPoint - resultBuddyPointInfo->fields.befBuddyPoint;
    v16 = aftBuddyPoint >= 9999999 ? 9999999 : resultBuddyPointInfo->fields.aftBuddyPoint;
    v23 = v16;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
    v22 = v15;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
    v10 = System_String__Format_62415592((System_String_o *)StringLiteral_25376/*"{0}（＋{1}）"*/, v17, v18, 0LL);
    if ( !buddyPointLabel
      || (UILabel__set_text(buddyPointLabel, v10, 0LL), (v10 = (System_String_o *)this->fields.buddyPointLabel) == 0LL)
      || (UILabel__SetCondensedScale((UILabel_o *)v10, this->fields.pointLabelMaxWidth, 0LL),
          (v20 = this->fields.resultBuddyPointInfo) == 0LL) )
    {
LABEL_16:
      sub_1BCAA3C(v10, v11);
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
  __int64 v5; // x1
  __int64 v6; // x2
  EventServantPointRankMaster_o *rankMaster; // x0
  struct EventServantPointRankMaster_o **p_rankMaster; // x21
  Il2CppObject *Master_object; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct BattleBuddyPointInfo_o *resultBuddyPointInfo; // x8
  EventServantPointRankEntity_o *EnableEntity; // x0
  int32_t svtPointRank; // w8

  if ( (byte_4B194C1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventServantPointRankMaster___, *(_QWORD *)&buddyPoint, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    byte_4B194C1 = 1;
  }
  p_rankMaster = &this->fields.rankMaster;
  rankMaster = this->fields.rankMaster;
  if ( !rankMaster )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&buddyPoint);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    *p_rankMaster = (struct EventServantPointRankMaster_o *)Master_object;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.rankMaster,
      (int64_t)Master_object,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    rankMaster = *p_rankMaster;
  }
  resultBuddyPointInfo = this->fields.resultBuddyPointInfo;
  if ( !resultBuddyPointInfo || !rankMaster )
    sub_1BCAA3C(rankMaster, *(_QWORD *)&buddyPoint);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
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
  UnityEngine_GameObject_o *buddyPointRankUpObject; // x0
  Il2CppObject *v25; // x0
  __int64 v26; // x1
  System_String_o *v27; // x20
  __int64 v28; // x1
  Il2CppObject *Object_object__49237568; // x20
  UnityEngine_GameObject_o *v30; // x20
  UnityEngine_Transform_o *v31; // x21
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  Il2CppObject *Component_object; // x21
  Il2CppObject *v37; // x20
  Il2CppObject *v38; // x0
  System_String_o *v39; // x0
  __int64 v40; // x1
  UILabel_o *buddyPointRankLabel; // x20
  System_String_o *v42; // x21
  int32_t beforeBuddyRank; // [xsp+8h] [xbp-58h] BYREF
  int32_t buddyPointEventId; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4B194C3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, method, v2);
    sub_1BCA7E0(&AssetManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_Animation___, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v8, v9);
    sub_1BCA7E0(&int_TypeInfo, v10, v11);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v14, v15);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v16, v17);
    sub_1BCA7E0(&StringLiteral_5928/*"Effect/BattleResult/{0}"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_17380/*"bit_buddy_rankup"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_2836/*"BATTLE_BUDDY_POINT_RANK_{0}"*/, v22, v23);
    byte_4B194C3 = 1;
  }
  buddyPointRankUpObject = this->fields.buddyPointRankUpObject;
  if ( !buddyPointRankUpObject )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(buddyPointRankUpObject, 1, 0LL);
  buddyPointEventId = this->fields.buddyPointEventId;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &buddyPointEventId);
  v27 = System_String__Format((System_String_o *)StringLiteral_5928/*"Effect/BattleResult/{0}"*/, v25, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v26);
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)AssetManager__getAssetStorage(v27, 0LL);
  if ( !buddyPointRankUpObject )
    goto LABEL_29;
  Object_object__49237568 = AssetData__GetObject_object__49237568(
                              (AssetData_o *)buddyPointRankUpObject,
                              (System_String_o *)StringLiteral_17380/*"bit_buddy_rankup"*/,
                              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                         Object_object__49237568,
                                                         (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !buddyPointRankUpObject )
    goto LABEL_29;
  v30 = buddyPointRankUpObject;
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                         buddyPointRankUpObject,
                                                         0LL);
  if ( !this->fields.buddyPointRankUpObject )
    goto LABEL_29;
  v31 = (UnityEngine_Transform_o *)buddyPointRankUpObject;
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                         this->fields.buddyPointRankUpObject,
                                                         0LL);
  if ( !v31 )
    goto LABEL_29;
  UnityEngine_Transform__SetParent(v31, (UnityEngine_Transform_o *)buddyPointRankUpObject, 0LL);
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v32, v33);
    byte_4B109C1 = 1;
  }
  UnityEngine_Transform__set_localPosition(v31, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  if ( !byte_4B109C6 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v34, v35);
    byte_4B109C6 = 1;
  }
  UnityEngine_Transform__set_localScale(v31, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v30,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  v37 = UnityEngine_GameObject__GetComponent_object_(
          v30,
          (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                         (UnityEngine_Object_o *)Component_object,
                                                         0LL,
                                                         0LL);
  if ( ((unsigned __int8)buddyPointRankUpObject & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_29;
    UnityEngine_Animation__Play_69899248(
      (UnityEngine_Animation_o *)Component_object,
      (System_String_o *)StringLiteral_17380/*"bit_buddy_rankup"*/,
      0LL);
  }
  else
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                           (UnityEngine_Object_o *)v37,
                                                           0LL,
                                                           0LL);
    if ( ((unsigned __int8)buddyPointRankUpObject & 1) != 0 )
    {
      if ( !v37 )
        goto LABEL_29;
      SimpleAnimation__Play_64539336((SimpleAnimation_o *)v37, (System_String_o *)StringLiteral_17380/*"bit_buddy_rankup"*/, 0LL);
    }
  }
  beforeBuddyRank = this->fields.beforeBuddyRank;
  v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &beforeBuddyRank);
  v39 = System_String__Format((System_String_o *)StringLiteral_2836/*"BATTLE_BUDDY_POINT_RANK_{0}"*/, v38, 0LL);
  buddyPointRankLabel = this->fields.buddyPointRankLabel;
  v42 = v39;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v40);
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v42, 0LL);
  if ( !buddyPointRankLabel
    || (UILabel__set_text(buddyPointRankLabel, (System_String_o *)buddyPointRankUpObject, 0LL),
        (buddyPointRankUpObject = (UnityEngine_GameObject_o *)this->fields.buddyPointRankLabel) == 0LL) )
  {
LABEL_29:
    sub_1BCAA3C(buddyPointRankUpObject, method);
  }
  UILabel__SetCondensedScale((UILabel_o *)buddyPointRankUpObject, this->fields.pointLabelMaxWidth, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultBuddyPointInfoComponent__SetBuddyPointInfo(
        BattleResultBuddyPointInfoComponent_o *this,
        BattleBuddyPointInfo_o *buddyPointInfo,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_GameObject_o *buddyPointRankUpObject; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  __int64 v16; // x1
  Il2CppObject *Master_object; // x0
  struct EventServantPointRankMaster_o **p_rankMaster; // x20
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct BattleBuddyPointInfo_o *resultBuddyPointInfo; // x8
  EventServantPointRankEntity_o *EnableEntity; // x0
  int32_t svtPointRank; // w8

  if ( (byte_4B194BE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventServantPointRankMaster___, buddyPointInfo, *(_QWORD *)&eventId);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    byte_4B194BE = 1;
  }
  buddyPointRankUpObject = this->fields.buddyPointRankUpObject;
  if ( !buddyPointRankUpObject )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(buddyPointRankUpObject, 0, 0LL);
  this->fields.resultBuddyPointInfo = buddyPointInfo;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.resultBuddyPointInfo,
    (int64_t)buddyPointInfo,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  if ( !this->fields.resultBuddyPointInfo )
    return;
  this->fields.buddyPointEventId = eventId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v16);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  this->fields.rankMaster = (struct EventServantPointRankMaster_o *)Master_object;
  p_rankMaster = &this->fields.rankMaster;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.rankMaster,
    (int64_t)Master_object,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  resultBuddyPointInfo = this->fields.resultBuddyPointInfo;
  if ( !resultBuddyPointInfo || (buddyPointRankUpObject = (UnityEngine_GameObject_o *)*p_rankMaster) == 0LL )
LABEL_14:
    sub_1BCAA3C(buddyPointRankUpObject, buddyPointInfo);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
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
  UnityEngine_GameObject_o *gameObject; // x19
  __int64 v23; // x0
  __int64 v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  System_Object_array *v31; // x20
  __int64 v32; // x0
  int64_t v33; // x1
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
  int64_t v53; // x21
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  int64_t v90; // x21
  __int64 v91; // x1
  System_Collections_Hashtable_o *v92; // x0
  __int64 v93; // x0
  int v94; // [xsp+4h] [xbp-3Ch] BYREF
  int v95; // [xsp+8h] [xbp-38h] BYREF
  int v96; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B194BF & 1) == 0 )
  {
    sub_1BCA7E0(&object___TypeInfo, method, v2);
    sub_1BCA7E0(&float_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_19858/*"from"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_24178/*"time"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_22521/*"onupdate"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_24219/*"to"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_6818/*"FinishUpdateBuddyPoint"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_22513/*"oncomplete"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_15345/*"UpdateBuddyPointInfo"*/, v18, v19);
    sub_1BCA7E0(&iTween_TypeInfo, v20, v21);
    byte_4B194BF = 1;
  }
  if ( this->fields.resultBuddyPointInfo )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v23 = sub_1BCA888(object___TypeInfo, 10LL);
    if ( !v23 )
      sub_1BCAA3C(0LL, v24);
    v31 = (System_Object_array *)v23;
    v32 = StringLiteral_19858/*"from"*/;
    if ( StringLiteral_19858/*"from"*/ )
    {
      v32 = sub_1BCA91C(StringLiteral_19858/*"from"*/, v31->obj.klass->_1.element_class);
      if ( !v32 )
        goto LABEL_54;
      v33 = StringLiteral_19858/*"from"*/;
    }
    else
    {
      v33 = 0LL;
    }
    if ( !v31->max_length )
      goto LABEL_53;
    v31->m_Items[0] = (Il2CppObject *)v33;
    sub_1BCA784((PartyOrganizationUtility_o *)v31->m_Items, v33, v25, v26, v27, v28, v29, v30);
    v96 = 0;
    v32 = j_il2cpp_value_box_0(float_TypeInfo, &v96);
    v40 = v32;
    if ( !v32 || (v32 = sub_1BCA91C(v32, v31->obj.klass->_1.element_class)) != 0 )
    {
      if ( v31->max_length <= 1 )
        goto LABEL_53;
      v31->m_Items[1] = (Il2CppObject *)v40;
      sub_1BCA784((PartyOrganizationUtility_o *)&v31->m_Items[1], v40, v34, v35, v36, v37, v38, v39);
      v32 = StringLiteral_24219/*"to"*/;
      if ( StringLiteral_24219/*"to"*/ )
      {
        v32 = sub_1BCA91C(StringLiteral_24219/*"to"*/, v31->obj.klass->_1.element_class);
        if ( !v32 )
          goto LABEL_54;
        v33 = StringLiteral_24219/*"to"*/;
      }
      else
      {
        v33 = 0LL;
      }
      if ( v31->max_length <= 2 )
        goto LABEL_53;
      v31->m_Items[2] = (Il2CppObject *)v33;
      sub_1BCA784((PartyOrganizationUtility_o *)&v31->m_Items[2], v33, v41, v42, v43, v44, v45, v46);
      v95 = 1065353216;
      v32 = j_il2cpp_value_box_0(float_TypeInfo, &v95);
      v53 = v32;
      if ( !v32 || (v32 = sub_1BCA91C(v32, v31->obj.klass->_1.element_class)) != 0 )
      {
        if ( v31->max_length <= 3 )
          goto LABEL_53;
        v31->m_Items[3] = (Il2CppObject *)v53;
        sub_1BCA784((PartyOrganizationUtility_o *)&v31->m_Items[3], v53, v47, v48, v49, v50, v51, v52);
        v32 = StringLiteral_22521/*"onupdate"*/;
        if ( StringLiteral_22521/*"onupdate"*/ )
        {
          v32 = sub_1BCA91C(StringLiteral_22521/*"onupdate"*/, v31->obj.klass->_1.element_class);
          if ( !v32 )
            goto LABEL_54;
          v33 = StringLiteral_22521/*"onupdate"*/;
        }
        else
        {
          v33 = 0LL;
        }
        if ( v31->max_length <= 4 )
          goto LABEL_53;
        v31->m_Items[4] = (Il2CppObject *)v33;
        sub_1BCA784((PartyOrganizationUtility_o *)&v31->m_Items[4], v33, v54, v55, v56, v57, v58, v59);
        v32 = StringLiteral_15345/*"UpdateBuddyPointInfo"*/;
        if ( StringLiteral_15345/*"UpdateBuddyPointInfo"*/ )
        {
          v32 = sub_1BCA91C(StringLiteral_15345/*"UpdateBuddyPointInfo"*/, v31->obj.klass->_1.element_class);
          if ( !v32 )
            goto LABEL_54;
          v33 = StringLiteral_15345/*"UpdateBuddyPointInfo"*/;
        }
        else
        {
          v33 = 0LL;
        }
        if ( v31->max_length <= 5 )
          goto LABEL_53;
        v31->m_Items[5] = (Il2CppObject *)v33;
        sub_1BCA784((PartyOrganizationUtility_o *)&v31->m_Items[5], v33, v60, v61, v62, v63, v64, v65);
        v32 = StringLiteral_22513/*"oncomplete"*/;
        if ( StringLiteral_22513/*"oncomplete"*/ )
        {
          v32 = sub_1BCA91C(StringLiteral_22513/*"oncomplete"*/, v31->obj.klass->_1.element_class);
          if ( !v32 )
            goto LABEL_54;
          v33 = StringLiteral_22513/*"oncomplete"*/;
        }
        else
        {
          v33 = 0LL;
        }
        if ( v31->max_length <= 6 )
          goto LABEL_53;
        v31->m_Items[6] = (Il2CppObject *)v33;
        sub_1BCA784((PartyOrganizationUtility_o *)&v31->m_Items[6], v33, v66, v67, v68, v69, v70, v71);
        v32 = StringLiteral_6818/*"FinishUpdateBuddyPoint"*/;
        if ( StringLiteral_6818/*"FinishUpdateBuddyPoint"*/ )
        {
          v32 = sub_1BCA91C(StringLiteral_6818/*"FinishUpdateBuddyPoint"*/, v31->obj.klass->_1.element_class);
          if ( !v32 )
            goto LABEL_54;
          v33 = StringLiteral_6818/*"FinishUpdateBuddyPoint"*/;
        }
        else
        {
          v33 = 0LL;
        }
        if ( v31->max_length <= 7 )
          goto LABEL_53;
        v31->m_Items[7] = (Il2CppObject *)v33;
        sub_1BCA784((PartyOrganizationUtility_o *)&v31->m_Items[7], v33, v72, v73, v74, v75, v76, v77);
        v32 = StringLiteral_24178/*"time"*/;
        if ( StringLiteral_24178/*"time"*/ )
        {
          v32 = sub_1BCA91C(StringLiteral_24178/*"time"*/, v31->obj.klass->_1.element_class);
          if ( !v32 )
            goto LABEL_54;
          v33 = StringLiteral_24178/*"time"*/;
        }
        else
        {
          v33 = 0LL;
        }
        if ( v31->max_length <= 8 )
          goto LABEL_53;
        v31->m_Items[8] = (Il2CppObject *)v33;
        sub_1BCA784((PartyOrganizationUtility_o *)&v31->m_Items[8], v33, v78, v79, v80, v81, v82, v83);
        v94 = 1072064102;
        v32 = j_il2cpp_value_box_0(float_TypeInfo, &v94);
        v90 = v32;
        if ( !v32 || (v32 = sub_1BCA91C(v32, v31->obj.klass->_1.element_class)) != 0 )
        {
          if ( v31->max_length > 9 )
          {
            v31->m_Items[9] = (Il2CppObject *)v90;
            sub_1BCA784((PartyOrganizationUtility_o *)&v31->m_Items[9], v90, v84, v85, v86, v87, v88, v89);
            if ( !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v91);
            v92 = iTween__Hash(v31, 0LL);
            iTween__ValueTo(gameObject, v92, 0LL);
            return;
          }
LABEL_53:
          sub_1BCAA44(v32, v33);
        }
      }
    }
LABEL_54:
    v93 = sub_1BCAA60(v32);
    sub_1BCA908(v93, 0LL);
  }
}


void __fastcall BattleResultBuddyPointInfoComponent__UpdateBuddyPointInfo(
        BattleResultBuddyPointInfoComponent_o *this,
        float val,
        const MethodInfo *method)
{
  __int64 v3; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  struct BattleBuddyPointInfo_o *resultBuddyPointInfo; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v16; // x1
  struct BattleBuddyPointInfo_o *v17; // x8
  int32_t befBuddyPoint; // w20
  int v19; // w8
  __int64 v20; // x25
  int v21; // w8
  UILabel_o *buddyPointLabel; // x20
  Il2CppObject *v23; // x21
  Il2CppObject *v24; // x0
  Il2CppObject *v25; // x0
  System_String_o *v26; // x0
  __int64 v27; // x1
  UILabel_o *buddyPointRankLabel; // x19
  System_String_o *v29; // x20
  __int64 v30; // [xsp+8h] [xbp-58h] BYREF
  int32_t beforeBuddyRank; // [xsp+18h] [xbp-48h] BYREF
  int v32; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4B194C0 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, method, v3);
    sub_1BCA7E0(&long_TypeInfo, v6, v7);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_2836/*"BATTLE_BUDDY_POINT_RANK_{0}"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_25376/*"{0}（＋{1}）"*/, v12, v13);
    byte_4B194C0 = 1;
  }
  resultBuddyPointInfo = this->fields.resultBuddyPointInfo;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_15;
  if ( resultBuddyPointInfo )
  {
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    v17 = this->fields.resultBuddyPointInfo;
    if ( v17 )
    {
      befBuddyPoint = v17->fields.befBuddyPoint;
      v19 = v17->fields.aftBuddyPoint - befBuddyPoint;
      v20 = v19;
      v21 = BattleUtility__FloorToInt((float)v19 * val, 0LL) + befBuddyPoint;
      buddyPointLabel = this->fields.buddyPointLabel;
      if ( v21 >= 9999999 )
        v21 = 9999999;
      v32 = v21;
      v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32);
      v30 = v20;
      v24 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v30);
      gameObject = (UnityEngine_GameObject_o *)System_String__Format_62415592(
                                                 (System_String_o *)StringLiteral_25376/*"{0}（＋{1}）"*/,
                                                 v23,
                                                 v24,
                                                 0LL);
      if ( buddyPointLabel )
      {
        UILabel__set_text(buddyPointLabel, (System_String_o *)gameObject, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.buddyPointLabel;
        if ( gameObject )
        {
          UILabel__SetCondensedScale((UILabel_o *)gameObject, this->fields.pointLabelMaxWidth, 0LL);
          beforeBuddyRank = this->fields.beforeBuddyRank;
          v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &beforeBuddyRank);
          v26 = System_String__Format((System_String_o *)StringLiteral_2836/*"BATTLE_BUDDY_POINT_RANK_{0}"*/, v25, 0LL);
          buddyPointRankLabel = this->fields.buddyPointRankLabel;
          v29 = v26;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v27);
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v29, 0LL);
          if ( buddyPointRankLabel )
          {
            UILabel__set_text(buddyPointRankLabel, (System_String_o *)gameObject, 0LL);
            return;
          }
        }
      }
    }
LABEL_15:
    sub_1BCAA3C(gameObject, v16);
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}