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
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  __int64 v8; // x5
  __int64 v9; // x6
  __int64 v10; // x7
  struct BattleBuddyPointInfo_o *resultBuddyPointInfo; // x8
  int aftBuddyPoint; // w9
  UILabel_o *buddyPointLabel; // x20
  int v14; // w24
  int v15; // w8
  Il2CppObject *v16; // x21
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  __int64 v20; // x5
  __int64 v21; // x6
  __int64 v22; // x7
  Il2CppObject *v23; // x0
  const MethodInfo *v24; // x2
  struct BattleBuddyPointInfo_o *v25; // x8
  const MethodInfo *v26; // x1
  int v27; // [xsp+8h] [xbp-38h] BYREF
  int v28; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C467B5 & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&StringLiteral_25220/*"{0}（＋{1}）"*/);
    sub_1C37058(&iTween_TypeInfo);
    byte_4C467B5 = 1;
  }
  if ( this->fields.resultBuddyPointInfo )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__Stop_63309560(gameObject, 0);
    resultBuddyPointInfo = this->fields.resultBuddyPointInfo;
    if ( !resultBuddyPointInfo )
      goto LABEL_16;
    aftBuddyPoint = resultBuddyPointInfo->fields.aftBuddyPoint;
    buddyPointLabel = this->fields.buddyPointLabel;
    v14 = aftBuddyPoint - resultBuddyPointInfo->fields.befBuddyPoint;
    v15 = aftBuddyPoint >= 9999999 ? 9999999 : resultBuddyPointInfo->fields.aftBuddyPoint;
    v28 = v15;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, v5, v6, v7, v8, v9, v10);
    v27 = v14;
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27, v17, v18, v19, v20, v21, v22);
    v4 = System_String__Format_63602948((System_String_o *)StringLiteral_25220/*"{0}（＋{1}）"*/, v16, v23, 0);
    if ( !buddyPointLabel
      || (UILabel__set_text(buddyPointLabel, v4, 0), (v4 = (System_String_o *)this->fields.buddyPointLabel) == 0)
      || (UILabel__SetCondensedScale((UILabel_o *)v4, this->fields.pointLabelMaxWidth, 0, 0),
          (v25 = this->fields.resultBuddyPointInfo) == 0) )
    {
LABEL_16:
      sub_1C372B4(v4);
    }
    if ( BattleResultBuddyPointInfoComponent__IsRankUpBuddyRank(this, v25->fields.aftBuddyPoint, v24) )
      BattleResultBuddyPointInfoComponent__PlayBuddyRankUp(this, v26);
  }
}


