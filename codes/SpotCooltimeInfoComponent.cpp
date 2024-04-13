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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  unsigned int v14; // w20
  unsigned int v15; // w21
  unsigned int v16; // w22
  System_String_o *v17; // x19
  Il2CppObject *v18; // x20
  Il2CppObject *v19; // x21
  Il2CppObject *v20; // x0
  unsigned int v22; // [xsp+Ch] [xbp-34h] BYREF
  unsigned int v23; // [xsp+18h] [xbp-28h] BYREF
  unsigned int v24; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_42E923B & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, remainTime, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_12450/*"SPOT_COOLTIME_REMAIN"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_12448/*"SPOT_COOLTIME_NONE"*/, v11, v12, v13);
    byte_42E923B = 1;
  }
  if ( remainTime <= 0 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    return LocalizationManager__Get((System_String_o *)StringLiteral_12448/*"SPOT_COOLTIME_NONE"*/, 0LL);
  }
  else
  {
    v14 = remainTime / 0xE10u;
    v15 = remainTime % 0xE10u / 0x3C;
    v16 = remainTime % 0x3Cu;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_12450/*"SPOT_COOLTIME_REMAIN"*/, 0LL);
    v24 = v14;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
    v23 = v15;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
    v22 = v16;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
    return System_String__Format_44578852(v17, v18, v19, v20, 0LL);
  }
}


System_String_o *__fastcall SpotCooltimeInfoComponent__GetRewardCountLabel(
        SpotCooltimeInfoComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int64_t remainTime; // x9
  __int64 *v21; // x8
  System_String_o *v22; // x20
  Il2CppObject *v23; // x21
  Il2CppObject *v24; // x0
  int64_t maxRewardNum; // [xsp+0h] [xbp-30h] BYREF
  int64_t receivedRewardNum; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E9240 & 1) == 0 )
  {
    sub_B5D5C4(&long_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_12452/*"SPOT_COOLTIME_REWARD_COUNT"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_12455/*"SPOT_COOLTIME_REWARD_COUNT_QP_MAX"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_12454/*"SPOT_COOLTIME_REWARD_COUNT_QP"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_12453/*"SPOT_COOLTIME_REWARD_COUNT_MAX"*/, v17, v18, v19);
    byte_42E9240 = 1;
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
      v21 = &StringLiteral_12455/*"SPOT_COOLTIME_REWARD_COUNT_QP_MAX"*/;
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v21 = &StringLiteral_12454/*"SPOT_COOLTIME_REWARD_COUNT_QP"*/;
    }
  }
  else if ( remainTime <= 0 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v21 = &StringLiteral_12453/*"SPOT_COOLTIME_REWARD_COUNT_MAX"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v21 = &StringLiteral_12452/*"SPOT_COOLTIME_REWARD_COUNT"*/;
  }
  v22 = LocalizationManager__Get((System_String_o *)*v21, 0LL);
  receivedRewardNum = this->fields.receivedRewardNum;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &receivedRewardNum);
  maxRewardNum = this->fields.maxRewardNum;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &maxRewardNum);
  return System_String__Format_44573324(v22, v23, v24, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *targetSpot; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  struct SrcSpotBasePrefab_o *v8; // x8
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  struct SrcSpotBasePrefab_o *v10; // x8
  struct MapControl_SpotInfo_o *v11; // x8

  if ( (byte_42E9241 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9241 = 1;
  }
  targetSpot = (UnityEngine_Object_o *)this->fields.targetSpot;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Inequality(targetSpot, 0LL, 0LL);
  if ( v6 )
  {
    v8 = this->fields.targetSpot;
    if ( !v8
      || (mMapCtrl_SpotInfo = v8->fields.mMapCtrl_SpotInfo) == 0LL
      || (mMapCtrl_SpotInfo->fields.dispType = 1, (v10 = this->fields.targetSpot) == 0LL)
      || (v11 = v10->fields.mMapCtrl_SpotInfo) == 0LL )
    {
      sub_B5D69C(v6, v7);
    }
    v11->fields.touchType = 1;
  }
}


void __fastcall SpotCooltimeInfoComponent__Setup(
        SpotCooltimeInfoComponent_o *this,
        UserEventCooltimeRewardEntity_o *userCooltimeRewardEntity,
        SrcSpotBasePrefab_o *targetSpot,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  struct EventCooltimeRewardEntity_o *EventCooltimeRewardEntity; // x0
  struct EventCooltimeRewardEntity_o **p_cooltimeRewardEntity; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  GiftMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v31; // x1
  struct GiftEntity_o *DataById; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  const MethodInfo *v39; // x2
  struct EventCooltimeRewardEntity_o *cooltimeRewardEntity; // x8
  const MethodInfo *v41; // x2
  const MethodInfo *v42; // x1

  if ( (byte_42E923C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMaster_GiftMaster___,
      (_DWORD)userCooltimeRewardEntity,
      (_DWORD)targetSpot,
      method);
    sub_B5D5C4(&DataManager_TypeInfo, v7, v8, v9);
    byte_42E923C = 1;
  }
  if ( userCooltimeRewardEntity )
  {
    EventCooltimeRewardEntity = UserEventCooltimeRewardEntity__GetEventCooltimeRewardEntity(
                                  userCooltimeRewardEntity,
                                  0LL);
    this->fields.cooltimeRewardEntity = EventCooltimeRewardEntity;
    p_cooltimeRewardEntity = &this->fields.cooltimeRewardEntity;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.cooltimeRewardEntity,
      (System_Int32_array **)EventCooltimeRewardEntity,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    if ( this->fields.cooltimeRewardEntity )
    {
      this->fields.userCooltimeRewardEntity = userCooltimeRewardEntity;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.userCooltimeRewardEntity,
        (System_Int32_array **)userCooltimeRewardEntity,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
      this->fields.targetSpot = targetSpot;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.targetSpot,
        (System_Int32_array **)targetSpot,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_GiftMaster___);
      if ( !*p_cooltimeRewardEntity
        || !Master_WarQuestSelectionMaster
        || (DataById = GiftMaster__getDataById(
                         Master_WarQuestSelectionMaster,
                         (*p_cooltimeRewardEntity)->fields.giftId,
                         0LL),
            this->fields.giftEntity = DataById,
            sub_B5D560(
              (BattleServantConfConponent_o *)&this->fields.giftEntity,
              (System_Int32_array **)DataById,
              v33,
              v34,
              v35,
              v36,
              v37,
              v38),
            (cooltimeRewardEntity = this->fields.cooltimeRewardEntity) == 0LL) )
      {
        sub_B5D69C(Master_WarQuestSelectionMaster, v31);
      }
      SpotCooltimeInfoComponent__SetupBaseUI(this, cooltimeRewardEntity->fields.eventId, v39);
      SpotCooltimeInfoComponent__SetupRewardInfo(this, this->fields.giftEntity, v41);
      SpotCooltimeInfoComponent__UpdateDisp(this, v42);
    }
  }
}


