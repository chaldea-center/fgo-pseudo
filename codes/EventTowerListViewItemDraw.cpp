void __fastcall EventTowerListViewItemDraw___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  struct EventTowerListViewItemDraw_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_42AF85D & 1) == 0 )
  {
    sub_B52984(&EventTowerListViewItemDraw_TypeInfo);
    sub_B52984(&StringLiteral_18742/*"event_tower_rewardget_"*/);
    sub_B52984(&StringLiteral_18743/*"event_towerbanner_"*/);
    byte_42AF85D = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventTowerListViewItemDraw_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_18743/*"event_towerbanner_"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18743/*"event_towerbanner_"*/;
  sub_B52920(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = EventTowerListViewItemDraw_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_18742/*"event_tower_rewardget_"*/;
  v9->REWARD_GET_NAME = (struct System_String_o *)StringLiteral_18742/*"event_tower_rewardget_"*/;
  sub_B52920((BattleServantConfConponent_o *)&v9->REWARD_GET_NAME, v10, v11, v12, v13, v14, v15, v16);
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
  UnityEngine_GameObject_o *rewardGetInfo; // x0
  struct EventTowerRewardEntity_o *itemInfo; // x8
  System_String_o *v9; // x21
  System_String_o *v10; // x0
  System_String_o *v11; // x0
  System_String_o *BANNER_NAME; // x21
  System_String_o *v13; // x0
  System_String_o *v14; // x21
  UISprite_o *baseSprite; // x22
  int32_t *clearReward; // x8
  int32_t v17; // w3
  struct EventTowerRewardEntity_o *v18; // x8
  UILabel_o *rewardCondMessage; // x21
  const MethodInfo *v20; // x1
  struct EventTowerRewardEntity_o *v21; // x8
  System_String_o *v22; // x21
  System_String_o *v23; // x0
  System_String_o *v24; // x0
  System_String_o *REWARD_GET_NAME; // x21
  System_String_o *v26; // x0
  System_String_o *v27; // x21
  UISprite_o *rewardGetSprite; // x22
  UILabel_o *v29; // x19
  int32_t eventId; // [xsp+Ch] [xbp-34h] BYREF

  v5 = item;
  if ( (byte_42AF85C & 1) == 0 )
  {
    sub_B52984(&EventRewardRootComponent_TypeInfo);
    sub_B52984(&EventTowerListViewItemDraw_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_5782/*"EVENT_TOWER_HIDE_COND"*/);
    sub_B52984(&StringLiteral_978/*"00"*/);
    byte_42AF85C = 1;
  }
  eventId = 0;
  if ( v5 && mode )
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
          itemInfo = v5->fields.itemInfo;
          if ( itemInfo )
          {
            if ( itemInfo->fields.boardImageId < 1 )
            {
              if ( (WORD1(EventTowerListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                && !EventTowerListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(EventTowerListViewItemDraw_TypeInfo);
                itemInfo = v5->fields.itemInfo;
                if ( !itemInfo )
                  goto LABEL_58;
              }
              BANNER_NAME = EventTowerListViewItemDraw_TypeInfo->static_fields->BANNER_NAME;
              eventId = itemInfo->fields.eventId;
              v13 = System_Int32__ToString((int32_t)&eventId, 0LL);
              v11 = System_String__Concat_44570600(BANNER_NAME, v13, (System_String_o *)StringLiteral_978/*"00"*/, 0LL);
            }
            else
            {
              if ( (WORD1(EventTowerListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                && !EventTowerListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(EventTowerListViewItemDraw_TypeInfo);
                itemInfo = v5->fields.itemInfo;
                if ( !itemInfo )
                  goto LABEL_58;
              }
              v9 = EventTowerListViewItemDraw_TypeInfo->static_fields->BANNER_NAME;
              eventId = itemInfo->fields.boardImageId;
              v10 = System_Int32__ToString((int32_t)&eventId, 0LL);
              v11 = System_String__Concat_44568316(v9, v10, 0LL);
            }
            v14 = v11;
            baseSprite = this->fields.baseSprite;
            if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
            }
            rewardGetInfo = (UnityEngine_GameObject_o *)EventRewardRootComponent__setRewardInfoImg(baseSprite, v14, 0LL);
            clearReward = (int32_t *)v5->fields.clearReward;
            if ( clearReward )
            {
              rewardGetInfo = (UnityEngine_GameObject_o *)this->fields.itemIcon;
              if ( rewardGetInfo )
              {
                v17 = clearReward[7] < 2 ? -1 : clearReward[7];
                ItemIconComponent__SetGift(
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
                    rewardGetInfo = (UnityEngine_GameObject_o *)this->fields.itemIcon;
                    if ( !rewardGetInfo )
                      goto LABEL_58;
                    ItemIconComponent__SetItemImage((ItemIconComponent_o *)rewardGetInfo, (int32_t)item, 0LL);
                  }
                  rewardGetInfo = (UnityEngine_GameObject_o *)this->fields.rewardName;
                  if ( rewardGetInfo )
                  {
                    UILabel__set_text((UILabel_o *)rewardGetInfo, v5->fields.rewardName, 0LL);
                    rewardGetInfo = (UnityEngine_GameObject_o *)this->fields.rewardNum;
                    if ( rewardGetInfo )
                    {
                      UILabel__set_text((UILabel_o *)rewardGetInfo, v5->fields.rewardNum, 0LL);
                      rewardCondMessage = this->fields.rewardCondMessage;
                      rewardGetInfo = (UnityEngine_GameObject_o *)EventTowerListViewItem__get_BoardMessage(v5, v20);
                      if ( rewardCondMessage )
                      {
                        UILabel__set_text(rewardCondMessage, (System_String_o *)rewardGetInfo, 0LL);
                        if ( v5->fields.isClearFloor )
                        {
                          rewardGetInfo = this->fields.rewardGetInfo;
                          if ( !rewardGetInfo )
                            goto LABEL_58;
                          UnityEngine_GameObject__SetActive(rewardGetInfo, 1, 0LL);
                          v21 = v5->fields.itemInfo;
                          if ( !v21 )
                            goto LABEL_58;
                          if ( v21->fields.boardImageId < 1 )
                          {
                            if ( (WORD1(EventTowerListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                              && !EventTowerListViewItemDraw_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(EventTowerListViewItemDraw_TypeInfo);
                              v21 = v5->fields.itemInfo;
                              if ( !v21 )
                                goto LABEL_58;
                            }
                            REWARD_GET_NAME = EventTowerListViewItemDraw_TypeInfo->static_fields->REWARD_GET_NAME;
                            eventId = v21->fields.eventId;
                            v26 = System_Int32__ToString((int32_t)&eventId, 0LL);
                            v24 = System_String__Concat_44570600(
                                    REWARD_GET_NAME,
                                    v26,
                                    (System_String_o *)StringLiteral_978/*"00"*/,
                                    0LL);
                          }
                          else
                          {
                            if ( (WORD1(EventTowerListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                              && !EventTowerListViewItemDraw_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(EventTowerListViewItemDraw_TypeInfo);
                              v21 = v5->fields.itemInfo;
                              if ( !v21 )
                                goto LABEL_58;
                            }
                            v22 = EventTowerListViewItemDraw_TypeInfo->static_fields->REWARD_GET_NAME;
                            eventId = v21->fields.boardImageId;
                            v23 = System_Int32__ToString((int32_t)&eventId, 0LL);
                            v24 = System_String__Concat_44568316(v22, v23, 0LL);
                          }
                          v27 = v24;
                          rewardGetSprite = this->fields.rewardGetSprite;
                          if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
                          }
                          EventRewardRootComponent__setRewardInfoImg(rewardGetSprite, v27, 0LL);
                        }
                        if ( v5->fields.isOpenFloor )
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
                            v29 = this->fields.rewardCondMessage;
                            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                              && !LocalizationManager_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            }
                            rewardGetInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                          (System_String_o *)StringLiteral_5782/*"EVENT_TOWER_HIDE_COND"*/,
                                                                          0LL);
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
LABEL_58:
    sub_B52A5C(rewardGetInfo, item);
  }
}