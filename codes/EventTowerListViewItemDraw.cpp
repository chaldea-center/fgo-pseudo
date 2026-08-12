void EventTowerListViewItemDraw___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct EventTowerListViewItemDraw_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_596ACFA & 1) == 0 )
  {
    sub_2213A60(&EventTowerListViewItemDraw_TypeInfo);
    sub_2213A60(&StringLiteral_20187/*"event_tower_rewardget_"*/);
    sub_2213A60(&StringLiteral_20188/*"event_towerbanner_"*/);
    byte_596ACFA = 1;
  }
  v7 = StringLiteral_20188/*"event_towerbanner_"*/;
  EventTowerListViewItemDraw_TypeInfo->static_fields->BANNER_NAME = (struct System_String_o *)StringLiteral_20188/*"event_towerbanner_"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventTowerListViewItemDraw_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_20187/*"event_tower_rewardget_"*/;
  static_fields = EventTowerListViewItemDraw_TypeInfo->static_fields;
  static_fields->REWARD_GET_NAME = (struct System_String_o *)StringLiteral_20187/*"event_tower_rewardget_"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->REWARD_GET_NAME, v8, v10, v11, v12, v13, v14, v15);
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
  UnityEngine_GameObject_o *rewardGetInfo; // x0
  __int64 v8; // x2
  struct EventTowerRewardEntity_o *itemInfo; // x8
  int v10; // w9
  struct EventTowerListViewItemDraw_StaticFields *v11; // x9
  System_String_o *v12; // x21
  System_String_o *v13; // x0
  System_String_o *v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  struct EventTowerListViewItemDraw_StaticFields *static_fields; // x9
  System_String_o *BANNER_NAME; // x21
  System_String_o *v19; // x0
  System_String_o *v20; // x21
  UISprite_o *baseSprite; // x22
  int32_t *clearReward; // x8
  int v23; // w9
  struct EventTowerRewardEntity_o *v24; // x8
  UILabel_o *rewardCondMessage; // x21
  const MethodInfo *v26; // x1
  __int64 v27; // x2
  struct EventTowerRewardEntity_o *v28; // x8
  int v29; // w9
  struct EventTowerListViewItemDraw_StaticFields *v30; // x9
  System_String_o *v31; // x21
  System_String_o *v32; // x0
  System_String_o *v33; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  struct EventTowerListViewItemDraw_StaticFields *v36; // x9
  System_String_o *REWARD_GET_NAME; // x21
  System_String_o *v38; // x0
  System_String_o *v39; // x21
  UISprite_o *rewardGetSprite; // x22
  __int64 v41; // x1
  __int64 v42; // x2
  UILabel_o *v43; // x19
  int32_t eventId; // [xsp+Ch] [xbp-34h] BYREF

  v5 = item;
  if ( (byte_596ACF9 & 1) == 0 )
  {
    sub_2213A60(&EventRewardRootComponent_TypeInfo);
    sub_2213A60(&EventTowerListViewItemDraw_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_5969/*"EVENT_TOWER_HIDE_COND"*/);
    sub_2213A60(&StringLiteral_1205/*"00"*/);
    byte_596ACF9 = 1;
  }
  eventId = 0;
  if ( v5 && mode )
  {
    rewardGetInfo = this->fields.rewardGetInfo;
    if ( rewardGetInfo )
    {
      UnityEngine_GameObject__SetActive(rewardGetInfo, 0, 0);
      rewardGetInfo = (UnityEngine_GameObject_o *)this->fields.maskSprite;
      if ( rewardGetInfo )
      {
        rewardGetInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rewardGetInfo, 0);
        if ( rewardGetInfo )
        {
          UnityEngine_GameObject__SetActive(rewardGetInfo, 0, 0);
          itemInfo = v5->fields.itemInfo;
          if ( itemInfo )
          {
            v10 = *(&EventTowerListViewItemDraw_TypeInfo->_2.cctor_finished + 1);
            if ( itemInfo->fields.boardImageId < 1 )
            {
              if ( !v10 )
              {
                j_il2cpp_runtime_class_init_0(EventTowerListViewItemDraw_TypeInfo, item, v8);
                itemInfo = v5->fields.itemInfo;
                if ( !itemInfo )
                  goto LABEL_50;
              }
              static_fields = EventTowerListViewItemDraw_TypeInfo->static_fields;
              eventId = itemInfo->fields.eventId;
              BANNER_NAME = static_fields->BANNER_NAME;
              v19 = System_Int32__ToString((int32_t)&eventId, 0);
              v14 = System_String__Concat_75694928(BANNER_NAME, v19, (System_String_o *)StringLiteral_1205/*"00"*/, 0);
            }
            else
            {
              if ( !v10 )
              {
                j_il2cpp_runtime_class_init_0(EventTowerListViewItemDraw_TypeInfo, item, v8);
                itemInfo = v5->fields.itemInfo;
                if ( !itemInfo )
                  goto LABEL_50;
              }
              v11 = EventTowerListViewItemDraw_TypeInfo->static_fields;
              eventId = itemInfo->fields.boardImageId;
              v12 = v11->BANNER_NAME;
              v13 = System_Int32__ToString((int32_t)&eventId, 0);
              v14 = System_String__Concat_75651716(v12, v13, 0);
            }
            v20 = v14;
            baseSprite = this->fields.baseSprite;
            if ( !*(&EventRewardRootComponent_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo, v15, v16);
            rewardGetInfo = (UnityEngine_GameObject_o *)EventRewardRootComponent__setRewardInfoImg(baseSprite, v20, 0);
            clearReward = (int32_t *)v5->fields.clearReward;
            if ( clearReward )
            {
              rewardGetInfo = (UnityEngine_GameObject_o *)this->fields.itemIcon;
              if ( rewardGetInfo )
              {
                v23 = clearReward[7];
                if ( v23 <= 1 )
                  v23 = -1;
                ItemIconComponent__SetGift_47884936(
                  (ItemIconComponent_o *)rewardGetInfo,
                  clearReward[5],
                  clearReward[6],
                  v23,
                  0,
                  0);
                v24 = v5->fields.itemInfo;
                if ( v24 )
                {
                  item = (EventTowerListViewItem_o *)(unsigned int)v24->fields.iconId;
                  if ( (int)item >= 1 )
                  {
                    rewardGetInfo = (UnityEngine_GameObject_o *)this->fields.itemIcon;
                    if ( !rewardGetInfo )
                      goto LABEL_50;
                    ItemIconComponent__SetItemImage((ItemIconComponent_o *)rewardGetInfo, (int32_t)item, 0);
                  }
                  rewardGetInfo = (UnityEngine_GameObject_o *)this->fields.rewardName;
                  if ( rewardGetInfo )
                  {
                    UILabel__set_text((UILabel_o *)rewardGetInfo, v5->fields.rewardName, 0);
                    rewardGetInfo = (UnityEngine_GameObject_o *)this->fields.rewardNum;
                    if ( rewardGetInfo )
                    {
                      UILabel__set_text((UILabel_o *)rewardGetInfo, v5->fields.rewardNum, 0);
                      rewardCondMessage = this->fields.rewardCondMessage;
                      rewardGetInfo = (UnityEngine_GameObject_o *)EventTowerListViewItem__get_BoardMessage(v5, v26);
                      if ( rewardCondMessage )
                      {
                        UILabel__set_text(rewardCondMessage, (System_String_o *)rewardGetInfo, 0);
                        if ( v5->fields.isClearFloor )
                        {
                          rewardGetInfo = this->fields.rewardGetInfo;
                          if ( !rewardGetInfo )
                            goto LABEL_50;
                          UnityEngine_GameObject__SetActive(rewardGetInfo, 1, 0);
                          v28 = v5->fields.itemInfo;
                          if ( !v28 )
                            goto LABEL_50;
                          v29 = *(&EventTowerListViewItemDraw_TypeInfo->_2.cctor_finished + 1);
                          if ( v28->fields.boardImageId < 1 )
                          {
                            if ( !v29 )
                            {
                              j_il2cpp_runtime_class_init_0(EventTowerListViewItemDraw_TypeInfo, item, v27);
                              v28 = v5->fields.itemInfo;
                              if ( !v28 )
                                goto LABEL_50;
                            }
                            v36 = EventTowerListViewItemDraw_TypeInfo->static_fields;
                            eventId = v28->fields.eventId;
                            REWARD_GET_NAME = v36->REWARD_GET_NAME;
                            v38 = System_Int32__ToString((int32_t)&eventId, 0);
                            v33 = System_String__Concat_75694928(
                                    REWARD_GET_NAME,
                                    v38,
                                    (System_String_o *)StringLiteral_1205/*"00"*/,
                                    0);
                          }
                          else
                          {
                            if ( !v29 )
                            {
                              j_il2cpp_runtime_class_init_0(EventTowerListViewItemDraw_TypeInfo, item, v27);
                              v28 = v5->fields.itemInfo;
                              if ( !v28 )
                                goto LABEL_50;
                            }
                            v30 = EventTowerListViewItemDraw_TypeInfo->static_fields;
                            eventId = v28->fields.boardImageId;
                            v31 = v30->REWARD_GET_NAME;
                            v32 = System_Int32__ToString((int32_t)&eventId, 0);
                            v33 = System_String__Concat_75651716(v31, v32, 0);
                          }
                          v39 = v33;
                          rewardGetSprite = this->fields.rewardGetSprite;
                          if ( !*(&EventRewardRootComponent_TypeInfo->_2.cctor_finished + 1) )
                            j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo, v34, v35);
                          EventRewardRootComponent__setRewardInfoImg(rewardGetSprite, v39, 0);
                        }
                        if ( v5->fields.isOpenFloor )
                          return;
                        rewardGetInfo = (UnityEngine_GameObject_o *)this->fields.maskSprite;
                        if ( rewardGetInfo )
                        {
                          rewardGetInfo = UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)rewardGetInfo,
                                            0);
                          if ( rewardGetInfo )
                          {
                            UnityEngine_GameObject__SetActive(rewardGetInfo, 1, 0);
                            v43 = this->fields.rewardCondMessage;
                            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v41, v42);
                            rewardGetInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                          (System_String_o *)StringLiteral_5969/*"EVENT_TOWER_HIDE_COND"*/,
                                                                          0);
                            if ( v43 )
                            {
                              UILabel__set_text(v43, (System_String_o *)rewardGetInfo, 0);
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
LABEL_50:
    sub_2213CDC(rewardGetInfo, item);
  }
}