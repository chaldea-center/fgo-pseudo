void __fastcall EventTowerListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  struct EventTowerListViewItemDraw_StaticFields *static_fields; // x0

  if ( (byte_4BC2A11 & 1) == 0 )
  {
    sub_1C1ABD4(&EventTowerListViewItemDraw_TypeInfo, v1);
    sub_1C1ABD4(&StringLiteral_19591/*"event_tower_rewardget_"*/, v2);
    sub_1C1ABD4(&StringLiteral_19592/*"event_towerbanner_"*/, v3);
    byte_4BC2A11 = 1;
  }
  EventTowerListViewItemDraw_TypeInfo->static_fields->BANNER_NAME = (struct System_String_o *)StringLiteral_19592/*"event_towerbanner_"*/;
  sub_1C1AB78(EventTowerListViewItemDraw_TypeInfo->static_fields);
  static_fields = EventTowerListViewItemDraw_TypeInfo->static_fields;
  static_fields->REWARD_GET_NAME = (struct System_String_o *)StringLiteral_19591/*"event_tower_rewardget_"*/;
  sub_1C1AB78(&static_fields->REWARD_GET_NAME);
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
  EventTowerListViewItem_o *v5; // x20
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
  int32_t *clearReward; // x8
  int32_t v21; // w3
  struct EventTowerRewardEntity_o *v22; // x8
  UILabel_o *rewardCondMessage; // x21
  const MethodInfo *v24; // x1
  struct EventTowerRewardEntity_o *v25; // x8
  int v26; // w22
  System_String_o *v27; // x21
  System_String_o *v28; // x0
  System_String_o *v29; // x0
  System_String_o *v30; // x0
  System_String_o *v31; // x21
  UISprite_o *rewardGetSprite; // x22
  UILabel_o *v33; // x19
  int32_t eventId; // [xsp+Ch] [xbp-34h] BYREF

  v5 = item;
  if ( (byte_4BC2A10 & 1) == 0 )
  {
    sub_1C1ABD4(&EventRewardRootComponent_TypeInfo, item);
    sub_1C1ABD4(&EventTowerListViewItemDraw_TypeInfo, v7);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v8);
    sub_1C1ABD4(&StringLiteral_5850/*"EVENT_TOWER_HIDE_COND"*/, v9);
    sub_1C1ABD4(&StringLiteral_1220/*"00"*/, v10);
    byte_4BC2A10 = 1;
  }
  if ( v5 && mode )
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
            v14 = (System_String_o *)**((_QWORD **)rewardGetInfo + 23);
            if ( boardImageId < 1 )
            {
              if ( !itemInfo )
                goto LABEL_51;
              eventId = itemInfo->fields.eventId;
              v17 = System_Int32__ToString((int32_t)&eventId, 0LL);
              v16 = System_String__Concat_63051628(v14, v17, (System_String_o *)StringLiteral_1220/*"00"*/, 0LL);
            }
            else
            {
              if ( !itemInfo )
                goto LABEL_51;
              eventId = itemInfo->fields.boardImageId;
              v15 = System_Int32__ToString((int32_t)&eventId, 0LL);
              v16 = System_String__Concat_63040368(v14, v15, 0LL);
            }
            v18 = v16;
            baseSprite = this->fields.baseSprite;
            if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
            rewardGetInfo = (void *)EventRewardRootComponent__setRewardInfoImg(baseSprite, v18, 0LL);
            clearReward = (int32_t *)v5->fields.clearReward;
            if ( clearReward )
            {
              rewardGetInfo = this->fields.itemIcon;
              if ( rewardGetInfo )
              {
                v21 = clearReward[7] <= 1 ? -1 : clearReward[7];
                ItemIconComponent__SetGift_39340176(
                  (ItemIconComponent_o *)rewardGetInfo,
                  clearReward[5],
                  clearReward[6],
                  v21,
                  0,
                  0LL);
                v22 = v5->fields.itemInfo;
                if ( v22 )
                {
                  item = (EventTowerListViewItem_o *)(unsigned int)v22->fields.iconId;
                  if ( (int)item >= 1 )
                  {
                    rewardGetInfo = this->fields.itemIcon;
                    if ( !rewardGetInfo )
                      goto LABEL_51;
                    ItemIconComponent__SetItemImage((ItemIconComponent_o *)rewardGetInfo, (int32_t)item, 0LL);
                  }
                  rewardGetInfo = this->fields.rewardName;
                  if ( rewardGetInfo )
                  {
                    UILabel__set_text((UILabel_o *)rewardGetInfo, v5->fields.rewardName, 0LL);
                    rewardGetInfo = this->fields.rewardNum;
                    if ( rewardGetInfo )
                    {
                      UILabel__set_text((UILabel_o *)rewardGetInfo, v5->fields.rewardNum, 0LL);
                      rewardCondMessage = this->fields.rewardCondMessage;
                      rewardGetInfo = EventTowerListViewItem__get_BoardMessage(v5, v24);
                      if ( rewardCondMessage )
                      {
                        UILabel__set_text(rewardCondMessage, (System_String_o *)rewardGetInfo, 0LL);
                        if ( v5->fields.isClearFloor )
                        {
                          rewardGetInfo = this->fields.rewardGetInfo;
                          if ( !rewardGetInfo )
                            goto LABEL_51;
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rewardGetInfo, 1, 0LL);
                          v25 = v5->fields.itemInfo;
                          if ( !v25 )
                            goto LABEL_51;
                          rewardGetInfo = EventTowerListViewItemDraw_TypeInfo;
                          v26 = v25->fields.boardImageId;
                          if ( !EventTowerListViewItemDraw_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(EventTowerListViewItemDraw_TypeInfo);
                            rewardGetInfo = EventTowerListViewItemDraw_TypeInfo;
                            v25 = v5->fields.itemInfo;
                          }
                          v27 = *(System_String_o **)(*((_QWORD *)rewardGetInfo + 23) + 8LL);
                          if ( v26 < 1 )
                          {
                            if ( !v25 )
                              goto LABEL_51;
                            eventId = v25->fields.eventId;
                            v30 = System_Int32__ToString((int32_t)&eventId, 0LL);
                            v29 = System_String__Concat_63051628(v27, v30, (System_String_o *)StringLiteral_1220/*"00"*/, 0LL);
                          }
                          else
                          {
                            if ( !v25 )
                              goto LABEL_51;
                            eventId = v25->fields.boardImageId;
                            v28 = System_Int32__ToString((int32_t)&eventId, 0LL);
                            v29 = System_String__Concat_63040368(v27, v28, 0LL);
                          }
                          v31 = v29;
                          rewardGetSprite = this->fields.rewardGetSprite;
                          if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
                          EventRewardRootComponent__setRewardInfoImg(rewardGetSprite, v31, 0LL);
                        }
                        if ( v5->fields.isOpenFloor )
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
                            v33 = this->fields.rewardCondMessage;
                            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            rewardGetInfo = LocalizationManager__Get((System_String_o *)StringLiteral_5850/*"EVENT_TOWER_HIDE_COND"*/, 0LL);
                            if ( v33 )
                            {
                              UILabel__set_text(v33, (System_String_o *)rewardGetInfo, 0LL);
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
    sub_1C1AE30(rewardGetInfo, item);
  }
}