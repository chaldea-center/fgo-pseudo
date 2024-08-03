void __fastcall EventTowerListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t v6; // w1
  struct EventTowerListViewItemDraw_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A0066B & 1) == 0 )
  {
    sub_1B640C8(&EventTowerListViewItemDraw_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_19197/*"event_tower_rewardget_"*/, v4);
    sub_1B640C8(&StringLiteral_19198/*"event_towerbanner_"*/, v5);
    byte_4A0066B = 1;
  }
  EventTowerListViewItemDraw_TypeInfo->static_fields->BANNER_NAME = (struct System_String_o *)StringLiteral_19198/*"event_towerbanner_"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)EventTowerListViewItemDraw_TypeInfo->static_fields,
    StringLiteral_19198/*"event_towerbanner_"*/,
    v2,
    v3);
  v6 = StringLiteral_19197/*"event_tower_rewardget_"*/;
  static_fields = EventTowerListViewItemDraw_TypeInfo->static_fields;
  static_fields->REWARD_GET_NAME = (struct System_String_o *)StringLiteral_19197/*"event_tower_rewardget_"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->REWARD_GET_NAME, v6, v8, v9);
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
  void *rewardGetInfo; // x0
  struct EventTowerRewardEntity_o *itemInfo; // x8
  int boardImageId; // w22
  System_String_o *v14; // x21
  System_String_o *v15; // x0
  System_String_o *v16; // x0
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
  int v27; // w22
  System_String_o *v28; // x21
  System_String_o *v29; // x0
  System_String_o *v30; // x0
  System_String_o *v31; // x0
  System_String_o *v32; // x21
  UISprite_o *rewardGetSprite; // x22
  UILabel_o *v34; // x19
  int32_t eventId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A0066A & 1) == 0 )
  {
    sub_1B640C8(&EventRewardRootComponent_TypeInfo, item);
    sub_1B640C8(&EventTowerListViewItemDraw_TypeInfo, v7);
    sub_1B640C8(&LocalizationManager_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_5707/*"EVENT_TOWER_HIDE_COND"*/, v9);
    sub_1B640C8(&StringLiteral_1222/*"00"*/, v10);
    byte_4A0066A = 1;
  }
  if ( item && mode )
  {
    rewardGetInfo = this->fields.rewardGetInfo;
    if ( rewardGetInfo )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rewardGetInfo, 0, 0LL);
      rewardGetInfo = this->fields.maskSprite;
      if ( rewardGetInfo )
      {
        rewardGetInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rewardGetInfo, 0LL);
        if ( rewardGetInfo )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rewardGetInfo, 0, 0LL);
          itemInfo = item->fields.itemInfo;
          if ( itemInfo )
          {
            boardImageId = itemInfo->fields.boardImageId;
            rewardGetInfo = EventTowerListViewItemDraw_TypeInfo;
            if ( !EventTowerListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventTowerListViewItemDraw_TypeInfo);
              rewardGetInfo = EventTowerListViewItemDraw_TypeInfo;
              itemInfo = item->fields.itemInfo;
            }
            v14 = (System_String_o *)**((_QWORD **)rewardGetInfo + 23);
            if ( boardImageId < 1 )
            {
              if ( !itemInfo )
                goto LABEL_51;
              eventId = itemInfo->fields.eventId;
              v17 = System_Int32__ToString((int32_t)&eventId, 0LL);
              v16 = System_String__Concat_61386656(v14, v17, (System_String_o *)StringLiteral_1222/*"00"*/, 0LL);
            }
            else
            {
              if ( !itemInfo )
                goto LABEL_51;
              eventId = itemInfo->fields.boardImageId;
              v15 = System_Int32__ToString((int32_t)&eventId, 0LL);
              v16 = System_String__Concat_61375396(v14, v15, 0LL);
            }
            v18 = v16;
            baseSprite = this->fields.baseSprite;
            if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
            rewardGetInfo = (void *)EventRewardRootComponent__setRewardInfoImg(baseSprite, v18, 0LL);
            clearReward = item->fields.clearReward;
            if ( clearReward )
            {
              rewardGetInfo = this->fields.itemIcon;
              if ( rewardGetInfo )
              {
                v21 = clearReward->fields.num <= 1 ? -1 : clearReward->fields.num;
                ItemIconComponent__SetGift_37829292(
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
                    rewardGetInfo = this->fields.itemIcon;
                    if ( !rewardGetInfo )
                      goto LABEL_51;
                    ItemIconComponent__SetItemImage((ItemIconComponent_o *)rewardGetInfo, iconId, 0LL);
                  }
                  rewardGetInfo = this->fields.rewardName;
                  if ( rewardGetInfo )
                  {
                    UILabel__set_text((UILabel_o *)rewardGetInfo, item->fields.rewardName, 0LL);
                    rewardGetInfo = this->fields.rewardNum;
                    if ( rewardGetInfo )
                    {
                      UILabel__set_text((UILabel_o *)rewardGetInfo, item->fields.rewardNum, 0LL);
                      rewardCondMessage = this->fields.rewardCondMessage;
                      rewardGetInfo = EventTowerListViewItem__get_BoardMessage(item, v25);
                      if ( rewardCondMessage )
                      {
                        UILabel__set_text(rewardCondMessage, (System_String_o *)rewardGetInfo, 0LL);
                        if ( item->fields.isClearFloor )
                        {
                          rewardGetInfo = this->fields.rewardGetInfo;
                          if ( !rewardGetInfo )
                            goto LABEL_51;
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rewardGetInfo, 1, 0LL);
                          v26 = item->fields.itemInfo;
                          if ( !v26 )
                            goto LABEL_51;
                          rewardGetInfo = EventTowerListViewItemDraw_TypeInfo;
                          v27 = v26->fields.boardImageId;
                          if ( !EventTowerListViewItemDraw_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(EventTowerListViewItemDraw_TypeInfo);
                            rewardGetInfo = EventTowerListViewItemDraw_TypeInfo;
                            v26 = item->fields.itemInfo;
                          }
                          v28 = *(System_String_o **)(*((_QWORD *)rewardGetInfo + 23) + 8LL);
                          if ( v27 < 1 )
                          {
                            if ( !v26 )
                              goto LABEL_51;
                            eventId = v26->fields.eventId;
                            v31 = System_Int32__ToString((int32_t)&eventId, 0LL);
                            v30 = System_String__Concat_61386656(v28, v31, (System_String_o *)StringLiteral_1222/*"00"*/, 0LL);
                          }
                          else
                          {
                            if ( !v26 )
                              goto LABEL_51;
                            eventId = v26->fields.boardImageId;
                            v29 = System_Int32__ToString((int32_t)&eventId, 0LL);
                            v30 = System_String__Concat_61375396(v28, v29, 0LL);
                          }
                          v32 = v30;
                          rewardGetSprite = this->fields.rewardGetSprite;
                          if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
                          EventRewardRootComponent__setRewardInfoImg(rewardGetSprite, v32, 0LL);
                        }
                        if ( item->fields.isOpenFloor )
                          return;
                        rewardGetInfo = this->fields.maskSprite;
                        if ( rewardGetInfo )
                        {
                          rewardGetInfo = UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)rewardGetInfo,
                                            0LL);
                          if ( rewardGetInfo )
                          {
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rewardGetInfo, 1, 0LL);
                            v34 = this->fields.rewardCondMessage;
                            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            rewardGetInfo = LocalizationManager__Get((System_String_o *)StringLiteral_5707/*"EVENT_TOWER_HIDE_COND"*/, 0LL);
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
LABEL_51:
    sub_1B64324(rewardGetInfo);
  }
}