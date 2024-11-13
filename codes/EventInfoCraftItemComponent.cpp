void __fastcall EventInfoCraftItemComponent___ctor(EventInfoCraftItemComponent_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  int64_t v15; // x1
  int64_t v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x1
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7

  if ( (byte_4B16A41 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19361/*"event_craft_{0}01"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_20517/*"img_craft_reward_bg_1"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_20347/*"icon_craft_reward"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_20519/*"img_craft_reward_frame_1"*/, v13, v14);
    byte_4B16A41 = 1;
  }
  v15 = StringLiteral_19361/*"event_craft_{0}01"*/;
  this->fields.bgSpriteName = (struct System_String_o *)StringLiteral_19361/*"event_craft_{0}01"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.bgSpriteName, v15, v2, v3, v4, v5, v6, v7);
  v16 = StringLiteral_20517/*"img_craft_reward_bg_1"*/;
  this->fields.rewardBgSpriteName = (struct System_String_o *)StringLiteral_20517/*"img_craft_reward_bg_1"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.rewardBgSpriteName, v16, v17, v18, v19, v20, v21, v22);
  v23 = StringLiteral_20519/*"img_craft_reward_frame_1"*/;
  this->fields.rewardFrameSpriteName = (struct System_String_o *)StringLiteral_20519/*"img_craft_reward_frame_1"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.rewardFrameSpriteName, v23, v24, v25, v26, v27, v28, v29);
  v30 = StringLiteral_20347/*"icon_craft_reward"*/;
  this->fields.rewardHeaderSpriteName = (struct System_String_o *)StringLiteral_20347/*"icon_craft_reward"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.rewardHeaderSpriteName, v30, v31, v32, v33, v34, v35, v36);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventInfoCraftItemComponent__SetCraftInfo(
        EventInfoCraftItemComponent_o *this,
        EventTradeGoodsEntity_o *eventTradeGoodsEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Object_o *craftNameLabel; // x21
  UILabel_o *RestTimeInFormat; // x0
  __int64 v15; // x1
  UnityEngine_Object_o *timeRequiredCraft; // x21
  UILabel_o *v17; // x21
  int64_t tradeTime; // x22
  System_String_o *v19; // x0
  struct EventTradePriceInfo_array *priceInfos; // x22
  __int64 v21; // x8
  CommonConsumeEntity_array *v22; // x19
  unsigned __int64 i; // x24
  UnityEngine_Object_o *v24; // x20
  UnityEngine_GameObject_o *gameObject; // x21

  if ( (byte_4B16A3E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_CommonConsumeMaster___, eventTradeGoodsEntity, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_13467/*"TIME_FORMAT_1"*/, v11, v12);
    byte_4B16A3E = 1;
  }
  craftNameLabel = (UnityEngine_Object_o *)this->fields.craftNameLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, eventTradeGoodsEntity);
  RestTimeInFormat = (UILabel_o *)UnityEngine_Object__op_Inequality(craftNameLabel, 0LL, 0LL);
  if ( ((unsigned __int8)RestTimeInFormat & 1) != 0 )
  {
    if ( !eventTradeGoodsEntity )
      goto LABEL_34;
    RestTimeInFormat = this->fields.craftNameLabel;
    if ( !RestTimeInFormat )
      goto LABEL_34;
    UILabel__set_text(RestTimeInFormat, eventTradeGoodsEntity->fields.name, 0LL);
  }
  timeRequiredCraft = (UnityEngine_Object_o *)this->fields.timeRequiredCraft;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  RestTimeInFormat = (UILabel_o *)UnityEngine_Object__op_Inequality(timeRequiredCraft, 0LL, 0LL);
  if ( ((unsigned __int8)RestTimeInFormat & 1) != 0 )
  {
    if ( !eventTradeGoodsEntity )
      goto LABEL_34;
    v17 = this->fields.timeRequiredCraft;
    tradeTime = eventTradeGoodsEntity->fields.tradeTime;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15);
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_13467/*"TIME_FORMAT_1"*/, 0LL);
    RestTimeInFormat = (UILabel_o *)LocalizationManager__GetRestTimeInFormat(tradeTime, 0LL, v19, 0LL);
    if ( !v17 )
