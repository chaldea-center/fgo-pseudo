void BattleResultBuddyPointInfoComponent___ctor(BattleResultBuddyPointInfoComponent_o *this, const MethodInfo *method)
{
  this->fields.pointLabelMaxWidth = 150;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleResultBuddyPointInfoComponent__FinishUpdateBuddyPoint(
        BattleResultBuddyPointInfoComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  System_String_o *v4; // x0
  __int64 v5; // x1
  struct BattleBuddyPointInfo_o *resultBuddyPointInfo; // x8
  int aftBuddyPoint; // w9
  UILabel_o *buddyPointLabel; // x20
  int v9; // w24
  int v10; // w8
  Il2CppObject *v11; // x21
  Il2CppObject *v12; // x0
  const MethodInfo *v13; // x2
  struct BattleBuddyPointInfo_o *v14; // x8
  const MethodInfo *v15; // x1
  int v16; // [xsp+8h] [xbp-38h] BYREF
  int v17; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D30263 & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&StringLiteral_25473/*"{0}（＋{1}）"*/);
    sub_1C94098(&iTween_TypeInfo);
    byte_4D30263 = 1;
  }
  if ( this->fields.resultBuddyPointInfo )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__Stop_64165648(gameObject, 0);
    resultBuddyPointInfo = this->fields.resultBuddyPointInfo;
    if ( !resultBuddyPointInfo )
      goto LABEL_16;
    aftBuddyPoint = resultBuddyPointInfo->fields.aftBuddyPoint;
    buddyPointLabel = this->fields.buddyPointLabel;
    v9 = aftBuddyPoint - resultBuddyPointInfo->fields.befBuddyPoint;
    v10 = aftBuddyPoint >= 9999999 ? 9999999 : resultBuddyPointInfo->fields.aftBuddyPoint;
    v17 = v10;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
    v16 = v9;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
    v4 = System_String__Format_64459052((System_String_o *)StringLiteral_25473/*"{0}（＋{1}）"*/, v11, v12, 0);
    if ( !buddyPointLabel
      || (UILabel__set_text(buddyPointLabel, v4, 0), (v4 = (System_String_o *)this->fields.buddyPointLabel) == 0)
      || (UILabel__SetCondensedScale((UILabel_o *)v4, this->fields.pointLabelMaxWidth, 0, 0),
          (v14 = this->fields.resultBuddyPointInfo) == 0) )
    {
LABEL_16:
      sub_1C942F0(v4, v5);
    }
    if ( BattleResultBuddyPointInfoComponent__IsRankUpBuddyRank(this, v14->fields.aftBuddyPoint, v13) )
      BattleResultBuddyPointInfoComponent__PlayBuddyRankUp(this, v15);
  }
}


