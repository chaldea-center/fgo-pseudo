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


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRecipeListViewItemDraw__SetItem(
        EventRecipeListViewItemDraw_o *this,
        EventRecipeListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  UISprite_o *baseSprite; // x21
  Il2CppObject *v8; // x0
  System_String_o *v9; // x22
  int32_t v10; // w21
  UISprite_o *maskSprite; // x22
  __int64 v12; // x1
  int64_t gameObject; // x0
  __int64 v14; // x2
  struct EventRecipeEntity_o *eventRecipeEntity; // x8
  int32_t v16; // w21
  UISprite_o *itemIcon; // x22
  Il2CppObject *v18; // x0
  System_String_o *v19; // x23
  struct EventRecipeEntity_o *v20; // x8
  UILabel_o *messageTextLabel; // x21
  struct EventRecipeEntity_o *v22; // x8
  const MethodInfo *v23; // x2
  UISprite_o *v24; // x21
  UILabel_o *nameTextLabel; // x21
  struct EventRecipeEntity_o *v26; // x8
  struct System_Single_array *coordinate; // x22
  UILabel_o *restTimeLabel; // x21
  int64_t Time; // x23
  const MethodInfo *v30; // x2
  int32_t currentEventId; // [xsp+4h] [xbp-3Ch] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4352656 & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_EventMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_B70694(&EventRewardRootComponent_TypeInfo);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&StringLiteral_19682/*"icon_{0}"*/);
    sub_B70694(&StringLiteral_22485/*"shop_item_menu_{0}_2"*/);
    sub_B70694(&StringLiteral_22484/*"shop_item_menu_mask"*/);
    sub_B70694(&StringLiteral_13562/*"TIME_REST2_NONE"*/);
    sub_B70694(&StringLiteral_11193/*"RECIPE_EVENT_BOARD_MESSAGE"*/);
    sub_B70694(&StringLiteral_11194/*"RECIPE_EVENT_BOARD_UNRELEASED_NAME"*/);
    byte_4352656 = 1;
  }
  entity = 0LL;
  if ( item && mode )
  {
    baseSprite = this->fields.baseSprite;
    currentEventId = item->fields.currentEventId;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currentEventId, *(_QWORD *)&mode);
    v9 = System_String__Format((System_String_o *)StringLiteral_22485/*"shop_item_menu_{0}_2"*/, v8, 0LL);
    if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
    }
    EventRewardRootComponent__setRewardInfoImg(baseSprite, v9, 0LL);
    v10 = item->fields.currentEventId;
    maskSprite = this->fields.maskSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI_31552376(v10, maskSprite, (System_String_o *)StringLiteral_22484/*"shop_item_menu_mask"*/, 0LL);
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
            goto LABEL_63;
          v16 = item->fields.currentEventId;
          itemIcon = this->fields.itemIcon;
          currentEventId = eventRecipeEntity->fields.iconId;
          v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currentEventId, v14);
          v19 = System_String__Format((System_String_o *)StringLiteral_19682/*"icon_{0}"*/, v18, 0LL);
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          gameObject = AtlasManager__SetEventUI_31552376(v16, itemIcon, v19, 0LL);
          v20 = item->fields.eventRecipeEntity;
          if ( !v20 )
            goto LABEL_63;
          gameObject = (int64_t)this->fields.nameTextLabel;
          if ( !gameObject )
            goto LABEL_63;
          UILabel__set_text((UILabel_o *)gameObject, v20->fields.name, 0LL);
          messageTextLabel = this->fields.messageTextLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11193/*"RECIPE_EVENT_BOARD_MESSAGE"*/, 0LL);
          v22 = item->fields.eventRecipeEntity;
          if ( !v22 )
            goto LABEL_63;
          gameObject = (int64_t)System_String__Format(
                                  (System_String_o *)gameObject,
                                  (Il2CppObject *)v22->fields.name,
                                  0LL);
          if ( !messageTextLabel )
            goto LABEL_63;
          UILabel__set_text(messageTextLabel, (System_String_o *)gameObject, 0LL);
        }
        else
        {
          v24 = this->fields.itemIcon;
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__SetItem(v24, 8007, 0LL);
          nameTextLabel = (UILabel_o *)this->fields.nameTextLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11194/*"RECIPE_EVENT_BOARD_UNRELEASED_NAME"*/, 0LL);
          if ( !nameTextLabel )
            goto LABEL_63;
          UILabel__set_text(nameTextLabel, (System_String_o *)gameObject, 0LL);
          v26 = item->fields.eventRecipeEntity;
          if ( !v26 )
            goto LABEL_63;
          gameObject = (int64_t)this->fields.messageTextLabel;
          if ( !gameObject )
            goto LABEL_63;
          UILabel__set_text((UILabel_o *)gameObject, v26->fields.closedMessage, 0LL);
          gameObject = (int64_t)this->fields.maskSprite;
          if ( !gameObject )
            goto LABEL_63;
          gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_63;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        }
        if ( item->fields.currentEventId < 1 )
          goto LABEL_57;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        gameObject = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_EventMaster___);
        if ( !gameObject )
          goto LABEL_63;
        if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                (DataMasterBase_WarMaster__WarEntity__int__o *)gameObject,
                &entity,
                item->fields.currentEventId,
                (const MethodInfo_21C049C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
        {
LABEL_57:
          EventRecipeListViewItemDraw__SetPriceIconText(this, item, v23);
          EventRecipeListViewItemDraw__SetRewardIconText(this, item, v30);
          return;
        }
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        gameObject = NetworkManager__getTime(0LL);
        if ( entity )
        {
          coordinate = entity->fields.coordinate;
          restTimeLabel = this->fields.restTimeLabel;
          if ( gameObject >= (__int64)coordinate )
          {
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13562/*"TIME_REST2_NONE"*/, 0LL);
            if ( restTimeLabel )
              goto LABEL_56;
          }
          else
          {
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            Time = NetworkManager__getTime(0LL);
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            gameObject = (int64_t)LocalizationManager__GetRestTime2((int64_t)coordinate, Time, 0LL);
            if ( restTimeLabel )
            {
LABEL_56:
              UILabel__set_text(restTimeLabel, (System_String_o *)gameObject, 0LL);
              goto LABEL_57;
            }
          }
        }
      }
    }
