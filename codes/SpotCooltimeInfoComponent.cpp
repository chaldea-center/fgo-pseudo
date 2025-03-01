void __fastcall SpotCooltimeInfoComponent___ctor(SpotCooltimeInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SpotCooltimeInfoComponent__Awake(SpotCooltimeInfoComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall SpotCooltimeInfoComponent__CheckSerializeFieldSetting(
        SpotCooltimeInfoComponent_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SpotCooltimeInfoComponent__GetCooltimeText(
        SpotCooltimeInfoComponent_o *this,
        int32_t remainTime,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  unsigned int v7; // w24
  unsigned int v8; // w22
  unsigned int v9; // w21
  System_String_o *v10; // x19
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  Il2CppObject *v14; // x20
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *v18; // x21
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  Il2CppObject *v22; // x0
  unsigned int v24; // [xsp+Ch] [xbp-44h] BYREF
  unsigned int v25; // [xsp+18h] [xbp-38h] BYREF
  unsigned int v26; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4BF8660 & 1) == 0 )
  {
    sub_1C2E12C(&int_TypeInfo, *(_QWORD *)&remainTime);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v4);
    sub_1C2E12C(&StringLiteral_12445/*"SPOT_COOLTIME_REMAIN"*/, v5);
    sub_1C2E12C(&StringLiteral_12443/*"SPOT_COOLTIME_NONE"*/, v6);
    byte_4BF8660 = 1;
  }
  if ( remainTime <= 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    return LocalizationManager__Get((System_String_o *)StringLiteral_12443/*"SPOT_COOLTIME_NONE"*/, 0LL);
  }
  else
  {
    v7 = remainTime / 0xE10u;
    v8 = remainTime % 0x3Cu;
    v9 = remainTime % 0xE10u / 0x3C;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_12445/*"SPOT_COOLTIME_REMAIN"*/, 0LL);
    v26 = v7;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26, v11, v12, v13);
    v25 = v9;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25, v15, v16, v17);
    v24 = v8;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24, v19, v20, v21);
    return System_String__Format_63250024(v10, v14, v18, v22, 0LL);
  }
}


System_String_o *__fastcall SpotCooltimeInfoComponent__GetRewardCountLabel(
        SpotCooltimeInfoComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  _BOOL4 isQpType; // w20
  int64_t remainTime; // x26
  System_String_o **v10; // x8
  System_String_o **v11; // x9
  System_String_o *v12; // x20
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  Il2CppObject *v16; // x21
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  Il2CppObject *v20; // x0
  int64_t maxRewardNum; // [xsp+8h] [xbp-58h] BYREF
  int64_t receivedRewardNum; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4BF8665 & 1) == 0 )
  {
    sub_1C2E12C(&long_TypeInfo, method);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v3);
    sub_1C2E12C(&StringLiteral_12447/*"SPOT_COOLTIME_REWARD_COUNT"*/, v4);
    sub_1C2E12C(&StringLiteral_12450/*"SPOT_COOLTIME_REWARD_COUNT_QP_MAX"*/, v5);
    sub_1C2E12C(&StringLiteral_12449/*"SPOT_COOLTIME_REWARD_COUNT_QP"*/, v6);
    sub_1C2E12C(&StringLiteral_12448/*"SPOT_COOLTIME_REWARD_COUNT_MAX"*/, v7);
    byte_4BF8665 = 1;
  }
  isQpType = this->fields.isQpType;
  remainTime = this->fields.remainTime;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( remainTime <= 0 )
    v10 = (System_String_o **)&StringLiteral_12450/*"SPOT_COOLTIME_REWARD_COUNT_QP_MAX"*/;
  else
    v10 = (System_String_o **)&StringLiteral_12449/*"SPOT_COOLTIME_REWARD_COUNT_QP"*/;
  if ( remainTime <= 0 )
    v11 = (System_String_o **)&StringLiteral_12448/*"SPOT_COOLTIME_REWARD_COUNT_MAX"*/;
  else
    v11 = (System_String_o **)&StringLiteral_12447/*"SPOT_COOLTIME_REWARD_COUNT"*/;
  if ( !isQpType )
    v10 = v11;
  v12 = LocalizationManager__Get(*v10, 0LL);
  receivedRewardNum = this->fields.receivedRewardNum;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &receivedRewardNum, v13, v14, v15);
  maxRewardNum = this->fields.maxRewardNum;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &maxRewardNum, v17, v18, v19);
  return System_String__Format_63249956(v12, v16, v20, 0LL);
}


