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
  unsigned int v7; // w20
  unsigned int v8; // w21
  unsigned int v9; // w22
  System_String_o *v10; // x19
  Il2CppObject *v11; // x20
  Il2CppObject *v12; // x21
  Il2CppObject *v13; // x0
  unsigned int v15; // [xsp+Ch] [xbp-34h] BYREF
  unsigned int v16; // [xsp+18h] [xbp-28h] BYREF
  unsigned int v17; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4188BA9 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&remainTime);
    sub_B2C35C(&LocalizationManager_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_12303/*"SPOT_COOLTIME_REMAIN"*/, v5);
    sub_B2C35C(&StringLiteral_12301/*"SPOT_COOLTIME_NONE"*/, v6);
    byte_4188BA9 = 1;
  }
  if ( remainTime <= 0 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    return LocalizationManager__Get((System_String_o *)StringLiteral_12301/*"SPOT_COOLTIME_NONE"*/, 0LL);
  }
  else
  {
    v7 = remainTime / 0xE10u;
    v8 = remainTime % 0xE10u / 0x3C;
    v9 = remainTime % 0x3Cu;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_12303/*"SPOT_COOLTIME_REMAIN"*/, 0LL);
    v17 = v7;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
    v16 = v8;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
    v15 = v9;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
    return System_String__Format_44306596(v10, v11, v12, v13, 0LL);
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
  int64_t remainTime; // x9
  __int64 *v9; // x8
  System_String_o *v10; // x20
  Il2CppObject *v11; // x21
  Il2CppObject *v12; // x0
  int64_t maxRewardNum; // [xsp+0h] [xbp-30h] BYREF
  int64_t receivedRewardNum; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4188BAE & 1) == 0 )
  {
    sub_B2C35C(&long_TypeInfo, method);
    sub_B2C35C(&LocalizationManager_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_12305/*"SPOT_COOLTIME_REWARD_COUNT"*/, v4);
    sub_B2C35C(&StringLiteral_12308/*"SPOT_COOLTIME_REWARD_COUNT_QP_MAX"*/, v5);
    sub_B2C35C(&StringLiteral_12307/*"SPOT_COOLTIME_REWARD_COUNT_QP"*/, v6);
    sub_B2C35C(&StringLiteral_12306/*"SPOT_COOLTIME_REWARD_COUNT_MAX"*/, v7);
    byte_4188BAE = 1;
  }
  remainTime = this->fields.remainTime;
  if ( this->fields.isQpType )
  {
    if ( remainTime <= 0 )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v9 = &StringLiteral_12308/*"SPOT_COOLTIME_REWARD_COUNT_QP_MAX"*/;
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v9 = &StringLiteral_12307/*"SPOT_COOLTIME_REWARD_COUNT_QP"*/;
    }
  }
  else if ( remainTime <= 0 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v9 = &StringLiteral_12306/*"SPOT_COOLTIME_REWARD_COUNT_MAX"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v9 = &StringLiteral_12305/*"SPOT_COOLTIME_REWARD_COUNT"*/;
  }
  v10 = LocalizationManager__Get((System_String_o *)*v9, 0LL);
  receivedRewardNum = this->fields.receivedRewardNum;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &receivedRewardNum);
  maxRewardNum = this->fields.maxRewardNum;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &maxRewardNum);
  return System_String__Format_44301068(v10, v11, v12, 0LL);
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
  struct SrcSpotBasePrefab_o *v8; // x8
  struct MapControl_SpotInfo_o *v9; // x8

  if ( (byte_4188BAF & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4188BAF = 1;
  }
  targetSpot = (UnityEngine_Object_o *)this->fields.targetSpot;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Inequality(targetSpot, 0LL, 0LL);
  if ( v4 )
  {
    v6 = this->fields.targetSpot;
    if ( !v6
      || (mMapCtrl_SpotInfo = v6->fields.mMapCtrl_SpotInfo) == 0LL
      || (mMapCtrl_SpotInfo->fields.dispType = 1, (v8 = this->fields.targetSpot) == 0LL)
      || (v9 = v8->fields.mMapCtrl_SpotInfo) == 0LL )
    {
      sub_B2C434(v4, v5);
    }
    v9->fields.touchType = 1;
  }
}


