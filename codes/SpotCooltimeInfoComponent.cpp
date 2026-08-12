void SpotCooltimeInfoComponent___ctor(SpotCooltimeInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SpotCooltimeInfoComponent__Awake(SpotCooltimeInfoComponent_o *this, const MethodInfo *method)
{
  ;
}


void SpotCooltimeInfoComponent__CheckSerializeFieldSetting(SpotCooltimeInfoComponent_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *SpotCooltimeInfoComponent__GetCooltimeText(
        SpotCooltimeInfoComponent_o *this,
        int32_t remainTime,
        const MethodInfo *method)
{
  unsigned int v4; // w20
  unsigned int v5; // w22
  unsigned int v6; // w21
  System_String_o *v7; // x19
  Il2CppObject *v8; // x20
  Il2CppObject *v9; // x21
  Il2CppObject *v10; // x0
  unsigned int v12; // [xsp+4h] [xbp-3Ch] BYREF
  unsigned int v13; // [xsp+8h] [xbp-38h] BYREF
  unsigned int v14; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_596ACE8 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_12800/*"SPOT_COOLTIME_REMAIN"*/);
    sub_2213A60(&StringLiteral_12798/*"SPOT_COOLTIME_NONE"*/);
    byte_596ACE8 = 1;
  }
  if ( remainTime <= 0 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&remainTime, method);
    return LocalizationManager__Get((System_String_o *)StringLiteral_12798/*"SPOT_COOLTIME_NONE"*/, 0);
  }
  else
  {
    v4 = remainTime / 0xE10u;
    v5 = remainTime % 0x3Cu;
    v6 = remainTime % 0xE10u / 0x3C;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&remainTime, method);
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_12800/*"SPOT_COOLTIME_REMAIN"*/, 0);
    v14 = v4;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v14);
    v13 = v6;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v13);
    v12 = v5;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v12);
    return System_String__Format_75697948(v7, v8, v9, v10, 0);
  }
}


System_String_o *SpotCooltimeInfoComponent__GetRewardCountLabel(
        SpotCooltimeInfoComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o **v4; // x10
  System_String_o **v5; // x11
  System_String_o **v6; // x20
  System_String_o *v7; // x20
  Il2CppObject *v8; // x21
  Il2CppObject *v9; // x0
  int64_t maxRewardNum; // [xsp+8h] [xbp-38h] BYREF
  int64_t receivedRewardNum; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_596ACED & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_12802/*"SPOT_COOLTIME_REWARD_COUNT"*/);
    sub_2213A60(&StringLiteral_12805/*"SPOT_COOLTIME_REWARD_COUNT_QP_MAX"*/);
    sub_2213A60(&StringLiteral_12804/*"SPOT_COOLTIME_REWARD_COUNT_QP"*/);
    sub_2213A60(&StringLiteral_12803/*"SPOT_COOLTIME_REWARD_COUNT_MAX"*/);
    byte_596ACED = 1;
  }
  if ( this->fields.isQpType )
  {
    v4 = (System_String_o **)&StringLiteral_12805/*"SPOT_COOLTIME_REWARD_COUNT_QP_MAX"*/;
    v5 = (System_String_o **)&StringLiteral_12804/*"SPOT_COOLTIME_REWARD_COUNT_QP"*/;
  }
  else
  {
    v4 = (System_String_o **)&StringLiteral_12803/*"SPOT_COOLTIME_REWARD_COUNT_MAX"*/;
    v5 = (System_String_o **)&StringLiteral_12802/*"SPOT_COOLTIME_REWARD_COUNT"*/;
  }
  if ( this->fields.remainTime <= 0 )
    v6 = v4;
  else
    v6 = v5;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  v7 = LocalizationManager__Get(*v6, 0);
  receivedRewardNum = this->fields.receivedRewardNum;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &receivedRewardNum);
  maxRewardNum = this->fields.maxRewardNum;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &maxRewardNum);
  return System_String__Format_75697880(v7, v8, v9, 0);
}


