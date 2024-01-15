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

  if ( (byte_40FADA6 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&remainTime);
    sub_B16FFC(&LocalizationManager_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_12250/*"SPOT_COOLTIME_REMAIN"*/, v5);
    sub_B16FFC(&StringLiteral_12248/*"SPOT_COOLTIME_NONE"*/, v6);
    byte_40FADA6 = 1;
  }
  if ( remainTime <= 0 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    return LocalizationManager__Get((System_String_o *)StringLiteral_12248/*"SPOT_COOLTIME_NONE"*/, 0LL);
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
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_12250/*"SPOT_COOLTIME_REMAIN"*/, 0LL);
    v17 = v7;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
    v16 = v8;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
    v15 = v9;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
    return System_String__Format_43744796(v10, v11, v12, v13, 0LL);
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

  if ( (byte_40FADAB & 1) == 0 )
  {
    sub_B16FFC(&long_TypeInfo, method);
    sub_B16FFC(&LocalizationManager_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_12252/*"SPOT_COOLTIME_REWARD_COUNT"*/, v4);
    sub_B16FFC(&StringLiteral_12255/*"SPOT_COOLTIME_REWARD_COUNT_QP_MAX"*/, v5);
    sub_B16FFC(&StringLiteral_12254/*"SPOT_COOLTIME_REWARD_COUNT_QP"*/, v6);
    sub_B16FFC(&StringLiteral_12253/*"SPOT_COOLTIME_REWARD_COUNT_MAX"*/, v7);
    byte_40FADAB = 1;
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
      v9 = &StringLiteral_12255/*"SPOT_COOLTIME_REWARD_COUNT_QP_MAX"*/;
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v9 = &StringLiteral_12254/*"SPOT_COOLTIME_REWARD_COUNT_QP"*/;
    }
  }
  else if ( remainTime <= 0 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v9 = &StringLiteral_12253/*"SPOT_COOLTIME_REWARD_COUNT_MAX"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v9 = &StringLiteral_12252/*"SPOT_COOLTIME_REWARD_COUNT"*/;
  }
  v10 = LocalizationManager__Get((System_String_o *)*v9, 0LL);
  receivedRewardNum = this->fields.receivedRewardNum;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &receivedRewardNum);
  maxRewardNum = this->fields.maxRewardNum;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &maxRewardNum);
  return System_String__Format_43739268(v10, v11, v12, 0LL);
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
  struct SrcSpotBasePrefab_o *v4; // x8
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  struct SrcSpotBasePrefab_o *v6; // x8
  struct MapControl_SpotInfo_o *v7; // x8

  if ( (byte_40FADAC & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FADAC = 1;
  }
  targetSpot = (UnityEngine_Object_o *)this->fields.targetSpot;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(targetSpot, 0LL, 0LL) )
  {
    v4 = this->fields.targetSpot;
    if ( !v4
      || (mMapCtrl_SpotInfo = v4->fields.mMapCtrl_SpotInfo) == 0LL
      || (mMapCtrl_SpotInfo->fields.dispType = 1, (v6 = this->fields.targetSpot) == 0LL)
      || (v7 = v6->fields.mMapCtrl_SpotInfo) == 0LL )
    {
      sub_B170D4();
    }
    v7->fields.touchType = 1;
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
  struct GiftEntity_o *DataById; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  const MethodInfo *v36; // x2
  struct EventCooltimeRewardEntity_o *cooltimeRewardEntity; // x8
  const MethodInfo *v38; // x2
  const MethodInfo *v39; // x1

  if ( (byte_40FADA7 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_GiftMaster___, userCooltimeRewardEntity);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    byte_40FADA7 = 1;
  }
  if ( userCooltimeRewardEntity )
  {
    EventCooltimeRewardEntity = UserEventCooltimeRewardEntity__GetEventCooltimeRewardEntity(
                                  userCooltimeRewardEntity,
                                  0LL);
    this->fields.cooltimeRewardEntity = EventCooltimeRewardEntity;
    p_cooltimeRewardEntity = &this->fields.cooltimeRewardEntity;
    sub_B16F98(
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
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.userCooltimeRewardEntity,
        (System_Int32_array **)userCooltimeRewardEntity,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
      this->fields.targetSpot = targetSpot;
      sub_B16F98(
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
      Master_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_GiftMaster___);
      if ( !*p_cooltimeRewardEntity
        || !Master_WarQuestSelectionMaster
        || (DataById = GiftMaster__getDataById(
                         Master_WarQuestSelectionMaster,
                         (*p_cooltimeRewardEntity)->fields.giftId,
                         0LL),
            this->fields.giftEntity = DataById,
            sub_B16F98(
              (BattleServantConfConponent_o *)&this->fields.giftEntity,
              (System_Int32_array **)DataById,
              v30,
              v31,
              v32,
              v33,
              v34,
              v35),
            (cooltimeRewardEntity = this->fields.cooltimeRewardEntity) == 0LL) )
      {
        sub_B170D4();
      }
      SpotCooltimeInfoComponent__SetupBaseUI(this, cooltimeRewardEntity->fields.eventId, v36);
      SpotCooltimeInfoComponent__SetupRewardInfo(this, this->fields.giftEntity, v38);
      SpotCooltimeInfoComponent__UpdateDisp(this, v39);
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
  __int64 v11; // x2
  struct UISprite_array *gaugeLinesSprite; // x23
  __int64 v13; // x8
  unsigned __int64 v14; // x24
  UISprite_o *v15; // x20

  if ( (byte_40FADA8 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    sub_B16FFC(&StringLiteral_22131/*"spot_info_gauge_base"*/, v5);
    sub_B16FFC(&StringLiteral_22130/*"spot_info_gauge"*/, v6);
    sub_B16FFC(&StringLiteral_22135/*"spot_info_window"*/, v7);
    byte_40FADA8 = 1;
  }
  rewardItemInfoRoot = this->fields.rewardItemInfoRoot;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_28584872(eventId, rewardItemInfoRoot, (System_String_o *)StringLiteral_22135/*"spot_info_window"*/, 0LL);
  AtlasManager__SetEventUI_28584872(eventId, this->fields.rewardQpInfoRoot, (System_String_o *)StringLiteral_22135/*"spot_info_window"*/, 0LL);
  AtlasManager__SetEventUI_28584872(eventId, this->fields.gaugeBaseSprite, (System_String_o *)StringLiteral_22131/*"spot_info_gauge_base"*/, 0LL);
  v9 = AtlasManager__SetEventUI_28584872(eventId, this->fields.gaugeSprite, (System_String_o *)StringLiteral_22130/*"spot_info_gauge"*/, 0LL);
  gaugeLinesSprite = this->fields.gaugeLinesSprite;
  if ( !gaugeLinesSprite )
    sub_B170D4();
  v13 = *(_QWORD *)&gaugeLinesSprite->max_length;
  if ( (int)v13 >= 1 )
  {
    v14 = 0LL;
    do
    {
      if ( v14 >= (unsigned int)v13 )
      {
        sub_B17100(v9, v10, v11);
        sub_B170A0();
      }
      v15 = gaugeLinesSprite->m_Items[v14];
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      v9 = AtlasManager__SetEventUI_28584872(eventId, v15, (System_String_o *)StringLiteral_22131/*"spot_info_gauge_base"*/, 0LL);
      LODWORD(v13) = gaugeLinesSprite->max_length;
      ++v14;
    }
    while ( (__int64)v14 < (int)v13 );
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
  bool isQp; // w0
  UnityEngine_GameObject_o *gaugeLineGridRoot; // x8
  UnityEngine_Component_o *rewardItemInfoRoot; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *rewardQpInfoRoot; // x0
  UnityEngine_GameObject_o *v21; // x0
  UnityEngine_Component_o *v22; // x0
  UnityEngine_GameObject_o *v23; // x0
  UnityEngine_GameObject_o *rewardServantItemRoot; // x0

  if ( (byte_40FADAA & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, giftEntity);
    byte_40FADAA = 1;
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
        isQp = GiftEntity__isQp(giftEntity, 0LL);
        gaugeLineGridRoot = this->fields.gaugeLineGridRoot;
        this->fields.isQpType = isQp;
        if ( !gaugeLineGridRoot )
          goto LABEL_45;
        UnityEngine_GameObject__SetActive(gaugeLineGridRoot, !isQp, 0LL);
        rewardItemInfoRoot = (UnityEngine_Component_o *)this->fields.rewardItemInfoRoot;
        if ( !rewardItemInfoRoot )
          goto LABEL_45;
        gameObject = UnityEngine_Component__get_gameObject(rewardItemInfoRoot, 0LL);
        if ( !gameObject )
          goto LABEL_45;
        UnityEngine_GameObject__SetActive(gameObject, !this->fields.isQpType, 0LL);
        rewardQpInfoRoot = (UnityEngine_Component_o *)this->fields.rewardQpInfoRoot;
        if ( !rewardQpInfoRoot
          || (v21 = UnityEngine_Component__get_gameObject(rewardQpInfoRoot, 0LL)) == 0LL
          || (UnityEngine_GameObject__SetActive(v21, this->fields.isQpType, 0LL),
              (v22 = (UnityEngine_Component_o *)this->fields.rewardItemIcon) == 0LL)
          || (v23 = UnityEngine_Component__get_gameObject(v22, 0LL)) == 0LL
          || (UnityEngine_GameObject__SetActive(v23, !v5, 0LL),
              (rewardServantItemRoot = this->fields.rewardServantItemRoot) == 0LL) )
        {
LABEL_45:
          sub_B170D4();
        }
        UnityEngine_GameObject__SetActive(rewardServantItemRoot, v5, 0LL);
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
  struct UserEventCooltimeRewardEntity_o *userCooltimeRewardEntity; // x8
  struct SrcSpotBasePrefab_o *targetSpot; // x9
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x9
  int64_t v6; // x9
  struct EventCooltimeRewardEntity_o *cooltimeRewardEntity; // x0
  int64_t v8; // x8
  bool GiftsEverySecond; // w0
  struct EventCooltimeRewardEntity_o *v10; // x8
  int64_t v11; // x9
  int64_t *p_receivedRewardUnitNum; // x10
  UnityEngine_GameObject_o *cooltimeObj; // x0
  int32_t RewardUnitTime; // w0
  int64_t upperLimitGiftNum; // x11
  struct GiftEntity_o *giftEntity; // x10
  UnityEngine_GameObject_o *v17; // x0
  UILabel_o *cooltimeLb; // x20
  SpotCooltimeInfoComponent_o *v19; // x0
  const MethodInfo *v20; // x2
  System_String_o *CooltimeText; // x0
  const MethodInfo *v22; // x1
  UILabel_o *v23; // x20
  System_String_o *RewardCountLabel; // x0
  const MethodInfo *v25; // x2
  struct EventCooltimeRewardEntity_o *v26; // x8
  UIBasicSprite_o *gaugeSprite; // x0
  int64_t passTime; // x9
  int64_t cooltime; // x8
  SrcSpotBasePrefab_o *v30; // x0
  System_DateTime_o v31; // 0:x0.8

  if ( (byte_40FADA5 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    byte_40FADA5 = 1;
  }
  userCooltimeRewardEntity = this->fields.userCooltimeRewardEntity;
  if ( !userCooltimeRewardEntity || !this->fields.cooltimeRewardEntity )
    goto LABEL_17;
  targetSpot = this->fields.targetSpot;
  if ( !targetSpot )
    goto LABEL_39;
  mMapCtrl_SpotInfo = targetSpot->fields.mMapCtrl_SpotInfo;
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_39;
  if ( !mMapCtrl_SpotInfo->fields.dispType )
  {
LABEL_17:
    cooltimeObj = this->fields.cooltimeObj;
    if ( cooltimeObj )
    {
      UnityEngine_GameObject__SetActive(cooltimeObj, 0, 0LL);
      return;
    }
    goto LABEL_39;
  }
  this->fields.collectedAt = userCooltimeRewardEntity->fields.collectedAt;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v31.fields.dateData = NetworkManager__getDateTime(0LL).fields.dateData;
  v6 = NetworkManager__getTime_23684488(v31, 0LL) - 1;
  cooltimeRewardEntity = this->fields.cooltimeRewardEntity;
  v8 = (v6 - this->fields.collectedAt) & ~((v6 - this->fields.collectedAt) >> 63);
  this->fields.currentTime = v6;
  this->fields.passTime = v8;
  if ( !cooltimeRewardEntity )
    goto LABEL_39;
  this->fields.remainTime = cooltimeRewardEntity->fields.cooltime - (int)v8;
  if ( cooltimeRewardEntity->fields.cooltime >= 1 && cooltimeRewardEntity->fields.upperLimitGiftNum >= 1 )
  {
    GiftsEverySecond = EventCooltimeRewardEntity__DoesMakeGiftsEverySecond(cooltimeRewardEntity, 0LL);
    v10 = this->fields.cooltimeRewardEntity;
    if ( !v10 )
      goto LABEL_39;
    if ( GiftsEverySecond )
    {
      v11 = this->fields.passTime * v10->fields.upperLimitGiftNum / v10->fields.cooltime;
      p_receivedRewardUnitNum = &this->fields.receivedRewardUnitNum;
      this->fields.receivedRewardUnitNum = v11;
    }
    else
    {
      RewardUnitTime = EventCooltimeRewardEntity__GetRewardUnitTime(this->fields.cooltimeRewardEntity, 0LL);
      v10 = this->fields.cooltimeRewardEntity;
      v11 = this->fields.passTime / RewardUnitTime;
      this->fields.rewardUnitTime = RewardUnitTime;
      this->fields.receivedRewardUnitNum = v11;
      if ( !v10 )
        goto LABEL_39;
      p_receivedRewardUnitNum = &this->fields.receivedRewardUnitNum;
    }
    upperLimitGiftNum = v10->fields.upperLimitGiftNum;
    if ( v11 > upperLimitGiftNum )
    {
      v11 = v10->fields.upperLimitGiftNum;
      *p_receivedRewardUnitNum = upperLimitGiftNum;
    }
    giftEntity = this->fields.giftEntity;
    if ( giftEntity )
    {
      v17 = this->fields.cooltimeObj;
      this->fields.receivedRewardNum = v11 * giftEntity->fields.num;
      this->fields.maxRewardNum = v10->fields.upperLimitGiftNum * giftEntity->fields.num;
      if ( v17 )
      {
        UnityEngine_GameObject__SetActive(v17, 1, 0LL);
        cooltimeLb = this->fields.cooltimeLb;
        CooltimeText = SpotCooltimeInfoComponent__GetCooltimeText(v19, this->fields.remainTime, v20);
        if ( cooltimeLb )
        {
          UILabel__set_text(cooltimeLb, CooltimeText, 0LL);
          v23 = this->fields.isQpType ? this->fields.rewardQpCountInfo : this->fields.rewardItemCountInfo;
          RewardCountLabel = SpotCooltimeInfoComponent__GetRewardCountLabel(this, v22);
          if ( v23 )
          {
            UILabel__set_text(v23, RewardCountLabel, 0LL);
            v26 = this->fields.cooltimeRewardEntity;
            if ( v26 )
            {
              if ( v26->fields.upperLimitGiftNum >= 1 )
              {
                gaugeSprite = (UIBasicSprite_o *)this->fields.gaugeSprite;
                if ( !gaugeSprite )
                  goto LABEL_39;
                passTime = this->fields.passTime;
                cooltime = v26->fields.cooltime;
                if ( passTime > cooltime )
                  passTime = cooltime;
                UIBasicSprite__set_fillAmount(gaugeSprite, (float)passTime / (float)(int)cooltime, 0LL);
              }
              v30 = this->fields.targetSpot;
              if ( v30 )
              {
                SrcSpotBasePrefab__UpdateDisp(v30, 1, v25);
                return;
              }
            }
          }
        }
      }
    }
LABEL_39:
    sub_B170D4();
  }
}


void __fastcall SpotCooltimeInfoComponent__UpdateUserData(SpotCooltimeInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UserEventCooltimeRewardEntity_o **p_userCooltimeRewardEntity; // x20
  UserEventCooltimeRewardMaster_o *Master_WarQuestSelectionMaster; // x0
  System_Int32_array **CurrentLevelEntity; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct EventCooltimeRewardEntity_o *EventCooltimeRewardEntity; // x0
  struct EventCooltimeRewardEntity_o **p_cooltimeRewardEntity; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  GiftMaster_o *v22; // x0
  struct GiftEntity_o *DataById; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  const MethodInfo *v30; // x1

  if ( (byte_40FADA9 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_GiftMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___, v3);
    sub_B16FFC(&DataManager_TypeInfo, v4);
    byte_40FADA9 = 1;
  }
  p_userCooltimeRewardEntity = &this->fields.userCooltimeRewardEntity;
  if ( this->fields.userCooltimeRewardEntity )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (UserEventCooltimeRewardMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
    if ( !*p_userCooltimeRewardEntity || !Master_WarQuestSelectionMaster )
      goto LABEL_18;
    CurrentLevelEntity = (System_Int32_array **)UserEventCooltimeRewardMaster__GetCurrentLevelEntity(
                                                  Master_WarQuestSelectionMaster,
                                                  (*p_userCooltimeRewardEntity)->fields.eventId,
                                                  (*p_userCooltimeRewardEntity)->fields.spotId,
                                                  0LL);
    *p_userCooltimeRewardEntity = (UserEventCooltimeRewardEntity_o *)CurrentLevelEntity;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.userCooltimeRewardEntity,
      CurrentLevelEntity,
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
                                    0LL);
      this->fields.cooltimeRewardEntity = EventCooltimeRewardEntity;
      p_cooltimeRewardEntity = &this->fields.cooltimeRewardEntity;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.cooltimeRewardEntity,
        (System_Int32_array **)EventCooltimeRewardEntity,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
      if ( this->fields.cooltimeRewardEntity )
      {
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        v22 = (GiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_GiftMaster___);
        if ( *p_cooltimeRewardEntity && v22 )
        {
          DataById = GiftMaster__getDataById(v22, (*p_cooltimeRewardEntity)->fields.giftId, 0LL);
          this->fields.giftEntity = DataById;
          sub_B16F98(
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
        sub_B170D4();
      }
    }
  }
}


bool __fastcall SpotCooltimeInfoComponent__get_IsQpType(SpotCooltimeInfoComponent_o *this, const MethodInfo *method)
{
  return this->fields.isQpType;
}