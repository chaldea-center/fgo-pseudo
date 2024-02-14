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

  if ( (byte_42150A1 & 1) == 0 )
  {
    sub_B0D8A4(&EventTowerListViewItemDraw_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_18664/*"event_tower_rewardget_"*/, v8);
    sub_B0D8A4(&StringLiteral_18665/*"event_towerbanner_"*/, v9);
    byte_42150A1 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventTowerListViewItemDraw_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_18665/*"event_towerbanner_"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18665/*"event_towerbanner_"*/;
  sub_B0D840(static_fields, v11, v2, v3, v4, v5, v6, v7);
  v12 = EventTowerListViewItemDraw_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_18664/*"event_tower_rewardget_"*/;
  v12->REWARD_GET_NAME = (struct System_String_o *)StringLiteral_18664/*"event_tower_rewardget_"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v12->REWARD_GET_NAME, v13, v14, v15, v16, v17, v18, v19);
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
  struct EventTowerRewardEntity_o *itemInfo; // x8
  System_String_o *v13; // x21
  System_String_o *v14; // x0
  System_String_o *v15; // x0
  System_String_o *BANNER_NAME; // x21
  System_String_o *v17; // x0
  System_String_o *v18; // x21
  UISprite_o *baseSprite; // x22
  struct GiftEntity_o *clearReward; // x8
  int32_t v21; // w3
  struct EventTowerRewardEntity_o *v22; // x8
  int32_t iconId; // w1
  UILabel_o *rewardCondMessage; // x21
  const MethodInfo *v25; // x1
  struct EventTowerRewardEntity_o *v26; // x8
  System_String_o *v27; // x21
  System_String_o *v28; // x0
  System_String_o *v29; // x0
  System_String_o *REWARD_GET_NAME; // x21
  System_String_o *v31; // x0
  System_String_o *v32; // x21
  UISprite_o *rewardGetSprite; // x22
  UILabel_o *v34; // x19
  int32_t eventId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42150A0 & 1) == 0 )
  {
    sub_B0D8A4(&EventRewardRootComponent_TypeInfo, item);
    sub_B0D8A4(&EventTowerListViewItemDraw_TypeInfo, v7);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_5756/*"EVENT_TOWER_HIDE_COND"*/, v9);
    sub_B0D8A4(&StringLiteral_969/*"00"*/, v10);
    byte_42150A0 = 1;
  }
  eventId = 0;
  if ( item && mode )
  {
    rewardGetInfo = this->fields.rewardGetInfo;
    if ( rewardGetInfo )
    {
      UnityEngine_GameObject__SetActive(rewardGetInfo, 0, 0LL);
      rewardGetInfo = (UnityEngine_GameObject_o *)this->fields.maskSprite;
      if ( rewardGetInfo )
      {
        rewardGetInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rewardGetInfo, 0LL);
        if ( rewardGetInfo )
        {
          UnityEngine_GameObject__SetActive(rewardGetInfo, 0, 0LL);
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
              v17 = System_Int32__ToString((int32_t)&eventId, 0LL);
              v15 = System_String__Concat_43852188(BANNER_NAME, v17, (System_String_o *)StringLiteral_969/*"00"*/, 0LL);
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
              v13 = EventTowerListViewItemDraw_TypeInfo->static_fields->BANNER_NAME;
              eventId = itemInfo->fields.boardImageId;
              v14 = System_Int32__ToString((int32_t)&eventId, 0LL);
              v15 = System_String__Concat_43849904(v13, v14, 0LL);
            }
            v18 = v15;
            baseSprite = this->fields.baseSprite;
            if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
            }
            rewardGetInfo = (UnityEngine_GameObject_o *)EventRewardRootComponent__setRewardInfoImg(baseSprite, v18, 0LL);
            clearReward = item->fields.clearReward;
            if ( clearReward )
            {
              rewardGetInfo = (UnityEngine_GameObject_o *)this->fields.itemIcon;
              if ( rewardGetInfo )
              {
                v21 = clearReward->fields.num < 2 ? -1 : clearReward->fields.num;
                ItemIconComponent__SetGift(
                  (ItemIconComponent_o *)rewardGetInfo,
                  clearReward->fields.type,
                  clearReward->fields.objectId,
                  v21,
                  0,
                  0LL);
                v22 = item->fields.itemInfo;
                if ( v22 )
                {
                  iconId = v22->fields.iconId;
                  if ( iconId >= 1 )
                  {
                    rewardGetInfo = (UnityEngine_GameObject_o *)this->fields.itemIcon;
                    if ( !rewardGetInfo )
                      goto LABEL_58;
                    ItemIconComponent__SetItemImage((ItemIconComponent_o *)rewardGetInfo, iconId, 0LL);
                  }
                  rewardGetInfo = (UnityEngine_GameObject_o *)this->fields.rewardName;
                  if ( rewardGetInfo )
                  {
                    UILabel__set_text((UILabel_o *)rewardGetInfo, item->fields.rewardName, 0LL);
                    rewardGetInfo = (UnityEngine_GameObject_o *)this->fields.rewardNum;
                    if ( rewardGetInfo )
                    {
                      UILabel__set_text((UILabel_o *)rewardGetInfo, item->fields.rewardNum, 0LL);
                      rewardCondMessage = this->fields.rewardCondMessage;
                      rewardGetInfo = (UnityEngine_GameObject_o *)EventTowerListViewItem__get_BoardMessage(item, v25);
                      if ( rewardCondMessage )
                      {
                        UILabel__set_text(rewardCondMessage, (System_String_o *)rewardGetInfo, 0LL);
                        if ( item->fields.isClearFloor )
                        {
                          rewardGetInfo = this->fields.rewardGetInfo;
                          if ( !rewardGetInfo )
                            goto LABEL_58;
                          UnityEngine_GameObject__SetActive(rewardGetInfo, 1, 0LL);
                          v26 = item->fields.itemInfo;
                          if ( !v26 )
                            goto LABEL_58;
                          if ( v26->fields.boardImageId < 1 )
                          {
                            if ( (WORD1(EventTowerListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                              && !EventTowerListViewItemDraw_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(EventTowerListViewItemDraw_TypeInfo);
                              v26 = item->fields.itemInfo;
                              if ( !v26 )
                                goto LABEL_58;
                            }
                            REWARD_GET_NAME = EventTowerListViewItemDraw_TypeInfo->static_fields->REWARD_GET_NAME;
                            eventId = v26->fields.eventId;
                            v31 = System_Int32__ToString((int32_t)&eventId, 0LL);
                            v29 = System_String__Concat_43852188(
                                    REWARD_GET_NAME,
                                    v31,
                                    (System_String_o *)StringLiteral_969/*"00"*/,
                                    0LL);
                          }
                          else
                          {
                            if ( (WORD1(EventTowerListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                              && !EventTowerListViewItemDraw_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(EventTowerListViewItemDraw_TypeInfo);
                              v26 = item->fields.itemInfo;
                              if ( !v26 )
                                goto LABEL_58;
                            }
                            v27 = EventTowerListViewItemDraw_TypeInfo->static_fields->REWARD_GET_NAME;
                            eventId = v26->fields.boardImageId;
                            v28 = System_Int32__ToString((int32_t)&eventId, 0LL);
                            v29 = System_String__Concat_43849904(v27, v28, 0LL);
                          }
                          v32 = v29;
                          rewardGetSprite = this->fields.rewardGetSprite;
                          if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
                          }
                          EventRewardRootComponent__setRewardInfoImg(rewardGetSprite, v32, 0LL);
                        }
                        if ( item->fields.isOpenFloor )
                          return;
                        rewardGetInfo = (UnityEngine_GameObject_o *)this->fields.maskSprite;
                        if ( rewardGetInfo )
                        {
                          rewardGetInfo = UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)rewardGetInfo,
                                            0LL);
                          if ( rewardGetInfo )
                          {
                            UnityEngine_GameObject__SetActive(rewardGetInfo, 1, 0LL);
                            v34 = this->fields.rewardCondMessage;
                            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                              && !LocalizationManager_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            }
                            rewardGetInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                          (System_String_o *)StringLiteral_5756/*"EVENT_TOWER_HIDE_COND"*/,
                                                                          0LL);
                            if ( v34 )
                            {
                              UILabel__set_text(v34, (System_String_o *)rewardGetInfo, 0LL);
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
    sub_B0D97C(rewardGetInfo);
  }
}