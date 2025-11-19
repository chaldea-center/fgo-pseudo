void EventRankingListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct EventRankingListViewItemDraw_StaticFields *static_fields; // x0
  __int64 v3; // x1
  struct EventRankingListViewItemDraw_StaticFields *v4; // x0
  __int64 v5; // x1
  struct EventRankingListViewItemDraw_StaticFields *v6; // x0
  __int64 v7; // x1
  struct EventRankingListViewItemDraw_StaticFields *v8; // x0
  __int64 v9; // x1
  struct EventRankingListViewItemDraw_StaticFields *v10; // x0
  __int64 v11; // x1
  struct EventRankingListViewItemDraw_StaticFields *v12; // x0
  __int64 v13; // x1
  struct EventRankingListViewItemDraw_StaticFields *v14; // x0

  if ( (byte_4CB083D & 1) == 0 )
  {
    sub_1C6BA08(&EventRankingListViewItemDraw_TypeInfo);
    sub_1C6BA08(&StringLiteral_19302/*"event_ranking_"*/);
    sub_1C6BA08(&StringLiteral_19260/*"event_goal_flag"*/);
    sub_1C6BA08(&StringLiteral_19306/*"event_ranking_rewardget_"*/);
    sub_1C6BA08(&StringLiteral_19305/*"event_ranking_reward_txt"*/);
    sub_1C6BA08(&StringLiteral_19304/*"event_ranking_group_name_"*/);
    sub_1C6BA08(&StringLiteral_19303/*"event_ranking_group_"*/);
    sub_1C6BA08(&StringLiteral_19339/*"event_support_txt"*/);
    sub_1C6BA08(&StringLiteral_19319/*"event_rewardranking_"*/);
    byte_4CB083D = 1;
  }
  EventRankingListViewItemDraw_TypeInfo->static_fields->GROUP_IMAGE_NAME = (struct System_String_o *)StringLiteral_19303/*"event_ranking_group_"*/;
  sub_1C6B9AC(EventRankingListViewItemDraw_TypeInfo->static_fields, StringLiteral_19303/*"event_ranking_group_"*/);
  v1 = StringLiteral_19304/*"event_ranking_group_name_"*/;
  static_fields = EventRankingListViewItemDraw_TypeInfo->static_fields;
  static_fields->GROUP_NAME_IMAGE_NAME = (struct System_String_o *)StringLiteral_19304/*"event_ranking_group_name_"*/;
  sub_1C6B9AC(&static_fields->GROUP_NAME_IMAGE_NAME, v1);
  v3 = StringLiteral_19319/*"event_rewardranking_"*/;
  v4 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v4->BOARD_IMAGE_NAME = (struct System_String_o *)StringLiteral_19319/*"event_rewardranking_"*/;
  sub_1C6B9AC(&v4->BOARD_IMAGE_NAME, v3);
  v5 = StringLiteral_19306/*"event_ranking_rewardget_"*/;
  v6 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v6->REWARD_GET_IMAGE_NAME = (struct System_String_o *)StringLiteral_19306/*"event_ranking_rewardget_"*/;
  sub_1C6B9AC(&v6->REWARD_GET_IMAGE_NAME, v5);
  v7 = StringLiteral_19302/*"event_ranking_"*/;
  v8 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v8->RANKING_IMAGE_NAME = (struct System_String_o *)StringLiteral_19302/*"event_ranking_"*/;
  sub_1C6B9AC(&v8->RANKING_IMAGE_NAME, v7);
  v9 = StringLiteral_19260/*"event_goal_flag"*/;
  v10 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v10->GOAL_IMAGE_NAME = (struct System_String_o *)StringLiteral_19260/*"event_goal_flag"*/;
  sub_1C6B9AC(&v10->GOAL_IMAGE_NAME, v9);
  v11 = StringLiteral_19305/*"event_ranking_reward_txt"*/;
  v12 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v12->HIGHER_REWARD_IMAGE_NAME = (struct System_String_o *)StringLiteral_19305/*"event_ranking_reward_txt"*/;
  sub_1C6B9AC(&v12->HIGHER_REWARD_IMAGE_NAME, v11);
  v13 = StringLiteral_19339/*"event_support_txt"*/;
  v14 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v14->SUPPORT_TXT_IMAGE_NAME = (struct System_String_o *)StringLiteral_19339/*"event_support_txt"*/;
  sub_1C6B9AC(&v14->SUPPORT_TXT_IMAGE_NAME, v13);
}


