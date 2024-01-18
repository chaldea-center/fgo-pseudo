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

  if ( (byte_418822F & 1) == 0 )
  {
    sub_B2C35C(&EventTowerListViewItemDraw_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_18606/*"event_tower_rewardget_"*/, v8);
    sub_B2C35C(&StringLiteral_18607/*"event_towerbanner_"*/, v9);
    byte_418822F = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventTowerListViewItemDraw_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_18607/*"event_towerbanner_"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18607/*"event_towerbanner_"*/;
  sub_B2C2F8(static_fields, v11, v2, v3, v4, v5, v6, v7);
  v12 = EventTowerListViewItemDraw_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_18606/*"event_tower_rewardget_"*/;
  v12->REWARD_GET_NAME = (struct System_String_o *)StringLiteral_18606/*"event_tower_rewardget_"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v12->REWARD_GET_NAME, v13, v14, v15, v16, v17, v18, v19);
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
  UnityEngine_GameObject_o *rewardGetInfo; // x0
  struct EventTowerRewardEntity_o *itemInfo; // x8
  System_String_o *v13; // x21
  System_String_o *v14; // x0
  System_String_o *v15; // x0
  System_String_o *BANNER_NAME; // x21
  System_String_o *v17; // x0
  System_String_o *v18; // x21
  UISprite_o *baseSprite; // x22
  int32_t *clearReward; // x8
  int32_t v21; // w3
  struct EventTowerRewardEntity_o *v22; // x8
  UILabel_o *rewardCondMessage; // x21
  const MethodInfo *v24; // x1
  struct EventTowerRewardEntity_o *v25; // x8
  System_String_o *v26; // x21
  System_String_o *v27; // x0
  System_String_o *v28; // x0
  System_String_o *REWARD_GET_NAME; // x21
  System_String_o *v30; // x0
  System_String_o *v31; // x21
  UISprite_o *rewardGetSprite; // x22
  UILabel_o *v33; // x19
  int32_t eventId; // [xsp+Ch] [xbp-34h] BYREF

  v5 = item;
  if ( (byte_418822E & 1) == 0 )
  {
    sub_B2C35C(&EventRewardRootComponent_TypeInfo, item);
    sub_B2C35C(&EventTowerListViewItemDraw_TypeInfo, v7);
    sub_B2C35C(&LocalizationManager_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_5740/*"EVENT_TOWER_HIDE_COND"*/, v9);
    sub_B2C35C(&StringLiteral_962/*"00"*/, v10);
    byte_418822E = 1;
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
              v17 = System_Int32__ToString((int32_t)&eventId, 0LL);
              v15 = System_String__Concat_44307816(BANNER_NAME, v17, (System_String_o *)StringLiteral_962/*"00"*/, 0LL);
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
              v13 = EventTowerListViewItemDraw_TypeInfo->static_fields->BANNER_NAME;
              eventId = itemInfo->fields.boardImageId;
              v14 = System_Int32__ToString((int32_t)&eventId, 0LL);
              v15 = System_String__Concat_44305532(v13, v14, 0LL);
            }
            v18 = v15;
            baseSprite = this->fields.baseSprite;
            if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
            }
            rewardGetInfo = (UnityEngine_GameObject_o *)EventRewardRootComponent__setRewardInfoImg(baseSprite, v18, 0LL);
            clearReward = (int32_t *)v5->fields.clearReward;
            if ( clearReward )
            {
              rewardGetInfo = (UnityEngine_GameObject_o *)this->fields.itemIcon;
              if ( rewardGetInfo )
              {
                v21 = clearReward[7] < 2 ? -1 : clearReward[7];
                ItemIconComponent__SetGift(
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
                      rewardGetInfo = (UnityEngine_GameObject_o *)EventTowerListViewItem__get_BoardMessage(v5, v24);
                      if ( rewardCondMessage )
                      {
                        UILabel__set_text(rewardCondMessage, (System_String_o *)rewardGetInfo, 0LL);
                        if ( v5->fields.isClearFloor )
                        {
                          rewardGetInfo = this->fields.rewardGetInfo;
                          if ( !rewardGetInfo )
                            goto LABEL_58;
                          UnityEngine_GameObject__SetActive(rewardGetInfo, 1, 0LL);
                          v25 = v5->fields.itemInfo;
                          if ( !v25 )
                            goto LABEL_58;
                          if ( v25->fields.boardImageId < 1 )
                          {
                            if ( (WORD1(EventTowerListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                              && !EventTowerListViewItemDraw_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(EventTowerListViewItemDraw_TypeInfo);
                              v25 = v5->fields.itemInfo;
                              if ( !v25 )
                                goto LABEL_58;
                            }
                            REWARD_GET_NAME = EventTowerListViewItemDraw_TypeInfo->static_fields->REWARD_GET_NAME;
                            eventId = v25->fields.eventId;
                            v30 = System_Int32__ToString((int32_t)&eventId, 0LL);
                            v28 = System_String__Concat_44307816(
                                    REWARD_GET_NAME,
                                    v30,
                                    (System_String_o *)StringLiteral_962/*"00"*/,
                                    0LL);
                          }
                          else
                          {
                            if ( (WORD1(EventTowerListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                              && !EventTowerListViewItemDraw_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(EventTowerListViewItemDraw_TypeInfo);
                              v25 = v5->fields.itemInfo;
                              if ( !v25 )
                                goto LABEL_58;
                            }
                            v26 = EventTowerListViewItemDraw_TypeInfo->static_fields->REWARD_GET_NAME;
                            eventId = v25->fields.boardImageId;
                            v27 = System_Int32__ToString((int32_t)&eventId, 0LL);
                            v28 = System_String__Concat_44305532(v26, v27, 0LL);
                          }
                          v31 = v28;
                          rewardGetSprite = this->fields.rewardGetSprite;
                          if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
                          }
                          EventRewardRootComponent__setRewardInfoImg(rewardGetSprite, v31, 0LL);
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
                            v33 = this->fields.rewardCondMessage;
                            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                              && !LocalizationManager_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            }
                            rewardGetInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                          (System_String_o *)StringLiteral_5740/*"EVENT_TOWER_HIDE_COND"*/,
                                                                          0LL);
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
LABEL_58:
    sub_B2C434(rewardGetInfo, item);
  }
}