void __fastcall EventTowerListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  struct EventTowerListViewItemDraw_StaticFields *static_fields; // x0

  if ( (byte_4B11254 & 1) == 0 )
  {
    sub_1BCA7E0(&EventTowerListViewItemDraw_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_19475/*"event_tower_rewardget_"*/, v3, v4);
    sub_1BCA7E0(&StringLiteral_19476/*"event_towerbanner_"*/, v5, v6);
    byte_4B11254 = 1;
  }
  EventTowerListViewItemDraw_TypeInfo->static_fields->BANNER_NAME = (struct System_String_o *)StringLiteral_19476/*"event_towerbanner_"*/;
  sub_1BCA784(EventTowerListViewItemDraw_TypeInfo->static_fields, StringLiteral_19476/*"event_towerbanner_"*/);
  v7 = StringLiteral_19475/*"event_tower_rewardget_"*/;
  static_fields = EventTowerListViewItemDraw_TypeInfo->static_fields;
  static_fields->REWARD_GET_NAME = (struct System_String_o *)StringLiteral_19475/*"event_tower_rewardget_"*/;
  sub_1BCA784(&static_fields->REWARD_GET_NAME, v7);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTowerListViewItemDraw__SetItem(
        EventTowerListViewItemDraw_o *this,
        EventTowerListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  EventTowerListViewItem_o *v5; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  void *rewardGetInfo; // x0
  struct EventTowerRewardEntity_o *itemInfo; // x8
  int boardImageId; // w22
  System_String_o *v18; // x21
  System_String_o *v19; // x0
  System_String_o *v20; // x0
  __int64 v21; // x1
  System_String_o *v22; // x0
  System_String_o *v23; // x21
  UISprite_o *baseSprite; // x22
  int32_t *clearReward; // x8
  int32_t v26; // w3
  struct EventTowerRewardEntity_o *v27; // x8
  UILabel_o *rewardCondMessage; // x21
  const MethodInfo *v29; // x1
  struct EventTowerRewardEntity_o *v30; // x8
  int v31; // w22
  System_String_o *v32; // x21
  System_String_o *v33; // x0
  System_String_o *v34; // x0
  __int64 v35; // x1
  System_String_o *v36; // x0
  System_String_o *v37; // x21
  UISprite_o *rewardGetSprite; // x22
  __int64 v39; // x1
  UILabel_o *v40; // x19
  int32_t eventId; // [xsp+Ch] [xbp-34h] BYREF

  v5 = item;
  if ( (byte_4B11253 & 1) == 0 )
  {
    sub_1BCA7E0(&EventRewardRootComponent_TypeInfo, item, *(_QWORD *)&mode);
    sub_1BCA7E0(&EventTowerListViewItemDraw_TypeInfo, v7, v8);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_5817/*"EVENT_TOWER_HIDE_COND"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_1217/*"00"*/, v13, v14);
    byte_4B11253 = 1;
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
              j_il2cpp_runtime_class_init_0(EventTowerListViewItemDraw_TypeInfo, item);
              rewardGetInfo = EventTowerListViewItemDraw_TypeInfo;
              itemInfo = v5->fields.itemInfo;
            }
            v18 = (System_String_o *)**((_QWORD **)rewardGetInfo + 23);
            if ( boardImageId < 1 )
            {
              if ( !itemInfo )
                goto LABEL_51;
              eventId = itemInfo->fields.eventId;
              v22 = System_Int32__ToString((int32_t)&eventId, 0LL);
              v20 = System_String__Concat_62412480(v18, v22, (System_String_o *)StringLiteral_1217/*"00"*/, 0LL);
            }
            else
            {
              if ( !itemInfo )
                goto LABEL_51;
              eventId = itemInfo->fields.boardImageId;
              v19 = System_Int32__ToString((int32_t)&eventId, 0LL);
              v20 = System_String__Concat_62401220(v18, v19, 0LL);
            }
            v23 = v20;
            baseSprite = this->fields.baseSprite;
            if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo, v21);
            rewardGetInfo = (void *)EventRewardRootComponent__setRewardInfoImg(baseSprite, v23, 0LL);
            clearReward = (int32_t *)v5->fields.clearReward;
            if ( clearReward )
            {
              rewardGetInfo = this->fields.itemIcon;
              if ( rewardGetInfo )
              {
                v26 = clearReward[7] <= 1 ? -1 : clearReward[7];
                ItemIconComponent__SetGift_38855180(
                  (ItemIconComponent_o *)rewardGetInfo,
                  clearReward[5],
                  clearReward[6],
                  v26,
                  0,
                  0LL);
                v27 = v5->fields.itemInfo;
                if ( v27 )
                {
                  item = (EventTowerListViewItem_o *)(unsigned int)v27->fields.iconId;
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
                      rewardGetInfo = EventTowerListViewItem__get_BoardMessage(v5, v29);
                      if ( rewardCondMessage )
                      {
                        UILabel__set_text(rewardCondMessage, (System_String_o *)rewardGetInfo, 0LL);
                        if ( v5->fields.isClearFloor )
                        {
                          rewardGetInfo = this->fields.rewardGetInfo;
                          if ( !rewardGetInfo )
                            goto LABEL_51;
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rewardGetInfo, 1, 0LL);
                          v30 = v5->fields.itemInfo;
                          if ( !v30 )
                            goto LABEL_51;
                          rewardGetInfo = EventTowerListViewItemDraw_TypeInfo;
                          v31 = v30->fields.boardImageId;
                          if ( !EventTowerListViewItemDraw_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(EventTowerListViewItemDraw_TypeInfo, item);
                            rewardGetInfo = EventTowerListViewItemDraw_TypeInfo;
                            v30 = v5->fields.itemInfo;
                          }
                          v32 = *(System_String_o **)(*((_QWORD *)rewardGetInfo + 23) + 8LL);
                          if ( v31 < 1 )
                          {
                            if ( !v30 )
                              goto LABEL_51;
                            eventId = v30->fields.eventId;
                            v36 = System_Int32__ToString((int32_t)&eventId, 0LL);
                            v34 = System_String__Concat_62412480(v32, v36, (System_String_o *)StringLiteral_1217/*"00"*/, 0LL);
                          }
                          else
                          {
                            if ( !v30 )
                              goto LABEL_51;
                            eventId = v30->fields.boardImageId;
                            v33 = System_Int32__ToString((int32_t)&eventId, 0LL);
                            v34 = System_String__Concat_62401220(v32, v33, 0LL);
                          }
                          v37 = v34;
                          rewardGetSprite = this->fields.rewardGetSprite;
                          if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo, v35);
                          EventRewardRootComponent__setRewardInfoImg(rewardGetSprite, v37, 0LL);
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
                            v40 = this->fields.rewardCondMessage;
                            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v39);
                            rewardGetInfo = LocalizationManager__Get((System_String_o *)StringLiteral_5817/*"EVENT_TOWER_HIDE_COND"*/, 0LL);
                            if ( v40 )
                            {
                              UILabel__set_text(v40, (System_String_o *)rewardGetInfo, 0LL);
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
    sub_1BCAA3C(rewardGetInfo, item);
  }
}