// local variable allocation has failed, the output may be wrong!
bool BattleResultBuddyPointInfoComponent__IsRankUpBuddyRank(
        BattleResultBuddyPointInfoComponent_o *this,
        int32_t buddyPoint,
        const MethodInfo *method)
{
  EventServantPointRankMaster_o *rankMaster; // x0
  struct EventServantPointRankMaster_o **p_rankMaster; // x21
  Il2CppObject *Master_object; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct BattleBuddyPointInfo_o *resultBuddyPointInfo; // x8
  EventServantPointRankEntity_o *EnableEntity; // x0
  int32_t svtPointRank; // w8

  if ( (byte_4D30262 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    byte_4D30262 = 1;
  }
  p_rankMaster = &this->fields.rankMaster;
  rankMaster = this->fields.rankMaster;
  if ( !rankMaster )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    *p_rankMaster = (struct EventServantPointRankMaster_o *)Master_object;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.rankMaster,
      (int32_t)Master_object,
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
    sub_1C942F0(rankMaster, *(_QWORD *)&buddyPoint);
  EnableEntity = EventServantPointRankMaster__GetEnableEntity(
                   rankMaster,
                   this->fields.buddyPointEventId,
                   buddyPoint,
                   resultBuddyPointInfo->fields.svtId,
                   0);
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


void BattleResultBuddyPointInfoComponent__PlayBuddyRankUp(
        BattleResultBuddyPointInfoComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *buddyPointRankUpObject; // x0
  Il2CppObject *v4; // x0
  System_String_o *v5; // x20
  Il2CppObject *Object_object__51893132; // x20
  UnityEngine_GameObject_o *v7; // x20
  UnityEngine_Transform_o *v8; // x21
  Il2CppObject *Component_object; // x21
  Il2CppObject *v10; // x20
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  UILabel_o *buddyPointRankLabel; // x20
  System_String_o *v14; // x21
  int32_t beforeBuddyRank; // [xsp+8h] [xbp-58h] BYREF
  int32_t buddyPointEventId; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4D30264 & 1) == 0 )
  {
    sub_1C94098(&Method_AssetData_GetObject_GameObject____79044816);
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_5859/*"Effect/BattleResult/{0}"*/);
    sub_1C94098(&StringLiteral_17262/*"bit_buddy_rankup"*/);
    sub_1C94098(&StringLiteral_2694/*"BATTLE_BUDDY_POINT_RANK_{0}"*/);
    byte_4D30264 = 1;
  }
  buddyPointRankUpObject = this->fields.buddyPointRankUpObject;
  if ( !buddyPointRankUpObject )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(buddyPointRankUpObject, 1, 0);
  buddyPointEventId = this->fields.buddyPointEventId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &buddyPointEventId);
  v5 = System_String__Format((System_String_o *)StringLiteral_5859/*"Effect/BattleResult/{0}"*/, v4, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)AssetManager__getAssetStorage(v5, 0);
  if ( !buddyPointRankUpObject )
    goto LABEL_29;
  Object_object__51893132 = AssetData__GetObject_object__51893132(
                              (AssetData_o *)buddyPointRankUpObject,
                              (System_String_o *)StringLiteral_17262/*"bit_buddy_rankup"*/,
                              (const MethodInfo_317D38C *)Method_AssetData_GetObject_GameObject____79044816);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                         Object_object__51893132,
                                                         (const MethodInfo_3229578 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !buddyPointRankUpObject )
    goto LABEL_29;
  v7 = buddyPointRankUpObject;
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(buddyPointRankUpObject, 0);
  if ( !this->fields.buddyPointRankUpObject )
    goto LABEL_29;
  v8 = (UnityEngine_Transform_o *)buddyPointRankUpObject;
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                         this->fields.buddyPointRankUpObject,
                                                         0);
  if ( !v8 )
    goto LABEL_29;
  UnityEngine_Transform__SetParent(v8, (UnityEngine_Transform_o *)buddyPointRankUpObject, 0);
  if ( !byte_4D25F19 )
  {
    sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F19 = 1;
  }
  UnityEngine_Transform__set_localPosition(v8, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  if ( !byte_4D25F1E )
  {
    sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F1E = 1;
  }
  UnityEngine_Transform__set_localScale(v8, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v7,
                       (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  v10 = UnityEngine_GameObject__GetComponent_object_(
          v7,
          (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                         (UnityEngine_Object_o *)Component_object,
                                                         0,
                                                         0);
  if ( ((unsigned __int8)buddyPointRankUpObject & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_29;
    UnityEngine_Animation__Play_71854448(
      (UnityEngine_Animation_o *)Component_object,
      (System_String_o *)StringLiteral_17262/*"bit_buddy_rankup"*/,
      0);
  }
  else
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                           (UnityEngine_Object_o *)v10,
                                                           0,
                                                           0);
    if ( ((unsigned __int8)buddyPointRankUpObject & 1) != 0 )
    {
      if ( !v10 )
        goto LABEL_29;
      SimpleAnimation__Play_67362784((SimpleAnimation_o *)v10, (System_String_o *)StringLiteral_17262/*"bit_buddy_rankup"*/, 0);
    }
  }
  beforeBuddyRank = this->fields.beforeBuddyRank;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &beforeBuddyRank);
  v12 = System_String__Format((System_String_o *)StringLiteral_2694/*"BATTLE_BUDDY_POINT_RANK_{0}"*/, v11, 0);
  buddyPointRankLabel = this->fields.buddyPointRankLabel;
  v14 = v12;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v14, 0);
  if ( !buddyPointRankLabel
    || (UILabel__set_text(buddyPointRankLabel, (System_String_o *)buddyPointRankUpObject, 0),
        (buddyPointRankUpObject = (UnityEngine_GameObject_o *)this->fields.buddyPointRankLabel) == 0) )
  {
LABEL_29:
    sub_1C942F0(buddyPointRankUpObject, method);
  }
  UILabel__SetCondensedScale((UILabel_o *)buddyPointRankUpObject, this->fields.pointLabelMaxWidth, 0, 0);
}


