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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  unsigned int v10; // w24
  unsigned int v11; // w22
  unsigned int v12; // w21
  System_String_o *v13; // x19
  Il2CppObject *v14; // x20
  Il2CppObject *v15; // x21
  Il2CppObject *v16; // x0
  unsigned int v18; // [xsp+Ch] [xbp-44h] BYREF
  unsigned int v19; // [xsp+18h] [xbp-38h] BYREF
  unsigned int v20; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4B11242 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&remainTime, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_12354/*"SPOT_COOLTIME_REMAIN"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_12352/*"SPOT_COOLTIME_NONE"*/, v8, v9);
    byte_4B11242 = 1;
  }
  if ( remainTime <= 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&remainTime);
    return LocalizationManager__Get((System_String_o *)StringLiteral_12352/*"SPOT_COOLTIME_NONE"*/, 0LL);
  }
  else
  {
    v10 = remainTime / 0xE10u;
    v11 = remainTime % 0x3Cu;
    v12 = remainTime % 0xE10u / 0x3C;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&remainTime);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_12354/*"SPOT_COOLTIME_REMAIN"*/, 0LL);
    v20 = v10;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
    v19 = v12;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
    v18 = v11;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
    return System_String__Format_62415660(v13, v14, v15, v16, 0LL);
  }
}