bool SpotCooltimeInfoComponent__IsMaxReward(SpotCooltimeInfoComponent_o *this, const MethodInfo *method)
{
  struct EventCooltimeRewardEntity_o *cooltimeRewardEntity; // x8

  cooltimeRewardEntity = this->fields.cooltimeRewardEntity;
  return cooltimeRewardEntity && this->fields.receivedRewardUnitNum >= cooltimeRewardEntity->fields.upperLimitGiftNum;
}


bool SpotCooltimeInfoComponent__IsReceivableRewardExists(SpotCooltimeInfoComponent_o *this, const MethodInfo *method)
{
  return this->fields.receivedRewardUnitNum > 0;
}


bool SpotCooltimeInfoComponent__IsServantTypeReward(SpotCooltimeInfoComponent_o *this, const MethodInfo *method)
{
  EventCooltimeRewardEntity_o *cooltimeRewardEntity; // x0
  GiftEntity_o *GiftEntity; // x0

  cooltimeRewardEntity = this->fields.cooltimeRewardEntity;
  return cooltimeRewardEntity
      && (GiftEntity = EventCooltimeRewardEntity__GetGiftEntity(cooltimeRewardEntity, 0)) != 0
      && GiftEntity__checkGiftType(GiftEntity, 1, 0);
}


void SpotCooltimeInfoComponent__OnDestroyObject(SpotCooltimeInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *targetSpot; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  struct SrcSpotBasePrefab_o *v7; // x8
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8

  if ( (byte_596ACEE & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596ACEE = 1;
  }
  targetSpot = (UnityEngine_Object_o *)this->fields.targetSpot;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = UnityEngine_Object__op_Inequality(targetSpot, 0, 0);
  if ( v5 )
  {
    v7 = this->fields.targetSpot;
    if ( !v7 || (mMapCtrl_SpotInfo = v7->fields.mMapCtrl_SpotInfo) == 0 )
      sub_2213CDC(v5, v6);
    *(_QWORD *)&mMapCtrl_SpotInfo->fields.dispType = 0x100000001LL;
  }
}


void SpotCooltimeInfoComponent__Setup(
        SpotCooltimeInfoComponent_o *this,
        UserEventCooltimeRewardEntity_o *userCooltimeRewardEntity,
        SrcSpotBasePrefab_o *targetSpot,
        const MethodInfo *method)
{
  struct EventCooltimeRewardEntity_o *EventCooltimeRewardEntity; // x0
  struct EventCooltimeRewardEntity_o **p_cooltimeRewardEntity; // x22
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  __int64 v27; // x1
  __int64 v28; // x2
  Il2CppObject *Master_object; // x0
  __int64 v30; // x1
  struct GiftEntity_o *DataById; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  const MethodInfo *v38; // x2
  struct EventCooltimeRewardEntity_o *cooltimeRewardEntity; // x8
  const MethodInfo *v40; // x2
  const MethodInfo *v41; // x1

  if ( (byte_596ACE9 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_GiftMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_596ACE9 = 1;
  }
  if ( userCooltimeRewardEntity )
  {
    EventCooltimeRewardEntity = UserEventCooltimeRewardEntity__GetEventCooltimeRewardEntity(userCooltimeRewardEntity, 0);
    this->fields.cooltimeRewardEntity = EventCooltimeRewardEntity;
    p_cooltimeRewardEntity = &this->fields.cooltimeRewardEntity;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.cooltimeRewardEntity,
      (int32_t)EventCooltimeRewardEntity,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    if ( this->fields.cooltimeRewardEntity )
    {
      this->fields.userCooltimeRewardEntity = userCooltimeRewardEntity;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.userCooltimeRewardEntity,
        (int32_t)userCooltimeRewardEntity,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
      this->fields.targetSpot = targetSpot;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.targetSpot,
        (int32_t)targetSpot,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v27, v28);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GiftMaster___);
      if ( !*p_cooltimeRewardEntity
        || !Master_object
        || (DataById = GiftMaster__getDataById(
                         (GiftMaster_o *)Master_object,
                         (*p_cooltimeRewardEntity)->fields.giftId,
                         0),
            this->fields.giftEntity = DataById,
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&this->fields.giftEntity,
              (int32_t)DataById,
              v32,
              v33,
              v34,
              v35,
              v36,
              v37),
            (cooltimeRewardEntity = this->fields.cooltimeRewardEntity) == 0) )
      {
        sub_2213CDC(Master_object, v30);
      }
      SpotCooltimeInfoComponent__SetupBaseUI(this, cooltimeRewardEntity->fields.eventId, v38);
      SpotCooltimeInfoComponent__SetupRewardInfo(this, this->fields.giftEntity, v40);
      SpotCooltimeInfoComponent__UpdateDisp(this, v41);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void SpotCooltimeInfoComponent__SetupBaseUI(
        SpotCooltimeInfoComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  UISprite_o *rewardItemInfoRoot; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  struct UISprite_array *gaugeLinesSprite; // x21
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v11; // x24
  UISprite_o *v12; // x20

  if ( (byte_596ACEA & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&StringLiteral_24860/*"spot_info_gauge_base"*/);
    sub_2213A60(&StringLiteral_24859/*"spot_info_gauge"*/);
    sub_2213A60(&StringLiteral_24864/*"spot_info_window"*/);
    byte_596ACEA = 1;
  }
  rewardItemInfoRoot = this->fields.rewardItemInfoRoot;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, *(_QWORD *)&eventId, method);
  AtlasManager__SetEventUI_47569484(eventId, rewardItemInfoRoot, (System_String_o *)StringLiteral_24864/*"spot_info_window"*/, 0);
  AtlasManager__SetEventUI_47569484(eventId, this->fields.rewardQpInfoRoot, (System_String_o *)StringLiteral_24864/*"spot_info_window"*/, 0);
  AtlasManager__SetEventUI_47569484(eventId, this->fields.gaugeBaseSprite, (System_String_o *)StringLiteral_24860/*"spot_info_gauge_base"*/, 0);
  v6 = AtlasManager__SetEventUI_47569484(eventId, this->fields.gaugeSprite, (System_String_o *)StringLiteral_24859/*"spot_info_gauge"*/, 0);
  gaugeLinesSprite = this->fields.gaugeLinesSprite;
  if ( !gaugeLinesSprite )
    sub_2213CDC(v6, v7);
  max_length = gaugeLinesSprite->max_length;
  if ( (int)max_length >= 1 )
  {
    v11 = 0;
    do
    {
      if ( v11 >= (unsigned int)max_length )
        sub_2213CE4(v6);
      v12 = gaugeLinesSprite->m_Items[v11];
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v7, v8);
      v6 = AtlasManager__SetEventUI_47569484(eventId, v12, (System_String_o *)StringLiteral_24860/*"spot_info_gauge_base"*/, 0);
      LODWORD(max_length) = gaugeLinesSprite->max_length;
      ++v11;
    }
    while ( (__int64)v11 < (int)max_length );
  }
}


