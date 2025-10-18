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

  if ( (byte_4C3D575 & 1) == 0 )
  {
    sub_1C37058(&EventRankingListViewItemDraw_TypeInfo);
    sub_1C37058(&StringLiteral_19253/*"event_ranking_"*/);
    sub_1C37058(&StringLiteral_19211/*"event_goal_flag"*/);
    sub_1C37058(&StringLiteral_19257/*"event_ranking_rewardget_"*/);
    sub_1C37058(&StringLiteral_19256/*"event_ranking_reward_txt"*/);
    sub_1C37058(&StringLiteral_19255/*"event_ranking_group_name_"*/);
    sub_1C37058(&StringLiteral_19254/*"event_ranking_group_"*/);
    sub_1C37058(&StringLiteral_19290/*"event_support_txt"*/);
    sub_1C37058(&StringLiteral_19270/*"event_rewardranking_"*/);
    byte_4C3D575 = 1;
  }
  EventRankingListViewItemDraw_TypeInfo->static_fields->GROUP_IMAGE_NAME = (struct System_String_o *)StringLiteral_19254/*"event_ranking_group_"*/;
  sub_1C36FFC(EventRankingListViewItemDraw_TypeInfo->static_fields, StringLiteral_19254/*"event_ranking_group_"*/);
  v1 = StringLiteral_19255/*"event_ranking_group_name_"*/;
  static_fields = EventRankingListViewItemDraw_TypeInfo->static_fields;
  static_fields->GROUP_NAME_IMAGE_NAME = (struct System_String_o *)StringLiteral_19255/*"event_ranking_group_name_"*/;
  sub_1C36FFC(&static_fields->GROUP_NAME_IMAGE_NAME, v1);
  v3 = StringLiteral_19270/*"event_rewardranking_"*/;
  v4 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v4->BOARD_IMAGE_NAME = (struct System_String_o *)StringLiteral_19270/*"event_rewardranking_"*/;
  sub_1C36FFC(&v4->BOARD_IMAGE_NAME, v3);
  v5 = StringLiteral_19257/*"event_ranking_rewardget_"*/;
  v6 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v6->REWARD_GET_IMAGE_NAME = (struct System_String_o *)StringLiteral_19257/*"event_ranking_rewardget_"*/;
  sub_1C36FFC(&v6->REWARD_GET_IMAGE_NAME, v5);
  v7 = StringLiteral_19253/*"event_ranking_"*/;
  v8 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v8->RANKING_IMAGE_NAME = (struct System_String_o *)StringLiteral_19253/*"event_ranking_"*/;
  sub_1C36FFC(&v8->RANKING_IMAGE_NAME, v7);
  v9 = StringLiteral_19211/*"event_goal_flag"*/;
  v10 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v10->GOAL_IMAGE_NAME = (struct System_String_o *)StringLiteral_19211/*"event_goal_flag"*/;
  sub_1C36FFC(&v10->GOAL_IMAGE_NAME, v9);
  v11 = StringLiteral_19256/*"event_ranking_reward_txt"*/;
  v12 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v12->HIGHER_REWARD_IMAGE_NAME = (struct System_String_o *)StringLiteral_19256/*"event_ranking_reward_txt"*/;
  sub_1C36FFC(&v12->HIGHER_REWARD_IMAGE_NAME, v11);
  v13 = StringLiteral_19290/*"event_support_txt"*/;
  v14 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v14->SUPPORT_TXT_IMAGE_NAME = (struct System_String_o *)StringLiteral_19290/*"event_support_txt"*/;
  sub_1C36FFC(&v14->SUPPORT_TXT_IMAGE_NAME, v13);
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
      sub_1C372BC(this);
    v6 = giftEntityList->m_Items[v5];
    if ( !v6 || (this = (EventRankingListViewItemDraw_o *)this->fields.itemIcon) == 0 )
