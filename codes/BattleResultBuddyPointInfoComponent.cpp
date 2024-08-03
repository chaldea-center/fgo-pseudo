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
  struct BattleBuddyPointInfo_o *resultBuddyPointInfo; // x8
  int aftBuddyPoint; // w9
  UILabel_o *buddyPointLabel; // x20
  int v10; // w24
  int v11; // w8
  Il2CppObject *v12; // x21
  Il2CppObject *v13; // x0
  const MethodInfo *v14; // x2
  struct BattleBuddyPointInfo_o *v15; // x8
  const MethodInfo *v16; // x1
  int v17; // [xsp+8h] [xbp-38h] BYREF
  int v18; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FF4ED & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, method);
    sub_1B640C8(&StringLiteral_25020/*"{0}（＋{1}）"*/, v3);
    sub_1B640C8(&iTween_TypeInfo, v4);
    byte_49FF4ED = 1;
  }
  if ( this->fields.resultBuddyPointInfo )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__Stop_60023324(gameObject, 0LL);
    resultBuddyPointInfo = this->fields.resultBuddyPointInfo;
    if ( !resultBuddyPointInfo )
      goto LABEL_16;
    aftBuddyPoint = resultBuddyPointInfo->fields.aftBuddyPoint;
    buddyPointLabel = this->fields.buddyPointLabel;
    v10 = aftBuddyPoint - resultBuddyPointInfo->fields.befBuddyPoint;
    v11 = aftBuddyPoint >= 9999999 ? 9999999 : resultBuddyPointInfo->fields.aftBuddyPoint;
    v18 = v11;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
    v17 = v10;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
    v6 = System_String__Format_61389768((System_String_o *)StringLiteral_25020/*"{0}（＋{1}）"*/, v12, v13, 0LL);
    if ( !buddyPointLabel
      || (UILabel__set_text(buddyPointLabel, v6, 0LL), (v6 = (System_String_o *)this->fields.buddyPointLabel) == 0LL)
      || (UILabel__SetCondensedScale((UILabel_o *)v6, this->fields.pointLabelMaxWidth, 0LL),
          (v15 = this->fields.resultBuddyPointInfo) == 0LL) )
    {
LABEL_16:
      sub_1B64324(v6);
    }
    if ( BattleResultBuddyPointInfoComponent__IsRankUpBuddyRank(this, v15->fields.aftBuddyPoint, v14) )
      BattleResultBuddyPointInfoComponent__PlayBuddyRankUp(this, v16);
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
  int32_t v10; // w3
  struct BattleBuddyPointInfo_o *resultBuddyPointInfo; // x8
  EventServantPointRankEntity_o *EnableEntity; // x0
  int32_t svtPointRank; // w8

  if ( (byte_49FF4EC & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_EventServantPointRankMaster___, *(_QWORD *)&buddyPoint);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    byte_49FF4EC = 1;
  }
  p_rankMaster = &this->fields.rankMaster;
  rankMaster = this->fields.rankMaster;
  if ( !rankMaster )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    *p_rankMaster = (struct EventServantPointRankMaster_o *)Master_object;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.rankMaster, (int32_t)Master_object, v9, v10);
    rankMaster = *p_rankMaster;
  }
  resultBuddyPointInfo = this->fields.resultBuddyPointInfo;
  if ( !resultBuddyPointInfo || !rankMaster )
    sub_1B64324(rankMaster);
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
  Il2CppObject *v14; // x0
  System_String_o *v15; // x20
  Il2CppObject *Object_object__48347676; // x20
  UnityEngine_GameObject_o *v17; // x20
  UnityEngine_Transform_o *v18; // x21
  __int64 v19; // x1
  __int64 v20; // x1
  Il2CppObject *Component_object; // x21
  Il2CppObject *v22; // x20
  Il2CppObject *v23; // x0
  System_String_o *v24; // x0
  UILabel_o *buddyPointRankLabel; // x20
  System_String_o *v26; // x21
  int32_t beforeBuddyRank; // [xsp+8h] [xbp-58h] BYREF
  int32_t buddyPointEventId; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_49FF4EE & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, method);
    sub_1B640C8(&AssetManager_TypeInfo, v3);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_Animation___, v4);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v5);
    sub_1B640C8(&int_TypeInfo, v6);
    sub_1B640C8(&LocalizationManager_TypeInfo, v7);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    sub_1B640C8(&StringLiteral_5790/*"Effect/BattleResult/{0}"*/, v10);
    sub_1B640C8(&StringLiteral_17139/*"bit_buddy_rankup"*/, v11);
    sub_1B640C8(&StringLiteral_2798/*"BATTLE_BUDDY_POINT_RANK_{0}"*/, v12);
    byte_49FF4EE = 1;
  }
  buddyPointRankUpObject = this->fields.buddyPointRankUpObject;
  if ( !buddyPointRankUpObject )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(buddyPointRankUpObject, 1, 0LL);
  buddyPointEventId = this->fields.buddyPointEventId;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &buddyPointEventId);
  v15 = System_String__Format((System_String_o *)StringLiteral_5790/*"Effect/BattleResult/{0}"*/, v14, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)AssetManager__getAssetStorage(v15, 0LL);
  if ( !buddyPointRankUpObject )
    goto LABEL_29;
  Object_object__48347676 = AssetData__GetObject_object__48347676(
                              (AssetData_o *)buddyPointRankUpObject,
                              (System_String_o *)StringLiteral_17139/*"bit_buddy_rankup"*/,
                              (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                         Object_object__48347676,
                                                         (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !buddyPointRankUpObject )
    goto LABEL_29;
  v17 = buddyPointRankUpObject;
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                         buddyPointRankUpObject,
                                                         0LL);
  if ( !this->fields.buddyPointRankUpObject )
    goto LABEL_29;
  v18 = (UnityEngine_Transform_o *)buddyPointRankUpObject;
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                         this->fields.buddyPointRankUpObject,
                                                         0LL);
  if ( !v18 )
    goto LABEL_29;
  UnityEngine_Transform__SetParent(v18, (UnityEngine_Transform_o *)buddyPointRankUpObject, 0LL);
  if ( !byte_49F7111 )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v19);
    byte_49F7111 = 1;
  }
  UnityEngine_Transform__set_localPosition(v18, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  if ( !byte_49F7116 )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v20);
    byte_49F7116 = 1;
  }
  UnityEngine_Transform__set_localScale(v18, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v17,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  v22 = UnityEngine_GameObject__GetComponent_object_(
          v17,
          (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                         (UnityEngine_Object_o *)Component_object,
                                                         0LL,
                                                         0LL);
  if ( ((unsigned __int8)buddyPointRankUpObject & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_29;
    UnityEngine_Animation__Play_68872828(
      (UnityEngine_Animation_o *)Component_object,
      (System_String_o *)StringLiteral_17139/*"bit_buddy_rankup"*/,
      0LL);
  }
  else
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                           (UnityEngine_Object_o *)v22,
                                                           0LL,
                                                           0LL);
    if ( ((unsigned __int8)buddyPointRankUpObject & 1) != 0 )
    {
      if ( !v22 )
        goto LABEL_29;
      SimpleAnimation__Play_63513060((SimpleAnimation_o *)v22, (System_String_o *)StringLiteral_17139/*"bit_buddy_rankup"*/, 0LL);
    }
  }
  beforeBuddyRank = this->fields.beforeBuddyRank;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &beforeBuddyRank);
  v24 = System_String__Format((System_String_o *)StringLiteral_2798/*"BATTLE_BUDDY_POINT_RANK_{0}"*/, v23, 0LL);
  buddyPointRankLabel = this->fields.buddyPointRankLabel;
  v26 = v24;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v26, 0LL);
  if ( !buddyPointRankLabel
    || (UILabel__set_text(buddyPointRankLabel, (System_String_o *)buddyPointRankUpObject, 0LL),
        (buddyPointRankUpObject = (UnityEngine_GameObject_o *)this->fields.buddyPointRankLabel) == 0LL) )
  {
LABEL_29:
    sub_1B64324(buddyPointRankUpObject);
  }
  UILabel__SetCondensedScale((UILabel_o *)buddyPointRankUpObject, this->fields.pointLabelMaxWidth, 0LL);
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
  int32_t v10; // w3
  Il2CppObject *Master_object; // x0
  struct EventServantPointRankMaster_o **p_rankMaster; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  struct BattleBuddyPointInfo_o *resultBuddyPointInfo; // x8
  EventServantPointRankEntity_o *EnableEntity; // x0
  int32_t svtPointRank; // w8

  if ( (byte_49FF4E9 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_EventServantPointRankMaster___, buddyPointInfo);
    sub_1B640C8(&DataManager_TypeInfo, v7);
    byte_49FF4E9 = 1;
  }
  buddyPointRankUpObject = this->fields.buddyPointRankUpObject;
  if ( !buddyPointRankUpObject )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(buddyPointRankUpObject, 0, 0LL);
  this->fields.resultBuddyPointInfo = buddyPointInfo;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.resultBuddyPointInfo, (int32_t)buddyPointInfo, v9, v10);
  if ( !this->fields.resultBuddyPointInfo )
    return;
  this->fields.buddyPointEventId = eventId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  this->fields.rankMaster = (struct EventServantPointRankMaster_o *)Master_object;
  p_rankMaster = &this->fields.rankMaster;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.rankMaster, (int32_t)Master_object, v13, v14);
  resultBuddyPointInfo = this->fields.resultBuddyPointInfo;
  if ( !resultBuddyPointInfo || (buddyPointRankUpObject = (UnityEngine_GameObject_o *)*p_rankMaster) == 0LL )
