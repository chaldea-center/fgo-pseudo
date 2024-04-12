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


System_String_o *__fastcall SpotCooltimeInfoComponent__GetCooltimeText(
        SpotCooltimeInfoComponent_o *this,
        int32_t remainTime,
        const MethodInfo *method)
{
  unsigned int v4; // w20
  unsigned int v5; // w21
  unsigned int v6; // w22
  System_String_o *v7; // x19
  Il2CppObject *v8; // x20
  Il2CppObject *v9; // x21
  Il2CppObject *v10; // x0
  unsigned int v12; // [xsp+Ch] [xbp-34h] BYREF
  unsigned int v13; // [xsp+18h] [xbp-28h] BYREF
  unsigned int v14; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_42B0A5E & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_12392/*"SPOT_COOLTIME_REMAIN"*/);
    sub_B52984(&StringLiteral_12390/*"SPOT_COOLTIME_NONE"*/);
    byte_42B0A5E = 1;
  }
  if ( remainTime <= 0 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    return LocalizationManager__Get((System_String_o *)StringLiteral_12390/*"SPOT_COOLTIME_NONE"*/, 0LL);
  }
  else
  {
    v4 = remainTime / 0xE10u;
    v5 = remainTime % 0xE10u / 0x3C;
    v6 = remainTime % 0x3Cu;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_12392/*"SPOT_COOLTIME_REMAIN"*/, 0LL);
    v14 = v4;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
    v13 = v5;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13);
    v12 = v6;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12);
    return System_String__Format_44569380(v7, v8, v9, v10, 0LL);
  }
}