void EventRankingListViewItemDraw___ctor(EventRankingListViewItemDraw_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void EventRankingListViewItemDraw__ChangeNextRewardIcon(
        EventRankingListViewItemDraw_o *this,
        EventRankingListViewManager_o *manager,
        const MethodInfo *method)
{
  struct GiftEntity_array *giftEntityList; // x8
  unsigned int max_length; // w10
  int v5; // w9
  GiftEntity_o *v6; // x8
  int64_t num; // x3

  if ( this->fields.isMultipleReward )
  {
    giftEntityList = this->fields.giftEntityList;
    if ( !giftEntityList || !manager )
      goto LABEL_12;
    max_length = giftEntityList->max_length;
    v5 = manager->fields.alphaAnimCnt % (int)max_length;
    if ( v5 >= max_length )
      sub_1C6BC68(this);
    v6 = giftEntityList->m_Items[v5];
    if ( !v6 || (this = (EventRankingListViewItemDraw_o *)this->fields.itemIcon) == 0 )
LABEL_12:
      sub_1C6BC60(this, manager);
    if ( v6->fields.num <= 1 )
      num = -1;
    else
      num = (unsigned int)v6->fields.num;
    ItemIconComponent__SetGift_41153640((ItemIconComponent_o *)this, v6->fields.type, v6->fields.objectId, num, 0, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventRankingListViewItemDraw__OnChangeAlphaAnim(
        EventRankingListViewItemDraw_o *this,
        EventRankingListViewItem_o *item,
        int32_t mode,
        EventRankingListViewManager_o *manager,
        const MethodInfo *method)
{
  EventRankingListViewItemDraw__ChangeNextRewardIcon(this, manager, *(const MethodInfo **)&mode);
}


void EventRankingListViewItemDraw__SetInput(
        EventRankingListViewItemDraw_o *this,
        EventRankingListViewItem_o *item,
        const MethodInfo *method)
{
  ;
}


void EventRankingListViewItemDraw__SetItem(
        EventRankingListViewItemDraw_o *this,
        EventRankingListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  EventRankingListViewItem_o *v5; // x20
  __int64 rewardGetObj; // x0
  UISprite_o *baseSprite; // x21
  int ranking; // w24
  System_Object_array *v10; // x22
  EventRankingListViewItemDraw_c *v11; // x8
  Il2CppObject *BOARD_IMAGE_NAME; // x23
  struct EventRankingRoundItemInfo_o *itemInfo; // x8
  Il2CppObject *v14; // x23
  __int64 v15; // x1
  Il2CppObject *v16; // x23
  System_String_o *v17; // x22
  UISprite_o *rankingSprite; // x21
  System_Object_array *v19; // x22
  struct System_String_o *RANKING_IMAGE_NAME; // x23
  struct EventRankingRoundItemInfo_o *v21; // x8
  Il2CppObject *v22; // x23
  __int64 v23; // x1
  Il2CppObject *v24; // x23
  System_String_o *v25; // x0
  UISprite_o *teamSprite; // x21
  System_Object_array *v27; // x22
  struct System_String_o *GROUP_IMAGE_NAME; // x23
  struct EventRankingRoundItemInfo_o *v29; // x8
  Il2CppObject *v30; // x23
  __int64 v31; // x1
  Il2CppObject *v32; // x23
  System_String_o *v33; // x0
  UISprite_o *teamNameSprite; // x21
  System_Object_array *v35; // x22
  struct System_String_o *GROUP_NAME_IMAGE_NAME; // x23
  struct EventRankingRoundItemInfo_o *v37; // x8
  Il2CppObject *v38; // x23
  __int64 v39; // x1
  struct EventRankingRoundItemInfo_o *v40; // x8
  Il2CppObject *v41; // x23
  System_String_o *v42; // x0
  struct EventRankingRoundItemInfo_o *v43; // x8
  UILabel_o *supportInfoLabel; // x21
  int64_t supportPoint; // x22
  EventRankingListViewItemDraw_c *v46; // x0
  UISprite_o *goalSprite; // x21
  System_String_o *GOAL_IMAGE_NAME; // x22
  UISprite_o *rewardGetSprite; // x21
  EventRankingListViewItemDraw_c *v50; // x8
  System_Object_array *v51; // x22
  Il2CppObject *REWARD_GET_IMAGE_NAME; // x23
  struct EventRankingRoundItemInfo_o *v53; // x8
  Il2CppObject *v54; // x23
  __int64 v55; // x1
  Il2CppObject *v56; // x23
  System_String_o *v57; // x22
  int32_t v58; // w21
  struct GiftEntity_array *giftEntityList; // x1
  struct GiftEntity_array *v60; // x8
  int max_length; // w8
  struct EventRankingListViewObject_o *listViewObject; // x8
  UnityEngine_Object_o *manager; // x20
  struct EventRankingListViewObject_o *v64; // x9
  struct GiftEntity_array *v65; // x8
  __int64 naturalAligment; // x10
  unsigned int v67; // w10
  int v68; // w9
  struct GiftEntity_array *v69; // x8
  GiftEntity_o *v70; // x8
  int64_t num; // x3
  __int64 v72; // x0
  EventRankingListViewManager_o *v73; // x0
  int32_t v74; // w1
  const MethodInfo *v75; // x2
  int32_t groupId; // [xsp+0h] [xbp-80h] BYREF
  int32_t v77; // [xsp+4h] [xbp-7Ch] BYREF
  int32_t groupImageId; // [xsp+8h] [xbp-78h] BYREF
  int32_t v79; // [xsp+Ch] [xbp-74h] BYREF
  int32_t v80; // [xsp+10h] [xbp-70h] BYREF
  int32_t v81; // [xsp+14h] [xbp-6Ch] BYREF
  int v82; // [xsp+18h] [xbp-68h] BYREF
  int32_t eventId; // [xsp+1Ch] [xbp-64h] BYREF

  v5 = item;
  if ( (byte_4CB083C & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&EventRankingListViewItemDraw_TypeInfo);
    sub_1C6BA08(&EventRankingListViewManager_TypeInfo);
    sub_1C6BA08(&EventRewardRootComponent_TypeInfo);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&object___TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_16102/*"_"*/);
    byte_4CB083C = 1;
  }
  if ( !v5 || !mode )
    return;
  rewardGetObj = (__int64)this->fields.rewardGetObj;
  if ( !rewardGetObj )
    goto LABEL_144;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rewardGetObj, 0, 0);
  rewardGetObj = (__int64)this->fields.rewardGetSprite;
  if ( !rewardGetObj )
    goto LABEL_144;
  rewardGetObj = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rewardGetObj, 0);
  if ( !rewardGetObj )
    goto LABEL_144;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rewardGetObj, 0, 0);
  rewardGetObj = (__int64)this->fields.goalSprite;
  if ( !rewardGetObj )
    goto LABEL_144;
  rewardGetObj = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rewardGetObj, 0);
  if ( !rewardGetObj )
    goto LABEL_144;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rewardGetObj, 0, 0);
  baseSprite = this->fields.baseSprite;
  if ( v5->fields.ranking >= 4 )
    ranking = 4;
  else
    ranking = v5->fields.ranking;
  rewardGetObj = sub_1C6BAB0(object___TypeInfo, 4);
  v10 = (System_Object_array *)rewardGetObj;
  v11 = EventRankingListViewItemDraw_TypeInfo;
  if ( !EventRankingListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRankingListViewItemDraw_TypeInfo);
    v11 = EventRankingListViewItemDraw_TypeInfo;
  }
  if ( !v10 )
    goto LABEL_144;
  BOARD_IMAGE_NAME = (Il2CppObject *)v11->static_fields->BOARD_IMAGE_NAME;
  if ( BOARD_IMAGE_NAME )
  {
    rewardGetObj = sub_1C6BB44(BOARD_IMAGE_NAME, v10->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( !LODWORD(v10->max_length) )
    goto LABEL_145;
  v10->m_Items[0] = BOARD_IMAGE_NAME;
  rewardGetObj = sub_1C6B9AC(v10->m_Items, BOARD_IMAGE_NAME);
  itemInfo = v5->fields.itemInfo;
  if ( !itemInfo )
    goto LABEL_144;
  eventId = itemInfo->fields.eventId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &eventId);
  v14 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1C6BB44(rewardGetObj, v10->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( LODWORD(v10->max_length) <= 1 )
    goto LABEL_145;
  v10->m_Items[1] = v14;
  sub_1C6B9AC(&v10->m_Items[1], v14);
  rewardGetObj = StringLiteral_16102/*"_"*/;
  if ( StringLiteral_16102/*"_"*/ )
  {
    rewardGetObj = sub_1C6BB44(StringLiteral_16102/*"_"*/, v10->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
    v15 = StringLiteral_16102/*"_"*/;
  }
  else
  {
    v15 = 0;
  }
  if ( LODWORD(v10->max_length) <= 2 )
    goto LABEL_145;
  v10->m_Items[2] = (Il2CppObject *)v15;
  sub_1C6B9AC(&v10->m_Items[2], v15);
  v82 = ranking;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v82);
  v16 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1C6BB44(rewardGetObj, v10->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( LODWORD(v10->max_length) <= 3 )
    goto LABEL_145;
  v10->m_Items[3] = v16;
  sub_1C6B9AC(&v10->m_Items[3], v16);
  v17 = System_String__Concat_64005248(v10, 0);
  if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
  EventRewardRootComponent__setRewardInfoImg(baseSprite, v17, 0);
  rankingSprite = this->fields.rankingSprite;
  rewardGetObj = sub_1C6BAB0(object___TypeInfo, 4);
  if ( !rewardGetObj )
    goto LABEL_144;
  v19 = (System_Object_array *)rewardGetObj;
  RANKING_IMAGE_NAME = EventRankingListViewItemDraw_TypeInfo->static_fields->RANKING_IMAGE_NAME;
  if ( RANKING_IMAGE_NAME )
  {
    rewardGetObj = sub_1C6BB44(RANKING_IMAGE_NAME, *(_QWORD *)(*(_QWORD *)rewardGetObj + 64LL));
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( !LODWORD(v19->max_length) )
    goto LABEL_145;
  v19->m_Items[0] = (Il2CppObject *)RANKING_IMAGE_NAME;
  rewardGetObj = sub_1C6B9AC(v19->m_Items, RANKING_IMAGE_NAME);
  v21 = v5->fields.itemInfo;
  if ( !v21 )
    goto LABEL_144;
  v81 = v21->fields.eventId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v81);
  v22 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1C6BB44(rewardGetObj, v19->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( LODWORD(v19->max_length) <= 1 )
    goto LABEL_145;
  v19->m_Items[1] = v22;
  sub_1C6B9AC(&v19->m_Items[1], v22);
  rewardGetObj = StringLiteral_16102/*"_"*/;
  if ( StringLiteral_16102/*"_"*/ )
  {
    rewardGetObj = sub_1C6BB44(StringLiteral_16102/*"_"*/, v19->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
    v23 = StringLiteral_16102/*"_"*/;
  }
  else
  {
    v23 = 0;
  }
  if ( LODWORD(v19->max_length) <= 2 )
    goto LABEL_145;
  v19->m_Items[2] = (Il2CppObject *)v23;
  sub_1C6B9AC(&v19->m_Items[2], v23);
  v80 = v5->fields.ranking;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v80);
  v24 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1C6BB44(rewardGetObj, v19->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( LODWORD(v19->max_length) <= 3 )
    goto LABEL_145;
  v19->m_Items[3] = v24;
  sub_1C6B9AC(&v19->m_Items[3], v24);
  v25 = System_String__Concat_64005248(v19, 0);
  EventRewardRootComponent__setRewardInfoImg(rankingSprite, v25, 0);
  teamSprite = this->fields.teamSprite;
  rewardGetObj = sub_1C6BAB0(object___TypeInfo, 4);
  if ( !rewardGetObj )
    goto LABEL_144;
  v27 = (System_Object_array *)rewardGetObj;
  GROUP_IMAGE_NAME = EventRankingListViewItemDraw_TypeInfo->static_fields->GROUP_IMAGE_NAME;
  if ( GROUP_IMAGE_NAME )
  {
    rewardGetObj = sub_1C6BB44(GROUP_IMAGE_NAME, *(_QWORD *)(*(_QWORD *)rewardGetObj + 64LL));
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( !LODWORD(v27->max_length) )
    goto LABEL_145;
  v27->m_Items[0] = (Il2CppObject *)GROUP_IMAGE_NAME;
  rewardGetObj = sub_1C6B9AC(v27->m_Items, GROUP_IMAGE_NAME);
  v29 = v5->fields.itemInfo;
  if ( !v29 )
    goto LABEL_144;
  v79 = v29->fields.eventId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v79);
  v30 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1C6BB44(rewardGetObj, v27->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( LODWORD(v27->max_length) <= 1 )
    goto LABEL_145;
  v27->m_Items[1] = v30;
  sub_1C6B9AC(&v27->m_Items[1], v30);
  rewardGetObj = StringLiteral_16102/*"_"*/;
  if ( StringLiteral_16102/*"_"*/ )
  {
    rewardGetObj = sub_1C6BB44(StringLiteral_16102/*"_"*/, v27->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
    v31 = StringLiteral_16102/*"_"*/;
  }
  else
  {
    v31 = 0;
  }
  if ( LODWORD(v27->max_length) <= 2 )
    goto LABEL_145;
  v27->m_Items[2] = (Il2CppObject *)v31;
  sub_1C6B9AC(&v27->m_Items[2], v31);
  groupImageId = v5->fields.groupImageId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &groupImageId);
  v32 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1C6BB44(rewardGetObj, v27->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( LODWORD(v27->max_length) <= 3 )
    goto LABEL_145;
  v27->m_Items[3] = v32;
  sub_1C6B9AC(&v27->m_Items[3], v32);
  v33 = System_String__Concat_64005248(v27, 0);
  EventRewardRootComponent__setRewardInfoImg(teamSprite, v33, 0);
  teamNameSprite = this->fields.teamNameSprite;
  rewardGetObj = sub_1C6BAB0(object___TypeInfo, 4);
  if ( !rewardGetObj )
    goto LABEL_144;
  v35 = (System_Object_array *)rewardGetObj;
  GROUP_NAME_IMAGE_NAME = EventRankingListViewItemDraw_TypeInfo->static_fields->GROUP_NAME_IMAGE_NAME;
  if ( GROUP_NAME_IMAGE_NAME )
  {
    rewardGetObj = sub_1C6BB44(GROUP_NAME_IMAGE_NAME, *(_QWORD *)(*(_QWORD *)rewardGetObj + 64LL));
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( !LODWORD(v35->max_length) )
    goto LABEL_145;
  v35->m_Items[0] = (Il2CppObject *)GROUP_NAME_IMAGE_NAME;
  rewardGetObj = sub_1C6B9AC(v35->m_Items, GROUP_NAME_IMAGE_NAME);
  v37 = v5->fields.itemInfo;
  if ( !v37 )
    goto LABEL_144;
  v77 = v37->fields.eventId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v77);
  v38 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1C6BB44(rewardGetObj, v35->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( LODWORD(v35->max_length) <= 1 )
    goto LABEL_145;
  v35->m_Items[1] = v38;
  sub_1C6B9AC(&v35->m_Items[1], v38);
  rewardGetObj = StringLiteral_16102/*"_"*/;
  if ( StringLiteral_16102/*"_"*/ )
  {
    rewardGetObj = sub_1C6BB44(StringLiteral_16102/*"_"*/, v35->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
    v39 = StringLiteral_16102/*"_"*/;
  }
  else
  {
    v39 = 0;
  }
  if ( LODWORD(v35->max_length) <= 2 )
    goto LABEL_145;
  v35->m_Items[2] = (Il2CppObject *)v39;
  rewardGetObj = sub_1C6B9AC(&v35->m_Items[2], v39);
  v40 = v5->fields.itemInfo;
  if ( !v40 )
    goto LABEL_144;
  groupId = v40->fields.groupId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &groupId);
  v41 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1C6BB44(rewardGetObj, v35->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( LODWORD(v35->max_length) <= 3 )
    goto LABEL_145;
  v35->m_Items[3] = v41;
  sub_1C6B9AC(&v35->m_Items[3], v41);
  v42 = System_String__Concat_64005248(v35, 0);
  EventRewardRootComponent__setRewardInfoImg(teamNameSprite, v42, 0);
  rewardGetObj = EventRewardRootComponent__setRewardInfoImg(
                   this->fields.supportTxtSprite,
                   EventRankingListViewItemDraw_TypeInfo->static_fields->SUPPORT_TXT_IMAGE_NAME,
                   0);
  v43 = v5->fields.itemInfo;
  if ( !v43 )
    goto LABEL_144;
  supportInfoLabel = this->fields.supportInfoLabel;
  supportPoint = v43->fields.supportPoint;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  rewardGetObj = (__int64)LocalizationManager__GetNumberFormatLong(supportPoint, 0);
  if ( !supportInfoLabel )
    goto LABEL_144;
  UILabel__set_text(supportInfoLabel, (System_String_o *)rewardGetObj, 0);
  EventRewardRootComponent__setRewardInfoImg(
    this->fields.higherRewardSprite,
    EventRankingListViewItemDraw_TypeInfo->static_fields->HIGHER_REWARD_IMAGE_NAME,
    0);
  if ( v5->fields.isJoinTerm )
  {
    if ( v5->fields.isPlayedGoal )
    {
      v46 = EventRankingListViewItemDraw_TypeInfo;
      goalSprite = this->fields.goalSprite;
      if ( !EventRankingListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRankingListViewItemDraw_TypeInfo);
        v46 = EventRankingListViewItemDraw_TypeInfo;
      }
      GOAL_IMAGE_NAME = v46->static_fields->GOAL_IMAGE_NAME;
      if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
      EventRewardRootComponent__setRewardInfoImg(goalSprite, GOAL_IMAGE_NAME, 0);
      rewardGetObj = (__int64)this->fields.goalSprite;
      if ( !rewardGetObj )
        goto LABEL_144;
      rewardGetObj = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rewardGetObj, 0);
      if ( !rewardGetObj )
        goto LABEL_144;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rewardGetObj, 1, 0);
    }
    if ( v5->fields.isGetReward )
    {
      rewardGetSprite = this->fields.rewardGetSprite;
      rewardGetObj = sub_1C6BAB0(object___TypeInfo, 4);
      v50 = EventRankingListViewItemDraw_TypeInfo;
      v51 = (System_Object_array *)rewardGetObj;
      if ( !EventRankingListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRankingListViewItemDraw_TypeInfo);
        v50 = EventRankingListViewItemDraw_TypeInfo;
      }
      if ( !v51 )
        goto LABEL_144;
      REWARD_GET_IMAGE_NAME = (Il2CppObject *)v50->static_fields->REWARD_GET_IMAGE_NAME;
      if ( !REWARD_GET_IMAGE_NAME
        || (rewardGetObj = sub_1C6BB44(REWARD_GET_IMAGE_NAME, v51->obj.klass->_1.element_class)) != 0 )
      {
        if ( !LODWORD(v51->max_length) )
          goto LABEL_145;
        v51->m_Items[0] = REWARD_GET_IMAGE_NAME;
        rewardGetObj = sub_1C6B9AC(v51->m_Items, REWARD_GET_IMAGE_NAME);
        v53 = v5->fields.itemInfo;
        if ( !v53 )
          goto LABEL_144;
        eventId = v53->fields.eventId;
        rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &eventId);
        v54 = (Il2CppObject *)rewardGetObj;
        if ( !rewardGetObj || (rewardGetObj = sub_1C6BB44(rewardGetObj, v51->obj.klass->_1.element_class)) != 0 )
        {
          if ( LODWORD(v51->max_length) <= 1 )
            goto LABEL_145;
          v51->m_Items[1] = v54;
          sub_1C6B9AC(&v51->m_Items[1], v54);
          rewardGetObj = StringLiteral_16102/*"_"*/;
          if ( StringLiteral_16102/*"_"*/ )
          {
            rewardGetObj = sub_1C6BB44(StringLiteral_16102/*"_"*/, v51->obj.klass->_1.element_class);
            if ( !rewardGetObj )
              goto LABEL_146;
            v55 = StringLiteral_16102/*"_"*/;
          }
          else
          {
            v55 = 0;
          }
          if ( LODWORD(v51->max_length) <= 2 )
            goto LABEL_145;
          v51->m_Items[2] = (Il2CppObject *)v55;
          sub_1C6B9AC(&v51->m_Items[2], v55);
          v82 = ranking;
          rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v82);
          v56 = (Il2CppObject *)rewardGetObj;
          if ( !rewardGetObj || (rewardGetObj = sub_1C6BB44(rewardGetObj, v51->obj.klass->_1.element_class)) != 0 )
          {
            if ( LODWORD(v51->max_length) <= 3 )
              goto LABEL_145;
            v51->m_Items[3] = v56;
            sub_1C6B9AC(&v51->m_Items[3], v56);
            v57 = System_String__Concat_64005248(v51, 0);
            if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
            EventRewardRootComponent__setRewardInfoImg(rewardGetSprite, v57, 0);
            rewardGetObj = (__int64)this->fields.rewardGetSprite;
            if ( !rewardGetObj )
              goto LABEL_144;
            rewardGetObj = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rewardGetObj, 0);
            if ( !rewardGetObj )
              goto LABEL_144;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rewardGetObj, 1, 0);
            v58 = v5->fields.ranking;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            rewardGetObj = (__int64)this->fields.rewardGetObj;
            if ( !rewardGetObj )
              goto LABEL_144;
            UnityEngine_GameObject__SetActive(
              (UnityEngine_GameObject_o *)rewardGetObj,
              v58 <= BalanceConfig_TypeInfo->static_fields->raceRewardRankMax,
              0);
            goto LABEL_122;
          }
        }
      }
LABEL_146:
      v72 = sub_1C6BC84();
      sub_1C6BB30(v72, 0);
    }
  }
LABEL_122:
  giftEntityList = v5->fields.giftEntityList;
  this->fields.giftEntityList = giftEntityList;
  rewardGetObj = sub_1C6B9AC(&this->fields.giftEntityList, giftEntityList);
  v60 = v5->fields.giftEntityList;
  if ( !v60 )
    goto LABEL_144;
  max_length = v60->max_length;
  this->fields.isMultipleReward = max_length > 1;
  if ( max_length < 2 )
  {
    v69 = this->fields.giftEntityList;
    if ( !v69 )
      goto LABEL_144;
    if ( LODWORD(v69->max_length) )
      goto LABEL_137;
    goto LABEL_145;
  }
  listViewObject = this->fields.listViewObject;
  if ( !listViewObject )
    goto LABEL_144;
  manager = (UnityEngine_Object_o *)listViewObject->fields.manager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  rewardGetObj = UnityEngine_Object__op_Inequality(manager, 0, 0);
  if ( (rewardGetObj & 1) != 0 )
  {
    v64 = this->fields.listViewObject;
    if ( !v64 )
      goto LABEL_144;
    v65 = this->fields.giftEntityList;
    if ( !v65 )
      goto LABEL_144;
    rewardGetObj = (__int64)v64->fields.manager;
    if ( !rewardGetObj )
      goto LABEL_144;
    item = (EventRankingListViewItem_o *)EventRankingListViewManager_TypeInfo;
    naturalAligment = EventRankingListViewManager_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)rewardGetObj + 304LL) < (unsigned int)naturalAligment
      || *(EventRankingListViewManager_c **)(*(_QWORD *)(*(_QWORD *)rewardGetObj + 200LL) + 8 * naturalAligment - 8) != EventRankingListViewManager_TypeInfo )
    {
      v73 = (EventRankingListViewManager_o *)sub_1C6BFFC(rewardGetObj);
      EventRankingListViewManager__GetAlphaAnimCnt(v73, v74, v75);
      return;
    }
    v67 = v65->max_length;
    v68 = *(_DWORD *)(rewardGetObj + 340) % (int)v67;
    if ( v68 < v67 )
    {
      v69 = (struct GiftEntity_array *)((char *)v65 + 8 * v68);
LABEL_137:
      v70 = v69->m_Items[0];
      if ( v70 )
      {
        rewardGetObj = (__int64)this->fields.itemIcon;
        if ( rewardGetObj )
        {
          if ( v70->fields.num <= 1 )
            num = -1;
          else
            num = (unsigned int)v70->fields.num;
          ItemIconComponent__SetGift_41153640(
            (ItemIconComponent_o *)rewardGetObj,
            v70->fields.type,
            v70->fields.objectId,
            num,
            0,
            0);
          return;
        }
      }
LABEL_144:
      sub_1C6BC60(rewardGetObj, item);
    }