LABEL_14:
    sub_1B64324(buddyPointRankUpObject);
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
  int32_t v14; // w2
  int32_t v15; // w3
  System_Object_array *v16; // x20
  __int64 v17; // x0
  __int64 v18; // x1
  int32_t v19; // w2
  int32_t v20; // w3
  Il2CppObject *v21; // x21
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w2
  int32_t v25; // w3
  Il2CppObject *v26; // x21
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w2
  int32_t v36; // w3
  int32_t v37; // w2
  int32_t v38; // w3
  Il2CppObject *v39; // x21
  System_Collections_Hashtable_o *v40; // x0
  __int64 v41; // x0
  int v42; // [xsp+4h] [xbp-3Ch] BYREF
  int v43; // [xsp+8h] [xbp-38h] BYREF
  int v44; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FF4EA & 1) == 0 )
  {
    sub_1B640C8(&object___TypeInfo, method);
    sub_1B640C8(&float_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_19577/*"from"*/, v4);
    sub_1B640C8(&StringLiteral_23830/*"time"*/, v5);
    sub_1B640C8(&StringLiteral_22193/*"onupdate"*/, v6);
    sub_1B640C8(&StringLiteral_23870/*"to"*/, v7);
    sub_1B640C8(&StringLiteral_6670/*"FinishUpdateBuddyPoint"*/, v8);
    sub_1B640C8(&StringLiteral_22185/*"oncomplete"*/, v9);
    sub_1B640C8(&StringLiteral_15110/*"UpdateBuddyPointInfo"*/, v10);
    sub_1B640C8(&iTween_TypeInfo, v11);
    byte_49FF4EA = 1;
  }
  if ( this->fields.resultBuddyPointInfo )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v13 = sub_1B64170(object___TypeInfo, 10LL);
    if ( !v13 )
      sub_1B64324(0LL);
    v16 = (System_Object_array *)v13;
    v17 = StringLiteral_19577/*"from"*/;
    if ( StringLiteral_19577/*"from"*/ )
    {
      v17 = sub_1B64204(StringLiteral_19577/*"from"*/, v16->obj.klass->_1.element_class);
      if ( !v17 )
        goto LABEL_54;
      v18 = StringLiteral_19577/*"from"*/;
    }
    else
    {
      v18 = 0LL;
    }
    if ( !v16->max_length )
      goto LABEL_53;
    v16->m_Items[0] = (Il2CppObject *)v18;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)v16->m_Items, v18, v14, v15);
    v44 = 0;
    v17 = j_il2cpp_value_box_0(float_TypeInfo, &v44);
    v21 = (Il2CppObject *)v17;
    if ( !v17 || (v17 = sub_1B64204(v17, v16->obj.klass->_1.element_class)) != 0 )
    {
      if ( v16->max_length <= 1 )
        goto LABEL_53;
      v16->m_Items[1] = v21;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v16->m_Items[1], (int32_t)v21, v19, v20);
      v17 = StringLiteral_23870/*"to"*/;
      if ( StringLiteral_23870/*"to"*/ )
      {
        v17 = sub_1B64204(StringLiteral_23870/*"to"*/, v16->obj.klass->_1.element_class);
        if ( !v17 )
          goto LABEL_54;
        v18 = StringLiteral_23870/*"to"*/;
      }
      else
      {
        v18 = 0LL;
      }
      if ( v16->max_length <= 2 )
        goto LABEL_53;
      v16->m_Items[2] = (Il2CppObject *)v18;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v16->m_Items[2], v18, v22, v23);
      v43 = 1065353216;
      v17 = j_il2cpp_value_box_0(float_TypeInfo, &v43);
      v26 = (Il2CppObject *)v17;
      if ( !v17 || (v17 = sub_1B64204(v17, v16->obj.klass->_1.element_class)) != 0 )
      {
        if ( v16->max_length <= 3 )
          goto LABEL_53;
        v16->m_Items[3] = v26;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v16->m_Items[3], (int32_t)v26, v24, v25);
        v17 = StringLiteral_22193/*"onupdate"*/;
        if ( StringLiteral_22193/*"onupdate"*/ )
        {
          v17 = sub_1B64204(StringLiteral_22193/*"onupdate"*/, v16->obj.klass->_1.element_class);
          if ( !v17 )
            goto LABEL_54;
          v18 = StringLiteral_22193/*"onupdate"*/;
        }
        else
        {
          v18 = 0LL;
        }
        if ( v16->max_length <= 4 )
          goto LABEL_53;
        v16->m_Items[4] = (Il2CppObject *)v18;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v16->m_Items[4], v18, v27, v28);
        v17 = StringLiteral_15110/*"UpdateBuddyPointInfo"*/;
        if ( StringLiteral_15110/*"UpdateBuddyPointInfo"*/ )
        {
          v17 = sub_1B64204(StringLiteral_15110/*"UpdateBuddyPointInfo"*/, v16->obj.klass->_1.element_class);
          if ( !v17 )
            goto LABEL_54;
          v18 = StringLiteral_15110/*"UpdateBuddyPointInfo"*/;
        }
        else
        {
          v18 = 0LL;
        }
        if ( v16->max_length <= 5 )
          goto LABEL_53;
        v16->m_Items[5] = (Il2CppObject *)v18;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v16->m_Items[5], v18, v29, v30);
        v17 = StringLiteral_22185/*"oncomplete"*/;
        if ( StringLiteral_22185/*"oncomplete"*/ )
        {
          v17 = sub_1B64204(StringLiteral_22185/*"oncomplete"*/, v16->obj.klass->_1.element_class);
          if ( !v17 )
            goto LABEL_54;
          v18 = StringLiteral_22185/*"oncomplete"*/;
        }
        else
        {
          v18 = 0LL;
        }
        if ( v16->max_length <= 6 )
          goto LABEL_53;
        v16->m_Items[6] = (Il2CppObject *)v18;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v16->m_Items[6], v18, v31, v32);
        v17 = StringLiteral_6670/*"FinishUpdateBuddyPoint"*/;
        if ( StringLiteral_6670/*"FinishUpdateBuddyPoint"*/ )
        {
          v17 = sub_1B64204(StringLiteral_6670/*"FinishUpdateBuddyPoint"*/, v16->obj.klass->_1.element_class);
          if ( !v17 )
            goto LABEL_54;
          v18 = StringLiteral_6670/*"FinishUpdateBuddyPoint"*/;
        }
        else
        {
          v18 = 0LL;
        }
        if ( v16->max_length <= 7 )
          goto LABEL_53;
        v16->m_Items[7] = (Il2CppObject *)v18;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v16->m_Items[7], v18, v33, v34);
        v17 = StringLiteral_23830/*"time"*/;
        if ( StringLiteral_23830/*"time"*/ )
        {
          v17 = sub_1B64204(StringLiteral_23830/*"time"*/, v16->obj.klass->_1.element_class);
          if ( !v17 )
            goto LABEL_54;
          v18 = StringLiteral_23830/*"time"*/;
        }
        else
        {
          v18 = 0LL;
        }
        if ( v16->max_length <= 8 )
          goto LABEL_53;
        v16->m_Items[8] = (Il2CppObject *)v18;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v16->m_Items[8], v18, v35, v36);
        v42 = 1072064102;
        v17 = j_il2cpp_value_box_0(float_TypeInfo, &v42);
        v39 = (Il2CppObject *)v17;
        if ( !v17 || (v17 = sub_1B64204(v17, v16->obj.klass->_1.element_class)) != 0 )
        {
          if ( v16->max_length > 9 )
          {
            v16->m_Items[9] = v39;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v16->m_Items[9], (int32_t)v39, v37, v38);
            if ( !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
            v40 = iTween__Hash(v16, 0LL);
            iTween__ValueTo(gameObject, v40, 0LL);
            return;
          }
LABEL_53:
          sub_1B6432C(v17, v18);
        }
      }
    }
