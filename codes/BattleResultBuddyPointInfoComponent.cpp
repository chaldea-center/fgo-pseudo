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

  if ( (byte_4A5E2BE & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&StringLiteral_25121/*"{0}（＋{1}）"*/);
    sub_1B885B0(&iTween_TypeInfo);
    byte_4A5E2BE = 1;
  }
  if ( this->fields.resultBuddyPointInfo )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__Stop_60355704(gameObject, 0LL);
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
    v4 = System_String__Format_61721404((System_String_o *)StringLiteral_25121/*"{0}（＋{1}）"*/, v14, v18, 0LL);
    if ( !buddyPointLabel
      || (UILabel__set_text(buddyPointLabel, v4, 0LL), (v4 = (System_String_o *)this->fields.buddyPointLabel) == 0LL)
      || (UILabel__SetCondensedScale((UILabel_o *)v4, this->fields.pointLabelMaxWidth, 0LL),
          (v20 = this->fields.resultBuddyPointInfo) == 0LL) )
    {
LABEL_16:
      sub_1B8880C(v4, v5);
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
  int32_t v8; // w2
  int32_t v9; // w3
  struct BattleBuddyPointInfo_o *resultBuddyPointInfo; // x8
  EventServantPointRankEntity_o *EnableEntity; // x0
  int32_t svtPointRank; // w8

  if ( (byte_4A5E2BD & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5E2BD = 1;
  }
  p_rankMaster = &this->fields.rankMaster;
  rankMaster = this->fields.rankMaster;
  if ( !rankMaster )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    *p_rankMaster = (struct EventServantPointRankMaster_o *)Master_object;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.rankMaster, (int32_t)Master_object, v8, v9);
    rankMaster = *p_rankMaster;
  }
  resultBuddyPointInfo = this->fields.resultBuddyPointInfo;
  if ( !resultBuddyPointInfo || !rankMaster )
    sub_1B8880C(rankMaster, *(_QWORD *)&buddyPoint);
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
  Il2CppObject *Object_object__48635516; // x20
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

  if ( (byte_4A5E2BF & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_5816/*"Effect/BattleResult/{0}"*/);
    sub_1B885B0(&StringLiteral_17207/*"bit_buddy_rankup"*/);
    sub_1B885B0(&StringLiteral_2815/*"BATTLE_BUDDY_POINT_RANK_{0}"*/);
    byte_4A5E2BF = 1;
  }
  buddyPointRankUpObject = this->fields.buddyPointRankUpObject;
  if ( !buddyPointRankUpObject )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(buddyPointRankUpObject, 1, 0LL);
  buddyPointEventId = this->fields.buddyPointEventId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &buddyPointEventId, v4, v5, v6);
  v8 = System_String__Format((System_String_o *)StringLiteral_5816/*"Effect/BattleResult/{0}"*/, v7, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)AssetManager__getAssetStorage(v8, 0LL);
  if ( !buddyPointRankUpObject )
    goto LABEL_29;
  Object_object__48635516 = AssetData__GetObject_object__48635516(
                              (AssetData_o *)buddyPointRankUpObject,
                              (System_String_o *)StringLiteral_17207/*"bit_buddy_rankup"*/,
                              (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                         Object_object__48635516,
                                                         (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  UnityEngine_Transform__set_localPosition(v11, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  if ( !byte_4A55CE6 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
  }
  UnityEngine_Transform__set_localScale(v11, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v10,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  v13 = UnityEngine_GameObject__GetComponent_object_(
          v10,
          (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                         (UnityEngine_Object_o *)Component_object,
                                                         0LL,
                                                         0LL);
  if ( ((unsigned __int8)buddyPointRankUpObject & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_29;
    UnityEngine_Animation__Play_69204472(
      (UnityEngine_Animation_o *)Component_object,
      (System_String_o *)StringLiteral_17207/*"bit_buddy_rankup"*/,
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
      SimpleAnimation__Play_63844704((SimpleAnimation_o *)v13, (System_String_o *)StringLiteral_17207/*"bit_buddy_rankup"*/, 0LL);
    }
  }
  beforeBuddyRank = this->fields.beforeBuddyRank;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &beforeBuddyRank, v14, v15, v16);
  v18 = System_String__Format((System_String_o *)StringLiteral_2815/*"BATTLE_BUDDY_POINT_RANK_{0}"*/, v17, 0LL);
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
    sub_1B8880C(buddyPointRankUpObject, method);
  }
  UILabel__SetCondensedScale((UILabel_o *)buddyPointRankUpObject, this->fields.pointLabelMaxWidth, 0LL);
}


void __fastcall BattleResultBuddyPointInfoComponent__SetBuddyPointInfo(
        BattleResultBuddyPointInfoComponent_o *this,
        BattleBuddyPointInfo_o *buddyPointInfo,
        int32_t eventId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *buddyPointRankUpObject; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  Il2CppObject *Master_object; // x0
  struct EventServantPointRankMaster_o **p_rankMaster; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  struct BattleBuddyPointInfo_o *resultBuddyPointInfo; // x8
  EventServantPointRankEntity_o *EnableEntity; // x0
  int32_t svtPointRank; // w8

  if ( (byte_4A5E2BA & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5E2BA = 1;
  }
  buddyPointRankUpObject = this->fields.buddyPointRankUpObject;
  if ( !buddyPointRankUpObject )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(buddyPointRankUpObject, 0, 0LL);
  this->fields.resultBuddyPointInfo = buddyPointInfo;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.resultBuddyPointInfo, (int32_t)buddyPointInfo, v8, v9);
  if ( !this->fields.resultBuddyPointInfo )
    return;
  this->fields.buddyPointEventId = eventId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  this->fields.rankMaster = (struct EventServantPointRankMaster_o *)Master_object;
  p_rankMaster = &this->fields.rankMaster;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.rankMaster, (int32_t)Master_object, v12, v13);
  resultBuddyPointInfo = this->fields.resultBuddyPointInfo;
  if ( !resultBuddyPointInfo || (buddyPointRankUpObject = (UnityEngine_GameObject_o *)*p_rankMaster) == 0LL )
LABEL_14:
    sub_1B8880C(buddyPointRankUpObject, buddyPointInfo);
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
  int32_t v6; // w2
  int32_t v7; // w3
  System_Object_array *v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  int32_t v14; // w2
  int32_t v15; // w3
  Il2CppObject *v16; // x21
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  int32_t v22; // w2
  int32_t v23; // w3
  Il2CppObject *v24; // x21
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t v33; // w2
  int32_t v34; // w3
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  int32_t v38; // w2
  int32_t v39; // w3
  Il2CppObject *v40; // x21
  System_Collections_Hashtable_o *v41; // x0
  __int64 v42; // x0
  int v43; // [xsp+4h] [xbp-3Ch] BYREF
  int v44; // [xsp+8h] [xbp-38h] BYREF
  int v45; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A5E2BB & 1) == 0 )
  {
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&float_TypeInfo);
    sub_1B885B0(&StringLiteral_19656/*"from"*/);
    sub_1B885B0(&StringLiteral_23929/*"time"*/);
    sub_1B885B0(&StringLiteral_22281/*"onupdate"*/);
    sub_1B885B0(&StringLiteral_23969/*"to"*/);
    sub_1B885B0(&StringLiteral_6698/*"FinishUpdateBuddyPoint"*/);
    sub_1B885B0(&StringLiteral_22273/*"oncomplete"*/);
    sub_1B885B0(&StringLiteral_15179/*"UpdateBuddyPointInfo"*/);
    sub_1B885B0(&iTween_TypeInfo);
    byte_4A5E2BB = 1;
  }
  if ( this->fields.resultBuddyPointInfo )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v4 = sub_1B88658(object___TypeInfo, 10LL);
    if ( !v4 )
      sub_1B8880C(0LL, v5);
    v8 = (System_Object_array *)v4;
    v9 = StringLiteral_19656/*"from"*/;
    if ( StringLiteral_19656/*"from"*/ )
    {
      v9 = sub_1B886EC(StringLiteral_19656/*"from"*/, v8->obj.klass->_1.element_class);
      if ( !v9 )
        goto LABEL_54;
      v10 = StringLiteral_19656/*"from"*/;
    }
    else
    {
      v10 = 0LL;
    }
    if ( !v8->max_length )
      goto LABEL_53;
    v8->m_Items[0] = (Il2CppObject *)v10;
    sub_1B88554((ServantStatusBattleListViewItem_o *)v8->m_Items, v10, v6, v7);
    v45 = 0;
    v9 = j_il2cpp_value_box_0(float_TypeInfo, &v45, v11, v12, v13);
    v16 = (Il2CppObject *)v9;
    if ( !v9 || (v9 = sub_1B886EC(v9, v8->obj.klass->_1.element_class)) != 0 )
    {
      if ( v8->max_length <= 1 )
        goto LABEL_53;
      v8->m_Items[1] = v16;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->m_Items[1], (int32_t)v16, v14, v15);
      v9 = StringLiteral_23969/*"to"*/;
      if ( StringLiteral_23969/*"to"*/ )
      {
        v9 = sub_1B886EC(StringLiteral_23969/*"to"*/, v8->obj.klass->_1.element_class);
        if ( !v9 )
          goto LABEL_54;
        v10 = StringLiteral_23969/*"to"*/;
      }
      else
      {
        v10 = 0LL;
      }
      if ( v8->max_length <= 2 )
        goto LABEL_53;
      v8->m_Items[2] = (Il2CppObject *)v10;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->m_Items[2], v10, v17, v18);
      v44 = 1065353216;
      v9 = j_il2cpp_value_box_0(float_TypeInfo, &v44, v19, v20, v21);
      v24 = (Il2CppObject *)v9;
      if ( !v9 || (v9 = sub_1B886EC(v9, v8->obj.klass->_1.element_class)) != 0 )
      {
        if ( v8->max_length <= 3 )
          goto LABEL_53;
        v8->m_Items[3] = v24;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->m_Items[3], (int32_t)v24, v22, v23);
        v9 = StringLiteral_22281/*"onupdate"*/;
        if ( StringLiteral_22281/*"onupdate"*/ )
        {
          v9 = sub_1B886EC(StringLiteral_22281/*"onupdate"*/, v8->obj.klass->_1.element_class);
          if ( !v9 )
            goto LABEL_54;
          v10 = StringLiteral_22281/*"onupdate"*/;
        }
        else
        {
          v10 = 0LL;
        }
        if ( v8->max_length <= 4 )
          goto LABEL_53;
        v8->m_Items[4] = (Il2CppObject *)v10;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->m_Items[4], v10, v25, v26);
        v9 = StringLiteral_15179/*"UpdateBuddyPointInfo"*/;
        if ( StringLiteral_15179/*"UpdateBuddyPointInfo"*/ )
        {
          v9 = sub_1B886EC(StringLiteral_15179/*"UpdateBuddyPointInfo"*/, v8->obj.klass->_1.element_class);
          if ( !v9 )
            goto LABEL_54;
          v10 = StringLiteral_15179/*"UpdateBuddyPointInfo"*/;
        }
        else
        {
          v10 = 0LL;
        }
        if ( v8->max_length <= 5 )
          goto LABEL_53;
        v8->m_Items[5] = (Il2CppObject *)v10;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->m_Items[5], v10, v27, v28);
        v9 = StringLiteral_22273/*"oncomplete"*/;
        if ( StringLiteral_22273/*"oncomplete"*/ )
        {
          v9 = sub_1B886EC(StringLiteral_22273/*"oncomplete"*/, v8->obj.klass->_1.element_class);
          if ( !v9 )
            goto LABEL_54;
          v10 = StringLiteral_22273/*"oncomplete"*/;
        }
        else
        {
          v10 = 0LL;
        }
        if ( v8->max_length <= 6 )
          goto LABEL_53;
        v8->m_Items[6] = (Il2CppObject *)v10;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->m_Items[6], v10, v29, v30);
        v9 = StringLiteral_6698/*"FinishUpdateBuddyPoint"*/;
        if ( StringLiteral_6698/*"FinishUpdateBuddyPoint"*/ )
        {
          v9 = sub_1B886EC(StringLiteral_6698/*"FinishUpdateBuddyPoint"*/, v8->obj.klass->_1.element_class);
          if ( !v9 )
            goto LABEL_54;
          v10 = StringLiteral_6698/*"FinishUpdateBuddyPoint"*/;
        }
        else
        {
          v10 = 0LL;
        }
        if ( v8->max_length <= 7 )
          goto LABEL_53;
        v8->m_Items[7] = (Il2CppObject *)v10;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->m_Items[7], v10, v31, v32);
        v9 = StringLiteral_23929/*"time"*/;
        if ( StringLiteral_23929/*"time"*/ )
        {
          v9 = sub_1B886EC(StringLiteral_23929/*"time"*/, v8->obj.klass->_1.element_class);
          if ( !v9 )
            goto LABEL_54;
          v10 = StringLiteral_23929/*"time"*/;
        }
        else
        {
          v10 = 0LL;
        }
        if ( v8->max_length <= 8 )
          goto LABEL_53;
        v8->m_Items[8] = (Il2CppObject *)v10;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->m_Items[8], v10, v33, v34);
        v43 = 1072064102;
        v9 = j_il2cpp_value_box_0(float_TypeInfo, &v43, v35, v36, v37);
        v40 = (Il2CppObject *)v9;
        if ( !v9 || (v9 = sub_1B886EC(v9, v8->obj.klass->_1.element_class)) != 0 )
        {
          if ( v8->max_length > 9 )
          {
            v8->m_Items[9] = v40;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->m_Items[9], (int32_t)v40, v38, v39);
            if ( !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
            v41 = iTween__Hash(v8, 0LL);
            iTween__ValueTo(gameObject, v41, 0LL);
            return;
          }
LABEL_53:
          sub_1B88814(v9, v10);
        }
      }
    }