bool __fastcall SpotCooltimeInfoComponent__IsMaxReward(SpotCooltimeInfoComponent_o *this, const MethodInfo *method)
{
  struct EventCooltimeRewardEntity_o *cooltimeRewardEntity; // x8

  cooltimeRewardEntity = this->fields.cooltimeRewardEntity;
  return cooltimeRewardEntity && this->fields.receivedRewardUnitNum >= cooltimeRewardEntity->fields.upperLimitGiftNum;
}


bool __fastcall SpotCooltimeInfoComponent__IsReceivableRewardExists(
        SpotCooltimeInfoComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.receivedRewardUnitNum > 0;
}


bool __fastcall SpotCooltimeInfoComponent__IsServantTypeReward(
        SpotCooltimeInfoComponent_o *this,
        const MethodInfo *method)
{
  EventCooltimeRewardEntity_o *cooltimeRewardEntity; // x0
  GiftEntity_o *GiftEntity; // x0

  cooltimeRewardEntity = this->fields.cooltimeRewardEntity;
  return cooltimeRewardEntity
      && (GiftEntity = EventCooltimeRewardEntity__GetGiftEntity(cooltimeRewardEntity, 0LL)) != 0LL
      && GiftEntity__checkGiftType(GiftEntity, 1, 0LL);
}


