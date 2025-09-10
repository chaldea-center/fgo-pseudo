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


// local variable allocation has failed, the output may be wrong!
void EventRecipeListViewItemDraw__SetItem(
        EventRecipeListViewItemDraw_o *this,
        EventRecipeListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v4; // x4
  UISprite_o *baseSprite; // x21
  Il2CppObject *v9; // x0
  System_String_o *v10; // x22
  int32_t v11; // w21
  UISprite_o *maskSprite; // x22
  __int64 v13; // x1
  int64_t gameObject; // x0
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  struct EventRecipeEntity_o *eventRecipeEntity; // x8
  int32_t v19; // w21
  UISprite_o *itemIcon; // x22
  Il2CppObject *v21; // x0
  System_String_o *v22; // x23
  struct EventRecipeEntity_o *v23; // x8
  UILabel_o *messageTextLabel; // x21
  struct EventRecipeEntity_o *v25; // x8
  const MethodInfo *v26; // x2
  UISprite_o *v27; // x21
  UILabel_o *nameTextLabel; // x21
  struct EventRecipeEntity_o *v29; // x8
  void *monitor; // x22
  UILabel_o *restTimeLabel; // x21
  int64_t Time; // x23
  const MethodInfo *v33; // x2
  int32_t currentEventId; // [xsp+4h] [xbp-4Ch] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C218FD & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C2D490(&EventRewardRootComponent_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&StringLiteral_20237/*"icon_{0}"*/);
    sub_1C2D490(&StringLiteral_23429/*"shop_item_menu_{0}_2"*/);
    sub_1C2D490(&StringLiteral_23428/*"shop_item_menu_mask"*/);
    sub_1C2D490(&StringLiteral_13397/*"TIME_REST2_NONE"*/);
    sub_1C2D490(&StringLiteral_10980/*"RECIPE_EVENT_BOARD_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_10981/*"RECIPE_EVENT_BOARD_UNRELEASED_NAME"*/);
    byte_4C218FD = 1;
  }
  entity = 0;
  if ( item && mode )
  {
    baseSprite = this->fields.baseSprite;
    currentEventId = item->fields.currentEventId;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currentEventId, *(_QWORD *)&mode, method, v4);
    v10 = System_String__Format((System_String_o *)StringLiteral_23429/*"shop_item_menu_{0}_2"*/, v9, 0);
    if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
    EventRewardRootComponent__setRewardInfoImg(baseSprite, v10, 0);
    v11 = item->fields.currentEventId;
    maskSprite = this->fields.maskSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI_40385372(v11, maskSprite, (System_String_o *)StringLiteral_23428/*"shop_item_menu_mask"*/, 0);
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
          v19 = item->fields.currentEventId;
          itemIcon = this->fields.itemIcon;
          currentEventId = eventRecipeEntity->fields.iconId;
          v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currentEventId, v15, v16, v17);
          v22 = System_String__Format((System_String_o *)StringLiteral_20237/*"icon_{0}"*/, v21, 0);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          gameObject = AtlasManager__SetEventUI_40385372(v19, itemIcon, v22, 0);
          v23 = item->fields.eventRecipeEntity;
          if ( !v23 )
            goto LABEL_52;
          gameObject = (int64_t)this->fields.nameTextLabel;
          if ( !gameObject )
            goto LABEL_52;
          UILabel__set_text((UILabel_o *)gameObject, v23->fields.name, 0);
          messageTextLabel = this->fields.messageTextLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10980/*"RECIPE_EVENT_BOARD_MESSAGE"*/, 0);
          v25 = item->fields.eventRecipeEntity;
          if ( !v25 )
            goto LABEL_52;
          gameObject = (int64_t)System_String__Format(
                                  (System_String_o *)gameObject,
                                  (Il2CppObject *)v25->fields.name,
                                  0);
          if ( !messageTextLabel )
            goto LABEL_52;
          UILabel__set_text(messageTextLabel, (System_String_o *)gameObject, 0);
        }
        else
        {
          v27 = this->fields.itemIcon;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetItem(v27, 8007, 0);
          nameTextLabel = (UILabel_o *)this->fields.nameTextLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10981/*"RECIPE_EVENT_BOARD_UNRELEASED_NAME"*/, 0);
          if ( !nameTextLabel )
            goto LABEL_52;
          UILabel__set_text(nameTextLabel, (System_String_o *)gameObject, 0);
          v29 = item->fields.eventRecipeEntity;
          if ( !v29 )
            goto LABEL_52;
          gameObject = (int64_t)this->fields.messageTextLabel;
          if ( !gameObject )
            goto LABEL_52;
          UILabel__set_text((UILabel_o *)gameObject, v29->fields.closedMessage, 0);
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
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        gameObject = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventMaster___);
        if ( !gameObject )
          goto LABEL_52;
        if ( !DataMasterBase_object__object__int___TryGetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                &entity,
                item->fields.currentEventId,
                (const MethodInfo_3387DE4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
        {
LABEL_47:
          EventRecipeListViewItemDraw__SetPriceIconText(this, item, v26);
          EventRecipeListViewItemDraw__SetRewardIconText(this, item, v33);
          return;
        }
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        gameObject = NetworkManager__getTime(0);
        if ( entity )
        {
          monitor = entity[6].monitor;
          restTimeLabel = this->fields.restTimeLabel;
          if ( gameObject >= (__int64)monitor )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13397/*"TIME_REST2_NONE"*/, 0);
            if ( restTimeLabel )
              goto LABEL_46;
          }
          else
          {
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            Time = NetworkManager__getTime(0);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
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
    sub_1C2D6EC(gameObject, v13);
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

  if ( (byte_4C218FF & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C218FF = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      sub_1C2D6EC(v6, v7);
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
  __int64 v8; // x2
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
          v16 = item->fields.commonConsumeEntity;
          if ( v16 )
          {
            if ( !LODWORD(v16->max_length) )
              goto LABEL_54;
            priceInfo1 = v16->m_Items[0];
            if ( priceInfo1 )
            {
              priceIconLabel3_1 = this->fields.priceIconLabel3_1;
              num = priceInfo1->fields.num;
              priceInfo1 = (CommonConsumeEntity_o *)CommonConsumeEntity__GetUserHasNum(priceInfo1, 0);
              if ( priceIconLabel3_1 )
              {
                UIIconLabel__SetPurchaseDecision(priceIconLabel3_1, 27, num, (int32_t)priceInfo1, 0);
                v19 = item->fields.commonConsumeEntity;
                if ( v19 )
                {
                  if ( LODWORD(v19->max_length) <= 1 )
                    goto LABEL_54;
                  priceInfo1 = v19->m_Items[1];
                  if ( priceInfo1 )
                  {
                    priceIconLabel3_2 = this->fields.priceIconLabel3_2;
                    v21 = priceInfo1->fields.num;
                    priceInfo1 = (CommonConsumeEntity_o *)CommonConsumeEntity__GetUserHasNum(priceInfo1, 0);
                    if ( priceIconLabel3_2 )
                    {
                      UIIconLabel__SetPurchaseDecision(priceIconLabel3_2, 27, v21, (int32_t)priceInfo1, 0);
                      v22 = item->fields.commonConsumeEntity;
                      if ( v22 )
                      {
                        if ( LODWORD(v22->max_length) <= 2 )
                          goto LABEL_54;
                        priceInfo1 = v22->m_Items[2];
                        if ( priceInfo1 )
                        {
                          priceIconLabel3_3 = this->fields.priceIconLabel3_3;
                          v24 = priceInfo1->fields.num;
                          priceInfo1 = (CommonConsumeEntity_o *)CommonConsumeEntity__GetUserHasNum(priceInfo1, 0);
                          if ( priceIconLabel3_3 )
                          {
                            UIIconLabel__SetPurchaseDecision(priceIconLabel3_3, 27, v24, (int32_t)priceInfo1, 0);
                            v26 = item->fields.commonConsumeEntity;
                            if ( v26 )
                            {
                              if ( !LODWORD(v26->max_length) )
                                goto LABEL_54;
                              EventRecipeListViewItemDraw__SetItemIcon(
                                (EventRecipeListViewItemDraw_o *)priceInfo1,
                                this->fields.eventItemIcon3_1,
                                v26->m_Items[0],
                                v25);
                              v28 = item->fields.commonConsumeEntity;
                              if ( v28 )
                              {
                                if ( LODWORD(v28->max_length) <= 1 )
                                  goto LABEL_54;
                                EventRecipeListViewItemDraw__SetItemIcon(
                                  (EventRecipeListViewItemDraw_o *)priceInfo1,
                                  this->fields.eventItemIcon3_2,
                                  v28->m_Items[1],
                                  v27);
                                v29 = item->fields.commonConsumeEntity;
                                if ( v29 )
                                {
                                  if ( LODWORD(v29->max_length) > 2 )
                                  {
                                    eventItemIcon3_3 = this->fields.eventItemIcon3_3;
                                    v15 = v29->m_Items[2];
                                    goto LABEL_52;
                                  }
LABEL_54:
                                  sub_1C2D6F4(priceInfo1, item, v8);
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
        sub_1C2D6EC(priceInfo1, item);
      case 2:
        priceInfo1 = (CommonConsumeEntity_o *)this->fields.priceInfo2;
        if ( priceInfo1 )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)priceInfo1, 1, 0);
          v30 = item->fields.commonConsumeEntity;
          if ( v30 )
          {
            if ( !LODWORD(v30->max_length) )
              goto LABEL_54;
            priceInfo1 = v30->m_Items[0];
            if ( priceInfo1 )
            {
              priceIconLabel2_1 = this->fields.priceIconLabel2_1;
              v32 = priceInfo1->fields.num;
              priceInfo1 = (CommonConsumeEntity_o *)CommonConsumeEntity__GetUserHasNum(priceInfo1, 0);
              if ( priceIconLabel2_1 )
              {
                UIIconLabel__SetPurchaseDecision(priceIconLabel2_1, 27, v32, (int32_t)priceInfo1, 0);
                v33 = item->fields.commonConsumeEntity;
                if ( v33 )
                {
                  if ( LODWORD(v33->max_length) <= 1 )
                    goto LABEL_54;
                  priceInfo1 = v33->m_Items[1];
                  if ( priceInfo1 )
                  {
                    priceIconLabel2_2 = this->fields.priceIconLabel2_2;
                    v35 = priceInfo1->fields.num;
                    priceInfo1 = (CommonConsumeEntity_o *)CommonConsumeEntity__GetUserHasNum(priceInfo1, 0);
                    if ( priceIconLabel2_2 )
                    {
                      UIIconLabel__SetPurchaseDecision(priceIconLabel2_2, 27, v35, (int32_t)priceInfo1, 0);
                      v37 = item->fields.commonConsumeEntity;
                      if ( v37 )
                      {
                        if ( !LODWORD(v37->max_length) )
                          goto LABEL_54;
                        EventRecipeListViewItemDraw__SetItemIcon(
                          (EventRecipeListViewItemDraw_o *)priceInfo1,
                          this->fields.eventItemIcon2_1,
                          v37->m_Items[0],
                          v36);
                        v38 = item->fields.commonConsumeEntity;
                        if ( v38 )
                        {
                          if ( LODWORD(v38->max_length) > 1 )
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
      case 1:
        priceInfo1 = (CommonConsumeEntity_o *)this->fields.priceInfo1;
        if ( priceInfo1 )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)priceInfo1, 1, 0);
          v9 = item->fields.commonConsumeEntity;
          if ( v9 )
          {
            if ( !LODWORD(v9->max_length) )
              goto LABEL_54;
            priceInfo1 = v9->m_Items[0];
            if ( priceInfo1 )
            {
              priceIconLabel = this->fields.priceIconLabel;
              v11 = priceInfo1->fields.num;
              priceInfo1 = (CommonConsumeEntity_o *)CommonConsumeEntity__GetUserHasNum(priceInfo1, 0);
              if ( priceIconLabel )
              {
                UIIconLabel__SetPurchaseDecision(priceIconLabel, 27, v11, (int32_t)priceInfo1, 0);
                v13 = item->fields.commonConsumeEntity;
                if ( v13 )
                {
                  if ( LODWORD(v13->max_length) )
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


void EventRecipeListViewItemDraw__SetRewardIconText(
        EventRecipeListViewItemDraw_o *this,
        EventRecipeListViewItem_o *item,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  System_String_o *v6; // x1
  __int64 v7; // x2
  struct EventRecipeGiftEntity_array *eventRecipeGiftEntity; // x8
  EventRecipeGiftEntity_o *v9; // x8
  GiftEntity_array *GiftListById; // x21
  Il2CppObject *MasterData_object; // x22
  GiftEntity_o *v12; // x8
  UILabel_o *rewardNumTextLabel; // x22
  GiftEntity_o *v14; // x8
  UILabel_o *rewardNumTitleLabel; // x21
  struct EventRecipeGiftEntity_array *v16; // x8
  EventRecipeGiftEntity_o *v17; // x8
  UILabel_o *probabilityLabel; // x19
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C218FE & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_10983/*"RECIPE_EVENT_HAVE_NUM"*/);
    sub_1C2D490(&StringLiteral_397/*"#,0"*/);
    sub_1C2D490(&StringLiteral_10987/*"RECIPE_EVENT_PROBABILITY_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    sub_1C2D490(&StringLiteral_1122/*"0"*/);
    byte_4C218FE = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !item )
    goto LABEL_42;
  eventRecipeGiftEntity = item->fields.eventRecipeGiftEntity;
  if ( !eventRecipeGiftEntity )
    goto LABEL_42;
  if ( !LODWORD(eventRecipeGiftEntity->max_length) )
    goto LABEL_43;
  v9 = eventRecipeGiftEntity->m_Items[0];
  if ( !v9 )
    goto LABEL_42;
  if ( !Instance )
    goto LABEL_42;
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, v9->fields.giftId, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
    Instance = (DataManager_o *)System_Int32__ToString_64968716(
                                  (int)entity + 28,
                                  (System_String_o *)StringLiteral_397/*"#,0"*/,
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
    UILabel__set_text(this->fields.rewardNumTextLabel, (System_String_o *)StringLiteral_1122/*"0"*/, 0);
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
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10983/*"RECIPE_EVENT_HAVE_NUM"*/, 0);
  if ( !rewardNumTitleLabel )
    goto LABEL_42;
  UILabel__set_text(rewardNumTitleLabel, (System_String_o *)Instance, 0);
  v16 = item->fields.eventRecipeGiftEntity;
  if ( !v16 )
    goto LABEL_42;
  if ( !LODWORD(v16->max_length) )
LABEL_43:
    sub_1C2D6F4(Instance, v6, v7);
  v17 = v16->m_Items[0];
  if ( !v17 )
    goto LABEL_42;
  probabilityLabel = (UILabel_o *)this->fields.probabilityLabel;
  if ( v17->fields.topIconId <= 0 )
  {
    v6 = (System_String_o *)StringLiteral_1/*""*/;
    if ( probabilityLabel )
      goto LABEL_40;
LABEL_42:
    sub_1C2D6EC(Instance, v6);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10987/*"RECIPE_EVENT_PROBABILITY_MESSAGE"*/, 0);
  v6 = (System_String_o *)Instance;
  if ( !probabilityLabel )
    goto LABEL_42;
LABEL_40:
  UILabel__set_text(probabilityLabel, v6, 0);
}