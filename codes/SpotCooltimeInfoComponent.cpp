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


System_String_o *SpotCooltimeInfoComponent__GetCooltimeText(
        SpotCooltimeInfoComponent_o *this,
        int32_t remainTime,
        const MethodInfo *method)
{
  unsigned int v4; // w24
  unsigned int v5; // w22
  unsigned int v6; // w21
  System_String_o *v7; // x19
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  Il2CppObject *v11; // x20
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  Il2CppObject *v15; // x21
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  Il2CppObject *v19; // x0
  unsigned int v21; // [xsp+Ch] [xbp-44h] BYREF
  unsigned int v22; // [xsp+18h] [xbp-38h] BYREF
  unsigned int v23; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4C21C0F & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_12275/*"SPOT_COOLTIME_REMAIN"*/);
    sub_1C2D490(&StringLiteral_12273/*"SPOT_COOLTIME_NONE"*/);
    byte_4C21C0F = 1;
  }
  if ( remainTime <= 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    return LocalizationManager__Get((System_String_o *)StringLiteral_12273/*"SPOT_COOLTIME_NONE"*/, 0);
  }
  else
  {
    v4 = remainTime / 0xE10u;
    v5 = remainTime % 0x3Cu;
    v6 = remainTime % 0xE10u / 0x3C;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_12275/*"SPOT_COOLTIME_REMAIN"*/, 0);
    v23 = v4;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23, v8, v9, v10);
    v22 = v6;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22, v12, v13, v14);
    v21 = v5;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21, v16, v17, v18);
    return System_String__Format_63499224(v7, v11, v15, v19, 0);
  }
}


System_String_o *SpotCooltimeInfoComponent__GetRewardCountLabel(
        SpotCooltimeInfoComponent_o *this,
        const MethodInfo *method)
{
  _BOOL4 isQpType; // w20
  int64_t remainTime; // x26
  System_String_o **v5; // x8
  System_String_o **v6; // x9
  System_String_o *v7; // x20
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  Il2CppObject *v11; // x21
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  Il2CppObject *v15; // x0
  int64_t maxRewardNum; // [xsp+8h] [xbp-58h] BYREF
  int64_t receivedRewardNum; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4C21C14 & 1) == 0 )
  {
    sub_1C2D490(&long_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_12277/*"SPOT_COOLTIME_REWARD_COUNT"*/);
    sub_1C2D490(&StringLiteral_12280/*"SPOT_COOLTIME_REWARD_COUNT_QP_MAX"*/);
    sub_1C2D490(&StringLiteral_12279/*"SPOT_COOLTIME_REWARD_COUNT_QP"*/);
    sub_1C2D490(&StringLiteral_12278/*"SPOT_COOLTIME_REWARD_COUNT_MAX"*/);
    byte_4C21C14 = 1;
  }
  isQpType = this->fields.isQpType;
  remainTime = this->fields.remainTime;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( remainTime <= 0 )
    v5 = (System_String_o **)&StringLiteral_12280/*"SPOT_COOLTIME_REWARD_COUNT_QP_MAX"*/;
  else
    v5 = (System_String_o **)&StringLiteral_12279/*"SPOT_COOLTIME_REWARD_COUNT_QP"*/;
  if ( remainTime <= 0 )
    v6 = (System_String_o **)&StringLiteral_12278/*"SPOT_COOLTIME_REWARD_COUNT_MAX"*/;
  else
    v6 = (System_String_o **)&StringLiteral_12277/*"SPOT_COOLTIME_REWARD_COUNT"*/;
  if ( !isQpType )
    v5 = v6;
  v7 = LocalizationManager__Get(*v5, 0);
  receivedRewardNum = this->fields.receivedRewardNum;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &receivedRewardNum, v8, v9, v10);
  maxRewardNum = this->fields.maxRewardNum;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &maxRewardNum, v12, v13, v14);
  return System_String__Format_63499156(v7, v11, v15, 0);
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
  UnityEngine_Object_o *targetSpot; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct SrcSpotBasePrefab_o *v6; // x8
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8

  if ( (byte_4C21C15 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C21C15 = 1;
  }
  targetSpot = (UnityEngine_Object_o *)this->fields.targetSpot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(targetSpot, 0, 0);
  if ( v4 )
  {
    v6 = this->fields.targetSpot;
    if ( !v6 || (mMapCtrl_SpotInfo = v6->fields.mMapCtrl_SpotInfo) == 0 )
      sub_1C2D6EC(v4, v5);
    *(_QWORD *)&mMapCtrl_SpotInfo->fields.dispType = 0x100000001LL;
  }
}