System_String_o *__fastcall SpotCooltimeInfoComponent__GetRewardCountLabel(
        SpotCooltimeInfoComponent_o *this,
        const MethodInfo *method)
{
  int64_t remainTime; // x9
  __int64 *v4; // x8
  System_String_o *v5; // x20
  Il2CppObject *v6; // x21
  Il2CppObject *v7; // x0
  int64_t maxRewardNum; // [xsp+0h] [xbp-30h] BYREF
  int64_t receivedRewardNum; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42B0A63 & 1) == 0 )
  {
    sub_B52984(&long_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_12394/*"SPOT_COOLTIME_REWARD_COUNT"*/);
    sub_B52984(&StringLiteral_12397/*"SPOT_COOLTIME_REWARD_COUNT_QP_MAX"*/);
    sub_B52984(&StringLiteral_12396/*"SPOT_COOLTIME_REWARD_COUNT_QP"*/);
    sub_B52984(&StringLiteral_12395/*"SPOT_COOLTIME_REWARD_COUNT_MAX"*/);
    byte_42B0A63 = 1;
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
      v4 = &StringLiteral_12397/*"SPOT_COOLTIME_REWARD_COUNT_QP_MAX"*/;
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v4 = &StringLiteral_12396/*"SPOT_COOLTIME_REWARD_COUNT_QP"*/;
    }
  }
  else if ( remainTime <= 0 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v4 = &StringLiteral_12395/*"SPOT_COOLTIME_REWARD_COUNT_MAX"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v4 = &StringLiteral_12394/*"SPOT_COOLTIME_REWARD_COUNT"*/;
  }
  v5 = LocalizationManager__Get((System_String_o *)*v4, 0LL);
  receivedRewardNum = this->fields.receivedRewardNum;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &receivedRewardNum);
  maxRewardNum = this->fields.maxRewardNum;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &maxRewardNum);
  return System_String__Format_44563852(v5, v6, v7, 0LL);
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

  if ( (byte_42B0A64 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B0A64 = 1;
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
      sub_B52A5C(v4, v5);
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
  struct EventCooltimeRewardEntity_o *EventCooltimeRewardEntity; // x0
  struct EventCooltimeRewardEntity_o **p_cooltimeRewardEntity; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  GiftMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v28; // x1
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

  if ( (byte_42B0A5F & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_GiftMaster___);
    sub_B52984(&DataManager_TypeInfo);
    byte_42B0A5F = 1;
  }
  if ( userCooltimeRewardEntity )
  {
    EventCooltimeRewardEntity = UserEventCooltimeRewardEntity__GetEventCooltimeRewardEntity(
                                  userCooltimeRewardEntity,
                                  0LL);
    this->fields.cooltimeRewardEntity = EventCooltimeRewardEntity;
    p_cooltimeRewardEntity = &this->fields.cooltimeRewardEntity;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.cooltimeRewardEntity,
      (System_Int32_array **)EventCooltimeRewardEntity,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    if ( this->fields.cooltimeRewardEntity )
    {
      this->fields.userCooltimeRewardEntity = userCooltimeRewardEntity;
      sub_B52920(
        (BattleServantConfConponent_o *)&this->fields.userCooltimeRewardEntity,
        (System_Int32_array **)userCooltimeRewardEntity,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
      this->fields.targetSpot = targetSpot;
      sub_B52920(
        (BattleServantConfConponent_o *)&this->fields.targetSpot,
        (System_Int32_array **)targetSpot,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_GiftMaster___);
      if ( !*p_cooltimeRewardEntity
        || !Master_WarQuestSelectionMaster
        || (DataById = GiftMaster__getDataById(
                         Master_WarQuestSelectionMaster,
                         (*p_cooltimeRewardEntity)->fields.giftId,
                         0LL),
            this->fields.giftEntity = DataById,
            sub_B52920(
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
        sub_B52A5C(Master_WarQuestSelectionMaster, v28);
      }
      SpotCooltimeInfoComponent__SetupBaseUI(this, cooltimeRewardEntity->fields.eventId, v36);
      SpotCooltimeInfoComponent__SetupRewardInfo(this, this->fields.giftEntity, v38);
      SpotCooltimeInfoComponent__UpdateDisp(this, v39);
    }
  }
}


void __fastcall SpotCooltimeInfoComponent__SetupBaseUI(
        SpotCooltimeInfoComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  UISprite_o *rewardItemInfoRoot; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  struct UISprite_array *gaugeLinesSprite; // x23
  __int64 v9; // x8
  unsigned __int64 v10; // x24
  UISprite_o *v11; // x20
  __int64 v12; // x0

  if ( (byte_42B0A60 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&StringLiteral_22410/*"spot_info_gauge_base"*/);
    sub_B52984(&StringLiteral_22409/*"spot_info_gauge"*/);
    sub_B52984(&StringLiteral_22414/*"spot_info_window"*/);
    byte_42B0A60 = 1;
  }
  rewardItemInfoRoot = this->fields.rewardItemInfoRoot;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_28377220(eventId, rewardItemInfoRoot, (System_String_o *)StringLiteral_22414/*"spot_info_window"*/, 0LL);
  AtlasManager__SetEventUI_28377220(eventId, this->fields.rewardQpInfoRoot, (System_String_o *)StringLiteral_22414/*"spot_info_window"*/, 0LL);
  AtlasManager__SetEventUI_28377220(eventId, this->fields.gaugeBaseSprite, (System_String_o *)StringLiteral_22410/*"spot_info_gauge_base"*/, 0LL);
  v6 = AtlasManager__SetEventUI_28377220(eventId, this->fields.gaugeSprite, (System_String_o *)StringLiteral_22409/*"spot_info_gauge"*/, 0LL);
  gaugeLinesSprite = this->fields.gaugeLinesSprite;
  if ( !gaugeLinesSprite )
    sub_B52A5C(v6, v7);
  v9 = *(_QWORD *)&gaugeLinesSprite->max_length;
  if ( (int)v9 >= 1 )
  {
    v10 = 0LL;
    do
    {
      if ( v10 >= (unsigned int)v9 )
      {
        v12 = sub_B52A88(v6);
        sub_B52A28(v12, 0LL);
      }
      v11 = gaugeLinesSprite->m_Items[v10];
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      v6 = AtlasManager__SetEventUI_28377220(eventId, v11, (System_String_o *)StringLiteral_22410/*"spot_info_gauge_base"*/, 0LL);
      LODWORD(v9) = gaugeLinesSprite->max_length;
      ++v10;
    }
    while ( (__int64)v10 < (int)v9 );
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

  if ( (byte_42B0A62 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    byte_42B0A62 = 1;
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
          sub_B52A5C(isQp, v17);
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
  if ( (byte_42B0A5D & 1) == 0 )
  {
    this = (SpotCooltimeInfoComponent_o *)sub_B52984(&NetworkManager_TypeInfo);
    byte_42B0A5D = 1;
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
  v6 = NetworkManager__getTime_25741128(v22, 0LL) - 1;
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
    sub_B52A5C(this, method);
  }
}


void __fastcall SpotCooltimeInfoComponent__UpdateUserData(SpotCooltimeInfoComponent_o *this, const MethodInfo *method)
{
  UserEventCooltimeRewardEntity_o **p_userCooltimeRewardEntity; // x20
  UserEventCooltimeRewardMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v5; // x1
  System_Int32_array **CurrentLevelEntity; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct EventCooltimeRewardEntity_o *EventCooltimeRewardEntity; // x0
  struct EventCooltimeRewardEntity_o **p_cooltimeRewardEntity; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct GiftEntity_o *DataById; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  const MethodInfo *v28; // x1

  if ( (byte_42B0A61 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_GiftMaster___);
    sub_B52984(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
    sub_B52984(&DataManager_TypeInfo);
    byte_42B0A61 = 1;
  }
  p_userCooltimeRewardEntity = &this->fields.userCooltimeRewardEntity;
  if ( this->fields.userCooltimeRewardEntity )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (UserEventCooltimeRewardMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
    if ( !*p_userCooltimeRewardEntity || !Master_WarQuestSelectionMaster )
      goto LABEL_18;
    CurrentLevelEntity = (System_Int32_array **)UserEventCooltimeRewardMaster__GetCurrentLevelEntity(
                                                  Master_WarQuestSelectionMaster,
                                                  (*p_userCooltimeRewardEntity)->fields.eventId,
                                                  (*p_userCooltimeRewardEntity)->fields.spotId,
                                                  0LL);
    *p_userCooltimeRewardEntity = (UserEventCooltimeRewardEntity_o *)CurrentLevelEntity;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.userCooltimeRewardEntity,
      CurrentLevelEntity,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    if ( *p_userCooltimeRewardEntity )
    {
      EventCooltimeRewardEntity = UserEventCooltimeRewardEntity__GetEventCooltimeRewardEntity(
                                    *p_userCooltimeRewardEntity,
                                    0LL);
      this->fields.cooltimeRewardEntity = EventCooltimeRewardEntity;
      p_cooltimeRewardEntity = &this->fields.cooltimeRewardEntity;
      sub_B52920(
        (BattleServantConfConponent_o *)&this->fields.cooltimeRewardEntity,
        (System_Int32_array **)EventCooltimeRewardEntity,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
      if ( this->fields.cooltimeRewardEntity )
      {
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (UserEventCooltimeRewardMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_GiftMaster___);
        if ( *p_cooltimeRewardEntity && Master_WarQuestSelectionMaster )
        {
          DataById = GiftMaster__getDataById(
                       (GiftMaster_o *)Master_WarQuestSelectionMaster,
                       (*p_cooltimeRewardEntity)->fields.giftId,
                       0LL);
          this->fields.giftEntity = DataById;
          sub_B52920(
            (BattleServantConfConponent_o *)&this->fields.giftEntity,
            (System_Int32_array **)DataById,
            v22,
            v23,
            v24,
            v25,
            v26,
            v27);
          SpotCooltimeInfoComponent__UpdateDisp(this, v28);
          return;
        }
LABEL_18:
        sub_B52A5C(Master_WarQuestSelectionMaster, v5);
      }
    }
  }
}


bool __fastcall SpotCooltimeInfoComponent__get_IsQpType(SpotCooltimeInfoComponent_o *this, const MethodInfo *method)
{
  return this->fields.isQpType;
}