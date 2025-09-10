void EventRankingListViewItemDraw___cctor(const MethodInfo *method)
{
  struct EventRankingListViewItemDraw_StaticFields *static_fields; // x0
  struct EventRankingListViewItemDraw_StaticFields *v2; // x0
  struct EventRankingListViewItemDraw_StaticFields *v3; // x0
  struct EventRankingListViewItemDraw_StaticFields *v4; // x0
  struct EventRankingListViewItemDraw_StaticFields *v5; // x0
  struct EventRankingListViewItemDraw_StaticFields *v6; // x0
  struct EventRankingListViewItemDraw_StaticFields *v7; // x0

  if ( (byte_4C218BC & 1) == 0 )
  {
    sub_1C2D490(&EventRankingListViewItemDraw_TypeInfo);
    sub_1C2D490(&StringLiteral_19239/*"event_ranking_"*/);
    sub_1C2D490(&StringLiteral_19197/*"event_goal_flag"*/);
    sub_1C2D490(&StringLiteral_19243/*"event_ranking_rewardget_"*/);
    sub_1C2D490(&StringLiteral_19242/*"event_ranking_reward_txt"*/);
    sub_1C2D490(&StringLiteral_19241/*"event_ranking_group_name_"*/);
    sub_1C2D490(&StringLiteral_19240/*"event_ranking_group_"*/);
    sub_1C2D490(&StringLiteral_19276/*"event_support_txt"*/);
    sub_1C2D490(&StringLiteral_19256/*"event_rewardranking_"*/);
    byte_4C218BC = 1;
  }
  EventRankingListViewItemDraw_TypeInfo->static_fields->GROUP_IMAGE_NAME = (struct System_String_o *)StringLiteral_19240/*"event_ranking_group_"*/;
  sub_1C2D434(EventRankingListViewItemDraw_TypeInfo->static_fields);
  static_fields = EventRankingListViewItemDraw_TypeInfo->static_fields;
  static_fields->GROUP_NAME_IMAGE_NAME = (struct System_String_o *)StringLiteral_19241/*"event_ranking_group_name_"*/;
  sub_1C2D434(&static_fields->GROUP_NAME_IMAGE_NAME);
  v2 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v2->BOARD_IMAGE_NAME = (struct System_String_o *)StringLiteral_19256/*"event_rewardranking_"*/;
  sub_1C2D434(&v2->BOARD_IMAGE_NAME);
  v3 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v3->REWARD_GET_IMAGE_NAME = (struct System_String_o *)StringLiteral_19243/*"event_ranking_rewardget_"*/;
  sub_1C2D434(&v3->REWARD_GET_IMAGE_NAME);
  v4 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v4->RANKING_IMAGE_NAME = (struct System_String_o *)StringLiteral_19239/*"event_ranking_"*/;
  sub_1C2D434(&v4->RANKING_IMAGE_NAME);
  v5 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v5->GOAL_IMAGE_NAME = (struct System_String_o *)StringLiteral_19197/*"event_goal_flag"*/;
  sub_1C2D434(&v5->GOAL_IMAGE_NAME);
  v6 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v6->HIGHER_REWARD_IMAGE_NAME = (struct System_String_o *)StringLiteral_19242/*"event_ranking_reward_txt"*/;
  sub_1C2D434(&v6->HIGHER_REWARD_IMAGE_NAME);
  v7 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v7->SUPPORT_TXT_IMAGE_NAME = (struct System_String_o *)StringLiteral_19276/*"event_support_txt"*/;
  sub_1C2D434(&v7->SUPPORT_TXT_IMAGE_NAME);
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
      sub_1C2D6F4(this, manager, method);
    v6 = giftEntityList->m_Items[v5];
    if ( !v6 || (this = (EventRankingListViewItemDraw_o *)this->fields.itemIcon) == 0 )
LABEL_12:
      sub_1C2D6EC(this, manager);
    if ( v6->fields.num <= 1 )
      num = -1;
    else
      num = (unsigned int)v6->fields.num;
    ItemIconComponent__SetGift_40700316((ItemIconComponent_o *)this, v6->fields.type, v6->fields.objectId, num, 0, 0);
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
  __int64 v10; // x2
  __int64 v11; // x3
  System_Object_array *v12; // x22
  EventRankingListViewItemDraw_c *v13; // x8
  Il2CppObject *BOARD_IMAGE_NAME; // x23
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  struct EventRankingRoundItemInfo_o *itemInfo; // x8
  Il2CppObject *v19; // x23
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  Il2CppObject *v23; // x23
  System_String_o *v24; // x22
  UISprite_o *rankingSprite; // x21
  System_Object_array *v26; // x22
  struct System_String_o *RANKING_IMAGE_NAME; // x23
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  struct EventRankingRoundItemInfo_o *v31; // x8
  Il2CppObject *v32; // x23
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  Il2CppObject *v36; // x23
  System_String_o *v37; // x0
  UISprite_o *teamSprite; // x21
  System_Object_array *v39; // x22
  struct System_String_o *GROUP_IMAGE_NAME; // x23
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  struct EventRankingRoundItemInfo_o *v44; // x8
  Il2CppObject *v45; // x23
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  Il2CppObject *v49; // x23
  System_String_o *v50; // x0
  UISprite_o *teamNameSprite; // x21
  System_Object_array *v52; // x22
  struct System_String_o *GROUP_NAME_IMAGE_NAME; // x23
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  struct EventRankingRoundItemInfo_o *v57; // x8
  Il2CppObject *v58; // x23
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  struct EventRankingRoundItemInfo_o *v62; // x8
  Il2CppObject *v63; // x23
  System_String_o *v64; // x0
  struct EventRankingRoundItemInfo_o *v65; // x8
  UILabel_o *supportInfoLabel; // x21
  int64_t supportPoint; // x22
  EventRankingListViewItemDraw_c *v68; // x0
  UISprite_o *goalSprite; // x21
  System_String_o *GOAL_IMAGE_NAME; // x22
  UISprite_o *rewardGetSprite; // x21
  EventRankingListViewItemDraw_c *v72; // x8
  System_Object_array *v73; // x22
  Il2CppObject *REWARD_GET_IMAGE_NAME; // x23
  __int64 v75; // x2
  __int64 v76; // x3
  __int64 v77; // x4
  struct EventRankingRoundItemInfo_o *v78; // x8
  Il2CppObject *v79; // x23
  __int64 v80; // x2
  __int64 v81; // x3
  __int64 v82; // x4
  Il2CppObject *v83; // x23
  System_String_o *v84; // x22
  int32_t v85; // w21
  struct GiftEntity_array *giftEntityList; // x8
  int max_length; // w8
  struct EventRankingListViewObject_o *listViewObject; // x8
  UnityEngine_Object_o *manager; // x20
  struct EventRankingListViewObject_o *v90; // x9
  struct GiftEntity_array *v91; // x8
  __int64 naturalAligment; // x10
  unsigned int v93; // w10
  int v94; // w9
  struct GiftEntity_array *v95; // x8
  GiftEntity_o *v96; // x8
  int64_t num; // x3
  __int64 v98; // x0
  EventRankingListViewManager_o *v99; // x0
  int32_t v100; // w1
  const MethodInfo *v101; // x2
  int32_t groupId; // [xsp+0h] [xbp-80h] BYREF
  int32_t v103; // [xsp+4h] [xbp-7Ch] BYREF
  int32_t groupImageId; // [xsp+8h] [xbp-78h] BYREF
  int32_t v105; // [xsp+Ch] [xbp-74h] BYREF
  int32_t v106; // [xsp+10h] [xbp-70h] BYREF
  int32_t v107; // [xsp+14h] [xbp-6Ch] BYREF
  int v108; // [xsp+18h] [xbp-68h] BYREF
  int32_t eventId; // [xsp+1Ch] [xbp-64h] BYREF

  v5 = item;
  if ( (byte_4C218BB & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&EventRankingListViewItemDraw_TypeInfo);
    sub_1C2D490(&EventRankingListViewManager_TypeInfo);
    sub_1C2D490(&EventRewardRootComponent_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&object___TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_16105/*"_"*/);
    byte_4C218BB = 1;
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
  rewardGetObj = sub_1C2D538(object___TypeInfo, 4);
  v12 = (System_Object_array *)rewardGetObj;
  v13 = EventRankingListViewItemDraw_TypeInfo;
  if ( !EventRankingListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRankingListViewItemDraw_TypeInfo);
    v13 = EventRankingListViewItemDraw_TypeInfo;
  }
  if ( !v12 )
    goto LABEL_144;
  BOARD_IMAGE_NAME = (Il2CppObject *)v13->static_fields->BOARD_IMAGE_NAME;
  if ( BOARD_IMAGE_NAME )
  {
    rewardGetObj = sub_1C2D5CC(BOARD_IMAGE_NAME, v12->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( !LODWORD(v12->max_length) )
    goto LABEL_145;
  v12->m_Items[0] = BOARD_IMAGE_NAME;
  rewardGetObj = sub_1C2D434(v12->m_Items);
  itemInfo = v5->fields.itemInfo;
  if ( !itemInfo )
    goto LABEL_144;
  eventId = itemInfo->fields.eventId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &eventId, v15, v16, v17);
  v19 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1C2D5CC(rewardGetObj, v12->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( LODWORD(v12->max_length) <= 1 )
    goto LABEL_145;
  v12->m_Items[1] = v19;
  sub_1C2D434(&v12->m_Items[1]);
  rewardGetObj = StringLiteral_16105/*"_"*/;
  if ( StringLiteral_16105/*"_"*/ )
  {
    rewardGetObj = sub_1C2D5CC(StringLiteral_16105/*"_"*/, v12->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
    item = (EventRankingListViewItem_o *)StringLiteral_16105/*"_"*/;
  }
  else
  {
    item = 0;
  }
  if ( LODWORD(v12->max_length) <= 2 )
    goto LABEL_145;
  v12->m_Items[2] = (Il2CppObject *)item;
  sub_1C2D434(&v12->m_Items[2]);
  v108 = ranking;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v108, v20, v21, v22);
  v23 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1C2D5CC(rewardGetObj, v12->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( LODWORD(v12->max_length) <= 3 )
    goto LABEL_145;
  v12->m_Items[3] = v23;
  sub_1C2D434(&v12->m_Items[3]);
  v24 = System_String__Concat_63496304(v12, 0);
  if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
  EventRewardRootComponent__setRewardInfoImg(baseSprite, v24, 0);
  rankingSprite = this->fields.rankingSprite;
  rewardGetObj = sub_1C2D538(object___TypeInfo, 4);
  if ( !rewardGetObj )
    goto LABEL_144;
  v26 = (System_Object_array *)rewardGetObj;
  RANKING_IMAGE_NAME = EventRankingListViewItemDraw_TypeInfo->static_fields->RANKING_IMAGE_NAME;
  if ( RANKING_IMAGE_NAME )
  {
    rewardGetObj = sub_1C2D5CC(RANKING_IMAGE_NAME, *(_QWORD *)(*(_QWORD *)rewardGetObj + 64LL));
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( !LODWORD(v26->max_length) )
    goto LABEL_145;
  v26->m_Items[0] = (Il2CppObject *)RANKING_IMAGE_NAME;
  rewardGetObj = sub_1C2D434(v26->m_Items);
  v31 = v5->fields.itemInfo;
  if ( !v31 )
    goto LABEL_144;
  v107 = v31->fields.eventId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v107, v28, v29, v30);
  v32 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1C2D5CC(rewardGetObj, v26->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( LODWORD(v26->max_length) <= 1 )
    goto LABEL_145;
  v26->m_Items[1] = v32;
  sub_1C2D434(&v26->m_Items[1]);
  rewardGetObj = StringLiteral_16105/*"_"*/;
  if ( StringLiteral_16105/*"_"*/ )
  {
    rewardGetObj = sub_1C2D5CC(StringLiteral_16105/*"_"*/, v26->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
    item = (EventRankingListViewItem_o *)StringLiteral_16105/*"_"*/;
  }
  else
  {
    item = 0;
  }
  if ( LODWORD(v26->max_length) <= 2 )
    goto LABEL_145;
  v26->m_Items[2] = (Il2CppObject *)item;
  sub_1C2D434(&v26->m_Items[2]);
  v106 = v5->fields.ranking;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v106, v33, v34, v35);
  v36 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1C2D5CC(rewardGetObj, v26->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( LODWORD(v26->max_length) <= 3 )
    goto LABEL_145;
  v26->m_Items[3] = v36;
  sub_1C2D434(&v26->m_Items[3]);
  v37 = System_String__Concat_63496304(v26, 0);
  EventRewardRootComponent__setRewardInfoImg(rankingSprite, v37, 0);
  teamSprite = this->fields.teamSprite;
  rewardGetObj = sub_1C2D538(object___TypeInfo, 4);
  if ( !rewardGetObj )
    goto LABEL_144;
  v39 = (System_Object_array *)rewardGetObj;
  GROUP_IMAGE_NAME = EventRankingListViewItemDraw_TypeInfo->static_fields->GROUP_IMAGE_NAME;
  if ( GROUP_IMAGE_NAME )
  {
    rewardGetObj = sub_1C2D5CC(GROUP_IMAGE_NAME, *(_QWORD *)(*(_QWORD *)rewardGetObj + 64LL));
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( !LODWORD(v39->max_length) )
    goto LABEL_145;
  v39->m_Items[0] = (Il2CppObject *)GROUP_IMAGE_NAME;
  rewardGetObj = sub_1C2D434(v39->m_Items);
  v44 = v5->fields.itemInfo;
  if ( !v44 )
    goto LABEL_144;
  v105 = v44->fields.eventId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v105, v41, v42, v43);
  v45 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1C2D5CC(rewardGetObj, v39->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( LODWORD(v39->max_length) <= 1 )
    goto LABEL_145;
  v39->m_Items[1] = v45;
  sub_1C2D434(&v39->m_Items[1]);
  rewardGetObj = StringLiteral_16105/*"_"*/;
  if ( StringLiteral_16105/*"_"*/ )
  {
    rewardGetObj = sub_1C2D5CC(StringLiteral_16105/*"_"*/, v39->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
    item = (EventRankingListViewItem_o *)StringLiteral_16105/*"_"*/;
  }
  else
  {
    item = 0;
  }
  if ( LODWORD(v39->max_length) <= 2 )
    goto LABEL_145;
  v39->m_Items[2] = (Il2CppObject *)item;
  sub_1C2D434(&v39->m_Items[2]);
  groupImageId = v5->fields.groupImageId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &groupImageId, v46, v47, v48);
  v49 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1C2D5CC(rewardGetObj, v39->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( LODWORD(v39->max_length) <= 3 )
    goto LABEL_145;
  v39->m_Items[3] = v49;
  sub_1C2D434(&v39->m_Items[3]);
  v50 = System_String__Concat_63496304(v39, 0);
  EventRewardRootComponent__setRewardInfoImg(teamSprite, v50, 0);
  teamNameSprite = this->fields.teamNameSprite;
  rewardGetObj = sub_1C2D538(object___TypeInfo, 4);
  if ( !rewardGetObj )
    goto LABEL_144;
  v52 = (System_Object_array *)rewardGetObj;
  GROUP_NAME_IMAGE_NAME = EventRankingListViewItemDraw_TypeInfo->static_fields->GROUP_NAME_IMAGE_NAME;
  if ( GROUP_NAME_IMAGE_NAME )
  {
    rewardGetObj = sub_1C2D5CC(GROUP_NAME_IMAGE_NAME, *(_QWORD *)(*(_QWORD *)rewardGetObj + 64LL));
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( !LODWORD(v52->max_length) )
    goto LABEL_145;
  v52->m_Items[0] = (Il2CppObject *)GROUP_NAME_IMAGE_NAME;
  rewardGetObj = sub_1C2D434(v52->m_Items);
  v57 = v5->fields.itemInfo;
  if ( !v57 )
    goto LABEL_144;
  v103 = v57->fields.eventId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v103, v54, v55, v56);
  v58 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1C2D5CC(rewardGetObj, v52->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( LODWORD(v52->max_length) <= 1 )
    goto LABEL_145;
  v52->m_Items[1] = v58;
  sub_1C2D434(&v52->m_Items[1]);
  rewardGetObj = StringLiteral_16105/*"_"*/;
  if ( StringLiteral_16105/*"_"*/ )
  {
    rewardGetObj = sub_1C2D5CC(StringLiteral_16105/*"_"*/, v52->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
    item = (EventRankingListViewItem_o *)StringLiteral_16105/*"_"*/;
  }
  else
  {
    item = 0;
  }
  if ( LODWORD(v52->max_length) <= 2 )
    goto LABEL_145;
  v52->m_Items[2] = (Il2CppObject *)item;
  rewardGetObj = sub_1C2D434(&v52->m_Items[2]);
  v62 = v5->fields.itemInfo;
  if ( !v62 )
    goto LABEL_144;
  groupId = v62->fields.groupId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &groupId, v59, v60, v61);
  v63 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1C2D5CC(rewardGetObj, v52->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( LODWORD(v52->max_length) <= 3 )
    goto LABEL_145;
  v52->m_Items[3] = v63;
  sub_1C2D434(&v52->m_Items[3]);
  v64 = System_String__Concat_63496304(v52, 0);
  EventRewardRootComponent__setRewardInfoImg(teamNameSprite, v64, 0);
  rewardGetObj = EventRewardRootComponent__setRewardInfoImg(
                   this->fields.supportTxtSprite,
                   EventRankingListViewItemDraw_TypeInfo->static_fields->SUPPORT_TXT_IMAGE_NAME,
                   0);
  v65 = v5->fields.itemInfo;
  if ( !v65 )
    goto LABEL_144;
  supportInfoLabel = this->fields.supportInfoLabel;
  supportPoint = v65->fields.supportPoint;
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
      v68 = EventRankingListViewItemDraw_TypeInfo;
      goalSprite = this->fields.goalSprite;
      if ( !EventRankingListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRankingListViewItemDraw_TypeInfo);
        v68 = EventRankingListViewItemDraw_TypeInfo;
      }
      GOAL_IMAGE_NAME = v68->static_fields->GOAL_IMAGE_NAME;
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
      rewardGetObj = sub_1C2D538(object___TypeInfo, 4);
      v72 = EventRankingListViewItemDraw_TypeInfo;
      v73 = (System_Object_array *)rewardGetObj;
      if ( !EventRankingListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRankingListViewItemDraw_TypeInfo);
        v72 = EventRankingListViewItemDraw_TypeInfo;
      }
      if ( !v73 )
        goto LABEL_144;
      REWARD_GET_IMAGE_NAME = (Il2CppObject *)v72->static_fields->REWARD_GET_IMAGE_NAME;
      if ( !REWARD_GET_IMAGE_NAME
        || (rewardGetObj = sub_1C2D5CC(REWARD_GET_IMAGE_NAME, v73->obj.klass->_1.element_class)) != 0 )
      {
        if ( !LODWORD(v73->max_length) )
          goto LABEL_145;
        v73->m_Items[0] = REWARD_GET_IMAGE_NAME;
        rewardGetObj = sub_1C2D434(v73->m_Items);
        v78 = v5->fields.itemInfo;
        if ( !v78 )
          goto LABEL_144;
        eventId = v78->fields.eventId;
        rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &eventId, v75, v76, v77);
        v79 = (Il2CppObject *)rewardGetObj;
        if ( !rewardGetObj || (rewardGetObj = sub_1C2D5CC(rewardGetObj, v73->obj.klass->_1.element_class)) != 0 )
        {
          if ( LODWORD(v73->max_length) <= 1 )
            goto LABEL_145;
          v73->m_Items[1] = v79;
          sub_1C2D434(&v73->m_Items[1]);
          rewardGetObj = StringLiteral_16105/*"_"*/;
          if ( StringLiteral_16105/*"_"*/ )
          {
            rewardGetObj = sub_1C2D5CC(StringLiteral_16105/*"_"*/, v73->obj.klass->_1.element_class);
            if ( !rewardGetObj )
              goto LABEL_146;
            item = (EventRankingListViewItem_o *)StringLiteral_16105/*"_"*/;
          }
          else
          {
            item = 0;
          }
          if ( LODWORD(v73->max_length) <= 2 )
            goto LABEL_145;
          v73->m_Items[2] = (Il2CppObject *)item;
          sub_1C2D434(&v73->m_Items[2]);
          v108 = ranking;
          rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v108, v80, v81, v82);
          v83 = (Il2CppObject *)rewardGetObj;
          if ( !rewardGetObj || (rewardGetObj = sub_1C2D5CC(rewardGetObj, v73->obj.klass->_1.element_class)) != 0 )
          {
            if ( LODWORD(v73->max_length) <= 3 )
              goto LABEL_145;
            v73->m_Items[3] = v83;
            sub_1C2D434(&v73->m_Items[3]);
            v84 = System_String__Concat_63496304(v73, 0);
            if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
            EventRewardRootComponent__setRewardInfoImg(rewardGetSprite, v84, 0);
            rewardGetObj = (__int64)this->fields.rewardGetSprite;
            if ( !rewardGetObj )
              goto LABEL_144;
            rewardGetObj = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rewardGetObj, 0);
            if ( !rewardGetObj )
              goto LABEL_144;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rewardGetObj, 1, 0);
            v85 = v5->fields.ranking;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            rewardGetObj = (__int64)this->fields.rewardGetObj;
            if ( !rewardGetObj )
              goto LABEL_144;
            UnityEngine_GameObject__SetActive(
              (UnityEngine_GameObject_o *)rewardGetObj,
              v85 <= BalanceConfig_TypeInfo->static_fields->raceRewardRankMax,
              0);
            goto LABEL_122;
          }
        }
      }
LABEL_146:
      v98 = sub_1C2D710();
      sub_1C2D5B8(v98, 0);
    }
  }
LABEL_122:
  this->fields.giftEntityList = v5->fields.giftEntityList;
  rewardGetObj = sub_1C2D434(&this->fields.giftEntityList);
  giftEntityList = v5->fields.giftEntityList;
  if ( !giftEntityList )
    goto LABEL_144;
  max_length = giftEntityList->max_length;
  this->fields.isMultipleReward = max_length > 1;
  if ( max_length < 2 )
  {
    v95 = this->fields.giftEntityList;
    if ( !v95 )
      goto LABEL_144;
    if ( LODWORD(v95->max_length) )
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
    v90 = this->fields.listViewObject;
    if ( !v90 )
      goto LABEL_144;
    v91 = this->fields.giftEntityList;
    if ( !v91 )
      goto LABEL_144;
    rewardGetObj = (__int64)v90->fields.manager;
    if ( !rewardGetObj )
      goto LABEL_144;
    item = (EventRankingListViewItem_o *)EventRankingListViewManager_TypeInfo;
    naturalAligment = EventRankingListViewManager_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)rewardGetObj + 304LL) < (unsigned int)naturalAligment
      || *(EventRankingListViewManager_c **)(*(_QWORD *)(*(_QWORD *)rewardGetObj + 200LL) + 8 * naturalAligment - 8) != EventRankingListViewManager_TypeInfo )
    {
      v99 = (EventRankingListViewManager_o *)sub_1C2D9AC(rewardGetObj);
      EventRankingListViewManager__GetAlphaAnimCnt(v99, v100, v101);
      return;
    }
    v93 = v91->max_length;
    v94 = *(_DWORD *)(rewardGetObj + 340) % (int)v93;
    if ( v94 < v93 )
    {
      v95 = (struct GiftEntity_array *)((char *)v91 + 8 * v94);
LABEL_137:
      v96 = v95->m_Items[0];
      if ( v96 )
      {
        rewardGetObj = (__int64)this->fields.itemIcon;
        if ( rewardGetObj )
        {
          if ( v96->fields.num <= 1 )
            num = -1;
          else
            num = (unsigned int)v96->fields.num;
          ItemIconComponent__SetGift_40700316(
            (ItemIconComponent_o *)rewardGetObj,
            v96->fields.type,
            v96->fields.objectId,
            num,
            0,
            0);
          return;
        }
      }
LABEL_144:
      sub_1C2D6EC(rewardGetObj, item);
    }
LABEL_145:
    sub_1C2D6F4(rewardGetObj, item, v10, v11);
  }
}


void EventRankingListViewItemDraw__SetListViewObject(
        EventRankingListViewItemDraw_o *this,
        EventRankingListViewObject_o *listViewObject,
        const MethodInfo *method)
{
  this->fields.listViewObject = listViewObject;
  sub_1C2D434(&this->fields.listViewObject);
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
      sub_1C2D6EC(0, method);
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
      sub_1C2D6EC(this, item);
    EventRankingListViewItemDraw__SetRewardIconAlpha(this, manager->fields.alphaAnimNow, (const MethodInfo *)item);
  }
}