void SpotCooltimeInfoComponent__Setup(
        SpotCooltimeInfoComponent_o *this,
        UserEventCooltimeRewardEntity_o *userCooltimeRewardEntity,
        SrcSpotBasePrefab_o *targetSpot,
        const MethodInfo *method)
{
  struct EventCooltimeRewardEntity_o **p_cooltimeRewardEntity; // x22
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  struct EventCooltimeRewardEntity_o *cooltimeRewardEntity; // x8
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x1

  if ( (byte_4C21C10 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    byte_4C21C10 = 1;
  }
  if ( userCooltimeRewardEntity )
  {
    this->fields.cooltimeRewardEntity = UserEventCooltimeRewardEntity__GetEventCooltimeRewardEntity(
                                          userCooltimeRewardEntity,
                                          0);
    p_cooltimeRewardEntity = &this->fields.cooltimeRewardEntity;
    sub_1C2D434(&this->fields.cooltimeRewardEntity);
    if ( this->fields.cooltimeRewardEntity )
    {
      this->fields.userCooltimeRewardEntity = userCooltimeRewardEntity;
      sub_1C2D434(&this->fields.userCooltimeRewardEntity);
      this->fields.targetSpot = targetSpot;
      sub_1C2D434(&this->fields.targetSpot);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_GiftMaster___);
      if ( !*p_cooltimeRewardEntity
        || !Master_object
        || (this->fields.giftEntity = GiftMaster__getDataById(
                                        (GiftMaster_o *)Master_object,
                                        (*p_cooltimeRewardEntity)->fields.giftId,
                                        0),
            Master_object = (Il2CppObject *)sub_1C2D434(&this->fields.giftEntity),
            (cooltimeRewardEntity = this->fields.cooltimeRewardEntity) == 0) )
      {
        sub_1C2D6EC(Master_object, v9);
      }
      SpotCooltimeInfoComponent__SetupBaseUI(this, cooltimeRewardEntity->fields.eventId, v10);
      SpotCooltimeInfoComponent__SetupRewardInfo(this, this->fields.giftEntity, v12);
      SpotCooltimeInfoComponent__UpdateDisp(this, v13);
    }
  }
}


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

  if ( (byte_4C21C11 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&StringLiteral_23583/*"spot_info_gauge_base"*/);
    sub_1C2D490(&StringLiteral_23582/*"spot_info_gauge"*/);
    sub_1C2D490(&StringLiteral_23587/*"spot_info_window"*/);
    byte_4C21C11 = 1;
  }
  rewardItemInfoRoot = this->fields.rewardItemInfoRoot;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_40385372(eventId, rewardItemInfoRoot, (System_String_o *)StringLiteral_23587/*"spot_info_window"*/, 0);
  AtlasManager__SetEventUI_40385372(eventId, this->fields.rewardQpInfoRoot, (System_String_o *)StringLiteral_23587/*"spot_info_window"*/, 0);
  AtlasManager__SetEventUI_40385372(eventId, this->fields.gaugeBaseSprite, (System_String_o *)StringLiteral_23583/*"spot_info_gauge_base"*/, 0);
  v6 = AtlasManager__SetEventUI_40385372(eventId, this->fields.gaugeSprite, (System_String_o *)StringLiteral_23582/*"spot_info_gauge"*/, 0);
  gaugeLinesSprite = this->fields.gaugeLinesSprite;
  if ( !gaugeLinesSprite )
    sub_1C2D6EC(v6, v7);
  max_length = gaugeLinesSprite->max_length;
  if ( (int)max_length >= 1 )
  {
    v11 = 0;
    do
    {
      if ( v11 >= (unsigned int)max_length )
        sub_1C2D6F4(v6, v7, v8);
      v12 = gaugeLinesSprite->m_Items[v11];
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      v6 = AtlasManager__SetEventUI_40385372(eventId, v12, (System_String_o *)StringLiteral_23583/*"spot_info_gauge_base"*/, 0);
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

  if ( (byte_4C21C13 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    byte_4C21C13 = 1;
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
          AtlasManager__SetItem(rewardServantItemIcon, 4, 0);
          v5 = 1;
        }
        else
        {
          if ( !cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          v5 = 1;
          AtlasManager__SetFaceImage(rewardServantItemIcon, objectId, 0, 1, 0, 0);
        }
        goto LABEL_29;
      case 2:
        rewardItemIcon = this->fields.rewardItemIcon;
        IconImageId = GiftEntity__getIconImageId(giftEntity, 0);
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
          AtlasManager__SetItem(v11, v12, 0);
        }
        else
        {
          if ( !v17 )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetCommandCodeImage(v16, v15, 0);
        }
LABEL_28:
        v5 = 0;
LABEL_29:
        isQp = (UnityEngine_Component_o *)GiftEntity__isQp(giftEntity, 0);
        gaugeLineGridRoot = this->fields.gaugeLineGridRoot;
        this->fields.isQpType = (unsigned __int8)isQp & 1;
        if ( !gaugeLineGridRoot )
          goto LABEL_38;
        UnityEngine_GameObject__SetActive(gaugeLineGridRoot, ((unsigned __int8)isQp & 1) == 0, 0);
        isQp = (UnityEngine_Component_o *)this->fields.rewardItemInfoRoot;
        if ( !isQp )
          goto LABEL_38;
        isQp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(isQp, 0);
        if ( !isQp )
          goto LABEL_38;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)isQp, !this->fields.isQpType, 0);
        isQp = (UnityEngine_Component_o *)this->fields.rewardQpInfoRoot;
        if ( !isQp
          || (isQp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(isQp, 0)) == 0
          || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)isQp, this->fields.isQpType, 0),
              (isQp = (UnityEngine_Component_o *)this->fields.rewardItemIcon) == 0)
          || (isQp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(isQp, 0)) == 0
          || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)isQp, !v5, 0),
              (isQp = (UnityEngine_Component_o *)this->fields.rewardServantItemRoot) == 0) )
        {
LABEL_38:
          sub_1C2D6EC(isQp, v19);
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)isQp, v5, 0);
        break;
      default:
        goto LABEL_29;
    }
  }
}


