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

  if ( (byte_4C512F5 & 1) == 0 )
  {
    sub_1C3E564(&EventRankingListViewItemDraw_TypeInfo);
    sub_1C3E564(&StringLiteral_19271/*"event_ranking_"*/);
    sub_1C3E564(&StringLiteral_19229/*"event_goal_flag"*/);
    sub_1C3E564(&StringLiteral_19275/*"event_ranking_rewardget_"*/);
    sub_1C3E564(&StringLiteral_19274/*"event_ranking_reward_txt"*/);
    sub_1C3E564(&StringLiteral_19273/*"event_ranking_group_name_"*/);
    sub_1C3E564(&StringLiteral_19272/*"event_ranking_group_"*/);
    sub_1C3E564(&StringLiteral_19308/*"event_support_txt"*/);
    sub_1C3E564(&StringLiteral_19288/*"event_rewardranking_"*/);
    byte_4C512F5 = 1;
  }
  EventRankingListViewItemDraw_TypeInfo->static_fields->GROUP_IMAGE_NAME = (struct System_String_o *)StringLiteral_19272/*"event_ranking_group_"*/;
  sub_1C3E508(EventRankingListViewItemDraw_TypeInfo->static_fields, StringLiteral_19272/*"event_ranking_group_"*/);
  v1 = StringLiteral_19273/*"event_ranking_group_name_"*/;
  static_fields = EventRankingListViewItemDraw_TypeInfo->static_fields;
  static_fields->GROUP_NAME_IMAGE_NAME = (struct System_String_o *)StringLiteral_19273/*"event_ranking_group_name_"*/;
  sub_1C3E508(&static_fields->GROUP_NAME_IMAGE_NAME, v1);
  v3 = StringLiteral_19288/*"event_rewardranking_"*/;
  v4 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v4->BOARD_IMAGE_NAME = (struct System_String_o *)StringLiteral_19288/*"event_rewardranking_"*/;
  sub_1C3E508(&v4->BOARD_IMAGE_NAME, v3);
  v5 = StringLiteral_19275/*"event_ranking_rewardget_"*/;
  v6 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v6->REWARD_GET_IMAGE_NAME = (struct System_String_o *)StringLiteral_19275/*"event_ranking_rewardget_"*/;
  sub_1C3E508(&v6->REWARD_GET_IMAGE_NAME, v5);
  v7 = StringLiteral_19271/*"event_ranking_"*/;
  v8 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v8->RANKING_IMAGE_NAME = (struct System_String_o *)StringLiteral_19271/*"event_ranking_"*/;
  sub_1C3E508(&v8->RANKING_IMAGE_NAME, v7);
  v9 = StringLiteral_19229/*"event_goal_flag"*/;
  v10 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v10->GOAL_IMAGE_NAME = (struct System_String_o *)StringLiteral_19229/*"event_goal_flag"*/;
  sub_1C3E508(&v10->GOAL_IMAGE_NAME, v9);
  v11 = StringLiteral_19274/*"event_ranking_reward_txt"*/;
  v12 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v12->HIGHER_REWARD_IMAGE_NAME = (struct System_String_o *)StringLiteral_19274/*"event_ranking_reward_txt"*/;
  sub_1C3E508(&v12->HIGHER_REWARD_IMAGE_NAME, v11);
  v13 = StringLiteral_19308/*"event_support_txt"*/;
  v14 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v14->SUPPORT_TXT_IMAGE_NAME = (struct System_String_o *)StringLiteral_19308/*"event_support_txt"*/;
  sub_1C3E508(&v14->SUPPORT_TXT_IMAGE_NAME, v13);
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
      sub_1C3E7C8(this, manager);
    v6 = giftEntityList->m_Items[v5];
    if ( !v6 || (this = (EventRankingListViewItemDraw_o *)this->fields.itemIcon) == 0 )
