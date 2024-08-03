void __fastcall EventRecipeListViewItemDraw___ctor(EventRecipeListViewItemDraw_o *this, const MethodInfo *method)
{
  this->fields.countLabelMaxWidth = 50;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventRecipeListViewItemDraw__Awake(EventRecipeListViewItemDraw_o *this, const MethodInfo *method)
{
  ;
}


int32_t __fastcall EventRecipeListViewItemDraw__GetDispMode(int32_t initMode, const MethodInfo *method)
{
  if ( (unsigned int)(initMode - 1) >= 3 )
    return 0;
  return initMode;
}


void __fastcall EventRecipeListViewItemDraw__SetItem(
        EventRecipeListViewItemDraw_o *this,
        EventRecipeListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  UISprite_o *baseSprite; // x21
  Il2CppObject *v21; // x0
  System_String_o *v22; // x22
  int32_t v23; // w21
  UISprite_o *maskSprite; // x22
  int64_t gameObject; // x0
  struct EventRecipeEntity_o *eventRecipeEntity; // x8
  int32_t v27; // w21
  UISprite_o *itemIcon; // x22
  Il2CppObject *v29; // x0
  System_String_o *v30; // x23
  struct EventRecipeEntity_o *v31; // x8
  UILabel_o *messageTextLabel; // x21
  struct EventRecipeEntity_o *v33; // x8
  const MethodInfo *v34; // x2
  UISprite_o *v35; // x21
  UILabel_o *nameTextLabel; // x21
  struct EventRecipeEntity_o *v37; // x8
  void *monitor; // x22
  UILabel_o *restTimeLabel; // x21
  int64_t Time; // x23
  const MethodInfo *v41; // x2
  int32_t currentEventId; // [xsp+4h] [xbp-4Ch] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A0036B & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, item);
    sub_1B640C8(&Method_DataManager_GetMaster_EventMaster___, v7);
    sub_1B640C8(&DataManager_TypeInfo, v8);
    sub_1B640C8(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v9);
    sub_1B640C8(&EventRewardRootComponent_TypeInfo, v10);
    sub_1B640C8(&int_TypeInfo, v11);
    sub_1B640C8(&LocalizationManager_TypeInfo, v12);
    sub_1B640C8(&NetworkManager_TypeInfo, v13);
    sub_1B640C8(&StringLiteral_20118/*"icon_{0}"*/, v14);
    sub_1B640C8(&StringLiteral_23181/*"shop_item_menu_{0}_2"*/, v15);
    sub_1B640C8(&StringLiteral_23180/*"shop_item_menu_mask"*/, v16);
    sub_1B640C8(&StringLiteral_13247/*"TIME_REST2_NONE"*/, v17);
    sub_1B640C8(&StringLiteral_10927/*"RECIPE_EVENT_BOARD_MESSAGE"*/, v18);
    sub_1B640C8(&StringLiteral_10928/*"RECIPE_EVENT_BOARD_UNRELEASED_NAME"*/, v19);
    byte_4A0036B = 1;
  }
  entity = 0LL;
  if ( item && mode )
  {
    baseSprite = this->fields.baseSprite;
    currentEventId = item->fields.currentEventId;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currentEventId);
    v22 = System_String__Format((System_String_o *)StringLiteral_23181/*"shop_item_menu_{0}_2"*/, v21, 0LL);
    if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
    EventRewardRootComponent__setRewardInfoImg(baseSprite, v22, 0LL);
    v23 = item->fields.currentEventId;
    maskSprite = this->fields.maskSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI_37544692(v23, maskSprite, (System_String_o *)StringLiteral_23180/*"shop_item_menu_mask"*/, 0LL);
    gameObject = (int64_t)this->fields.maskSprite;
    if ( gameObject )
    {
      gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        if ( item->fields.isRelease )
        {
          eventRecipeEntity = item->fields.eventRecipeEntity;
          if ( !eventRecipeEntity )
            goto LABEL_52;
          v27 = item->fields.currentEventId;
          itemIcon = this->fields.itemIcon;
          currentEventId = eventRecipeEntity->fields.iconId;
          v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currentEventId);
          v30 = System_String__Format((System_String_o *)StringLiteral_20118/*"icon_{0}"*/, v29, 0LL);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          gameObject = AtlasManager__SetEventUI_37544692(v27, itemIcon, v30, 0LL);
          v31 = item->fields.eventRecipeEntity;
          if ( !v31 )
            goto LABEL_52;
          gameObject = (int64_t)this->fields.nameTextLabel;
          if ( !gameObject )
            goto LABEL_52;
          UILabel__set_text((UILabel_o *)gameObject, v31->fields.name, 0LL);
          messageTextLabel = this->fields.messageTextLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10927/*"RECIPE_EVENT_BOARD_MESSAGE"*/, 0LL);
          v33 = item->fields.eventRecipeEntity;
          if ( !v33 )
            goto LABEL_52;
          gameObject = (int64_t)System_String__Format(
                                  (System_String_o *)gameObject,
                                  (Il2CppObject *)v33->fields.name,
                                  0LL);
          if ( !messageTextLabel )
            goto LABEL_52;
          UILabel__set_text(messageTextLabel, (System_String_o *)gameObject, 0LL);
        }
        else
        {
          v35 = this->fields.itemIcon;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetItem(v35, 8007, 0LL);
          nameTextLabel = (UILabel_o *)this->fields.nameTextLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10928/*"RECIPE_EVENT_BOARD_UNRELEASED_NAME"*/, 0LL);
          if ( !nameTextLabel )
            goto LABEL_52;
          UILabel__set_text(nameTextLabel, (System_String_o *)gameObject, 0LL);
          v37 = item->fields.eventRecipeEntity;
          if ( !v37 )
            goto LABEL_52;
          gameObject = (int64_t)this->fields.messageTextLabel;
          if ( !gameObject )
            goto LABEL_52;
          UILabel__set_text((UILabel_o *)gameObject, v37->fields.closedMessage, 0LL);
          gameObject = (int64_t)this->fields.maskSprite;
          if ( !gameObject )
            goto LABEL_52;
          gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_52;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        }
        if ( item->fields.currentEventId < 1 )
          goto LABEL_47;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        gameObject = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventMaster___);
        if ( !gameObject )
          goto LABEL_52;
        if ( !DataMasterBase_object__object__int___TryGetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                &entity,
                item->fields.currentEventId,
                (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
        {
LABEL_47:
          EventRecipeListViewItemDraw__SetPriceIconText(this, item, v34);
          EventRecipeListViewItemDraw__SetRewardIconText(this, item, v41);
          return;
        }
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        gameObject = NetworkManager__getTime(0LL);
        if ( entity )
        {
          monitor = entity[6].monitor;
          restTimeLabel = this->fields.restTimeLabel;
          if ( gameObject >= (__int64)monitor )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13247/*"TIME_REST2_NONE"*/, 0LL);
            if ( restTimeLabel )
              goto LABEL_46;
          }
          else
          {
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            Time = NetworkManager__getTime(0LL);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            gameObject = (int64_t)LocalizationManager__GetRestTime2((int64_t)monitor, Time, 0LL);
            if ( restTimeLabel )
            {
LABEL_46:
              UILabel__set_text(restTimeLabel, (System_String_o *)gameObject, 0LL);
              goto LABEL_47;
            }
          }
        }
      }
    }