void SpotCooltimeInfoComponent__SetupRewardInfo(
        SpotCooltimeInfoComponent_o *this,
        GiftEntity_o *giftEntity,
        const MethodInfo *method)
{
  int32_t type; // w8
  bool v6; // w21
  int v7; // w22
  UISprite_o *v8; // x21
  int v9; // w8
  struct UISprite_o *rewardItemIcon; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  int32_t IconImageId; // w22
  UISprite_o *v14; // x0
  int32_t v15; // w1
  int v16; // w22
  UISprite_o *rewardServantItemIcon; // x21
  int v18; // w8
  UISprite_o *v19; // x0
  int32_t objectId; // w21
  struct UISprite_o *v21; // x22
  UnityEngine_Component_o *isQp; // x0
  __int64 v23; // x1
  UnityEngine_GameObject_o *gaugeLineGridRoot; // x8

  if ( (byte_596ACEC & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    byte_596ACEC = 1;
  }
  if ( giftEntity )
  {
    type = giftEntity->fields.type;
    v6 = 0;
    if ( type <= 5 )
    {
      if ( type != 1 )
      {
        if ( type != 2 )
          goto LABEL_34;
        rewardItemIcon = this->fields.rewardItemIcon;
        IconImageId = GiftEntity__getIconImageId(giftEntity, 0);
        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v11, v12);
        v14 = rewardItemIcon;
        v15 = IconImageId;
        goto LABEL_32;
      }
    }
    else if ( (unsigned int)(type - 6) >= 2 )
    {
      if ( type == 8 )
      {
        objectId = giftEntity->fields.objectId;
        if ( objectId < 1 )
        {
LABEL_33:
          v6 = 0;
LABEL_34:
          isQp = (UnityEngine_Component_o *)GiftEntity__isQp(giftEntity, 0);
          gaugeLineGridRoot = this->fields.gaugeLineGridRoot;
          this->fields.isQpType = (unsigned __int8)isQp & 1;
          if ( !gaugeLineGridRoot )
            goto LABEL_43;
          UnityEngine_GameObject__SetActive(gaugeLineGridRoot, ((unsigned __int8)isQp & 1) == 0, 0);
          isQp = (UnityEngine_Component_o *)this->fields.rewardItemInfoRoot;
          if ( !isQp )
            goto LABEL_43;
          isQp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(isQp, 0);
          if ( !isQp )
            goto LABEL_43;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)isQp, !this->fields.isQpType, 0);
          isQp = (UnityEngine_Component_o *)this->fields.rewardQpInfoRoot;
          if ( !isQp
            || (isQp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(isQp, 0)) == 0
            || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)isQp, this->fields.isQpType, 0),
                (isQp = (UnityEngine_Component_o *)this->fields.rewardItemIcon) == 0)
            || (isQp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(isQp, 0)) == 0
            || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)isQp, !v6, 0),
                (isQp = (UnityEngine_Component_o *)this->fields.rewardServantItemRoot) == 0) )
          {
LABEL_43:
            sub_2213CDC(isQp, v23);
          }
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)isQp, v6, 0);
          return;
        }
        v21 = this->fields.rewardItemIcon;
        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, giftEntity, method);
        v14 = v21;
        v15 = objectId;
      }
      else
      {
        if ( type != 11 )
          goto LABEL_34;
        v7 = giftEntity->fields.objectId;
        v8 = this->fields.rewardItemIcon;
        v9 = *(&AtlasManager_TypeInfo->_2.cctor_finished + 1);
        if ( v7 >= 1 )
        {
          if ( !v9 )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, giftEntity, method);
          AtlasManager__SetCommandCodeImage(v8, v7, 0);
          goto LABEL_33;
        }
        if ( !v9 )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, giftEntity, method);
        v14 = v8;
        v15 = 8014;
      }