void __fastcall SpotCooltimeInfoComponent__Setup(
        SpotCooltimeInfoComponent_o *this,
        UserEventCooltimeRewardEntity_o *userCooltimeRewardEntity,
        SrcSpotBasePrefab_o *targetSpot,
        const MethodInfo *method)
{
  __int64 v7; // x1
  struct EventCooltimeRewardEntity_o *EventCooltimeRewardEntity; // x0
  struct EventCooltimeRewardEntity_o **p_cooltimeRewardEntity; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  GiftMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v29; // x1
  struct GiftEntity_o *DataById; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  const MethodInfo *v37; // x2
  struct EventCooltimeRewardEntity_o *cooltimeRewardEntity; // x8
  const MethodInfo *v39; // x2
  const MethodInfo *v40; // x1

  if ( (byte_4188BAA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_GiftMaster___, userCooltimeRewardEntity);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    byte_4188BAA = 1;
  }
  if ( userCooltimeRewardEntity )
  {
    EventCooltimeRewardEntity = UserEventCooltimeRewardEntity__GetEventCooltimeRewardEntity(
                                  userCooltimeRewardEntity,
                                  0LL);
    this->fields.cooltimeRewardEntity = EventCooltimeRewardEntity;
    p_cooltimeRewardEntity = &this->fields.cooltimeRewardEntity;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.cooltimeRewardEntity,
      (System_Int32_array **)EventCooltimeRewardEntity,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    if ( this->fields.cooltimeRewardEntity )
    {
      this->fields.userCooltimeRewardEntity = userCooltimeRewardEntity;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.userCooltimeRewardEntity,
        (System_Int32_array **)userCooltimeRewardEntity,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
      this->fields.targetSpot = targetSpot;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.targetSpot,
        (System_Int32_array **)targetSpot,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_GiftMaster___);
      if ( !*p_cooltimeRewardEntity
        || !Master_WarQuestSelectionMaster
        || (DataById = GiftMaster__getDataById(
                         Master_WarQuestSelectionMaster,
                         (*p_cooltimeRewardEntity)->fields.giftId,
                         0LL),
            this->fields.giftEntity = DataById,
            sub_B2C2F8(
              (BattleServantConfConponent_o *)&this->fields.giftEntity,
              (System_Int32_array **)DataById,
              v31,
              v32,
              v33,
              v34,
              v35,
              v36),
            (cooltimeRewardEntity = this->fields.cooltimeRewardEntity) == 0LL) )
      {
        sub_B2C434(Master_WarQuestSelectionMaster, v29);
      }
      SpotCooltimeInfoComponent__SetupBaseUI(this, cooltimeRewardEntity->fields.eventId, v37);
      SpotCooltimeInfoComponent__SetupRewardInfo(this, this->fields.giftEntity, v39);
      SpotCooltimeInfoComponent__UpdateDisp(this, v40);
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
  struct UISprite_array *gaugeLinesSprite; // x23
  __int64 v12; // x8
  unsigned __int64 v13; // x24
  UISprite_o *v14; // x20
  __int64 v15; // x0

  if ( (byte_4188BAB & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&StringLiteral_22223/*"spot_info_gauge_base"*/, v5);
    sub_B2C35C(&StringLiteral_22222/*"spot_info_gauge"*/, v6);
    sub_B2C35C(&StringLiteral_22227/*"spot_info_window"*/, v7);
    byte_4188BAB = 1;
  }
  rewardItemInfoRoot = this->fields.rewardItemInfoRoot;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_28451336(eventId, rewardItemInfoRoot, (System_String_o *)StringLiteral_22227/*"spot_info_window"*/, 0LL);
  AtlasManager__SetEventUI_28451336(eventId, this->fields.rewardQpInfoRoot, (System_String_o *)StringLiteral_22227/*"spot_info_window"*/, 0LL);
  AtlasManager__SetEventUI_28451336(eventId, this->fields.gaugeBaseSprite, (System_String_o *)StringLiteral_22223/*"spot_info_gauge_base"*/, 0LL);
  v9 = AtlasManager__SetEventUI_28451336(eventId, this->fields.gaugeSprite, (System_String_o *)StringLiteral_22222/*"spot_info_gauge"*/, 0LL);
  gaugeLinesSprite = this->fields.gaugeLinesSprite;
  if ( !gaugeLinesSprite )
    sub_B2C434(v9, v10);
  v12 = *(_QWORD *)&gaugeLinesSprite->max_length;
  if ( (int)v12 >= 1 )
  {
    v13 = 0LL;
    do
    {
      if ( v13 >= (unsigned int)v12 )
      {
        v15 = sub_B2C460(v9);
        sub_B2C400(v15, 0LL);
      }
      v14 = gaugeLinesSprite->m_Items[v13];
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      v9 = AtlasManager__SetEventUI_28451336(eventId, v14, (System_String_o *)StringLiteral_22223/*"spot_info_gauge_base"*/, 0LL);
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
  int objectId; // w22
  UISprite_o *rewardServantItemIcon; // x21
  int v8; // w22
  UISprite_o *v9; // x21
  struct UISprite_o *rewardItemIcon; // x21
  int32_t IconImageId; // w22
  UISprite_o *v12; // x0
  int32_t v13; // w1
  int32_t v14; // w21
  struct UISprite_o *v15; // x22
  UnityEngine_Component_o *isQp; // x0
  __int64 v17; // x1
  UnityEngine_GameObject_o *gaugeLineGridRoot; // x8

  if ( (byte_4188BAD & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, giftEntity);
    byte_4188BAD = 1;
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
        if ( objectId < 1 )
        {
          if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__SetItem(rewardServantItemIcon, 4, 0LL);
        }
        else
        {
          if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__SetFaceImage(rewardServantItemIcon, objectId, 0, 0LL);
        }
        v5 = 1;
        goto LABEL_36;
      case 2:
        rewardItemIcon = this->fields.rewardItemIcon;
        IconImageId = GiftEntity__getIconImageId(giftEntity, 0LL);
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        v12 = rewardItemIcon;
        v13 = IconImageId;
        goto LABEL_34;
      case 8:
        v14 = giftEntity->fields.objectId;
        if ( v14 < 1 )
          goto LABEL_35;
        v15 = this->fields.rewardItemIcon;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        v12 = v15;
        v13 = v14;
        goto LABEL_34;
      case 0xB:
        v8 = giftEntity->fields.objectId;
        v9 = this->fields.rewardItemIcon;
        if ( v8 < 1 )
        {
          if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          v13 = 8014;
          v12 = v9;
LABEL_34:
          AtlasManager__SetItem(v12, v13, 0LL);
        }
        else
        {
          if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__SetCommandCodeImage(v9, v8, 0LL);
        }
LABEL_35:
        v5 = 0;
LABEL_36:
        isQp = (UnityEngine_Component_o *)GiftEntity__isQp(giftEntity, 0LL);
        gaugeLineGridRoot = this->fields.gaugeLineGridRoot;
        this->fields.isQpType = (unsigned __int8)isQp & 1;
        if ( !gaugeLineGridRoot )
          goto LABEL_45;
        UnityEngine_GameObject__SetActive(gaugeLineGridRoot, ((unsigned __int8)isQp & 1) == 0, 0LL);
        isQp = (UnityEngine_Component_o *)this->fields.rewardItemInfoRoot;
        if ( !isQp )
          goto LABEL_45;
        isQp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(isQp, 0LL);
        if ( !isQp )
          goto LABEL_45;
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
LABEL_45:
          sub_B2C434(isQp, v17);
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)isQp, v5, 0LL);
        break;
      default:
        goto LABEL_36;
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
  struct EventCooltimeRewardEntity_o *cooltimeRewardEntity; // x8
  int64_t v9; // x9
  int64_t *p_receivedRewardUnitNum; // x10
  int64_t upperLimitGiftNum; // x11
  struct GiftEntity_o *giftEntity; // x10
  UILabel_o *cooltimeLb; // x20
  SpotCooltimeInfoComponent_o *v14; // x0
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x1
  UILabel_o *v17; // x20
  const MethodInfo *v18; // x2
  struct EventCooltimeRewardEntity_o *v19; // x8
  __int64 passTime; // x9
  __int64 cooltime; // x8
  System_DateTime_o v22; // 0:x0.8

  v2 = this;
  if ( (byte_4188BA8 & 1) == 0 )
  {
    this = (SpotCooltimeInfoComponent_o *)sub_B2C35C(&NetworkManager_TypeInfo, method);
    byte_4188BA8 = 1;
  }
  userCooltimeRewardEntity = v2->fields.userCooltimeRewardEntity;
  if ( !userCooltimeRewardEntity || !v2->fields.cooltimeRewardEntity )
    goto LABEL_17;
  targetSpot = v2->fields.targetSpot;
  if ( !targetSpot )
    goto LABEL_39;
  mMapCtrl_SpotInfo = targetSpot->fields.mMapCtrl_SpotInfo;
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_39;
  if ( !mMapCtrl_SpotInfo->fields.dispType )
  {
LABEL_17:
    this = (SpotCooltimeInfoComponent_o *)v2->fields.cooltimeObj;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      return;
    }
    goto LABEL_39;
  }
  v2->fields.collectedAt = userCooltimeRewardEntity->fields.collectedAt;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v22.fields.dateData = NetworkManager__getDateTime(0LL).fields.dateData;
  v6 = NetworkManager__getTime_26270684(v22, 0LL) - 1;
  this = (SpotCooltimeInfoComponent_o *)v2->fields.cooltimeRewardEntity;
  v7 = (v6 - v2->fields.collectedAt) & ~((v6 - v2->fields.collectedAt) >> 63);
  v2->fields.currentTime = v6;
  v2->fields.passTime = v7;
  if ( !this )
    goto LABEL_39;
  v2->fields.remainTime = HIDWORD(this->fields.rewardItemIcon) - (int)v7;
  if ( SHIDWORD(this->fields.rewardItemIcon) >= 1 && SLODWORD(this->fields.rewardServantItemIcon) >= 1 )
  {
    this = (SpotCooltimeInfoComponent_o *)EventCooltimeRewardEntity__DoesMakeGiftsEverySecond(
                                            (EventCooltimeRewardEntity_o *)this,
                                            0LL);
    cooltimeRewardEntity = v2->fields.cooltimeRewardEntity;
    if ( !cooltimeRewardEntity )
      goto LABEL_39;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v9 = v2->fields.passTime * cooltimeRewardEntity->fields.upperLimitGiftNum / cooltimeRewardEntity->fields.cooltime;
      p_receivedRewardUnitNum = &v2->fields.receivedRewardUnitNum;
      v2->fields.receivedRewardUnitNum = v9;
    }
    else
    {
      this = (SpotCooltimeInfoComponent_o *)EventCooltimeRewardEntity__GetRewardUnitTime(
                                              v2->fields.cooltimeRewardEntity,
                                              0LL);
      cooltimeRewardEntity = v2->fields.cooltimeRewardEntity;
      v9 = v2->fields.passTime / (int)this;
      v2->fields.rewardUnitTime = (int)this;
      v2->fields.receivedRewardUnitNum = v9;
      if ( !cooltimeRewardEntity )
        goto LABEL_39;
      p_receivedRewardUnitNum = &v2->fields.receivedRewardUnitNum;
    }
    upperLimitGiftNum = cooltimeRewardEntity->fields.upperLimitGiftNum;
    if ( v9 > upperLimitGiftNum )
    {
      v9 = cooltimeRewardEntity->fields.upperLimitGiftNum;
      *p_receivedRewardUnitNum = upperLimitGiftNum;
    }
    giftEntity = v2->fields.giftEntity;
    if ( giftEntity )
    {
      this = (SpotCooltimeInfoComponent_o *)v2->fields.cooltimeObj;
      v2->fields.receivedRewardNum = v9 * giftEntity->fields.num;
      v2->fields.maxRewardNum = cooltimeRewardEntity->fields.upperLimitGiftNum * giftEntity->fields.num;
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        cooltimeLb = v2->fields.cooltimeLb;
        this = (SpotCooltimeInfoComponent_o *)SpotCooltimeInfoComponent__GetCooltimeText(
                                                v14,
                                                v2->fields.remainTime,
                                                v15);
        if ( cooltimeLb )
        {
          UILabel__set_text(cooltimeLb, (System_String_o *)this, 0LL);
          v17 = v2->fields.isQpType ? v2->fields.rewardQpCountInfo : v2->fields.rewardItemCountInfo;
          this = (SpotCooltimeInfoComponent_o *)SpotCooltimeInfoComponent__GetRewardCountLabel(v2, v16);
          if ( v17 )
          {
            UILabel__set_text(v17, (System_String_o *)this, 0LL);
            v19 = v2->fields.cooltimeRewardEntity;
            if ( v19 )
            {
              if ( v19->fields.upperLimitGiftNum >= 1 )
              {
                this = (SpotCooltimeInfoComponent_o *)v2->fields.gaugeSprite;
                if ( !this )
                  goto LABEL_39;
                passTime = v2->fields.passTime;
                cooltime = v19->fields.cooltime;
                if ( passTime > cooltime )
                  passTime = cooltime;
                UIBasicSprite__set_fillAmount((UIBasicSprite_o *)this, (float)passTime / (float)(int)cooltime, 0LL);
              }
              this = (SpotCooltimeInfoComponent_o *)v2->fields.targetSpot;
              if ( this )
              {
                SrcSpotBasePrefab__UpdateDisp((SrcSpotBasePrefab_o *)this, 1, v18);
                return;
              }
            }
          }
        }
      }
    }
LABEL_39:
    sub_B2C434(this, method);
  }
}


