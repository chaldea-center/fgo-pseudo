void __fastcall EventInfoCraftItemComponent___ctor(EventInfoCraftItemComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t v8; // w1
  int32_t v9; // w1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4A4EB15 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_18940/*"event_craft_{0}01"*/, method);
    sub_1B863B8(&StringLiteral_20102/*"img_craft_reward_bg_1"*/, v5);
    sub_1B863B8(&StringLiteral_19920/*"icon_craft_reward"*/, v6);
    sub_1B863B8(&StringLiteral_20104/*"img_craft_reward_frame_1"*/, v7);
    byte_4A4EB15 = 1;
  }
  v8 = StringLiteral_18940/*"event_craft_{0}01"*/;
  this->fields.bgSpriteName = (struct System_String_o *)StringLiteral_18940/*"event_craft_{0}01"*/;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.bgSpriteName, v8, v2, v3);
  v9 = StringLiteral_20102/*"img_craft_reward_bg_1"*/;
  this->fields.rewardBgSpriteName = (struct System_String_o *)StringLiteral_20102/*"img_craft_reward_bg_1"*/;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.rewardBgSpriteName, v9, v10, v11);
  v12 = StringLiteral_20104/*"img_craft_reward_frame_1"*/;
  this->fields.rewardFrameSpriteName = (struct System_String_o *)StringLiteral_20104/*"img_craft_reward_frame_1"*/;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.rewardFrameSpriteName, v12, v13, v14);
  v15 = StringLiteral_19920/*"icon_craft_reward"*/;
  this->fields.rewardHeaderSpriteName = (struct System_String_o *)StringLiteral_19920/*"icon_craft_reward"*/;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.rewardHeaderSpriteName, v15, v16, v17);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventInfoCraftItemComponent__SetCraftInfo(
        EventInfoCraftItemComponent_o *this,
        EventTradeGoodsEntity_o *eventTradeGoodsEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *craftNameLabel; // x21
  UILabel_o *RestTimeInFormat; // x0
  __int64 v11; // x1
  UnityEngine_Object_o *timeRequiredCraft; // x21
  UILabel_o *v13; // x21
  int64_t tradeTime; // x22
  System_String_o *v15; // x0
  struct EventTradePriceInfo_array *priceInfos; // x22
  __int64 v17; // x8
  CommonConsumeEntity_array *v18; // x19
  unsigned __int64 i; // x24
  UnityEngine_Object_o *v20; // x20
  UnityEngine_GameObject_o *gameObject; // x21

  if ( (byte_4A4EB12 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_CommonConsumeMaster___, eventTradeGoodsEntity);
    sub_1B863B8(&DataManager_TypeInfo, v5);
    sub_1B863B8(&LocalizationManager_TypeInfo, v6);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B863B8(&StringLiteral_13171/*"TIME_FORMAT_1"*/, v8);
    byte_4A4EB12 = 1;
  }
  craftNameLabel = (UnityEngine_Object_o *)this->fields.craftNameLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  RestTimeInFormat = (UILabel_o *)UnityEngine_Object__op_Inequality(timeRequiredCraft, 0LL, 0LL);
  if ( ((unsigned __int8)RestTimeInFormat & 1) != 0 )
  {
    if ( !eventTradeGoodsEntity )
      goto LABEL_34;
    v13 = this->fields.timeRequiredCraft;
    tradeTime = eventTradeGoodsEntity->fields.tradeTime;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_13171/*"TIME_FORMAT_1"*/, 0LL);
    RestTimeInFormat = (UILabel_o *)LocalizationManager__GetRestTimeInFormat(tradeTime, 0LL, v15, 0LL);
    if ( !v13 )
LABEL_34:
      sub_1B86614(RestTimeInFormat, v11);
    UILabel__set_text(v13, (System_String_o *)RestTimeInFormat, 0LL);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  RestTimeInFormat = (UILabel_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
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
  v17 = *(_QWORD *)&priceInfos->max_length;
  if ( (int)v17 >= 1 )
  {
    v18 = (CommonConsumeEntity_array *)RestTimeInFormat;
    for ( i = 0LL; (__int64)i < (int)v17; ++i )
    {
      if ( i >= (unsigned int)v17 )
        sub_1B8661C(RestTimeInFormat, v11);
      v20 = (UnityEngine_Object_o *)priceInfos->m_Items[i];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      RestTimeInFormat = (UILabel_o *)UnityEngine_Object__op_Equality(v20, 0LL, 0LL);
      if ( ((unsigned __int8)RestTimeInFormat & 1) == 0 )
      {
        if ( !v20 )
          goto LABEL_34;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v20, 0LL);
        RestTimeInFormat = (UILabel_o *)EventTradePriceInfo__get_DisplayCount((EventTradePriceInfo_o *)v20, 0LL);
        if ( !v18 || !gameObject )
          goto LABEL_34;
        UnityEngine_GameObject__SetActive(gameObject, (_DWORD)RestTimeInFormat == v18->max_length, 0LL);
        EventTradePriceInfo__SetPriceInfo((EventTradePriceInfo_o *)v20, v18, 0, 0LL);
      }
      LODWORD(v17) = priceInfos->max_length;
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
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  Il2CppObject *v13; // x0
  System_String_o *v14; // x21
  int32_t v15; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A4EB14 & 1) == 0 )
  {
    sub_1B863B8(&AtlasManager_TypeInfo, sprite);
    sub_1B863B8(&int_TypeInfo, v8);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v9);
    byte_4A4EB14 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0LL, 0LL) )
  {
    v15 = eventId;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
    v14 = System_String__Format(spriteName, v13, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI_38815864(eventId, sprite, v14, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoCraftItemComponent__SetGiftInfo(
        EventInfoCraftItemComponent_o *this,
        int32_t giftId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  GiftMaster_o *Master_object; // x0
  ItemEntity_o *v9; // x1
  GiftEntity_array *GiftListById; // x0
  GiftEntity_array *v11; // x20
  GiftEntity_o *v12; // x8
  Il2CppObject *Entity; // x0

  if ( (byte_4A4EB13 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_GiftMaster___, *(_QWORD *)&giftId);
    sub_1B863B8(&Method_DataManager_GetMaster_ItemMaster___, v5);
    sub_1B863B8(&DataManager_TypeInfo, v6);
    sub_1B863B8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v7);
    byte_4A4EB13 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (GiftMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_GiftMaster___);
  if ( !Master_object )
    goto LABEL_17;
  GiftListById = GiftMaster__GetGiftListById(Master_object, giftId, 0LL);
  if ( GiftListById )
  {
    v11 = GiftListById;
    if ( *(_QWORD *)&GiftListById->max_length )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (GiftMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ItemMaster___);
      if ( !v11->max_length )
        sub_1B8661C(Master_object, v9);
      v12 = v11->m_Items[0];
      if ( !v12 || !Master_object )
        goto LABEL_17;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                 v12->fields.objectId,
                 (const MethodInfo_3214280 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( Entity )
      {
        v9 = (ItemEntity_o *)Entity;
        Master_object = (GiftMaster_o *)this->fields.itemIconComponent;
        if ( Master_object )
        {
          ItemIconComponent__SetItem_39095928((ItemIconComponent_o *)Master_object, v9, -1, 1, 0LL);
          return;
        }
LABEL_17:
        sub_1B86614(Master_object, v9);
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