void __fastcall SpotCooltimeInfoComponent__OnDestroyObject(SpotCooltimeInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *targetSpot; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct SrcSpotBasePrefab_o *v6; // x8
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8

  if ( (byte_4BF8666 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4BF8666 = 1;
  }
  targetSpot = (UnityEngine_Object_o *)this->fields.targetSpot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(targetSpot, 0LL, 0LL);
  if ( v4 )
  {
    v6 = this->fields.targetSpot;
    if ( !v6 || (mMapCtrl_SpotInfo = v6->fields.mMapCtrl_SpotInfo) == 0LL )
      sub_1C2E388(v4, v5);
    *(_QWORD *)&mMapCtrl_SpotInfo->fields.dispType = 0x100000001LL;
  }
}


void __fastcall SpotCooltimeInfoComponent__Setup(
        SpotCooltimeInfoComponent_o *this,
        UserEventCooltimeRewardEntity_o *userCooltimeRewardEntity,
        SrcSpotBasePrefab_o *targetSpot,
        const MethodInfo *method)
{
  __int64 v7; // x1
  struct EventCooltimeRewardEntity_o **p_cooltimeRewardEntity; // x22
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  struct EventCooltimeRewardEntity_o *cooltimeRewardEntity; // x8
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x1

  if ( (byte_4BF8661 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMaster_GiftMaster___, userCooltimeRewardEntity);
    sub_1C2E12C(&DataManager_TypeInfo, v7);
    byte_4BF8661 = 1;
  }
  if ( userCooltimeRewardEntity )
  {
    this->fields.cooltimeRewardEntity = UserEventCooltimeRewardEntity__GetEventCooltimeRewardEntity(
                                          userCooltimeRewardEntity,
                                          0LL);
    p_cooltimeRewardEntity = &this->fields.cooltimeRewardEntity;
    sub_1C2E0D0(&this->fields.cooltimeRewardEntity);
    if ( this->fields.cooltimeRewardEntity )
    {
      this->fields.userCooltimeRewardEntity = userCooltimeRewardEntity;
      sub_1C2E0D0(&this->fields.userCooltimeRewardEntity);
      this->fields.targetSpot = targetSpot;
      sub_1C2E0D0(&this->fields.targetSpot);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_GiftMaster___);
      if ( !*p_cooltimeRewardEntity
        || !Master_object
        || (this->fields.giftEntity = GiftMaster__getDataById(
                                        (GiftMaster_o *)Master_object,
                                        (*p_cooltimeRewardEntity)->fields.giftId,
                                        0LL),
            Master_object = (Il2CppObject *)sub_1C2E0D0(&this->fields.giftEntity),
            (cooltimeRewardEntity = this->fields.cooltimeRewardEntity) == 0LL) )
      {
        sub_1C2E388(Master_object, v10);
      }
      SpotCooltimeInfoComponent__SetupBaseUI(this, cooltimeRewardEntity->fields.eventId, v11);
      SpotCooltimeInfoComponent__SetupRewardInfo(this, this->fields.giftEntity, v13);
      SpotCooltimeInfoComponent__UpdateDisp(this, v14);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SpotCooltimeInfoComponent__SetupBaseUI(
        SpotCooltimeInfoComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UISprite_o *rewardItemInfoRoot; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x1
  struct UISprite_array *gaugeLinesSprite; // x21
  __int64 v12; // x8
  unsigned __int64 v13; // x24
  UISprite_o *v14; // x20

  if ( (byte_4BF8662 & 1) == 0 )
  {
    sub_1C2E12C(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    sub_1C2E12C(&StringLiteral_23883/*"spot_info_gauge_base"*/, v5);
    sub_1C2E12C(&StringLiteral_23882/*"spot_info_gauge"*/, v6);
    sub_1C2E12C(&StringLiteral_23887/*"spot_info_window"*/, v7);
    byte_4BF8662 = 1;
  }
  rewardItemInfoRoot = this->fields.rewardItemInfoRoot;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_39173640(eventId, rewardItemInfoRoot, (System_String_o *)StringLiteral_23887/*"spot_info_window"*/, 0LL);
  AtlasManager__SetEventUI_39173640(eventId, this->fields.rewardQpInfoRoot, (System_String_o *)StringLiteral_23887/*"spot_info_window"*/, 0LL);
  AtlasManager__SetEventUI_39173640(eventId, this->fields.gaugeBaseSprite, (System_String_o *)StringLiteral_23883/*"spot_info_gauge_base"*/, 0LL);
  v9 = AtlasManager__SetEventUI_39173640(eventId, this->fields.gaugeSprite, (System_String_o *)StringLiteral_23882/*"spot_info_gauge"*/, 0LL);
  gaugeLinesSprite = this->fields.gaugeLinesSprite;
  if ( !gaugeLinesSprite )
    sub_1C2E388(v9, v10);
  v12 = *(_QWORD *)&gaugeLinesSprite->max_length;
  if ( (int)v12 >= 1 )
  {
    v13 = 0LL;
    do
    {
      if ( v13 >= (unsigned int)v12 )
        sub_1C2E390(v9, v10);
      v14 = gaugeLinesSprite->m_Items[v13];
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      v9 = AtlasManager__SetEventUI_39173640(eventId, v14, (System_String_o *)StringLiteral_23883/*"spot_info_gauge_base"*/, 0LL);
      LODWORD(v12) = gaugeLinesSprite->max_length;
      ++v13;
    }
    while ( (__int64)v13 < (int)v12 );
  }
}


void __fastcall SpotCooltimeInfoComponent__SetupRewardInfo(
        SpotCooltimeInfoComponent_o *this,
        GiftEntity_o *giftEntity,
        const MethodInfo *method)
{
  bool v5; // w21
  int objectId; // w23
  UISprite_o *rewardServantItemIcon; // x22
  uint32_t cctor_finished; // w8
  struct UISprite_o *rewardItemIcon; // x21
  int32_t IconImageId; // w22
  UISprite_o *v11; // x0
  int32_t v12; // w1
  int32_t v13; // w21
  struct UISprite_o *v14; // x22
  int v15; // w22
  UISprite_o *v16; // x21
  uint32_t v17; // w8
  UnityEngine_Component_o *isQp; // x0
  __int64 v19; // x1
  UnityEngine_GameObject_o *gaugeLineGridRoot; // x8

  if ( (byte_4BF8664 & 1) == 0 )
  {
    sub_1C2E12C(&AtlasManager_TypeInfo, giftEntity);
    byte_4BF8664 = 1;
  }
  if ( giftEntity )
  {
    v5 = 0;
    switch ( giftEntity->fields.type )
    {
      case 1:
      case 6:
      case 7:
        objectId = giftEntity->fields.objectId;
        rewardServantItemIcon = this->fields.rewardServantItemIcon;
        cctor_finished = AtlasManager_TypeInfo->_2.cctor_finished;
        if ( objectId < 1 )
        {
          if ( !cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetItem(rewardServantItemIcon, 4, 0LL);
          v5 = 1;
        }
        else
        {
          if ( !cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          v5 = 1;
          AtlasManager__SetFaceImage(rewardServantItemIcon, objectId, 0, 1, 0LL, 0LL);
        }
        goto LABEL_29;
      case 2:
        rewardItemIcon = this->fields.rewardItemIcon;
        IconImageId = GiftEntity__getIconImageId(giftEntity, 0LL);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        v11 = rewardItemIcon;
        v12 = IconImageId;
        goto LABEL_27;
      case 8:
        v13 = giftEntity->fields.objectId;
        if ( v13 < 1 )
          goto LABEL_28;
        v14 = this->fields.rewardItemIcon;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        v11 = v14;
        v12 = v13;
        goto LABEL_27;
      case 0xB:
        v15 = giftEntity->fields.objectId;
        v16 = this->fields.rewardItemIcon;
        v17 = AtlasManager_TypeInfo->_2.cctor_finished;
        if ( v15 < 1 )
        {
          if ( !v17 )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          v12 = 8014;
          v11 = v16;
LABEL_27:
          AtlasManager__SetItem(v11, v12, 0LL);
        }
        else
        {
          if ( !v17 )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetCommandCodeImage(v16, v15, 0LL);
        }
LABEL_28:
        v5 = 0;
LABEL_29:
        isQp = (UnityEngine_Component_o *)GiftEntity__isQp(giftEntity, 0LL);
        gaugeLineGridRoot = this->fields.gaugeLineGridRoot;
        this->fields.isQpType = (unsigned __int8)isQp & 1;
        if ( !gaugeLineGridRoot )
          goto LABEL_38;
        UnityEngine_GameObject__SetActive(gaugeLineGridRoot, ((unsigned __int8)isQp & 1) == 0, 0LL);
        isQp = (UnityEngine_Component_o *)this->fields.rewardItemInfoRoot;
        if ( !isQp )
          goto LABEL_38;
        isQp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(isQp, 0LL);
        if ( !isQp )
          goto LABEL_38;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)isQp, !this->fields.isQpType, 0LL);
        isQp = (UnityEngine_Component_o *)this->fields.rewardQpInfoRoot;
        if ( !isQp
          || (isQp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(isQp, 0LL)) == 0LL
          || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)isQp, this->fields.isQpType, 0LL),
              (isQp = (UnityEngine_Component_o *)this->fields.rewardItemIcon) == 0LL)
          || (isQp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(isQp, 0LL)) == 0LL
          || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)isQp, !v5, 0LL),
              (isQp = (UnityEngine_Component_o *)this->fields.rewardServantItemRoot) == 0LL) )
        {
LABEL_38:
          sub_1C2E388(isQp, v19);
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)isQp, v5, 0LL);
        break;
      default:
        goto LABEL_29;
    }
  }
}


