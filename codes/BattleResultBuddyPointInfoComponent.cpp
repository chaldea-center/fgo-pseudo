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

  if ( (byte_4B05658 & 1) == 0 )
  {
    sub_1BC3008(&int_TypeInfo, method);
    sub_1BC3008(&StringLiteral_24979/*"{0}（＋{1}）"*/, v3);
    sub_1BC3008(&iTween_TypeInfo, v4);
    byte_4B05658 = 1;
  }
  if ( this->fields.resultBuddyPointInfo )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__Stop_62096552(gameObject, 0LL);
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
    v6 = System_String__Format_62389940((System_String_o *)StringLiteral_24979/*"{0}（＋{1}）"*/, v16, v20, 0LL);
    if ( !buddyPointLabel
      || (UILabel__set_text(buddyPointLabel, v6, 0LL), (v6 = (System_String_o *)this->fields.buddyPointLabel) == 0LL)
      || (UILabel__SetCondensedScale((UILabel_o *)v6, this->fields.pointLabelMaxWidth, 0, 0LL),
          (v22 = this->fields.resultBuddyPointInfo) == 0LL) )
    {
LABEL_16:
      sub_1BC3264(v6, v7);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct BattleBuddyPointInfo_o *resultBuddyPointInfo; // x8
  EventServantPointRankEntity_o *EnableEntity; // x0
  int32_t svtPointRank; // w8

  if ( (byte_4B05657 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_EventServantPointRankMaster___, *(_QWORD *)&buddyPoint);
    sub_1BC3008(&DataManager_TypeInfo, v5);
    byte_4B05657 = 1;
  }
  p_rankMaster = &this->fields.rankMaster;
  rankMaster = this->fields.rankMaster;
  if ( !rankMaster )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    *p_rankMaster = (struct EventServantPointRankMaster_o *)Master_object;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.rankMaster, (int32_t)Master_object, v9, v10);
    rankMaster = *p_rankMaster;
  }
  resultBuddyPointInfo = this->fields.resultBuddyPointInfo;
  if ( !resultBuddyPointInfo || !rankMaster )
    sub_1BC3264(rankMaster, *(_QWORD *)&buddyPoint);
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
  Il2CppObject *Object_object__50213776; // x20
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

  if ( (byte_4B05659 & 1) == 0 )
  {
    sub_1BC3008(&Method_AssetData_GetObject_GameObject____76809672, method);
    sub_1BC3008(&AssetManager_TypeInfo, v3);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_Animation___, v4);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v5);
    sub_1BC3008(&int_TypeInfo, v6);
    sub_1BC3008(&LocalizationManager_TypeInfo, v7);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v9);
    sub_1BC3008(&StringLiteral_5800/*"Effect/BattleResult/{0}"*/, v10);
    sub_1BC3008(&StringLiteral_17028/*"bit_buddy_rankup"*/, v11);
    sub_1BC3008(&StringLiteral_2680/*"BATTLE_BUDDY_POINT_RANK_{0}"*/, v12);
    byte_4B05659 = 1;
  }
  buddyPointRankUpObject = this->fields.buddyPointRankUpObject;
  if ( !buddyPointRankUpObject )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(buddyPointRankUpObject, 1, 0LL);
  buddyPointEventId = this->fields.buddyPointEventId;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &buddyPointEventId, v14, v15, v16);
  v18 = System_String__Format((System_String_o *)StringLiteral_5800/*"Effect/BattleResult/{0}"*/, v17, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)AssetManager__getAssetStorage(v18, 0LL);
  if ( !buddyPointRankUpObject )
    goto LABEL_29;
  Object_object__50213776 = AssetData__GetObject_object__50213776(
                              (AssetData_o *)buddyPointRankUpObject,
                              (System_String_o *)StringLiteral_17028/*"bit_buddy_rankup"*/,
                              (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_GameObject____76809672);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                         Object_object__50213776,
                                                         (const MethodInfo_308AE24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
  if ( !byte_4AFBDB1 )
  {
    sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v22);
    byte_4AFBDB1 = 1;
  }
  UnityEngine_Transform__set_localPosition(v21, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  if ( !byte_4AFBDB6 )
  {
    sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v23);
    byte_4AFBDB6 = 1;
  }
  UnityEngine_Transform__set_localScale(v21, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v20,
                       (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  v25 = UnityEngine_GameObject__GetComponent_object_(
          v20,
          (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                         (UnityEngine_Object_o *)Component_object,
                                                         0LL,
                                                         0LL);
  if ( ((unsigned __int8)buddyPointRankUpObject & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_29;
    UnityEngine_Animation__Play_69779584(
      (UnityEngine_Animation_o *)Component_object,
      (System_String_o *)StringLiteral_17028/*"bit_buddy_rankup"*/,
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
      SimpleAnimation__Play_65293968((SimpleAnimation_o *)v25, (System_String_o *)StringLiteral_17028/*"bit_buddy_rankup"*/, 0LL);
    }
  }
  beforeBuddyRank = this->fields.beforeBuddyRank;
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &beforeBuddyRank, v26, v27, v28);
  v30 = System_String__Format((System_String_o *)StringLiteral_2680/*"BATTLE_BUDDY_POINT_RANK_{0}"*/, v29, 0LL);
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
    sub_1BC3264(buddyPointRankUpObject, method);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  Il2CppObject *Master_object; // x0
  struct EventServantPointRankMaster_o **p_rankMaster; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct BattleBuddyPointInfo_o *resultBuddyPointInfo; // x8
  EventServantPointRankEntity_o *EnableEntity; // x0
  int32_t svtPointRank; // w8

  if ( (byte_4B05654 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_EventServantPointRankMaster___, buddyPointInfo);
    sub_1BC3008(&DataManager_TypeInfo, v7);
    byte_4B05654 = 1;
  }
  buddyPointRankUpObject = this->fields.buddyPointRankUpObject;
  if ( !buddyPointRankUpObject )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(buddyPointRankUpObject, 0, 0LL);
  this->fields.resultBuddyPointInfo = buddyPointInfo;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.resultBuddyPointInfo, (int32_t)buddyPointInfo, v9, v10);
  if ( !this->fields.resultBuddyPointInfo )
    return;
  this->fields.buddyPointEventId = eventId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  this->fields.rankMaster = (struct EventServantPointRankMaster_o *)Master_object;
  p_rankMaster = &this->fields.rankMaster;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.rankMaster, (int32_t)Master_object, v13, v14);
  resultBuddyPointInfo = this->fields.resultBuddyPointInfo;
  if ( !resultBuddyPointInfo || (buddyPointRankUpObject = (UnityEngine_GameObject_o *)*p_rankMaster) == 0LL )
LABEL_14:
    sub_1BC3264(buddyPointRankUpObject, buddyPointInfo);
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
  __int64 v15; // x2
  const MethodInfo *v16; // x3
  System_Object_array *v17; // x20
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  const MethodInfo *v23; // x3
  Il2CppObject *v24; // x21
  const MethodInfo *v25; // x3
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  const MethodInfo *v29; // x3
  Il2CppObject *v30; // x21
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x3
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  const MethodInfo *v39; // x3
  Il2CppObject *v40; // x21
  System_Collections_Hashtable_o *v41; // x0
  __int64 v42; // x0
  int v43; // [xsp+4h] [xbp-3Ch] BYREF
  int v44; // [xsp+8h] [xbp-38h] BYREF
  int v45; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B05655 & 1) == 0 )
  {
    sub_1BC3008(&object___TypeInfo, method);
    sub_1BC3008(&float_TypeInfo, v3);
    sub_1BC3008(&StringLiteral_19506/*"from"*/, v4);
    sub_1BC3008(&StringLiteral_23833/*"time"*/, v5);
    sub_1BC3008(&StringLiteral_22219/*"onupdate"*/, v6);
    sub_1BC3008(&StringLiteral_23872/*"to"*/, v7);
    sub_1BC3008(&StringLiteral_6676/*"FinishUpdateBuddyPoint"*/, v8);
    sub_1BC3008(&StringLiteral_22211/*"oncomplete"*/, v9);
    sub_1BC3008(&StringLiteral_15050/*"UpdateBuddyPointInfo"*/, v10);
    sub_1BC3008(&iTween_TypeInfo, v11);
    byte_4B05655 = 1;
  }
  if ( this->fields.resultBuddyPointInfo )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v13 = sub_1BC30B0(object___TypeInfo, 10LL);
    if ( !v13 )
      sub_1BC3264(0LL, v14);
    v17 = (System_Object_array *)v13;
    v18 = StringLiteral_19506/*"from"*/;
    if ( StringLiteral_19506/*"from"*/ )
    {
      v18 = sub_1BC3144(StringLiteral_19506/*"from"*/, v17->obj.klass->_1.element_class);
      if ( !v18 )
        goto LABEL_54;
      v19 = StringLiteral_19506/*"from"*/;
    }
    else
    {
      v19 = 0LL;
    }
    if ( !v17->max_length )
      goto LABEL_53;
    v17->m_Items[0] = (Il2CppObject *)v19;
    sub_1BC2FAC((CGThumbnailListItem_o *)v17->m_Items, v19, v15, v16);
    v45 = 0;
    v18 = j_il2cpp_value_box_0(float_TypeInfo, &v45, v20, v21, v22);
    v24 = (Il2CppObject *)v18;
    if ( !v18 || (v18 = sub_1BC3144(v18, v17->obj.klass->_1.element_class)) != 0 )
    {
      if ( v17->max_length <= 1 )
        goto LABEL_53;
      v17->m_Items[1] = v24;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v17->m_Items[1], (int32_t)v24, v15, v23);
      v18 = StringLiteral_23872/*"to"*/;
      if ( StringLiteral_23872/*"to"*/ )
      {
        v18 = sub_1BC3144(StringLiteral_23872/*"to"*/, v17->obj.klass->_1.element_class);
        if ( !v18 )
          goto LABEL_54;
        v19 = StringLiteral_23872/*"to"*/;
      }
      else
      {
        v19 = 0LL;
      }
      if ( v17->max_length <= 2 )
        goto LABEL_53;
      v17->m_Items[2] = (Il2CppObject *)v19;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v17->m_Items[2], v19, v15, v25);
      v44 = 1065353216;
      v18 = j_il2cpp_value_box_0(float_TypeInfo, &v44, v26, v27, v28);
      v30 = (Il2CppObject *)v18;
      if ( !v18 || (v18 = sub_1BC3144(v18, v17->obj.klass->_1.element_class)) != 0 )
      {
        if ( v17->max_length <= 3 )
          goto LABEL_53;
        v17->m_Items[3] = v30;
        sub_1BC2FAC((CGThumbnailListItem_o *)&v17->m_Items[3], (int32_t)v30, v15, v29);
        v18 = StringLiteral_22219/*"onupdate"*/;
        if ( StringLiteral_22219/*"onupdate"*/ )
        {
          v18 = sub_1BC3144(StringLiteral_22219/*"onupdate"*/, v17->obj.klass->_1.element_class);
          if ( !v18 )
            goto LABEL_54;
          v19 = StringLiteral_22219/*"onupdate"*/;
        }
        else
        {
          v19 = 0LL;
        }
        if ( v17->max_length <= 4 )
          goto LABEL_53;
        v17->m_Items[4] = (Il2CppObject *)v19;
        sub_1BC2FAC((CGThumbnailListItem_o *)&v17->m_Items[4], v19, v15, v31);
        v18 = StringLiteral_15050/*"UpdateBuddyPointInfo"*/;
        if ( StringLiteral_15050/*"UpdateBuddyPointInfo"*/ )
        {
          v18 = sub_1BC3144(StringLiteral_15050/*"UpdateBuddyPointInfo"*/, v17->obj.klass->_1.element_class);
          if ( !v18 )
            goto LABEL_54;
          v19 = StringLiteral_15050/*"UpdateBuddyPointInfo"*/;
        }
        else
        {
          v19 = 0LL;
        }
        if ( v17->max_length <= 5 )
          goto LABEL_53;
        v17->m_Items[5] = (Il2CppObject *)v19;
        sub_1BC2FAC((CGThumbnailListItem_o *)&v17->m_Items[5], v19, v15, v32);
        v18 = StringLiteral_22211/*"oncomplete"*/;
        if ( StringLiteral_22211/*"oncomplete"*/ )
        {
          v18 = sub_1BC3144(StringLiteral_22211/*"oncomplete"*/, v17->obj.klass->_1.element_class);
          if ( !v18 )
            goto LABEL_54;
          v19 = StringLiteral_22211/*"oncomplete"*/;
        }
        else
        {
          v19 = 0LL;
        }
        if ( v17->max_length <= 6 )
          goto LABEL_53;
        v17->m_Items[6] = (Il2CppObject *)v19;
        sub_1BC2FAC((CGThumbnailListItem_o *)&v17->m_Items[6], v19, v15, v33);
        v18 = StringLiteral_6676/*"FinishUpdateBuddyPoint"*/;
        if ( StringLiteral_6676/*"FinishUpdateBuddyPoint"*/ )
        {
          v18 = sub_1BC3144(StringLiteral_6676/*"FinishUpdateBuddyPoint"*/, v17->obj.klass->_1.element_class);
          if ( !v18 )
            goto LABEL_54;
          v19 = StringLiteral_6676/*"FinishUpdateBuddyPoint"*/;
        }
        else
        {
          v19 = 0LL;
        }
        if ( v17->max_length <= 7 )
          goto LABEL_53;
        v17->m_Items[7] = (Il2CppObject *)v19;
        sub_1BC2FAC((CGThumbnailListItem_o *)&v17->m_Items[7], v19, v15, v34);
        v18 = StringLiteral_23833/*"time"*/;
        if ( StringLiteral_23833/*"time"*/ )
        {
          v18 = sub_1BC3144(StringLiteral_23833/*"time"*/, v17->obj.klass->_1.element_class);
          if ( !v18 )
            goto LABEL_54;
          v19 = StringLiteral_23833/*"time"*/;
        }
        else
        {
          v19 = 0LL;
        }
        if ( v17->max_length <= 8 )
          goto LABEL_53;
        v17->m_Items[8] = (Il2CppObject *)v19;
        sub_1BC2FAC((CGThumbnailListItem_o *)&v17->m_Items[8], v19, v15, v35);
        v43 = 1072064102;
        v18 = j_il2cpp_value_box_0(float_TypeInfo, &v43, v36, v37, v38);
        v40 = (Il2CppObject *)v18;
        if ( !v18 || (v18 = sub_1BC3144(v18, v17->obj.klass->_1.element_class)) != 0 )
        {
          if ( v17->max_length > 9 )
          {
            v17->m_Items[9] = v40;
            sub_1BC2FAC((CGThumbnailListItem_o *)&v17->m_Items[9], (int32_t)v40, v15, v39);
            if ( !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
            v41 = iTween__Hash(v17, 0LL);
            iTween__ValueTo(gameObject, v41, 0LL);
            return;
          }
LABEL_53:
          sub_1BC326C(v18, v19, v15);
        }
      }
    }
LABEL_54:
    v42 = sub_1BC3288(v18);
    sub_1BC3130(v42, 0LL);
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

  if ( (byte_4B05656 & 1) == 0 )
  {
    sub_1BC3008(&int_TypeInfo, method);
    sub_1BC3008(&long_TypeInfo, v5);
    sub_1BC3008(&LocalizationManager_TypeInfo, v6);
    sub_1BC3008(&StringLiteral_2680/*"BATTLE_BUDDY_POINT_RANK_{0}"*/, v7);
    sub_1BC3008(&StringLiteral_24979/*"{0}（＋{1}）"*/, v8);
    byte_4B05656 = 1;
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
      gameObject = (UnityEngine_GameObject_o *)System_String__Format_62389940(
                                                 (System_String_o *)StringLiteral_24979/*"{0}（＋{1}）"*/,
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
          v30 = System_String__Format((System_String_o *)StringLiteral_2680/*"BATTLE_BUDDY_POINT_RANK_{0}"*/, v29, 0LL);
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
    sub_1BC3264(gameObject, v11);
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}