bool BattleResultBuddyPointInfoComponent__IsRankUpBuddyRank(
        BattleResultBuddyPointInfoComponent_o *this,
        int32_t buddyPoint,
        const MethodInfo *method)
{
  EventServantPointRankMaster_o *rankMaster; // x0
  struct EventServantPointRankMaster_o **p_rankMaster; // x21
  Il2CppObject *Master_object; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct BattleBuddyPointInfo_o *resultBuddyPointInfo; // x8
  EventServantPointRankEntity_o *EnableEntity; // x0
  int32_t svtPointRank; // w8

  if ( (byte_4C467B4 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    byte_4C467B4 = 1;
  }
  p_rankMaster = &this->fields.rankMaster;
  rankMaster = this->fields.rankMaster;
  if ( !rankMaster )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    *p_rankMaster = (struct EventServantPointRankMaster_o *)Master_object;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.rankMaster, (int32_t)Master_object, v8, v9);
    rankMaster = *p_rankMaster;
  }
  resultBuddyPointInfo = this->fields.resultBuddyPointInfo;
  if ( !resultBuddyPointInfo || !rankMaster )
    sub_1C372B4(rankMaster);
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
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  __int64 v7; // x5
  __int64 v8; // x6
  __int64 v9; // x7
  Il2CppObject *v10; // x0
  System_String_o *v11; // x20
  Il2CppObject *Object_object__51154888; // x20
  UnityEngine_GameObject_o *v13; // x20
  UnityEngine_Transform_o *v14; // x21
  Il2CppObject *Component_object; // x21
  Il2CppObject *v16; // x20
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  __int64 v20; // x5
  __int64 v21; // x6
  __int64 v22; // x7
  Il2CppObject *v23; // x0
  System_String_o *v24; // x0
  UILabel_o *buddyPointRankLabel; // x20
  System_String_o *v26; // x21
  int32_t beforeBuddyRank; // [xsp+8h] [xbp-58h] BYREF
  int32_t buddyPointEventId; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4C467B6 & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObject_GameObject____78105168);
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_5854/*"Effect/BattleResult/{0}"*/);
    sub_1C37058(&StringLiteral_17179/*"bit_buddy_rankup"*/);
    sub_1C37058(&StringLiteral_2698/*"BATTLE_BUDDY_POINT_RANK_{0}"*/);
    byte_4C467B6 = 1;
  }
  buddyPointRankUpObject = this->fields.buddyPointRankUpObject;
  if ( !buddyPointRankUpObject )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(buddyPointRankUpObject, 1, 0);
  buddyPointEventId = this->fields.buddyPointEventId;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &buddyPointEventId, v4, v5, v6, v7, v8, v9);
  v11 = System_String__Format((System_String_o *)StringLiteral_5854/*"Effect/BattleResult/{0}"*/, v10, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)AssetManager__getAssetStorage(v11, 0);
  if ( !buddyPointRankUpObject )
    goto LABEL_29;
  Object_object__51154888 = AssetData__GetObject_object__51154888(
                              (AssetData_o *)buddyPointRankUpObject,
                              (System_String_o *)StringLiteral_17179/*"bit_buddy_rankup"*/,
                              (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                         Object_object__51154888,
                                                         (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !buddyPointRankUpObject )
    goto LABEL_29;
  v13 = buddyPointRankUpObject;
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(buddyPointRankUpObject, 0);
  if ( !this->fields.buddyPointRankUpObject )
    goto LABEL_29;
  v14 = (UnityEngine_Transform_o *)buddyPointRankUpObject;
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                         this->fields.buddyPointRankUpObject,
                                                         0);
  if ( !v14 )
    goto LABEL_29;
  UnityEngine_Transform__SetParent(v14, (UnityEngine_Transform_o *)buddyPointRankUpObject, 0);
  if ( !byte_4C3C921 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  UnityEngine_Transform__set_localPosition(v14, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  if ( !byte_4C3C926 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C926 = 1;
  }
  UnityEngine_Transform__set_localScale(v14, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v13,
                       (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  v16 = UnityEngine_GameObject__GetComponent_object_(
          v13,
          (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                         (UnityEngine_Object_o *)Component_object,
                                                         0,
                                                         0);
  if ( ((unsigned __int8)buddyPointRankUpObject & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_29;
    UnityEngine_Animation__Play_71012036(
      (UnityEngine_Animation_o *)Component_object,
      (System_String_o *)StringLiteral_17179/*"bit_buddy_rankup"*/,
      0);
  }
  else
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                           (UnityEngine_Object_o *)v16,
                                                           0,
                                                           0);
    if ( ((unsigned __int8)buddyPointRankUpObject & 1) != 0 )
    {
      if ( !v16 )
        goto LABEL_29;
      SimpleAnimation__Play_66507412((SimpleAnimation_o *)v16, (System_String_o *)StringLiteral_17179/*"bit_buddy_rankup"*/, 0);
    }
  }
  beforeBuddyRank = this->fields.beforeBuddyRank;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &beforeBuddyRank, v17, v18, v19, v20, v21, v22);
  v24 = System_String__Format((System_String_o *)StringLiteral_2698/*"BATTLE_BUDDY_POINT_RANK_{0}"*/, v23, 0);
  buddyPointRankLabel = this->fields.buddyPointRankLabel;
  v26 = v24;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v26, 0);
  if ( !buddyPointRankLabel
    || (UILabel__set_text(buddyPointRankLabel, (System_String_o *)buddyPointRankUpObject, 0),
        (buddyPointRankUpObject = (UnityEngine_GameObject_o *)this->fields.buddyPointRankLabel) == 0) )
  {
LABEL_29:
    sub_1C372B4(buddyPointRankUpObject);
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
  const MethodInfo *v9; // x3
  Il2CppObject *Master_object; // x0
  struct EventServantPointRankMaster_o **p_rankMaster; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct BattleBuddyPointInfo_o *resultBuddyPointInfo; // x8
  EventServantPointRankEntity_o *EnableEntity; // x0
  int32_t svtPointRank; // w8

  if ( (byte_4C467B1 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    byte_4C467B1 = 1;
  }
  buddyPointRankUpObject = this->fields.buddyPointRankUpObject;
  if ( !buddyPointRankUpObject )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(buddyPointRankUpObject, 0, 0);
  this->fields.resultBuddyPointInfo = buddyPointInfo;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.resultBuddyPointInfo, (int32_t)buddyPointInfo, v8, v9);
  if ( !this->fields.resultBuddyPointInfo )
    return;
  this->fields.buddyPointEventId = eventId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  this->fields.rankMaster = (struct EventServantPointRankMaster_o *)Master_object;
  p_rankMaster = &this->fields.rankMaster;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.rankMaster, (int32_t)Master_object, v12, v13);
  resultBuddyPointInfo = this->fields.resultBuddyPointInfo;
  if ( !resultBuddyPointInfo || (buddyPointRankUpObject = (UnityEngine_GameObject_o *)*p_rankMaster) == 0 )
LABEL_14:
    sub_1C372B4(buddyPointRankUpObject);
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
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x5
  __int64 v14; // x6
  __int64 v15; // x7
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  __int64 v18; // x21
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  __int64 v25; // x5
  __int64 v26; // x6
  __int64 v27; // x7
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  __int64 v30; // x21
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  __int64 v33; // x1
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  __int64 v36; // x1
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  __int64 v39; // x1
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  __int64 v42; // x1
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  __int64 v49; // x5
  __int64 v50; // x6
  __int64 v51; // x7
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  __int64 v54; // x21
  System_Collections_Hashtable_o *v55; // x0
  __int64 v56; // x0
  int v57; // [xsp+4h] [xbp-3Ch] BYREF
  int v58; // [xsp+8h] [xbp-38h] BYREF
  int v59; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C467B2 & 1) == 0 )
  {
    sub_1C37058(&object___TypeInfo);
    sub_1C37058(&float_TypeInfo);
    sub_1C37058(&StringLiteral_19692/*"from"*/);
    sub_1C37058(&StringLiteral_24071/*"time"*/);
    sub_1C37058(&StringLiteral_22438/*"onupdate"*/);
    sub_1C37058(&StringLiteral_24110/*"to"*/);
    sub_1C37058(&StringLiteral_6733/*"FinishUpdateBuddyPoint"*/);
    sub_1C37058(&StringLiteral_22430/*"oncomplete"*/);
    sub_1C37058(&StringLiteral_15183/*"UpdateBuddyPointInfo"*/);
    sub_1C37058(&iTween_TypeInfo);
    byte_4C467B2 = 1;
  }
  if ( this->fields.resultBuddyPointInfo )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v4 = sub_1C37100(object___TypeInfo, 10);
    if ( !v4 )
      sub_1C372B4(0);
    v7 = v4;
    v8 = StringLiteral_19692/*"from"*/;
    if ( StringLiteral_19692/*"from"*/ )
    {
      v8 = sub_1C37194(StringLiteral_19692/*"from"*/, *(_QWORD *)(*(_QWORD *)v7 + 64LL));
      if ( !v8 )
        goto LABEL_54;
      v9 = StringLiteral_19692/*"from"*/;
    }
    else
    {
      v9 = 0;
    }
    if ( !*(_DWORD *)(v7 + 24) )
      goto LABEL_53;
    *(_QWORD *)(v7 + 32) = v9;
    sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 32), v9, v5, v6);
    v59 = 0;
    v8 = j_il2cpp_value_box_0(float_TypeInfo, &v59, v10, v11, v12, v13, v14, v15);
    v18 = v8;
    if ( !v8 || (v8 = sub_1C37194(v8, *(_QWORD *)(*(_QWORD *)v7 + 64LL))) != 0 )
    {
      if ( *(_DWORD *)(v7 + 24) <= 1u )
        goto LABEL_53;
      *(_QWORD *)(v7 + 40) = v18;
      sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 40), v18, v16, v17);
      v8 = StringLiteral_24110/*"to"*/;
      if ( StringLiteral_24110/*"to"*/ )
      {
        v8 = sub_1C37194(StringLiteral_24110/*"to"*/, *(_QWORD *)(*(_QWORD *)v7 + 64LL));
        if ( !v8 )
          goto LABEL_54;
        v21 = StringLiteral_24110/*"to"*/;
      }
      else
      {
        v21 = 0;
      }
      if ( *(_DWORD *)(v7 + 24) <= 2u )
        goto LABEL_53;
      *(_QWORD *)(v7 + 48) = v21;
      sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 48), v21, v19, v20);
      v58 = 1065353216;
      v8 = j_il2cpp_value_box_0(float_TypeInfo, &v58, v22, v23, v24, v25, v26, v27);
      v30 = v8;
      if ( !v8 || (v8 = sub_1C37194(v8, *(_QWORD *)(*(_QWORD *)v7 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v7 + 24) <= 3u )
          goto LABEL_53;
        *(_QWORD *)(v7 + 56) = v30;
        sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 56), v30, v28, v29);
        v8 = StringLiteral_22438/*"onupdate"*/;
        if ( StringLiteral_22438/*"onupdate"*/ )
        {
          v8 = sub_1C37194(StringLiteral_22438/*"onupdate"*/, *(_QWORD *)(*(_QWORD *)v7 + 64LL));
          if ( !v8 )
            goto LABEL_54;
          v33 = StringLiteral_22438/*"onupdate"*/;
        }
        else
        {
          v33 = 0;
        }
        if ( *(_DWORD *)(v7 + 24) <= 4u )
          goto LABEL_53;
        *(_QWORD *)(v7 + 64) = v33;
        sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 64), v33, v31, v32);
        v8 = StringLiteral_15183/*"UpdateBuddyPointInfo"*/;
        if ( StringLiteral_15183/*"UpdateBuddyPointInfo"*/ )
        {
          v8 = sub_1C37194(StringLiteral_15183/*"UpdateBuddyPointInfo"*/, *(_QWORD *)(*(_QWORD *)v7 + 64LL));
          if ( !v8 )
            goto LABEL_54;
          v36 = StringLiteral_15183/*"UpdateBuddyPointInfo"*/;
        }
        else
        {
          v36 = 0;
        }
        if ( *(_DWORD *)(v7 + 24) <= 5u )
          goto LABEL_53;
        *(_QWORD *)(v7 + 72) = v36;
        sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 72), v36, v34, v35);
        v8 = StringLiteral_22430/*"oncomplete"*/;
        if ( StringLiteral_22430/*"oncomplete"*/ )
        {
          v8 = sub_1C37194(StringLiteral_22430/*"oncomplete"*/, *(_QWORD *)(*(_QWORD *)v7 + 64LL));
          if ( !v8 )
            goto LABEL_54;
          v39 = StringLiteral_22430/*"oncomplete"*/;
        }
        else
        {
          v39 = 0;
        }
        if ( *(_DWORD *)(v7 + 24) <= 6u )
          goto LABEL_53;
        *(_QWORD *)(v7 + 80) = v39;
        sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 80), v39, v37, v38);
        v8 = StringLiteral_6733/*"FinishUpdateBuddyPoint"*/;
        if ( StringLiteral_6733/*"FinishUpdateBuddyPoint"*/ )
        {
          v8 = sub_1C37194(StringLiteral_6733/*"FinishUpdateBuddyPoint"*/, *(_QWORD *)(*(_QWORD *)v7 + 64LL));
          if ( !v8 )
            goto LABEL_54;
          v42 = StringLiteral_6733/*"FinishUpdateBuddyPoint"*/;
        }
        else
        {
          v42 = 0;
        }
        if ( *(_DWORD *)(v7 + 24) <= 7u )
          goto LABEL_53;
        *(_QWORD *)(v7 + 88) = v42;
        sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 88), v42, v40, v41);
        v8 = StringLiteral_24071/*"time"*/;
        if ( StringLiteral_24071/*"time"*/ )
        {
          v8 = sub_1C37194(StringLiteral_24071/*"time"*/, *(_QWORD *)(*(_QWORD *)v7 + 64LL));
          if ( !v8 )
            goto LABEL_54;
          v45 = StringLiteral_24071/*"time"*/;
        }
        else
        {
          v45 = 0;
        }
        if ( *(_DWORD *)(v7 + 24) <= 8u )
          goto LABEL_53;
        *(_QWORD *)(v7 + 96) = v45;
        sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 96), v45, v43, v44);
        v57 = 1072064102;
        v8 = j_il2cpp_value_box_0(float_TypeInfo, &v57, v46, v47, v48, v49, v50, v51);
        v54 = v8;
        if ( !v8 || (v8 = sub_1C37194(v8, *(_QWORD *)(*(_QWORD *)v7 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v7 + 24) > 9u )
          {
            *(_QWORD *)(v7 + 104) = v54;
            sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 104), v54, v52, v53);
            if ( !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
            v55 = iTween__Hash((System_Object_array *)v7, 0);
            iTween__ValueTo(gameObject, v55, 0);
            return;
          }
LABEL_53:
          sub_1C372BC(v8);
        }
      }
    }
