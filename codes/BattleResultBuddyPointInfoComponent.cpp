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
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  struct BattleBuddyPointInfo_o *resultBuddyPointInfo; // x8
  int aftBuddyPoint; // w9
  UILabel_o *buddyPointLabel; // x20
  int v14; // w24
  int v15; // w8
  Il2CppObject *v16; // x21
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  Il2CppObject *v20; // x0
  const MethodInfo *v21; // x2
  struct BattleBuddyPointInfo_o *v22; // x8
  const MethodInfo *v23; // x1
  int v24; // [xsp+8h] [xbp-38h] BYREF
  int v25; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C253CC & 1) == 0 )
  {
    sub_1C3B764(&int_TypeInfo, method);
    sub_1C3B764(&StringLiteral_25638, v3);
    sub_1C3B764(&iTween_TypeInfo, v4);
    byte_4C253CC = 1;
  }
  if ( this->fields.resultBuddyPointInfo )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__Stop_62016540(gameObject, 0LL);
    resultBuddyPointInfo = this->fields.resultBuddyPointInfo;
    if ( !resultBuddyPointInfo )
      goto LABEL_16;
    aftBuddyPoint = resultBuddyPointInfo->fields.aftBuddyPoint;
    buddyPointLabel = this->fields.buddyPointLabel;
    v14 = aftBuddyPoint - resultBuddyPointInfo->fields.befBuddyPoint;
    v15 = aftBuddyPoint >= 9999999 ? 9999999 : resultBuddyPointInfo->fields.aftBuddyPoint;
    v25 = v15;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25, v8, v9, v10);
    v24 = v14;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24, v17, v18, v19);
    v6 = System_String__Format_63382984((System_String_o *)StringLiteral_25638, v16, v20, 0LL);
    if ( !buddyPointLabel
      || (UILabel__set_text(buddyPointLabel, v6, 0LL), (v6 = (System_String_o *)this->fields.buddyPointLabel) == 0LL)
      || (UILabel__SetCondensedScale((UILabel_o *)v6, this->fields.pointLabelMaxWidth, 0, 0LL),
          (v22 = this->fields.resultBuddyPointInfo) == 0LL) )
    {
LABEL_16:
      sub_1C3B9C0(v6, v7);
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
  __int64 v5; // x1
  EventServantPointRankMaster_o *rankMaster; // x0
  struct EventServantPointRankMaster_o **p_rankMaster; // x21
  Il2CppObject *Master_object; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct BattleBuddyPointInfo_o *resultBuddyPointInfo; // x8
  EventServantPointRankEntity_o *EnableEntity; // x0
  int32_t svtPointRank; // w8

  if ( (byte_4C253CB & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_EventServantPointRankMaster___, *(_QWORD *)&buddyPoint);
    sub_1C3B764(&DataManager_TypeInfo, v5);
    byte_4C253CB = 1;
  }
  p_rankMaster = &this->fields.rankMaster;
  rankMaster = this->fields.rankMaster;
  if ( !rankMaster )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    *p_rankMaster = (struct EventServantPointRankMaster_o *)Master_object;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&this->fields.rankMaster,
      (int64_t)Master_object,
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
    sub_1C3B9C0(rankMaster, *(_QWORD *)&buddyPoint);
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
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  Il2CppObject *v17; // x0
  System_String_o *v18; // x20
  Il2CppObject *Object_object__50142412; // x20
  UnityEngine_GameObject_o *v20; // x20
  UnityEngine_Transform_o *v21; // x21
  __int64 v22; // x1
  __int64 v23; // x1
  Il2CppObject *Component_object; // x21
  Il2CppObject *v25; // x20
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  Il2CppObject *v29; // x0
  System_String_o *v30; // x0
  UILabel_o *buddyPointRankLabel; // x20
  System_String_o *v32; // x21
  int32_t beforeBuddyRank; // [xsp+8h] [xbp-58h] BYREF
  int32_t buddyPointEventId; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4C253CD & 1) == 0 )
  {
    sub_1C3B764(&Method_AssetData_GetObject_GameObject____77902856, method);
    sub_1C3B764(&AssetManager_TypeInfo, v3);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_Animation___, v4);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v5);
    sub_1C3B764(&int_TypeInfo, v6);
    sub_1C3B764(&LocalizationManager_TypeInfo, v7);
    sub_1C3B764(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v9);
    sub_1C3B764(&StringLiteral_5964/*"Entity replacement text must nest properly within markup declarations."*/, v10);
    sub_1C3B764(&StringLiteral_17542/*"charaMoveEaseFSSideL"*/, v11);
    sub_1C3B764(&StringLiteral_2841/*"BATTLE_RESULT_BONDS_WAVE_COUNT"*/, v12);
    byte_4C253CD = 1;
  }
  buddyPointRankUpObject = this->fields.buddyPointRankUpObject;
  if ( !buddyPointRankUpObject )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(buddyPointRankUpObject, 1, 0LL);
  buddyPointEventId = this->fields.buddyPointEventId;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &buddyPointEventId, v14, v15, v16);
  v18 = System_String__Format((System_String_o *)StringLiteral_5964/*"Entity replacement text must nest properly within markup declarations."*/, v17, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)AssetManager__getAssetStorage(v18, 0LL);
  if ( !buddyPointRankUpObject )
    goto LABEL_29;
  Object_object__50142412 = AssetData__GetObject_object__50142412(
                              (AssetData_o *)buddyPointRankUpObject,
                              (System_String_o *)StringLiteral_17542/*"charaMoveEaseFSSideL"*/,
                              (const MethodInfo_2FD1CCC *)Method_AssetData_GetObject_GameObject____77902856);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                         Object_object__50142412,
                                                         (const MethodInfo_3076DB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !buddyPointRankUpObject )
    goto LABEL_29;
  v20 = buddyPointRankUpObject;
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                         buddyPointRankUpObject,
                                                         0LL);
  if ( !this->fields.buddyPointRankUpObject )
    goto LABEL_29;
  v21 = (UnityEngine_Transform_o *)buddyPointRankUpObject;
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                         this->fields.buddyPointRankUpObject,
                                                         0LL);
  if ( !v21 )
    goto LABEL_29;
  UnityEngine_Transform__SetParent(v21, (UnityEngine_Transform_o *)buddyPointRankUpObject, 0LL);
  if ( !byte_4C1C511 )
  {
    sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v22);
    byte_4C1C511 = 1;
  }
  UnityEngine_Transform__set_localPosition(v21, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  if ( !byte_4C1C516 )
  {
    sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v23);
    byte_4C1C516 = 1;
  }
  UnityEngine_Transform__set_localScale(v21, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v20,
                       (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  v25 = UnityEngine_GameObject__GetComponent_object_(
          v20,
          (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                         (UnityEngine_Object_o *)Component_object,
                                                         0LL,
                                                         0LL);
  if ( ((unsigned __int8)buddyPointRankUpObject & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_29;
    UnityEngine_Animation__Play_70867156(
      (UnityEngine_Animation_o *)Component_object,
      (System_String_o *)StringLiteral_17542/*"charaMoveEaseFSSideL"*/,
      0LL);
  }
  else
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                           (UnityEngine_Object_o *)v25,
                                                           0LL,
                                                           0LL);
    if ( ((unsigned __int8)buddyPointRankUpObject & 1) != 0 )
    {
      if ( !v25 )
        goto LABEL_29;
      SimpleAnimation__Play_65506988((SimpleAnimation_o *)v25, (System_String_o *)StringLiteral_17542/*"charaMoveEaseFSSideL"*/, 0LL);
    }
  }
  beforeBuddyRank = this->fields.beforeBuddyRank;
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &beforeBuddyRank, v26, v27, v28);
  v30 = System_String__Format((System_String_o *)StringLiteral_2841/*"BATTLE_RESULT_BONDS_WAVE_COUNT"*/, v29, 0LL);
  buddyPointRankLabel = this->fields.buddyPointRankLabel;
  v32 = v30;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v32, 0LL);
  if ( !buddyPointRankLabel
    || (UILabel__set_text(buddyPointRankLabel, (System_String_o *)buddyPointRankUpObject, 0LL),
        (buddyPointRankUpObject = (UnityEngine_GameObject_o *)this->fields.buddyPointRankLabel) == 0LL) )
  {
LABEL_29:
    sub_1C3B9C0(buddyPointRankUpObject, method);
  }
  UILabel__SetCondensedScale((UILabel_o *)buddyPointRankUpObject, this->fields.pointLabelMaxWidth, 0, 0LL);
}


