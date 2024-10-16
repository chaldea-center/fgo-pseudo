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
  __int64 v20; // x1
  UISprite_o *baseSprite; // x21
  Il2CppObject *v22; // x0
  System_String_o *v23; // x22
  int32_t v24; // w21
  UISprite_o *maskSprite; // x22
  __int64 v26; // x1
  int64_t gameObject; // x0
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  struct EventRecipeEntity_o *eventRecipeEntity; // x8
  int32_t v32; // w21
  UISprite_o *itemIcon; // x22
  Il2CppObject *v34; // x0
  System_String_o *v35; // x23
  struct EventRecipeEntity_o *v36; // x8
  UILabel_o *messageTextLabel; // x21
  struct EventRecipeEntity_o *v38; // x8
  const MethodInfo *v39; // x2
  UISprite_o *v40; // x21
  UILabel_o *nameTextLabel; // x21
  struct EventRecipeEntity_o *v42; // x8
  void *monitor; // x22
  UILabel_o *restTimeLabel; // x21
  int64_t Time; // x23
  const MethodInfo *v46; // x2
  int32_t currentEventId; // [xsp+4h] [xbp-4Ch] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4AB9D95 & 1) == 0 )
  {
    sub_1BAB41C(&AtlasManager_TypeInfo, item);
    sub_1BAB41C(&Method_DataManager_GetMaster_EventMaster___, v8);
    sub_1BAB41C(&DataManager_TypeInfo, v9);
    sub_1BAB41C(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v10);
    sub_1BAB41C(&EventRewardRootComponent_TypeInfo, v11);
    sub_1BAB41C(&int_TypeInfo, v12);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v13);
    sub_1BAB41C(&NetworkManager_TypeInfo, v14);
    sub_1BAB41C(&StringLiteral_20228/*"icon_{0}"*/, v15);
    sub_1BAB41C(&StringLiteral_23316/*"shop_item_menu_{0}_2"*/, v16);
    sub_1BAB41C(&StringLiteral_23315/*"shop_item_menu_mask"*/, v17);
    sub_1BAB41C(&StringLiteral_13341/*"TIME_REST2_NONE"*/, v18);
    sub_1BAB41C(&StringLiteral_10987/*"RECIPE_EVENT_BOARD_MESSAGE"*/, v19);
    sub_1BAB41C(&StringLiteral_10988/*"RECIPE_EVENT_BOARD_UNRELEASED_NAME"*/, v20);
    byte_4AB9D95 = 1;
  }
  entity = 0LL;
  if ( item && mode )
  {
    baseSprite = this->fields.baseSprite;
    currentEventId = item->fields.currentEventId;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currentEventId, *(_QWORD *)&mode, method, v4);
    v23 = System_String__Format((System_String_o *)StringLiteral_23316/*"shop_item_menu_{0}_2"*/, v22, 0LL);
    if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
    EventRewardRootComponent__setRewardInfoImg(baseSprite, v23, 0LL);
    v24 = item->fields.currentEventId;
    maskSprite = this->fields.maskSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI_38244724(v24, maskSprite, (System_String_o *)StringLiteral_23315/*"shop_item_menu_mask"*/, 0LL);
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
          v32 = item->fields.currentEventId;
          itemIcon = this->fields.itemIcon;
          currentEventId = eventRecipeEntity->fields.iconId;
          v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currentEventId, v28, v29, v30);
          v35 = System_String__Format((System_String_o *)StringLiteral_20228/*"icon_{0}"*/, v34, 0LL);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          gameObject = AtlasManager__SetEventUI_38244724(v32, itemIcon, v35, 0LL);
          v36 = item->fields.eventRecipeEntity;
          if ( !v36 )
            goto LABEL_52;
          gameObject = (int64_t)this->fields.nameTextLabel;
          if ( !gameObject )
            goto LABEL_52;
          UILabel__set_text((UILabel_o *)gameObject, v36->fields.name, 0LL);
          messageTextLabel = this->fields.messageTextLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10987/*"RECIPE_EVENT_BOARD_MESSAGE"*/, 0LL);
          v38 = item->fields.eventRecipeEntity;
          if ( !v38 )
            goto LABEL_52;
          gameObject = (int64_t)System_String__Format(
                                  (System_String_o *)gameObject,
                                  (Il2CppObject *)v38->fields.name,
                                  0LL);
          if ( !messageTextLabel )
            goto LABEL_52;
          UILabel__set_text(messageTextLabel, (System_String_o *)gameObject, 0LL);
        }
        else
        {
          v40 = this->fields.itemIcon;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetItem(v40, 8007, 0LL);
          nameTextLabel = (UILabel_o *)this->fields.nameTextLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10988/*"RECIPE_EVENT_BOARD_UNRELEASED_NAME"*/, 0LL);
          if ( !nameTextLabel )
            goto LABEL_52;
          UILabel__set_text(nameTextLabel, (System_String_o *)gameObject, 0LL);
          v42 = item->fields.eventRecipeEntity;
          if ( !v42 )
            goto LABEL_52;
          gameObject = (int64_t)this->fields.messageTextLabel;
          if ( !gameObject )
            goto LABEL_52;
          UILabel__set_text((UILabel_o *)gameObject, v42->fields.closedMessage, 0LL);
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
        gameObject = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_EventMaster___);
        if ( !gameObject )
          goto LABEL_52;
        if ( !DataMasterBase_object__object__int___TryGetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                &entity,
                item->fields.currentEventId,
                (const MethodInfo_3163DE4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
        {
LABEL_47:
          EventRecipeListViewItemDraw__SetPriceIconText(this, item, v39);
          EventRecipeListViewItemDraw__SetRewardIconText(this, item, v46);
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
            gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13341/*"TIME_REST2_NONE"*/, 0LL);
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
    sub_1BAB678(gameObject, v26);
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

  if ( (byte_4AB9D97 & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, itemIcon);
    byte_4AB9D97 = 1;
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
      sub_1BAB678(v6, v7);
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
                                  sub_1BAB680(priceInfo1, item);
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
        sub_1BAB678(priceInfo1, item);
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
  System_String_o *v15; // x1
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
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4AB9D96 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_GiftMaster___, item);
    sub_1BAB41C(&Method_DataManager_GetMasterData_UserItemMaster___, v5);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v6);
    sub_1BAB41C(&NetworkManager_TypeInfo, v7);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1BAB41C(&StringLiteral_10990/*"RECIPE_EVENT_HAVE_NUM"*/, v9);
    sub_1BAB41C(&StringLiteral_424/*"#,0"*/, v10);
    sub_1BAB41C(&StringLiteral_10994/*"RECIPE_EVENT_PROBABILITY_MESSAGE"*/, v11);
    sub_1BAB41C(&StringLiteral_1/*""*/, v12);
    sub_1BAB41C(&StringLiteral_1209/*"0"*/, v13);
    byte_4AB9D96 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_GiftMaster___);
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
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_UserItemMaster___);
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
    Instance = (int64_t)System_Int32__ToString_62853408((int)entity + 28, (System_String_o *)StringLiteral_424/*"#,0"*/, 0LL);
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
    UILabel__set_text(this->fields.rewardNumTextLabel, (System_String_o *)StringLiteral_1209/*"0"*/, 0LL);
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
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10990/*"RECIPE_EVENT_HAVE_NUM"*/, 0LL);
  if ( !rewardNumTitleLabel )
    goto LABEL_38;
  UILabel__set_text(rewardNumTitleLabel, (System_String_o *)Instance, 0LL);
  v24 = item->fields.eventRecipeGiftEntity;
  if ( !v24 )
    goto LABEL_38;
  if ( !v24->max_length )
LABEL_39:
    sub_1BAB680(Instance, v15);
  v25 = v24->m_Items[0];
  if ( !v25 )
    goto LABEL_38;
  probabilityLabel = (UILabel_o *)this->fields.probabilityLabel;
  if ( v25->fields.topIconId <= 0 )
  {
    v15 = (System_String_o *)StringLiteral_1/*""*/;
    if ( probabilityLabel )
      goto LABEL_36;
LABEL_38:
    sub_1BAB678(Instance, v15);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10994/*"RECIPE_EVENT_PROBABILITY_MESSAGE"*/, 0LL);
  v15 = (System_String_o *)Instance;
  if ( !probabilityLabel )
    goto LABEL_38;
LABEL_36:
  UILabel__set_text(probabilityLabel, v15, 0LL);
}