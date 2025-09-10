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

  if ( (byte_4C2AA83 & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&StringLiteral_25197/*"{0}（＋{1}）"*/);
    sub_1C2D490(&iTween_TypeInfo);
    byte_4C2AA83 = 1;
  }
  if ( this->fields.resultBuddyPointInfo )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__Stop_63205768(gameObject, 0);
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
    v4 = System_String__Format_63499156((System_String_o *)StringLiteral_25197/*"{0}（＋{1}）"*/, v14, v18, 0);
    if ( !buddyPointLabel
      || (UILabel__set_text(buddyPointLabel, v4, 0), (v4 = (System_String_o *)this->fields.buddyPointLabel) == 0)
      || (UILabel__SetCondensedScale((UILabel_o *)v4, this->fields.pointLabelMaxWidth, 0, 0),
          (v20 = this->fields.resultBuddyPointInfo) == 0) )
    {
LABEL_16:
      sub_1C2D6EC(v4, v5);
    }
    if ( BattleResultBuddyPointInfoComponent__IsRankUpBuddyRank(this, v20->fields.aftBuddyPoint, v19) )
      BattleResultBuddyPointInfoComponent__PlayBuddyRankUp(this, v21);
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

  if ( (byte_4C2AA82 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    byte_4C2AA82 = 1;
  }
  p_rankMaster = &this->fields.rankMaster;
  rankMaster = this->fields.rankMaster;
  if ( !rankMaster )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    *p_rankMaster = (struct EventServantPointRankMaster_o *)Master_object;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.rankMaster, (int32_t)Master_object, v8, v9);
    rankMaster = *p_rankMaster;
  }
  resultBuddyPointInfo = this->fields.resultBuddyPointInfo;
  if ( !resultBuddyPointInfo || !rankMaster )
    sub_1C2D6EC(rankMaster, *(_QWORD *)&buddyPoint);
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
  Il2CppObject *v7; // x0
  System_String_o *v8; // x20
  Il2CppObject *Object_object__51051712; // x20
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

  if ( (byte_4C2AA84 & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_5845/*"Effect/BattleResult/{0}"*/);
    sub_1C2D490(&StringLiteral_17173/*"bit_buddy_rankup"*/);
    sub_1C2D490(&StringLiteral_2695/*"BATTLE_BUDDY_POINT_RANK_{0}"*/);
    byte_4C2AA84 = 1;
  }
  buddyPointRankUpObject = this->fields.buddyPointRankUpObject;
  if ( !buddyPointRankUpObject )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(buddyPointRankUpObject, 1, 0);
  buddyPointEventId = this->fields.buddyPointEventId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &buddyPointEventId, v4, v5, v6);
  v8 = System_String__Format((System_String_o *)StringLiteral_5845/*"Effect/BattleResult/{0}"*/, v7, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)AssetManager__getAssetStorage(v8, 0);
  if ( !buddyPointRankUpObject )
    goto LABEL_29;
  Object_object__51051712 = AssetData__GetObject_object__51051712(
                              (AssetData_o *)buddyPointRankUpObject,
                              (System_String_o *)StringLiteral_17173/*"bit_buddy_rankup"*/,
                              (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                         Object_object__51051712,
                                                         (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !buddyPointRankUpObject )
    goto LABEL_29;
  v10 = buddyPointRankUpObject;
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(buddyPointRankUpObject, 0);
  if ( !this->fields.buddyPointRankUpObject )
    goto LABEL_29;
  v11 = (UnityEngine_Transform_o *)buddyPointRankUpObject;
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                         this->fields.buddyPointRankUpObject,
                                                         0);
  if ( !v11 )
    goto LABEL_29;
  UnityEngine_Transform__SetParent(v11, (UnityEngine_Transform_o *)buddyPointRankUpObject, 0);
  if ( !byte_4C20DA1 )
  {
    sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
  }
  UnityEngine_Transform__set_localPosition(v11, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  if ( !byte_4C20DA6 )
  {
    sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA6 = 1;
  }
  UnityEngine_Transform__set_localScale(v11, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v10,
                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  v13 = UnityEngine_GameObject__GetComponent_object_(
          v10,
          (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                         (UnityEngine_Object_o *)Component_object,
                                                         0,
                                                         0);
  if ( ((unsigned __int8)buddyPointRankUpObject & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_29;
    UnityEngine_Animation__Play_70908988(
      (UnityEngine_Animation_o *)Component_object,
      (System_String_o *)StringLiteral_17173/*"bit_buddy_rankup"*/,
      0);
  }
  else
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                           (UnityEngine_Object_o *)v13,
                                                           0,
                                                           0);
    if ( ((unsigned __int8)buddyPointRankUpObject & 1) != 0 )
    {
      if ( !v13 )
        goto LABEL_29;
      SimpleAnimation__Play_66404364((SimpleAnimation_o *)v13, (System_String_o *)StringLiteral_17173/*"bit_buddy_rankup"*/, 0);
    }
  }
  beforeBuddyRank = this->fields.beforeBuddyRank;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &beforeBuddyRank, v14, v15, v16);
  v18 = System_String__Format((System_String_o *)StringLiteral_2695/*"BATTLE_BUDDY_POINT_RANK_{0}"*/, v17, 0);
  buddyPointRankLabel = this->fields.buddyPointRankLabel;
  v20 = v18;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v20, 0);
  if ( !buddyPointRankLabel
    || (UILabel__set_text(buddyPointRankLabel, (System_String_o *)buddyPointRankUpObject, 0),
        (buddyPointRankUpObject = (UnityEngine_GameObject_o *)this->fields.buddyPointRankLabel) == 0) )
  {
LABEL_29:
    sub_1C2D6EC(buddyPointRankUpObject, method);
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

  if ( (byte_4C2AA7F & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    byte_4C2AA7F = 1;
  }
  buddyPointRankUpObject = this->fields.buddyPointRankUpObject;
  if ( !buddyPointRankUpObject )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(buddyPointRankUpObject, 0, 0);
  this->fields.resultBuddyPointInfo = buddyPointInfo;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.resultBuddyPointInfo, (int32_t)buddyPointInfo, v8, v9);
  if ( !this->fields.resultBuddyPointInfo )
    return;
  this->fields.buddyPointEventId = eventId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  this->fields.rankMaster = (struct EventServantPointRankMaster_o *)Master_object;
  p_rankMaster = &this->fields.rankMaster;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.rankMaster, (int32_t)Master_object, v12, v13);
  resultBuddyPointInfo = this->fields.resultBuddyPointInfo;
  if ( !resultBuddyPointInfo || (buddyPointRankUpObject = (UnityEngine_GameObject_o *)*p_rankMaster) == 0 )
LABEL_14:
    sub_1C2D6EC(buddyPointRankUpObject, buddyPointInfo);
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
  __int64 v6; // x2
  const MethodInfo *v7; // x3
  __int64 v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  const MethodInfo *v14; // x3
  __int64 v15; // x21
  const MethodInfo *v16; // x3
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  const MethodInfo *v20; // x3
  __int64 v21; // x21
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x3
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  const MethodInfo *v30; // x3
  __int64 v31; // x21
  System_Collections_Hashtable_o *v32; // x0
  __int64 v33; // x0
  int v34; // [xsp+4h] [xbp-3Ch] BYREF
  int v35; // [xsp+8h] [xbp-38h] BYREF
  int v36; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C2AA80 & 1) == 0 )
  {
    sub_1C2D490(&object___TypeInfo);
    sub_1C2D490(&float_TypeInfo);
    sub_1C2D490(&StringLiteral_19677/*"from"*/);
    sub_1C2D490(&StringLiteral_24049/*"time"*/);
    sub_1C2D490(&StringLiteral_22418/*"onupdate"*/);
    sub_1C2D490(&StringLiteral_24088/*"to"*/);
    sub_1C2D490(&StringLiteral_6727/*"FinishUpdateBuddyPoint"*/);
    sub_1C2D490(&StringLiteral_22410/*"oncomplete"*/);
    sub_1C2D490(&StringLiteral_15180/*"UpdateBuddyPointInfo"*/);
    sub_1C2D490(&iTween_TypeInfo);
    byte_4C2AA80 = 1;
  }
  if ( this->fields.resultBuddyPointInfo )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v4 = sub_1C2D538(object___TypeInfo, 10);
    if ( !v4 )
      sub_1C2D6EC(0, v5);
    v8 = v4;
    v9 = StringLiteral_19677/*"from"*/;
    if ( StringLiteral_19677/*"from"*/ )
    {
      v9 = sub_1C2D5CC(StringLiteral_19677/*"from"*/, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
      if ( !v9 )
        goto LABEL_54;
      v10 = StringLiteral_19677/*"from"*/;
    }
    else
    {
      v10 = 0;
    }
    if ( !*(_DWORD *)(v8 + 24) )
      goto LABEL_53;
    *(_QWORD *)(v8 + 32) = v10;
    sub_1C2D434((CGThumbnailListItem_o *)(v8 + 32), v10, v6, v7);
    v36 = 0;
    v9 = j_il2cpp_value_box_0(float_TypeInfo, &v36, v11, v12, v13);
    v15 = v9;
    if ( !v9 || (v9 = sub_1C2D5CC(v9, *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
    {
      if ( *(_DWORD *)(v8 + 24) <= 1u )
        goto LABEL_53;
      *(_QWORD *)(v8 + 40) = v15;
      sub_1C2D434((CGThumbnailListItem_o *)(v8 + 40), v15, v6, v14);
      v9 = StringLiteral_24088/*"to"*/;
      if ( StringLiteral_24088/*"to"*/ )
      {
        v9 = sub_1C2D5CC(StringLiteral_24088/*"to"*/, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
        if ( !v9 )
          goto LABEL_54;
        v10 = StringLiteral_24088/*"to"*/;
      }
      else
      {
        v10 = 0;
      }
      if ( *(_DWORD *)(v8 + 24) <= 2u )
        goto LABEL_53;
      *(_QWORD *)(v8 + 48) = v10;
      sub_1C2D434((CGThumbnailListItem_o *)(v8 + 48), v10, v6, v16);
      v35 = 1065353216;
      v9 = j_il2cpp_value_box_0(float_TypeInfo, &v35, v17, v18, v19);
      v21 = v9;
      if ( !v9 || (v9 = sub_1C2D5CC(v9, *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v8 + 24) <= 3u )
          goto LABEL_53;
        *(_QWORD *)(v8 + 56) = v21;
        sub_1C2D434((CGThumbnailListItem_o *)(v8 + 56), v21, v6, v20);
        v9 = StringLiteral_22418/*"onupdate"*/;
        if ( StringLiteral_22418/*"onupdate"*/ )
        {
          v9 = sub_1C2D5CC(StringLiteral_22418/*"onupdate"*/, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
          if ( !v9 )
            goto LABEL_54;
          v10 = StringLiteral_22418/*"onupdate"*/;
        }
        else
        {
          v10 = 0;
        }
        if ( *(_DWORD *)(v8 + 24) <= 4u )
          goto LABEL_53;
        *(_QWORD *)(v8 + 64) = v10;
        sub_1C2D434((CGThumbnailListItem_o *)(v8 + 64), v10, v6, v22);
        v9 = StringLiteral_15180/*"UpdateBuddyPointInfo"*/;
        if ( StringLiteral_15180/*"UpdateBuddyPointInfo"*/ )
        {
          v9 = sub_1C2D5CC(StringLiteral_15180/*"UpdateBuddyPointInfo"*/, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
          if ( !v9 )
            goto LABEL_54;
          v10 = StringLiteral_15180/*"UpdateBuddyPointInfo"*/;
        }
        else
        {
          v10 = 0;
        }
        if ( *(_DWORD *)(v8 + 24) <= 5u )
          goto LABEL_53;
        *(_QWORD *)(v8 + 72) = v10;
        sub_1C2D434((CGThumbnailListItem_o *)(v8 + 72), v10, v6, v23);
        v9 = StringLiteral_22410/*"oncomplete"*/;
        if ( StringLiteral_22410/*"oncomplete"*/ )
        {
          v9 = sub_1C2D5CC(StringLiteral_22410/*"oncomplete"*/, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
          if ( !v9 )
            goto LABEL_54;
          v10 = StringLiteral_22410/*"oncomplete"*/;
        }
        else
        {
          v10 = 0;
        }
        if ( *(_DWORD *)(v8 + 24) <= 6u )
          goto LABEL_53;
        *(_QWORD *)(v8 + 80) = v10;
        sub_1C2D434((CGThumbnailListItem_o *)(v8 + 80), v10, v6, v24);
        v9 = StringLiteral_6727/*"FinishUpdateBuddyPoint"*/;
        if ( StringLiteral_6727/*"FinishUpdateBuddyPoint"*/ )
        {
          v9 = sub_1C2D5CC(StringLiteral_6727/*"FinishUpdateBuddyPoint"*/, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
          if ( !v9 )
            goto LABEL_54;
          v10 = StringLiteral_6727/*"FinishUpdateBuddyPoint"*/;
        }
        else
        {
          v10 = 0;
        }
        if ( *(_DWORD *)(v8 + 24) <= 7u )
          goto LABEL_53;
        *(_QWORD *)(v8 + 88) = v10;
        sub_1C2D434((CGThumbnailListItem_o *)(v8 + 88), v10, v6, v25);
        v9 = StringLiteral_24049/*"time"*/;
        if ( StringLiteral_24049/*"time"*/ )
        {
          v9 = sub_1C2D5CC(StringLiteral_24049/*"time"*/, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
          if ( !v9 )
            goto LABEL_54;
          v10 = StringLiteral_24049/*"time"*/;
        }
        else
        {
          v10 = 0;
        }
        if ( *(_DWORD *)(v8 + 24) <= 8u )
          goto LABEL_53;
        *(_QWORD *)(v8 + 96) = v10;
        sub_1C2D434((CGThumbnailListItem_o *)(v8 + 96), v10, v6, v26);
        v34 = 1072064102;
        v9 = j_il2cpp_value_box_0(float_TypeInfo, &v34, v27, v28, v29);
        v31 = v9;
        if ( !v9 || (v9 = sub_1C2D5CC(v9, *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v8 + 24) > 9u )
          {
            *(_QWORD *)(v8 + 104) = v31;
            sub_1C2D434((CGThumbnailListItem_o *)(v8 + 104), v31, v6, v30);
            if ( !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
            v32 = iTween__Hash((System_Object_array *)v8, 0);
            iTween__ValueTo(gameObject, v32, 0);
            return;
          }
LABEL_53:
          sub_1C2D6F4(v9, v10, v6);
        }
      }
    }
LABEL_54:
    v33 = sub_1C2D710(v9);
    sub_1C2D5B8(v33, 0);
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

  if ( (byte_4C2AA81 & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&long_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_2695/*"BATTLE_BUDDY_POINT_RANK_{0}"*/);
    sub_1C2D490(&StringLiteral_25197/*"{0}（＋{1}）"*/);
    byte_4C2AA81 = 1;
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
      v15 = BattleUtility__FloorToInt((float)v10 * val, 0) + befBuddyPoint;
      buddyPointLabel = this->fields.buddyPointLabel;
      if ( v15 >= 9999999 )
        v15 = 9999999;
      v31 = v15;
      v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31, v12, v13, v14);
      v29 = v11;
      v21 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v29, v18, v19, v20);
      gameObject = (UnityEngine_GameObject_o *)System_String__Format_63499156(
                                                 (System_String_o *)StringLiteral_25197/*"{0}（＋{1}）"*/,
                                                 v17,
                                                 v21,
                                                 0);
      if ( buddyPointLabel )
      {
        UILabel__set_text(buddyPointLabel, (System_String_o *)gameObject, 0);
        gameObject = (UnityEngine_GameObject_o *)this->fields.buddyPointLabel;
        if ( gameObject )
        {
          UILabel__SetCondensedScale((UILabel_o *)gameObject, this->fields.pointLabelMaxWidth, 0, 0);
          beforeBuddyRank = this->fields.beforeBuddyRank;
          v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &beforeBuddyRank, v22, v23, v24);
          v26 = System_String__Format((System_String_o *)StringLiteral_2695/*"BATTLE_BUDDY_POINT_RANK_{0}"*/, v25, 0);
          buddyPointRankLabel = this->fields.buddyPointRankLabel;
          v28 = v26;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v28, 0);
          if ( buddyPointRankLabel )
          {
            UILabel__set_text(buddyPointRankLabel, (System_String_o *)gameObject, 0);
            return;
          }
        }
      }
    }
LABEL_15:
    sub_1C2D6EC(gameObject, v7);
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}