LABEL_12:
      sub_1C3E7C0(this, manager);
    if ( v6->fields.num <= 1 )
      num = -1;
    else
      num = (unsigned int)v6->fields.num;
    ItemIconComponent__SetGift_40968388((ItemIconComponent_o *)this, v6->fields.type, v6->fields.objectId, num, 0, 0);
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
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  __int64 v16; // x5
  __int64 v17; // x6
  __int64 v18; // x7
  struct EventRankingRoundItemInfo_o *itemInfo; // x8
  Il2CppObject *v20; // x23
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  __int64 v24; // x5
  __int64 v25; // x6
  __int64 v26; // x7
  Il2CppObject *v27; // x23
  System_String_o *v28; // x22
  UISprite_o *rankingSprite; // x21
  System_Object_array *v30; // x22
  struct System_String_o *RANKING_IMAGE_NAME; // x23
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  __int64 v35; // x5
  __int64 v36; // x6
  __int64 v37; // x7
  struct EventRankingRoundItemInfo_o *v38; // x8
  Il2CppObject *v39; // x23
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  __int64 v43; // x5
  __int64 v44; // x6
  __int64 v45; // x7
  Il2CppObject *v46; // x23
  System_String_o *v47; // x0
  UISprite_o *teamSprite; // x21
  System_Object_array *v49; // x22
  struct System_String_o *GROUP_IMAGE_NAME; // x23
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  __int64 v54; // x5
  __int64 v55; // x6
  __int64 v56; // x7
  struct EventRankingRoundItemInfo_o *v57; // x8
  Il2CppObject *v58; // x23
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  __int64 v62; // x5
  __int64 v63; // x6
  __int64 v64; // x7
  Il2CppObject *v65; // x23
  System_String_o *v66; // x0
  UISprite_o *teamNameSprite; // x21
  System_Object_array *v68; // x22
  struct System_String_o *GROUP_NAME_IMAGE_NAME; // x23
  __int64 v70; // x2
  __int64 v71; // x3
  __int64 v72; // x4
  __int64 v73; // x5
  __int64 v74; // x6
  __int64 v75; // x7
  struct EventRankingRoundItemInfo_o *v76; // x8
  Il2CppObject *v77; // x23
  __int64 v78; // x2
  __int64 v79; // x3
  __int64 v80; // x4
  __int64 v81; // x5
  __int64 v82; // x6
  __int64 v83; // x7
  struct EventRankingRoundItemInfo_o *v84; // x8
  Il2CppObject *v85; // x23
  System_String_o *v86; // x0
  struct EventRankingRoundItemInfo_o *v87; // x8
  UILabel_o *supportInfoLabel; // x21
  int64_t supportPoint; // x22
  EventRankingListViewItemDraw_c *v90; // x0
  UISprite_o *goalSprite; // x21
  System_String_o *GOAL_IMAGE_NAME; // x22
  UISprite_o *rewardGetSprite; // x21
  EventRankingListViewItemDraw_c *v94; // x8
  System_Object_array *v95; // x22
  Il2CppObject *REWARD_GET_IMAGE_NAME; // x23
  __int64 v97; // x2
  __int64 v98; // x3
  __int64 v99; // x4
  __int64 v100; // x5
  __int64 v101; // x6
  __int64 v102; // x7
  struct EventRankingRoundItemInfo_o *v103; // x8
  Il2CppObject *v104; // x23
  __int64 v105; // x2
  __int64 v106; // x3
  __int64 v107; // x4
  __int64 v108; // x5
  __int64 v109; // x6
  __int64 v110; // x7
  Il2CppObject *v111; // x23
  System_String_o *v112; // x22
  int32_t v113; // w21
  struct GiftEntity_array *giftEntityList; // x1
  struct GiftEntity_array *v115; // x8
  int max_length; // w8
  struct EventRankingListViewObject_o *listViewObject; // x8
  UnityEngine_Object_o *manager; // x20
  struct EventRankingListViewObject_o *v119; // x9
  struct GiftEntity_array *v120; // x8
  __int64 naturalAligment; // x10
  unsigned int v122; // w10
  int v123; // w9
  struct GiftEntity_array *v124; // x8
  GiftEntity_o *v125; // x8
  int64_t num; // x3
  __int64 v127; // x0
  EventRankingListViewManager_o *v128; // x0
  int32_t v129; // w1
  const MethodInfo *v130; // x2
  int32_t groupId; // [xsp+0h] [xbp-80h] BYREF
  int32_t v132; // [xsp+4h] [xbp-7Ch] BYREF
  int32_t groupImageId; // [xsp+8h] [xbp-78h] BYREF
  int32_t v134; // [xsp+Ch] [xbp-74h] BYREF
  int32_t v135; // [xsp+10h] [xbp-70h] BYREF
  int32_t v136; // [xsp+14h] [xbp-6Ch] BYREF
  int v137; // [xsp+18h] [xbp-68h] BYREF
  int32_t eventId; // [xsp+1Ch] [xbp-64h] BYREF

  v5 = item;
  if ( (byte_4C512F4 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&EventRankingListViewItemDraw_TypeInfo);
    sub_1C3E564(&EventRankingListViewManager_TypeInfo);
    sub_1C3E564(&EventRewardRootComponent_TypeInfo);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&object___TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_16119/*"_"*/);
    byte_4C512F4 = 1;
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
  rewardGetObj = sub_1C3E60C(object___TypeInfo, 4);
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
    rewardGetObj = sub_1C3E6A0(BOARD_IMAGE_NAME, v10->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( !LODWORD(v10->max_length) )
    goto LABEL_145;
  v10->m_Items[0] = BOARD_IMAGE_NAME;
  rewardGetObj = sub_1C3E508(v10->m_Items, BOARD_IMAGE_NAME);
  itemInfo = v5->fields.itemInfo;
  if ( !itemInfo )
    goto LABEL_144;
  eventId = itemInfo->fields.eventId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &eventId, v13, v14, v15, v16, v17, v18);
  v20 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1C3E6A0(rewardGetObj, v10->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( LODWORD(v10->max_length) <= 1 )
    goto LABEL_145;
  v10->m_Items[1] = v20;
  sub_1C3E508(&v10->m_Items[1], v20);
  rewardGetObj = StringLiteral_16119/*"_"*/;
  if ( StringLiteral_16119/*"_"*/ )
  {
    rewardGetObj = sub_1C3E6A0(StringLiteral_16119/*"_"*/, v10->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
    item = (EventRankingListViewItem_o *)StringLiteral_16119/*"_"*/;
  }
  else
  {
    item = 0;
  }
  if ( LODWORD(v10->max_length) <= 2 )
    goto LABEL_145;
  v10->m_Items[2] = (Il2CppObject *)item;
  sub_1C3E508(&v10->m_Items[2], item);
  v137 = ranking;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v137, v21, v22, v23, v24, v25, v26);
  v27 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1C3E6A0(rewardGetObj, v10->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( LODWORD(v10->max_length) <= 3 )
    goto LABEL_145;
  v10->m_Items[3] = v27;
  sub_1C3E508(&v10->m_Items[3], v27);
  v28 = System_String__Concat_63674908(v10, 0);
  if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
  EventRewardRootComponent__setRewardInfoImg(baseSprite, v28, 0);
  rankingSprite = this->fields.rankingSprite;
  rewardGetObj = sub_1C3E60C(object___TypeInfo, 4);
  if ( !rewardGetObj )
    goto LABEL_144;
  v30 = (System_Object_array *)rewardGetObj;
  RANKING_IMAGE_NAME = EventRankingListViewItemDraw_TypeInfo->static_fields->RANKING_IMAGE_NAME;
  if ( RANKING_IMAGE_NAME )
  {
    rewardGetObj = sub_1C3E6A0(RANKING_IMAGE_NAME, *(_QWORD *)(*(_QWORD *)rewardGetObj + 64LL));
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( !LODWORD(v30->max_length) )
    goto LABEL_145;
  v30->m_Items[0] = (Il2CppObject *)RANKING_IMAGE_NAME;
  rewardGetObj = sub_1C3E508(v30->m_Items, RANKING_IMAGE_NAME);
  v38 = v5->fields.itemInfo;
  if ( !v38 )
    goto LABEL_144;
  v136 = v38->fields.eventId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v136, v32, v33, v34, v35, v36, v37);
  v39 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1C3E6A0(rewardGetObj, v30->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( LODWORD(v30->max_length) <= 1 )
    goto LABEL_145;
  v30->m_Items[1] = v39;
  sub_1C3E508(&v30->m_Items[1], v39);
  rewardGetObj = StringLiteral_16119/*"_"*/;
  if ( StringLiteral_16119/*"_"*/ )
  {
    rewardGetObj = sub_1C3E6A0(StringLiteral_16119/*"_"*/, v30->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
    item = (EventRankingListViewItem_o *)StringLiteral_16119/*"_"*/;
  }
  else
  {
    item = 0;
  }
  if ( LODWORD(v30->max_length) <= 2 )
    goto LABEL_145;
  v30->m_Items[2] = (Il2CppObject *)item;
  sub_1C3E508(&v30->m_Items[2], item);
  v135 = v5->fields.ranking;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v135, v40, v41, v42, v43, v44, v45);
  v46 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1C3E6A0(rewardGetObj, v30->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( LODWORD(v30->max_length) <= 3 )
    goto LABEL_145;
  v30->m_Items[3] = v46;
  sub_1C3E508(&v30->m_Items[3], v46);
  v47 = System_String__Concat_63674908(v30, 0);
  EventRewardRootComponent__setRewardInfoImg(rankingSprite, v47, 0);
  teamSprite = this->fields.teamSprite;
  rewardGetObj = sub_1C3E60C(object___TypeInfo, 4);
  if ( !rewardGetObj )
    goto LABEL_144;
  v49 = (System_Object_array *)rewardGetObj;
  GROUP_IMAGE_NAME = EventRankingListViewItemDraw_TypeInfo->static_fields->GROUP_IMAGE_NAME;
  if ( GROUP_IMAGE_NAME )
  {
    rewardGetObj = sub_1C3E6A0(GROUP_IMAGE_NAME, *(_QWORD *)(*(_QWORD *)rewardGetObj + 64LL));
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( !LODWORD(v49->max_length) )
    goto LABEL_145;
  v49->m_Items[0] = (Il2CppObject *)GROUP_IMAGE_NAME;
  rewardGetObj = sub_1C3E508(v49->m_Items, GROUP_IMAGE_NAME);
  v57 = v5->fields.itemInfo;
  if ( !v57 )
    goto LABEL_144;
  v134 = v57->fields.eventId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v134, v51, v52, v53, v54, v55, v56);
  v58 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1C3E6A0(rewardGetObj, v49->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( LODWORD(v49->max_length) <= 1 )
    goto LABEL_145;
  v49->m_Items[1] = v58;
  sub_1C3E508(&v49->m_Items[1], v58);
  rewardGetObj = StringLiteral_16119/*"_"*/;
  if ( StringLiteral_16119/*"_"*/ )
  {
    rewardGetObj = sub_1C3E6A0(StringLiteral_16119/*"_"*/, v49->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
    item = (EventRankingListViewItem_o *)StringLiteral_16119/*"_"*/;
  }
  else
  {
    item = 0;
  }
  if ( LODWORD(v49->max_length) <= 2 )
    goto LABEL_145;
  v49->m_Items[2] = (Il2CppObject *)item;
  sub_1C3E508(&v49->m_Items[2], item);
  groupImageId = v5->fields.groupImageId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &groupImageId, v59, v60, v61, v62, v63, v64);
  v65 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1C3E6A0(rewardGetObj, v49->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( LODWORD(v49->max_length) <= 3 )
    goto LABEL_145;
  v49->m_Items[3] = v65;
  sub_1C3E508(&v49->m_Items[3], v65);
  v66 = System_String__Concat_63674908(v49, 0);
  EventRewardRootComponent__setRewardInfoImg(teamSprite, v66, 0);
  teamNameSprite = this->fields.teamNameSprite;
  rewardGetObj = sub_1C3E60C(object___TypeInfo, 4);
  if ( !rewardGetObj )
    goto LABEL_144;
  v68 = (System_Object_array *)rewardGetObj;
  GROUP_NAME_IMAGE_NAME = EventRankingListViewItemDraw_TypeInfo->static_fields->GROUP_NAME_IMAGE_NAME;
  if ( GROUP_NAME_IMAGE_NAME )
  {
    rewardGetObj = sub_1C3E6A0(GROUP_NAME_IMAGE_NAME, *(_QWORD *)(*(_QWORD *)rewardGetObj + 64LL));
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( !LODWORD(v68->max_length) )
    goto LABEL_145;
  v68->m_Items[0] = (Il2CppObject *)GROUP_NAME_IMAGE_NAME;
  rewardGetObj = sub_1C3E508(v68->m_Items, GROUP_NAME_IMAGE_NAME);
  v76 = v5->fields.itemInfo;
  if ( !v76 )
    goto LABEL_144;
  v132 = v76->fields.eventId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v132, v70, v71, v72, v73, v74, v75);
  v77 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1C3E6A0(rewardGetObj, v68->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( LODWORD(v68->max_length) <= 1 )
    goto LABEL_145;
  v68->m_Items[1] = v77;
  sub_1C3E508(&v68->m_Items[1], v77);
  rewardGetObj = StringLiteral_16119/*"_"*/;
  if ( StringLiteral_16119/*"_"*/ )
  {
    rewardGetObj = sub_1C3E6A0(StringLiteral_16119/*"_"*/, v68->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
    item = (EventRankingListViewItem_o *)StringLiteral_16119/*"_"*/;
  }
  else
  {
    item = 0;
  }
  if ( LODWORD(v68->max_length) <= 2 )
    goto LABEL_145;
  v68->m_Items[2] = (Il2CppObject *)item;
  rewardGetObj = sub_1C3E508(&v68->m_Items[2], item);
  v84 = v5->fields.itemInfo;
  if ( !v84 )
    goto LABEL_144;
  groupId = v84->fields.groupId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &groupId, v78, v79, v80, v81, v82, v83);
  v85 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1C3E6A0(rewardGetObj, v68->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( LODWORD(v68->max_length) <= 3 )
    goto LABEL_145;
  v68->m_Items[3] = v85;
  sub_1C3E508(&v68->m_Items[3], v85);
  v86 = System_String__Concat_63674908(v68, 0);
  EventRewardRootComponent__setRewardInfoImg(teamNameSprite, v86, 0);
  rewardGetObj = EventRewardRootComponent__setRewardInfoImg(
                   this->fields.supportTxtSprite,
                   EventRankingListViewItemDraw_TypeInfo->static_fields->SUPPORT_TXT_IMAGE_NAME,
                   0);
  v87 = v5->fields.itemInfo;
  if ( !v87 )
    goto LABEL_144;
  supportInfoLabel = this->fields.supportInfoLabel;
  supportPoint = v87->fields.supportPoint;
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
      v90 = EventRankingListViewItemDraw_TypeInfo;
      goalSprite = this->fields.goalSprite;
      if ( !EventRankingListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRankingListViewItemDraw_TypeInfo);
        v90 = EventRankingListViewItemDraw_TypeInfo;
      }
      GOAL_IMAGE_NAME = v90->static_fields->GOAL_IMAGE_NAME;
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
      rewardGetObj = sub_1C3E60C(object___TypeInfo, 4);
      v94 = EventRankingListViewItemDraw_TypeInfo;
      v95 = (System_Object_array *)rewardGetObj;
      if ( !EventRankingListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRankingListViewItemDraw_TypeInfo);
        v94 = EventRankingListViewItemDraw_TypeInfo;
      }
      if ( !v95 )
        goto LABEL_144;
      REWARD_GET_IMAGE_NAME = (Il2CppObject *)v94->static_fields->REWARD_GET_IMAGE_NAME;
      if ( !REWARD_GET_IMAGE_NAME
        || (rewardGetObj = sub_1C3E6A0(REWARD_GET_IMAGE_NAME, v95->obj.klass->_1.element_class)) != 0 )
      {
        if ( !LODWORD(v95->max_length) )
          goto LABEL_145;
        v95->m_Items[0] = REWARD_GET_IMAGE_NAME;
        rewardGetObj = sub_1C3E508(v95->m_Items, REWARD_GET_IMAGE_NAME);
        v103 = v5->fields.itemInfo;
        if ( !v103 )
          goto LABEL_144;
        eventId = v103->fields.eventId;
        rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &eventId, v97, v98, v99, v100, v101, v102);
        v104 = (Il2CppObject *)rewardGetObj;
        if ( !rewardGetObj || (rewardGetObj = sub_1C3E6A0(rewardGetObj, v95->obj.klass->_1.element_class)) != 0 )
        {
          if ( LODWORD(v95->max_length) <= 1 )
            goto LABEL_145;
          v95->m_Items[1] = v104;
          sub_1C3E508(&v95->m_Items[1], v104);
          rewardGetObj = StringLiteral_16119/*"_"*/;
          if ( StringLiteral_16119/*"_"*/ )
          {
            rewardGetObj = sub_1C3E6A0(StringLiteral_16119/*"_"*/, v95->obj.klass->_1.element_class);
            if ( !rewardGetObj )
              goto LABEL_146;
            item = (EventRankingListViewItem_o *)StringLiteral_16119/*"_"*/;
          }
          else
          {
            item = 0;
          }
          if ( LODWORD(v95->max_length) <= 2 )
            goto LABEL_145;
          v95->m_Items[2] = (Il2CppObject *)item;
          sub_1C3E508(&v95->m_Items[2], item);
          v137 = ranking;
          rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v137, v105, v106, v107, v108, v109, v110);
          v111 = (Il2CppObject *)rewardGetObj;
          if ( !rewardGetObj || (rewardGetObj = sub_1C3E6A0(rewardGetObj, v95->obj.klass->_1.element_class)) != 0 )
          {
            if ( LODWORD(v95->max_length) <= 3 )
              goto LABEL_145;
            v95->m_Items[3] = v111;
            sub_1C3E508(&v95->m_Items[3], v111);
            v112 = System_String__Concat_63674908(v95, 0);
            if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
            EventRewardRootComponent__setRewardInfoImg(rewardGetSprite, v112, 0);
            rewardGetObj = (__int64)this->fields.rewardGetSprite;
            if ( !rewardGetObj )
              goto LABEL_144;
            rewardGetObj = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rewardGetObj, 0);
            if ( !rewardGetObj )
              goto LABEL_144;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rewardGetObj, 1, 0);
            v113 = v5->fields.ranking;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            rewardGetObj = (__int64)this->fields.rewardGetObj;
            if ( !rewardGetObj )
              goto LABEL_144;
            UnityEngine_GameObject__SetActive(
              (UnityEngine_GameObject_o *)rewardGetObj,
              v113 <= BalanceConfig_TypeInfo->static_fields->raceRewardRankMax,
              0);
            goto LABEL_122;
          }
        }
      }
LABEL_146:
      v127 = sub_1C3E7E4();
      sub_1C3E68C(v127, 0);
    }
  }
