void __fastcall EventTowerListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v11; // x1
  struct EventTowerListViewItemDraw_StaticFields *v12; // x0
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40F9BB4 & 1) == 0 )
  {
    sub_B16FFC(&EventTowerListViewItemDraw_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_18536, v8);
    sub_B16FFC(&StringLiteral_18537, v9);
    byte_40F9BB4 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventTowerListViewItemDraw_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_18537;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18537;
  sub_B16F98(static_fields, v11, v2, v3, v4, v5, v6, v7);
  v12 = EventTowerListViewItemDraw_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_18536;
  v12->REWARD_GET_NAME = (struct System_String_o *)StringLiteral_18536;
  sub_B16F98((BattleServantConfConponent_o *)&v12->REWARD_GET_NAME, v13, v14, v15, v16, v17, v18, v19);
}


void __fastcall EventTowerListViewItemDraw___ctor(EventTowerListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventTowerListViewItemDraw__SetInput(
        EventTowerListViewItemDraw_o *this,
        EventTowerListViewItem_o *item,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventTowerListViewItemDraw__SetItem(
        EventTowerListViewItemDraw_o *this,
        EventTowerListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_GameObject_o *rewardGetInfo; // x0
  UnityEngine_Component_o *maskSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct EventTowerRewardEntity_o *itemInfo; // x8
  System_String_o *v15; // x21
  System_String_o *v16; // x0
  System_String_o *v17; // x0
  System_String_o *BANNER_NAME; // x21
  System_String_o *v19; // x0
  System_String_o *v20; // x21
  UISprite_o *baseSprite; // x22
  struct GiftEntity_o *clearReward; // x8
  ItemIconComponent_o *itemIcon; // x0
  int32_t v24; // w3
  struct EventTowerRewardEntity_o *v25; // x8
  int32_t iconId; // w1
  ItemIconComponent_o *v27; // x0
  UILabel_o *rewardName; // x0
  UILabel_o *rewardNum; // x0
  UILabel_o *rewardCondMessage; // x21
  const MethodInfo *v31; // x1
  System_String_o *BoardMessage; // x0
  UnityEngine_GameObject_o *v33; // x0
  struct EventTowerRewardEntity_o *v34; // x8
  System_String_o *v35; // x21
  System_String_o *v36; // x0
  System_String_o *v37; // x0
  System_String_o *REWARD_GET_NAME; // x21
  System_String_o *v39; // x0
  System_String_o *v40; // x21
  UISprite_o *rewardGetSprite; // x22
  UnityEngine_Component_o *v42; // x0
  UnityEngine_GameObject_o *v43; // x0
  UILabel_o *v44; // x19
  System_String_o *v45; // x0
  int32_t eventId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40F9BB3 & 1) == 0 )
  {
    sub_B16FFC(&EventRewardRootComponent_TypeInfo, item);
    sub_B16FFC(&EventTowerListViewItemDraw_TypeInfo, v7);
    sub_B16FFC(&LocalizationManager_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_5722, v9);
    sub_B16FFC(&StringLiteral_960, v10);
    byte_40F9BB3 = 1;
  }
  eventId = 0;
  if ( item && mode )
  {
    rewardGetInfo = this->fields.rewardGetInfo;
    if ( rewardGetInfo )
    {
      UnityEngine_GameObject__SetActive(rewardGetInfo, 0, 0LL);
      maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
      if ( maskSprite )
      {
        gameObject = UnityEngine_Component__get_gameObject(maskSprite, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
          itemInfo = item->fields.itemInfo;
          if ( itemInfo )
          {
            if ( itemInfo->fields.boardImageId < 1 )
            {
              if ( (WORD1(EventTowerListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                && !EventTowerListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(EventTowerListViewItemDraw_TypeInfo);
                itemInfo = item->fields.itemInfo;
                if ( !itemInfo )
                  goto LABEL_58;
              }
              BANNER_NAME = EventTowerListViewItemDraw_TypeInfo->static_fields->BANNER_NAME;
              eventId = itemInfo->fields.eventId;
              v19 = System_Int32__ToString((int32_t)&eventId, 0LL);
              v17 = System_String__Concat_43746016(BANNER_NAME, v19, (System_String_o *)StringLiteral_960, 0LL);
            }
            else
            {
              if ( (WORD1(EventTowerListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                && !EventTowerListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(EventTowerListViewItemDraw_TypeInfo);
                itemInfo = item->fields.itemInfo;
                if ( !itemInfo )
                  goto LABEL_58;
              }
              v15 = EventTowerListViewItemDraw_TypeInfo->static_fields->BANNER_NAME;
              eventId = itemInfo->fields.boardImageId;
              v16 = System_Int32__ToString((int32_t)&eventId, 0LL);
              v17 = System_String__Concat_43743732(v15, v16, 0LL);
            }
            v20 = v17;
            baseSprite = this->fields.baseSprite;
            if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
            }
            EventRewardRootComponent__setRewardInfoImg(baseSprite, v20, 0LL);
            clearReward = item->fields.clearReward;
            if ( clearReward )
            {
              itemIcon = this->fields.itemIcon;
              if ( itemIcon )
              {
                v24 = clearReward->fields.num < 2 ? -1 : clearReward->fields.num;
                ItemIconComponent__SetGift(
                  itemIcon,
                  clearReward->fields.type,
                  clearReward->fields.objectId,
                  v24,
                  0,
                  0LL);
                v25 = item->fields.itemInfo;
                if ( v25 )
                {
                  iconId = v25->fields.iconId;
                  if ( iconId >= 1 )
                  {
                    v27 = this->fields.itemIcon;
                    if ( !v27 )
                      goto LABEL_58;
                    ItemIconComponent__SetItemImage(v27, iconId, 0LL);
                  }
                  rewardName = this->fields.rewardName;
                  if ( rewardName )
                  {
                    UILabel__set_text(rewardName, item->fields.rewardName, 0LL);
                    rewardNum = this->fields.rewardNum;
                    if ( rewardNum )
                    {
                      UILabel__set_text(rewardNum, item->fields.rewardNum, 0LL);
                      rewardCondMessage = this->fields.rewardCondMessage;
                      BoardMessage = EventTowerListViewItem__get_BoardMessage(item, v31);
                      if ( rewardCondMessage )
                      {
                        UILabel__set_text(rewardCondMessage, BoardMessage, 0LL);
                        if ( item->fields.isClearFloor )
                        {
                          v33 = this->fields.rewardGetInfo;
                          if ( !v33 )
                            goto LABEL_58;
                          UnityEngine_GameObject__SetActive(v33, 1, 0LL);
                          v34 = item->fields.itemInfo;
                          if ( !v34 )
                            goto LABEL_58;
                          if ( v34->fields.boardImageId < 1 )
                          {
                            if ( (WORD1(EventTowerListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                              && !EventTowerListViewItemDraw_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(EventTowerListViewItemDraw_TypeInfo);
                              v34 = item->fields.itemInfo;
                              if ( !v34 )
                                goto LABEL_58;
                            }
                            REWARD_GET_NAME = EventTowerListViewItemDraw_TypeInfo->static_fields->REWARD_GET_NAME;
                            eventId = v34->fields.eventId;
                            v39 = System_Int32__ToString((int32_t)&eventId, 0LL);
                            v37 = System_String__Concat_43746016(
                                    REWARD_GET_NAME,
                                    v39,
                                    (System_String_o *)StringLiteral_960,
                                    0LL);
                          }
                          else
                          {
                            if ( (WORD1(EventTowerListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                              && !EventTowerListViewItemDraw_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(EventTowerListViewItemDraw_TypeInfo);
                              v34 = item->fields.itemInfo;
                              if ( !v34 )
                                goto LABEL_58;
                            }
                            v35 = EventTowerListViewItemDraw_TypeInfo->static_fields->REWARD_GET_NAME;
                            eventId = v34->fields.boardImageId;
                            v36 = System_Int32__ToString((int32_t)&eventId, 0LL);
                            v37 = System_String__Concat_43743732(v35, v36, 0LL);
                          }
                          v40 = v37;
                          rewardGetSprite = this->fields.rewardGetSprite;
                          if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
                          }
                          EventRewardRootComponent__setRewardInfoImg(rewardGetSprite, v40, 0LL);
                        }
                        if ( item->fields.isOpenFloor )
                          return;
                        v42 = (UnityEngine_Component_o *)this->fields.maskSprite;
                        if ( v42 )
                        {
                          v43 = UnityEngine_Component__get_gameObject(v42, 0LL);
                          if ( v43 )
                          {
                            UnityEngine_GameObject__SetActive(v43, 1, 0LL);
                            v44 = this->fields.rewardCondMessage;
                            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                              && !LocalizationManager_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            }
                            v45 = LocalizationManager__Get((System_String_o *)StringLiteral_5722, 0LL);
                            if ( v44 )
                            {
                              UILabel__set_text(v44, v45, 0LL);
                              return;
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
LABEL_58:
    sub_B170D4();
  }
}