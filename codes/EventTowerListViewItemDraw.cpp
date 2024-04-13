void __fastcall EventTowerListViewItemDraw___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v15; // x1
  struct EventTowerListViewItemDraw_StaticFields *v16; // x0
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_42E8474 & 1) == 0 )
  {
    sub_B5D5C4(&EventTowerListViewItemDraw_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_18837/*"event_tower_rewardget_"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_18838/*"event_towerbanner_"*/, v11, v12, v13);
    byte_42E8474 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventTowerListViewItemDraw_TypeInfo->static_fields;
  v15 = (System_Int32_array **)StringLiteral_18838/*"event_towerbanner_"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18838/*"event_towerbanner_"*/;
  sub_B5D560(static_fields, v15, v2, v3, v4, v5, v6, v7);
  v16 = EventTowerListViewItemDraw_TypeInfo->static_fields;
  v17 = (System_Int32_array **)StringLiteral_18837/*"event_tower_rewardget_"*/;
  v16->REWARD_GET_NAME = (struct System_String_o *)StringLiteral_18837/*"event_tower_rewardget_"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v16->REWARD_GET_NAME, v17, v18, v19, v20, v21, v22, v23);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  UnityEngine_GameObject_o *rewardGetInfo; // x0
  struct EventTowerRewardEntity_o *itemInfo; // x8
  System_String_o *v21; // x21
  System_String_o *v22; // x0
  System_String_o *v23; // x0
  System_String_o *BANNER_NAME; // x21
  System_String_o *v25; // x0
  System_String_o *v26; // x21
  UISprite_o *baseSprite; // x22
  int32_t *clearReward; // x8
  int32_t v29; // w3
  struct EventTowerRewardEntity_o *v30; // x8
  UILabel_o *rewardCondMessage; // x21
  const MethodInfo *v32; // x1
  struct EventTowerRewardEntity_o *v33; // x8
  System_String_o *v34; // x21
  System_String_o *v35; // x0
  System_String_o *v36; // x0
  System_String_o *REWARD_GET_NAME; // x21
  System_String_o *v38; // x0
  System_String_o *v39; // x21
  UISprite_o *rewardGetSprite; // x22
  UILabel_o *v41; // x19
  int32_t eventId; // [xsp+Ch] [xbp-34h] BYREF

  v5 = item;
  if ( (byte_42E8473 & 1) == 0 )
  {
    sub_B5D5C4(&EventRewardRootComponent_TypeInfo, (_DWORD)item, mode, method);
    sub_B5D5C4(&EventTowerListViewItemDraw_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_5817/*"EVENT_TOWER_HIDE_COND"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_982/*"00"*/, v16, v17, v18);
    byte_42E8473 = 1;
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
              v25 = System_Int32__ToString((int32_t)&eventId, 0LL);
              v23 = System_String__Concat_44580072(BANNER_NAME, v25, (System_String_o *)StringLiteral_982/*"00"*/, 0LL);
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
              v21 = EventTowerListViewItemDraw_TypeInfo->static_fields->BANNER_NAME;
              eventId = itemInfo->fields.boardImageId;
              v22 = System_Int32__ToString((int32_t)&eventId, 0LL);
              v23 = System_String__Concat_44577788(v21, v22, 0LL);
            }
            v26 = v23;
            baseSprite = this->fields.baseSprite;
            if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
            }
            rewardGetInfo = (UnityEngine_GameObject_o *)EventRewardRootComponent__setRewardInfoImg(baseSprite, v26, 0LL);
            clearReward = (int32_t *)v5->fields.clearReward;
            if ( clearReward )
            {
              rewardGetInfo = (UnityEngine_GameObject_o *)this->fields.itemIcon;
              if ( rewardGetInfo )
              {
                v29 = clearReward[7] < 2 ? -1 : clearReward[7];
                ItemIconComponent__SetGift(
                  (ItemIconComponent_o *)rewardGetInfo,
                  clearReward[5],
                  clearReward[6],
                  v29,
                  0,
                  0LL);
                v30 = v5->fields.itemInfo;
                if ( v30 )
                {
                  item = (EventTowerListViewItem_o *)(unsigned int)v30->fields.iconId;
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
                      rewardGetInfo = (UnityEngine_GameObject_o *)EventTowerListViewItem__get_BoardMessage(v5, v32);
                      if ( rewardCondMessage )
                      {
                        UILabel__set_text(rewardCondMessage, (System_String_o *)rewardGetInfo, 0LL);
                        if ( v5->fields.isClearFloor )
                        {
                          rewardGetInfo = this->fields.rewardGetInfo;
                          if ( !rewardGetInfo )
                            goto LABEL_58;
                          UnityEngine_GameObject__SetActive(rewardGetInfo, 1, 0LL);
                          v33 = v5->fields.itemInfo;
                          if ( !v33 )
                            goto LABEL_58;
                          if ( v33->fields.boardImageId < 1 )
                          {
                            if ( (WORD1(EventTowerListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                              && !EventTowerListViewItemDraw_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(EventTowerListViewItemDraw_TypeInfo);
                              v33 = v5->fields.itemInfo;
                              if ( !v33 )
                                goto LABEL_58;
                            }
                            REWARD_GET_NAME = EventTowerListViewItemDraw_TypeInfo->static_fields->REWARD_GET_NAME;
                            eventId = v33->fields.eventId;
                            v38 = System_Int32__ToString((int32_t)&eventId, 0LL);
                            v36 = System_String__Concat_44580072(
                                    REWARD_GET_NAME,
                                    v38,
                                    (System_String_o *)StringLiteral_982/*"00"*/,
                                    0LL);
                          }
                          else
                          {
                            if ( (WORD1(EventTowerListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                              && !EventTowerListViewItemDraw_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(EventTowerListViewItemDraw_TypeInfo);
                              v33 = v5->fields.itemInfo;
                              if ( !v33 )
                                goto LABEL_58;
                            }
                            v34 = EventTowerListViewItemDraw_TypeInfo->static_fields->REWARD_GET_NAME;
                            eventId = v33->fields.boardImageId;
                            v35 = System_Int32__ToString((int32_t)&eventId, 0LL);
                            v36 = System_String__Concat_44577788(v34, v35, 0LL);
                          }
                          v39 = v36;
                          rewardGetSprite = this->fields.rewardGetSprite;
                          if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
                          }
                          EventRewardRootComponent__setRewardInfoImg(rewardGetSprite, v39, 0LL);
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
                            v41 = this->fields.rewardCondMessage;
                            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                              && !LocalizationManager_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            }
                            rewardGetInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                          (System_String_o *)StringLiteral_5817/*"EVENT_TOWER_HIDE_COND"*/,
                                                                          0LL);
                            if ( v41 )
                            {
                              UILabel__set_text(v41, (System_String_o *)rewardGetInfo, 0LL);
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
    sub_B5D69C(rewardGetInfo, item);
  }
}