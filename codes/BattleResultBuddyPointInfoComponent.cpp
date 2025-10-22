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
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  __int64 v9; // x5
  __int64 v10; // x6
  __int64 v11; // x7
  struct BattleBuddyPointInfo_o *resultBuddyPointInfo; // x8
  int aftBuddyPoint; // w9
  UILabel_o *buddyPointLabel; // x20
  int v15; // w24
  int v16; // w8
  Il2CppObject *v17; // x21
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  __int64 v21; // x5
  __int64 v22; // x6
  __int64 v23; // x7
  Il2CppObject *v24; // x0
  const MethodInfo *v25; // x2
  struct BattleBuddyPointInfo_o *v26; // x8
  const MethodInfo *v27; // x1
  int v28; // [xsp+8h] [xbp-38h] BYREF
  int v29; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C5A5AC & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&StringLiteral_25240/*"{0}（＋{1}）"*/);
    sub_1C3E564(&iTween_TypeInfo);
    byte_4C5A5AC = 1;
  }
  if ( this->fields.resultBuddyPointInfo )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__Stop_63384372(gameObject, 0);
    resultBuddyPointInfo = this->fields.resultBuddyPointInfo;
    if ( !resultBuddyPointInfo )
      goto LABEL_16;
    aftBuddyPoint = resultBuddyPointInfo->fields.aftBuddyPoint;
    buddyPointLabel = this->fields.buddyPointLabel;
    v15 = aftBuddyPoint - resultBuddyPointInfo->fields.befBuddyPoint;
    v16 = aftBuddyPoint >= 9999999 ? 9999999 : resultBuddyPointInfo->fields.aftBuddyPoint;
    v29 = v16;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29, v6, v7, v8, v9, v10, v11);
    v28 = v15;
    v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, v18, v19, v20, v21, v22, v23);
    v4 = System_String__Format_63677760((System_String_o *)StringLiteral_25240/*"{0}（＋{1}）"*/, v17, v24, 0);
    if ( !buddyPointLabel
      || (UILabel__set_text(buddyPointLabel, v4, 0), (v4 = (System_String_o *)this->fields.buddyPointLabel) == 0)
      || (UILabel__SetCondensedScale((UILabel_o *)v4, this->fields.pointLabelMaxWidth, 0, 0),
          (v26 = this->fields.resultBuddyPointInfo) == 0) )
    {
LABEL_16:
      sub_1C3E7C0(v4, v5);
    }
    if ( BattleResultBuddyPointInfoComponent__IsRankUpBuddyRank(this, v26->fields.aftBuddyPoint, v25) )
      BattleResultBuddyPointInfoComponent__PlayBuddyRankUp(this, v27);
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
  const MethodInfo *v9; // x3
  struct BattleBuddyPointInfo_o *resultBuddyPointInfo; // x8
  EventServantPointRankEntity_o *EnableEntity; // x0
  int32_t svtPointRank; // w8

  if ( (byte_4C5A5AB & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    byte_4C5A5AB = 1;
  }
  p_rankMaster = &this->fields.rankMaster;
  rankMaster = this->fields.rankMaster;
  if ( !rankMaster )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    *p_rankMaster = (struct EventServantPointRankMaster_o *)Master_object;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.rankMaster, (int32_t)Master_object, v8, v9);
    rankMaster = *p_rankMaster;
  }
  resultBuddyPointInfo = this->fields.resultBuddyPointInfo;
  if ( !resultBuddyPointInfo || !rankMaster )
    sub_1C3E7C0(rankMaster, *(_QWORD *)&buddyPoint);
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
  Il2CppObject *Object_object__51228128; // x20
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

  if ( (byte_4C5A5AD & 1) == 0 )
  {
    sub_1C3E564(&Method_AssetData_GetObject_GameObject____78185152);
    sub_1C3E564(&AssetManager_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_5854/*"Effect/BattleResult/{0}"*/);
    sub_1C3E564(&StringLiteral_17195/*"bit_buddy_rankup"*/);
    sub_1C3E564(&StringLiteral_2698/*"BATTLE_BUDDY_POINT_RANK_{0}"*/);
    byte_4C5A5AD = 1;
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
  Object_object__51228128 = AssetData__GetObject_object__51228128(
                              (AssetData_o *)buddyPointRankUpObject,
                              (System_String_o *)StringLiteral_17195/*"bit_buddy_rankup"*/,
                              (const MethodInfo_30DADE0 *)Method_AssetData_GetObject_GameObject____78185152);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                         Object_object__51228128,
                                                         (const MethodInfo_3185EB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
  if ( !byte_4C506A1 )
  {
    sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    byte_4C506A1 = 1;
  }
  UnityEngine_Transform__set_localPosition(v14, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  if ( !byte_4C506A6 )
  {
    sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    byte_4C506A6 = 1;
  }
  UnityEngine_Transform__set_localScale(v14, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v13,
                       (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  v16 = UnityEngine_GameObject__GetComponent_object_(
          v13,
          (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                         (UnityEngine_Object_o *)Component_object,
                                                         0,
                                                         0);
  if ( ((unsigned __int8)buddyPointRankUpObject & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_29;
    UnityEngine_Animation__Play_71086848(
      (UnityEngine_Animation_o *)Component_object,
      (System_String_o *)StringLiteral_17195/*"bit_buddy_rankup"*/,
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
      SimpleAnimation__Play_66582224((SimpleAnimation_o *)v16, (System_String_o *)StringLiteral_17195/*"bit_buddy_rankup"*/, 0);
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
    sub_1C3E7C0(buddyPointRankUpObject, method);
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

  if ( (byte_4C5A5A8 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    byte_4C5A5A8 = 1;
  }
  buddyPointRankUpObject = this->fields.buddyPointRankUpObject;
  if ( !buddyPointRankUpObject )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(buddyPointRankUpObject, 0, 0);
  this->fields.resultBuddyPointInfo = buddyPointInfo;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.resultBuddyPointInfo, (int32_t)buddyPointInfo, v8, v9);
  if ( !this->fields.resultBuddyPointInfo )
    return;
  this->fields.buddyPointEventId = eventId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  this->fields.rankMaster = (struct EventServantPointRankMaster_o *)Master_object;
  p_rankMaster = &this->fields.rankMaster;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.rankMaster, (int32_t)Master_object, v12, v13);
  resultBuddyPointInfo = this->fields.resultBuddyPointInfo;
  if ( !resultBuddyPointInfo || (buddyPointRankUpObject = (UnityEngine_GameObject_o *)*p_rankMaster) == 0 )
LABEL_14:
    sub_1C3E7C0(buddyPointRankUpObject, buddyPointInfo);
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
  const MethodInfo *v7; // x3
  __int64 v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x6
  __int64 v16; // x7
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  __int64 v19; // x21
  int32_t v20; // w2
  const MethodInfo *v21; // x3
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
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  __int64 v44; // x5
  __int64 v45; // x6
  __int64 v46; // x7
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  __int64 v49; // x21
  System_Collections_Hashtable_o *v50; // x0
  __int64 v51; // x0
  int v52; // [xsp+4h] [xbp-3Ch] BYREF
  int v53; // [xsp+8h] [xbp-38h] BYREF
  int v54; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C5A5A9 & 1) == 0 )
  {
    sub_1C3E564(&object___TypeInfo);
    sub_1C3E564(&float_TypeInfo);
    sub_1C3E564(&StringLiteral_19710/*"from"*/);
    sub_1C3E564(&StringLiteral_24091/*"time"*/);
    sub_1C3E564(&StringLiteral_22456/*"onupdate"*/);
    sub_1C3E564(&StringLiteral_24130/*"to"*/);
    sub_1C3E564(&StringLiteral_6733/*"FinishUpdateBuddyPoint"*/);
    sub_1C3E564(&StringLiteral_22448/*"oncomplete"*/);
    sub_1C3E564(&StringLiteral_15193/*"UpdateBuddyPointInfo"*/);
    sub_1C3E564(&iTween_TypeInfo);
    byte_4C5A5A9 = 1;
  }
  if ( this->fields.resultBuddyPointInfo )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v4 = sub_1C3E60C(object___TypeInfo, 10);
    if ( !v4 )
      sub_1C3E7C0(0, v5);
    v8 = v4;
    v9 = StringLiteral_19710/*"from"*/;
    if ( StringLiteral_19710/*"from"*/ )
    {
      v9 = sub_1C3E6A0(StringLiteral_19710/*"from"*/, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
      if ( !v9 )
        goto LABEL_54;
      v10 = StringLiteral_19710/*"from"*/;
    }
    else
    {
      v10 = 0;
    }
    if ( !*(_DWORD *)(v8 + 24) )
      goto LABEL_53;
    *(_QWORD *)(v8 + 32) = v10;
    sub_1C3E508((CGThumbnailListItem_o *)(v8 + 32), v10, v6, v7);
    v54 = 0;
    v9 = j_il2cpp_value_box_0(float_TypeInfo, &v54, v11, v12, v13, v14, v15, v16);
    v19 = v9;
    if ( !v9 || (v9 = sub_1C3E6A0(v9, *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
    {
      if ( *(_DWORD *)(v8 + 24) <= 1u )
        goto LABEL_53;
      *(_QWORD *)(v8 + 40) = v19;
      sub_1C3E508((CGThumbnailListItem_o *)(v8 + 40), v19, v17, v18);
      v9 = StringLiteral_24130/*"to"*/;
      if ( StringLiteral_24130/*"to"*/ )
      {
        v9 = sub_1C3E6A0(StringLiteral_24130/*"to"*/, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
        if ( !v9 )
          goto LABEL_54;
        v10 = StringLiteral_24130/*"to"*/;
      }
      else
      {
        v10 = 0;
      }
      if ( *(_DWORD *)(v8 + 24) <= 2u )
        goto LABEL_53;
      *(_QWORD *)(v8 + 48) = v10;
      sub_1C3E508((CGThumbnailListItem_o *)(v8 + 48), v10, v20, v21);
      v53 = 1065353216;
      v9 = j_il2cpp_value_box_0(float_TypeInfo, &v53, v22, v23, v24, v25, v26, v27);
      v30 = v9;
      if ( !v9 || (v9 = sub_1C3E6A0(v9, *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v8 + 24) <= 3u )
          goto LABEL_53;
        *(_QWORD *)(v8 + 56) = v30;
        sub_1C3E508((CGThumbnailListItem_o *)(v8 + 56), v30, v28, v29);
        v9 = StringLiteral_22456/*"onupdate"*/;
        if ( StringLiteral_22456/*"onupdate"*/ )
        {
          v9 = sub_1C3E6A0(StringLiteral_22456/*"onupdate"*/, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
          if ( !v9 )
            goto LABEL_54;
          v10 = StringLiteral_22456/*"onupdate"*/;
        }
        else
        {
          v10 = 0;
        }
        if ( *(_DWORD *)(v8 + 24) <= 4u )
          goto LABEL_53;
        *(_QWORD *)(v8 + 64) = v10;
        sub_1C3E508((CGThumbnailListItem_o *)(v8 + 64), v10, v31, v32);
        v9 = StringLiteral_15193/*"UpdateBuddyPointInfo"*/;
        if ( StringLiteral_15193/*"UpdateBuddyPointInfo"*/ )
        {
          v9 = sub_1C3E6A0(StringLiteral_15193/*"UpdateBuddyPointInfo"*/, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
          if ( !v9 )
            goto LABEL_54;
          v10 = StringLiteral_15193/*"UpdateBuddyPointInfo"*/;
        }
        else
        {
          v10 = 0;
        }
        if ( *(_DWORD *)(v8 + 24) <= 5u )
          goto LABEL_53;
        *(_QWORD *)(v8 + 72) = v10;
        sub_1C3E508((CGThumbnailListItem_o *)(v8 + 72), v10, v33, v34);
        v9 = StringLiteral_22448/*"oncomplete"*/;
        if ( StringLiteral_22448/*"oncomplete"*/ )
        {
          v9 = sub_1C3E6A0(StringLiteral_22448/*"oncomplete"*/, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
          if ( !v9 )
            goto LABEL_54;
          v10 = StringLiteral_22448/*"oncomplete"*/;
        }
        else
        {
          v10 = 0;
        }
        if ( *(_DWORD *)(v8 + 24) <= 6u )
          goto LABEL_53;
        *(_QWORD *)(v8 + 80) = v10;
        sub_1C3E508((CGThumbnailListItem_o *)(v8 + 80), v10, v35, v36);
        v9 = StringLiteral_6733/*"FinishUpdateBuddyPoint"*/;
        if ( StringLiteral_6733/*"FinishUpdateBuddyPoint"*/ )
        {
          v9 = sub_1C3E6A0(StringLiteral_6733/*"FinishUpdateBuddyPoint"*/, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
          if ( !v9 )
            goto LABEL_54;
          v10 = StringLiteral_6733/*"FinishUpdateBuddyPoint"*/;
        }
        else
        {
          v10 = 0;
        }
        if ( *(_DWORD *)(v8 + 24) <= 7u )
          goto LABEL_53;
        *(_QWORD *)(v8 + 88) = v10;
        sub_1C3E508((CGThumbnailListItem_o *)(v8 + 88), v10, v37, v38);
        v9 = StringLiteral_24091/*"time"*/;
        if ( StringLiteral_24091/*"time"*/ )
        {
          v9 = sub_1C3E6A0(StringLiteral_24091/*"time"*/, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
          if ( !v9 )
            goto LABEL_54;
          v10 = StringLiteral_24091/*"time"*/;
        }
        else
        {
          v10 = 0;
        }
        if ( *(_DWORD *)(v8 + 24) <= 8u )
          goto LABEL_53;
        *(_QWORD *)(v8 + 96) = v10;
        sub_1C3E508((CGThumbnailListItem_o *)(v8 + 96), v10, v39, v40);
        v52 = 1072064102;
        v9 = j_il2cpp_value_box_0(float_TypeInfo, &v52, v41, v42, v43, v44, v45, v46);
        v49 = v9;
        if ( !v9 || (v9 = sub_1C3E6A0(v9, *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v8 + 24) > 9u )
          {
            *(_QWORD *)(v8 + 104) = v49;
            sub_1C3E508((CGThumbnailListItem_o *)(v8 + 104), v49, v47, v48);
            if ( !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
            v50 = iTween__Hash((System_Object_array *)v8, 0);
            iTween__ValueTo(gameObject, v50, 0);
            return;
          }
LABEL_53:
          sub_1C3E7C8(v9, v10);
        }
      }
    }
LABEL_54:
    v51 = sub_1C3E7E4(v9);
    sub_1C3E68C(v51, 0);
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
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  __int64 v15; // x5
  __int64 v16; // x6
  __int64 v17; // x7
  int v18; // w8
  UILabel_o *buddyPointLabel; // x20
  Il2CppObject *v20; // x21
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  __int64 v24; // x5
  __int64 v25; // x6
  __int64 v26; // x7
  Il2CppObject *v27; // x0
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  __int64 v31; // x5
  __int64 v32; // x6
  __int64 v33; // x7
  Il2CppObject *v34; // x0
  System_String_o *v35; // x0
  UILabel_o *buddyPointRankLabel; // x19
  System_String_o *v37; // x20
  __int64 v38; // [xsp+8h] [xbp-58h] BYREF
  int32_t beforeBuddyRank; // [xsp+18h] [xbp-48h] BYREF
  int v40; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4C5A5AA & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&long_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_2698/*"BATTLE_BUDDY_POINT_RANK_{0}"*/);
    sub_1C3E564(&StringLiteral_25240/*"{0}（＋{1}）"*/);
    byte_4C5A5AA = 1;
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
      v18 = BattleUtility__FloorToInt((float)v10 * val, 0) + befBuddyPoint;
      buddyPointLabel = this->fields.buddyPointLabel;
      if ( v18 >= 9999999 )
        v18 = 9999999;
      v40 = v18;
      v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40, v12, v13, v14, v15, v16, v17);
      v38 = v11;
      v27 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v38, v21, v22, v23, v24, v25, v26);
      gameObject = (UnityEngine_GameObject_o *)System_String__Format_63677760(
                                                 (System_String_o *)StringLiteral_25240/*"{0}（＋{1}）"*/,
                                                 v20,
                                                 v27,
                                                 0);
      if ( buddyPointLabel )
      {
        UILabel__set_text(buddyPointLabel, (System_String_o *)gameObject, 0);
        gameObject = (UnityEngine_GameObject_o *)this->fields.buddyPointLabel;
        if ( gameObject )
        {
          UILabel__SetCondensedScale((UILabel_o *)gameObject, this->fields.pointLabelMaxWidth, 0, 0);
          beforeBuddyRank = this->fields.beforeBuddyRank;
          v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &beforeBuddyRank, v28, v29, v30, v31, v32, v33);
          v35 = System_String__Format((System_String_o *)StringLiteral_2698/*"BATTLE_BUDDY_POINT_RANK_{0}"*/, v34, 0);
          buddyPointRankLabel = this->fields.buddyPointRankLabel;
          v37 = v35;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v37, 0);
          if ( buddyPointRankLabel )
          {
            UILabel__set_text(buddyPointRankLabel, (System_String_o *)gameObject, 0);
            return;
          }
        }
      }
    }
LABEL_15:
    sub_1C3E7C0(gameObject, v7);
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}