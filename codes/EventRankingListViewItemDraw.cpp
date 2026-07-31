void EventRankingListViewItemDraw___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct EventRankingListViewItemDraw_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t v16; // w1
  struct EventRankingListViewItemDraw_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t v24; // w1
  struct EventRankingListViewItemDraw_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  int32_t v32; // w1
  struct EventRankingListViewItemDraw_StaticFields *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  int32_t v40; // w1
  struct EventRankingListViewItemDraw_StaticFields *v41; // x0
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  int32_t v48; // w1
  struct EventRankingListViewItemDraw_StaticFields *v49; // x0
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  int32_t v56; // w1
  struct EventRankingListViewItemDraw_StaticFields *v57; // x0
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7

  if ( (byte_593287C & 1) == 0 )
  {
    sub_21FFC50(&EventRankingListViewItemDraw_TypeInfo);
    sub_21FFC50(&StringLiteral_20103/*"event_ranking_"*/);
    sub_21FFC50(&StringLiteral_20061/*"event_goal_flag"*/);
    sub_21FFC50(&StringLiteral_20107/*"event_ranking_rewardget_"*/);
    sub_21FFC50(&StringLiteral_20106/*"event_ranking_reward_txt"*/);
    sub_21FFC50(&StringLiteral_20105/*"event_ranking_group_name_"*/);
    sub_21FFC50(&StringLiteral_20104/*"event_ranking_group_"*/);
    sub_21FFC50(&StringLiteral_20140/*"event_support_txt"*/);
    sub_21FFC50(&StringLiteral_20120/*"event_rewardranking_"*/);
    byte_593287C = 1;
  }
  v7 = StringLiteral_20104/*"event_ranking_group_"*/;
  EventRankingListViewItemDraw_TypeInfo->static_fields->GROUP_IMAGE_NAME = (struct System_String_o *)StringLiteral_20104/*"event_ranking_group_"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)EventRankingListViewItemDraw_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_20105/*"event_ranking_group_name_"*/;
  static_fields = EventRankingListViewItemDraw_TypeInfo->static_fields;
  static_fields->GROUP_NAME_IMAGE_NAME = (struct System_String_o *)StringLiteral_20105/*"event_ranking_group_name_"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&static_fields->GROUP_NAME_IMAGE_NAME,
    v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = StringLiteral_20120/*"event_rewardranking_"*/;
  v17 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v17->BOARD_IMAGE_NAME = (struct System_String_o *)StringLiteral_20120/*"event_rewardranking_"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v17->BOARD_IMAGE_NAME, v16, v18, v19, v20, v21, v22, v23);
  v24 = StringLiteral_20107/*"event_ranking_rewardget_"*/;
  v25 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v25->REWARD_GET_IMAGE_NAME = (struct System_String_o *)StringLiteral_20107/*"event_ranking_rewardget_"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v25->REWARD_GET_IMAGE_NAME, v24, v26, v27, v28, v29, v30, v31);
  v32 = StringLiteral_20103/*"event_ranking_"*/;
  v33 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v33->RANKING_IMAGE_NAME = (struct System_String_o *)StringLiteral_20103/*"event_ranking_"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v33->RANKING_IMAGE_NAME, v32, v34, v35, v36, v37, v38, v39);
  v40 = StringLiteral_20061/*"event_goal_flag"*/;
  v41 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v41->GOAL_IMAGE_NAME = (struct System_String_o *)StringLiteral_20061/*"event_goal_flag"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v41->GOAL_IMAGE_NAME, v40, v42, v43, v44, v45, v46, v47);
  v48 = StringLiteral_20106/*"event_ranking_reward_txt"*/;
  v49 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v49->HIGHER_REWARD_IMAGE_NAME = (struct System_String_o *)StringLiteral_20106/*"event_ranking_reward_txt"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v49->HIGHER_REWARD_IMAGE_NAME, v48, v50, v51, v52, v53, v54, v55);
  v56 = StringLiteral_20140/*"event_support_txt"*/;
  v57 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v57->SUPPORT_TXT_IMAGE_NAME = (struct System_String_o *)StringLiteral_20140/*"event_support_txt"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v57->SUPPORT_TXT_IMAGE_NAME, v56, v58, v59, v60, v61, v62, v63);
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
      sub_21FFED4(this);
    v6 = giftEntityList->m_Items[v5];
    if ( !v6 || (this = (EventRankingListViewItemDraw_o *)this->fields.itemIcon) == 0 )
LABEL_12:
      sub_21FFECC(this, manager);
    if ( v6->fields.num <= 1 )
      num = -1;
    else
      num = (unsigned int)v6->fields.num;
    ItemIconComponent__SetGift_47936840((ItemIconComponent_o *)this, v6->fields.type, v6->fields.objectId, num, 0, 0);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Object_array *v16; // x22
  EventRankingListViewItemDraw_c *v17; // x8
  Il2CppObject *BOARD_IMAGE_NAME; // x23
  __int64 v19; // x1
  struct EventRankingRoundItemInfo_o *itemInfo; // x8
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  Il2CppObject *v27; // x23
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  int32_t v34; // w1
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  Il2CppObject *v41; // x23
  __int64 v42; // x1
  __int64 v43; // x2
  System_String_o *v44; // x22
  UISprite_o *rankingSprite; // x21
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  System_Object_array *v52; // x22
  struct System_String_o *RANKING_IMAGE_NAME; // x23
  struct EventRankingRoundItemInfo_o *v54; // x8
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  Il2CppObject *v61; // x23
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7
  int32_t v68; // w1
  System_String_o *v69; // x2
  System_String_o *v70; // x3
  int32_t v71; // w4
  int32_t v72; // w5
  bool v73; // w6
  bool v74; // w7
  Il2CppObject *v75; // x23
  System_String_o *v76; // x0
  UISprite_o *teamSprite; // x21
  System_String_o *v78; // x2
  System_String_o *v79; // x3
  int32_t v80; // w4
  int32_t v81; // w5
  bool v82; // w6
  bool v83; // w7
  System_Object_array *v84; // x22
  struct System_String_o *GROUP_IMAGE_NAME; // x23
  struct EventRankingRoundItemInfo_o *v86; // x8
  System_String_o *v87; // x2
  System_String_o *v88; // x3
  int32_t v89; // w4
  int32_t v90; // w5
  bool v91; // w6
  bool v92; // w7
  Il2CppObject *v93; // x23
  System_String_o *v94; // x2
  System_String_o *v95; // x3
  int32_t v96; // w4
  int32_t v97; // w5
  bool v98; // w6
  bool v99; // w7
  int32_t v100; // w1
  System_String_o *v101; // x2
  System_String_o *v102; // x3
  int32_t v103; // w4
  int32_t v104; // w5
  bool v105; // w6
  bool v106; // w7
  Il2CppObject *v107; // x23
  System_String_o *v108; // x0
  UISprite_o *teamNameSprite; // x21
  System_String_o *v110; // x2
  System_String_o *v111; // x3
  int32_t v112; // w4
  int32_t v113; // w5
  bool v114; // w6
  bool v115; // w7
  System_Object_array *v116; // x22
  struct System_String_o *GROUP_NAME_IMAGE_NAME; // x23
  struct EventRankingRoundItemInfo_o *v118; // x8
  System_String_o *v119; // x2
  System_String_o *v120; // x3
  int32_t v121; // w4
  int32_t v122; // w5
  bool v123; // w6
  bool v124; // w7
  Il2CppObject *v125; // x23
  System_String_o *v126; // x2
  System_String_o *v127; // x3
  int32_t v128; // w4
  int32_t v129; // w5
  bool v130; // w6
  bool v131; // w7
  int32_t v132; // w1
  struct EventRankingRoundItemInfo_o *v133; // x8
  System_String_o *v134; // x2
  System_String_o *v135; // x3
  int32_t v136; // w4
  int32_t v137; // w5
  bool v138; // w6
  bool v139; // w7
  Il2CppObject *v140; // x23
  System_String_o *v141; // x0
  __int64 v142; // x2
  struct EventRankingRoundItemInfo_o *v143; // x8
  UILabel_o *supportInfoLabel; // x21
  int64_t supportPoint; // x22
  __int64 v146; // x1
  System_String_o *v147; // x2
  System_String_o *v148; // x3
  int32_t v149; // w4
  int32_t v150; // w5
  bool v151; // w6
  bool v152; // w7
  EventRankingListViewItemDraw_c *v153; // x0
  UISprite_o *goalSprite; // x21
  System_String_o *GOAL_IMAGE_NAME; // x22
  UISprite_o *rewardGetSprite; // x21
  System_String_o *v157; // x2
  System_String_o *v158; // x3
  int32_t v159; // w4
  int32_t v160; // w5
  bool v161; // w6
  bool v162; // w7
  EventRankingListViewItemDraw_c *v163; // x8
  __int64 v164; // x22
  struct System_String_o *REWARD_GET_IMAGE_NAME; // x23
  struct EventRankingRoundItemInfo_o *v166; // x8
  System_String_o *v167; // x2
  System_String_o *v168; // x3
  int32_t v169; // w4
  int32_t v170; // w5
  bool v171; // w6
  bool v172; // w7
  __int64 v173; // x23
  System_String_o *v174; // x2
  System_String_o *v175; // x3
  int32_t v176; // w4
  int32_t v177; // w5
  bool v178; // w6
  bool v179; // w7
  int32_t v180; // w1
  System_String_o *v181; // x2
  System_String_o *v182; // x3
  int32_t v183; // w4
  int32_t v184; // w5
  bool v185; // w6
  bool v186; // w7
  __int64 v187; // x23
  __int64 v188; // x1
  __int64 v189; // x2
  System_String_o *v190; // x22
  __int64 v191; // x2
  int32_t v192; // w21
  struct GiftEntity_array *giftEntityList; // x1
  __int64 v194; // x2
  struct GiftEntity_array *v195; // x8
  int max_length; // w8
  struct EventRankingListViewObject_o *listViewObject; // x8
  UnityEngine_Object_o *manager; // x20
  __int64 v199; // x2
  __int64 v200; // x3
  struct EventRankingListViewObject_o *v201; // x9
  struct GiftEntity_array *v202; // x8
  __int64 naturalAligment; // x10
  unsigned int v204; // w10
  int v205; // w9
  struct GiftEntity_array *v206; // x8
  GiftEntity_o *v207; // x8
  int64_t num; // x3
  __int64 v209; // x0
  EventRankingListViewManager_o *v210; // x0
  int32_t v211; // w1
  const MethodInfo *v212; // x2
  int32_t groupId; // [xsp+0h] [xbp-80h] BYREF
  int32_t v214; // [xsp+4h] [xbp-7Ch] BYREF
  int32_t groupImageId; // [xsp+8h] [xbp-78h] BYREF
  int32_t v216; // [xsp+Ch] [xbp-74h] BYREF
  int32_t v217; // [xsp+10h] [xbp-70h] BYREF
  int32_t v218; // [xsp+14h] [xbp-6Ch] BYREF
  int v219; // [xsp+18h] [xbp-68h] BYREF
  int32_t eventId; // [xsp+1Ch] [xbp-64h] BYREF

  v5 = item;
  if ( (byte_593287B & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&EventRankingListViewItemDraw_TypeInfo);
    sub_21FFC50(&EventRankingListViewManager_TypeInfo);
    sub_21FFC50(&EventRewardRootComponent_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_16714/*"_"*/);
    byte_593287B = 1;
  }
  if ( !v5 || !mode )
    return;
  rewardGetObj = (__int64)this->fields.rewardGetObj;
  if ( !rewardGetObj )
    goto LABEL_134;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rewardGetObj, 0, 0);
  rewardGetObj = (__int64)this->fields.rewardGetSprite;
  if ( !rewardGetObj )
    goto LABEL_134;
  rewardGetObj = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rewardGetObj, 0);
  if ( !rewardGetObj )
    goto LABEL_134;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rewardGetObj, 0, 0);
  rewardGetObj = (__int64)this->fields.goalSprite;
  if ( !rewardGetObj )
    goto LABEL_134;
  rewardGetObj = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rewardGetObj, 0);
  if ( !rewardGetObj )
    goto LABEL_134;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rewardGetObj, 0, 0);
  baseSprite = this->fields.baseSprite;
  if ( v5->fields.ranking >= 4 )
    ranking = 4;
  else
    ranking = v5->fields.ranking;
  rewardGetObj = sub_21FFD10(object___TypeInfo, 4);
  v16 = (System_Object_array *)rewardGetObj;
  v17 = EventRankingListViewItemDraw_TypeInfo;
  if ( !*(&EventRankingListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventRankingListViewItemDraw_TypeInfo, item, v10);
    v17 = EventRankingListViewItemDraw_TypeInfo;
  }
  if ( !v16 )
    goto LABEL_134;
  BOARD_IMAGE_NAME = (Il2CppObject *)v17->static_fields->BOARD_IMAGE_NAME;
  if ( BOARD_IMAGE_NAME )
  {
    rewardGetObj = sub_21FFDA4(BOARD_IMAGE_NAME, v16->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_136;
  }
  if ( !LODWORD(v16->max_length) )
    goto LABEL_135;
  v16->m_Items[0] = BOARD_IMAGE_NAME;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v16->m_Items, (int32_t)BOARD_IMAGE_NAME, v10, v11, v12, v13, v14, v15);
  itemInfo = v5->fields.itemInfo;
  if ( !itemInfo )
    goto LABEL_134;
  eventId = itemInfo->fields.eventId;
  rewardGetObj = j_il2cpp_value_box_0(qword_594C070, &eventId);
  v27 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_21FFDA4(rewardGetObj, v16->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_136;
  }
  if ( (v16->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_135;
  v16->m_Items[1] = v27;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v16->m_Items[1], (int32_t)v27, v21, v22, v23, v24, v25, v26);
  rewardGetObj = StringLiteral_16714/*"_"*/;
  if ( StringLiteral_16714/*"_"*/ )
  {
    rewardGetObj = sub_21FFDA4(StringLiteral_16714/*"_"*/, v16->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_136;
  }
  if ( LODWORD(v16->max_length) <= 2 )
    goto LABEL_135;
  v34 = StringLiteral_16714/*"_"*/;
  v16->m_Items[2] = (Il2CppObject *)StringLiteral_16714/*"_"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v16->m_Items[2], v34, v28, v29, v30, v31, v32, v33);
  v219 = ranking;
  rewardGetObj = j_il2cpp_value_box_0(qword_594C070, &v219);
  v41 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_21FFDA4(rewardGetObj, v16->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_136;
  }
  if ( (v16->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_135;
  v16->m_Items[3] = v41;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v16->m_Items[3], (int32_t)v41, v35, v36, v37, v38, v39, v40);
  v44 = System_String__Concat_75481816(v16, 0);
  if ( !*(&EventRewardRootComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo, v42, v43);
  EventRewardRootComponent__setRewardInfoImg(baseSprite, v44, 0);
  rankingSprite = this->fields.rankingSprite;
  rewardGetObj = sub_21FFD10(object___TypeInfo, 4);
  if ( !rewardGetObj )
    goto LABEL_134;
  v52 = (System_Object_array *)rewardGetObj;
  RANKING_IMAGE_NAME = EventRankingListViewItemDraw_TypeInfo->static_fields->RANKING_IMAGE_NAME;
  if ( RANKING_IMAGE_NAME )
  {
    rewardGetObj = sub_21FFDA4(RANKING_IMAGE_NAME, *(_QWORD *)(*(_QWORD *)rewardGetObj + 64LL));
    if ( !rewardGetObj )
      goto LABEL_136;
  }
  if ( !LODWORD(v52->max_length) )
    goto LABEL_135;
  v52->m_Items[0] = (Il2CppObject *)RANKING_IMAGE_NAME;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)v52->m_Items,
    (int32_t)RANKING_IMAGE_NAME,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  v54 = v5->fields.itemInfo;
  if ( !v54 )
    goto LABEL_134;
  v218 = v54->fields.eventId;
  rewardGetObj = j_il2cpp_value_box_0(qword_594C070, &v218);
  v61 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_21FFDA4(rewardGetObj, v52->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_136;
  }
  if ( (v52->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_135;
  v52->m_Items[1] = v61;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v52->m_Items[1], (int32_t)v61, v55, v56, v57, v58, v59, v60);
  rewardGetObj = StringLiteral_16714/*"_"*/;
  if ( StringLiteral_16714/*"_"*/ )
  {
    rewardGetObj = sub_21FFDA4(StringLiteral_16714/*"_"*/, v52->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_136;
  }
  if ( LODWORD(v52->max_length) <= 2 )
    goto LABEL_135;
  v68 = StringLiteral_16714/*"_"*/;
  v52->m_Items[2] = (Il2CppObject *)StringLiteral_16714/*"_"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v52->m_Items[2], v68, v62, v63, v64, v65, v66, v67);
  v217 = v5->fields.ranking;
  rewardGetObj = j_il2cpp_value_box_0(qword_594C070, &v217);
  v75 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_21FFDA4(rewardGetObj, v52->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_136;
  }
  if ( (v52->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_135;
  v52->m_Items[3] = v75;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v52->m_Items[3], (int32_t)v75, v69, v70, v71, v72, v73, v74);
  v76 = System_String__Concat_75481816(v52, 0);
  EventRewardRootComponent__setRewardInfoImg(rankingSprite, v76, 0);
  teamSprite = this->fields.teamSprite;
  rewardGetObj = sub_21FFD10(object___TypeInfo, 4);
  if ( !rewardGetObj )
    goto LABEL_134;
  v84 = (System_Object_array *)rewardGetObj;
  GROUP_IMAGE_NAME = EventRankingListViewItemDraw_TypeInfo->static_fields->GROUP_IMAGE_NAME;
  if ( GROUP_IMAGE_NAME )
  {
    rewardGetObj = sub_21FFDA4(GROUP_IMAGE_NAME, *(_QWORD *)(*(_QWORD *)rewardGetObj + 64LL));
    if ( !rewardGetObj )
      goto LABEL_136;
  }
  if ( !LODWORD(v84->max_length) )
    goto LABEL_135;
  v84->m_Items[0] = (Il2CppObject *)GROUP_IMAGE_NAME;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v84->m_Items, (int32_t)GROUP_IMAGE_NAME, v78, v79, v80, v81, v82, v83);
  v86 = v5->fields.itemInfo;
  if ( !v86 )
    goto LABEL_134;
  v216 = v86->fields.eventId;
  rewardGetObj = j_il2cpp_value_box_0(qword_594C070, &v216);
  v93 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_21FFDA4(rewardGetObj, v84->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_136;
  }
  if ( (v84->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_135;
  v84->m_Items[1] = v93;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v84->m_Items[1], (int32_t)v93, v87, v88, v89, v90, v91, v92);
  rewardGetObj = StringLiteral_16714/*"_"*/;
  if ( StringLiteral_16714/*"_"*/ )
  {
    rewardGetObj = sub_21FFDA4(StringLiteral_16714/*"_"*/, v84->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_136;
  }
  if ( LODWORD(v84->max_length) <= 2 )
    goto LABEL_135;
  v100 = StringLiteral_16714/*"_"*/;
  v84->m_Items[2] = (Il2CppObject *)StringLiteral_16714/*"_"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v84->m_Items[2], v100, v94, v95, v96, v97, v98, v99);
  groupImageId = v5->fields.groupImageId;
  rewardGetObj = j_il2cpp_value_box_0(qword_594C070, &groupImageId);
  v107 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_21FFDA4(rewardGetObj, v84->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_136;
  }
  if ( (v84->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_135;
  v84->m_Items[3] = v107;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v84->m_Items[3], (int32_t)v107, v101, v102, v103, v104, v105, v106);
  v108 = System_String__Concat_75481816(v84, 0);
  EventRewardRootComponent__setRewardInfoImg(teamSprite, v108, 0);
  teamNameSprite = this->fields.teamNameSprite;
  rewardGetObj = sub_21FFD10(object___TypeInfo, 4);
  if ( !rewardGetObj )
    goto LABEL_134;
  v116 = (System_Object_array *)rewardGetObj;
  GROUP_NAME_IMAGE_NAME = EventRankingListViewItemDraw_TypeInfo->static_fields->GROUP_NAME_IMAGE_NAME;
  if ( GROUP_NAME_IMAGE_NAME )
  {
    rewardGetObj = sub_21FFDA4(GROUP_NAME_IMAGE_NAME, *(_QWORD *)(*(_QWORD *)rewardGetObj + 64LL));
    if ( !rewardGetObj )
      goto LABEL_136;
  }
  if ( !LODWORD(v116->max_length) )
    goto LABEL_135;
  v116->m_Items[0] = (Il2CppObject *)GROUP_NAME_IMAGE_NAME;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)v116->m_Items,
    (int32_t)GROUP_NAME_IMAGE_NAME,
    v110,
    v111,
    v112,
    v113,
    v114,
    v115);
  v118 = v5->fields.itemInfo;
  if ( !v118 )
    goto LABEL_134;
  v214 = v118->fields.eventId;
  rewardGetObj = j_il2cpp_value_box_0(qword_594C070, &v214);
  v125 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_21FFDA4(rewardGetObj, v116->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_136;
  }
  if ( (v116->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_135;
  v116->m_Items[1] = v125;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v116->m_Items[1], (int32_t)v125, v119, v120, v121, v122, v123, v124);
  rewardGetObj = StringLiteral_16714/*"_"*/;
  if ( StringLiteral_16714/*"_"*/ )
  {
    rewardGetObj = sub_21FFDA4(StringLiteral_16714/*"_"*/, v116->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_136;
  }
  if ( LODWORD(v116->max_length) <= 2 )
    goto LABEL_135;
  v132 = StringLiteral_16714/*"_"*/;
  v116->m_Items[2] = (Il2CppObject *)StringLiteral_16714/*"_"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v116->m_Items[2], v132, v126, v127, v128, v129, v130, v131);
  v133 = v5->fields.itemInfo;
  if ( !v133 )
    goto LABEL_134;
  groupId = v133->fields.groupId;
  rewardGetObj = j_il2cpp_value_box_0(qword_594C070, &groupId);
  v140 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_21FFDA4(rewardGetObj, v116->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_136;
  }
  if ( (v116->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_135;
  v116->m_Items[3] = v140;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v116->m_Items[3], (int32_t)v140, v134, v135, v136, v137, v138, v139);
  v141 = System_String__Concat_75481816(v116, 0);
  EventRewardRootComponent__setRewardInfoImg(teamNameSprite, v141, 0);
  rewardGetObj = EventRewardRootComponent__setRewardInfoImg(
                   this->fields.supportTxtSprite,
                   EventRankingListViewItemDraw_TypeInfo->static_fields->SUPPORT_TXT_IMAGE_NAME,
                   0);
  v143 = v5->fields.itemInfo;
  if ( !v143 )
    goto LABEL_134;
  supportInfoLabel = this->fields.supportInfoLabel;
  supportPoint = v143->fields.supportPoint;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v142);
  rewardGetObj = (__int64)LocalizationManager__GetNumberFormatLong(supportPoint, 0);
  if ( !supportInfoLabel )
    goto LABEL_134;
  UILabel__set_text(supportInfoLabel, (System_String_o *)rewardGetObj, 0);
  EventRewardRootComponent__setRewardInfoImg(
    this->fields.higherRewardSprite,
    EventRankingListViewItemDraw_TypeInfo->static_fields->HIGHER_REWARD_IMAGE_NAME,
    0);
  if ( v5->fields.isJoinTerm )
  {
    if ( v5->fields.isPlayedGoal )
    {
      v153 = EventRankingListViewItemDraw_TypeInfo;
      goalSprite = this->fields.goalSprite;
      if ( !*(&EventRankingListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(EventRankingListViewItemDraw_TypeInfo, v146, v147);
        v153 = EventRankingListViewItemDraw_TypeInfo;
      }
      GOAL_IMAGE_NAME = v153->static_fields->GOAL_IMAGE_NAME;
      if ( !*(&EventRewardRootComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo, v146, v147);
      EventRewardRootComponent__setRewardInfoImg(goalSprite, GOAL_IMAGE_NAME, 0);
      rewardGetObj = (__int64)this->fields.goalSprite;
      if ( !rewardGetObj )
        goto LABEL_134;
      rewardGetObj = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rewardGetObj, 0);
      if ( !rewardGetObj )
        goto LABEL_134;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rewardGetObj, 1, 0);
    }
    if ( v5->fields.isGetReward )
    {
      rewardGetSprite = this->fields.rewardGetSprite;
      rewardGetObj = sub_21FFD10(object___TypeInfo, 4);
      v163 = EventRankingListViewItemDraw_TypeInfo;
      v164 = rewardGetObj;
      if ( !*(&EventRankingListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(EventRankingListViewItemDraw_TypeInfo, item, v157);
        v163 = EventRankingListViewItemDraw_TypeInfo;
      }
      if ( !v164 )
        goto LABEL_134;
      REWARD_GET_IMAGE_NAME = v163->static_fields->REWARD_GET_IMAGE_NAME;
      if ( !REWARD_GET_IMAGE_NAME
        || (rewardGetObj = sub_21FFDA4(REWARD_GET_IMAGE_NAME, *(_QWORD *)(*(_QWORD *)v164 + 64LL))) != 0 )
      {
        if ( !*(_DWORD *)(v164 + 24) )
          goto LABEL_135;
        *(_QWORD *)(v164 + 32) = REWARD_GET_IMAGE_NAME;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)(v164 + 32),
          (int32_t)REWARD_GET_IMAGE_NAME,
          v157,
          v158,
          v159,
          v160,
          v161,
          v162);
        v166 = v5->fields.itemInfo;
        if ( !v166 )
          goto LABEL_134;
        eventId = v166->fields.eventId;
        rewardGetObj = j_il2cpp_value_box_0(qword_594C070, &eventId);
        v173 = rewardGetObj;
        if ( !rewardGetObj || (rewardGetObj = sub_21FFDA4(rewardGetObj, *(_QWORD *)(*(_QWORD *)v164 + 64LL))) != 0 )
        {
          if ( (*(_DWORD *)(v164 + 24) & 0xFFFFFFFE) == 0 )
            goto LABEL_135;
          *(_QWORD *)(v164 + 40) = v173;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v164 + 40), v173, v167, v168, v169, v170, v171, v172);
          rewardGetObj = StringLiteral_16714/*"_"*/;
          if ( !StringLiteral_16714/*"_"*/
            || (rewardGetObj = sub_21FFDA4(StringLiteral_16714/*"_"*/, *(_QWORD *)(*(_QWORD *)v164 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v164 + 24) <= 2u )
              goto LABEL_135;
            v180 = StringLiteral_16714/*"_"*/;
            *(_QWORD *)(v164 + 48) = StringLiteral_16714/*"_"*/;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v164 + 48), v180, v174, v175, v176, v177, v178, v179);
            v219 = ranking;
            rewardGetObj = j_il2cpp_value_box_0(qword_594C070, &v219);
            v187 = rewardGetObj;
            if ( !rewardGetObj || (rewardGetObj = sub_21FFDA4(rewardGetObj, *(_QWORD *)(*(_QWORD *)v164 + 64LL))) != 0 )
            {
              if ( (*(_DWORD *)(v164 + 24) & 0xFFFFFFFC) == 0 )
                goto LABEL_135;
              *(_QWORD *)(v164 + 56) = v187;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v164 + 56), v187, v181, v182, v183, v184, v185, v186);
              v190 = System_String__Concat_75481816((System_Object_array *)v164, 0);
              if ( !*(&EventRewardRootComponent_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo, v188, v189);
              EventRewardRootComponent__setRewardInfoImg(rewardGetSprite, v190, 0);
              rewardGetObj = (__int64)this->fields.rewardGetSprite;
              if ( !rewardGetObj )
                goto LABEL_134;
              rewardGetObj = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rewardGetObj, 0);
              if ( !rewardGetObj )
                goto LABEL_134;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rewardGetObj, 1, 0);
              v192 = v5->fields.ranking;
              if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, item, v191);
              rewardGetObj = (__int64)this->fields.rewardGetObj;
              if ( !rewardGetObj )
                goto LABEL_134;
              UnityEngine_GameObject__SetActive(
                (UnityEngine_GameObject_o *)rewardGetObj,
                v192 <= BalanceConfig_TypeInfo->static_fields->raceRewardRankMax,
                0);
              goto LABEL_112;
            }
          }
        }
      }