void __fastcall SpotCooltimeInfoComponent__SetupBaseUI(
        SpotCooltimeInfoComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  UISprite_o *rewardItemInfoRoot; // x21
  _BOOL8 v16; // x0
  __int64 v17; // x1
  struct UISprite_array *gaugeLinesSprite; // x23
  __int64 v19; // x8
  unsigned __int64 v20; // x24
  UISprite_o *v21; // x20
  __int64 v22; // x0

  if ( (byte_42E923D & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_22525/*"spot_info_gauge_base"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_22524/*"spot_info_gauge"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_22529/*"spot_info_window"*/, v12, v13, v14);
    byte_42E923D = 1;
  }
  rewardItemInfoRoot = this->fields.rewardItemInfoRoot;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_31190412(eventId, rewardItemInfoRoot, (System_String_o *)StringLiteral_22529/*"spot_info_window"*/, 0LL);
  AtlasManager__SetEventUI_31190412(eventId, this->fields.rewardQpInfoRoot, (System_String_o *)StringLiteral_22529/*"spot_info_window"*/, 0LL);
  AtlasManager__SetEventUI_31190412(eventId, this->fields.gaugeBaseSprite, (System_String_o *)StringLiteral_22525/*"spot_info_gauge_base"*/, 0LL);
  v16 = AtlasManager__SetEventUI_31190412(
          eventId,
          this->fields.gaugeSprite,
          (System_String_o *)StringLiteral_22524/*"spot_info_gauge"*/,
          0LL);
  gaugeLinesSprite = this->fields.gaugeLinesSprite;
  if ( !gaugeLinesSprite )
    sub_B5D69C(v16, v17);
  v19 = *(_QWORD *)&gaugeLinesSprite->max_length;
  if ( (int)v19 >= 1 )
  {
    v20 = 0LL;
    do
    {
      if ( v20 >= (unsigned int)v19 )
      {
        v22 = sub_B5D6C8(v16);
        sub_B5D668(v22, 0LL);
      }
      v21 = gaugeLinesSprite->m_Items[v20];
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      v16 = AtlasManager__SetEventUI_31190412(eventId, v21, (System_String_o *)StringLiteral_22525/*"spot_info_gauge_base"*/, 0LL);
      LODWORD(v19) = gaugeLinesSprite->max_length;
      ++v20;
    }
    while ( (__int64)v20 < (int)v19 );
  }
}