void __fastcall BattleResultBuddyPointInfoComponent__SetBuddyPointInfo(
        BattleResultBuddyPointInfoComponent_o *this,
        BattleBuddyPointInfo_o *buddyPointInfo,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_GameObject_o *buddyPointRankUpObject; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  Il2CppObject *Master_object; // x0
  struct EventServantPointRankMaster_o **p_rankMaster; // x20
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct BattleBuddyPointInfo_o *resultBuddyPointInfo; // x8
  EventServantPointRankEntity_o *EnableEntity; // x0
  int32_t svtPointRank; // w8

  if ( (byte_4C253C8 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_EventServantPointRankMaster___, buddyPointInfo);
    sub_1C3B764(&DataManager_TypeInfo, v7);
    byte_4C253C8 = 1;
  }
  buddyPointRankUpObject = this->fields.buddyPointRankUpObject;
  if ( !buddyPointRankUpObject )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(buddyPointRankUpObject, 0, 0LL);
  this->fields.resultBuddyPointInfo = buddyPointInfo;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.resultBuddyPointInfo,
    (int64_t)buddyPointInfo,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  if ( !this->fields.resultBuddyPointInfo )
    return;
  this->fields.buddyPointEventId = eventId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  this->fields.rankMaster = (struct EventServantPointRankMaster_o *)Master_object;
  p_rankMaster = &this->fields.rankMaster;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.rankMaster,
    (int64_t)Master_object,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  resultBuddyPointInfo = this->fields.resultBuddyPointInfo;
  if ( !resultBuddyPointInfo || (buddyPointRankUpObject = (UnityEngine_GameObject_o *)*p_rankMaster) == 0LL )
LABEL_14:
    sub_1C3B9C0(buddyPointRankUpObject, buddyPointInfo);
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
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  System_Object_array *v21; // x20
  __int64 v22; // x0
  int64_t v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x21
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int64_t v49; // x21
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  __int64 v80; // x2
  __int64 v81; // x3
  __int64 v82; // x4
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  int64_t v89; // x21
  System_Collections_Hashtable_o *v90; // x0
  __int64 v91; // x0
  int v92; // [xsp+4h] [xbp-3Ch] BYREF
  int v93; // [xsp+8h] [xbp-38h] BYREF
  int v94; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C253C9 & 1) == 0 )
  {
    sub_1C3B764(&object___TypeInfo, method);
    sub_1C3B764(&float_TypeInfo, v3);
    sub_1C3B764(&StringLiteral_20040/*"img_parameter_D"*/, v4);
    sub_1C3B764(&StringLiteral_24427/*"x-cp20936"*/, v5);
    sub_1C3B764(&StringLiteral_22739/*"seagreen"*/, v6);
    sub_1C3B764(&StringLiteral_24469/*"x/("*/, v7);
    sub_1C3B764(&StringLiteral_6862/*"Gainsboro"*/, v8);
    sub_1C3B764(&StringLiteral_22731/*"se-NO"*/, v9);
    sub_1C3B764(&StringLiteral_15484/*"['"*/, v10);
    sub_1C3B764(&iTween_TypeInfo, v11);
    byte_4C253C9 = 1;
  }
  if ( this->fields.resultBuddyPointInfo )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v13 = sub_1C3B80C(object___TypeInfo, 10LL);
    if ( !v13 )
      sub_1C3B9C0(0LL, v14);
    v21 = (System_Object_array *)v13;
    v22 = StringLiteral_20040/*"img_parameter_D"*/;
    if ( StringLiteral_20040/*"img_parameter_D"*/ )
    {
      v22 = sub_1C3B8A0(StringLiteral_20040/*"img_parameter_D"*/, v21->obj.klass->_1.element_class);
      if ( !v22 )
        goto LABEL_54;
      v23 = StringLiteral_20040/*"img_parameter_D"*/;
    }
    else
    {
      v23 = 0LL;
    }
    if ( !v21->max_length )
      goto LABEL_53;
    v21->m_Items[0] = (Il2CppObject *)v23;
    sub_1C3B708((PartyOrganizationUtility_o *)v21->m_Items, v23, v15, v16, v17, v18, v19, v20);
    v94 = 0;
    v22 = j_il2cpp_value_box_0(float_TypeInfo, &v94, v24, v25, v26);
    v33 = v22;
    if ( !v22 || (v22 = sub_1C3B8A0(v22, v21->obj.klass->_1.element_class)) != 0 )
    {
      if ( v21->max_length <= 1 )
        goto LABEL_53;
      v21->m_Items[1] = (Il2CppObject *)v33;
      sub_1C3B708((PartyOrganizationUtility_o *)&v21->m_Items[1], v33, v27, v28, v29, v30, v31, v32);
      v22 = StringLiteral_24469/*"x/("*/;
      if ( StringLiteral_24469/*"x/("*/ )
      {
        v22 = sub_1C3B8A0(StringLiteral_24469/*"x/("*/, v21->obj.klass->_1.element_class);
        if ( !v22 )
          goto LABEL_54;
        v23 = StringLiteral_24469/*"x/("*/;
      }
      else
      {
        v23 = 0LL;
      }
      if ( v21->max_length <= 2 )
        goto LABEL_53;
      v21->m_Items[2] = (Il2CppObject *)v23;
      sub_1C3B708((PartyOrganizationUtility_o *)&v21->m_Items[2], v23, v34, v35, v36, v37, v38, v39);
      v93 = 1065353216;
      v22 = j_il2cpp_value_box_0(float_TypeInfo, &v93, v40, v41, v42);
      v49 = v22;
      if ( !v22 || (v22 = sub_1C3B8A0(v22, v21->obj.klass->_1.element_class)) != 0 )
      {
        if ( v21->max_length <= 3 )
          goto LABEL_53;
        v21->m_Items[3] = (Il2CppObject *)v49;
        sub_1C3B708((PartyOrganizationUtility_o *)&v21->m_Items[3], v49, v43, v44, v45, v46, v47, v48);
        v22 = StringLiteral_22739/*"seagreen"*/;
        if ( StringLiteral_22739/*"seagreen"*/ )
        {
          v22 = sub_1C3B8A0(StringLiteral_22739/*"seagreen"*/, v21->obj.klass->_1.element_class);
          if ( !v22 )
            goto LABEL_54;
          v23 = StringLiteral_22739/*"seagreen"*/;
        }
        else
        {
          v23 = 0LL;
        }
        if ( v21->max_length <= 4 )
          goto LABEL_53;
        v21->m_Items[4] = (Il2CppObject *)v23;
        sub_1C3B708((PartyOrganizationUtility_o *)&v21->m_Items[4], v23, v50, v51, v52, v53, v54, v55);
        v22 = StringLiteral_15484/*"['"*/;
        if ( StringLiteral_15484/*"['"*/ )
        {
          v22 = sub_1C3B8A0(StringLiteral_15484/*"['"*/, v21->obj.klass->_1.element_class);
          if ( !v22 )
            goto LABEL_54;
          v23 = StringLiteral_15484/*"['"*/;
        }
        else
        {
          v23 = 0LL;
        }
        if ( v21->max_length <= 5 )
          goto LABEL_53;
        v21->m_Items[5] = (Il2CppObject *)v23;
        sub_1C3B708((PartyOrganizationUtility_o *)&v21->m_Items[5], v23, v56, v57, v58, v59, v60, v61);
        v22 = StringLiteral_22731/*"se-NO"*/;
        if ( StringLiteral_22731/*"se-NO"*/ )
        {
          v22 = sub_1C3B8A0(StringLiteral_22731/*"se-NO"*/, v21->obj.klass->_1.element_class);
          if ( !v22 )
            goto LABEL_54;
          v23 = StringLiteral_22731/*"se-NO"*/;
        }
        else
        {
          v23 = 0LL;
        }
        if ( v21->max_length <= 6 )
          goto LABEL_53;
        v21->m_Items[6] = (Il2CppObject *)v23;
        sub_1C3B708((PartyOrganizationUtility_o *)&v21->m_Items[6], v23, v62, v63, v64, v65, v66, v67);
        v22 = StringLiteral_6862/*"Gainsboro"*/;
        if ( StringLiteral_6862/*"Gainsboro"*/ )
        {
          v22 = sub_1C3B8A0(StringLiteral_6862/*"Gainsboro"*/, v21->obj.klass->_1.element_class);
          if ( !v22 )
            goto LABEL_54;
          v23 = StringLiteral_6862/*"Gainsboro"*/;
        }
        else
        {
          v23 = 0LL;
        }
        if ( v21->max_length <= 7 )
          goto LABEL_53;
        v21->m_Items[7] = (Il2CppObject *)v23;
        sub_1C3B708((PartyOrganizationUtility_o *)&v21->m_Items[7], v23, v68, v69, v70, v71, v72, v73);
        v22 = StringLiteral_24427/*"x-cp20936"*/;
        if ( StringLiteral_24427/*"x-cp20936"*/ )
        {
          v22 = sub_1C3B8A0(StringLiteral_24427/*"x-cp20936"*/, v21->obj.klass->_1.element_class);
          if ( !v22 )
            goto LABEL_54;
          v23 = StringLiteral_24427/*"x-cp20936"*/;
        }
        else
        {
          v23 = 0LL;
        }
        if ( v21->max_length <= 8 )
          goto LABEL_53;
        v21->m_Items[8] = (Il2CppObject *)v23;
        sub_1C3B708((PartyOrganizationUtility_o *)&v21->m_Items[8], v23, v74, v75, v76, v77, v78, v79);
        v92 = 1072064102;
        v22 = j_il2cpp_value_box_0(float_TypeInfo, &v92, v80, v81, v82);
        v89 = v22;
        if ( !v22 || (v22 = sub_1C3B8A0(v22, v21->obj.klass->_1.element_class)) != 0 )
        {
          if ( v21->max_length > 9 )
          {
            v21->m_Items[9] = (Il2CppObject *)v89;
            sub_1C3B708((PartyOrganizationUtility_o *)&v21->m_Items[9], v89, v83, v84, v85, v86, v87, v88);
            if ( !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
            v90 = iTween__Hash(v21, 0LL);
            iTween__ValueTo(gameObject, v90, 0LL);
            return;
          }
LABEL_53:
          sub_1C3B9C8(v22, v23);
        }
      }
    }
LABEL_54:
    v91 = sub_1C3B9E4(v22);
    sub_1C3B88C(v91, 0LL);
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
  __int64 v15; // x25
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  int v19; // w8
  UILabel_o *buddyPointLabel; // x20
  Il2CppObject *v21; // x21
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  Il2CppObject *v25; // x0
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  Il2CppObject *v29; // x0
  System_String_o *v30; // x0
  UILabel_o *buddyPointRankLabel; // x19
  System_String_o *v32; // x20
  __int64 v33; // [xsp+8h] [xbp-58h] BYREF
  int32_t beforeBuddyRank; // [xsp+18h] [xbp-48h] BYREF
  int v35; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4C253CA & 1) == 0 )
  {
    sub_1C3B764(&int_TypeInfo, method);
    sub_1C3B764(&long_TypeInfo, v5);
    sub_1C3B764(&LocalizationManager_TypeInfo, v6);
    sub_1C3B764(&StringLiteral_2841/*"BATTLE_RESULT_BONDS_WAVE_COUNT"*/, v7);
    sub_1C3B764(&StringLiteral_25638, v8);
    byte_4C253CA = 1;
  }
  resultBuddyPointInfo = this->fields.resultBuddyPointInfo;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_15;
  if ( resultBuddyPointInfo )
  {
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    v12 = this->fields.resultBuddyPointInfo;
    if ( v12 )
    {
      befBuddyPoint = v12->fields.befBuddyPoint;
      v14 = v12->fields.aftBuddyPoint - befBuddyPoint;
      v15 = v14;
      v19 = BattleUtility__FloorToInt((float)v14 * val, 0LL) + befBuddyPoint;
      buddyPointLabel = this->fields.buddyPointLabel;
      if ( v19 >= 9999999 )
        v19 = 9999999;
      v35 = v19;
      v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35, v16, v17, v18);
      v33 = v15;
      v25 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v33, v22, v23, v24);
      gameObject = (UnityEngine_GameObject_o *)System_String__Format_63382984(
                                                 (System_String_o *)StringLiteral_25638,
                                                 v21,
                                                 v25,
                                                 0LL);
      if ( buddyPointLabel )
      {
        UILabel__set_text(buddyPointLabel, (System_String_o *)gameObject, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.buddyPointLabel;
        if ( gameObject )
        {
          UILabel__SetCondensedScale((UILabel_o *)gameObject, this->fields.pointLabelMaxWidth, 0, 0LL);
          beforeBuddyRank = this->fields.beforeBuddyRank;
          v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &beforeBuddyRank, v26, v27, v28);
          v30 = System_String__Format((System_String_o *)StringLiteral_2841/*"BATTLE_RESULT_BONDS_WAVE_COUNT"*/, v29, 0LL);
          buddyPointRankLabel = this->fields.buddyPointRankLabel;
          v32 = v30;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v32, 0LL);
          if ( buddyPointRankLabel )
          {
            UILabel__set_text(buddyPointRankLabel, (System_String_o *)gameObject, 0LL);
            return;
          }
        }
      }
    }
LABEL_15:
    sub_1C3B9C0(gameObject, v11);
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}