void __fastcall SpotCooltimeInfoComponent__UpdateUserData(SpotCooltimeInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UserEventCooltimeRewardEntity_o **p_userCooltimeRewardEntity; // x20
  UserEventCooltimeRewardMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v7; // x1
  System_Int32_array **CurrentLevelEntity; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct EventCooltimeRewardEntity_o *EventCooltimeRewardEntity; // x0
  struct EventCooltimeRewardEntity_o **p_cooltimeRewardEntity; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct GiftEntity_o *DataById; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  const MethodInfo *v30; // x1

  if ( (byte_4188BAC & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_GiftMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___, v3);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    byte_4188BAC = 1;
  }
  p_userCooltimeRewardEntity = &this->fields.userCooltimeRewardEntity;
  if ( this->fields.userCooltimeRewardEntity )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (UserEventCooltimeRewardMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
    if ( !*p_userCooltimeRewardEntity || !Master_WarQuestSelectionMaster )
      goto LABEL_18;
    CurrentLevelEntity = (System_Int32_array **)UserEventCooltimeRewardMaster__GetCurrentLevelEntity(
                                                  Master_WarQuestSelectionMaster,
                                                  (*p_userCooltimeRewardEntity)->fields.eventId,
                                                  (*p_userCooltimeRewardEntity)->fields.spotId,
                                                  0LL);
    *p_userCooltimeRewardEntity = (UserEventCooltimeRewardEntity_o *)CurrentLevelEntity;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.userCooltimeRewardEntity,
      CurrentLevelEntity,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    if ( *p_userCooltimeRewardEntity )
    {
      EventCooltimeRewardEntity = UserEventCooltimeRewardEntity__GetEventCooltimeRewardEntity(
                                    *p_userCooltimeRewardEntity,
                                    0LL);
      this->fields.cooltimeRewardEntity = EventCooltimeRewardEntity;
      p_cooltimeRewardEntity = &this->fields.cooltimeRewardEntity;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.cooltimeRewardEntity,
        (System_Int32_array **)EventCooltimeRewardEntity,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22);
      if ( this->fields.cooltimeRewardEntity )
      {
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (UserEventCooltimeRewardMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_GiftMaster___);
        if ( *p_cooltimeRewardEntity && Master_WarQuestSelectionMaster )
        {
          DataById = GiftMaster__getDataById(
                       (GiftMaster_o *)Master_WarQuestSelectionMaster,
                       (*p_cooltimeRewardEntity)->fields.giftId,
                       0LL);
          this->fields.giftEntity = DataById;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&this->fields.giftEntity,
            (System_Int32_array **)DataById,
            v24,
            v25,
            v26,
            v27,
            v28,
            v29);
          SpotCooltimeInfoComponent__UpdateDisp(this, v30);
          return;
        }
LABEL_18:
        sub_B2C434(Master_WarQuestSelectionMaster, v7);
      }
    }
  }
}


bool __fastcall SpotCooltimeInfoComponent__get_IsQpType(SpotCooltimeInfoComponent_o *this, const MethodInfo *method)
{
  return this->fields.isQpType;
}