void __fastcall SpotCooltimeInfoComponent__SetupRewardInfo(
        SpotCooltimeInfoComponent_o *this,
        GiftEntity_o *giftEntity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  bool v6; // w21
  int objectId; // w22
  UISprite_o *rewardServantItemIcon; // x21
  int v9; // w22
  UISprite_o *v10; // x21
  struct UISprite_o *rewardItemIcon; // x21
  int32_t IconImageId; // w22
  UISprite_o *v13; // x0
  int32_t v14; // w1
  int32_t v15; // w21
  struct UISprite_o *v16; // x22
  UnityEngine_Component_o *isQp; // x0
  __int64 v18; // x1
  UnityEngine_GameObject_o *gaugeLineGridRoot; // x8

  if ( (byte_42E923F & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)giftEntity, (_DWORD)method, v3);
    byte_42E923F = 1;
  }
  if ( giftEntity )
  {
    v6 = 0;
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
        v6 = 1;
        goto LABEL_36;
      case 2:
        rewardItemIcon = this->fields.rewardItemIcon;
        IconImageId = GiftEntity__getIconImageId(giftEntity, 0LL);
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        v13 = rewardItemIcon;
        v14 = IconImageId;
        goto LABEL_34;
      case 8:
        v15 = giftEntity->fields.objectId;
        if ( v15 < 1 )
          goto LABEL_35;
        v16 = this->fields.rewardItemIcon;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        v13 = v16;
        v14 = v15;
        goto LABEL_34;
      case 0xB:
        v9 = giftEntity->fields.objectId;
        v10 = this->fields.rewardItemIcon;
        if ( v9 < 1 )
        {
          if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          v14 = 8014;
          v13 = v10;
LABEL_34:
          AtlasManager__SetItem(v13, v14, 0LL);
        }
        else
        {
          if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__SetCommandCodeImage(v10, v9, 0LL);
        }
LABEL_35:
        v6 = 0;
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
          || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)isQp, !v6, 0LL),
              (isQp = (UnityEngine_Component_o *)this->fields.rewardServantItemRoot) == 0LL) )
        {
LABEL_45:
          sub_B5D69C(isQp, v18);
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)isQp, v6, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  SpotCooltimeInfoComponent_o *v4; // x19
  struct UserEventCooltimeRewardEntity_o *userCooltimeRewardEntity; // x8
  struct SrcSpotBasePrefab_o *targetSpot; // x9
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x9
  int64_t v8; // x9
  __int64 v9; // x8
  struct EventCooltimeRewardEntity_o *cooltimeRewardEntity; // x8
  int64_t v11; // x9
  int64_t *p_receivedRewardUnitNum; // x10
  int64_t upperLimitGiftNum; // x11
  struct GiftEntity_o *giftEntity; // x10
  UILabel_o *cooltimeLb; // x20
  SpotCooltimeInfoComponent_o *v16; // x0
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x1
  UILabel_o *v19; // x20
  const MethodInfo *v20; // x2
  struct EventCooltimeRewardEntity_o *v21; // x8
  __int64 passTime; // x9
  __int64 cooltime; // x8
  System_DateTime_o v24; // 0:x0.8

  v4 = this;
  if ( (byte_42E923A & 1) == 0 )
  {
    this = (SpotCooltimeInfoComponent_o *)sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E923A = 1;
  }
  userCooltimeRewardEntity = v4->fields.userCooltimeRewardEntity;
  if ( !userCooltimeRewardEntity || !v4->fields.cooltimeRewardEntity )
    goto LABEL_17;
  targetSpot = v4->fields.targetSpot;
  if ( !targetSpot )
    goto LABEL_39;
  mMapCtrl_SpotInfo = targetSpot->fields.mMapCtrl_SpotInfo;
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_39;
  if ( !mMapCtrl_SpotInfo->fields.dispType )
  {
LABEL_17:
    this = (SpotCooltimeInfoComponent_o *)v4->fields.cooltimeObj;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      return;
    }
    goto LABEL_39;
  }
  v4->fields.collectedAt = userCooltimeRewardEntity->fields.collectedAt;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v24.fields.dateData = NetworkManager__getDateTime(0LL).fields.dateData;
  v8 = NetworkManager__getTime_26076684(v24, 0LL) - 1;
  this = (SpotCooltimeInfoComponent_o *)v4->fields.cooltimeRewardEntity;
  v9 = (v8 - v4->fields.collectedAt) & ~((v8 - v4->fields.collectedAt) >> 63);
  v4->fields.currentTime = v8;
  v4->fields.passTime = v9;
  if ( !this )
    goto LABEL_39;
  v4->fields.remainTime = HIDWORD(this->fields.rewardItemIcon) - (int)v9;
  if ( SHIDWORD(this->fields.rewardItemIcon) >= 1 && SLODWORD(this->fields.rewardServantItemIcon) >= 1 )
  {
    this = (SpotCooltimeInfoComponent_o *)EventCooltimeRewardEntity__DoesMakeGiftsEverySecond(
                                            (EventCooltimeRewardEntity_o *)this,
                                            0LL);
    cooltimeRewardEntity = v4->fields.cooltimeRewardEntity;
    if ( !cooltimeRewardEntity )
      goto LABEL_39;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v11 = v4->fields.passTime * cooltimeRewardEntity->fields.upperLimitGiftNum / cooltimeRewardEntity->fields.cooltime;
      p_receivedRewardUnitNum = &v4->fields.receivedRewardUnitNum;
      v4->fields.receivedRewardUnitNum = v11;
    }
    else
    {
      this = (SpotCooltimeInfoComponent_o *)EventCooltimeRewardEntity__GetRewardUnitTime(
                                              v4->fields.cooltimeRewardEntity,
                                              0LL);
      cooltimeRewardEntity = v4->fields.cooltimeRewardEntity;
      v11 = v4->fields.passTime / (int)this;
      v4->fields.rewardUnitTime = (int)this;
      v4->fields.receivedRewardUnitNum = v11;
      if ( !cooltimeRewardEntity )
        goto LABEL_39;
      p_receivedRewardUnitNum = &v4->fields.receivedRewardUnitNum;
    }
    upperLimitGiftNum = cooltimeRewardEntity->fields.upperLimitGiftNum;
    if ( v11 > upperLimitGiftNum )
    {
      v11 = cooltimeRewardEntity->fields.upperLimitGiftNum;
      *p_receivedRewardUnitNum = upperLimitGiftNum;
    }
    giftEntity = v4->fields.giftEntity;
    if ( giftEntity )
    {
      this = (SpotCooltimeInfoComponent_o *)v4->fields.cooltimeObj;
      v4->fields.receivedRewardNum = v11 * giftEntity->fields.num;
      v4->fields.maxRewardNum = cooltimeRewardEntity->fields.upperLimitGiftNum * giftEntity->fields.num;
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        cooltimeLb = v4->fields.cooltimeLb;
        this = (SpotCooltimeInfoComponent_o *)SpotCooltimeInfoComponent__GetCooltimeText(
                                                v16,
                                                v4->fields.remainTime,
                                                v17);
        if ( cooltimeLb )
        {
          UILabel__set_text(cooltimeLb, (System_String_o *)this, 0LL);
          v19 = v4->fields.isQpType ? v4->fields.rewardQpCountInfo : v4->fields.rewardItemCountInfo;
          this = (SpotCooltimeInfoComponent_o *)SpotCooltimeInfoComponent__GetRewardCountLabel(v4, v18);
          if ( v19 )
          {
            UILabel__set_text(v19, (System_String_o *)this, 0LL);
            v21 = v4->fields.cooltimeRewardEntity;
            if ( v21 )
            {
              if ( v21->fields.upperLimitGiftNum >= 1 )
              {
                this = (SpotCooltimeInfoComponent_o *)v4->fields.gaugeSprite;
                if ( !this )
                  goto LABEL_39;
                passTime = v4->fields.passTime;
                cooltime = v21->fields.cooltime;
                if ( passTime > cooltime )
                  passTime = cooltime;
                UIBasicSprite__set_fillAmount((UIBasicSprite_o *)this, (float)passTime / (float)(int)cooltime, 0LL);
              }
              this = (SpotCooltimeInfoComponent_o *)v4->fields.targetSpot;
              if ( this )
              {
                SrcSpotBasePrefab__UpdateDisp((SrcSpotBasePrefab_o *)this, 1, v20);
                return;
              }
            }
          }
        }
      }
    }