System_String_o *__fastcall SpotCooltimeInfoComponent__GetRewardCountLabel(
        SpotCooltimeInfoComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  _BOOL4 isQpType; // w20
  int64_t remainTime; // x26
  System_String_o **v16; // x8
  System_String_o **v17; // x9
  System_String_o *v18; // x20
  Il2CppObject *v19; // x21
  Il2CppObject *v20; // x0
  int64_t maxRewardNum; // [xsp+8h] [xbp-58h] BYREF
  int64_t receivedRewardNum; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4B11247 & 1) == 0 )
  {
    sub_1BCA7E0(&long_TypeInfo, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_12356/*"SPOT_COOLTIME_REWARD_COUNT"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_12359/*"SPOT_COOLTIME_REWARD_COUNT_QP_MAX"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_12358/*"SPOT_COOLTIME_REWARD_COUNT_QP"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_12357/*"SPOT_COOLTIME_REWARD_COUNT_MAX"*/, v12, v13);
    byte_4B11247 = 1;
  }
  isQpType = this->fields.isQpType;
  remainTime = this->fields.remainTime;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  if ( remainTime <= 0 )
    v16 = (System_String_o **)&StringLiteral_12359/*"SPOT_COOLTIME_REWARD_COUNT_QP_MAX"*/;
  else
    v16 = (System_String_o **)&StringLiteral_12358/*"SPOT_COOLTIME_REWARD_COUNT_QP"*/;
  if ( remainTime <= 0 )
    v17 = (System_String_o **)&StringLiteral_12357/*"SPOT_COOLTIME_REWARD_COUNT_MAX"*/;
  else
    v17 = (System_String_o **)&StringLiteral_12356/*"SPOT_COOLTIME_REWARD_COUNT"*/;
  if ( !isQpType )
    v16 = v17;
  v18 = LocalizationManager__Get(*v16, 0LL);
  receivedRewardNum = this->fields.receivedRewardNum;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &receivedRewardNum);
  maxRewardNum = this->fields.maxRewardNum;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &maxRewardNum);
  return System_String__Format_62415592(v18, v19, v20, 0LL);
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
  __int64 v2; // x2
  UnityEngine_Object_o *targetSpot; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  struct SrcSpotBasePrefab_o *v7; // x8
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8

  if ( (byte_4B11248 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B11248 = 1;
  }
  targetSpot = (UnityEngine_Object_o *)this->fields.targetSpot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v5 = UnityEngine_Object__op_Inequality(targetSpot, 0LL, 0LL);
  if ( v5 )
  {
    v7 = this->fields.targetSpot;
    if ( !v7 || (mMapCtrl_SpotInfo = v7->fields.mMapCtrl_SpotInfo) == 0LL )
      sub_1BCAA3C(v5, v6);
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
  __int64 v8; // x2
  struct EventCooltimeRewardEntity_o *EventCooltimeRewardEntity; // x0
  struct EventCooltimeRewardEntity_o **p_cooltimeRewardEntity; // x22
  __int64 v11; // x1
  Il2CppObject *Master_object; // x0
  __int64 v13; // x1
  struct GiftEntity_o *DataById; // x0
  const MethodInfo *v15; // x2
  struct EventCooltimeRewardEntity_o *cooltimeRewardEntity; // x8
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x1

  if ( (byte_4B11243 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_GiftMaster___, userCooltimeRewardEntity, targetSpot);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    byte_4B11243 = 1;
  }
  if ( userCooltimeRewardEntity )
  {
    EventCooltimeRewardEntity = UserEventCooltimeRewardEntity__GetEventCooltimeRewardEntity(
                                  userCooltimeRewardEntity,
                                  0LL);
    this->fields.cooltimeRewardEntity = EventCooltimeRewardEntity;
    p_cooltimeRewardEntity = &this->fields.cooltimeRewardEntity;
    sub_1BCA784(&this->fields.cooltimeRewardEntity, EventCooltimeRewardEntity);
    if ( this->fields.cooltimeRewardEntity )
    {
      this->fields.userCooltimeRewardEntity = userCooltimeRewardEntity;
      sub_1BCA784(&this->fields.userCooltimeRewardEntity, userCooltimeRewardEntity);
      this->fields.targetSpot = targetSpot;
      sub_1BCA784(&this->fields.targetSpot, targetSpot);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v11);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GiftMaster___);
      if ( !*p_cooltimeRewardEntity
        || !Master_object
        || (DataById = GiftMaster__getDataById(
                         (GiftMaster_o *)Master_object,
                         (*p_cooltimeRewardEntity)->fields.giftId,
                         0LL),
            this->fields.giftEntity = DataById,
            Master_object = (Il2CppObject *)sub_1BCA784(&this->fields.giftEntity, DataById),
            (cooltimeRewardEntity = this->fields.cooltimeRewardEntity) == 0LL) )
      {
        sub_1BCAA3C(Master_object, v13);
      }
      SpotCooltimeInfoComponent__SetupBaseUI(this, cooltimeRewardEntity->fields.eventId, v15);
      SpotCooltimeInfoComponent__SetupRewardInfo(this, this->fields.giftEntity, v17);
      SpotCooltimeInfoComponent__UpdateDisp(this, v18);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UISprite_o *rewardItemInfoRoot; // x21
  _BOOL8 v12; // x0
  __int64 v13; // x1
  struct UISprite_array *gaugeLinesSprite; // x21
  __int64 v15; // x8
  unsigned __int64 v16; // x24
  UISprite_o *v17; // x20

  if ( (byte_4B11244 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&StringLiteral_23681/*"spot_info_gauge_base"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_23680/*"spot_info_gauge"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_23685/*"spot_info_window"*/, v9, v10);
    byte_4B11244 = 1;
  }
  rewardItemInfoRoot = this->fields.rewardItemInfoRoot;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, *(_QWORD *)&eventId);
  AtlasManager__SetEventUI_38574572(eventId, rewardItemInfoRoot, (System_String_o *)StringLiteral_23685/*"spot_info_window"*/, 0LL);
  AtlasManager__SetEventUI_38574572(eventId, this->fields.rewardQpInfoRoot, (System_String_o *)StringLiteral_23685/*"spot_info_window"*/, 0LL);
  AtlasManager__SetEventUI_38574572(eventId, this->fields.gaugeBaseSprite, (System_String_o *)StringLiteral_23681/*"spot_info_gauge_base"*/, 0LL);
  v12 = AtlasManager__SetEventUI_38574572(
          eventId,
          this->fields.gaugeSprite,
          (System_String_o *)StringLiteral_23680/*"spot_info_gauge"*/,
          0LL);
  gaugeLinesSprite = this->fields.gaugeLinesSprite;
  if ( !gaugeLinesSprite )
    sub_1BCAA3C(v12, v13);
  v15 = *(_QWORD *)&gaugeLinesSprite->max_length;
  if ( (int)v15 >= 1 )
  {
    v16 = 0LL;
    do
    {
      if ( v16 >= (unsigned int)v15 )
        sub_1BCAA44(v12, v13);
      v17 = gaugeLinesSprite->m_Items[v16];
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v13);
      v12 = AtlasManager__SetEventUI_38574572(eventId, v17, (System_String_o *)StringLiteral_23681/*"spot_info_gauge_base"*/, 0LL);
      LODWORD(v15) = gaugeLinesSprite->max_length;
      ++v16;
    }
    while ( (__int64)v16 < (int)v15 );
  }
}