LABEL_32:
      AtlasManager__SetItem(v14, v15, 0);
      goto LABEL_33;
    }
    v16 = giftEntity->fields.objectId;
    rewardServantItemIcon = this->fields.rewardServantItemIcon;
    v18 = *(&AtlasManager_TypeInfo->_2.cctor_finished + 1);
    if ( v16 < 1 )
    {
      if ( !v18 )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, giftEntity, method);
      AtlasManager__SetItem(rewardServantItemIcon, 4, 0);
      v6 = 1;
    }
    else
    {
      if ( !v18 )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, giftEntity, method);
      v19 = rewardServantItemIcon;
      v6 = 1;
      AtlasManager__SetFaceImage(v19, v16, 0, 1, 0, 0, 0);
    }
    goto LABEL_34;
  }
}


// attributes: thunk
void SpotCooltimeInfoComponent__Update(SpotCooltimeInfoComponent_o *this, const MethodInfo *method)
{
  SpotCooltimeInfoComponent__UpdateDisp(this, method);
}


void SpotCooltimeInfoComponent__UpdateDisp(SpotCooltimeInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  SpotCooltimeInfoComponent_o *v3; // x19
  struct UserEventCooltimeRewardEntity_o *userCooltimeRewardEntity; // x8
  struct SrcSpotBasePrefab_o *targetSpot; // x9
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x9
  NetworkManager_c *v7; // x0
  System_DateTime_o v8; // x0
  int64_t v9; // x9
  __int64 v10; // x8
  int cooltimeLb_high; // w9
  bool GiftsEverySecond; // w8
  int64_t v13; // x8
  __int64 RewardUnitTime; // x9
  int64_t rewardServantItemRoot_low; // x9
  struct GiftEntity_o *giftEntity; // x10
  __int64 num; // x10
  UILabel_o *cooltimeLb; // x20
  SpotCooltimeInfoComponent_o *v19; // x0
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x1
  UILabel_o *v22; // x20
  struct EventCooltimeRewardEntity_o *cooltimeRewardEntity; // x8
  __int64 cooltime; // x8
  __int64 passTime; // x9

  v3 = this;
  if ( (byte_596ACE7 & 1) == 0 )
  {
    this = (SpotCooltimeInfoComponent_o *)sub_2213A60(&NetworkManager_TypeInfo);
    byte_596ACE7 = 1;
  }
  userCooltimeRewardEntity = v3->fields.userCooltimeRewardEntity;
  if ( !userCooltimeRewardEntity || !v3->fields.cooltimeRewardEntity )
    goto LABEL_16;
  targetSpot = v3->fields.targetSpot;
  if ( !targetSpot )
    goto LABEL_38;
  mMapCtrl_SpotInfo = targetSpot->fields.mMapCtrl_SpotInfo;
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_38;
  if ( !mMapCtrl_SpotInfo->fields.dispType )
  {
LABEL_16:
    this = (SpotCooltimeInfoComponent_o *)v3->fields.cooltimeObj;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      return;
    }
    goto LABEL_38;
  }
  v7 = NetworkManager_TypeInfo;
  v3->fields.collectedAt = userCooltimeRewardEntity->fields.collectedAt;
  if ( !*(&v7->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v7, method, v2);
  v8.fields._dateData = NetworkManager__getDateTime(0).fields._dateData;
  v9 = NetworkManager__getTime_48346468(v8, 0) - 1;
  this = (SpotCooltimeInfoComponent_o *)v3->fields.cooltimeRewardEntity;
  v10 = (v9 - v3->fields.collectedAt) & ~((v9 - v3->fields.collectedAt) >> 63);
  v3->fields.currentTime = v9;
  v3->fields.passTime = v10;
  if ( !this )
    goto LABEL_38;
  cooltimeLb_high = HIDWORD(this->fields.cooltimeLb);
  v3->fields.remainTime = cooltimeLb_high - (int)v10;
  if ( cooltimeLb_high >= 1 && SLODWORD(this->fields.rewardServantItemRoot) >= 1 )
  {
    GiftsEverySecond = EventCooltimeRewardEntity__DoesMakeGiftsEverySecond((EventCooltimeRewardEntity_o *)this, 0);
    this = (SpotCooltimeInfoComponent_o *)v3->fields.cooltimeRewardEntity;
    if ( GiftsEverySecond )
    {
      if ( !this )
        goto LABEL_38;
      v13 = v3->fields.passTime * SLODWORD(this->fields.rewardServantItemRoot) / SHIDWORD(this->fields.cooltimeLb);
      v3->fields.receivedRewardUnitNum = v13;
    }
    else
    {
      if ( !this )
        goto LABEL_38;
      RewardUnitTime = EventCooltimeRewardEntity__GetRewardUnitTime((EventCooltimeRewardEntity_o *)this, 0);
      this = (SpotCooltimeInfoComponent_o *)v3->fields.cooltimeRewardEntity;
      v13 = v3->fields.passTime / RewardUnitTime;
      v3->fields.rewardUnitTime = RewardUnitTime;
      v3->fields.receivedRewardUnitNum = v13;
      if ( !this )
        goto LABEL_38;
    }
    rewardServantItemRoot_low = SLODWORD(this->fields.rewardServantItemRoot);
    if ( v13 > rewardServantItemRoot_low )
    {
      v13 = SLODWORD(this->fields.rewardServantItemRoot);
      v3->fields.receivedRewardUnitNum = rewardServantItemRoot_low;
    }
    giftEntity = v3->fields.giftEntity;
    if ( giftEntity )
    {
      num = giftEntity->fields.num;
      this = (SpotCooltimeInfoComponent_o *)v3->fields.cooltimeObj;
      v3->fields.receivedRewardNum = v13 * num;
      v3->fields.maxRewardNum = (int)num * (int)rewardServantItemRoot_low;
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        cooltimeLb = v3->fields.cooltimeLb;
        this = (SpotCooltimeInfoComponent_o *)SpotCooltimeInfoComponent__GetCooltimeText(
                                                v19,
                                                v3->fields.remainTime,
                                                v20);
        if ( cooltimeLb )
        {
          UILabel__set_text(cooltimeLb, (System_String_o *)this, 0);
          v22 = v3->fields.isQpType ? v3->fields.rewardQpCountInfo : v3->fields.rewardItemCountInfo;
          this = (SpotCooltimeInfoComponent_o *)SpotCooltimeInfoComponent__GetRewardCountLabel(v3, v21);
          if ( v22 )
          {
            UILabel__set_text(v22, (System_String_o *)this, 0);
            cooltimeRewardEntity = v3->fields.cooltimeRewardEntity;
            if ( cooltimeRewardEntity )
            {
              if ( cooltimeRewardEntity->fields.upperLimitGiftNum >= 1 )
              {
                this = (SpotCooltimeInfoComponent_o *)v3->fields.gaugeSprite;
                if ( !this )
                  goto LABEL_38;
                cooltime = cooltimeRewardEntity->fields.cooltime;
                passTime = v3->fields.passTime;
                if ( passTime >= cooltime )
                  passTime = cooltime;
                UIBasicSprite__set_fillAmount((UIBasicSprite_o *)this, (float)passTime / (float)(int)cooltime, 0);
              }
              this = (SpotCooltimeInfoComponent_o *)v3->fields.targetSpot;
              if ( this )
              {
                SrcSpotBasePrefab__UpdateDisp((SrcSpotBasePrefab_o *)this, 1, 0);
                return;
              }
            }
          }
        }
      }
    }
LABEL_38:
    sub_2213CDC(this, method);
  }
}