LABEL_54:
    v42 = sub_1B88830(v9);
    sub_1B886D8(v42, 0LL);
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

  if ( (byte_4A5E2BC & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&long_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_2815/*"BATTLE_BUDDY_POINT_RANK_{0}"*/);
    sub_1B885B0(&StringLiteral_25121/*"{0}（＋{1}）"*/);
    byte_4A5E2BC = 1;
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
      gameObject = (UnityEngine_GameObject_o *)System_String__Format_61721404(
                                                 (System_String_o *)StringLiteral_25121/*"{0}（＋{1}）"*/,
                                                 v17,
                                                 v21,
                                                 0LL);
      if ( buddyPointLabel )
      {
        UILabel__set_text(buddyPointLabel, (System_String_o *)gameObject, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.buddyPointLabel;
        if ( gameObject )
        {
          UILabel__SetCondensedScale((UILabel_o *)gameObject, this->fields.pointLabelMaxWidth, 0LL);
          beforeBuddyRank = this->fields.beforeBuddyRank;
          v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &beforeBuddyRank, v22, v23, v24);
          v26 = System_String__Format((System_String_o *)StringLiteral_2815/*"BATTLE_BUDDY_POINT_RANK_{0}"*/, v25, 0LL);
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
    sub_1B8880C(gameObject, v7);
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}