LABEL_12:
      sub_1C372B4(this);
    if ( v6->fields.num <= 1 )
      num = -1;
    else
      num = (unsigned int)v6->fields.num;
    ItemIconComponent__SetGift_40921900((ItemIconComponent_o *)this, v6->fields.type, v6->fields.objectId, num, 0, 0);
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
  __int64 rewardGetObj; // x0
  UISprite_o *baseSprite; // x21
  int32_t ranking; // w24
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
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  __int64 v25; // x5
  __int64 v26; // x6
  __int64 v27; // x7
  Il2CppObject *v28; // x23
  System_String_o *v29; // x22
  UISprite_o *rankingSprite; // x21
  System_Object_array *v31; // x22
  struct System_String_o *RANKING_IMAGE_NAME; // x23
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  __int64 v36; // x5
  __int64 v37; // x6
  __int64 v38; // x7
  struct EventRankingRoundItemInfo_o *v39; // x8
  Il2CppObject *v40; // x23
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  __int64 v45; // x5
  __int64 v46; // x6
  __int64 v47; // x7
  Il2CppObject *v48; // x23
  System_String_o *v49; // x0
  UISprite_o *teamSprite; // x21
  System_Object_array *v51; // x22
  struct System_String_o *GROUP_IMAGE_NAME; // x23
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  __int64 v56; // x5
  __int64 v57; // x6
  __int64 v58; // x7
  struct EventRankingRoundItemInfo_o *v59; // x8
  Il2CppObject *v60; // x23
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  __int64 v65; // x5
  __int64 v66; // x6
  __int64 v67; // x7
  Il2CppObject *v68; // x23
  System_String_o *v69; // x0
  UISprite_o *teamNameSprite; // x21
  System_Object_array *v71; // x22
  struct System_String_o *GROUP_NAME_IMAGE_NAME; // x23
  __int64 v73; // x2
  __int64 v74; // x3
  __int64 v75; // x4
  __int64 v76; // x5
  __int64 v77; // x6
  __int64 v78; // x7
  struct EventRankingRoundItemInfo_o *v79; // x8
  Il2CppObject *v80; // x23
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x3
  __int64 v84; // x4
  __int64 v85; // x5
  __int64 v86; // x6
  __int64 v87; // x7
  struct EventRankingRoundItemInfo_o *v88; // x8
  Il2CppObject *v89; // x23
  System_String_o *v90; // x0
  struct EventRankingRoundItemInfo_o *v91; // x8
  UILabel_o *supportInfoLabel; // x21
  int64_t supportPoint; // x22
  EventRankingListViewItemDraw_c *v94; // x0
  UISprite_o *goalSprite; // x21
  System_String_o *GOAL_IMAGE_NAME; // x22
  UISprite_o *rewardGetSprite; // x21
  EventRankingListViewItemDraw_c *v98; // x8
  System_Object_array *v99; // x22
  Il2CppObject *REWARD_GET_IMAGE_NAME; // x23
  __int64 v101; // x2
  __int64 v102; // x3
  __int64 v103; // x4
  __int64 v104; // x5
  __int64 v105; // x6
  __int64 v106; // x7
  struct EventRankingRoundItemInfo_o *v107; // x8
  Il2CppObject *v108; // x23
  __int64 v109; // x1
  __int64 v110; // x2
  __int64 v111; // x3
  __int64 v112; // x4
  __int64 v113; // x5
  __int64 v114; // x6
  __int64 v115; // x7
  Il2CppObject *v116; // x23
  System_String_o *v117; // x22
  int32_t v118; // w21
  struct GiftEntity_array *giftEntityList; // x1
  struct GiftEntity_array *v120; // x8
  int max_length; // w8
  struct EventRankingListViewObject_o *listViewObject; // x8
  UnityEngine_Object_o *manager; // x20
  struct EventRankingListViewObject_o *v124; // x9
  struct GiftEntity_array *v125; // x8
  __int64 naturalAligment; // x10
  unsigned int v127; // w10
  int v128; // w9
  struct GiftEntity_array *v129; // x8
  GiftEntity_o *v130; // x8
  int64_t num; // x3
  __int64 v132; // x0
  EventRankingListViewManager_o *v133; // x0
  int32_t v134; // w1
  const MethodInfo *v135; // x2
  int32_t groupId; // [xsp+0h] [xbp-80h] BYREF
  int32_t v137; // [xsp+4h] [xbp-7Ch] BYREF
  int32_t groupImageId; // [xsp+8h] [xbp-78h] BYREF
  int32_t v139; // [xsp+Ch] [xbp-74h] BYREF
  int32_t v140; // [xsp+10h] [xbp-70h] BYREF
  int32_t v141; // [xsp+14h] [xbp-6Ch] BYREF
  int32_t v142; // [xsp+18h] [xbp-68h] BYREF
  int32_t eventId; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4C3D574 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&EventRankingListViewItemDraw_TypeInfo);
    sub_1C37058(&EventRankingListViewManager_TypeInfo);
    sub_1C37058(&EventRewardRootComponent_TypeInfo);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&object___TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_16109/*"_"*/);
    byte_4C3D574 = 1;
  }
  if ( !item || !mode )
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
  if ( item->fields.ranking >= 4 )
    ranking = 4;
  else
    ranking = item->fields.ranking;
  rewardGetObj = sub_1C37100(object___TypeInfo, 4);
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
    rewardGetObj = sub_1C37194(BOARD_IMAGE_NAME, v10->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( !LODWORD(v10->max_length) )
    goto LABEL_145;
  v10->m_Items[0] = BOARD_IMAGE_NAME;
  rewardGetObj = sub_1C36FFC(v10->m_Items, BOARD_IMAGE_NAME);
  itemInfo = item->fields.itemInfo;
  if ( !itemInfo )
    goto LABEL_144;
  eventId = itemInfo->fields.eventId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &eventId, v13, v14, v15, v16, v17, v18);
  v20 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1C37194(rewardGetObj, v10->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( LODWORD(v10->max_length) <= 1 )
    goto LABEL_145;
  v10->m_Items[1] = v20;
  sub_1C36FFC(&v10->m_Items[1], v20);
  rewardGetObj = StringLiteral_16109/*"_"*/;
  if ( StringLiteral_16109/*"_"*/ )
  {
    rewardGetObj = sub_1C37194(StringLiteral_16109/*"_"*/, v10->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
    v21 = StringLiteral_16109/*"_"*/;
  }
  else
  {
    v21 = 0;
  }
  if ( LODWORD(v10->max_length) <= 2 )
    goto LABEL_145;
  v10->m_Items[2] = (Il2CppObject *)v21;
  sub_1C36FFC(&v10->m_Items[2], v21);
  v142 = ranking;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v142, v22, v23, v24, v25, v26, v27);
  v28 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1C37194(rewardGetObj, v10->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( LODWORD(v10->max_length) <= 3 )
    goto LABEL_145;
  v10->m_Items[3] = v28;
  sub_1C36FFC(&v10->m_Items[3], v28);
  v29 = System_String__Concat_63600096(v10, 0);
  if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
  EventRewardRootComponent__setRewardInfoImg(baseSprite, v29, 0);
  rankingSprite = this->fields.rankingSprite;
  rewardGetObj = sub_1C37100(object___TypeInfo, 4);
  if ( !rewardGetObj )
    goto LABEL_144;
  v31 = (System_Object_array *)rewardGetObj;
  RANKING_IMAGE_NAME = EventRankingListViewItemDraw_TypeInfo->static_fields->RANKING_IMAGE_NAME;
  if ( RANKING_IMAGE_NAME )
  {
    rewardGetObj = sub_1C37194(RANKING_IMAGE_NAME, *(_QWORD *)(*(_QWORD *)rewardGetObj + 64LL));
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( !LODWORD(v31->max_length) )
    goto LABEL_145;
  v31->m_Items[0] = (Il2CppObject *)RANKING_IMAGE_NAME;
  rewardGetObj = sub_1C36FFC(v31->m_Items, RANKING_IMAGE_NAME);
  v39 = item->fields.itemInfo;
  if ( !v39 )
    goto LABEL_144;
  v141 = v39->fields.eventId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v141, v33, v34, v35, v36, v37, v38);
  v40 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1C37194(rewardGetObj, v31->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( LODWORD(v31->max_length) <= 1 )
    goto LABEL_145;
  v31->m_Items[1] = v40;
  sub_1C36FFC(&v31->m_Items[1], v40);
  rewardGetObj = StringLiteral_16109/*"_"*/;
  if ( StringLiteral_16109/*"_"*/ )
  {
    rewardGetObj = sub_1C37194(StringLiteral_16109/*"_"*/, v31->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
    v41 = StringLiteral_16109/*"_"*/;
  }
  else
  {
    v41 = 0;
  }
  if ( LODWORD(v31->max_length) <= 2 )
    goto LABEL_145;
  v31->m_Items[2] = (Il2CppObject *)v41;
  sub_1C36FFC(&v31->m_Items[2], v41);
  v140 = item->fields.ranking;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v140, v42, v43, v44, v45, v46, v47);
  v48 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1C37194(rewardGetObj, v31->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( LODWORD(v31->max_length) <= 3 )
    goto LABEL_145;
  v31->m_Items[3] = v48;
  sub_1C36FFC(&v31->m_Items[3], v48);
  v49 = System_String__Concat_63600096(v31, 0);
  EventRewardRootComponent__setRewardInfoImg(rankingSprite, v49, 0);
  teamSprite = this->fields.teamSprite;
  rewardGetObj = sub_1C37100(object___TypeInfo, 4);
  if ( !rewardGetObj )
    goto LABEL_144;
  v51 = (System_Object_array *)rewardGetObj;
  GROUP_IMAGE_NAME = EventRankingListViewItemDraw_TypeInfo->static_fields->GROUP_IMAGE_NAME;
  if ( GROUP_IMAGE_NAME )
  {
    rewardGetObj = sub_1C37194(GROUP_IMAGE_NAME, *(_QWORD *)(*(_QWORD *)rewardGetObj + 64LL));
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( !LODWORD(v51->max_length) )
    goto LABEL_145;
  v51->m_Items[0] = (Il2CppObject *)GROUP_IMAGE_NAME;
  rewardGetObj = sub_1C36FFC(v51->m_Items, GROUP_IMAGE_NAME);
  v59 = item->fields.itemInfo;
  if ( !v59 )
    goto LABEL_144;
  v139 = v59->fields.eventId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v139, v53, v54, v55, v56, v57, v58);
  v60 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1C37194(rewardGetObj, v51->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( LODWORD(v51->max_length) <= 1 )
    goto LABEL_145;
  v51->m_Items[1] = v60;
  sub_1C36FFC(&v51->m_Items[1], v60);
  rewardGetObj = StringLiteral_16109/*"_"*/;
  if ( StringLiteral_16109/*"_"*/ )
  {
    rewardGetObj = sub_1C37194(StringLiteral_16109/*"_"*/, v51->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
    v61 = StringLiteral_16109/*"_"*/;
  }
  else
  {
    v61 = 0;
  }
  if ( LODWORD(v51->max_length) <= 2 )
    goto LABEL_145;
  v51->m_Items[2] = (Il2CppObject *)v61;
  sub_1C36FFC(&v51->m_Items[2], v61);
  groupImageId = item->fields.groupImageId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &groupImageId, v62, v63, v64, v65, v66, v67);
  v68 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1C37194(rewardGetObj, v51->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( LODWORD(v51->max_length) <= 3 )
    goto LABEL_145;
  v51->m_Items[3] = v68;
  sub_1C36FFC(&v51->m_Items[3], v68);
  v69 = System_String__Concat_63600096(v51, 0);
  EventRewardRootComponent__setRewardInfoImg(teamSprite, v69, 0);
  teamNameSprite = this->fields.teamNameSprite;
  rewardGetObj = sub_1C37100(object___TypeInfo, 4);
  if ( !rewardGetObj )
    goto LABEL_144;
  v71 = (System_Object_array *)rewardGetObj;
  GROUP_NAME_IMAGE_NAME = EventRankingListViewItemDraw_TypeInfo->static_fields->GROUP_NAME_IMAGE_NAME;
  if ( GROUP_NAME_IMAGE_NAME )
  {
    rewardGetObj = sub_1C37194(GROUP_NAME_IMAGE_NAME, *(_QWORD *)(*(_QWORD *)rewardGetObj + 64LL));
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( !LODWORD(v71->max_length) )
    goto LABEL_145;
  v71->m_Items[0] = (Il2CppObject *)GROUP_NAME_IMAGE_NAME;
  rewardGetObj = sub_1C36FFC(v71->m_Items, GROUP_NAME_IMAGE_NAME);
  v79 = item->fields.itemInfo;
  if ( !v79 )
    goto LABEL_144;
  v137 = v79->fields.eventId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v137, v73, v74, v75, v76, v77, v78);
  v80 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1C37194(rewardGetObj, v71->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( LODWORD(v71->max_length) <= 1 )
    goto LABEL_145;
  v71->m_Items[1] = v80;
  sub_1C36FFC(&v71->m_Items[1], v80);
  rewardGetObj = StringLiteral_16109/*"_"*/;
  if ( StringLiteral_16109/*"_"*/ )
  {
    rewardGetObj = sub_1C37194(StringLiteral_16109/*"_"*/, v71->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
    v81 = StringLiteral_16109/*"_"*/;
  }
  else
  {
    v81 = 0;
  }
  if ( LODWORD(v71->max_length) <= 2 )
    goto LABEL_145;
  v71->m_Items[2] = (Il2CppObject *)v81;
  rewardGetObj = sub_1C36FFC(&v71->m_Items[2], v81);
  v88 = item->fields.itemInfo;
  if ( !v88 )
    goto LABEL_144;
  groupId = v88->fields.groupId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &groupId, v82, v83, v84, v85, v86, v87);
  v89 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1C37194(rewardGetObj, v71->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( LODWORD(v71->max_length) <= 3 )
    goto LABEL_145;
  v71->m_Items[3] = v89;
  sub_1C36FFC(&v71->m_Items[3], v89);
  v90 = System_String__Concat_63600096(v71, 0);
  EventRewardRootComponent__setRewardInfoImg(teamNameSprite, v90, 0);
  rewardGetObj = EventRewardRootComponent__setRewardInfoImg(
                   this->fields.supportTxtSprite,
                   EventRankingListViewItemDraw_TypeInfo->static_fields->SUPPORT_TXT_IMAGE_NAME,
                   0);
  v91 = item->fields.itemInfo;
  if ( !v91 )
    goto LABEL_144;
  supportInfoLabel = this->fields.supportInfoLabel;
  supportPoint = v91->fields.supportPoint;
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
  if ( item->fields.isJoinTerm )
  {
    if ( item->fields.isPlayedGoal )
    {
      v94 = EventRankingListViewItemDraw_TypeInfo;
      goalSprite = this->fields.goalSprite;
      if ( !EventRankingListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRankingListViewItemDraw_TypeInfo);
        v94 = EventRankingListViewItemDraw_TypeInfo;
      }
      GOAL_IMAGE_NAME = v94->static_fields->GOAL_IMAGE_NAME;
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
    if ( item->fields.isGetReward )
    {
      rewardGetSprite = this->fields.rewardGetSprite;
      rewardGetObj = sub_1C37100(object___TypeInfo, 4);
      v98 = EventRankingListViewItemDraw_TypeInfo;
      v99 = (System_Object_array *)rewardGetObj;
      if ( !EventRankingListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRankingListViewItemDraw_TypeInfo);
        v98 = EventRankingListViewItemDraw_TypeInfo;
      }
      if ( !v99 )
        goto LABEL_144;
      REWARD_GET_IMAGE_NAME = (Il2CppObject *)v98->static_fields->REWARD_GET_IMAGE_NAME;
      if ( !REWARD_GET_IMAGE_NAME
        || (rewardGetObj = sub_1C37194(REWARD_GET_IMAGE_NAME, v99->obj.klass->_1.element_class)) != 0 )
      {
        if ( !LODWORD(v99->max_length) )
          goto LABEL_145;
        v99->m_Items[0] = REWARD_GET_IMAGE_NAME;
        rewardGetObj = sub_1C36FFC(v99->m_Items, REWARD_GET_IMAGE_NAME);
        v107 = item->fields.itemInfo;
        if ( !v107 )
          goto LABEL_144;
        eventId = v107->fields.eventId;
        rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &eventId, v101, v102, v103, v104, v105, v106);
        v108 = (Il2CppObject *)rewardGetObj;
        if ( !rewardGetObj || (rewardGetObj = sub_1C37194(rewardGetObj, v99->obj.klass->_1.element_class)) != 0 )
        {
          if ( LODWORD(v99->max_length) <= 1 )
            goto LABEL_145;
          v99->m_Items[1] = v108;
          sub_1C36FFC(&v99->m_Items[1], v108);
          rewardGetObj = StringLiteral_16109/*"_"*/;
          if ( StringLiteral_16109/*"_"*/ )
          {
            rewardGetObj = sub_1C37194(StringLiteral_16109/*"_"*/, v99->obj.klass->_1.element_class);
            if ( !rewardGetObj )
              goto LABEL_146;
            v109 = StringLiteral_16109/*"_"*/;
          }
          else
          {
            v109 = 0;
          }
          if ( LODWORD(v99->max_length) <= 2 )
            goto LABEL_145;
          v99->m_Items[2] = (Il2CppObject *)v109;
          sub_1C36FFC(&v99->m_Items[2], v109);
          v142 = ranking;
          rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v142, v110, v111, v112, v113, v114, v115);
          v116 = (Il2CppObject *)rewardGetObj;
          if ( !rewardGetObj || (rewardGetObj = sub_1C37194(rewardGetObj, v99->obj.klass->_1.element_class)) != 0 )
          {
            if ( LODWORD(v99->max_length) <= 3 )
              goto LABEL_145;
            v99->m_Items[3] = v116;
            sub_1C36FFC(&v99->m_Items[3], v116);
            v117 = System_String__Concat_63600096(v99, 0);
            if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
            EventRewardRootComponent__setRewardInfoImg(rewardGetSprite, v117, 0);
            rewardGetObj = (__int64)this->fields.rewardGetSprite;
            if ( !rewardGetObj )
              goto LABEL_144;
            rewardGetObj = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rewardGetObj, 0);
            if ( !rewardGetObj )
              goto LABEL_144;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rewardGetObj, 1, 0);
            v118 = item->fields.ranking;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            rewardGetObj = (__int64)this->fields.rewardGetObj;
            if ( !rewardGetObj )
              goto LABEL_144;
            UnityEngine_GameObject__SetActive(
              (UnityEngine_GameObject_o *)rewardGetObj,
              v118 <= BalanceConfig_TypeInfo->static_fields->raceRewardRankMax,
              0);
            goto LABEL_122;
          }
        }
      }
LABEL_146:
      v132 = sub_1C372D8();
      sub_1C37180(v132, 0);
    }
  }
LABEL_122:
  giftEntityList = item->fields.giftEntityList;
  this->fields.giftEntityList = giftEntityList;
  rewardGetObj = sub_1C36FFC(&this->fields.giftEntityList, giftEntityList);
  v120 = item->fields.giftEntityList;
  if ( !v120 )
    goto LABEL_144;
  max_length = v120->max_length;
  this->fields.isMultipleReward = max_length > 1;
  if ( max_length < 2 )
  {
    v129 = this->fields.giftEntityList;
    if ( !v129 )
      goto LABEL_144;
    if ( LODWORD(v129->max_length) )
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
    v124 = this->fields.listViewObject;
    if ( !v124 )
      goto LABEL_144;
    v125 = this->fields.giftEntityList;
    if ( !v125 )
      goto LABEL_144;
    rewardGetObj = (__int64)v124->fields.manager;
    if ( !rewardGetObj )
      goto LABEL_144;
    naturalAligment = EventRankingListViewManager_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)rewardGetObj + 304LL) < (unsigned int)naturalAligment
      || *(EventRankingListViewManager_c **)(*(_QWORD *)(*(_QWORD *)rewardGetObj + 200LL) + 8 * naturalAligment - 8) != EventRankingListViewManager_TypeInfo )
    {
      v133 = (EventRankingListViewManager_o *)sub_1C37574(rewardGetObj);
      EventRankingListViewManager__GetAlphaAnimCnt(v133, v134, v135);
      return;
    }
    v127 = v125->max_length;
    v128 = *(_DWORD *)(rewardGetObj + 340) % (int)v127;
    if ( v128 < v127 )
    {
      v129 = (struct GiftEntity_array *)((char *)v125 + 8 * v128);
LABEL_137:
      v130 = v129->m_Items[0];
      if ( v130 )
      {
        rewardGetObj = (__int64)this->fields.itemIcon;
        if ( rewardGetObj )
        {
          if ( v130->fields.num <= 1 )
            num = -1;
          else
            num = (unsigned int)v130->fields.num;
          ItemIconComponent__SetGift_40921900(
            (ItemIconComponent_o *)rewardGetObj,
            v130->fields.type,
            v130->fields.objectId,
            num,
            0,
            0);
          return;
        }
      }
LABEL_144:
      sub_1C372B4(rewardGetObj);
    }
LABEL_145:
    sub_1C372BC(rewardGetObj);
  }
}


void EventRankingListViewItemDraw__SetListViewObject(
        EventRankingListViewItemDraw_o *this,
        EventRankingListViewObject_o *listViewObject,
        const MethodInfo *method)
{
  this->fields.listViewObject = listViewObject;
  sub_1C36FFC(&this->fields.listViewObject, listViewObject);
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
      sub_1C372B4(0);
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
      sub_1C372B4(this);
    EventRankingListViewItemDraw__SetRewardIconAlpha(this, manager->fields.alphaAnimNow, (const MethodInfo *)item);
  }
}