// attributes: thunk
void SpotCooltimeInfoComponent__Update(SpotCooltimeInfoComponent_o *this, const MethodInfo *method)
{
  SpotCooltimeInfoComponent__UpdateDisp(this, method);
}


void SpotCooltimeInfoComponent__UpdateDisp(SpotCooltimeInfoComponent_o *this, const MethodInfo *method)
{
  SpotCooltimeInfoComponent_o *v2; // x19
  struct UserEventCooltimeRewardEntity_o *userCooltimeRewardEntity; // x8
  struct SrcSpotBasePrefab_o *targetSpot; // x9
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x9
  System_DateTime_o v6; // x0
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

  v2 = this;
  if ( (byte_4C21C0E & 1) == 0 )
  {
    this = (SpotCooltimeInfoComponent_o *)sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C21C0E = 1;
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
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      return;
    }
    goto LABEL_37;
  }
  v2->fields.collectedAt = userCooltimeRewardEntity->fields.collectedAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v6.fields._dateData = NetworkManager__getDateTime(0).fields._dateData;
  v7 = NetworkManager__getTime_41144944(v6, 0) - 1;
  this = (SpotCooltimeInfoComponent_o *)v2->fields.cooltimeRewardEntity;
  v8 = (v7 - v2->fields.collectedAt) & ~((v7 - v2->fields.collectedAt) >> 63);
  v2->fields.currentTime = v7;
  v2->fields.passTime = v8;
  if ( !this )
    goto LABEL_37;
  cooltimeLb_high = HIDWORD(this->fields.cooltimeLb);
  v2->fields.remainTime = cooltimeLb_high - (int)v8;
  if ( cooltimeLb_high >= 1 && SLODWORD(this->fields.rewardServantItemRoot) >= 1 )
  {
    this = (SpotCooltimeInfoComponent_o *)EventCooltimeRewardEntity__DoesMakeGiftsEverySecond(
                                            (EventCooltimeRewardEntity_o *)this,
                                            0);
    cooltimeRewardEntity = v2->fields.cooltimeRewardEntity;
    if ( !cooltimeRewardEntity )
      goto LABEL_37;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v11 = v2->fields.passTime * cooltimeRewardEntity->fields.upperLimitGiftNum / cooltimeRewardEntity->fields.cooltime;
      v2->fields.receivedRewardUnitNum = v11;
      p_receivedRewardUnitNum = &v2->fields.receivedRewardUnitNum;
    }
    else
    {
      this = (SpotCooltimeInfoComponent_o *)EventCooltimeRewardEntity__GetRewardUnitTime(
                                              v2->fields.cooltimeRewardEntity,
                                              0);
      v11 = v2->fields.passTime / (int)this;
      v2->fields.receivedRewardUnitNum = v11;
      p_receivedRewardUnitNum = &v2->fields.receivedRewardUnitNum;
      cooltimeRewardEntity = v2->fields.cooltimeRewardEntity;
      v2->fields.rewardUnitTime = (int)this;
      if ( !cooltimeRewardEntity )
        goto LABEL_37;
    }
    upperLimitGiftNum = cooltimeRewardEntity->fields.upperLimitGiftNum;
    if ( v11 > upperLimitGiftNum )
    {
      v11 = upperLimitGiftNum;
      *p_receivedRewardUnitNum = upperLimitGiftNum;
    }
    giftEntity = v2->fields.giftEntity;
    if ( giftEntity )
    {
      num = giftEntity->fields.num;
      this = (SpotCooltimeInfoComponent_o *)v2->fields.cooltimeObj;
      v2->fields.receivedRewardNum = v11 * num;
      v2->fields.maxRewardNum = (int)num * (int)upperLimitGiftNum;
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        cooltimeLb = v2->fields.cooltimeLb;
        this = (SpotCooltimeInfoComponent_o *)SpotCooltimeInfoComponent__GetCooltimeText(
                                                v17,
                                                v2->fields.remainTime,
                                                v18);
        if ( cooltimeLb )
        {
          UILabel__set_text(cooltimeLb, (System_String_o *)this, 0);
          v20 = v2->fields.isQpType ? v2->fields.rewardQpCountInfo : v2->fields.rewardItemCountInfo;
          this = (SpotCooltimeInfoComponent_o *)SpotCooltimeInfoComponent__GetRewardCountLabel(v2, v19);
          if ( v20 )
          {
            UILabel__set_text(v20, (System_String_o *)this, 0);
            v21 = v2->fields.cooltimeRewardEntity;
            if ( v21 )
            {
              if ( v21->fields.upperLimitGiftNum >= 1 )
              {
                this = (SpotCooltimeInfoComponent_o *)v2->fields.gaugeSprite;
                if ( !this )
                  goto LABEL_37;
                passTime = v2->fields.passTime;
                cooltime = v21->fields.cooltime;
                if ( passTime > cooltime )
                  passTime = cooltime;
                UIBasicSprite__set_fillAmount((UIBasicSprite_o *)this, (float)passTime / (float)(int)cooltime, 0);
              }
              this = (SpotCooltimeInfoComponent_o *)v2->fields.targetSpot;
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
LABEL_37:
    sub_1C2D6EC(this, method);
  }
}


void SpotCooltimeInfoComponent__UpdateUserData(SpotCooltimeInfoComponent_o *this, const MethodInfo *method)
{
  UserEventCooltimeRewardEntity_o **p_userCooltimeRewardEntity; // x20
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  struct EventCooltimeRewardEntity_o **p_cooltimeRewardEntity; // x20
  const MethodInfo *v7; // x1

  if ( (byte_4C21C12 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    byte_4C21C12 = 1;
  }
  p_userCooltimeRewardEntity = &this->fields.userCooltimeRewardEntity;
  if ( this->fields.userCooltimeRewardEntity )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
    if ( !*p_userCooltimeRewardEntity || !Master_object )
      goto LABEL_16;
    *p_userCooltimeRewardEntity = UserEventCooltimeRewardMaster__GetCurrentLevelEntity(
                                    (UserEventCooltimeRewardMaster_o *)Master_object,
                                    (*p_userCooltimeRewardEntity)->fields.eventId,
                                    (*p_userCooltimeRewardEntity)->fields.spotId,
                                    0);
    sub_1C2D434(&this->fields.userCooltimeRewardEntity);
    if ( *p_userCooltimeRewardEntity )
    {
      this->fields.cooltimeRewardEntity = UserEventCooltimeRewardEntity__GetEventCooltimeRewardEntity(
                                            *p_userCooltimeRewardEntity,
                                            0);
      p_cooltimeRewardEntity = &this->fields.cooltimeRewardEntity;
      sub_1C2D434(&this->fields.cooltimeRewardEntity);
      if ( this->fields.cooltimeRewardEntity )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_GiftMaster___);
        if ( *p_cooltimeRewardEntity && Master_object )
        {
          this->fields.giftEntity = GiftMaster__getDataById(
                                      (GiftMaster_o *)Master_object,
                                      (*p_cooltimeRewardEntity)->fields.giftId,
                                      0);
          sub_1C2D434(&this->fields.giftEntity);
          SpotCooltimeInfoComponent__UpdateDisp(this, v7);
          return;
        }
LABEL_16:
        sub_1C2D6EC(Master_object, v5);
      }
    }
  }
}


bool SpotCooltimeInfoComponent__get_IsQpType(SpotCooltimeInfoComponent_o *this, const MethodInfo *method)
{
  return this->fields.isQpType;
}