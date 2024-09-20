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

  if ( (byte_4A5F157 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_EventMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1B885B0(&EventRewardRootComponent_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_20198/*"icon_{0}"*/);
    sub_1B885B0(&StringLiteral_23277/*"shop_item_menu_{0}_2"*/);
    sub_1B885B0(&StringLiteral_23276/*"shop_item_menu_mask"*/);
    sub_1B885B0(&StringLiteral_13311/*"TIME_REST2_NONE"*/);
    sub_1B885B0(&StringLiteral_10979/*"RECIPE_EVENT_BOARD_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_10980/*"RECIPE_EVENT_BOARD_UNRELEASED_NAME"*/);
    byte_4A5F157 = 1;
  }
  entity = 0LL;
  if ( item && mode )
  {
    baseSprite = this->fields.baseSprite;
    currentEventId = item->fields.currentEventId;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currentEventId, *(_QWORD *)&mode, method, v4);
    v10 = System_String__Format((System_String_o *)StringLiteral_23277/*"shop_item_menu_{0}_2"*/, v9, 0LL);
    if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
    EventRewardRootComponent__setRewardInfoImg(baseSprite, v10, 0LL);
    v11 = item->fields.currentEventId;
    maskSprite = this->fields.maskSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI_37859364(v11, maskSprite, (System_String_o *)StringLiteral_23276/*"shop_item_menu_mask"*/, 0LL);
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
          v19 = item->fields.currentEventId;
          itemIcon = this->fields.itemIcon;
          currentEventId = eventRecipeEntity->fields.iconId;
          v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currentEventId, v15, v16, v17);
          v22 = System_String__Format((System_String_o *)StringLiteral_20198/*"icon_{0}"*/, v21, 0LL);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          gameObject = AtlasManager__SetEventUI_37859364(v19, itemIcon, v22, 0LL);
          v23 = item->fields.eventRecipeEntity;
          if ( !v23 )
            goto LABEL_52;
          gameObject = (int64_t)this->fields.nameTextLabel;
          if ( !gameObject )
            goto LABEL_52;
          UILabel__set_text((UILabel_o *)gameObject, v23->fields.name, 0LL);
          messageTextLabel = this->fields.messageTextLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10979/*"RECIPE_EVENT_BOARD_MESSAGE"*/, 0LL);
          v25 = item->fields.eventRecipeEntity;
          if ( !v25 )
            goto LABEL_52;
          gameObject = (int64_t)System_String__Format(
                                  (System_String_o *)gameObject,
                                  (Il2CppObject *)v25->fields.name,
                                  0LL);
          if ( !messageTextLabel )
            goto LABEL_52;
          UILabel__set_text(messageTextLabel, (System_String_o *)gameObject, 0LL);
        }
        else
        {
          v27 = this->fields.itemIcon;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetItem(v27, 8007, 0LL);
          nameTextLabel = (UILabel_o *)this->fields.nameTextLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10980/*"RECIPE_EVENT_BOARD_UNRELEASED_NAME"*/, 0LL);
          if ( !nameTextLabel )
            goto LABEL_52;
          UILabel__set_text(nameTextLabel, (System_String_o *)gameObject, 0LL);
          v29 = item->fields.eventRecipeEntity;
          if ( !v29 )
            goto LABEL_52;
          gameObject = (int64_t)this->fields.messageTextLabel;
          if ( !gameObject )
            goto LABEL_52;
          UILabel__set_text((UILabel_o *)gameObject, v29->fields.closedMessage, 0LL);
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
        gameObject = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventMaster___);
        if ( !gameObject )
          goto LABEL_52;
        if ( !DataMasterBase_object__object__int___TryGetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                &entity,
                item->fields.currentEventId,
                (const MethodInfo_311D988 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
        {
LABEL_47:
          EventRecipeListViewItemDraw__SetPriceIconText(this, item, v26);
          EventRecipeListViewItemDraw__SetRewardIconText(this, item, v33);
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
            gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13311/*"TIME_REST2_NONE"*/, 0LL);
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
    sub_1B8880C(gameObject, v13);
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

  if ( (byte_4A5F159 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F159 = 1;
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
      sub_1B8880C(v6, v7);
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
  struct CommonConsumeEntity_array *v8; // x8
  UIIconLabel_o *priceIconLabel; // x21
  int32_t v10; // w22
  const MethodInfo *v11; // x3
  struct CommonConsumeEntity_array *v12; // x8
  ItemIconComponent_o *eventItemIcon3_3; // x1
  CommonConsumeEntity_o *v14; // x2
  struct CommonConsumeEntity_array *v15; // x8
  UIIconLabel_o *priceIconLabel3_1; // x21
  int32_t num; // w22
  struct CommonConsumeEntity_array *v18; // x8
  UIIconLabel_o *priceIconLabel3_2; // x21
  int32_t v20; // w22
  struct CommonConsumeEntity_array *v21; // x8
  UIIconLabel_o *priceIconLabel3_3; // x21
  int32_t v23; // w22
  const MethodInfo *v24; // x3
  struct CommonConsumeEntity_array *v25; // x8
  const MethodInfo *v26; // x3
  struct CommonConsumeEntity_array *v27; // x8
  struct CommonConsumeEntity_array *v28; // x8
  struct CommonConsumeEntity_array *v29; // x8
  UIIconLabel_o *priceIconLabel2_1; // x21
  int32_t v31; // w22
  struct CommonConsumeEntity_array *v32; // x8
  UIIconLabel_o *priceIconLabel2_2; // x21
  int32_t v34; // w22
  const MethodInfo *v35; // x3
  struct CommonConsumeEntity_array *v36; // x8
  struct CommonConsumeEntity_array *v37; // x8

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
          v15 = item->fields.commonConsumeEntity;
          if ( v15 )
          {
            if ( !v15->max_length )
              goto LABEL_54;
            priceInfo1 = v15->m_Items[0];
            if ( priceInfo1 )
            {
              priceIconLabel3_1 = this->fields.priceIconLabel3_1;
              num = priceInfo1->fields.num;
              priceInfo1 = (CommonConsumeEntity_o *)CommonConsumeEntity__GetUserHasNum(priceInfo1, 0LL);
              if ( priceIconLabel3_1 )
              {
                UIIconLabel__SetPurchaseDecision(priceIconLabel3_1, 27, num, (int32_t)priceInfo1, 0LL);
                v18 = item->fields.commonConsumeEntity;
                if ( v18 )
                {
                  if ( v18->max_length <= 1 )
                    goto LABEL_54;
                  priceInfo1 = v18->m_Items[1];
                  if ( priceInfo1 )
                  {
                    priceIconLabel3_2 = this->fields.priceIconLabel3_2;
                    v20 = priceInfo1->fields.num;
                    priceInfo1 = (CommonConsumeEntity_o *)CommonConsumeEntity__GetUserHasNum(priceInfo1, 0LL);
                    if ( priceIconLabel3_2 )
                    {
                      UIIconLabel__SetPurchaseDecision(priceIconLabel3_2, 27, v20, (int32_t)priceInfo1, 0LL);
                      v21 = item->fields.commonConsumeEntity;
                      if ( v21 )
                      {
                        if ( v21->max_length <= 2 )
                          goto LABEL_54;
                        priceInfo1 = v21->m_Items[2];
                        if ( priceInfo1 )
                        {
                          priceIconLabel3_3 = this->fields.priceIconLabel3_3;
                          v23 = priceInfo1->fields.num;
                          priceInfo1 = (CommonConsumeEntity_o *)CommonConsumeEntity__GetUserHasNum(priceInfo1, 0LL);
                          if ( priceIconLabel3_3 )
                          {
                            UIIconLabel__SetPurchaseDecision(priceIconLabel3_3, 27, v23, (int32_t)priceInfo1, 0LL);
                            v25 = item->fields.commonConsumeEntity;
                            if ( v25 )
                            {
                              if ( !v25->max_length )
                                goto LABEL_54;
                              EventRecipeListViewItemDraw__SetItemIcon(
                                (EventRecipeListViewItemDraw_o *)priceInfo1,
                                this->fields.eventItemIcon3_1,
                                v25->m_Items[0],
                                v24);
                              v27 = item->fields.commonConsumeEntity;
                              if ( v27 )
                              {
                                if ( v27->max_length <= 1 )
                                  goto LABEL_54;
                                EventRecipeListViewItemDraw__SetItemIcon(
                                  (EventRecipeListViewItemDraw_o *)priceInfo1,
                                  this->fields.eventItemIcon3_2,
                                  v27->m_Items[1],
                                  v26);
                                v28 = item->fields.commonConsumeEntity;
                                if ( v28 )
                                {
                                  if ( v28->max_length > 2 )
                                  {
                                    eventItemIcon3_3 = this->fields.eventItemIcon3_3;
                                    v14 = v28->m_Items[2];
                                    goto LABEL_52;
                                  }
LABEL_54:
                                  sub_1B88814(priceInfo1, item);
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
        sub_1B8880C(priceInfo1, item);
      case 2u:
        priceInfo1 = (CommonConsumeEntity_o *)this->fields.priceInfo2;
        if ( priceInfo1 )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)priceInfo1, 1, 0LL);
          v29 = item->fields.commonConsumeEntity;
          if ( v29 )
          {
            if ( !v29->max_length )
              goto LABEL_54;
            priceInfo1 = v29->m_Items[0];
            if ( priceInfo1 )
            {
              priceIconLabel2_1 = this->fields.priceIconLabel2_1;
              v31 = priceInfo1->fields.num;
              priceInfo1 = (CommonConsumeEntity_o *)CommonConsumeEntity__GetUserHasNum(priceInfo1, 0LL);
              if ( priceIconLabel2_1 )
              {
                UIIconLabel__SetPurchaseDecision(priceIconLabel2_1, 27, v31, (int32_t)priceInfo1, 0LL);
                v32 = item->fields.commonConsumeEntity;
                if ( v32 )
                {
                  if ( v32->max_length <= 1 )
                    goto LABEL_54;
                  priceInfo1 = v32->m_Items[1];
                  if ( priceInfo1 )
                  {
                    priceIconLabel2_2 = this->fields.priceIconLabel2_2;
                    v34 = priceInfo1->fields.num;
                    priceInfo1 = (CommonConsumeEntity_o *)CommonConsumeEntity__GetUserHasNum(priceInfo1, 0LL);
                    if ( priceIconLabel2_2 )
                    {
                      UIIconLabel__SetPurchaseDecision(priceIconLabel2_2, 27, v34, (int32_t)priceInfo1, 0LL);
                      v36 = item->fields.commonConsumeEntity;
                      if ( v36 )
                      {
                        if ( !v36->max_length )
                          goto LABEL_54;
                        EventRecipeListViewItemDraw__SetItemIcon(
                          (EventRecipeListViewItemDraw_o *)priceInfo1,
                          this->fields.eventItemIcon2_1,
                          v36->m_Items[0],
                          v35);
                        v37 = item->fields.commonConsumeEntity;
                        if ( v37 )
                        {
                          if ( v37->max_length > 1 )
                          {
                            eventItemIcon3_3 = this->fields.eventItemIcon2_2;
                            v14 = v37->m_Items[1];
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
  Il2CppObject *MasterData_object; // x22
  GiftEntity_o *v11; // x8
  UILabel_o *rewardNumTextLabel; // x22
  GiftEntity_o *v13; // x8
  UILabel_o *rewardNumTitleLabel; // x21
  struct EventRecipeGiftEntity_array *v15; // x8
  EventRecipeGiftEntity_o *v16; // x8
  UILabel_o *probabilityLabel; // x19
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5F158 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_10982/*"RECIPE_EVENT_HAVE_NUM"*/);
    sub_1B885B0(&StringLiteral_429/*"#,0"*/);
    sub_1B885B0(&StringLiteral_10986/*"RECIPE_EVENT_PROBABILITY_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_1212/*"0"*/);
    byte_4A5F158 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !item )
    goto LABEL_38;
  eventRecipeGiftEntity = item->fields.eventRecipeGiftEntity;
  if ( !eventRecipeGiftEntity )
    goto LABEL_38;
  if ( !eventRecipeGiftEntity->max_length )
    goto LABEL_39;
  v8 = eventRecipeGiftEntity->m_Items[0];
  if ( !v8 )
    goto LABEL_38;
  if ( !Instance )
    goto LABEL_38;
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, v8->fields.giftId, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !GiftListById )
    goto LABEL_38;
  if ( !GiftListById->max_length )
    goto LABEL_39;
  v11 = GiftListById->m_Items[0];
  if ( !v11 || !MasterData_object )
    goto LABEL_38;
  Instance = UserItemMaster__TryGetEntity(
               (UserItemMaster_o *)MasterData_object,
               &entity,
               Instance,
               v11->fields.objectId,
               0LL);
  rewardNumTextLabel = this->fields.rewardNumTextLabel;
  if ( (Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_38;
    Instance = (int64_t)System_Int32__ToString_62512312((int)entity + 28, (System_String_o *)StringLiteral_429/*"#,0"*/, 0LL);
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
    UILabel__set_text(this->fields.rewardNumTextLabel, (System_String_o *)StringLiteral_1212/*"0"*/, 0LL);
  }
  if ( !GiftListById->max_length )
    goto LABEL_39;
  v13 = GiftListById->m_Items[0];
  if ( !v13 )
    goto LABEL_38;
  Instance = (int64_t)this->fields.rewardItemIcon;
  if ( !Instance )
    goto LABEL_38;
  ItemIconComponent__SetItem((ItemIconComponent_o *)Instance, v13->fields.objectId, -1, 0LL);
  rewardNumTitleLabel = this->fields.rewardNumTitleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10982/*"RECIPE_EVENT_HAVE_NUM"*/, 0LL);
  if ( !rewardNumTitleLabel )
    goto LABEL_38;
  UILabel__set_text(rewardNumTitleLabel, (System_String_o *)Instance, 0LL);
  v15 = item->fields.eventRecipeGiftEntity;
  if ( !v15 )
    goto LABEL_38;
  if ( !v15->max_length )
LABEL_39:
    sub_1B88814(Instance, v6);
  v16 = v15->m_Items[0];
  if ( !v16 )
    goto LABEL_38;
  probabilityLabel = (UILabel_o *)this->fields.probabilityLabel;
  if ( v16->fields.topIconId <= 0 )
  {
    v6 = (System_String_o *)StringLiteral_1/*""*/;
    if ( probabilityLabel )
      goto LABEL_36;
LABEL_38:
    sub_1B8880C(Instance, v6);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10986/*"RECIPE_EVENT_PROBABILITY_MESSAGE"*/, 0LL);
  v6 = (System_String_o *)Instance;
  if ( !probabilityLabel )
    goto LABEL_38;
LABEL_36:
  UILabel__set_text(probabilityLabel, v6, 0LL);
}