LABEL_54:
    v41 = sub_1B64348(v17);
    sub_1B641F0(v41, 0LL);
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
  struct BattleBuddyPointInfo_o *v11; // x8
  int32_t befBuddyPoint; // w20
  int v13; // w8
  __int64 v14; // x25
  int v15; // w8
  UILabel_o *buddyPointLabel; // x20
  Il2CppObject *v17; // x21
  Il2CppObject *v18; // x0
  Il2CppObject *v19; // x0
  System_String_o *v20; // x0
  UILabel_o *buddyPointRankLabel; // x19
  System_String_o *v22; // x20
  __int64 v23; // [xsp+8h] [xbp-58h] BYREF
  int32_t beforeBuddyRank; // [xsp+18h] [xbp-48h] BYREF
  int v25; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_49FF4EB & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, method);
    sub_1B640C8(&long_TypeInfo, v5);
    sub_1B640C8(&LocalizationManager_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_2798/*"BATTLE_BUDDY_POINT_RANK_{0}"*/, v7);
    sub_1B640C8(&StringLiteral_25020/*"{0}（＋{1}）"*/, v8);
    byte_49FF4EB = 1;
  }
  resultBuddyPointInfo = this->fields.resultBuddyPointInfo;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_15;
  if ( resultBuddyPointInfo )
  {
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    v11 = this->fields.resultBuddyPointInfo;
    if ( v11 )
    {
      befBuddyPoint = v11->fields.befBuddyPoint;
      v13 = v11->fields.aftBuddyPoint - befBuddyPoint;
      v14 = v13;
      v15 = BattleUtility__FloorToInt((float)v13 * val, 0LL) + befBuddyPoint;
      buddyPointLabel = this->fields.buddyPointLabel;
      if ( v15 >= 9999999 )
        v15 = 9999999;
      v25 = v15;
      v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25);
      v23 = v14;
      v18 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v23);
      gameObject = (UnityEngine_GameObject_o *)System_String__Format_61389768(
                                                 (System_String_o *)StringLiteral_25020/*"{0}（＋{1}）"*/,
                                                 v17,
                                                 v18,
                                                 0LL);
      if ( buddyPointLabel )
      {
        UILabel__set_text(buddyPointLabel, (System_String_o *)gameObject, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.buddyPointLabel;
        if ( gameObject )
        {
          UILabel__SetCondensedScale((UILabel_o *)gameObject, this->fields.pointLabelMaxWidth, 0LL);
          beforeBuddyRank = this->fields.beforeBuddyRank;
          v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &beforeBuddyRank);
          v20 = System_String__Format((System_String_o *)StringLiteral_2798/*"BATTLE_BUDDY_POINT_RANK_{0}"*/, v19, 0LL);
          buddyPointRankLabel = this->fields.buddyPointRankLabel;
          v22 = v20;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v22, 0LL);
          if ( buddyPointRankLabel )
          {
            UILabel__set_text(buddyPointRankLabel, (System_String_o *)gameObject, 0LL);
            return;
          }
        }
      }
    }
LABEL_15:
    sub_1B64324(gameObject);
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}