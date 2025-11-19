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

  if ( (byte_4CB9B7B & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&StringLiteral_25330/*"{0}（＋{1}）"*/);
    sub_1C6BA08(&iTween_TypeInfo);
    byte_4CB9B7B = 1;
  }
  if ( this->fields.resultBuddyPointInfo )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__Stop_63714696(gameObject, 0);
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
    v4 = System_String__Format_64008100((System_String_o *)StringLiteral_25330/*"{0}（＋{1}）"*/, v11, v12, 0);
    if ( !buddyPointLabel
      || (UILabel__set_text(buddyPointLabel, v4, 0), (v4 = (System_String_o *)this->fields.buddyPointLabel) == 0)
      || (UILabel__SetCondensedScale((UILabel_o *)v4, this->fields.pointLabelMaxWidth, 0, 0),
          (v14 = this->fields.resultBuddyPointInfo) == 0) )
    {
LABEL_16:
      sub_1C6BC60(v4, v5);
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
  const MethodInfo *v9; // x3
  struct BattleBuddyPointInfo_o *resultBuddyPointInfo; // x8
  EventServantPointRankEntity_o *EnableEntity; // x0
  int32_t svtPointRank; // w8

  if ( (byte_4CB9B7A & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    byte_4CB9B7A = 1;
  }
  p_rankMaster = &this->fields.rankMaster;
  rankMaster = this->fields.rankMaster;
  if ( !rankMaster )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    *p_rankMaster = (struct EventServantPointRankMaster_o *)Master_object;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.rankMaster, (int32_t)Master_object, v8, v9);
    rankMaster = *p_rankMaster;
  }
  resultBuddyPointInfo = this->fields.resultBuddyPointInfo;
  if ( !resultBuddyPointInfo || !rankMaster )
    sub_1C6BC60(rankMaster, *(_QWORD *)&buddyPoint);
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
  Il2CppObject *Object_object__51495936; // x20
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

  if ( (byte_4CB9B7C & 1) == 0 )
  {
    sub_1C6BA08(&Method_AssetData_GetObject_GameObject____78568200);
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_5844/*"Effect/BattleResult/{0}"*/);
    sub_1C6BA08(&StringLiteral_17193/*"bit_buddy_rankup"*/);
    sub_1C6BA08(&StringLiteral_2690/*"BATTLE_BUDDY_POINT_RANK_{0}"*/);
    byte_4CB9B7C = 1;
  }
  buddyPointRankUpObject = this->fields.buddyPointRankUpObject;
  if ( !buddyPointRankUpObject )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(buddyPointRankUpObject, 1, 0);
  buddyPointEventId = this->fields.buddyPointEventId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &buddyPointEventId);
  v5 = System_String__Format((System_String_o *)StringLiteral_5844/*"Effect/BattleResult/{0}"*/, v4, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)AssetManager__getAssetStorage(v5, 0);
  if ( !buddyPointRankUpObject )
    goto LABEL_29;
  Object_object__51495936 = AssetData__GetObject_object__51495936(
                              (AssetData_o *)buddyPointRankUpObject,
                              (System_String_o *)StringLiteral_17193/*"bit_buddy_rankup"*/,
                              (const MethodInfo_311C400 *)Method_AssetData_GetObject_GameObject____78568200);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                         Object_object__51495936,
                                                         (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
  if ( !byte_4CAFC09 )
  {
    sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CAFC09 = 1;
  }
  UnityEngine_Transform__set_localPosition(v8, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  if ( !byte_4CAFC0E )
  {
    sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CAFC0E = 1;
  }
  UnityEngine_Transform__set_localScale(v8, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v7,
                       (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  v10 = UnityEngine_GameObject__GetComponent_object_(
          v7,
          (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                         (UnityEngine_Object_o *)Component_object,
                                                         0,
                                                         0);
  if ( ((unsigned __int8)buddyPointRankUpObject & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_29;
    UnityEngine_Animation__Play_71403152(
      (UnityEngine_Animation_o *)Component_object,
      (System_String_o *)StringLiteral_17193/*"bit_buddy_rankup"*/,
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
      SimpleAnimation__Play_66911856((SimpleAnimation_o *)v10, (System_String_o *)StringLiteral_17193/*"bit_buddy_rankup"*/, 0);
    }
  }
  beforeBuddyRank = this->fields.beforeBuddyRank;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &beforeBuddyRank);
  v12 = System_String__Format((System_String_o *)StringLiteral_2690/*"BATTLE_BUDDY_POINT_RANK_{0}"*/, v11, 0);
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
    sub_1C6BC60(buddyPointRankUpObject, method);
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

  if ( (byte_4CB9B77 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    byte_4CB9B77 = 1;
  }
  buddyPointRankUpObject = this->fields.buddyPointRankUpObject;
  if ( !buddyPointRankUpObject )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(buddyPointRankUpObject, 0, 0);
  this->fields.resultBuddyPointInfo = buddyPointInfo;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.resultBuddyPointInfo, (int32_t)buddyPointInfo, v8, v9);
  if ( !this->fields.resultBuddyPointInfo )
    return;
  this->fields.buddyPointEventId = eventId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  this->fields.rankMaster = (struct EventServantPointRankMaster_o *)Master_object;
  p_rankMaster = &this->fields.rankMaster;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.rankMaster, (int32_t)Master_object, v12, v13);
  resultBuddyPointInfo = this->fields.resultBuddyPointInfo;
  if ( !resultBuddyPointInfo || (buddyPointRankUpObject = (UnityEngine_GameObject_o *)*p_rankMaster) == 0 )
LABEL_14:
    sub_1C6BC60(buddyPointRankUpObject, buddyPointInfo);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  __int64 v13; // x21
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  __int64 v16; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  __int64 v19; // x21
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  __int64 v22; // x1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  __int64 v25; // x1
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  __int64 v28; // x1
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  __int64 v31; // x1
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  __int64 v34; // x1
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  __int64 v37; // x21
  System_Collections_Hashtable_o *v38; // x0
  __int64 v39; // x0
  int v40; // [xsp+4h] [xbp-3Ch] BYREF
  int v41; // [xsp+8h] [xbp-38h] BYREF
  int v42; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CB9B78 & 1) == 0 )
  {
    sub_1C6BA08(&object___TypeInfo);
    sub_1C6BA08(&float_TypeInfo);
    sub_1C6BA08(&StringLiteral_19755/*"from"*/);
    sub_1C6BA08(&StringLiteral_24169/*"time"*/);
    sub_1C6BA08(&StringLiteral_22526/*"onupdate"*/);
    sub_1C6BA08(&StringLiteral_24208/*"to"*/);
    sub_1C6BA08(&StringLiteral_6725/*"FinishUpdateBuddyPoint"*/);
    sub_1C6BA08(&StringLiteral_22518/*"oncomplete"*/);
    sub_1C6BA08(&StringLiteral_15180/*"UpdateBuddyPointInfo"*/);
    sub_1C6BA08(&iTween_TypeInfo);
    byte_4CB9B78 = 1;
  }
  if ( this->fields.resultBuddyPointInfo )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v4 = sub_1C6BAB0(object___TypeInfo, 10);
    if ( !v4 )
      sub_1C6BC60(0, v5);
    v8 = v4;
    v9 = StringLiteral_19755/*"from"*/;
    if ( StringLiteral_19755/*"from"*/ )
    {
      v9 = sub_1C6BB44(StringLiteral_19755/*"from"*/, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
      if ( !v9 )
        goto LABEL_54;
      v10 = StringLiteral_19755/*"from"*/;
    }
    else
    {
      v10 = 0;
    }
    if ( !*(_DWORD *)(v8 + 24) )
      goto LABEL_53;
    *(_QWORD *)(v8 + 32) = v10;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v8 + 32), v10, v6, v7);
    v42 = 0;
    v9 = j_il2cpp_value_box_0(float_TypeInfo, &v42);
    v13 = v9;
    if ( !v9 || (v9 = sub_1C6BB44(v9, *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
    {
      if ( *(_DWORD *)(v8 + 24) <= 1u )
        goto LABEL_53;
      *(_QWORD *)(v8 + 40) = v13;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v8 + 40), v13, v11, v12);
      v9 = StringLiteral_24208/*"to"*/;
      if ( StringLiteral_24208/*"to"*/ )
      {
        v9 = sub_1C6BB44(StringLiteral_24208/*"to"*/, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
        if ( !v9 )
          goto LABEL_54;
        v16 = StringLiteral_24208/*"to"*/;
      }
      else
      {
        v16 = 0;
      }
      if ( *(_DWORD *)(v8 + 24) <= 2u )
        goto LABEL_53;
      *(_QWORD *)(v8 + 48) = v16;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v8 + 48), v16, v14, v15);
      v41 = 1065353216;
      v9 = j_il2cpp_value_box_0(float_TypeInfo, &v41);
      v19 = v9;
      if ( !v9 || (v9 = sub_1C6BB44(v9, *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v8 + 24) <= 3u )
          goto LABEL_53;
        *(_QWORD *)(v8 + 56) = v19;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v8 + 56), v19, v17, v18);
        v9 = StringLiteral_22526/*"onupdate"*/;
        if ( StringLiteral_22526/*"onupdate"*/ )
        {
          v9 = sub_1C6BB44(StringLiteral_22526/*"onupdate"*/, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
          if ( !v9 )
            goto LABEL_54;
          v22 = StringLiteral_22526/*"onupdate"*/;
        }
        else
        {
          v22 = 0;
        }
        if ( *(_DWORD *)(v8 + 24) <= 4u )
          goto LABEL_53;
        *(_QWORD *)(v8 + 64) = v22;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v8 + 64), v22, v20, v21);
        v9 = StringLiteral_15180/*"UpdateBuddyPointInfo"*/;
        if ( StringLiteral_15180/*"UpdateBuddyPointInfo"*/ )
        {
          v9 = sub_1C6BB44(StringLiteral_15180/*"UpdateBuddyPointInfo"*/, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
          if ( !v9 )
            goto LABEL_54;
          v25 = StringLiteral_15180/*"UpdateBuddyPointInfo"*/;
        }
        else
        {
          v25 = 0;
        }
        if ( *(_DWORD *)(v8 + 24) <= 5u )
          goto LABEL_53;
        *(_QWORD *)(v8 + 72) = v25;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v8 + 72), v25, v23, v24);
        v9 = StringLiteral_22518/*"oncomplete"*/;
        if ( StringLiteral_22518/*"oncomplete"*/ )
        {
          v9 = sub_1C6BB44(StringLiteral_22518/*"oncomplete"*/, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
          if ( !v9 )
            goto LABEL_54;
          v28 = StringLiteral_22518/*"oncomplete"*/;
        }
        else
        {
          v28 = 0;
        }
        if ( *(_DWORD *)(v8 + 24) <= 6u )
          goto LABEL_53;
        *(_QWORD *)(v8 + 80) = v28;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v8 + 80), v28, v26, v27);
        v9 = StringLiteral_6725/*"FinishUpdateBuddyPoint"*/;
        if ( StringLiteral_6725/*"FinishUpdateBuddyPoint"*/ )
        {
          v9 = sub_1C6BB44(StringLiteral_6725/*"FinishUpdateBuddyPoint"*/, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
          if ( !v9 )
            goto LABEL_54;
          v31 = StringLiteral_6725/*"FinishUpdateBuddyPoint"*/;
        }
        else
        {
          v31 = 0;
        }
        if ( *(_DWORD *)(v8 + 24) <= 7u )
          goto LABEL_53;
        *(_QWORD *)(v8 + 88) = v31;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v8 + 88), v31, v29, v30);
        v9 = StringLiteral_24169/*"time"*/;
        if ( StringLiteral_24169/*"time"*/ )
        {
          v9 = sub_1C6BB44(StringLiteral_24169/*"time"*/, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
          if ( !v9 )
            goto LABEL_54;
          v34 = StringLiteral_24169/*"time"*/;
        }
        else
        {
          v34 = 0;
        }
        if ( *(_DWORD *)(v8 + 24) <= 8u )
          goto LABEL_53;
        *(_QWORD *)(v8 + 96) = v34;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v8 + 96), v34, v32, v33);
        v40 = 1072064102;
        v9 = j_il2cpp_value_box_0(float_TypeInfo, &v40);
        v37 = v9;
        if ( !v9 || (v9 = sub_1C6BB44(v9, *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v8 + 24) > 9u )
          {
            *(_QWORD *)(v8 + 104) = v37;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v8 + 104), v37, v35, v36);
            if ( !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
            v38 = iTween__Hash((System_Object_array *)v8, 0);
            iTween__ValueTo(gameObject, v38, 0);
            return;
          }
LABEL_53:
          sub_1C6BC68(v9);
        }
      }
    }
LABEL_54:
    v39 = sub_1C6BC84(v9);
    sub_1C6BB30(v39, 0);
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

  if ( (byte_4CB9B79 & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&long_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_2690/*"BATTLE_BUDDY_POINT_RANK_{0}"*/);
    sub_1C6BA08(&StringLiteral_25330/*"{0}（＋{1}）"*/);
    byte_4CB9B79 = 1;
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
      gameObject = (UnityEngine_GameObject_o *)System_String__Format_64008100(
                                                 (System_String_o *)StringLiteral_25330/*"{0}（＋{1}）"*/,
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
          v17 = System_String__Format((System_String_o *)StringLiteral_2690/*"BATTLE_BUDDY_POINT_RANK_{0}"*/, v16, 0);
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
    sub_1C6BC60(gameObject, v7);
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}