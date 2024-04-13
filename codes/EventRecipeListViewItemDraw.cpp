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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  UISprite_o *baseSprite; // x21
  Il2CppObject *v47; // x0
  System_String_o *v48; // x22
  int32_t v49; // w21
  UISprite_o *maskSprite; // x22
  __int64 v51; // x1
  int64_t gameObject; // x0
  struct EventRecipeEntity_o *eventRecipeEntity; // x8
  int32_t v54; // w21
  UISprite_o *itemIcon; // x22
  Il2CppObject *v56; // x0
  System_String_o *v57; // x23
  struct EventRecipeEntity_o *v58; // x8
  UILabel_o *messageTextLabel; // x21
  struct EventRecipeEntity_o *v60; // x8
  const MethodInfo *v61; // x2
  UISprite_o *v62; // x21
  UILabel_o *nameTextLabel; // x21
  struct EventRecipeEntity_o *v64; // x8
  struct System_Single_array *coordinate; // x22
  UILabel_o *restTimeLabel; // x21
  int64_t Time; // x23
  const MethodInfo *v68; // x2
  int32_t currentEventId; // [xsp+4h] [xbp-3Ch] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E8ED0 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)item, mode, method);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventMaster___, v7, v8, v9);
    sub_B5D5C4(&DataManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v13, v14, v15);
    sub_B5D5C4(&EventRewardRootComponent_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&int_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&NetworkManager_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_19623/*"icon_{0}"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_22415/*"shop_item_menu_{0}_2"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_22414/*"shop_item_menu_mask"*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_13534/*"TIME_REST2_NONE"*/, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_11172/*"RECIPE_EVENT_BOARD_MESSAGE"*/, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_11173/*"RECIPE_EVENT_BOARD_UNRELEASED_NAME"*/, v43, v44, v45);
    byte_42E8ED0 = 1;
  }
  entity = 0LL;
  if ( item && mode )
  {
    baseSprite = this->fields.baseSprite;
    currentEventId = item->fields.currentEventId;
    v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currentEventId);
    v48 = System_String__Format((System_String_o *)StringLiteral_22415/*"shop_item_menu_{0}_2"*/, v47, 0LL);
    if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
    }
    EventRewardRootComponent__setRewardInfoImg(baseSprite, v48, 0LL);
    v49 = item->fields.currentEventId;
    maskSprite = this->fields.maskSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI_31190412(v49, maskSprite, (System_String_o *)StringLiteral_22414/*"shop_item_menu_mask"*/, 0LL);
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
          v54 = item->fields.currentEventId;
          itemIcon = this->fields.itemIcon;
          currentEventId = eventRecipeEntity->fields.iconId;
          v56 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currentEventId);
          v57 = System_String__Format((System_String_o *)StringLiteral_19623/*"icon_{0}"*/, v56, 0LL);
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          gameObject = AtlasManager__SetEventUI_31190412(v54, itemIcon, v57, 0LL);
          v58 = item->fields.eventRecipeEntity;
          if ( !v58 )
            goto LABEL_63;
          gameObject = (int64_t)this->fields.nameTextLabel;
          if ( !gameObject )
            goto LABEL_63;
          UILabel__set_text((UILabel_o *)gameObject, v58->fields.name, 0LL);
          messageTextLabel = this->fields.messageTextLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11172/*"RECIPE_EVENT_BOARD_MESSAGE"*/, 0LL);
          v60 = item->fields.eventRecipeEntity;
          if ( !v60 )
            goto LABEL_63;
          gameObject = (int64_t)System_String__Format(
                                  (System_String_o *)gameObject,
                                  (Il2CppObject *)v60->fields.name,
                                  0LL);
          if ( !messageTextLabel )
            goto LABEL_63;
          UILabel__set_text(messageTextLabel, (System_String_o *)gameObject, 0LL);
        }
        else
        {
          v62 = this->fields.itemIcon;
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__SetItem(v62, 8007, 0LL);
          nameTextLabel = (UILabel_o *)this->fields.nameTextLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11173/*"RECIPE_EVENT_BOARD_UNRELEASED_NAME"*/, 0LL);
          if ( !nameTextLabel )
            goto LABEL_63;
          UILabel__set_text(nameTextLabel, (System_String_o *)gameObject, 0LL);
          v64 = item->fields.eventRecipeEntity;
          if ( !v64 )
            goto LABEL_63;
          gameObject = (int64_t)this->fields.messageTextLabel;
          if ( !gameObject )
            goto LABEL_63;
          UILabel__set_text((UILabel_o *)gameObject, v64->fields.closedMessage, 0LL);
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
        gameObject = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventMaster___);
        if ( !gameObject )
          goto LABEL_63;
        if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                (DataMasterBase_WarMaster__WarEntity__int__o *)gameObject,
                &entity,
                item->fields.currentEventId,
                (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
        {
LABEL_57:
          EventRecipeListViewItemDraw__SetPriceIconText(this, item, v61);
          EventRecipeListViewItemDraw__SetRewardIconText(this, item, v68);
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
            gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13534/*"TIME_REST2_NONE"*/, 0LL);
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
    sub_B5D69C(gameObject, v51);
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

  if ( (byte_42E8ED2 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)itemIcon, (_DWORD)consumeEntity, method);
    byte_42E8ED2 = 1;
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
      sub_B5D69C(v6, v7);
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
                          v38 = sub_B5D6C8(priceInfo1);
                          sub_B5D668(v38, 0LL);
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
        sub_B5D69C(priceInfo1, item);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int64_t Instance; // x0
  System_String_o *v34; // x1
  struct EventRecipeGiftEntity_array *eventRecipeGiftEntity; // x8
  EventRecipeGiftEntity_o *v36; // x8
  GiftEntity_array *GiftListById; // x21
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x22
  GiftEntity_o *v39; // x8
  UILabel_o *rewardNumTextLabel; // x22
  GiftEntity_o *v41; // x8
  UILabel_o *rewardNumTitleLabel; // x21
  struct EventRecipeGiftEntity_array *v43; // x8
  EventRecipeGiftEntity_o *v44; // x8
  UILabel_o *probabilityLabel; // x19
  __int64 v46; // x0
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E8ED1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_GiftMaster___, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserItemMaster___, v6, v7, v8);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&NetworkManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_11175/*"RECIPE_EVENT_HAVE_NUM"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_346/*"#,0"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_11179/*"RECIPE_EVENT_PROBABILITY_MESSAGE"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_1/*""*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_973/*"0"*/, v30, v31, v32);
    byte_42E8ED1 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !item )
    goto LABEL_41;
  eventRecipeGiftEntity = item->fields.eventRecipeGiftEntity;
  if ( !eventRecipeGiftEntity )
    goto LABEL_41;
  if ( !eventRecipeGiftEntity->max_length )
    goto LABEL_42;
  v36 = eventRecipeGiftEntity->m_Items[0];
  if ( !v36 )
    goto LABEL_41;
  if ( !Instance )
    goto LABEL_41;
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, v36->fields.giftId, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
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
  v39 = GiftListById->m_Items[0];
  if ( !v39 || !MasterData_WarQuestSelectionMaster )
    goto LABEL_41;
  Instance = UserItemMaster__TryGetEntity(
               MasterData_WarQuestSelectionMaster,
               &entity,
               Instance,
               v39->fields.objectId,
               0LL);
  rewardNumTextLabel = this->fields.rewardNumTextLabel;
  if ( (Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_41;
    Instance = (int64_t)System_Int32__ToString_39741776((int)entity + 28, (System_String_o *)StringLiteral_346/*"#,0"*/, 0LL);
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
    UILabel__set_text(this->fields.rewardNumTextLabel, (System_String_o *)StringLiteral_973/*"0"*/, 0LL);
  }
  if ( !GiftListById->max_length )
    goto LABEL_42;
  v41 = GiftListById->m_Items[0];
  if ( !v41 )
    goto LABEL_41;
  Instance = (int64_t)this->fields.rewardItemIcon;
  if ( !Instance )
    goto LABEL_41;
  ItemIconComponent__SetItem((ItemIconComponent_o *)Instance, v41->fields.objectId, -1, 0LL);
  rewardNumTitleLabel = this->fields.rewardNumTitleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11175/*"RECIPE_EVENT_HAVE_NUM"*/, 0LL);
  if ( !rewardNumTitleLabel )
    goto LABEL_41;
  UILabel__set_text(rewardNumTitleLabel, (System_String_o *)Instance, 0LL);
  v43 = item->fields.eventRecipeGiftEntity;
  if ( !v43 )
    goto LABEL_41;
  if ( !v43->max_length )
  {
LABEL_42:
    v46 = sub_B5D6C8(Instance);
    sub_B5D668(v46, 0LL);
  }
  v44 = v43->m_Items[0];
  if ( !v44 )
    goto LABEL_41;
  probabilityLabel = (UILabel_o *)this->fields.probabilityLabel;
  if ( v44->fields.topIconId <= 0 )
  {
    v34 = (System_String_o *)StringLiteral_1/*""*/;
    if ( probabilityLabel )
      goto LABEL_39;
LABEL_41:
    sub_B5D69C(Instance, v34);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11179/*"RECIPE_EVENT_PROBABILITY_MESSAGE"*/, 0LL);
  v34 = (System_String_o *)Instance;
  if ( !probabilityLabel )
    goto LABEL_41;
LABEL_39:
  UILabel__set_text(probabilityLabel, v34, 0LL);
}