void __fastcall SpotCooltimeInfoComponent__SetupRewardInfo(
        SpotCooltimeInfoComponent_o *this,
        GiftEntity_o *giftEntity,
        const MethodInfo *method)
{
  bool v5; // w21
  int objectId; // w22
  UISprite_o *rewardServantItemIcon; // x21
  uint32_t cctor_finished; // w8
  struct UISprite_o *rewardItemIcon; // x21
  __int64 v10; // x1
  int32_t IconImageId; // w22
  UISprite_o *v12; // x0
  int32_t v13; // w1
  int32_t v14; // w21
  struct UISprite_o *v15; // x22
  int v16; // w22
  UISprite_o *v17; // x21
  uint32_t v18; // w8
  UnityEngine_Component_o *isQp; // x0
  __int64 v20; // x1
  UnityEngine_GameObject_o *gaugeLineGridRoot; // x8

  if ( (byte_4B11246 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, giftEntity, method);
    byte_4B11246 = 1;
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
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, giftEntity);
          AtlasManager__SetItem(rewardServantItemIcon, 4, 0LL);
        }
        else
        {
          if ( !cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, giftEntity);
          AtlasManager__SetFaceImage(rewardServantItemIcon, objectId, 0, 0LL);
        }
        v5 = 1;
        goto LABEL_30;
      case 2:
        rewardItemIcon = this->fields.rewardItemIcon;
        IconImageId = GiftEntity__getIconImageId(giftEntity, 0LL);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v10);
        v12 = rewardItemIcon;
        v13 = IconImageId;
        goto LABEL_28;
      case 8:
        v14 = giftEntity->fields.objectId;
        if ( v14 < 1 )
          goto LABEL_29;
        v15 = this->fields.rewardItemIcon;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, giftEntity);
        v12 = v15;
        v13 = v14;
        goto LABEL_28;
      case 0xB:
        v16 = giftEntity->fields.objectId;
        v17 = this->fields.rewardItemIcon;
        v18 = AtlasManager_TypeInfo->_2.cctor_finished;
        if ( v16 < 1 )
        {
          if ( !v18 )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, giftEntity);
          v13 = 8014;
          v12 = v17;
LABEL_28:
          AtlasManager__SetItem(v12, v13, 0LL);
        }
        else
        {
          if ( !v18 )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, giftEntity);
          AtlasManager__SetCommandCodeImage(v17, v16, 0LL);
        }
LABEL_29:
        v5 = 0;
