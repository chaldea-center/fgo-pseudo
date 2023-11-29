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
  const MethodInfo *v22; // x2
  System_String_o *v23; // x22
  int32_t v24; // w21
  UISprite_o *maskSprite; // x22
  UnityEngine_Component_o *v26; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct EventRecipeEntity_o *eventRecipeEntity; // x8
  int32_t v29; // w21
  UISprite_o *itemIcon; // x22
  Il2CppObject *v31; // x0
  System_String_o *v32; // x23
  struct EventRecipeEntity_o *v33; // x8
  UILabel_o *nameTextLabel; // x0
  UILabel_o *messageTextLabel; // x21
  System_String_o *v36; // x0
  struct EventRecipeEntity_o *v37; // x8
  System_String_o *v38; // x0
  const MethodInfo *v39; // x2
  UISprite_o *v40; // x21
  UILabel_o *v41; // x21
  System_String_o *v42; // x0
  struct EventRecipeEntity_o *v43; // x8
  UILabel_o *v44; // x0
  UnityEngine_Component_o *v45; // x0
  UnityEngine_GameObject_o *v46; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  int64_t Time; // x0
  struct System_Single_array *coordinate; // x22
  UILabel_o *restTimeLabel; // x21
  int64_t v51; // x23
  System_String_o *RestTime2; // x0
  const MethodInfo *v53; // x2
  int32_t currentEventId; // [xsp+4h] [xbp-3Ch] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40F6109 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, item);
    sub_B16FFC(&Method_DataManager_GetMaster_EventMaster___, v7);
    sub_B16FFC(&DataManager_TypeInfo, v8);
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v9);
    sub_B16FFC(&EventRewardRootComponent_TypeInfo, v10);
    sub_B16FFC(&int_TypeInfo, v11);
    sub_B16FFC(&LocalizationManager_TypeInfo, v12);
    sub_B16FFC(&NetworkManager_TypeInfo, v13);
    sub_B16FFC(&StringLiteral_19305, v14);
    sub_B16FFC(&StringLiteral_22021, v15);
    sub_B16FFC(&StringLiteral_22020, v16);
    sub_B16FFC(&StringLiteral_13322, v17);
    sub_B16FFC(&StringLiteral_11003, v18);
    sub_B16FFC(&StringLiteral_11004, v19);
    byte_40F6109 = 1;
  }
  entity = 0LL;
  if ( item && mode )
  {
    baseSprite = this->fields.baseSprite;
    currentEventId = item->fields.currentEventId;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currentEventId);
    v23 = System_String__Format((System_String_o *)StringLiteral_22021, v21, 0LL);
    if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
    }
    EventRewardRootComponent__setRewardInfoImg(baseSprite, v23, v22);
    v24 = item->fields.currentEventId;
    maskSprite = this->fields.maskSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI_28584872(v24, maskSprite, (System_String_o *)StringLiteral_22020, 0LL);
    v26 = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( v26 )
    {
      gameObject = UnityEngine_Component__get_gameObject(v26, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        if ( item->fields.isRelease )
        {
          eventRecipeEntity = item->fields.eventRecipeEntity;
          if ( !eventRecipeEntity )
            goto LABEL_63;
          v29 = item->fields.currentEventId;
          itemIcon = this->fields.itemIcon;
          currentEventId = eventRecipeEntity->fields.iconId;
          v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currentEventId);
          v32 = System_String__Format((System_String_o *)StringLiteral_19305, v31, 0LL);
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__SetEventUI_28584872(v29, itemIcon, v32, 0LL);
          v33 = item->fields.eventRecipeEntity;
          if ( !v33 )
            goto LABEL_63;
          nameTextLabel = (UILabel_o *)this->fields.nameTextLabel;
          if ( !nameTextLabel )
            goto LABEL_63;
          UILabel__set_text(nameTextLabel, v33->fields.name, 0LL);
          messageTextLabel = this->fields.messageTextLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v36 = LocalizationManager__Get((System_String_o *)StringLiteral_11003, 0LL);
          v37 = item->fields.eventRecipeEntity;
          if ( !v37 )
            goto LABEL_63;
          v38 = System_String__Format(v36, (Il2CppObject *)v37->fields.name, 0LL);
          if ( !messageTextLabel )
            goto LABEL_63;
          UILabel__set_text(messageTextLabel, v38, 0LL);
        }
        else
        {
          v40 = this->fields.itemIcon;
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__SetItem(v40, 8007, 0LL);
          v41 = (UILabel_o *)this->fields.nameTextLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v42 = LocalizationManager__Get((System_String_o *)StringLiteral_11004, 0LL);
          if ( !v41 )
            goto LABEL_63;
          UILabel__set_text(v41, v42, 0LL);
          v43 = item->fields.eventRecipeEntity;
          if ( !v43 )
            goto LABEL_63;
          v44 = this->fields.messageTextLabel;
          if ( !v44 )
            goto LABEL_63;
          UILabel__set_text(v44, v43->fields.closedMessage, 0LL);
          v45 = (UnityEngine_Component_o *)this->fields.maskSprite;
          if ( !v45 )
            goto LABEL_63;
          v46 = UnityEngine_Component__get_gameObject(v45, 0LL);
          if ( !v46 )
            goto LABEL_63;
          UnityEngine_GameObject__SetActive(v46, 1, 0LL);
        }
        if ( item->fields.currentEventId < 1 )
          goto LABEL_57;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventMaster___);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_63;
        if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                Master_WarQuestSelectionMaster,
                &entity,
                item->fields.currentEventId,
                (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
        {
LABEL_57:
          EventRecipeListViewItemDraw__SetPriceIconText(this, item, v39);
          EventRecipeListViewItemDraw__SetRewardIconText(this, item, v53);
          return;
        }
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Time = NetworkManager__getTime(0LL);
        if ( entity )
        {
          coordinate = entity->fields.coordinate;
          restTimeLabel = this->fields.restTimeLabel;
          if ( Time >= (__int64)coordinate )
          {
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            RestTime2 = LocalizationManager__Get((System_String_o *)StringLiteral_13322, 0LL);
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
            v51 = NetworkManager__getTime(0LL);
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            RestTime2 = LocalizationManager__GetRestTime2((int64_t)coordinate, v51, 0LL);
            if ( restTimeLabel )
            {
LABEL_56:
              UILabel__set_text(restTimeLabel, RestTime2, 0LL);
              goto LABEL_57;
            }
          }
        }
      }
    }
