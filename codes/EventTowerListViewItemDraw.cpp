void EventTowerListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct EventTowerListViewItemDraw_StaticFields *static_fields; // x0

  if ( (byte_4C322F0 & 1) == 0 )
  {
    sub_1C32C20(&EventTowerListViewItemDraw_TypeInfo);
    sub_1C32C20(&StringLiteral_19292/*"event_tower_rewardget_"*/);
    sub_1C32C20(&StringLiteral_19293/*"event_towerbanner_"*/);
    byte_4C322F0 = 1;
  }
  EventTowerListViewItemDraw_TypeInfo->static_fields->BANNER_NAME = (struct System_String_o *)StringLiteral_19293/*"event_towerbanner_"*/;
  sub_1C32BC4(EventTowerListViewItemDraw_TypeInfo->static_fields, StringLiteral_19293/*"event_towerbanner_"*/);
  v1 = StringLiteral_19292/*"event_tower_rewardget_"*/;
  static_fields = EventTowerListViewItemDraw_TypeInfo->static_fields;
  static_fields->REWARD_GET_NAME = (struct System_String_o *)StringLiteral_19292/*"event_tower_rewardget_"*/;
  sub_1C32BC4(&static_fields->REWARD_GET_NAME, v1);
}


void EventTowerListViewItemDraw___ctor(EventTowerListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventTowerListViewItemDraw__SetInput(
        EventTowerListViewItemDraw_o *this,
        EventTowerListViewItem_o *item,
        const MethodInfo *method)
{
  ;
}


void EventTowerListViewItemDraw__SetItem(
        EventTowerListViewItemDraw_o *this,
        EventTowerListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  void *rewardGetInfo; // x0
  struct EventTowerRewardEntity_o *itemInfo; // x8
  int boardImageId; // w22
  System_String_o *v10; // x21
  System_String_o *v11; // x0
  System_String_o *v12; // x0
  System_String_o *v13; // x0
  System_String_o *v14; // x21
  UISprite_o *baseSprite; // x22
  struct GiftEntity_o *clearReward; // x8
  int32_t objectId; // w2
  int32_t type; // w1
  int v19; // w8
  struct EventTowerRewardEntity_o *v20; // x8
  int32_t iconId; // w1
  UILabel_o *rewardCondMessage; // x21
  const MethodInfo *v23; // x1
  struct EventTowerRewardEntity_o *v24; // x8
  int v25; // w22
  System_String_o *v26; // x21
  System_String_o *v27; // x0
  System_String_o *v28; // x0
  System_String_o *v29; // x0
  System_String_o *v30; // x21
  UISprite_o *rewardGetSprite; // x22
  UILabel_o *v32; // x19
  int32_t eventId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C322EF & 1) == 0 )
  {
    sub_1C32C20(&EventRewardRootComponent_TypeInfo);
    sub_1C32C20(&EventTowerListViewItemDraw_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_5737/*"EVENT_TOWER_HIDE_COND"*/);
    sub_1C32C20(&StringLiteral_1129/*"00"*/);
    byte_4C322EF = 1;
  }
  if ( item && mode )
  {
    rewardGetInfo = this->fields.rewardGetInfo;
    if ( rewardGetInfo )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rewardGetInfo, 0, 0);
      rewardGetInfo = this->fields.maskSprite;
      if ( rewardGetInfo )
      {
        rewardGetInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rewardGetInfo, 0);
        if ( rewardGetInfo )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rewardGetInfo, 0, 0);
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
            v10 = (System_String_o *)**((_QWORD **)rewardGetInfo + 23);
            if ( boardImageId < 1 )
            {
              if ( !itemInfo )
                goto LABEL_51;
              eventId = itemInfo->fields.eventId;
              v13 = System_Int32__ToString((int32_t)&eventId, 0);
              v12 = System_String__Concat_63556792(v10, v13, (System_String_o *)StringLiteral_1129/*"00"*/, 0);
            }
            else
            {
              if ( !itemInfo )
                goto LABEL_51;
              eventId = itemInfo->fields.boardImageId;
              v11 = System_Int32__ToString((int32_t)&eventId, 0);
              v12 = System_String__Concat_63518544(v10, v11, 0);
            }
            v14 = v12;
            baseSprite = this->fields.baseSprite;
            if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
            rewardGetInfo = (void *)EventRewardRootComponent__setRewardInfoImg(baseSprite, v14, 0);
            clearReward = item->fields.clearReward;
            if ( clearReward )
            {
              rewardGetInfo = this->fields.itemIcon;
              if ( rewardGetInfo )
              {
                objectId = clearReward->fields.objectId;
                type = clearReward->fields.type;
                v19 = clearReward->fields.num <= 1 ? -1 : clearReward->fields.num;
                ItemIconComponent__SetGift_40822420((ItemIconComponent_o *)rewardGetInfo, type, objectId, v19, 0, 0);
                v20 = item->fields.itemInfo;
                if ( v20 )
                {
                  iconId = v20->fields.iconId;
                  if ( iconId >= 1 )
                  {
                    rewardGetInfo = this->fields.itemIcon;
                    if ( !rewardGetInfo )
                      goto LABEL_51;
                    ItemIconComponent__SetItemImage((ItemIconComponent_o *)rewardGetInfo, iconId, 0);
                  }
                  rewardGetInfo = this->fields.rewardName;
                  if ( rewardGetInfo )
                  {
                    UILabel__set_text((UILabel_o *)rewardGetInfo, item->fields.rewardName, 0);
                    rewardGetInfo = this->fields.rewardNum;
                    if ( rewardGetInfo )
                    {
                      UILabel__set_text((UILabel_o *)rewardGetInfo, item->fields.rewardNum, 0);
                      rewardCondMessage = this->fields.rewardCondMessage;
                      rewardGetInfo = EventTowerListViewItem__get_BoardMessage(item, v23);
                      if ( rewardCondMessage )
                      {
                        UILabel__set_text(rewardCondMessage, (System_String_o *)rewardGetInfo, 0);
                        if ( item->fields.isClearFloor )
                        {
                          rewardGetInfo = this->fields.rewardGetInfo;
                          if ( !rewardGetInfo )
                            goto LABEL_51;
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rewardGetInfo, 1, 0);
                          v24 = item->fields.itemInfo;
                          if ( !v24 )
                            goto LABEL_51;
                          rewardGetInfo = EventTowerListViewItemDraw_TypeInfo;
                          v25 = v24->fields.boardImageId;
                          if ( !EventTowerListViewItemDraw_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(EventTowerListViewItemDraw_TypeInfo);
                            rewardGetInfo = EventTowerListViewItemDraw_TypeInfo;
                            v24 = item->fields.itemInfo;
                          }
                          v26 = *(System_String_o **)(*((_QWORD *)rewardGetInfo + 23) + 8LL);
                          if ( v25 < 1 )
                          {
                            if ( !v24 )
                              goto LABEL_51;
                            eventId = v24->fields.eventId;
                            v29 = System_Int32__ToString((int32_t)&eventId, 0);
                            v28 = System_String__Concat_63556792(v26, v29, (System_String_o *)StringLiteral_1129/*"00"*/, 0);
                          }
                          else
                          {
                            if ( !v24 )
                              goto LABEL_51;
                            eventId = v24->fields.boardImageId;
                            v27 = System_Int32__ToString((int32_t)&eventId, 0);
                            v28 = System_String__Concat_63518544(v26, v27, 0);
                          }
                          v30 = v28;
                          rewardGetSprite = this->fields.rewardGetSprite;
                          if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
                          EventRewardRootComponent__setRewardInfoImg(rewardGetSprite, v30, 0);
                        }
                        if ( item->fields.isOpenFloor )
                          return;
                        rewardGetInfo = this->fields.maskSprite;
                        if ( rewardGetInfo )
                        {
                          rewardGetInfo = UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)rewardGetInfo,
                                            0);
                          if ( rewardGetInfo )
                          {
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rewardGetInfo, 1, 0);
                            v32 = this->fields.rewardCondMessage;
                            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            rewardGetInfo = LocalizationManager__Get((System_String_o *)StringLiteral_5737/*"EVENT_TOWER_HIDE_COND"*/, 0);
                            if ( v32 )
                            {
                              UILabel__set_text(v32, (System_String_o *)rewardGetInfo, 0);
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
    sub_1C32E7C(rewardGetInfo);
  }
}