LABEL_136:
      v209 = sub_21FFEF0(rewardGetObj, v19);
      sub_21FFD90(v209, 0);
    }
  }
LABEL_112:
  giftEntityList = v5->fields.giftEntityList;
  this->fields.giftEntityList = giftEntityList;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.giftEntityList,
    (int32_t)giftEntityList,
    v147,
    v148,
    v149,
    v150,
    v151,
    v152);
  v195 = v5->fields.giftEntityList;
  if ( !v195 )
    goto LABEL_134;
  max_length = v195->max_length;
  this->fields.isMultipleReward = max_length > 1;
  if ( max_length < 2 )
  {
    v206 = this->fields.giftEntityList;
    if ( !v206 )
      goto LABEL_134;
    if ( LODWORD(v206->max_length) )
      goto LABEL_127;
    goto LABEL_135;
  }
  listViewObject = this->fields.listViewObject;
  if ( !listViewObject )
    goto LABEL_134;
  manager = (UnityEngine_Object_o *)listViewObject->fields.manager;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v194);
  rewardGetObj = UnityEngine_Object__op_Inequality(manager, 0, 0);
  if ( (rewardGetObj & 1) != 0 )
  {
    v201 = this->fields.listViewObject;
    if ( !v201 )
      goto LABEL_134;
    v202 = this->fields.giftEntityList;
    if ( !v202 )
      goto LABEL_134;
    rewardGetObj = (__int64)v201->fields.manager;
    if ( !rewardGetObj )
      goto LABEL_134;
    item = (EventRankingListViewItem_o *)EventRankingListViewManager_TypeInfo;
    naturalAligment = EventRankingListViewManager_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)rewardGetObj + 304LL) < (unsigned int)naturalAligment
      || *(EventRankingListViewManager_c **)(*(_QWORD *)(*(_QWORD *)rewardGetObj + 200LL) + 8 * naturalAligment - 8) != EventRankingListViewManager_TypeInfo )
    {
      v210 = (EventRankingListViewManager_o *)sub_220024C(
                                                rewardGetObj,
                                                EventRankingListViewManager_TypeInfo,
                                                v199,
                                                v200);
      EventRankingListViewManager__GetAlphaAnimCnt(v210, v211, v212);
      return;
    }
    v204 = v202->max_length;
    v205 = *(_DWORD *)(rewardGetObj + 340) % (int)v204;
    if ( v205 < v204 )
    {
      v206 = (struct GiftEntity_array *)((char *)v202 + 8 * v205);
LABEL_127:
      v207 = v206->m_Items[0];
      if ( v207 )
      {
        rewardGetObj = (__int64)this->fields.itemIcon;
        if ( rewardGetObj )
        {
          if ( v207->fields.num <= 1 )
            num = -1;
          else
            num = (unsigned int)v207->fields.num;
          ItemIconComponent__SetGift_47936840(
            (ItemIconComponent_o *)rewardGetObj,
            v207->fields.type,
            v207->fields.objectId,
            num,
            0,
            0);
          return;
        }
      }
LABEL_134:
      sub_21FFECC(rewardGetObj, item);
    }
LABEL_135:
    sub_21FFED4(rewardGetObj);
  }
}


void EventRankingListViewItemDraw__SetListViewObject(
        EventRankingListViewItemDraw_o *this,
        EventRankingListViewObject_o *listViewObject,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.listViewObject = listViewObject;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.listViewObject,
    (int32_t)listViewObject,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
      sub_21FFECC(0, method);
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
      sub_21FFECC(this, item);
    EventRankingListViewItemDraw__SetRewardIconAlpha(this, manager->fields.alphaAnimNow, (const MethodInfo *)item);
  }
}