void SpotCooltimeInfoComponent__UpdateUserData(SpotCooltimeInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UserEventCooltimeRewardEntity_o **p_userCooltimeRewardEntity; // x20
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  UserEventCooltimeRewardEntity_o *CurrentLevelEntity; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct EventCooltimeRewardEntity_o *EventCooltimeRewardEntity; // x0
  struct EventCooltimeRewardEntity_o **p_cooltimeRewardEntity; // x20
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x1
  __int64 v23; // x2
  struct GiftEntity_o *DataById; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  const MethodInfo *v31; // x1

  if ( (byte_596ACEB & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_GiftMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_596ACEB = 1;
  }
  p_userCooltimeRewardEntity = &this->fields.userCooltimeRewardEntity;
  if ( this->fields.userCooltimeRewardEntity )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
    if ( !*p_userCooltimeRewardEntity || !Master_object )
      goto LABEL_16;
    CurrentLevelEntity = UserEventCooltimeRewardMaster__GetCurrentLevelEntity(
                           (UserEventCooltimeRewardMaster_o *)Master_object,
                           (*p_userCooltimeRewardEntity)->fields.eventId,
                           (*p_userCooltimeRewardEntity)->fields.spotId,
                           0);
    *p_userCooltimeRewardEntity = CurrentLevelEntity;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.userCooltimeRewardEntity,
      (int32_t)CurrentLevelEntity,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    if ( *p_userCooltimeRewardEntity )
    {
      EventCooltimeRewardEntity = UserEventCooltimeRewardEntity__GetEventCooltimeRewardEntity(
                                    *p_userCooltimeRewardEntity,
                                    0);
      this->fields.cooltimeRewardEntity = EventCooltimeRewardEntity;
      p_cooltimeRewardEntity = &this->fields.cooltimeRewardEntity;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.cooltimeRewardEntity,
        (int32_t)EventCooltimeRewardEntity,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
      if ( this->fields.cooltimeRewardEntity )
      {
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v22, v23);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GiftMaster___);
        if ( *p_cooltimeRewardEntity && Master_object )
        {
          DataById = GiftMaster__getDataById((GiftMaster_o *)Master_object, (*p_cooltimeRewardEntity)->fields.giftId, 0);
          this->fields.giftEntity = DataById;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.giftEntity,
            (int32_t)DataById,
            v25,
            v26,
            v27,
            v28,
            v29,
            v30);
          SpotCooltimeInfoComponent__UpdateDisp(this, v31);
          return;
        }
LABEL_16:
        sub_2213CDC(Master_object, v6);
      }
    }
  }
}


bool SpotCooltimeInfoComponent__get_IsQpType(SpotCooltimeInfoComponent_o *this, const MethodInfo *method)
{
  return this->fields.isQpType;
}