LABEL_39:
    sub_B5D69C(this, method);
  }
}


void __fastcall SpotCooltimeInfoComponent__UpdateUserData(SpotCooltimeInfoComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UserEventCooltimeRewardEntity_o **p_userCooltimeRewardEntity; // x20
  UserEventCooltimeRewardMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v13; // x1
  System_Int32_array **CurrentLevelEntity; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct EventCooltimeRewardEntity_o *EventCooltimeRewardEntity; // x0
  struct EventCooltimeRewardEntity_o **p_cooltimeRewardEntity; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct GiftEntity_o *DataById; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  const MethodInfo *v36; // x1

  if ( (byte_42E923E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_GiftMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___, v5, v6, v7);
    sub_B5D5C4(&DataManager_TypeInfo, v8, v9, v10);
    byte_42E923E = 1;
  }
  p_userCooltimeRewardEntity = &this->fields.userCooltimeRewardEntity;
  if ( this->fields.userCooltimeRewardEntity )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (UserEventCooltimeRewardMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
    if ( !*p_userCooltimeRewardEntity || !Master_WarQuestSelectionMaster )
      goto LABEL_18;
    CurrentLevelEntity = (System_Int32_array **)UserEventCooltimeRewardMaster__GetCurrentLevelEntity(
                                                  Master_WarQuestSelectionMaster,
                                                  (*p_userCooltimeRewardEntity)->fields.eventId,
                                                  (*p_userCooltimeRewardEntity)->fields.spotId,
                                                  0LL);
    *p_userCooltimeRewardEntity = (UserEventCooltimeRewardEntity_o *)CurrentLevelEntity;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.userCooltimeRewardEntity,
      CurrentLevelEntity,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    if ( *p_userCooltimeRewardEntity )
    {
      EventCooltimeRewardEntity = UserEventCooltimeRewardEntity__GetEventCooltimeRewardEntity(
                                    *p_userCooltimeRewardEntity,
                                    0LL);
      this->fields.cooltimeRewardEntity = EventCooltimeRewardEntity;
      p_cooltimeRewardEntity = &this->fields.cooltimeRewardEntity;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.cooltimeRewardEntity,
        (System_Int32_array **)EventCooltimeRewardEntity,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
      if ( this->fields.cooltimeRewardEntity )
      {
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (UserEventCooltimeRewardMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_GiftMaster___);
        if ( *p_cooltimeRewardEntity && Master_WarQuestSelectionMaster )
        {
          DataById = GiftMaster__getDataById(
                       (GiftMaster_o *)Master_WarQuestSelectionMaster,
                       (*p_cooltimeRewardEntity)->fields.giftId,
                       0LL);
          this->fields.giftEntity = DataById;
          sub_B5D560(
            (BattleServantConfConponent_o *)&this->fields.giftEntity,
            (System_Int32_array **)DataById,
            v30,
            v31,
            v32,
            v33,
            v34,
            v35);
          SpotCooltimeInfoComponent__UpdateDisp(this, v36);
          return;
        }
LABEL_18:
        sub_B5D69C(Master_WarQuestSelectionMaster, v13);
      }
    }
  }
}


bool __fastcall SpotCooltimeInfoComponent__get_IsQpType(SpotCooltimeInfoComponent_o *this, const MethodInfo *method)
{
  return this->fields.isQpType;
}