void BattleResultBuddyPointInfoComponent__SetBuddyPointInfo(
        BattleResultBuddyPointInfoComponent_o *this,
        BattleBuddyPointInfo_o *buddyPointInfo,
        int32_t eventId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *buddyPointRankUpObject; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  Il2CppObject *Master_object; // x0
  struct EventServantPointRankMaster_o **p_rankMaster; // x20
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  struct BattleBuddyPointInfo_o *resultBuddyPointInfo; // x8
  EventServantPointRankEntity_o *EnableEntity; // x0
  int32_t svtPointRank; // w8

  if ( (byte_4D3025F & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    byte_4D3025F = 1;
  }
  buddyPointRankUpObject = this->fields.buddyPointRankUpObject;
  if ( !buddyPointRankUpObject )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(buddyPointRankUpObject, 0, 0);
  this->fields.resultBuddyPointInfo = buddyPointInfo;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.resultBuddyPointInfo,
    (int32_t)buddyPointInfo,
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
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  this->fields.rankMaster = (struct EventServantPointRankMaster_o *)Master_object;
  p_rankMaster = &this->fields.rankMaster;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.rankMaster,
    (int32_t)Master_object,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  resultBuddyPointInfo = this->fields.resultBuddyPointInfo;
  if ( !resultBuddyPointInfo || (buddyPointRankUpObject = (UnityEngine_GameObject_o *)*p_rankMaster) == 0 )
LABEL_14:
    sub_1C942F0(buddyPointRankUpObject, buddyPointInfo);
  EnableEntity = EventServantPointRankMaster__GetEnableEntity(
                   (EventServantPointRankMaster_o *)buddyPointRankUpObject,
                   this->fields.buddyPointEventId,
                   resultBuddyPointInfo->fields.befBuddyPoint,
                   resultBuddyPointInfo->fields.svtId,
                   0);
  if ( EnableEntity )
    svtPointRank = EnableEntity->fields.svtPointRank;
  else
    svtPointRank = 0;
  this->fields.beforeBuddyRank = svtPointRank;
}


void BattleResultBuddyPointInfoComponent__StartUpdateBuddyPoint(
        BattleResultBuddyPointInfoComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  __int64 v12; // x20
  __int64 v13; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  __int64 v21; // x21
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  __int64 v28; // x1
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  __int64 v35; // x21
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  __int64 v42; // x1
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  __int64 v49; // x1
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  __int64 v56; // x1
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  __int64 v63; // x1
  int32_t v64; // w2
  int32_t v65; // w3
  System_String_o *v66; // x4
  int32_t v67; // w5
  int64_t v68; // x6
  System_String_o *v69; // x7
  __int64 v70; // x1
  int32_t v71; // w2
  int32_t v72; // w3
  System_String_o *v73; // x4
  int32_t v74; // w5
  int64_t v75; // x6
  System_String_o *v76; // x7
  __int64 v77; // x21
  System_Collections_Hashtable_o *v78; // x0
  __int64 v79; // x0
  int v80; // [xsp+4h] [xbp-3Ch] BYREF
  int v81; // [xsp+8h] [xbp-38h] BYREF
  int v82; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D30260 & 1) == 0 )
  {
    sub_1C94098(&object___TypeInfo);
    sub_1C94098(&float_TypeInfo);
    sub_1C94098(&StringLiteral_19853/*"from"*/);
    sub_1C94098(&StringLiteral_24310/*"time"*/);
    sub_1C94098(&StringLiteral_22649/*"onupdate"*/);
    sub_1C94098(&StringLiteral_24349/*"to"*/);
    sub_1C94098(&StringLiteral_6740/*"FinishUpdateBuddyPoint"*/);
    sub_1C94098(&StringLiteral_22641/*"oncomplete"*/);
    sub_1C94098(&StringLiteral_15239/*"UpdateBuddyPointInfo"*/);
    sub_1C94098(&iTween_TypeInfo);
    byte_4D30260 = 1;
  }
  if ( this->fields.resultBuddyPointInfo )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v4 = sub_1C94140(object___TypeInfo, 10);
    if ( !v4 )
      sub_1C942F0(0, v5);
    v12 = v4;
    v13 = StringLiteral_19853/*"from"*/;
    if ( StringLiteral_19853/*"from"*/ )
    {
      v13 = sub_1C941D4(StringLiteral_19853/*"from"*/, *(_QWORD *)(*(_QWORD *)v12 + 64LL));
      if ( !v13 )
        goto LABEL_54;
      v14 = StringLiteral_19853/*"from"*/;
    }
    else
    {
      v14 = 0;
    }
    if ( !*(_DWORD *)(v12 + 24) )
      goto LABEL_53;
    *(_QWORD *)(v12 + 32) = v14;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v12 + 32), v14, v6, v7, v8, v9, v10, v11);
    v82 = 0;
    v13 = j_il2cpp_value_box_0(float_TypeInfo, &v82);
    v21 = v13;
    if ( !v13 || (v13 = sub_1C941D4(v13, *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
    {
      if ( *(_DWORD *)(v12 + 24) <= 1u )
        goto LABEL_53;
      *(_QWORD *)(v12 + 40) = v21;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v12 + 40), v21, v15, v16, v17, v18, v19, v20);
      v13 = StringLiteral_24349/*"to"*/;
      if ( StringLiteral_24349/*"to"*/ )
      {
        v13 = sub_1C941D4(StringLiteral_24349/*"to"*/, *(_QWORD *)(*(_QWORD *)v12 + 64LL));
        if ( !v13 )
          goto LABEL_54;
        v28 = StringLiteral_24349/*"to"*/;
      }
      else
      {
        v28 = 0;
      }
      if ( *(_DWORD *)(v12 + 24) <= 2u )
        goto LABEL_53;
      *(_QWORD *)(v12 + 48) = v28;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v12 + 48), v28, v22, v23, v24, v25, v26, v27);
      v81 = 1065353216;
      v13 = j_il2cpp_value_box_0(float_TypeInfo, &v81);
      v35 = v13;
      if ( !v13 || (v13 = sub_1C941D4(v13, *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v12 + 24) <= 3u )
          goto LABEL_53;
        *(_QWORD *)(v12 + 56) = v35;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v12 + 56), v35, v29, v30, v31, v32, v33, v34);
        v13 = StringLiteral_22649/*"onupdate"*/;
        if ( StringLiteral_22649/*"onupdate"*/ )
        {
          v13 = sub_1C941D4(StringLiteral_22649/*"onupdate"*/, *(_QWORD *)(*(_QWORD *)v12 + 64LL));
          if ( !v13 )
            goto LABEL_54;
          v42 = StringLiteral_22649/*"onupdate"*/;
        }
        else
        {
          v42 = 0;
        }
        if ( *(_DWORD *)(v12 + 24) <= 4u )
          goto LABEL_53;
        *(_QWORD *)(v12 + 64) = v42;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v12 + 64), v42, v36, v37, v38, v39, v40, v41);
        v13 = StringLiteral_15239/*"UpdateBuddyPointInfo"*/;
        if ( StringLiteral_15239/*"UpdateBuddyPointInfo"*/ )
        {
          v13 = sub_1C941D4(StringLiteral_15239/*"UpdateBuddyPointInfo"*/, *(_QWORD *)(*(_QWORD *)v12 + 64LL));
          if ( !v13 )
            goto LABEL_54;
          v49 = StringLiteral_15239/*"UpdateBuddyPointInfo"*/;
        }
        else
        {
          v49 = 0;
        }
        if ( *(_DWORD *)(v12 + 24) <= 5u )
          goto LABEL_53;
        *(_QWORD *)(v12 + 72) = v49;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v12 + 72), v49, v43, v44, v45, v46, v47, v48);
        v13 = StringLiteral_22641/*"oncomplete"*/;
        if ( StringLiteral_22641/*"oncomplete"*/ )
        {
          v13 = sub_1C941D4(StringLiteral_22641/*"oncomplete"*/, *(_QWORD *)(*(_QWORD *)v12 + 64LL));
          if ( !v13 )
            goto LABEL_54;
          v56 = StringLiteral_22641/*"oncomplete"*/;
        }
        else
        {
          v56 = 0;
        }
        if ( *(_DWORD *)(v12 + 24) <= 6u )
          goto LABEL_53;
        *(_QWORD *)(v12 + 80) = v56;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v12 + 80), v56, v50, v51, v52, v53, v54, v55);
        v13 = StringLiteral_6740/*"FinishUpdateBuddyPoint"*/;
        if ( StringLiteral_6740/*"FinishUpdateBuddyPoint"*/ )
        {
          v13 = sub_1C941D4(StringLiteral_6740/*"FinishUpdateBuddyPoint"*/, *(_QWORD *)(*(_QWORD *)v12 + 64LL));
          if ( !v13 )
            goto LABEL_54;
          v63 = StringLiteral_6740/*"FinishUpdateBuddyPoint"*/;
        }
        else
        {
          v63 = 0;
        }
        if ( *(_DWORD *)(v12 + 24) <= 7u )
          goto LABEL_53;
        *(_QWORD *)(v12 + 88) = v63;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v12 + 88), v63, v57, v58, v59, v60, v61, v62);
        v13 = StringLiteral_24310/*"time"*/;
        if ( StringLiteral_24310/*"time"*/ )
        {
          v13 = sub_1C941D4(StringLiteral_24310/*"time"*/, *(_QWORD *)(*(_QWORD *)v12 + 64LL));
          if ( !v13 )
            goto LABEL_54;
          v70 = StringLiteral_24310/*"time"*/;
        }
        else
        {
          v70 = 0;
        }
        if ( *(_DWORD *)(v12 + 24) <= 8u )
          goto LABEL_53;
        *(_QWORD *)(v12 + 96) = v70;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v12 + 96), v70, v64, v65, v66, v67, v68, v69);
        v80 = 1072064102;
        v13 = j_il2cpp_value_box_0(float_TypeInfo, &v80);
        v77 = v13;
        if ( !v13 || (v13 = sub_1C941D4(v13, *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v12 + 24) > 9u )
          {
            *(_QWORD *)(v12 + 104) = v77;
            sub_1C9403C((GrandQuestFolderBoardItem_o *)(v12 + 104), v77, v71, v72, v73, v74, v75, v76);
            if ( !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
            v78 = iTween__Hash((System_Object_array *)v12, 0);
            iTween__ValueTo(gameObject, v78, 0);
            return;
          }
LABEL_53:
          sub_1C942F8(v13);
        }
      }
    }