LABEL_122:
  giftEntityList = v5->fields.giftEntityList;
  this->fields.giftEntityList = giftEntityList;
  rewardGetObj = sub_1C3E508(&this->fields.giftEntityList, giftEntityList);
  v115 = v5->fields.giftEntityList;
  if ( !v115 )
    goto LABEL_144;
  max_length = v115->max_length;
  this->fields.isMultipleReward = max_length > 1;
  if ( max_length < 2 )
  {
    v124 = this->fields.giftEntityList;
    if ( !v124 )
      goto LABEL_144;
    if ( LODWORD(v124->max_length) )
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
    v119 = this->fields.listViewObject;
    if ( !v119 )
      goto LABEL_144;
    v120 = this->fields.giftEntityList;
    if ( !v120 )
      goto LABEL_144;
    rewardGetObj = (__int64)v119->fields.manager;
    if ( !rewardGetObj )
      goto LABEL_144;
    item = (EventRankingListViewItem_o *)EventRankingListViewManager_TypeInfo;
    naturalAligment = EventRankingListViewManager_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)rewardGetObj + 304LL) < (unsigned int)naturalAligment
      || *(EventRankingListViewManager_c **)(*(_QWORD *)(*(_QWORD *)rewardGetObj + 200LL) + 8 * naturalAligment - 8) != EventRankingListViewManager_TypeInfo )
    {
      v128 = (EventRankingListViewManager_o *)sub_1C3EA80(rewardGetObj);
      EventRankingListViewManager__GetAlphaAnimCnt(v128, v129, v130);
      return;
    }
    v122 = v120->max_length;
    v123 = *(_DWORD *)(rewardGetObj + 340) % (int)v122;
    if ( v123 < v122 )
    {
      v124 = (struct GiftEntity_array *)((char *)v120 + 8 * v123);
LABEL_137:
      v125 = v124->m_Items[0];
      if ( v125 )
      {
        rewardGetObj = (__int64)this->fields.itemIcon;
        if ( rewardGetObj )
        {
          if ( v125->fields.num <= 1 )
            num = -1;
          else
            num = (unsigned int)v125->fields.num;
          ItemIconComponent__SetGift_40968388(
            (ItemIconComponent_o *)rewardGetObj,
            v125->fields.type,
            v125->fields.objectId,
            num,
            0,
            0);
          return;
        }
      }
LABEL_144:
      sub_1C3E7C0(rewardGetObj, item);
    }
LABEL_145:
    sub_1C3E7C8(rewardGetObj, item);
  }
}


void EventRankingListViewItemDraw__SetListViewObject(
        EventRankingListViewItemDraw_o *this,
        EventRankingListViewObject_o *listViewObject,
        const MethodInfo *method)
{
  this->fields.listViewObject = listViewObject;
  sub_1C3E508(&this->fields.listViewObject, listViewObject);
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
      sub_1C3E7C0(0, method);
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
      sub_1C3E7C0(this, item);
    EventRankingListViewItemDraw__SetRewardIconAlpha(this, manager->fields.alphaAnimNow, (const MethodInfo *)item);
  }
}