LABEL_54:
    v56 = sub_1C372D8(v8);
    sub_1C37180(v56, 0);
  }
}


void BattleResultBuddyPointInfoComponent__UpdateBuddyPointInfo(
        BattleResultBuddyPointInfoComponent_o *this,
        float val,
        const MethodInfo *method)
{
  struct BattleBuddyPointInfo_o *resultBuddyPointInfo; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  struct BattleBuddyPointInfo_o *v7; // x8
  int32_t befBuddyPoint; // w20
  int v9; // w8
  __int64 v10; // x25
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x6
  __int64 v16; // x7
  int v17; // w8
  UILabel_o *buddyPointLabel; // x20
  Il2CppObject *v19; // x21
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  __int64 v23; // x5
  __int64 v24; // x6
  __int64 v25; // x7
  Il2CppObject *v26; // x0
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  __int64 v30; // x5
  __int64 v31; // x6
  __int64 v32; // x7
  Il2CppObject *v33; // x0
  System_String_o *v34; // x0
  UILabel_o *buddyPointRankLabel; // x19
  System_String_o *v36; // x20
  __int64 v37; // [xsp+8h] [xbp-58h] BYREF
  int32_t beforeBuddyRank; // [xsp+18h] [xbp-48h] BYREF
  int v39; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4C467B3 & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&long_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_2698/*"BATTLE_BUDDY_POINT_RANK_{0}"*/);
    sub_1C37058(&StringLiteral_25220/*"{0}（＋{1}）"*/);
    byte_4C467B3 = 1;
  }
  resultBuddyPointInfo = this->fields.resultBuddyPointInfo;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_15;
  if ( resultBuddyPointInfo )
  {
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    v7 = this->fields.resultBuddyPointInfo;
    if ( v7 )
    {
      befBuddyPoint = v7->fields.befBuddyPoint;
      v9 = v7->fields.aftBuddyPoint - befBuddyPoint;
      v10 = v9;
      v17 = BattleUtility__FloorToInt((float)v9 * val, 0) + befBuddyPoint;
      buddyPointLabel = this->fields.buddyPointLabel;
      if ( v17 >= 9999999 )
        v17 = 9999999;
      v39 = v17;
      v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39, v11, v12, v13, v14, v15, v16);
      v37 = v10;
      v26 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v37, v20, v21, v22, v23, v24, v25);
      gameObject = (UnityEngine_GameObject_o *)System_String__Format_63602948(
                                                 (System_String_o *)StringLiteral_25220/*"{0}（＋{1}）"*/,
                                                 v19,
                                                 v26,
                                                 0);
      if ( buddyPointLabel )
      {
        UILabel__set_text(buddyPointLabel, (System_String_o *)gameObject, 0);
        gameObject = (UnityEngine_GameObject_o *)this->fields.buddyPointLabel;
        if ( gameObject )
        {
          UILabel__SetCondensedScale((UILabel_o *)gameObject, this->fields.pointLabelMaxWidth, 0, 0);
          beforeBuddyRank = this->fields.beforeBuddyRank;
          v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &beforeBuddyRank, v27, v28, v29, v30, v31, v32);
          v34 = System_String__Format((System_String_o *)StringLiteral_2698/*"BATTLE_BUDDY_POINT_RANK_{0}"*/, v33, 0);
          buddyPointRankLabel = this->fields.buddyPointRankLabel;
          v36 = v34;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v36, 0);
          if ( buddyPointRankLabel )
          {
            UILabel__set_text(buddyPointRankLabel, (System_String_o *)gameObject, 0);
            return;
          }
        }
      }
    }
LABEL_15:
    sub_1C372B4(gameObject);
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}