LABEL_145:
    sub_1C6BC68(rewardGetObj);
  }
}


void EventRankingListViewItemDraw__SetListViewObject(
        EventRankingListViewItemDraw_o *this,
        EventRankingListViewObject_o *listViewObject,
        const MethodInfo *method)
{
  this->fields.listViewObject = listViewObject;
  sub_1C6B9AC(&this->fields.listViewObject, listViewObject);
}


void EventRankingListViewItemDraw__SetRewardIconAlpha(
        EventRankingListViewItemDraw_o *this,
        float alpha,
        const MethodInfo *method)
{
  ItemIconComponent_o *itemIcon; // x0

  if ( this->fields.isMultipleReward )
  {
    itemIcon = this->fields.itemIcon;
    if ( !itemIcon )
      sub_1C6BC60(0, method);
    ItemIconComponent__SetAlpha(itemIcon, alpha, 0);
  }
}


void EventRankingListViewItemDraw__UpdateItem(
        EventRankingListViewItemDraw_o *this,
        EventRankingListViewItem_o *item,
        int32_t mode,
        EventRankingListViewManager_o *manager,
        const MethodInfo *method)
{
  if ( item && mode )
  {
    if ( !manager )
      sub_1C6BC60(this, item);
    EventRankingListViewItemDraw__SetRewardIconAlpha(this, manager->fields.alphaAnimNow, (const MethodInfo *)item);
  }
}