LABEL_54:
    v79 = sub_1C94314(v13);
    sub_1C941C0(v79, 0);
  }
}


void BattleResultBuddyPointInfoComponent__UpdateBuddyPointInfo(
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
  int v12; // w8
  UILabel_o *buddyPointLabel; // x20
  Il2CppObject *v14; // x21
  Il2CppObject *v15; // x0
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  UILabel_o *buddyPointRankLabel; // x19
  System_String_o *v19; // x20
  __int64 v20; // [xsp+8h] [xbp-58h] BYREF
  int32_t beforeBuddyRank; // [xsp+18h] [xbp-48h] BYREF
  int v22; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4D30261 & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&long_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_2694/*"BATTLE_BUDDY_POINT_RANK_{0}"*/);
    sub_1C94098(&StringLiteral_25473/*"{0}（＋{1}）"*/);
    byte_4D30261 = 1;
  }
  resultBuddyPointInfo = this->fields.resultBuddyPointInfo;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_15;
  if ( resultBuddyPointInfo )
  {
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    v8 = this->fields.resultBuddyPointInfo;
    if ( v8 )
    {
      befBuddyPoint = v8->fields.befBuddyPoint;
      v10 = v8->fields.aftBuddyPoint - befBuddyPoint;
      v11 = v10;
      v12 = BattleUtility__FloorToInt((float)v10 * val, 0) + befBuddyPoint;
      buddyPointLabel = this->fields.buddyPointLabel;
      if ( v12 >= 9999999 )
        v12 = 9999999;
      v22 = v12;
      v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
      v20 = v11;
      v15 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v20);
      gameObject = (UnityEngine_GameObject_o *)System_String__Format_64459052(
                                                 (System_String_o *)StringLiteral_25473/*"{0}（＋{1}）"*/,
                                                 v14,
                                                 v15,
                                                 0);
      if ( buddyPointLabel )
      {
        UILabel__set_text(buddyPointLabel, (System_String_o *)gameObject, 0);
        gameObject = (UnityEngine_GameObject_o *)this->fields.buddyPointLabel;
        if ( gameObject )
        {
          UILabel__SetCondensedScale((UILabel_o *)gameObject, this->fields.pointLabelMaxWidth, 0, 0);
          beforeBuddyRank = this->fields.beforeBuddyRank;
          v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &beforeBuddyRank);
          v17 = System_String__Format((System_String_o *)StringLiteral_2694/*"BATTLE_BUDDY_POINT_RANK_{0}"*/, v16, 0);
          buddyPointRankLabel = this->fields.buddyPointRankLabel;
          v19 = v17;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v19, 0);
          if ( buddyPointRankLabel )
          {
            UILabel__set_text(buddyPointRankLabel, (System_String_o *)gameObject, 0);
            return;
          }
        }
      }
    }
LABEL_15:
    sub_1C942F0(gameObject, v7);
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}