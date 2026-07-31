void EventRecipeListViewItemDraw___ctor(EventRecipeListViewItemDraw_o *this, const MethodInfo *method)
{
  this->fields.countLabelMaxWidth = 50;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventRecipeListViewItemDraw__Awake(EventRecipeListViewItemDraw_o *this, const MethodInfo *method)
{
  ;
}


int32_t EventRecipeListViewItemDraw__GetDispMode(int32_t initMode, const MethodInfo *method)
{
  if ( (unsigned int)(initMode - 1) >= 3 )
    return 0;
  return initMode;
}


void EventRecipeListViewItemDraw__SetItem(
        EventRecipeListViewItemDraw_o *this,
        EventRecipeListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  UISprite_o *baseSprite; // x21
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  System_String_o *v11; // x22
  __int64 v12; // x1
  __int64 v13; // x2
  int32_t v14; // w21
  UISprite_o *maskSprite; // x22
  __int64 v16; // x1
  int64_t gameObject; // x0
  __int64 v18; // x2
  struct EventRecipeEntity_o *eventRecipeEntity; // x8
  int32_t v20; // w21
  UISprite_o *itemIcon; // x22
  Il2CppObject *v22; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  System_String_o *v25; // x23
  struct EventRecipeEntity_o *v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  UILabel_o *messageTextLabel; // x21
  struct EventRecipeEntity_o *v30; // x8
  __int64 v31; // x1
  const MethodInfo *v32; // x2
  UISprite_o *v33; // x21
  __int64 v34; // x1
  __int64 v35; // x2
  UILabel_o *nameTextLabel; // x21
  struct EventRecipeEntity_o *v37; // x8
  __int64 v38; // x1
  __int64 v39; // x2
  void *monitor; // x22
  UILabel_o *restTimeLabel; // x21
  __int64 v42; // x1
  __int64 v43; // x2
  int64_t Time; // x23
  const MethodInfo *v45; // x2
  int32_t currentEventId; // [xsp+Ch] [xbp-44h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_59328BB & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_EventMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_21FFC50(&EventRewardRootComponent_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_21189/*"icon_{0}"*/);
    sub_21FFC50(&StringLiteral_24631/*"shop_item_menu_{0}_2"*/);
    sub_21FFC50(&StringLiteral_24630/*"shop_item_menu_mask"*/);
    sub_21FFC50(&StringLiteral_13927/*"TIME_REST2_NONE"*/);
    sub_21FFC50(&StringLiteral_11444/*"RECIPE_EVENT_BOARD_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_11445/*"RECIPE_EVENT_BOARD_UNRELEASED_NAME"*/);
    byte_59328BB = 1;
  }
  entity = 0;
  if ( item && mode )
  {
    baseSprite = this->fields.baseSprite;
    currentEventId = item->fields.currentEventId;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &currentEventId);
    v11 = System_String__Format((System_String_o *)StringLiteral_24631/*"shop_item_menu_{0}_2"*/, v8, 0);
    if ( !*(&EventRewardRootComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo, v9, v10);
    EventRewardRootComponent__setRewardInfoImg(baseSprite, v11, 0);
    v14 = item->fields.currentEventId;
    maskSprite = this->fields.maskSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v12, v13);
    AtlasManager__SetEventUI_47538316(v14, maskSprite, (System_String_o *)StringLiteral_24630/*"shop_item_menu_mask"*/, 0);
    gameObject = (int64_t)this->fields.maskSprite;
    if ( gameObject )
    {
      gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
        if ( item->fields.isRelease )
        {
          eventRecipeEntity = item->fields.eventRecipeEntity;
          if ( !eventRecipeEntity )
            goto LABEL_52;
          v20 = item->fields.currentEventId;
          itemIcon = this->fields.itemIcon;
          currentEventId = eventRecipeEntity->fields.iconId;
          v22 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &currentEventId);
          v25 = System_String__Format((System_String_o *)StringLiteral_21189/*"icon_{0}"*/, v22, 0);
          if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v23, v24);
          gameObject = AtlasManager__SetEventUI_47538316(v20, itemIcon, v25, 0);
          v26 = item->fields.eventRecipeEntity;
          if ( !v26 )
            goto LABEL_52;
          gameObject = (int64_t)this->fields.nameTextLabel;
          if ( !gameObject )
            goto LABEL_52;
          UILabel__set_text((UILabel_o *)gameObject, v26->fields.name, 0);
          messageTextLabel = this->fields.messageTextLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v27, v28);
          gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11444/*"RECIPE_EVENT_BOARD_MESSAGE"*/, 0);
          v30 = item->fields.eventRecipeEntity;
          if ( !v30 )
            goto LABEL_52;
          gameObject = (int64_t)System_String__Format(
                                  (System_String_o *)gameObject,
                                  (Il2CppObject *)v30->fields.name,
                                  0);
          if ( !messageTextLabel )
            goto LABEL_52;
          UILabel__set_text(messageTextLabel, (System_String_o *)gameObject, 0);
        }
        else
        {
          v33 = this->fields.itemIcon;
          if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v16, v18);
          AtlasManager__SetItem(v33, 8007, 0);
          nameTextLabel = (UILabel_o *)this->fields.nameTextLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v34, v35);
          gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11445/*"RECIPE_EVENT_BOARD_UNRELEASED_NAME"*/, 0);
          if ( !nameTextLabel )
            goto LABEL_52;
          UILabel__set_text(nameTextLabel, (System_String_o *)gameObject, 0);
          v37 = item->fields.eventRecipeEntity;
          if ( !v37 )
            goto LABEL_52;
          gameObject = (int64_t)this->fields.messageTextLabel;
          if ( !gameObject )
            goto LABEL_52;
          UILabel__set_text((UILabel_o *)gameObject, v37->fields.closedMessage, 0);
          gameObject = (int64_t)this->fields.maskSprite;
          if ( !gameObject )
            goto LABEL_52;
          gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_52;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        }
        if ( item->fields.currentEventId < 1 )
          goto LABEL_47;
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v31, v32);
        gameObject = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventMaster___);
        if ( !gameObject )
          goto LABEL_52;
        if ( !DataMasterBase_object__object__int___TryGetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                &entity,
                item->fields.currentEventId,
                (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
        {
LABEL_47:
          EventRecipeListViewItemDraw__SetPriceIconText(this, item, v32);
          EventRecipeListViewItemDraw__SetRewardIconText(this, item, v45);
          return;
        }
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v38, v32);
        gameObject = NetworkManager__getTime(0);
        if ( entity )
        {
          monitor = entity[6].monitor;
          restTimeLabel = this->fields.restTimeLabel;
          if ( gameObject >= (__int64)monitor )
          {
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16, v39);
            gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13927/*"TIME_REST2_NONE"*/, 0);
            if ( restTimeLabel )
              goto LABEL_46;
          }
          else
          {
            if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v16, v39);
            Time = NetworkManager__getTime(0);
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v42, v43);
            gameObject = (int64_t)LocalizationManager__GetRestTime2((int64_t)monitor, Time, 0);
            if ( restTimeLabel )
            {
LABEL_46:
              UILabel__set_text(restTimeLabel, (System_String_o *)gameObject, 0);
              goto LABEL_47;
            }
          }
        }
      }
    }