LABEL_34:
      sub_1BCAA3C(RestTimeInFormat, v15);
    UILabel__set_text(v17, (System_String_o *)RestTimeInFormat, 0LL);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v15);
  RestTimeInFormat = (UILabel_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  if ( !eventTradeGoodsEntity )
    goto LABEL_34;
  if ( !RestTimeInFormat )
    goto LABEL_34;
  RestTimeInFormat = (UILabel_o *)CommonConsumeMaster__GetSortedEntityList(
                                    (CommonConsumeMaster_o *)RestTimeInFormat,
                                    eventTradeGoodsEntity->fields.commonConsumeId,
                                    0LL);
  priceInfos = this->fields.priceInfos;
  if ( !priceInfos )
    goto LABEL_34;
  v21 = *(_QWORD *)&priceInfos->max_length;
  if ( (int)v21 >= 1 )
  {
    v22 = (CommonConsumeEntity_array *)RestTimeInFormat;
    for ( i = 0LL; (__int64)i < (int)v21; ++i )
    {
      if ( i >= (unsigned int)v21 )
        sub_1BCAA44(RestTimeInFormat, v15);
      v24 = (UnityEngine_Object_o *)priceInfos->m_Items[i];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
      RestTimeInFormat = (UILabel_o *)UnityEngine_Object__op_Equality(v24, 0LL, 0LL);
      if ( ((unsigned __int8)RestTimeInFormat & 1) == 0 )
      {
        if ( !v24 )
          goto LABEL_34;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v24, 0LL);
        RestTimeInFormat = (UILabel_o *)EventTradePriceInfo__get_DisplayCount((EventTradePriceInfo_o *)v24, 0LL);
        if ( !v22 || !gameObject )
          goto LABEL_34;
        UnityEngine_GameObject__SetActive(gameObject, (_DWORD)RestTimeInFormat == v22->max_length, 0LL);
        EventTradePriceInfo__SetPriceInfo((EventTradePriceInfo_o *)v24, v22, 0, 0LL);
      }
      LODWORD(v21) = priceInfos->max_length;
    }
  }
}


void __fastcall EventInfoCraftItemComponent__SetEventSprite(
        EventInfoCraftItemComponent_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *v12; // x0
  __int64 v13; // x1
  System_String_o *v14; // x21
  int32_t v15; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B16A40 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, sprite, spriteName);
    sub_1BCA7E0(&int_TypeInfo, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    byte_4B16A40 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, sprite);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0LL, 0LL) )
  {
    v15 = eventId;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
    v14 = System_String__Format(spriteName, v12, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v13);
    AtlasManager__SetEventUI_38574572(eventId, sprite, v14, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoCraftItemComponent__SetGiftInfo(
        EventInfoCraftItemComponent_o *this,
        int32_t giftId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  GiftMaster_o *Master_object; // x0
  ItemEntity_o *v12; // x1
  GiftEntity_array *GiftListById; // x0
  __int64 v14; // x1
  GiftEntity_array *v15; // x20
  GiftEntity_o *v16; // x8
  Il2CppObject *Entity; // x0

  if ( (byte_4B16A3F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_GiftMaster___, *(_QWORD *)&giftId, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ItemMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v9, v10);
    byte_4B16A3F = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&giftId);
  Master_object = (GiftMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GiftMaster___);
  if ( !Master_object )
    goto LABEL_17;
  GiftListById = GiftMaster__GetGiftListById(Master_object, giftId, 0LL);
  if ( GiftListById )
  {
    v15 = GiftListById;
    if ( *(_QWORD *)&GiftListById->max_length )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v14);
      Master_object = (GiftMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ItemMaster___);
      if ( !v15->max_length )
        sub_1BCAA44(Master_object, v12);
      v16 = v15->m_Items[0];
      if ( !v16 || !Master_object )
        goto LABEL_17;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                 v16->fields.objectId,
                 (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( Entity )
      {
        v12 = (ItemEntity_o *)Entity;
        Master_object = (GiftMaster_o *)this->fields.itemIconComponent;
        if ( Master_object )
        {
          ItemIconComponent__SetItem_38851684((ItemIconComponent_o *)Master_object, v12, -1, 0LL);
          return;
        }
LABEL_17:
        sub_1BCAA3C(Master_object, v12);
      }
    }
  }
}


void __fastcall EventInfoCraftItemComponent__Setup(
        EventInfoCraftItemComponent_o *this,
        EventTradeGoodsEntity_o *eventTradeGoodsEntity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  int32_t eventId; // w21
  EventInfoCraftItemComponent_o *v7; // x0
  const MethodInfo *v8; // x4
  EventInfoCraftItemComponent_o *v9; // x0
  const MethodInfo *v10; // x4
  EventInfoCraftItemComponent_o *v11; // x0
  const MethodInfo *v12; // x4
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2

  if ( eventTradeGoodsEntity )
  {
    eventId = eventTradeGoodsEntity->fields.eventId;
    EventInfoCraftItemComponent__SetEventSprite(this, this->fields.bgSprite, this->fields.bgSpriteName, eventId, v3);
    EventInfoCraftItemComponent__SetEventSprite(
      v7,
      this->fields.rewardBgSprite,
      this->fields.rewardBgSpriteName,
      eventId,
      v8);
    EventInfoCraftItemComponent__SetEventSprite(
      v9,
      this->fields.rewardFrameSprite,
      this->fields.rewardFrameSpriteName,
      eventId,
      v10);
    EventInfoCraftItemComponent__SetEventSprite(
      v11,
      this->fields.rewardHeaderSprite,
      this->fields.rewardHeaderSpriteName,
      eventId,
      v12);
    EventInfoCraftItemComponent__SetCraftInfo(this, eventTradeGoodsEntity, v13);
    EventInfoCraftItemComponent__SetGiftInfo(this, eventTradeGoodsEntity->fields.giftId, v14);
  }
}