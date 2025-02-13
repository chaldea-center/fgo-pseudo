void __fastcall EventTowerListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct EventTowerListViewItemDraw_StaticFields *static_fields; // x0

  if ( (byte_4BD7492 & 1) == 0 )
  {
    sub_1C21E38(&EventTowerListViewItemDraw_TypeInfo);
    sub_1C21E38(&StringLiteral_19606/*"event_tower_rewardget_"*/);
    sub_1C21E38(&StringLiteral_19607/*"event_towerbanner_"*/);
    byte_4BD7492 = 1;
  }
  EventTowerListViewItemDraw_TypeInfo->static_fields->BANNER_NAME = (struct System_String_o *)StringLiteral_19607/*"event_towerbanner_"*/;
  sub_1C21DDC(EventTowerListViewItemDraw_TypeInfo->static_fields, StringLiteral_19607/*"event_towerbanner_"*/);
  v1 = StringLiteral_19606/*"event_tower_rewardget_"*/;
  static_fields = EventTowerListViewItemDraw_TypeInfo->static_fields;
  static_fields->REWARD_GET_NAME = (struct System_String_o *)StringLiteral_19606/*"event_tower_rewardget_"*/;
  sub_1C21DDC(&static_fields->REWARD_GET_NAME, v1);
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
  void *rewardGetInfo; // x0
  struct EventTowerRewardEntity_o *itemInfo; // x8
  int boardImageId; // w22
  System_String_o *v10; // x21
  System_String_o *v11; // x0
  System_String_o *v12; // x0
  System_String_o *v13; // x0
  System_String_o *v14; // x21
  UISprite_o *baseSprite; // x22
  int32_t *clearReward; // x8
  int32_t v17; // w3
  struct EventTowerRewardEntity_o *v18; // x8
  UILabel_o *rewardCondMessage; // x21
  const MethodInfo *v20; // x1
  struct EventTowerRewardEntity_o *v21; // x8
  int v22; // w22
  System_String_o *v23; // x21
  System_String_o *v24; // x0
  System_String_o *v25; // x0
  System_String_o *v26; // x0
  System_String_o *v27; // x21
  UISprite_o *rewardGetSprite; // x22
  UILabel_o *v29; // x19
  int32_t eventId; // [xsp+Ch] [xbp-34h] BYREF

  v5 = item;
  if ( (byte_4BD7491 & 1) == 0 )
  {
    sub_1C21E38(&EventRewardRootComponent_TypeInfo);
    sub_1C21E38(&EventTowerListViewItemDraw_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_5860/*"EVENT_TOWER_HIDE_COND"*/);
    sub_1C21E38(&StringLiteral_1220/*"00"*/);
    byte_4BD7491 = 1;
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
            v10 = (System_String_o *)**((_QWORD **)rewardGetInfo + 23);
            if ( boardImageId < 1 )
            {
              if ( !itemInfo )
                goto LABEL_51;
              eventId = itemInfo->fields.eventId;
              v13 = System_Int32__ToString((int32_t)&eventId, 0LL);
              v12 = System_String__Concat_63126736(v10, v13, (System_String_o *)StringLiteral_1220/*"00"*/, 0LL);
            }
            else
            {
              if ( !itemInfo )
                goto LABEL_51;
              eventId = itemInfo->fields.boardImageId;
              v11 = System_Int32__ToString((int32_t)&eventId, 0LL);
              v12 = System_String__Concat_63115476(v10, v11, 0LL);
            }
            v14 = v12;
            baseSprite = this->fields.baseSprite;
            if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
            rewardGetInfo = (void *)EventRewardRootComponent__setRewardInfoImg(baseSprite, v14, 0LL);
            clearReward = (int32_t *)v5->fields.clearReward;
            if ( clearReward )
            {
              rewardGetInfo = this->fields.itemIcon;
              if ( rewardGetInfo )
              {
                v17 = clearReward[7] <= 1 ? -1 : clearReward[7];
                ItemIconComponent__SetGift_39386620(
                  (ItemIconComponent_o *)rewardGetInfo,
                  clearReward[5],
                  clearReward[6],
                  v17,
                  0,
                  0LL);
                v18 = v5->fields.itemInfo;
                if ( v18 )
                {
                  item = (EventTowerListViewItem_o *)(unsigned int)v18->fields.iconId;
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
                      rewardGetInfo = EventTowerListViewItem__get_BoardMessage(v5, v20);
                      if ( rewardCondMessage )
                      {
                        UILabel__set_text(rewardCondMessage, (System_String_o *)rewardGetInfo, 0LL);
                        if ( v5->fields.isClearFloor )
                        {
                          rewardGetInfo = this->fields.rewardGetInfo;
                          if ( !rewardGetInfo )
                            goto LABEL_51;
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rewardGetInfo, 1, 0LL);
                          v21 = v5->fields.itemInfo;
                          if ( !v21 )
                            goto LABEL_51;
                          rewardGetInfo = EventTowerListViewItemDraw_TypeInfo;
                          v22 = v21->fields.boardImageId;
                          if ( !EventTowerListViewItemDraw_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(EventTowerListViewItemDraw_TypeInfo);
                            rewardGetInfo = EventTowerListViewItemDraw_TypeInfo;
                            v21 = v5->fields.itemInfo;
                          }
                          v23 = *(System_String_o **)(*((_QWORD *)rewardGetInfo + 23) + 8LL);
                          if ( v22 < 1 )
                          {
                            if ( !v21 )
                              goto LABEL_51;
                            eventId = v21->fields.eventId;
                            v26 = System_Int32__ToString((int32_t)&eventId, 0LL);
                            v25 = System_String__Concat_63126736(v23, v26, (System_String_o *)StringLiteral_1220/*"00"*/, 0LL);
                          }
                          else
                          {
                            if ( !v21 )
                              goto LABEL_51;
                            eventId = v21->fields.boardImageId;
                            v24 = System_Int32__ToString((int32_t)&eventId, 0LL);
                            v25 = System_String__Concat_63115476(v23, v24, 0LL);
                          }
                          v27 = v25;
                          rewardGetSprite = this->fields.rewardGetSprite;
                          if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
                          EventRewardRootComponent__setRewardInfoImg(rewardGetSprite, v27, 0LL);
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
                            v29 = this->fields.rewardCondMessage;
                            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            rewardGetInfo = LocalizationManager__Get((System_String_o *)StringLiteral_5860/*"EVENT_TOWER_HIDE_COND"*/, 0LL);
                            if ( v29 )
                            {
                              UILabel__set_text(v29, (System_String_o *)rewardGetInfo, 0LL);
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
    sub_1C22094(rewardGetInfo, item);
  }
}