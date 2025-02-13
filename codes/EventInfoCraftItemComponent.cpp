void __fastcall EventInfoCraftItemComponent___ctor(EventInfoCraftItemComponent_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v9; // x1
  int64_t v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7

  if ( (byte_4BDCD8E & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_19492/*"event_craft_{0}01"*/);
    sub_1C21E38(&StringLiteral_20662/*"img_craft_reward_bg_1"*/);
    sub_1C21E38(&StringLiteral_20488/*"icon_craft_reward"*/);
    sub_1C21E38(&StringLiteral_20664/*"img_craft_reward_frame_1"*/);
    byte_4BDCD8E = 1;
  }
  v9 = StringLiteral_19492/*"event_craft_{0}01"*/;
  this->fields.bgSpriteName = (struct System_String_o *)StringLiteral_19492/*"event_craft_{0}01"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.bgSpriteName, v9, v2, v3, v4, v5, v6, v7);
  v10 = StringLiteral_20662/*"img_craft_reward_bg_1"*/;
  this->fields.rewardBgSpriteName = (struct System_String_o *)StringLiteral_20662/*"img_craft_reward_bg_1"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.rewardBgSpriteName, v10, v11, v12, v13, v14, v15, v16);
  v17 = StringLiteral_20664/*"img_craft_reward_frame_1"*/;
  this->fields.rewardFrameSpriteName = (struct System_String_o *)StringLiteral_20664/*"img_craft_reward_frame_1"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.rewardFrameSpriteName, v17, v18, v19, v20, v21, v22, v23);
  v24 = StringLiteral_20488/*"icon_craft_reward"*/;
  this->fields.rewardHeaderSpriteName = (struct System_String_o *)StringLiteral_20488/*"icon_craft_reward"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.rewardHeaderSpriteName, v24, v25, v26, v27, v28, v29, v30);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventInfoCraftItemComponent__SetCraftInfo(
        EventInfoCraftItemComponent_o *this,
        EventTradeGoodsEntity_o *eventTradeGoodsEntity,
        const MethodInfo *method)
{
  UnityEngine_Object_o *craftNameLabel; // x21
  UILabel_o *RestTimeInFormat; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *timeRequiredCraft; // x21
  UILabel_o *v9; // x21
  int64_t tradeTime; // x22
  System_String_o *v11; // x0
  struct EventTradePriceInfo_array *priceInfos; // x22
  __int64 v13; // x8
  CommonConsumeEntity_array *v14; // x19
  unsigned __int64 i; // x24
  UnityEngine_Object_o *v16; // x20
  UnityEngine_GameObject_o *gameObject; // x21

  if ( (byte_4BDCD8B & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_CommonConsumeMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_13560/*"TIME_FORMAT_1"*/);
    byte_4BDCD8B = 1;
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
    v9 = this->fields.timeRequiredCraft;
    tradeTime = eventTradeGoodsEntity->fields.tradeTime;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_13560/*"TIME_FORMAT_1"*/, 0LL);
    RestTimeInFormat = (UILabel_o *)LocalizationManager__GetRestTimeInFormat(tradeTime, 0LL, v11, 0LL);
    if ( !v9 )
LABEL_34:
      sub_1C22094(RestTimeInFormat, v7);
    UILabel__set_text(v9, (System_String_o *)RestTimeInFormat, 0LL);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  RestTimeInFormat = (UILabel_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
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
  v13 = *(_QWORD *)&priceInfos->max_length;
  if ( (int)v13 >= 1 )
  {
    v14 = (CommonConsumeEntity_array *)RestTimeInFormat;
    for ( i = 0LL; (__int64)i < (int)v13; ++i )
    {
      if ( i >= (unsigned int)v13 )
        sub_1C2209C(RestTimeInFormat, v7);
      v16 = (UnityEngine_Object_o *)priceInfos->m_Items[i];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      RestTimeInFormat = (UILabel_o *)UnityEngine_Object__op_Equality(v16, 0LL, 0LL);
      if ( ((unsigned __int8)RestTimeInFormat & 1) == 0 )
      {
        if ( !v16 )
          goto LABEL_34;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v16, 0LL);
        RestTimeInFormat = (UILabel_o *)EventTradePriceInfo__get_DisplayCount((EventTradePriceInfo_o *)v16, 0LL);
        if ( !v14 || !gameObject )
          goto LABEL_34;
        UnityEngine_GameObject__SetActive(gameObject, (_DWORD)RestTimeInFormat == v14->max_length, 0LL);
        EventTradePriceInfo__SetPriceInfo((EventTradePriceInfo_o *)v16, v14, 0, 0LL);
      }
      LODWORD(v13) = priceInfos->max_length;
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
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  Il2CppObject *v11; // x0
  System_String_o *v12; // x21
  int32_t v13; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BDCD8D & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDCD8D = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0LL, 0LL) )
  {
    v13 = eventId;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13, v8, v9, v10);
    v12 = System_String__Format(spriteName, v11, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI_39104396(eventId, sprite, v12, 0LL);
  }
}


void __fastcall EventInfoCraftItemComponent__SetGiftInfo(
        EventInfoCraftItemComponent_o *this,
        int32_t giftId,
        const MethodInfo *method)
{
  GiftMaster_o *Master_object; // x0
  ItemEntity_o *v6; // x1
  GiftEntity_array *GiftListById; // x0
  GiftEntity_array *v8; // x20
  GiftEntity_o *v9; // x8
  Il2CppObject *Entity; // x0

  if ( (byte_4BDCD8C & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    byte_4BDCD8C = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (GiftMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_GiftMaster___);
  if ( !Master_object )
    goto LABEL_17;
  GiftListById = GiftMaster__GetGiftListById(Master_object, giftId, 0LL);
  if ( GiftListById )
  {
    v8 = GiftListById;
    if ( *(_QWORD *)&GiftListById->max_length )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (GiftMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ItemMaster___);
      if ( !v8->max_length )
        sub_1C2209C(Master_object, v6);
      v9 = v8->m_Items[0];
      if ( !v9 || !Master_object )
        goto LABEL_17;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                 v9->fields.objectId,
                 (const MethodInfo_325BDC8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( Entity )
      {
        v6 = (ItemEntity_o *)Entity;
        Master_object = (GiftMaster_o *)this->fields.itemIconComponent;
        if ( Master_object )
        {
          ItemIconComponent__SetItem_39383052((ItemIconComponent_o *)Master_object, v6, -1, 1, 0LL);
          return;
        }
LABEL_17:
        sub_1C22094(Master_object, v6);
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