LABEL_52:
    sub_21FFECC(gameObject, v16);
  }
}


void EventRecipeListViewItemDraw__SetItemIcon(
        EventRecipeListViewItemDraw_o *this,
        ItemIconComponent_o *itemIcon,
        CommonConsumeEntity_o *consumeEntity,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_59328BD & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59328BD = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, itemIcon, consumeEntity);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)itemIcon, 0, 0);
  if ( !v6 )
  {
    if ( consumeEntity )
    {
      if ( itemIcon )
      {
        ItemIconComponent__SetItem(itemIcon, consumeEntity->fields.objectId, -1, 1, 0);
        return;
      }
LABEL_11:
      sub_21FFECC(v6, v7);
    }
    if ( !itemIcon )
      goto LABEL_11;
    ItemIconComponent__Clear(itemIcon, 0);
  }
}


void EventRecipeListViewItemDraw__SetPriceIconText(
        EventRecipeListViewItemDraw_o *this,
        EventRecipeListViewItem_o *item,
        const MethodInfo *method)
{
  CommonConsumeEntity_o *priceInfo1; // x0
  struct CommonConsumeEntity_array *commonConsumeEntity; // x8
  int max_length; // w8
  struct CommonConsumeEntity_array *v8; // x8
  UIIconLabel_o *priceIconLabel; // x21
  int32_t v10; // w22
  const MethodInfo *v11; // x3
  struct CommonConsumeEntity_array *v12; // x8
  ItemIconComponent_o *eventItemIcon3_3; // x1
  CommonConsumeEntity_o **m_Items; // x8
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

  priceInfo1 = (CommonConsumeEntity_o *)this->fields.priceInfo1;
  if ( !priceInfo1 )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)priceInfo1, 0, 0);
  priceInfo1 = (CommonConsumeEntity_o *)this->fields.priceInfo2;
  if ( !priceInfo1 )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)priceInfo1, 0, 0);
  priceInfo1 = (CommonConsumeEntity_o *)this->fields.priceInfo3;
  if ( !priceInfo1 )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)priceInfo1, 0, 0);
  if ( !item )
    goto LABEL_53;
  commonConsumeEntity = item->fields.commonConsumeEntity;
  if ( commonConsumeEntity )
  {
    max_length = commonConsumeEntity->max_length;
    switch ( max_length )
    {
      case 3:
        priceInfo1 = (CommonConsumeEntity_o *)this->fields.priceInfo3;
        if ( priceInfo1 )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)priceInfo1, 1, 0);
          v24 = item->fields.commonConsumeEntity;
          if ( v24 )
          {
            if ( !LODWORD(v24->max_length) )
              goto LABEL_54;
            priceInfo1 = v24->m_Items[0];
            if ( priceInfo1 )
            {
              priceIconLabel3_1 = this->fields.priceIconLabel3_1;
              num = priceInfo1->fields.num;
              priceInfo1 = (CommonConsumeEntity_o *)CommonConsumeEntity__GetUserHasNum(priceInfo1, 0);
              if ( priceIconLabel3_1 )
              {
                UIIconLabel__SetPurchaseDecision(priceIconLabel3_1, 27, num, (int32_t)priceInfo1, 0);
                v27 = item->fields.commonConsumeEntity;
                if ( v27 )
                {
                  if ( (v27->max_length & 0xFFFFFFFE) == 0 )
                    goto LABEL_54;
                  priceInfo1 = v27->m_Items[1];
                  if ( priceInfo1 )
                  {
                    priceIconLabel3_2 = this->fields.priceIconLabel3_2;
                    v29 = priceInfo1->fields.num;
                    priceInfo1 = (CommonConsumeEntity_o *)CommonConsumeEntity__GetUserHasNum(priceInfo1, 0);
                    if ( priceIconLabel3_2 )
                    {
                      UIIconLabel__SetPurchaseDecision(priceIconLabel3_2, 27, v29, (int32_t)priceInfo1, 0);
                      v30 = item->fields.commonConsumeEntity;
                      if ( v30 )
                      {
                        if ( LODWORD(v30->max_length) <= 2 )
                          goto LABEL_54;
                        priceInfo1 = v30->m_Items[2];
                        if ( priceInfo1 )
                        {
                          priceIconLabel3_3 = this->fields.priceIconLabel3_3;
                          v32 = priceInfo1->fields.num;
                          priceInfo1 = (CommonConsumeEntity_o *)CommonConsumeEntity__GetUserHasNum(priceInfo1, 0);
                          if ( priceIconLabel3_3 )
                          {
                            UIIconLabel__SetPurchaseDecision(priceIconLabel3_3, 27, v32, (int32_t)priceInfo1, 0);
                            v34 = item->fields.commonConsumeEntity;
                            if ( v34 )
                            {
                              if ( !LODWORD(v34->max_length) )
                                goto LABEL_54;
                              EventRecipeListViewItemDraw__SetItemIcon(
                                (EventRecipeListViewItemDraw_o *)priceInfo1,
                                this->fields.eventItemIcon3_1,
                                v34->m_Items[0],
                                v33);
                              v36 = item->fields.commonConsumeEntity;
                              if ( v36 )
                              {
                                if ( (v36->max_length & 0xFFFFFFFE) == 0 )
                                  goto LABEL_54;
                                EventRecipeListViewItemDraw__SetItemIcon(
                                  (EventRecipeListViewItemDraw_o *)priceInfo1,
                                  this->fields.eventItemIcon3_2,
                                  v36->m_Items[1],
                                  v35);
                                v37 = item->fields.commonConsumeEntity;
                                if ( v37 )
                                {
                                  if ( LODWORD(v37->max_length) > 2 )
                                  {
                                    eventItemIcon3_3 = this->fields.eventItemIcon3_3;
                                    m_Items = &v37->m_Items[2];
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
      case 2:
        priceInfo1 = (CommonConsumeEntity_o *)this->fields.priceInfo2;
        if ( priceInfo1 )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)priceInfo1, 1, 0);
          v15 = item->fields.commonConsumeEntity;
          if ( v15 )
          {
            if ( !LODWORD(v15->max_length) )
              goto LABEL_54;
            priceInfo1 = v15->m_Items[0];
            if ( priceInfo1 )
            {
              priceIconLabel2_1 = this->fields.priceIconLabel2_1;
              v17 = priceInfo1->fields.num;
              priceInfo1 = (CommonConsumeEntity_o *)CommonConsumeEntity__GetUserHasNum(priceInfo1, 0);
              if ( priceIconLabel2_1 )
              {
                UIIconLabel__SetPurchaseDecision(priceIconLabel2_1, 27, v17, (int32_t)priceInfo1, 0);
                v18 = item->fields.commonConsumeEntity;
                if ( v18 )
                {
                  if ( (v18->max_length & 0xFFFFFFFE) == 0 )
                    goto LABEL_54;
                  priceInfo1 = v18->m_Items[1];
                  if ( priceInfo1 )
                  {
                    priceIconLabel2_2 = this->fields.priceIconLabel2_2;
                    v20 = priceInfo1->fields.num;
                    priceInfo1 = (CommonConsumeEntity_o *)CommonConsumeEntity__GetUserHasNum(priceInfo1, 0);
                    if ( priceIconLabel2_2 )
                    {
                      UIIconLabel__SetPurchaseDecision(priceIconLabel2_2, 27, v20, (int32_t)priceInfo1, 0);
                      v22 = item->fields.commonConsumeEntity;
                      if ( v22 )
                      {
                        if ( !LODWORD(v22->max_length) )
                          goto LABEL_54;
                        EventRecipeListViewItemDraw__SetItemIcon(
                          (EventRecipeListViewItemDraw_o *)priceInfo1,
                          this->fields.eventItemIcon2_1,
                          v22->m_Items[0],
                          v21);
                        v23 = item->fields.commonConsumeEntity;
                        if ( v23 )
                        {
                          if ( (v23->max_length & 0xFFFFFFFE) != 0 )
                          {
                            eventItemIcon3_3 = this->fields.eventItemIcon2_2;
                            m_Items = &v23->m_Items[1];
                            goto LABEL_52;
                          }
LABEL_54:
                          sub_21FFED4(priceInfo1);
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
        sub_21FFECC(priceInfo1, item);
      case 1:
        priceInfo1 = (CommonConsumeEntity_o *)this->fields.priceInfo1;
        if ( priceInfo1 )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)priceInfo1, 1, 0);
          v8 = item->fields.commonConsumeEntity;
          if ( v8 )
          {
            if ( !LODWORD(v8->max_length) )
              goto LABEL_54;
            priceInfo1 = v8->m_Items[0];
            if ( priceInfo1 )
            {
              priceIconLabel = this->fields.priceIconLabel;
              v10 = priceInfo1->fields.num;
              priceInfo1 = (CommonConsumeEntity_o *)CommonConsumeEntity__GetUserHasNum(priceInfo1, 0);
              if ( priceIconLabel )
              {
                UIIconLabel__SetPurchaseDecision(priceIconLabel, 27, v10, (int32_t)priceInfo1, 0);
                v12 = item->fields.commonConsumeEntity;
                if ( v12 )
                {
                  if ( LODWORD(v12->max_length) )
                  {
                    eventItemIcon3_3 = this->fields.eventItemIcon;
                    m_Items = v12->m_Items;
LABEL_52:
                    EventRecipeListViewItemDraw__SetItemIcon(
                      (EventRecipeListViewItemDraw_o *)priceInfo1,
                      eventItemIcon3_3,
                      *m_Items,
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


void EventRecipeListViewItemDraw__SetRewardIconText(
        EventRecipeListViewItemDraw_o *this,
        EventRecipeListViewItem_o *item,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  System_String_o *v6; // x1
  struct EventRecipeGiftEntity_array *eventRecipeGiftEntity; // x8
  EventRecipeGiftEntity_o *v8; // x8
  GiftEntity_array *GiftListById; // x21
  __int64 v10; // x2
  Il2CppObject *MasterData_object; // x22
  GiftEntity_o *v12; // x8
  UILabel_o *rewardNumTextLabel; // x22
  GiftEntity_o *v14; // x8
  __int64 v15; // x1
  __int64 v16; // x2
  UILabel_o *rewardNumTitleLabel; // x21
  __int64 v18; // x2
  struct EventRecipeGiftEntity_array *v19; // x8
  EventRecipeGiftEntity_o *v20; // x8
  UILabel_o *probabilityLabel; // x19
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_59328BC & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_11447/*"RECIPE_EVENT_HAVE_NUM"*/);
    sub_21FFC50(&StringLiteral_422/*"#,0"*/);
    sub_21FFC50(&StringLiteral_11451/*"RECIPE_EVENT_PROBABILITY_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_1198/*"0"*/);
    byte_59328BC = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !item )
    goto LABEL_42;
  eventRecipeGiftEntity = item->fields.eventRecipeGiftEntity;
  if ( !eventRecipeGiftEntity )
    goto LABEL_42;
  if ( !LODWORD(eventRecipeGiftEntity->max_length) )
    goto LABEL_43;
  v8 = eventRecipeGiftEntity->m_Items[0];
  if ( !v8 )
    goto LABEL_42;
  if ( !Instance )
    goto LABEL_42;
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, v8->fields.giftId, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v10);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v10);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !GiftListById )
    goto LABEL_42;
  if ( !LODWORD(GiftListById->max_length) )
    goto LABEL_43;
  v12 = GiftListById->m_Items[0];
  if ( !v12 || !MasterData_object )
    goto LABEL_42;
  Instance = (DataManager_o *)UserItemMaster__TryGetEntity(
                                (UserItemMaster_o *)MasterData_object,
                                &entity,
                                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                v12->fields.objectId,
                                0);
  rewardNumTextLabel = this->fields.rewardNumTextLabel;
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_42;
    Instance = (DataManager_o *)System_Int32__ToString_76925352(
                                  (int)entity + 28,
                                  (System_String_o *)StringLiteral_422/*"#,0"*/,
                                  0);
    if ( !rewardNumTextLabel )
      goto LABEL_42;
    UILabel__set_text(rewardNumTextLabel, (System_String_o *)Instance, 0);
    Instance = (DataManager_o *)this->fields.rewardNumTextLabel;
    if ( !Instance )
      goto LABEL_42;
    UILabel__SetCondensedScale((UILabel_o *)Instance, this->fields.countLabelMaxWidth, 0, 0);
  }
  else
  {
    if ( !rewardNumTextLabel )
      goto LABEL_42;
    UILabel__set_text(this->fields.rewardNumTextLabel, (System_String_o *)StringLiteral_1198/*"0"*/, 0);
  }
  if ( !LODWORD(GiftListById->max_length) )
    goto LABEL_43;
  v14 = GiftListById->m_Items[0];
  if ( !v14 )
    goto LABEL_42;
  Instance = (DataManager_o *)this->fields.rewardItemIcon;
  if ( !Instance )
    goto LABEL_42;
  ItemIconComponent__SetItem((ItemIconComponent_o *)Instance, v14->fields.objectId, -1, 1, 0);
  rewardNumTitleLabel = this->fields.rewardNumTitleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15, v16);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11447/*"RECIPE_EVENT_HAVE_NUM"*/, 0);
  if ( !rewardNumTitleLabel )
    goto LABEL_42;
  UILabel__set_text(rewardNumTitleLabel, (System_String_o *)Instance, 0);
  v19 = item->fields.eventRecipeGiftEntity;
  if ( !v19 )
    goto LABEL_42;
  if ( !LODWORD(v19->max_length) )
LABEL_43:
    sub_21FFED4(Instance);
  v20 = v19->m_Items[0];
  if ( !v20 )
    goto LABEL_42;
  probabilityLabel = (UILabel_o *)this->fields.probabilityLabel;
  if ( v20->fields.topIconId <= 0 )
  {
    v6 = (System_String_o *)StringLiteral_1/*""*/;
    if ( probabilityLabel )
      goto LABEL_40;
LABEL_42:
    sub_21FFECC(Instance, v6);
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6, v18);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11451/*"RECIPE_EVENT_PROBABILITY_MESSAGE"*/, 0);
  v6 = (System_String_o *)Instance;
  if ( !probabilityLabel )
    goto LABEL_42;
LABEL_40:
  UILabel__set_text(probabilityLabel, v6, 0);
}