LABEL_63:
    sub_B7076C(gameObject, v12);
  }
}


void __fastcall EventRecipeListViewItemDraw__SetItemIcon(
        EventRecipeListViewItemDraw_o *this,
        ItemIconComponent_o *itemIcon,
        CommonConsumeEntity_o *consumeEntity,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4352658 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4352658 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
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
LABEL_12:
      sub_B7076C(v6, v7);
    }
    if ( !itemIcon )
      goto LABEL_12;
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
  struct CommonConsumeEntity_array *v8; // x8
  UIIconLabel_o *priceIconLabel; // x21
  int32_t v10; // w22
  const MethodInfo *v11; // x3
  struct CommonConsumeEntity_array *v12; // x8
  ItemIconComponent_o *eventItemIcon3_3; // x1
  CommonConsumeEntity_o *v14; // x2
  struct CommonConsumeEntity_array *v15; // x8
  UIIconLabel_o *priceIconLabel2_1; // x21
  int32_t v17; // w22
  struct CommonConsumeEntity_array *v18; // x8
  UIIconLabel_o *priceIconLabel2_2; // x21
  int32_t v20; // w22
  const MethodInfo *v21; // x3
  struct CommonConsumeEntity_array *v22; // x8
  struct CommonConsumeEntity_array *v23; // x8
  struct CommonConsumeEntity_array *v24; // x8
  UIIconLabel_o *priceIconLabel3_1; // x21
  int32_t num; // w22
  struct CommonConsumeEntity_array *v27; // x8
  UIIconLabel_o *priceIconLabel3_2; // x21
  int32_t v29; // w22
  struct CommonConsumeEntity_array *v30; // x8
  UIIconLabel_o *priceIconLabel3_3; // x21
  int32_t v32; // w22
  const MethodInfo *v33; // x3
  struct CommonConsumeEntity_array *v34; // x8
  const MethodInfo *v35; // x3
  struct CommonConsumeEntity_array *v36; // x8
  struct CommonConsumeEntity_array *v37; // x8
  __int64 v38; // x0

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
          v24 = item->fields.commonConsumeEntity;
          if ( v24 )
          {
            if ( !v24->max_length )
              goto LABEL_54;
            priceInfo1 = v24->m_Items[0];
            if ( priceInfo1 )
            {
              priceIconLabel3_1 = this->fields.priceIconLabel3_1;
              num = priceInfo1->fields.num;
              priceInfo1 = (CommonConsumeEntity_o *)CommonConsumeEntity__GetUserHasNum(priceInfo1, 0LL);
              if ( priceIconLabel3_1 )
              {
                UIIconLabel__SetPurchaseDecision(priceIconLabel3_1, 27, num, (int32_t)priceInfo1, 0LL);
                v27 = item->fields.commonConsumeEntity;
                if ( v27 )
                {
                  if ( v27->max_length <= 1 )
                    goto LABEL_54;
                  priceInfo1 = v27->m_Items[1];
                  if ( priceInfo1 )
                  {
                    priceIconLabel3_2 = this->fields.priceIconLabel3_2;
                    v29 = priceInfo1->fields.num;
                    priceInfo1 = (CommonConsumeEntity_o *)CommonConsumeEntity__GetUserHasNum(priceInfo1, 0LL);
                    if ( priceIconLabel3_2 )
                    {
                      UIIconLabel__SetPurchaseDecision(priceIconLabel3_2, 27, v29, (int32_t)priceInfo1, 0LL);
                      v30 = item->fields.commonConsumeEntity;
                      if ( v30 )
                      {
                        if ( v30->max_length <= 2 )
                          goto LABEL_54;
                        priceInfo1 = v30->m_Items[2];
                        if ( priceInfo1 )
                        {
                          priceIconLabel3_3 = this->fields.priceIconLabel3_3;
                          v32 = priceInfo1->fields.num;
                          priceInfo1 = (CommonConsumeEntity_o *)CommonConsumeEntity__GetUserHasNum(priceInfo1, 0LL);
                          if ( priceIconLabel3_3 )
                          {
                            UIIconLabel__SetPurchaseDecision(priceIconLabel3_3, 27, v32, (int32_t)priceInfo1, 0LL);
                            v34 = item->fields.commonConsumeEntity;
                            if ( v34 )
                            {
                              if ( !v34->max_length )
                                goto LABEL_54;
                              EventRecipeListViewItemDraw__SetItemIcon(
                                (EventRecipeListViewItemDraw_o *)priceInfo1,
                                this->fields.eventItemIcon3_1,
                                v34->m_Items[0],
                                v33);
                              v36 = item->fields.commonConsumeEntity;
                              if ( v36 )
                              {
                                if ( v36->max_length <= 1 )
                                  goto LABEL_54;
                                EventRecipeListViewItemDraw__SetItemIcon(
                                  (EventRecipeListViewItemDraw_o *)priceInfo1,
                                  this->fields.eventItemIcon3_2,
                                  v36->m_Items[1],
                                  v35);
                                v37 = item->fields.commonConsumeEntity;
                                if ( v37 )
                                {
                                  if ( v37->max_length > 2 )
                                  {
                                    eventItemIcon3_3 = this->fields.eventItemIcon3_3;
                                    v14 = v37->m_Items[2];
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
              }
            }
          }
        }
        goto LABEL_53;
      case 2u:
        priceInfo1 = (CommonConsumeEntity_o *)this->fields.priceInfo2;
        if ( priceInfo1 )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)priceInfo1, 1, 0LL);
          v15 = item->fields.commonConsumeEntity;
          if ( v15 )
          {
            if ( !v15->max_length )
              goto LABEL_54;
            priceInfo1 = v15->m_Items[0];
            if ( priceInfo1 )
            {
              priceIconLabel2_1 = this->fields.priceIconLabel2_1;
              v17 = priceInfo1->fields.num;
              priceInfo1 = (CommonConsumeEntity_o *)CommonConsumeEntity__GetUserHasNum(priceInfo1, 0LL);
              if ( priceIconLabel2_1 )
              {
                UIIconLabel__SetPurchaseDecision(priceIconLabel2_1, 27, v17, (int32_t)priceInfo1, 0LL);
                v18 = item->fields.commonConsumeEntity;
                if ( v18 )
                {
                  if ( v18->max_length <= 1 )
                    goto LABEL_54;
                  priceInfo1 = v18->m_Items[1];
                  if ( priceInfo1 )
                  {
                    priceIconLabel2_2 = this->fields.priceIconLabel2_2;
                    v20 = priceInfo1->fields.num;
                    priceInfo1 = (CommonConsumeEntity_o *)CommonConsumeEntity__GetUserHasNum(priceInfo1, 0LL);
                    if ( priceIconLabel2_2 )
                    {
                      UIIconLabel__SetPurchaseDecision(priceIconLabel2_2, 27, v20, (int32_t)priceInfo1, 0LL);
                      v22 = item->fields.commonConsumeEntity;
                      if ( v22 )
                      {
                        if ( !v22->max_length )
                          goto LABEL_54;
                        EventRecipeListViewItemDraw__SetItemIcon(
                          (EventRecipeListViewItemDraw_o *)priceInfo1,
                          this->fields.eventItemIcon2_1,
                          v22->m_Items[0],
                          v21);
                        v23 = item->fields.commonConsumeEntity;
                        if ( v23 )
                        {
                          if ( v23->max_length > 1 )
                          {
                            eventItemIcon3_3 = this->fields.eventItemIcon2_2;
                            v14 = v23->m_Items[1];
                            goto LABEL_52;
                          }
LABEL_54:
                          v38 = sub_B70798(priceInfo1);
                          sub_B70738(v38, 0LL);
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
        sub_B7076C(priceInfo1, item);
      case 1u:
        priceInfo1 = (CommonConsumeEntity_o *)this->fields.priceInfo1;
        if ( priceInfo1 )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)priceInfo1, 1, 0LL);
          v8 = item->fields.commonConsumeEntity;
          if ( v8 )
          {
            if ( !v8->max_length )
              goto LABEL_54;
            priceInfo1 = v8->m_Items[0];
            if ( priceInfo1 )
            {
              priceIconLabel = this->fields.priceIconLabel;
              v10 = priceInfo1->fields.num;
              priceInfo1 = (CommonConsumeEntity_o *)CommonConsumeEntity__GetUserHasNum(priceInfo1, 0LL);
              if ( priceIconLabel )
              {
                UIIconLabel__SetPurchaseDecision(priceIconLabel, 27, v10, (int32_t)priceInfo1, 0LL);
                v12 = item->fields.commonConsumeEntity;
                if ( v12 )
                {
                  if ( v12->max_length )
                  {
                    eventItemIcon3_3 = this->fields.eventItemIcon;
                    v14 = v12->m_Items[0];
LABEL_52:
                    EventRecipeListViewItemDraw__SetItemIcon(
                      (EventRecipeListViewItemDraw_o *)priceInfo1,
                      eventItemIcon3_3,
                      v14,
                      v11);
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
  int64_t Instance; // x0
  System_String_o *v6; // x1
  struct EventRecipeGiftEntity_array *eventRecipeGiftEntity; // x8
  EventRecipeGiftEntity_o *v8; // x8
  GiftEntity_array *GiftListById; // x21
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x22
  GiftEntity_o *v11; // x8
  UILabel_o *rewardNumTextLabel; // x22
  GiftEntity_o *v13; // x8
  UILabel_o *rewardNumTitleLabel; // x21
  struct EventRecipeGiftEntity_array *v15; // x8
  EventRecipeGiftEntity_o *v16; // x8
  UILabel_o *probabilityLabel; // x19
  __int64 v18; // x0
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4352657 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_11196/*"RECIPE_EVENT_HAVE_NUM"*/);
    sub_B70694(&StringLiteral_350/*"#,0"*/);
    sub_B70694(&StringLiteral_11200/*"RECIPE_EVENT_PROBABILITY_MESSAGE"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    sub_B70694(&StringLiteral_978/*"0"*/);
    byte_4352657 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !item )
    goto LABEL_41;
  eventRecipeGiftEntity = item->fields.eventRecipeGiftEntity;
  if ( !eventRecipeGiftEntity )
    goto LABEL_41;
  if ( !eventRecipeGiftEntity->max_length )
    goto LABEL_42;
  v8 = eventRecipeGiftEntity->m_Items[0];
  if ( !v8 )
    goto LABEL_41;
  if ( !Instance )
    goto LABEL_41;
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, v8->fields.giftId, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !GiftListById )
    goto LABEL_41;
  if ( !GiftListById->max_length )
    goto LABEL_42;
  v11 = GiftListById->m_Items[0];
  if ( !v11 || !MasterData_WarQuestSelectionMaster )
    goto LABEL_41;
  Instance = UserItemMaster__TryGetEntity(
               MasterData_WarQuestSelectionMaster,
               &entity,
               Instance,
               v11->fields.objectId,
               0LL);
  rewardNumTextLabel = this->fields.rewardNumTextLabel;
  if ( (Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_41;
    Instance = (int64_t)System_Int32__ToString_39283984((int)entity + 28, (System_String_o *)StringLiteral_350/*"#,0"*/, 0LL);
    if ( !rewardNumTextLabel )
      goto LABEL_41;
    UILabel__set_text(rewardNumTextLabel, (System_String_o *)Instance, 0LL);
    Instance = (int64_t)this->fields.rewardNumTextLabel;
    if ( !Instance )
      goto LABEL_41;
    UILabel__SetCondensedScale((UILabel_o *)Instance, this->fields.countLabelMaxWidth, 0LL);
  }
  else
  {
    if ( !rewardNumTextLabel )
      goto LABEL_41;
    UILabel__set_text(this->fields.rewardNumTextLabel, (System_String_o *)StringLiteral_978/*"0"*/, 0LL);
  }
  if ( !GiftListById->max_length )
    goto LABEL_42;
  v13 = GiftListById->m_Items[0];
  if ( !v13 )
    goto LABEL_41;
  Instance = (int64_t)this->fields.rewardItemIcon;
  if ( !Instance )
    goto LABEL_41;
  ItemIconComponent__SetItem((ItemIconComponent_o *)Instance, v13->fields.objectId, -1, 0LL);
  rewardNumTitleLabel = this->fields.rewardNumTitleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11196/*"RECIPE_EVENT_HAVE_NUM"*/, 0LL);
  if ( !rewardNumTitleLabel )
    goto LABEL_41;
  UILabel__set_text(rewardNumTitleLabel, (System_String_o *)Instance, 0LL);
  v15 = item->fields.eventRecipeGiftEntity;
  if ( !v15 )
    goto LABEL_41;
  if ( !v15->max_length )
  {
LABEL_42:
    v18 = sub_B70798(Instance);
    sub_B70738(v18, 0LL);
  }
  v16 = v15->m_Items[0];
  if ( !v16 )
    goto LABEL_41;
  probabilityLabel = (UILabel_o *)this->fields.probabilityLabel;
  if ( v16->fields.topIconId <= 0 )
  {
    v6 = (System_String_o *)StringLiteral_1/*""*/;
    if ( probabilityLabel )
      goto LABEL_39;
LABEL_41:
    sub_B7076C(Instance, v6);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11200/*"RECIPE_EVENT_PROBABILITY_MESSAGE"*/, 0LL);
  v6 = (System_String_o *)Instance;
  if ( !probabilityLabel )
    goto LABEL_41;
LABEL_39:
  UILabel__set_text(probabilityLabel, v6, 0LL);
}