LABEL_30:
        isQp = (UnityEngine_Component_o *)GiftEntity__isQp(giftEntity, 0LL);
        gaugeLineGridRoot = this->fields.gaugeLineGridRoot;
        this->fields.isQpType = (unsigned __int8)isQp & 1;
        if ( !gaugeLineGridRoot )
          goto LABEL_39;
        UnityEngine_GameObject__SetActive(gaugeLineGridRoot, ((unsigned __int8)isQp & 1) == 0, 0LL);
        isQp = (UnityEngine_Component_o *)this->fields.rewardItemInfoRoot;
        if ( !isQp )
          goto LABEL_39;
        isQp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(isQp, 0LL);
        if ( !isQp )
          goto LABEL_39;
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
LABEL_39:
          sub_1BCAA3C(isQp, v20);
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)isQp, v5, 0LL);
        break;
      default:
        goto LABEL_30;
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
  __int64 v2; // x2
  SpotCooltimeInfoComponent_o *v3; // x19
  struct UserEventCooltimeRewardEntity_o *userCooltimeRewardEntity; // x8
  struct SrcSpotBasePrefab_o *targetSpot; // x9
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x9
  int64_t v7; // x9
  __int64 v8; // x8
  int cooltimeLb_high; // w9
  struct EventCooltimeRewardEntity_o *cooltimeRewardEntity; // x8
  int64_t v11; // x9
  int64_t *p_receivedRewardUnitNum; // x10
  int64_t upperLimitGiftNum; // x8
  struct GiftEntity_o *giftEntity; // x10
  __int64 num; // x10
  UILabel_o *cooltimeLb; // x20
  SpotCooltimeInfoComponent_o *v17; // x0
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x1
  UILabel_o *v20; // x20
  struct EventCooltimeRewardEntity_o *v21; // x8
  __int64 passTime; // x9
  __int64 cooltime; // x8
  System_DateTime_o v24; // 0:x0.8

  v3 = this;
  if ( (byte_4B11241 & 1) == 0 )
  {
    this = (SpotCooltimeInfoComponent_o *)sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    byte_4B11241 = 1;
  }
  userCooltimeRewardEntity = v3->fields.userCooltimeRewardEntity;
  if ( !userCooltimeRewardEntity || !v3->fields.cooltimeRewardEntity )
    goto LABEL_16;
  targetSpot = v3->fields.targetSpot;
  if ( !targetSpot )
    goto LABEL_37;
  mMapCtrl_SpotInfo = targetSpot->fields.mMapCtrl_SpotInfo;
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_37;
  if ( !mMapCtrl_SpotInfo->fields.dispType )
  {
LABEL_16:
    this = (SpotCooltimeInfoComponent_o *)v3->fields.cooltimeObj;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      return;
    }
    goto LABEL_37;
  }
  v3->fields.collectedAt = userCooltimeRewardEntity->fields.collectedAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  v24.fields._dateData = NetworkManager__getDateTime(0LL).fields._dateData;
  v7 = NetworkManager__getTime_39269384(v24, 0LL) - 1;
  this = (SpotCooltimeInfoComponent_o *)v3->fields.cooltimeRewardEntity;
  v8 = (v7 - v3->fields.collectedAt) & ~((v7 - v3->fields.collectedAt) >> 63);
  v3->fields.currentTime = v7;
  v3->fields.passTime = v8;
  if ( !this )
    goto LABEL_37;
  cooltimeLb_high = HIDWORD(this->fields.cooltimeLb);
  v3->fields.remainTime = cooltimeLb_high - (int)v8;
  if ( cooltimeLb_high >= 1 && SLODWORD(this->fields.rewardServantItemRoot) >= 1 )
  {
    this = (SpotCooltimeInfoComponent_o *)EventCooltimeRewardEntity__DoesMakeGiftsEverySecond(
                                            (EventCooltimeRewardEntity_o *)this,
                                            0LL);
    cooltimeRewardEntity = v3->fields.cooltimeRewardEntity;
    if ( !cooltimeRewardEntity )
      goto LABEL_37;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v11 = v3->fields.passTime * cooltimeRewardEntity->fields.upperLimitGiftNum / cooltimeRewardEntity->fields.cooltime;
      v3->fields.receivedRewardUnitNum = v11;
      p_receivedRewardUnitNum = &v3->fields.receivedRewardUnitNum;
    }
    else
    {
      this = (SpotCooltimeInfoComponent_o *)EventCooltimeRewardEntity__GetRewardUnitTime(
                                              v3->fields.cooltimeRewardEntity,
                                              0LL);
      v11 = v3->fields.passTime / (int)this;
      v3->fields.receivedRewardUnitNum = v11;
      p_receivedRewardUnitNum = &v3->fields.receivedRewardUnitNum;
      cooltimeRewardEntity = v3->fields.cooltimeRewardEntity;
      v3->fields.rewardUnitTime = (int)this;
      if ( !cooltimeRewardEntity )
        goto LABEL_37;
    }
    upperLimitGiftNum = cooltimeRewardEntity->fields.upperLimitGiftNum;
    if ( v11 > upperLimitGiftNum )
    {
      v11 = upperLimitGiftNum;
      *p_receivedRewardUnitNum = upperLimitGiftNum;
    }
    giftEntity = v3->fields.giftEntity;
    if ( giftEntity )
    {
      num = giftEntity->fields.num;
      this = (SpotCooltimeInfoComponent_o *)v3->fields.cooltimeObj;
      v3->fields.receivedRewardNum = v11 * num;
      v3->fields.maxRewardNum = (int)num * (int)upperLimitGiftNum;
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        cooltimeLb = v3->fields.cooltimeLb;
        this = (SpotCooltimeInfoComponent_o *)SpotCooltimeInfoComponent__GetCooltimeText(
                                                v17,
                                                v3->fields.remainTime,
                                                v18);
        if ( cooltimeLb )
        {
          UILabel__set_text(cooltimeLb, (System_String_o *)this, 0LL);
          v20 = v3->fields.isQpType ? v3->fields.rewardQpCountInfo : v3->fields.rewardItemCountInfo;
          this = (SpotCooltimeInfoComponent_o *)SpotCooltimeInfoComponent__GetRewardCountLabel(v3, v19);
          if ( v20 )
          {
            UILabel__set_text(v20, (System_String_o *)this, 0LL);
            v21 = v3->fields.cooltimeRewardEntity;
            if ( v21 )
            {
              if ( v21->fields.upperLimitGiftNum >= 1 )
              {
                this = (SpotCooltimeInfoComponent_o *)v3->fields.gaugeSprite;
                if ( !this )
                  goto LABEL_37;
                passTime = v3->fields.passTime;
                cooltime = v21->fields.cooltime;
                if ( passTime > cooltime )
                  passTime = cooltime;
                UIBasicSprite__set_fillAmount((UIBasicSprite_o *)this, (float)passTime / (float)(int)cooltime, 0LL);
              }
              this = (SpotCooltimeInfoComponent_o *)v3->fields.targetSpot;
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
    sub_1BCAA3C(this, method);
  }
}


void __fastcall SpotCooltimeInfoComponent__UpdateUserData(SpotCooltimeInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UserEventCooltimeRewardEntity_o **p_userCooltimeRewardEntity; // x20
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1
  UserEventCooltimeRewardEntity_o *CurrentLevelEntity; // x0
  struct EventCooltimeRewardEntity_o *EventCooltimeRewardEntity; // x0
  struct EventCooltimeRewardEntity_o **p_cooltimeRewardEntity; // x20
  __int64 v14; // x1
  struct GiftEntity_o *DataById; // x0
  const MethodInfo *v16; // x1

  if ( (byte_4B11245 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_GiftMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___, v4, v5);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    byte_4B11245 = 1;
  }
  p_userCooltimeRewardEntity = &this->fields.userCooltimeRewardEntity;
  if ( this->fields.userCooltimeRewardEntity )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
    if ( !*p_userCooltimeRewardEntity || !Master_object )
      goto LABEL_16;
    CurrentLevelEntity = UserEventCooltimeRewardMaster__GetCurrentLevelEntity(
                           (UserEventCooltimeRewardMaster_o *)Master_object,
                           (*p_userCooltimeRewardEntity)->fields.eventId,
                           (*p_userCooltimeRewardEntity)->fields.spotId,
                           0LL);
    *p_userCooltimeRewardEntity = CurrentLevelEntity;
    sub_1BCA784(&this->fields.userCooltimeRewardEntity, CurrentLevelEntity);
    if ( *p_userCooltimeRewardEntity )
    {
      EventCooltimeRewardEntity = UserEventCooltimeRewardEntity__GetEventCooltimeRewardEntity(
                                    *p_userCooltimeRewardEntity,
                                    0LL);
      this->fields.cooltimeRewardEntity = EventCooltimeRewardEntity;
      p_cooltimeRewardEntity = &this->fields.cooltimeRewardEntity;
      sub_1BCA784(&this->fields.cooltimeRewardEntity, EventCooltimeRewardEntity);
      if ( this->fields.cooltimeRewardEntity )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v14);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GiftMaster___);
        if ( *p_cooltimeRewardEntity && Master_object )
        {
          DataById = GiftMaster__getDataById(
                       (GiftMaster_o *)Master_object,
                       (*p_cooltimeRewardEntity)->fields.giftId,
                       0LL);
          this->fields.giftEntity = DataById;
          sub_1BCA784(&this->fields.giftEntity, DataById);
          SpotCooltimeInfoComponent__UpdateDisp(this, v16);
          return;
        }
LABEL_16:
        sub_1BCAA3C(Master_object, v10);
      }
    }
  }
}


bool __fastcall SpotCooltimeInfoComponent__get_IsQpType(SpotCooltimeInfoComponent_o *this, const MethodInfo *method)
{
  return this->fields.isQpType;
}