// attributes: thunk
void __fastcall SpotCooltimeInfoComponent__Update(SpotCooltimeInfoComponent_o *this, const MethodInfo *method)
{
  SpotCooltimeInfoComponent__UpdateDisp(this, method);
}


void __fastcall SpotCooltimeInfoComponent__UpdateDisp(SpotCooltimeInfoComponent_o *this, const MethodInfo *method)
{
  SpotCooltimeInfoComponent_o *v2; // x19
  struct UserEventCooltimeRewardEntity_o *userCooltimeRewardEntity; // x8
  struct SrcSpotBasePrefab_o *targetSpot; // x9
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x9
  int64_t v6; // x9
  __int64 v7; // x8
  int cooltimeLb_high; // w9
  struct EventCooltimeRewardEntity_o *cooltimeRewardEntity; // x8
  int64_t v10; // x9
  int64_t *p_receivedRewardUnitNum; // x10
  int64_t upperLimitGiftNum; // x8
  struct GiftEntity_o *giftEntity; // x10
  __int64 num; // x10
  UILabel_o *cooltimeLb; // x20
  SpotCooltimeInfoComponent_o *v16; // x0
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x1
  UILabel_o *v19; // x20
  struct EventCooltimeRewardEntity_o *v20; // x8
  __int64 passTime; // x9
  __int64 cooltime; // x8
  System_DateTime_o v23; // 0:x0.8

  v2 = this;
  if ( (byte_4BF865F & 1) == 0 )
  {
    this = (SpotCooltimeInfoComponent_o *)sub_1C2E12C(&NetworkManager_TypeInfo, method);
    byte_4BF865F = 1;
  }
  userCooltimeRewardEntity = v2->fields.userCooltimeRewardEntity;
  if ( !userCooltimeRewardEntity || !v2->fields.cooltimeRewardEntity )
    goto LABEL_16;
  targetSpot = v2->fields.targetSpot;
  if ( !targetSpot )
    goto LABEL_37;
  mMapCtrl_SpotInfo = targetSpot->fields.mMapCtrl_SpotInfo;
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_37;
  if ( !mMapCtrl_SpotInfo->fields.dispType )
  {
LABEL_16:
    this = (SpotCooltimeInfoComponent_o *)v2->fields.cooltimeObj;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      return;
    }
    goto LABEL_37;
  }
  v2->fields.collectedAt = userCooltimeRewardEntity->fields.collectedAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v23.fields._dateData = NetworkManager__getDateTime(0LL).fields._dateData;
  v6 = NetworkManager__getTime_39876888(v23, 0LL) - 1;
  this = (SpotCooltimeInfoComponent_o *)v2->fields.cooltimeRewardEntity;
  v7 = (v6 - v2->fields.collectedAt) & ~((v6 - v2->fields.collectedAt) >> 63);
  v2->fields.currentTime = v6;
  v2->fields.passTime = v7;
  if ( !this )
    goto LABEL_37;
  cooltimeLb_high = HIDWORD(this->fields.cooltimeLb);
  v2->fields.remainTime = cooltimeLb_high - (int)v7;
  if ( cooltimeLb_high >= 1 && SLODWORD(this->fields.rewardServantItemRoot) >= 1 )
  {
    this = (SpotCooltimeInfoComponent_o *)EventCooltimeRewardEntity__DoesMakeGiftsEverySecond(
                                            (EventCooltimeRewardEntity_o *)this,
                                            0LL);
    cooltimeRewardEntity = v2->fields.cooltimeRewardEntity;
    if ( !cooltimeRewardEntity )
      goto LABEL_37;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v10 = v2->fields.passTime * cooltimeRewardEntity->fields.upperLimitGiftNum / cooltimeRewardEntity->fields.cooltime;
      v2->fields.receivedRewardUnitNum = v10;
      p_receivedRewardUnitNum = &v2->fields.receivedRewardUnitNum;
    }
    else
    {
      this = (SpotCooltimeInfoComponent_o *)EventCooltimeRewardEntity__GetRewardUnitTime(
                                              v2->fields.cooltimeRewardEntity,
                                              0LL);
      v10 = v2->fields.passTime / (int)this;
      v2->fields.receivedRewardUnitNum = v10;
      p_receivedRewardUnitNum = &v2->fields.receivedRewardUnitNum;
      cooltimeRewardEntity = v2->fields.cooltimeRewardEntity;
      v2->fields.rewardUnitTime = (int)this;
      if ( !cooltimeRewardEntity )
        goto LABEL_37;
    }
    upperLimitGiftNum = cooltimeRewardEntity->fields.upperLimitGiftNum;
    if ( v10 > upperLimitGiftNum )
    {
      v10 = upperLimitGiftNum;
      *p_receivedRewardUnitNum = upperLimitGiftNum;
    }
    giftEntity = v2->fields.giftEntity;
    if ( giftEntity )
    {
      num = giftEntity->fields.num;
      this = (SpotCooltimeInfoComponent_o *)v2->fields.cooltimeObj;
      v2->fields.receivedRewardNum = v10 * num;
      v2->fields.maxRewardNum = (int)num * (int)upperLimitGiftNum;
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        cooltimeLb = v2->fields.cooltimeLb;
        this = (SpotCooltimeInfoComponent_o *)SpotCooltimeInfoComponent__GetCooltimeText(
                                                v16,
                                                v2->fields.remainTime,
                                                v17);
        if ( cooltimeLb )
        {
          UILabel__set_text(cooltimeLb, (System_String_o *)this, 0LL);
          v19 = v2->fields.isQpType ? v2->fields.rewardQpCountInfo : v2->fields.rewardItemCountInfo;
          this = (SpotCooltimeInfoComponent_o *)SpotCooltimeInfoComponent__GetRewardCountLabel(v2, v18);
          if ( v19 )
          {
            UILabel__set_text(v19, (System_String_o *)this, 0LL);
            v20 = v2->fields.cooltimeRewardEntity;
            if ( v20 )
            {
              if ( v20->fields.upperLimitGiftNum >= 1 )
              {
                this = (SpotCooltimeInfoComponent_o *)v2->fields.gaugeSprite;
                if ( !this )
                  goto LABEL_37;
                passTime = v2->fields.passTime;
                cooltime = v20->fields.cooltime;
                if ( passTime > cooltime )
                  passTime = cooltime;
                UIBasicSprite__set_fillAmount((UIBasicSprite_o *)this, (float)passTime / (float)(int)cooltime, 0LL);
              }
              this = (SpotCooltimeInfoComponent_o *)v2->fields.targetSpot;
              if ( this )
              {
                SrcSpotBasePrefab__UpdateDisp((SrcSpotBasePrefab_o *)this, 1, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_37:
    sub_1C2E388(this, method);
  }
}


void __fastcall SpotCooltimeInfoComponent__UpdateUserData(SpotCooltimeInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UserEventCooltimeRewardEntity_o **p_userCooltimeRewardEntity; // x20
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  struct EventCooltimeRewardEntity_o **p_cooltimeRewardEntity; // x20
  const MethodInfo *v9; // x1

  if ( (byte_4BF8663 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMaster_GiftMaster___, method);
    sub_1C2E12C(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___, v3);
    sub_1C2E12C(&DataManager_TypeInfo, v4);
    byte_4BF8663 = 1;
  }
  p_userCooltimeRewardEntity = &this->fields.userCooltimeRewardEntity;
  if ( this->fields.userCooltimeRewardEntity )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
    if ( !*p_userCooltimeRewardEntity || !Master_object )
      goto LABEL_16;
    *p_userCooltimeRewardEntity = UserEventCooltimeRewardMaster__GetCurrentLevelEntity(
                                    (UserEventCooltimeRewardMaster_o *)Master_object,
                                    (*p_userCooltimeRewardEntity)->fields.eventId,
                                    (*p_userCooltimeRewardEntity)->fields.spotId,
                                    0LL);
    sub_1C2E0D0(&this->fields.userCooltimeRewardEntity);
    if ( *p_userCooltimeRewardEntity )
    {
      this->fields.cooltimeRewardEntity = UserEventCooltimeRewardEntity__GetEventCooltimeRewardEntity(
                                            *p_userCooltimeRewardEntity,
                                            0LL);
      p_cooltimeRewardEntity = &this->fields.cooltimeRewardEntity;
      sub_1C2E0D0(&this->fields.cooltimeRewardEntity);
      if ( this->fields.cooltimeRewardEntity )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_GiftMaster___);
        if ( *p_cooltimeRewardEntity && Master_object )
        {
          this->fields.giftEntity = GiftMaster__getDataById(
                                      (GiftMaster_o *)Master_object,
                                      (*p_cooltimeRewardEntity)->fields.giftId,
                                      0LL);
          sub_1C2E0D0(&this->fields.giftEntity);
          SpotCooltimeInfoComponent__UpdateDisp(this, v9);
          return;
        }
LABEL_16:
        sub_1C2E388(Master_object, v7);
      }
    }
  }
}


bool __fastcall SpotCooltimeInfoComponent__get_IsQpType(SpotCooltimeInfoComponent_o *this, const MethodInfo *method)
{
  return this->fields.isQpType;
}