LABEL_52:
    sub_1B64324(gameObject);
  }
}


void __fastcall EventRecipeListViewItemDraw__SetItemIcon(
        EventRecipeListViewItemDraw_o *this,
        ItemIconComponent_o *itemIcon,
        CommonConsumeEntity_o *consumeEntity,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0

  if ( (byte_4A0036D & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, itemIcon);
    byte_4A0036D = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)itemIcon, 0LL, 0LL);
  if ( !v6 )
  {
    if ( consumeEntity )
    {
      if ( itemIcon )
      {
        ItemIconComponent__SetItem(itemIcon, consumeEntity->fields.objectId, -1, 0LL);
        return;
      }
LABEL_11:
      sub_1B64324(v6);
    }
    if ( !itemIcon )
      goto LABEL_11;
    ItemIconComponent__Clear(itemIcon, 0LL);
  }
}


void __fastcall EventRecipeListViewItemDraw__SetPriceIconText(
        EventRecipeListViewItemDraw_o *this,
        EventRecipeListViewItem_o *item,
        const MethodInfo *method)
{
  CommonConsumeEntity_o *priceInfo1; // x0
  struct CommonConsumeEntity_array *commonConsumeEntity; // x8
  il2cpp_array_size_t max_length; // w8
  __int64 v8; // x1
  struct CommonConsumeEntity_array *v9; // x8
  UIIconLabel_o *priceIconLabel; // x21
  int32_t v11; // w22
  const MethodInfo *v12; // x3
  struct CommonConsumeEntity_array *v13; // x8
  ItemIconComponent_o *eventItemIcon3_3; // x1
  CommonConsumeEntity_o *v15; // x2
  struct CommonConsumeEntity_array *v16; // x8
  UIIconLabel_o *priceIconLabel3_1; // x21
  int32_t num; // w22
  struct CommonConsumeEntity_array *v19; // x8
  UIIconLabel_o *priceIconLabel3_2; // x21
  int32_t v21; // w22
  struct CommonConsumeEntity_array *v22; // x8
  UIIconLabel_o *priceIconLabel3_3; // x21
  int32_t v24; // w22
  const MethodInfo *v25; // x3
  struct CommonConsumeEntity_array *v26; // x8
  const MethodInfo *v27; // x3
  struct CommonConsumeEntity_array *v28; // x8
  struct CommonConsumeEntity_array *v29; // x8
  struct CommonConsumeEntity_array *v30; // x8
  UIIconLabel_o *priceIconLabel2_1; // x21
  int32_t v32; // w22
  struct CommonConsumeEntity_array *v33; // x8
  UIIconLabel_o *priceIconLabel2_2; // x21
  int32_t v35; // w22
  const MethodInfo *v36; // x3
  struct CommonConsumeEntity_array *v37; // x8
  struct CommonConsumeEntity_array *v38; // x8

  priceInfo1 = (CommonConsumeEntity_o *)this->fields.priceInfo1;
  if ( !priceInfo1 )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)priceInfo1, 0, 0LL);
  priceInfo1 = (CommonConsumeEntity_o *)this->fields.priceInfo2;
  if ( !priceInfo1 )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)priceInfo1, 0, 0LL);
  priceInfo1 = (CommonConsumeEntity_o *)this->fields.priceInfo3;
  if ( !priceInfo1 )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)priceInfo1, 0, 0LL);
  if ( !item )
    goto LABEL_53;
  commonConsumeEntity = item->fields.commonConsumeEntity;
  if ( commonConsumeEntity )
  {
    max_length = commonConsumeEntity->max_length;
    switch ( max_length )
    {
      case 3u:
        priceInfo1 = (CommonConsumeEntity_o *)this->fields.priceInfo3;
        if ( priceInfo1 )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)priceInfo1, 1, 0LL);
          v16 = item->fields.commonConsumeEntity;
          if ( v16 )
          {
            if ( !v16->max_length )
              goto LABEL_54;
            priceInfo1 = v16->m_Items[0];
            if ( priceInfo1 )
            {
              priceIconLabel3_1 = this->fields.priceIconLabel3_1;
              num = priceInfo1->fields.num;
              priceInfo1 = (CommonConsumeEntity_o *)CommonConsumeEntity__GetUserHasNum(priceInfo1, 0LL);
              if ( priceIconLabel3_1 )
              {
                UIIconLabel__SetPurchaseDecision(priceIconLabel3_1, 27, num, (int32_t)priceInfo1, 0LL);
                v19 = item->fields.commonConsumeEntity;
                if ( v19 )
                {
                  if ( v19->max_length <= 1 )
                    goto LABEL_54;
                  priceInfo1 = v19->m_Items[1];
                  if ( priceInfo1 )
                  {
                    priceIconLabel3_2 = this->fields.priceIconLabel3_2;
                    v21 = priceInfo1->fields.num;
                    priceInfo1 = (CommonConsumeEntity_o *)CommonConsumeEntity__GetUserHasNum(priceInfo1, 0LL);
                    if ( priceIconLabel3_2 )
                    {
                      UIIconLabel__SetPurchaseDecision(priceIconLabel3_2, 27, v21, (int32_t)priceInfo1, 0LL);
                      v22 = item->fields.commonConsumeEntity;
                      if ( v22 )
                      {
                        if ( v22->max_length <= 2 )
                          goto LABEL_54;
                        priceInfo1 = v22->m_Items[2];
                        if ( priceInfo1 )
                        {
                          priceIconLabel3_3 = this->fields.priceIconLabel3_3;
                          v24 = priceInfo1->fields.num;
                          priceInfo1 = (CommonConsumeEntity_o *)CommonConsumeEntity__GetUserHasNum(priceInfo1, 0LL);
                          if ( priceIconLabel3_3 )
                          {
                            UIIconLabel__SetPurchaseDecision(priceIconLabel3_3, 27, v24, (int32_t)priceInfo1, 0LL);
                            v26 = item->fields.commonConsumeEntity;
                            if ( v26 )
                            {
                              if ( !v26->max_length )
                                goto LABEL_54;
                              EventRecipeListViewItemDraw__SetItemIcon(
                                (EventRecipeListViewItemDraw_o *)priceInfo1,
                                this->fields.eventItemIcon3_1,
                                v26->m_Items[0],
                                v25);
                              v28 = item->fields.commonConsumeEntity;
                              if ( v28 )
                              {
                                if ( v28->max_length <= 1 )
                                  goto LABEL_54;
                                EventRecipeListViewItemDraw__SetItemIcon(
                                  (EventRecipeListViewItemDraw_o *)priceInfo1,
                                  this->fields.eventItemIcon3_2,
                                  v28->m_Items[1],
                                  v27);
                                v29 = item->fields.commonConsumeEntity;
                                if ( v29 )
                                {
                                  if ( v29->max_length > 2 )
                                  {
                                    eventItemIcon3_3 = this->fields.eventItemIcon3_3;
                                    v15 = v29->m_Items[2];
                                    goto LABEL_52;
                                  }
LABEL_54:
                                  sub_1B6432C(priceInfo1, v8);
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
LABEL_53:
        sub_1B64324(priceInfo1);
      case 2u:
        priceInfo1 = (CommonConsumeEntity_o *)this->fields.priceInfo2;
        if ( priceInfo1 )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)priceInfo1, 1, 0LL);
          v30 = item->fields.commonConsumeEntity;
          if ( v30 )
          {
            if ( !v30->max_length )
              goto LABEL_54;
            priceInfo1 = v30->m_Items[0];
            if ( priceInfo1 )
            {
              priceIconLabel2_1 = this->fields.priceIconLabel2_1;
              v32 = priceInfo1->fields.num;
              priceInfo1 = (CommonConsumeEntity_o *)CommonConsumeEntity__GetUserHasNum(priceInfo1, 0LL);
              if ( priceIconLabel2_1 )
              {
                UIIconLabel__SetPurchaseDecision(priceIconLabel2_1, 27, v32, (int32_t)priceInfo1, 0LL);
                v33 = item->fields.commonConsumeEntity;
                if ( v33 )
                {
                  if ( v33->max_length <= 1 )
                    goto LABEL_54;
                  priceInfo1 = v33->m_Items[1];
                  if ( priceInfo1 )
                  {
                    priceIconLabel2_2 = this->fields.priceIconLabel2_2;
                    v35 = priceInfo1->fields.num;
                    priceInfo1 = (CommonConsumeEntity_o *)CommonConsumeEntity__GetUserHasNum(priceInfo1, 0LL);
                    if ( priceIconLabel2_2 )
                    {
                      UIIconLabel__SetPurchaseDecision(priceIconLabel2_2, 27, v35, (int32_t)priceInfo1, 0LL);
                      v37 = item->fields.commonConsumeEntity;
                      if ( v37 )
                      {
                        if ( !v37->max_length )
                          goto LABEL_54;
                        EventRecipeListViewItemDraw__SetItemIcon(
                          (EventRecipeListViewItemDraw_o *)priceInfo1,
                          this->fields.eventItemIcon2_1,
                          v37->m_Items[0],
                          v36);
                        v38 = item->fields.commonConsumeEntity;
                        if ( v38 )
                        {
                          if ( v38->max_length > 1 )
                          {
                            eventItemIcon3_3 = this->fields.eventItemIcon2_2;
                            v15 = v38->m_Items[1];
                            goto LABEL_52;
                          }
                          goto LABEL_54;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto LABEL_53;
      case 1u:
        priceInfo1 = (CommonConsumeEntity_o *)this->fields.priceInfo1;
        if ( priceInfo1 )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)priceInfo1, 1, 0LL);
          v9 = item->fields.commonConsumeEntity;
          if ( v9 )
          {
            if ( !v9->max_length )
              goto LABEL_54;
            priceInfo1 = v9->m_Items[0];
            if ( priceInfo1 )
            {
              priceIconLabel = this->fields.priceIconLabel;
              v11 = priceInfo1->fields.num;
              priceInfo1 = (CommonConsumeEntity_o *)CommonConsumeEntity__GetUserHasNum(priceInfo1, 0LL);
              if ( priceIconLabel )
              {
                UIIconLabel__SetPurchaseDecision(priceIconLabel, 27, v11, (int32_t)priceInfo1, 0LL);
                v13 = item->fields.commonConsumeEntity;
                if ( v13 )
                {
                  if ( v13->max_length )
                  {
                    eventItemIcon3_3 = this->fields.eventItemIcon;
                    v15 = v13->m_Items[0];
LABEL_52:
                    EventRecipeListViewItemDraw__SetItemIcon(
                      (EventRecipeListViewItemDraw_o *)priceInfo1,
                      eventItemIcon3_3,
                      v15,
                      v12);
                    return;
                  }
                  goto LABEL_54;
                }
              }
            }
          }
        }
        goto LABEL_53;
    }
  }
}


void __fastcall EventRecipeListViewItemDraw__SetRewardIconText(
        EventRecipeListViewItemDraw_o *this,
        EventRecipeListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int64_t Instance; // x0
  __int64 v15; // x1
  struct EventRecipeGiftEntity_array *eventRecipeGiftEntity; // x8
  EventRecipeGiftEntity_o *v17; // x8
  GiftEntity_array *GiftListById; // x21
  Il2CppObject *MasterData_object; // x22
  GiftEntity_o *v20; // x8
  UILabel_o *rewardNumTextLabel; // x22
  GiftEntity_o *v22; // x8
  UILabel_o *rewardNumTitleLabel; // x21
  struct EventRecipeGiftEntity_array *v24; // x8
  EventRecipeGiftEntity_o *v25; // x8
  UILabel_o *probabilityLabel; // x19
  System_String_o *v27; // x1
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A0036C & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_GiftMaster___, item);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserItemMaster___, v5);
    sub_1B640C8(&LocalizationManager_TypeInfo, v6);
    sub_1B640C8(&NetworkManager_TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1B640C8(&StringLiteral_10930/*"RECIPE_EVENT_HAVE_NUM"*/, v9);
    sub_1B640C8(&StringLiteral_430/*"#,0"*/, v10);
    sub_1B640C8(&StringLiteral_10934/*"RECIPE_EVENT_PROBABILITY_MESSAGE"*/, v11);
    sub_1B640C8(&StringLiteral_1/*""*/, v12);
    sub_1B640C8(&StringLiteral_1213/*"0"*/, v13);
    byte_4A0036C = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !item )
    goto LABEL_38;
  eventRecipeGiftEntity = item->fields.eventRecipeGiftEntity;
  if ( !eventRecipeGiftEntity )
    goto LABEL_38;
  if ( !eventRecipeGiftEntity->max_length )
    goto LABEL_39;
  v17 = eventRecipeGiftEntity->m_Items[0];
  if ( !v17 )
    goto LABEL_38;
  if ( !Instance )
    goto LABEL_38;
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, v17->fields.giftId, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !GiftListById )
    goto LABEL_38;
  if ( !GiftListById->max_length )
    goto LABEL_39;
  v20 = GiftListById->m_Items[0];
  if ( !v20 || !MasterData_object )
    goto LABEL_38;
  Instance = UserItemMaster__TryGetEntity(
               (UserItemMaster_o *)MasterData_object,
               &entity,
               Instance,
               v20->fields.objectId,
               0LL);
  rewardNumTextLabel = this->fields.rewardNumTextLabel;
  if ( (Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_38;
    Instance = (int64_t)System_Int32__ToString_62180668((int)entity + 28, (System_String_o *)StringLiteral_430/*"#,0"*/, 0LL);
    if ( !rewardNumTextLabel )
      goto LABEL_38;
    UILabel__set_text(rewardNumTextLabel, (System_String_o *)Instance, 0LL);
    Instance = (int64_t)this->fields.rewardNumTextLabel;
    if ( !Instance )
      goto LABEL_38;
    UILabel__SetCondensedScale((UILabel_o *)Instance, this->fields.countLabelMaxWidth, 0LL);
  }
  else
  {
    if ( !rewardNumTextLabel )
      goto LABEL_38;
    UILabel__set_text(this->fields.rewardNumTextLabel, (System_String_o *)StringLiteral_1213/*"0"*/, 0LL);
  }
  if ( !GiftListById->max_length )
    goto LABEL_39;
  v22 = GiftListById->m_Items[0];
  if ( !v22 )
    goto LABEL_38;
  Instance = (int64_t)this->fields.rewardItemIcon;
  if ( !Instance )
    goto LABEL_38;
  ItemIconComponent__SetItem((ItemIconComponent_o *)Instance, v22->fields.objectId, -1, 0LL);
  rewardNumTitleLabel = this->fields.rewardNumTitleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10930/*"RECIPE_EVENT_HAVE_NUM"*/, 0LL);
  if ( !rewardNumTitleLabel )
    goto LABEL_38;
  UILabel__set_text(rewardNumTitleLabel, (System_String_o *)Instance, 0LL);
  v24 = item->fields.eventRecipeGiftEntity;
  if ( !v24 )
    goto LABEL_38;
  if ( !v24->max_length )
LABEL_39:
    sub_1B6432C(Instance, v15);
  v25 = v24->m_Items[0];
  if ( !v25 )
    goto LABEL_38;
  probabilityLabel = (UILabel_o *)this->fields.probabilityLabel;
  if ( v25->fields.topIconId <= 0 )
  {
    v27 = (System_String_o *)StringLiteral_1/*""*/;
    if ( probabilityLabel )
      goto LABEL_36;
LABEL_38:
    sub_1B64324(Instance);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10934/*"RECIPE_EVENT_PROBABILITY_MESSAGE"*/, 0LL);
  v27 = (System_String_o *)Instance;
  if ( !probabilityLabel )
    goto LABEL_38;
LABEL_36:
  UILabel__set_text(probabilityLabel, v27, 0LL);
}