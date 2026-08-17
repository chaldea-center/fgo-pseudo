void BattleResultBuddyPointInfoComponent___ctor(BattleResultBuddyPointInfoComponent_o *this, const MethodInfo *method)
{
  this->fields.pointLabelMaxWidth = 150;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleResultBuddyPointInfoComponent__FinishUpdateBuddyPoint(
        BattleResultBuddyPointInfoComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  System_String_o *v5; // x0
  __int64 v6; // x1
  struct BattleBuddyPointInfo_o *resultBuddyPointInfo; // x8
  int aftBuddyPoint; // w9
  UILabel_o *buddyPointLabel; // x20
  int v10; // w24
  int v11; // w10
  Il2CppObject *v12; // x21
  Il2CppObject *v13; // x0
  const MethodInfo *v14; // x2
  struct BattleBuddyPointInfo_o *v15; // x8
  const MethodInfo *v16; // x1
  int v17; // [xsp+8h] [xbp-38h] BYREF
  int v18; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_597443D & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_26621/*"{0}（＋{1}）"*/);
    sub_2213A60(&iTween_TypeInfo);
    byte_597443D = 1;
  }
  if ( this->fields.resultBuddyPointInfo )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v3);
    iTween__Stop_75402912(gameObject, 0);
    resultBuddyPointInfo = this->fields.resultBuddyPointInfo;
    if ( !resultBuddyPointInfo )
      goto LABEL_16;
    aftBuddyPoint = resultBuddyPointInfo->fields.aftBuddyPoint;
    buddyPointLabel = this->fields.buddyPointLabel;
    v10 = aftBuddyPoint - resultBuddyPointInfo->fields.befBuddyPoint;
    v11 = aftBuddyPoint >= 9999999 ? 9999999 : resultBuddyPointInfo->fields.aftBuddyPoint;
    v18 = v11;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v18);
    v17 = v10;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v17);
    v5 = System_String__Format_75697880((System_String_o *)StringLiteral_26621/*"{0}（＋{1}）"*/, v12, v13, 0);
    if ( !buddyPointLabel
      || (UILabel__set_text(buddyPointLabel, v5, 0), (v5 = (System_String_o *)this->fields.buddyPointLabel) == 0)
      || (UILabel__SetCondensedScale((UILabel_o *)v5, this->fields.pointLabelMaxWidth, 0, 0),
          (v15 = this->fields.resultBuddyPointInfo) == 0) )
    {
LABEL_16:
      sub_2213CDC(v5, v6);
    }
    if ( BattleResultBuddyPointInfoComponent__IsRankUpBuddyRank(this, v15->fields.aftBuddyPoint, v14) )
      BattleResultBuddyPointInfoComponent__PlayBuddyRankUp(this, v16);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct BattleBuddyPointInfo_o *resultBuddyPointInfo; // x8
  EventServantPointRankEntity_o *EnableEntity; // x0
  int32_t svtPointRank; // w8

  if ( (byte_597443C & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_597443C = 1;
  }
  p_rankMaster = &this->fields.rankMaster;
  rankMaster = this->fields.rankMaster;
  if ( !rankMaster )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&buddyPoint);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    *p_rankMaster = (struct EventServantPointRankMaster_o *)Master_object;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.rankMaster,
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
    sub_2213CDC(rankMaster, *(_QWORD *)&buddyPoint);
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
  __int64 v5; // x1
  System_String_o *v6; // x20
  __int64 v7; // x1
  Il2CppObject *Object_object__58532980; // x20
  UnityEngine_GameObject_o *v9; // x20
  UnityEngine_Transform_o *v10; // x21
  Il2CppObject *Component_object; // x21
  Il2CppObject *v12; // x20
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  __int64 v15; // x1
  UILabel_o *buddyPointRankLabel; // x20
  System_String_o *v17; // x21
  int32_t beforeBuddyRank; // [xsp+8h] [xbp-58h] BYREF
  int32_t buddyPointEventId; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_597443E & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_6104/*"Effect/BattleResult/{0}"*/);
    sub_2213A60(&StringLiteral_17918/*"bit_buddy_rankup"*/);
    sub_2213A60(&StringLiteral_2811/*"BATTLE_BUDDY_POINT_RANK_{0}"*/);
    byte_597443E = 1;
  }
  buddyPointRankUpObject = this->fields.buddyPointRankUpObject;
  if ( !buddyPointRankUpObject )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(buddyPointRankUpObject, 1, 0);
  buddyPointEventId = this->fields.buddyPointEventId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &buddyPointEventId);
  v6 = System_String__Format((System_String_o *)StringLiteral_6104/*"Effect/BattleResult/{0}"*/, v4, 0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v5);
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)AssetManager__getAssetStorage(v6, 0);
  if ( !buddyPointRankUpObject )
    goto LABEL_29;
  Object_object__58532980 = AssetData__GetObject_object__58532980(
                              (AssetData_o *)buddyPointRankUpObject,
                              (System_String_o *)StringLiteral_17918/*"bit_buddy_rankup"*/,
                              (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                         Object_object__58532980,
                                                         (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !buddyPointRankUpObject )
    goto LABEL_29;
  v9 = buddyPointRankUpObject;
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(buddyPointRankUpObject, 0);
  if ( !this->fields.buddyPointRankUpObject )
    goto LABEL_29;
  v10 = (UnityEngine_Transform_o *)buddyPointRankUpObject;
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                         this->fields.buddyPointRankUpObject,
                                                         0);
  if ( !v10 )
    goto LABEL_29;
  UnityEngine_Transform__SetParent(v10, (UnityEngine_Transform_o *)buddyPointRankUpObject, 0);
  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  UnityEngine_Transform__set_localPosition(v10, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  if ( !byte_5969AE5 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  UnityEngine_Transform__set_localScale(v10, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v9,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  v12 = UnityEngine_GameObject__GetComponent_object_(
          v9,
          (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                         (UnityEngine_Object_o *)Component_object,
                                                         0,
                                                         0);
  if ( ((unsigned __int8)buddyPointRankUpObject & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_29;
    UnityEngine_Animation__Play_83078544(
      (UnityEngine_Animation_o *)Component_object,
      (System_String_o *)StringLiteral_17918/*"bit_buddy_rankup"*/,
      0);
  }
  else
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    buddyPointRankUpObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                           (UnityEngine_Object_o *)v12,
                                                           0,
                                                           0);
    if ( ((unsigned __int8)buddyPointRankUpObject & 1) != 0 )
    {
      if ( !v12 )
        goto LABEL_29;
      SimpleAnimation__Play_78552168((SimpleAnimation_o *)v12, (System_String_o *)StringLiteral_17918/*"bit_buddy_rankup"*/, 0);
    }
  }
  beforeBuddyRank = this->fields.beforeBuddyRank;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &beforeBuddyRank);
  v14 = System_String__Format((System_String_o *)StringLiteral_2811/*"BATTLE_BUDDY_POINT_RANK_{0}"*/, v13, 0);
  buddyPointRankLabel = this->fields.buddyPointRankLabel;
  v17 = v14;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15);
  buddyPointRankUpObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v17, 0);
  if ( !buddyPointRankLabel
    || (UILabel__set_text(buddyPointRankLabel, (System_String_o *)buddyPointRankUpObject, 0),
        (buddyPointRankUpObject = (UnityEngine_GameObject_o *)this->fields.buddyPointRankLabel) == 0) )
  {
LABEL_29:
    sub_2213CDC(buddyPointRankUpObject, method);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x1
  DataManager_c *v15; // x0
  int v16; // w8
  Il2CppObject *Master_object; // x0
  struct EventServantPointRankMaster_o **p_rankMaster; // x20
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  struct BattleBuddyPointInfo_o *resultBuddyPointInfo; // x8
  EventServantPointRankEntity_o *EnableEntity; // x0
  int32_t svtPointRank; // w8

  if ( (byte_5974439 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_5974439 = 1;
  }
  buddyPointRankUpObject = this->fields.buddyPointRankUpObject;
  if ( !buddyPointRankUpObject )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(buddyPointRankUpObject, 0, 0);
  this->fields.resultBuddyPointInfo = buddyPointInfo;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.resultBuddyPointInfo,
    (int32_t)buddyPointInfo,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  if ( !this->fields.resultBuddyPointInfo )
    return;
  v15 = DataManager_TypeInfo;
  v16 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  this->fields.buddyPointEventId = eventId;
  if ( !v16 )
    j_il2cpp_runtime_class_init_0(v15, v14);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  this->fields.rankMaster = (struct EventServantPointRankMaster_o *)Master_object;
  p_rankMaster = &this->fields.rankMaster;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.rankMaster,
    (int32_t)Master_object,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  resultBuddyPointInfo = this->fields.resultBuddyPointInfo;
  if ( !resultBuddyPointInfo || (buddyPointRankUpObject = (UnityEngine_GameObject_o *)*p_rankMaster) == 0 )
LABEL_14:
    sub_2213CDC(buddyPointRankUpObject, buddyPointInfo);
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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x20
  __int64 v13; // x0
  __int64 v14; // x1
  int32_t v15; // w1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x21
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  int32_t v29; // w1
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  __int64 v36; // x21
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  int32_t v43; // w1
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  int32_t v50; // w1
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  int32_t v57; // w1
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  int32_t v64; // w1
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  int32_t v71; // w1
  System_String_o *v72; // x2
  System_String_o *v73; // x3
  int32_t v74; // w4
  int32_t v75; // w5
  bool v76; // w6
  bool v77; // w7
  __int64 v78; // x21
  __int64 v79; // x1
  System_Collections_Hashtable_o *v80; // x0
  __int64 v81; // x0
  int v82; // [xsp+4h] [xbp-3Ch] BYREF
  int v83; // [xsp+8h] [xbp-38h] BYREF
  int v84; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_597443A & 1) == 0 )
  {
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&StringLiteral_20622/*"from"*/);
    sub_2213A60(&StringLiteral_25366/*"time"*/);
    sub_2213A60(&StringLiteral_23573/*"onupdate"*/);
    sub_2213A60(&StringLiteral_25406/*"to"*/);
    sub_2213A60(&StringLiteral_7017/*"FinishUpdateBuddyPoint"*/);
    sub_2213A60(&StringLiteral_23565/*"oncomplete"*/);
    sub_2213A60(&StringLiteral_15790/*"UpdateBuddyPointInfo"*/);
    sub_2213A60(&iTween_TypeInfo);
    byte_597443A = 1;
  }
  if ( this->fields.resultBuddyPointInfo )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v4 = sub_2213B20(object___TypeInfo, 10);
    if ( !v4 )
      sub_2213CDC(0, v5);
    v12 = v4;
    v13 = StringLiteral_20622/*"from"*/;
    if ( !StringLiteral_20622/*"from"*/ || (v13 = sub_2213BB4(StringLiteral_20622/*"from"*/, *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v12 + 24) )
        goto LABEL_39;
      v15 = StringLiteral_20622/*"from"*/;
      *(_QWORD *)(v12 + 32) = StringLiteral_20622/*"from"*/;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v12 + 32), v15, v6, v7, v8, v9, v10, v11);
      v84 = 0;
      v13 = j_il2cpp_value_box_0(qword_5984378, &v84);
      v22 = v13;
      if ( !v13 || (v13 = sub_2213BB4(v13, *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
      {
        if ( (*(_DWORD *)(v12 + 24) & 0xFFFFFFFE) == 0 )
          goto LABEL_39;
        *(_QWORD *)(v12 + 40) = v22;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v12 + 40), v22, v16, v17, v18, v19, v20, v21);
        v13 = StringLiteral_25406/*"to"*/;
        if ( !StringLiteral_25406/*"to"*/ || (v13 = sub_2213BB4(StringLiteral_25406/*"to"*/, *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v12 + 24) <= 2u )
            goto LABEL_39;
          v29 = StringLiteral_25406/*"to"*/;
          *(_QWORD *)(v12 + 48) = StringLiteral_25406/*"to"*/;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v12 + 48), v29, v23, v24, v25, v26, v27, v28);
          v83 = 1065353216;
          v13 = j_il2cpp_value_box_0(qword_5984378, &v83);
          v36 = v13;
          if ( !v13 || (v13 = sub_2213BB4(v13, *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
          {
            if ( (*(_DWORD *)(v12 + 24) & 0xFFFFFFFC) == 0 )
              goto LABEL_39;
            *(_QWORD *)(v12 + 56) = v36;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v12 + 56), v36, v30, v31, v32, v33, v34, v35);
            v13 = StringLiteral_23573/*"onupdate"*/;
            if ( !StringLiteral_23573/*"onupdate"*/
              || (v13 = sub_2213BB4(StringLiteral_23573/*"onupdate"*/, *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v12 + 24) <= 4u )
                goto LABEL_39;
              v43 = StringLiteral_23573/*"onupdate"*/;
              *(_QWORD *)(v12 + 64) = StringLiteral_23573/*"onupdate"*/;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v12 + 64), v43, v37, v38, v39, v40, v41, v42);
              v13 = StringLiteral_15790/*"UpdateBuddyPointInfo"*/;
              if ( !StringLiteral_15790/*"UpdateBuddyPointInfo"*/
                || (v13 = sub_2213BB4(StringLiteral_15790/*"UpdateBuddyPointInfo"*/, *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v12 + 24) <= 5u )
                  goto LABEL_39;
                v50 = StringLiteral_15790/*"UpdateBuddyPointInfo"*/;
                *(_QWORD *)(v12 + 72) = StringLiteral_15790/*"UpdateBuddyPointInfo"*/;
                sub_2213A04((MissionNaviTransitionBoardItem_o *)(v12 + 72), v50, v44, v45, v46, v47, v48, v49);
                v13 = StringLiteral_23565/*"oncomplete"*/;
                if ( !StringLiteral_23565/*"oncomplete"*/
                  || (v13 = sub_2213BB4(StringLiteral_23565/*"oncomplete"*/, *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
                {
                  if ( *(_DWORD *)(v12 + 24) <= 6u )
                    goto LABEL_39;
                  v57 = StringLiteral_23565/*"oncomplete"*/;
                  *(_QWORD *)(v12 + 80) = StringLiteral_23565/*"oncomplete"*/;
                  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v12 + 80), v57, v51, v52, v53, v54, v55, v56);
                  v13 = StringLiteral_7017/*"FinishUpdateBuddyPoint"*/;
                  if ( !StringLiteral_7017/*"FinishUpdateBuddyPoint"*/
                    || (v13 = sub_2213BB4(StringLiteral_7017/*"FinishUpdateBuddyPoint"*/, *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
                  {
                    if ( (*(_DWORD *)(v12 + 24) & 0xFFFFFFF8) == 0 )
                      goto LABEL_39;
                    v64 = StringLiteral_7017/*"FinishUpdateBuddyPoint"*/;
                    *(_QWORD *)(v12 + 88) = StringLiteral_7017/*"FinishUpdateBuddyPoint"*/;
                    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v12 + 88), v64, v58, v59, v60, v61, v62, v63);
                    v13 = StringLiteral_25366/*"time"*/;
                    if ( !StringLiteral_25366/*"time"*/
                      || (v13 = sub_2213BB4(StringLiteral_25366/*"time"*/, *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
                    {
                      if ( *(_DWORD *)(v12 + 24) <= 8u )
                        goto LABEL_39;
                      v71 = StringLiteral_25366/*"time"*/;
                      *(_QWORD *)(v12 + 96) = StringLiteral_25366/*"time"*/;
                      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v12 + 96), v71, v65, v66, v67, v68, v69, v70);
                      v82 = 1072064102;
                      v13 = j_il2cpp_value_box_0(qword_5984378, &v82);
                      v78 = v13;
                      if ( !v13 || (v13 = sub_2213BB4(v13, *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
                      {
                        if ( *(_DWORD *)(v12 + 24) > 9u )
                        {
                          *(_QWORD *)(v12 + 104) = v78;
                          sub_2213A04(
                            (MissionNaviTransitionBoardItem_o *)(v12 + 104),
                            v78,
                            v72,
                            v73,
                            v74,
                            v75,
                            v76,
                            v77);
                          if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
                            j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v79);
                          v80 = iTween__Hash((System_Object_array *)v12, 0);
                          iTween__ValueTo(gameObject, v80, 0);
                          return;
                        }
LABEL_39:
                        sub_2213CE4(v13);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    v81 = sub_2213D00(v13, v14);
    sub_2213BA0(v81, 0);
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
  __int64 v11; // x24
  int v12; // w9
  UILabel_o *buddyPointLabel; // x20
  int v14; // w8
  Il2CppObject *v15; // x21
  Il2CppObject *v16; // x0
  Il2CppObject *v17; // x0
  System_String_o *v18; // x0
  __int64 v19; // x1
  UILabel_o *buddyPointRankLabel; // x19
  System_String_o *v21; // x20
  int32_t beforeBuddyRank; // [xsp+Ch] [xbp-54h] BYREF
  __int64 v23; // [xsp+10h] [xbp-50h] BYREF
  int v24; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_597443B & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_2811/*"BATTLE_BUDDY_POINT_RANK_{0}"*/);
    sub_2213A60(&StringLiteral_26621/*"{0}（＋{1}）"*/);
    byte_597443B = 1;
  }
  resultBuddyPointInfo = this->fields.resultBuddyPointInfo;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( resultBuddyPointInfo )
  {
    if ( gameObject )
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
        v14 = v12 >= 9999999 ? 9999999 : v12;
        v24 = v14;
        v15 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v24);
        v23 = v11;
        v16 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &v23);
        gameObject = (UnityEngine_GameObject_o *)System_String__Format_75697880(
                                                   (System_String_o *)StringLiteral_26621/*"{0}（＋{1}）"*/,
                                                   v15,
                                                   v16,
                                                   0);
        if ( buddyPointLabel )
        {
          UILabel__set_text(buddyPointLabel, (System_String_o *)gameObject, 0);
          gameObject = (UnityEngine_GameObject_o *)this->fields.buddyPointLabel;
          if ( gameObject )
          {
            UILabel__SetCondensedScale((UILabel_o *)gameObject, this->fields.pointLabelMaxWidth, 0, 0);
            beforeBuddyRank = this->fields.beforeBuddyRank;
            v17 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &beforeBuddyRank);
            v18 = System_String__Format((System_String_o *)StringLiteral_2811/*"BATTLE_BUDDY_POINT_RANK_{0}"*/, v17, 0);
            buddyPointRankLabel = this->fields.buddyPointRankLabel;
            v21 = v18;
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v21, 0);
            if ( buddyPointRankLabel )
            {
              UILabel__set_text(buddyPointRankLabel, (System_String_o *)gameObject, 0);
              return;
            }
          }
        }
      }
    }
LABEL_17:
    sub_2213CDC(gameObject, v7);
  }
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}