void EventTowerListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct EventTowerListViewItemDraw_StaticFields *static_fields; // x0

  if ( (byte_4CE8F49 & 1) == 0 )
  {
    sub_1C7BAE8(&EventTowerListViewItemDraw_TypeInfo);
    sub_1C7BAE8(&StringLiteral_19436/*"event_tower_rewardget_"*/);
    sub_1C7BAE8(&StringLiteral_19437/*"event_towerbanner_"*/);
    byte_4CE8F49 = 1;
  }
  EventTowerListViewItemDraw_TypeInfo->static_fields->BANNER_NAME = (struct System_String_o *)StringLiteral_19437/*"event_towerbanner_"*/;
  sub_1C7BA8C(EventTowerListViewItemDraw_TypeInfo->static_fields, StringLiteral_19437/*"event_towerbanner_"*/);
  v1 = StringLiteral_19436/*"event_tower_rewardget_"*/;
  static_fields = EventTowerListViewItemDraw_TypeInfo->static_fields;
  static_fields->REWARD_GET_NAME = (struct System_String_o *)StringLiteral_19436/*"event_tower_rewardget_"*/;
  sub_1C7BA8C(&static_fields->REWARD_GET_NAME, v1);
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
  EventTowerListViewItem_o *v5; // x20
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
  UILabel_o *rewardCondMessage; // x21
  const MethodInfo *v22; // x1
  struct EventTowerRewardEntity_o *v23; // x8
  int v24; // w22
  System_String_o *v25; // x21
  System_String_o *v26; // x0
  System_String_o *v27; // x0
  System_String_o *v28; // x0
  System_String_o *v29; // x21
  UISprite_o *rewardGetSprite; // x22
  UILabel_o *v31; // x19
  int32_t eventId; // [xsp+Ch] [xbp-34h] BYREF

  v5 = item;
  if ( (byte_4CE8F48 & 1) == 0 )
  {
    sub_1C7BAE8(&EventRewardRootComponent_TypeInfo);
    sub_1C7BAE8(&EventTowerListViewItemDraw_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_5746/*"EVENT_TOWER_HIDE_COND"*/);
    sub_1C7BAE8(&StringLiteral_1123/*"00"*/);
    byte_4CE8F48 = 1;
  }
  if ( v5 && mode )
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
          itemInfo = v5->fields.itemInfo;
          if ( itemInfo )
          {
            boardImageId = itemInfo->fields.boardImageId;
            rewardGetInfo = EventTowerListViewItemDraw_TypeInfo;
            if ( !EventTowerListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventTowerListViewItemDraw_TypeInfo);
              rewardGetInfo = EventTowerListViewItemDraw_TypeInfo;
              itemInfo = v5->fields.itemInfo;
            }
            v10 = (System_String_o *)**((_QWORD **)rewardGetInfo + 23);
            if ( boardImageId < 1 )
            {
              if ( !itemInfo )
                goto LABEL_51;
              eventId = itemInfo->fields.eventId;
              v13 = System_Int32__ToString((int32_t)&eventId, 0);
              v12 = System_String__Concat_64215176(v10, v13, (System_String_o *)StringLiteral_1123/*"00"*/, 0);
            }
            else
            {
              if ( !itemInfo )
                goto LABEL_51;
              eventId = itemInfo->fields.boardImageId;
              v11 = System_Int32__ToString((int32_t)&eventId, 0);
              v12 = System_String__Concat_64176912(v10, v11, 0);
            }
            v14 = v12;
            baseSprite = this->fields.baseSprite;
            if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
            rewardGetInfo = (void *)EventRewardRootComponent__setRewardInfoImg(baseSprite, v14, 0);
            clearReward = v5->fields.clearReward;
            if ( clearReward )
            {
              rewardGetInfo = this->fields.itemIcon;
              if ( rewardGetInfo )
              {
                objectId = clearReward->fields.objectId;
                type = clearReward->fields.type;
                v19 = clearReward->fields.num <= 1 ? -1 : clearReward->fields.num;
                ItemIconComponent__SetGift_41487788((ItemIconComponent_o *)rewardGetInfo, type, objectId, v19, 0, 0);
                v20 = v5->fields.itemInfo;
                if ( v20 )
                {
                  item = (EventTowerListViewItem_o *)(unsigned int)v20->fields.iconId;
                  if ( (int)item >= 1 )
                  {
                    rewardGetInfo = this->fields.itemIcon;
                    if ( !rewardGetInfo )
                      goto LABEL_51;
                    ItemIconComponent__SetItemImage((ItemIconComponent_o *)rewardGetInfo, (int32_t)item, 0);
                  }
                  rewardGetInfo = this->fields.rewardName;
                  if ( rewardGetInfo )
                  {
                    UILabel__set_text((UILabel_o *)rewardGetInfo, v5->fields.rewardName, 0);
                    rewardGetInfo = this->fields.rewardNum;
                    if ( rewardGetInfo )
                    {
                      UILabel__set_text((UILabel_o *)rewardGetInfo, v5->fields.rewardNum, 0);
                      rewardCondMessage = this->fields.rewardCondMessage;
                      rewardGetInfo = EventTowerListViewItem__get_BoardMessage(v5, v22);
                      if ( rewardCondMessage )
                      {
                        UILabel__set_text(rewardCondMessage, (System_String_o *)rewardGetInfo, 0);
                        if ( v5->fields.isClearFloor )
                        {
                          rewardGetInfo = this->fields.rewardGetInfo;
                          if ( !rewardGetInfo )
                            goto LABEL_51;
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rewardGetInfo, 1, 0);
                          v23 = v5->fields.itemInfo;
                          if ( !v23 )
                            goto LABEL_51;
                          rewardGetInfo = EventTowerListViewItemDraw_TypeInfo;
                          v24 = v23->fields.boardImageId;
                          if ( !EventTowerListViewItemDraw_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(EventTowerListViewItemDraw_TypeInfo);
                            rewardGetInfo = EventTowerListViewItemDraw_TypeInfo;
                            v23 = v5->fields.itemInfo;
                          }
                          v25 = *(System_String_o **)(*((_QWORD *)rewardGetInfo + 23) + 8LL);
                          if ( v24 < 1 )
                          {
                            if ( !v23 )
                              goto LABEL_51;
                            eventId = v23->fields.eventId;
                            v28 = System_Int32__ToString((int32_t)&eventId, 0);
                            v27 = System_String__Concat_64215176(v25, v28, (System_String_o *)StringLiteral_1123/*"00"*/, 0);
                          }
                          else
                          {
                            if ( !v23 )
                              goto LABEL_51;
                            eventId = v23->fields.boardImageId;
                            v26 = System_Int32__ToString((int32_t)&eventId, 0);
                            v27 = System_String__Concat_64176912(v25, v26, 0);
                          }
                          v29 = v27;
                          rewardGetSprite = this->fields.rewardGetSprite;
                          if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
                          EventRewardRootComponent__setRewardInfoImg(rewardGetSprite, v29, 0);
                        }
                        if ( v5->fields.isOpenFloor )
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
                            v31 = this->fields.rewardCondMessage;
                            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            rewardGetInfo = LocalizationManager__Get((System_String_o *)StringLiteral_5746/*"EVENT_TOWER_HIDE_COND"*/, 0);
                            if ( v31 )
                            {
                              UILabel__set_text(v31, (System_String_o *)rewardGetInfo, 0);
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
    sub_1C7BD40(rewardGetInfo, item);
  }
}