LABEL_63:
    sub_B170D4();
  }
}


void __fastcall EventRecipeListViewItemDraw__SetItemIcon(
        EventRecipeListViewItemDraw_o *this,
        ItemIconComponent_o *itemIcon,
        CommonConsumeEntity_o *consumeEntity,
        const MethodInfo *method)
{
  if ( (byte_40F610B & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, itemIcon);
    byte_40F610B = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)itemIcon, 0LL, 0LL) )
  {
    if ( consumeEntity )
    {
      if ( itemIcon )
      {
        ItemIconComponent__SetItem(itemIcon, consumeEntity->fields.objectId, -1, 0LL);
        return;
      }
LABEL_12:
      sub_B170D4();
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
  UnityEngine_GameObject_o *priceInfo1; // x0
  UnityEngine_GameObject_o *priceInfo2; // x0
  UnityEngine_GameObject_o *priceInfo3; // x0
  struct CommonConsumeEntity_array *commonConsumeEntity; // x8
  il2cpp_array_size_t max_length; // w8
  UnityEngine_GameObject_o *v10; // x0
  EventRecipeListViewItemDraw_o *v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  struct CommonConsumeEntity_array *v14; // x8
  CommonConsumeEntity_o *v15; // x0
  UIIconLabel_o *priceIconLabel; // x21
  int32_t v17; // w22
  int32_t v18; // w0
  const MethodInfo *v19; // x3
  struct CommonConsumeEntity_array *v20; // x8
  ItemIconComponent_o *eventItemIcon3_3; // x1
  CommonConsumeEntity_o *v22; // x2
  UnityEngine_GameObject_o *v23; // x0
  struct CommonConsumeEntity_array *v24; // x8
  CommonConsumeEntity_o *v25; // x0
  UIIconLabel_o *priceIconLabel2_1; // x21
  int32_t v27; // w22
  int32_t v28; // w0
  struct CommonConsumeEntity_array *v29; // x8
  CommonConsumeEntity_o *v30; // x0
  UIIconLabel_o *priceIconLabel2_2; // x21
  int32_t v32; // w22
  int32_t v33; // w0
  const MethodInfo *v34; // x3
  struct CommonConsumeEntity_array *v35; // x8
  struct CommonConsumeEntity_array *v36; // x8
  UnityEngine_GameObject_o *v37; // x0
  struct CommonConsumeEntity_array *v38; // x8
  CommonConsumeEntity_o *v39; // x0
  UIIconLabel_o *priceIconLabel3_1; // x21
  int32_t num; // w22
  int32_t HasNum; // w0
  struct CommonConsumeEntity_array *v43; // x8
  CommonConsumeEntity_o *v44; // x0
  UIIconLabel_o *priceIconLabel3_2; // x21
  int32_t v46; // w22
  int32_t v47; // w0
  struct CommonConsumeEntity_array *v48; // x8
  CommonConsumeEntity_o *v49; // x0
  UIIconLabel_o *priceIconLabel3_3; // x21
  int32_t v51; // w22
  int32_t v52; // w0
  const MethodInfo *v53; // x3
  struct CommonConsumeEntity_array *v54; // x8
  const MethodInfo *v55; // x3
  struct CommonConsumeEntity_array *v56; // x8
  struct CommonConsumeEntity_array *v57; // x8

  priceInfo1 = this->fields.priceInfo1;
  if ( !priceInfo1 )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive(priceInfo1, 0, 0LL);
  priceInfo2 = this->fields.priceInfo2;
  if ( !priceInfo2 )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive(priceInfo2, 0, 0LL);
  priceInfo3 = this->fields.priceInfo3;
  if ( !priceInfo3 )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive(priceInfo3, 0, 0LL);
  if ( !item )
    goto LABEL_53;
  commonConsumeEntity = item->fields.commonConsumeEntity;
  if ( commonConsumeEntity )
  {
    max_length = commonConsumeEntity->max_length;
    switch ( max_length )
    {
      case 3u:
        v37 = this->fields.priceInfo3;
        if ( v37 )
        {
          UnityEngine_GameObject__SetActive(v37, 1, 0LL);
          v38 = item->fields.commonConsumeEntity;
          if ( v38 )
          {
            if ( !v38->max_length )
              goto LABEL_54;
            v39 = v38->m_Items[0];
            if ( v39 )
            {
              priceIconLabel3_1 = this->fields.priceIconLabel3_1;
              num = v39->fields.num;
              HasNum = CommonConsumeEntity__GetUserHasNum(v39, 0LL);
              if ( priceIconLabel3_1 )
              {
                UIIconLabel__SetPurchaseDecision(priceIconLabel3_1, 27, num, HasNum, 0LL);
                v43 = item->fields.commonConsumeEntity;
                if ( v43 )
                {
                  if ( v43->max_length <= 1 )
                    goto LABEL_54;
                  v44 = v43->m_Items[1];
                  if ( v44 )
                  {
                    priceIconLabel3_2 = this->fields.priceIconLabel3_2;
                    v46 = v44->fields.num;
                    v47 = CommonConsumeEntity__GetUserHasNum(v44, 0LL);
                    if ( priceIconLabel3_2 )
                    {
                      UIIconLabel__SetPurchaseDecision(priceIconLabel3_2, 27, v46, v47, 0LL);
                      v48 = item->fields.commonConsumeEntity;
                      if ( v48 )
                      {
                        if ( v48->max_length <= 2 )
                          goto LABEL_54;
                        v49 = v48->m_Items[2];
                        if ( v49 )
                        {
                          priceIconLabel3_3 = this->fields.priceIconLabel3_3;
                          v51 = v49->fields.num;
                          v52 = CommonConsumeEntity__GetUserHasNum(v49, 0LL);
                          if ( priceIconLabel3_3 )
                          {
                            UIIconLabel__SetPurchaseDecision(priceIconLabel3_3, 27, v51, v52, 0LL);
                            v54 = item->fields.commonConsumeEntity;
                            if ( v54 )
                            {
                              if ( !v54->max_length )
                                goto LABEL_54;
                              EventRecipeListViewItemDraw__SetItemIcon(
                                v11,
                                this->fields.eventItemIcon3_1,
                                v54->m_Items[0],
                                v53);
                              v56 = item->fields.commonConsumeEntity;
                              if ( v56 )
                              {
                                if ( v56->max_length <= 1 )
                                  goto LABEL_54;
                                EventRecipeListViewItemDraw__SetItemIcon(
                                  v11,
                                  this->fields.eventItemIcon3_2,
                                  v56->m_Items[1],
                                  v55);
                                v57 = item->fields.commonConsumeEntity;
                                if ( v57 )
                                {
                                  if ( v57->max_length > 2 )
                                  {
                                    eventItemIcon3_3 = this->fields.eventItemIcon3_3;
                                    v22 = v57->m_Items[2];
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
        v23 = this->fields.priceInfo2;
        if ( v23 )
        {
          UnityEngine_GameObject__SetActive(v23, 1, 0LL);
          v24 = item->fields.commonConsumeEntity;
          if ( v24 )
          {
            if ( !v24->max_length )
              goto LABEL_54;
            v25 = v24->m_Items[0];
            if ( v25 )
            {
              priceIconLabel2_1 = this->fields.priceIconLabel2_1;
              v27 = v25->fields.num;
              v28 = CommonConsumeEntity__GetUserHasNum(v25, 0LL);
              if ( priceIconLabel2_1 )
              {
                UIIconLabel__SetPurchaseDecision(priceIconLabel2_1, 27, v27, v28, 0LL);
                v29 = item->fields.commonConsumeEntity;
                if ( v29 )
                {
                  if ( v29->max_length <= 1 )
                    goto LABEL_54;
                  v30 = v29->m_Items[1];
                  if ( v30 )
                  {
                    priceIconLabel2_2 = this->fields.priceIconLabel2_2;
                    v32 = v30->fields.num;
                    v33 = CommonConsumeEntity__GetUserHasNum(v30, 0LL);
                    if ( priceIconLabel2_2 )
                    {
                      UIIconLabel__SetPurchaseDecision(priceIconLabel2_2, 27, v32, v33, 0LL);
                      v35 = item->fields.commonConsumeEntity;
                      if ( v35 )
                      {
                        if ( !v35->max_length )
                          goto LABEL_54;
                        EventRecipeListViewItemDraw__SetItemIcon(
                          v11,
                          this->fields.eventItemIcon2_1,
                          v35->m_Items[0],
                          v34);
                        v36 = item->fields.commonConsumeEntity;
                        if ( v36 )
                        {
                          if ( v36->max_length > 1 )
                          {
                            eventItemIcon3_3 = this->fields.eventItemIcon2_2;
                            v22 = v36->m_Items[1];
                            goto LABEL_52;
                          }
LABEL_54:
                          sub_B17100(v11, v12, v13);
                          sub_B170A0();
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
        sub_B170D4();
      case 1u:
        v10 = this->fields.priceInfo1;
        if ( v10 )
        {
          UnityEngine_GameObject__SetActive(v10, 1, 0LL);
          v14 = item->fields.commonConsumeEntity;
          if ( v14 )
          {
            if ( !v14->max_length )
              goto LABEL_54;
            v15 = v14->m_Items[0];
            if ( v15 )
            {
              priceIconLabel = this->fields.priceIconLabel;
              v17 = v15->fields.num;
              v18 = CommonConsumeEntity__GetUserHasNum(v15, 0LL);
              if ( priceIconLabel )
              {
                UIIconLabel__SetPurchaseDecision(priceIconLabel, 27, v17, v18, 0LL);
                v20 = item->fields.commonConsumeEntity;
                if ( v20 )
                {
                  if ( v20->max_length )
                  {
                    eventItemIcon3_3 = this->fields.eventItemIcon;
                    v22 = v20->m_Items[0];
LABEL_52:
                    EventRecipeListViewItemDraw__SetItemIcon(v11, eventItemIcon3_3, v22, v19);
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
  WebViewManager_o *Instance; // x0
  GiftMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  struct EventRecipeGiftEntity_array *eventRecipeGiftEntity; // x8
  EventRecipeGiftEntity_o *v19; // x8
  GiftEntity_array *GiftListById; // x21
  WebViewManager_o *v21; // x0
  UserItemMaster_o *v22; // x22
  GiftEntity_o *v23; // x8
  bool v24; // w0
  UILabel_o *rewardNumTextLabel; // x22
  System_String_o *v26; // x0
  UILabel_o *v27; // x0
  GiftEntity_o *v28; // x8
  ItemIconComponent_o *rewardItemIcon; // x0
  UILabel_o *rewardNumTitleLabel; // x21
  System_String_o *v31; // x0
  struct EventRecipeGiftEntity_array *v32; // x8
  EventRecipeGiftEntity_o *v33; // x8
  UILabel_o *probabilityLabel; // x19
  System_String_o *v35; // x1
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40F610A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_GiftMaster___, item);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, v5);
    sub_B16FFC(&LocalizationManager_TypeInfo, v6);
    sub_B16FFC(&NetworkManager_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B16FFC(&StringLiteral_11006, v9);
    sub_B16FFC(&StringLiteral_340, v10);
    sub_B16FFC(&StringLiteral_11010, v11);
    sub_B16FFC(&StringLiteral_1, v12);
    sub_B16FFC(&StringLiteral_951, v13);
    byte_40F610A = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  MasterData_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !item )
    goto LABEL_41;
  eventRecipeGiftEntity = item->fields.eventRecipeGiftEntity;
  if ( !eventRecipeGiftEntity )
    goto LABEL_41;
  if ( !eventRecipeGiftEntity->max_length )
    goto LABEL_42;
  v19 = eventRecipeGiftEntity->m_Items[0];
  if ( !v19 )
    goto LABEL_41;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_41;
  GiftListById = GiftMaster__GetGiftListById(MasterData_WarQuestSelectionMaster, v19->fields.giftId, 0LL);
  v21 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v21 )
    goto LABEL_41;
  v22 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)v21,
                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  MasterData_WarQuestSelectionMaster = (GiftMaster_o *)NetworkManager__get_UserId(0LL);
  if ( !GiftListById )
    goto LABEL_41;
  if ( !GiftListById->max_length )
    goto LABEL_42;
  v23 = GiftListById->m_Items[0];
  if ( !v23 || !v22 )
    goto LABEL_41;
  v24 = UserItemMaster__TryGetEntity(
          v22,
          &entity,
          (int64_t)MasterData_WarQuestSelectionMaster,
          v23->fields.objectId,
          0LL);
  rewardNumTextLabel = this->fields.rewardNumTextLabel;
  if ( v24 )
  {
    if ( !entity )
      goto LABEL_41;
    v26 = System_Int32__ToString_38275808((int)entity + 28, (System_String_o *)StringLiteral_340, 0LL);
    if ( !rewardNumTextLabel )
      goto LABEL_41;
    UILabel__set_text(rewardNumTextLabel, v26, 0LL);
    v27 = this->fields.rewardNumTextLabel;
    if ( !v27 )
      goto LABEL_41;
    UILabel__SetCondensedScale(v27, this->fields.countLabelMaxWidth, 0LL);
  }
  else
  {
    if ( !rewardNumTextLabel )
      goto LABEL_41;
    UILabel__set_text(this->fields.rewardNumTextLabel, (System_String_o *)StringLiteral_951, 0LL);
  }
  if ( !GiftListById->max_length )
    goto LABEL_42;
  v28 = GiftListById->m_Items[0];
  if ( !v28 )
    goto LABEL_41;
  rewardItemIcon = this->fields.rewardItemIcon;
  if ( !rewardItemIcon )
    goto LABEL_41;
  ItemIconComponent__SetItem(rewardItemIcon, v28->fields.objectId, -1, 0LL);
  rewardNumTitleLabel = this->fields.rewardNumTitleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_11006, 0LL);
  if ( !rewardNumTitleLabel )
    goto LABEL_41;
  UILabel__set_text(rewardNumTitleLabel, v31, 0LL);
  v32 = item->fields.eventRecipeGiftEntity;
  if ( !v32 )
    goto LABEL_41;
  if ( !v32->max_length )
  {
LABEL_42:
    sub_B17100(MasterData_WarQuestSelectionMaster, v16, v17);
    sub_B170A0();
  }
  v33 = v32->m_Items[0];
  if ( !v33 )
    goto LABEL_41;
  probabilityLabel = (UILabel_o *)this->fields.probabilityLabel;
  if ( v33->fields.topIconId <= 0 )
  {
    v35 = (System_String_o *)StringLiteral_1;
    if ( probabilityLabel )
      goto LABEL_39;
LABEL_41:
    sub_B170D4();
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v35 = LocalizationManager__Get((System_String_o *)StringLiteral_11010, 0LL);
  if ( !probabilityLabel )
    goto LABEL_41;
LABEL_39:
  UILabel__set_text(probabilityLabel, v35, 0LL);
}