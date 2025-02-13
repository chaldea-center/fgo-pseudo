void __fastcall EventRankingListViewItemDraw___cctor(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7
  int64_t v7; // x1
  struct EventRankingListViewItemDraw_StaticFields *static_fields; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x1
  struct EventRankingListViewItemDraw_StaticFields *v16; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x1
  struct EventRankingListViewItemDraw_StaticFields *v24; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x1
  struct EventRankingListViewItemDraw_StaticFields *v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x1
  struct EventRankingListViewItemDraw_StaticFields *v40; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  int64_t v47; // x1
  struct EventRankingListViewItemDraw_StaticFields *v48; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  int64_t v55; // x1
  struct EventRankingListViewItemDraw_StaticFields *v56; // x0
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7

  if ( (byte_4BE0762 & 1) == 0 )
  {
    sub_1C21E38(&EventRankingListViewItemDraw_TypeInfo);
    sub_1C21E38(&StringLiteral_19564/*"event_ranking_"*/);
    sub_1C21E38(&StringLiteral_19522/*"event_goal_flag"*/);
    sub_1C21E38(&StringLiteral_19568/*"event_ranking_rewardget_"*/);
    sub_1C21E38(&StringLiteral_19567/*"event_ranking_reward_txt"*/);
    sub_1C21E38(&StringLiteral_19566/*"event_ranking_group_name_"*/);
    sub_1C21E38(&StringLiteral_19565/*"event_ranking_group_"*/);
    sub_1C21E38(&StringLiteral_19601/*"event_support_txt"*/);
    sub_1C21E38(&StringLiteral_19581/*"event_rewardranking_"*/);
    byte_4BE0762 = 1;
  }
  EventRankingListViewItemDraw_TypeInfo->static_fields->GROUP_IMAGE_NAME = (struct System_String_o *)StringLiteral_19565/*"event_ranking_group_"*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)EventRankingListViewItemDraw_TypeInfo->static_fields,
    StringLiteral_19565/*"event_ranking_group_"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_19566/*"event_ranking_group_name_"*/;
  static_fields = EventRankingListViewItemDraw_TypeInfo->static_fields;
  static_fields->GROUP_NAME_IMAGE_NAME = (struct System_String_o *)StringLiteral_19566/*"event_ranking_group_name_"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->GROUP_NAME_IMAGE_NAME, v7, v9, v10, v11, v12, v13, v14);
  v15 = StringLiteral_19581/*"event_rewardranking_"*/;
  v16 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v16->BOARD_IMAGE_NAME = (struct System_String_o *)StringLiteral_19581/*"event_rewardranking_"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v16->BOARD_IMAGE_NAME, v15, v17, v18, v19, v20, v21, v22);
  v23 = StringLiteral_19568/*"event_ranking_rewardget_"*/;
  v24 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v24->REWARD_GET_IMAGE_NAME = (struct System_String_o *)StringLiteral_19568/*"event_ranking_rewardget_"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v24->REWARD_GET_IMAGE_NAME, v23, v25, v26, v27, v28, v29, v30);
  v31 = StringLiteral_19564/*"event_ranking_"*/;
  v32 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v32->RANKING_IMAGE_NAME = (struct System_String_o *)StringLiteral_19564/*"event_ranking_"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v32->RANKING_IMAGE_NAME, v31, v33, v34, v35, v36, v37, v38);
  v39 = StringLiteral_19522/*"event_goal_flag"*/;
  v40 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v40->GOAL_IMAGE_NAME = (struct System_String_o *)StringLiteral_19522/*"event_goal_flag"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v40->GOAL_IMAGE_NAME, v39, v41, v42, v43, v44, v45, v46);
  v47 = StringLiteral_19567/*"event_ranking_reward_txt"*/;
  v48 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v48->HIGHER_REWARD_IMAGE_NAME = (struct System_String_o *)StringLiteral_19567/*"event_ranking_reward_txt"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v48->HIGHER_REWARD_IMAGE_NAME, v47, v49, v50, v51, v52, v53, v54);
  v55 = StringLiteral_19601/*"event_support_txt"*/;
  v56 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v56->SUPPORT_TXT_IMAGE_NAME = (struct System_String_o *)StringLiteral_19601/*"event_support_txt"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v56->SUPPORT_TXT_IMAGE_NAME, v55, v57, v58, v59, v60, v61, v62);
}


void __fastcall EventRankingListViewItemDraw___ctor(EventRankingListViewItemDraw_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall EventRankingListViewItemDraw__ChangeNextRewardIcon(
        EventRankingListViewItemDraw_o *this,
        EventRankingListViewManager_o *manager,
        const MethodInfo *method)
{
  struct GiftEntity_array *giftEntityList; // x8
  il2cpp_array_size_t max_length; // w10
  int v5; // w9
  int32_t *v6; // x8
  int32_t v7; // w3

  if ( this->fields.isMultipleReward )
  {
    giftEntityList = this->fields.giftEntityList;
    if ( !giftEntityList || !manager )
      goto LABEL_12;
    max_length = giftEntityList->max_length;
    v5 = manager->fields.alphaAnimCnt % (int)max_length;
    if ( v5 >= max_length )
      sub_1C2209C(this, manager);
    v6 = (int32_t *)giftEntityList->m_Items[v5];
    if ( !v6 || (this = (EventRankingListViewItemDraw_o *)this->fields.itemIcon) == 0LL )
LABEL_12:
      sub_1C22094(this, manager);
    if ( v6[7] <= 1 )
      v7 = -1;
    else
      v7 = v6[7];
    ItemIconComponent__SetGift_39386620((ItemIconComponent_o *)this, v6[5], v6[6], v7, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRankingListViewItemDraw__OnChangeAlphaAnim(
        EventRankingListViewItemDraw_o *this,
        EventRankingListViewItem_o *item,
        int32_t mode,
        EventRankingListViewManager_o *manager,
        const MethodInfo *method)
{
  EventRankingListViewItemDraw__ChangeNextRewardIcon(this, manager, *(const MethodInfo **)&mode);
}


void __fastcall EventRankingListViewItemDraw__SetInput(
        EventRankingListViewItemDraw_o *this,
        EventRankingListViewItem_o *item,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventRankingListViewItemDraw__SetItem(
        EventRankingListViewItemDraw_o *this,
        EventRankingListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  EventRankingListViewItem_o *v5; // x20
  __int64 rewardGetObj; // x0
  UISprite_o *baseSprite; // x21
  int ranking; // w24
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  System_Object_array *v16; // x22
  EventRankingListViewItemDraw_c *v17; // x8
  int64_t BOARD_IMAGE_NAME; // x23
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  struct EventRankingRoundItemInfo_o *itemInfo; // x8
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x23
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int64_t v45; // x23
  System_String_o *v46; // x22
  UISprite_o *rankingSprite; // x21
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  System_Object_array *v54; // x22
  struct System_String_o *RANKING_IMAGE_NAME; // x23
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  struct EventRankingRoundItemInfo_o *v59; // x8
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  int64_t v66; // x23
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  __int64 v73; // x2
  __int64 v74; // x3
  __int64 v75; // x4
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  int64_t v82; // x23
  System_String_o *v83; // x0
  UISprite_o *teamSprite; // x21
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  System_Object_array *v91; // x22
  struct System_String_o *GROUP_IMAGE_NAME; // x23
  __int64 v93; // x2
  __int64 v94; // x3
  __int64 v95; // x4
  struct EventRankingRoundItemInfo_o *v96; // x8
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7
  int64_t v103; // x23
  int64_t v104; // x2
  int32_t v105; // w3
  System_String_o *v106; // x4
  BattleSetupInfo_o *v107; // x5
  FollowerInfo_o *v108; // x6
  PartyListViewItem_o *v109; // x7
  __int64 v110; // x2
  __int64 v111; // x3
  __int64 v112; // x4
  int64_t v113; // x2
  int32_t v114; // w3
  System_String_o *v115; // x4
  BattleSetupInfo_o *v116; // x5
  FollowerInfo_o *v117; // x6
  PartyListViewItem_o *v118; // x7
  int64_t v119; // x23
  System_String_o *v120; // x0
  UISprite_o *teamNameSprite; // x21
  int64_t v122; // x2
  int32_t v123; // w3
  System_String_o *v124; // x4
  BattleSetupInfo_o *v125; // x5
  FollowerInfo_o *v126; // x6
  PartyListViewItem_o *v127; // x7
  System_Object_array *v128; // x22
  struct System_String_o *GROUP_NAME_IMAGE_NAME; // x23
  __int64 v130; // x2
  __int64 v131; // x3
  __int64 v132; // x4
  struct EventRankingRoundItemInfo_o *v133; // x8
  int64_t v134; // x2
  int32_t v135; // w3
  System_String_o *v136; // x4
  BattleSetupInfo_o *v137; // x5
  FollowerInfo_o *v138; // x6
  PartyListViewItem_o *v139; // x7
  int64_t v140; // x23
  int64_t v141; // x2
  int32_t v142; // w3
  System_String_o *v143; // x4
  BattleSetupInfo_o *v144; // x5
  FollowerInfo_o *v145; // x6
  PartyListViewItem_o *v146; // x7
  __int64 v147; // x2
  __int64 v148; // x3
  __int64 v149; // x4
  struct EventRankingRoundItemInfo_o *v150; // x8
  int64_t v151; // x2
  int32_t v152; // w3
  System_String_o *v153; // x4
  BattleSetupInfo_o *v154; // x5
  FollowerInfo_o *v155; // x6
  PartyListViewItem_o *v156; // x7
  int64_t v157; // x23
  System_String_o *v158; // x0
  struct EventRankingRoundItemInfo_o *v159; // x8
  UILabel_o *supportInfoLabel; // x21
  int64_t supportPoint; // x22
  int64_t v162; // x2
  int32_t v163; // w3
  System_String_o *v164; // x4
  BattleSetupInfo_o *v165; // x5
  FollowerInfo_o *v166; // x6
  PartyListViewItem_o *v167; // x7
  EventRankingListViewItemDraw_c *v168; // x0
  UISprite_o *goalSprite; // x21
  System_String_o *GOAL_IMAGE_NAME; // x22
  UISprite_o *rewardGetSprite; // x21
  int64_t v172; // x2
  int32_t v173; // w3
  System_String_o *v174; // x4
  BattleSetupInfo_o *v175; // x5
  FollowerInfo_o *v176; // x6
  PartyListViewItem_o *v177; // x7
  EventRankingListViewItemDraw_c *v178; // x8
  System_Object_array *v179; // x22
  int64_t REWARD_GET_IMAGE_NAME; // x23
  __int64 v181; // x2
  __int64 v182; // x3
  __int64 v183; // x4
  struct EventRankingRoundItemInfo_o *v184; // x8
  int64_t v185; // x2
  int32_t v186; // w3
  System_String_o *v187; // x4
  BattleSetupInfo_o *v188; // x5
  FollowerInfo_o *v189; // x6
  PartyListViewItem_o *v190; // x7
  int64_t v191; // x23
  int64_t v192; // x2
  int32_t v193; // w3
  System_String_o *v194; // x4
  BattleSetupInfo_o *v195; // x5
  FollowerInfo_o *v196; // x6
  PartyListViewItem_o *v197; // x7
  __int64 v198; // x2
  __int64 v199; // x3
  __int64 v200; // x4
  int64_t v201; // x2
  int32_t v202; // w3
  System_String_o *v203; // x4
  BattleSetupInfo_o *v204; // x5
  FollowerInfo_o *v205; // x6
  PartyListViewItem_o *v206; // x7
  int64_t v207; // x23
  System_String_o *v208; // x22
  int32_t v209; // w21
  struct GiftEntity_array *giftEntityList; // x1
  struct GiftEntity_array *v211; // x8
  int max_length; // w8
  struct EventRankingListViewObject_o *listViewObject; // x8
  UnityEngine_Object_o *manager; // x20
  struct EventRankingListViewObject_o *v215; // x9
  struct GiftEntity_array *v216; // x8
  __int64 methodPtr_low; // x10
  il2cpp_array_size_t v218; // w10
  int v219; // w9
  struct GiftEntity_array *v220; // x8
  int32_t *v221; // x8
  int32_t v222; // w3
  __int64 v223; // x0
  EventRankingListViewManager_o *v224; // x0
  int32_t v225; // w1
  const MethodInfo *v226; // x2
  int32_t groupId; // [xsp+0h] [xbp-80h] BYREF
  int32_t v228; // [xsp+4h] [xbp-7Ch] BYREF
  int32_t groupImageId; // [xsp+8h] [xbp-78h] BYREF
  int32_t v230; // [xsp+Ch] [xbp-74h] BYREF
  int32_t v231; // [xsp+10h] [xbp-70h] BYREF
  int32_t v232; // [xsp+14h] [xbp-6Ch] BYREF
  int v233; // [xsp+18h] [xbp-68h] BYREF
  int32_t eventId; // [xsp+1Ch] [xbp-64h] BYREF

  v5 = item;
  if ( (byte_4BE0761 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&EventRankingListViewItemDraw_TypeInfo);
    sub_1C21E38(&EventRankingListViewManager_TypeInfo);
    sub_1C21E38(&EventRewardRootComponent_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&object___TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_16399/*"_"*/);
    byte_4BE0761 = 1;
  }
  if ( !v5 || !mode )
    return;
  rewardGetObj = (__int64)this->fields.rewardGetObj;
  if ( !rewardGetObj )
    goto LABEL_144;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rewardGetObj, 0, 0LL);
  rewardGetObj = (__int64)this->fields.rewardGetSprite;
  if ( !rewardGetObj )
    goto LABEL_144;
  rewardGetObj = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rewardGetObj, 0LL);
  if ( !rewardGetObj )
    goto LABEL_144;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rewardGetObj, 0, 0LL);
  rewardGetObj = (__int64)this->fields.goalSprite;
  if ( !rewardGetObj )
    goto LABEL_144;
  rewardGetObj = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rewardGetObj, 0LL);
  if ( !rewardGetObj )
    goto LABEL_144;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rewardGetObj, 0, 0LL);
  baseSprite = this->fields.baseSprite;
  if ( v5->fields.ranking >= 4 )
    ranking = 4;
  else
    ranking = v5->fields.ranking;
  rewardGetObj = sub_1C21EE0(object___TypeInfo, 4LL);
  v16 = (System_Object_array *)rewardGetObj;
  v17 = EventRankingListViewItemDraw_TypeInfo;
  if ( !EventRankingListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRankingListViewItemDraw_TypeInfo);
    v17 = EventRankingListViewItemDraw_TypeInfo;
  }
  if ( !v16 )
    goto LABEL_144;
  BOARD_IMAGE_NAME = (int64_t)v17->static_fields->BOARD_IMAGE_NAME;
  if ( BOARD_IMAGE_NAME )
  {
    rewardGetObj = sub_1C21F74(BOARD_IMAGE_NAME, v16->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( !v16->max_length )
    goto LABEL_145;
  v16->m_Items[0] = (Il2CppObject *)BOARD_IMAGE_NAME;
  sub_1C21DDC((PartyOrganizationUtility_o *)v16->m_Items, BOARD_IMAGE_NAME, v10, v11, v12, v13, v14, v15);
  itemInfo = v5->fields.itemInfo;
  if ( !itemInfo )
    goto LABEL_144;
  eventId = itemInfo->fields.eventId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &eventId, v19, v20, v21);
  v29 = rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1C21F74(rewardGetObj, v16->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( v16->max_length <= 1 )
    goto LABEL_145;
  v16->m_Items[1] = (Il2CppObject *)v29;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v16->m_Items[1], v29, v23, v24, v25, v26, v27, v28);
  rewardGetObj = StringLiteral_16399/*"_"*/;
  if ( StringLiteral_16399/*"_"*/ )
  {
    rewardGetObj = sub_1C21F74(StringLiteral_16399/*"_"*/, v16->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
    item = (EventRankingListViewItem_o *)StringLiteral_16399/*"_"*/;
  }
  else
  {
    item = 0LL;
  }
  if ( v16->max_length <= 2 )
    goto LABEL_145;
  v16->m_Items[2] = (Il2CppObject *)item;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v16->m_Items[2], (int64_t)item, v30, v31, v32, v33, v34, v35);
  v233 = ranking;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v233, v36, v37, v38);
  v45 = rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1C21F74(rewardGetObj, v16->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( v16->max_length <= 3 )
    goto LABEL_145;
  v16->m_Items[3] = (Il2CppObject *)v45;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v16->m_Items[3], v45, v39, v40, v41, v42, v43, v44);
  v46 = System_String__Concat_63126928(v16, 0LL);
  if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
  EventRewardRootComponent__setRewardInfoImg(baseSprite, v46, 0LL);
  rankingSprite = this->fields.rankingSprite;
  rewardGetObj = sub_1C21EE0(object___TypeInfo, 4LL);
  if ( !rewardGetObj )
    goto LABEL_144;
  v54 = (System_Object_array *)rewardGetObj;
  RANKING_IMAGE_NAME = EventRankingListViewItemDraw_TypeInfo->static_fields->RANKING_IMAGE_NAME;
  if ( RANKING_IMAGE_NAME )
  {
    rewardGetObj = sub_1C21F74(RANKING_IMAGE_NAME, *(_QWORD *)(*(_QWORD *)rewardGetObj + 64LL));
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( !v54->max_length )
    goto LABEL_145;
  v54->m_Items[0] = (Il2CppObject *)RANKING_IMAGE_NAME;
  sub_1C21DDC((PartyOrganizationUtility_o *)v54->m_Items, (int64_t)RANKING_IMAGE_NAME, v48, v49, v50, v51, v52, v53);
  v59 = v5->fields.itemInfo;
  if ( !v59 )
    goto LABEL_144;
  v232 = v59->fields.eventId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v232, v56, v57, v58);
  v66 = rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1C21F74(rewardGetObj, v54->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( v54->max_length <= 1 )
    goto LABEL_145;
  v54->m_Items[1] = (Il2CppObject *)v66;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v54->m_Items[1], v66, v60, v61, v62, v63, v64, v65);
  rewardGetObj = StringLiteral_16399/*"_"*/;
  if ( StringLiteral_16399/*"_"*/ )
  {
    rewardGetObj = sub_1C21F74(StringLiteral_16399/*"_"*/, v54->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
    item = (EventRankingListViewItem_o *)StringLiteral_16399/*"_"*/;
  }
  else
  {
    item = 0LL;
  }
  if ( v54->max_length <= 2 )
    goto LABEL_145;
  v54->m_Items[2] = (Il2CppObject *)item;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v54->m_Items[2], (int64_t)item, v67, v68, v69, v70, v71, v72);
  v231 = v5->fields.ranking;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v231, v73, v74, v75);
  v82 = rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1C21F74(rewardGetObj, v54->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( v54->max_length <= 3 )
    goto LABEL_145;
  v54->m_Items[3] = (Il2CppObject *)v82;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v54->m_Items[3], v82, v76, v77, v78, v79, v80, v81);
  v83 = System_String__Concat_63126928(v54, 0LL);
  EventRewardRootComponent__setRewardInfoImg(rankingSprite, v83, 0LL);
  teamSprite = this->fields.teamSprite;
  rewardGetObj = sub_1C21EE0(object___TypeInfo, 4LL);
  if ( !rewardGetObj )
    goto LABEL_144;
  v91 = (System_Object_array *)rewardGetObj;
  GROUP_IMAGE_NAME = EventRankingListViewItemDraw_TypeInfo->static_fields->GROUP_IMAGE_NAME;
  if ( GROUP_IMAGE_NAME )
  {
    rewardGetObj = sub_1C21F74(GROUP_IMAGE_NAME, *(_QWORD *)(*(_QWORD *)rewardGetObj + 64LL));
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( !v91->max_length )
    goto LABEL_145;
  v91->m_Items[0] = (Il2CppObject *)GROUP_IMAGE_NAME;
  sub_1C21DDC((PartyOrganizationUtility_o *)v91->m_Items, (int64_t)GROUP_IMAGE_NAME, v85, v86, v87, v88, v89, v90);
  v96 = v5->fields.itemInfo;
  if ( !v96 )
    goto LABEL_144;
  v230 = v96->fields.eventId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v230, v93, v94, v95);
  v103 = rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1C21F74(rewardGetObj, v91->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( v91->max_length <= 1 )
    goto LABEL_145;
  v91->m_Items[1] = (Il2CppObject *)v103;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v91->m_Items[1], v103, v97, v98, v99, v100, v101, v102);
  rewardGetObj = StringLiteral_16399/*"_"*/;
  if ( StringLiteral_16399/*"_"*/ )
  {
    rewardGetObj = sub_1C21F74(StringLiteral_16399/*"_"*/, v91->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
    item = (EventRankingListViewItem_o *)StringLiteral_16399/*"_"*/;
  }
  else
  {
    item = 0LL;
  }
  if ( v91->max_length <= 2 )
    goto LABEL_145;
  v91->m_Items[2] = (Il2CppObject *)item;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v91->m_Items[2], (int64_t)item, v104, v105, v106, v107, v108, v109);
  groupImageId = v5->fields.groupImageId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &groupImageId, v110, v111, v112);
  v119 = rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1C21F74(rewardGetObj, v91->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( v91->max_length <= 3 )
    goto LABEL_145;
  v91->m_Items[3] = (Il2CppObject *)v119;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v91->m_Items[3], v119, v113, v114, v115, v116, v117, v118);
  v120 = System_String__Concat_63126928(v91, 0LL);
  EventRewardRootComponent__setRewardInfoImg(teamSprite, v120, 0LL);
  teamNameSprite = this->fields.teamNameSprite;
  rewardGetObj = sub_1C21EE0(object___TypeInfo, 4LL);
  if ( !rewardGetObj )
    goto LABEL_144;
  v128 = (System_Object_array *)rewardGetObj;
  GROUP_NAME_IMAGE_NAME = EventRankingListViewItemDraw_TypeInfo->static_fields->GROUP_NAME_IMAGE_NAME;
  if ( GROUP_NAME_IMAGE_NAME )
  {
    rewardGetObj = sub_1C21F74(GROUP_NAME_IMAGE_NAME, *(_QWORD *)(*(_QWORD *)rewardGetObj + 64LL));
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( !v128->max_length )
    goto LABEL_145;
  v128->m_Items[0] = (Il2CppObject *)GROUP_NAME_IMAGE_NAME;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)v128->m_Items,
    (int64_t)GROUP_NAME_IMAGE_NAME,
    v122,
    v123,
    v124,
    v125,
    v126,
    v127);
  v133 = v5->fields.itemInfo;
  if ( !v133 )
    goto LABEL_144;
  v228 = v133->fields.eventId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v228, v130, v131, v132);
  v140 = rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1C21F74(rewardGetObj, v128->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( v128->max_length <= 1 )
    goto LABEL_145;
  v128->m_Items[1] = (Il2CppObject *)v140;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v128->m_Items[1], v140, v134, v135, v136, v137, v138, v139);
  rewardGetObj = StringLiteral_16399/*"_"*/;
  if ( StringLiteral_16399/*"_"*/ )
  {
    rewardGetObj = sub_1C21F74(StringLiteral_16399/*"_"*/, v128->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
    item = (EventRankingListViewItem_o *)StringLiteral_16399/*"_"*/;
  }
  else
  {
    item = 0LL;
  }
  if ( v128->max_length <= 2 )
    goto LABEL_145;
  v128->m_Items[2] = (Il2CppObject *)item;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v128->m_Items[2], (int64_t)item, v141, v142, v143, v144, v145, v146);
  v150 = v5->fields.itemInfo;
  if ( !v150 )
    goto LABEL_144;
  groupId = v150->fields.groupId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &groupId, v147, v148, v149);
  v157 = rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1C21F74(rewardGetObj, v128->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( v128->max_length <= 3 )
    goto LABEL_145;
  v128->m_Items[3] = (Il2CppObject *)v157;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v128->m_Items[3], v157, v151, v152, v153, v154, v155, v156);
  v158 = System_String__Concat_63126928(v128, 0LL);
  EventRewardRootComponent__setRewardInfoImg(teamNameSprite, v158, 0LL);
  rewardGetObj = EventRewardRootComponent__setRewardInfoImg(
                   this->fields.supportTxtSprite,
                   EventRankingListViewItemDraw_TypeInfo->static_fields->SUPPORT_TXT_IMAGE_NAME,
                   0LL);
  v159 = v5->fields.itemInfo;
  if ( !v159 )
    goto LABEL_144;
  supportInfoLabel = this->fields.supportInfoLabel;
  supportPoint = v159->fields.supportPoint;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  rewardGetObj = (__int64)LocalizationManager__GetNumberFormatLong(supportPoint, 0LL);
  if ( !supportInfoLabel )
    goto LABEL_144;
  UILabel__set_text(supportInfoLabel, (System_String_o *)rewardGetObj, 0LL);
  EventRewardRootComponent__setRewardInfoImg(
    this->fields.higherRewardSprite,
    EventRankingListViewItemDraw_TypeInfo->static_fields->HIGHER_REWARD_IMAGE_NAME,
    0LL);
  if ( v5->fields.isJoinTerm )
  {
    if ( v5->fields.isPlayedGoal )
    {
      v168 = EventRankingListViewItemDraw_TypeInfo;
      goalSprite = this->fields.goalSprite;
      if ( !EventRankingListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRankingListViewItemDraw_TypeInfo);
        v168 = EventRankingListViewItemDraw_TypeInfo;
      }
      GOAL_IMAGE_NAME = v168->static_fields->GOAL_IMAGE_NAME;
      if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
      EventRewardRootComponent__setRewardInfoImg(goalSprite, GOAL_IMAGE_NAME, 0LL);
      rewardGetObj = (__int64)this->fields.goalSprite;
      if ( !rewardGetObj )
        goto LABEL_144;
      rewardGetObj = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rewardGetObj, 0LL);
      if ( !rewardGetObj )
        goto LABEL_144;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rewardGetObj, 1, 0LL);
    }
    if ( v5->fields.isGetReward )
    {
      rewardGetSprite = this->fields.rewardGetSprite;
      rewardGetObj = sub_1C21EE0(object___TypeInfo, 4LL);
      v178 = EventRankingListViewItemDraw_TypeInfo;
      v179 = (System_Object_array *)rewardGetObj;
      if ( !EventRankingListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRankingListViewItemDraw_TypeInfo);
        v178 = EventRankingListViewItemDraw_TypeInfo;
      }
      if ( !v179 )
        goto LABEL_144;
      REWARD_GET_IMAGE_NAME = (int64_t)v178->static_fields->REWARD_GET_IMAGE_NAME;
      if ( !REWARD_GET_IMAGE_NAME
        || (rewardGetObj = sub_1C21F74(REWARD_GET_IMAGE_NAME, v179->obj.klass->_1.element_class)) != 0 )
      {
        if ( !v179->max_length )
          goto LABEL_145;
        v179->m_Items[0] = (Il2CppObject *)REWARD_GET_IMAGE_NAME;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)v179->m_Items,
          REWARD_GET_IMAGE_NAME,
          v172,
          v173,
          v174,
          v175,
          v176,
          v177);
        v184 = v5->fields.itemInfo;
        if ( !v184 )
          goto LABEL_144;
        eventId = v184->fields.eventId;
        rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &eventId, v181, v182, v183);
        v191 = rewardGetObj;
        if ( !rewardGetObj || (rewardGetObj = sub_1C21F74(rewardGetObj, v179->obj.klass->_1.element_class)) != 0 )
        {
          if ( v179->max_length <= 1 )
            goto LABEL_145;
          v179->m_Items[1] = (Il2CppObject *)v191;
          sub_1C21DDC((PartyOrganizationUtility_o *)&v179->m_Items[1], v191, v185, v186, v187, v188, v189, v190);
          rewardGetObj = StringLiteral_16399/*"_"*/;
          if ( StringLiteral_16399/*"_"*/ )
          {
            rewardGetObj = sub_1C21F74(StringLiteral_16399/*"_"*/, v179->obj.klass->_1.element_class);
            if ( !rewardGetObj )
              goto LABEL_146;
            item = (EventRankingListViewItem_o *)StringLiteral_16399/*"_"*/;
          }
          else
          {
            item = 0LL;
          }
          if ( v179->max_length <= 2 )
            goto LABEL_145;
          v179->m_Items[2] = (Il2CppObject *)item;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&v179->m_Items[2],
            (int64_t)item,
            v192,
            v193,
            v194,
            v195,
            v196,
            v197);
          v233 = ranking;
          rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v233, v198, v199, v200);
          v207 = rewardGetObj;
          if ( !rewardGetObj || (rewardGetObj = sub_1C21F74(rewardGetObj, v179->obj.klass->_1.element_class)) != 0 )
          {
            if ( v179->max_length <= 3 )
              goto LABEL_145;
            v179->m_Items[3] = (Il2CppObject *)v207;
            sub_1C21DDC((PartyOrganizationUtility_o *)&v179->m_Items[3], v207, v201, v202, v203, v204, v205, v206);
            v208 = System_String__Concat_63126928(v179, 0LL);
            if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
            EventRewardRootComponent__setRewardInfoImg(rewardGetSprite, v208, 0LL);
            rewardGetObj = (__int64)this->fields.rewardGetSprite;
            if ( !rewardGetObj )
              goto LABEL_144;
            rewardGetObj = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rewardGetObj, 0LL);
            if ( !rewardGetObj )
              goto LABEL_144;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rewardGetObj, 1, 0LL);
            v209 = v5->fields.ranking;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            rewardGetObj = (__int64)this->fields.rewardGetObj;
            if ( !rewardGetObj )
              goto LABEL_144;
            UnityEngine_GameObject__SetActive(
              (UnityEngine_GameObject_o *)rewardGetObj,
              v209 <= BalanceConfig_TypeInfo->static_fields->raceRewardRankMax,
              0LL);
            goto LABEL_122;
          }
        }
      }
LABEL_146:
      v223 = sub_1C220B8(rewardGetObj);
      sub_1C21F60(v223, 0LL);
    }
  }
LABEL_122:
  giftEntityList = v5->fields.giftEntityList;
  this->fields.giftEntityList = giftEntityList;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.giftEntityList,
    (int64_t)giftEntityList,
    v162,
    v163,
    v164,
    v165,
    v166,
    v167);
  v211 = v5->fields.giftEntityList;
  if ( !v211 )
    goto LABEL_144;
  max_length = v211->max_length;
  this->fields.isMultipleReward = max_length > 1;
  if ( max_length < 2 )
  {
    v220 = this->fields.giftEntityList;
    if ( !v220 )
      goto LABEL_144;
    if ( v220->max_length )
      goto LABEL_137;
    goto LABEL_145;
  }
  listViewObject = this->fields.listViewObject;
  if ( !listViewObject )
    goto LABEL_144;
  manager = (UnityEngine_Object_o *)listViewObject->fields.manager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  rewardGetObj = UnityEngine_Object__op_Inequality(manager, 0LL, 0LL);
  if ( (rewardGetObj & 1) != 0 )
  {
    v215 = this->fields.listViewObject;
    if ( !v215 )
      goto LABEL_144;
    v216 = this->fields.giftEntityList;
    if ( !v216 )
      goto LABEL_144;
    rewardGetObj = (__int64)v215->fields.manager;
    if ( !rewardGetObj )
      goto LABEL_144;
    item = (EventRankingListViewItem_o *)EventRankingListViewManager_TypeInfo;
    methodPtr_low = LOBYTE(EventRankingListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)rewardGetObj + 304LL) < (unsigned int)methodPtr_low
      || *(EventRankingListViewManager_c **)(*(_QWORD *)(*(_QWORD *)rewardGetObj + 200LL) + 8 * methodPtr_low - 8) != EventRankingListViewManager_TypeInfo )
    {
      sub_1C22354(rewardGetObj);
      EventRankingListViewManager__GetAlphaAnimCnt(v224, v225, v226);
      return;
    }
    v218 = v216->max_length;
    v219 = *(_DWORD *)(rewardGetObj + 340) % (int)v218;
    if ( v219 < v218 )
    {
      v220 = (struct GiftEntity_array *)((char *)v216 + 8 * v219);
LABEL_137:
      v221 = (int32_t *)v220->m_Items[0];
      if ( v221 )
      {
        rewardGetObj = (__int64)this->fields.itemIcon;
        if ( rewardGetObj )
        {
          if ( v221[7] <= 1 )
            v222 = -1;
          else
            v222 = v221[7];
          ItemIconComponent__SetGift_39386620((ItemIconComponent_o *)rewardGetObj, v221[5], v221[6], v222, 0, 0LL);
          return;
        }
      }
LABEL_144:
      sub_1C22094(rewardGetObj, item);
    }
LABEL_145:
    sub_1C2209C(rewardGetObj, item);
  }
}


void __fastcall EventRankingListViewItemDraw__SetListViewObject(
        EventRankingListViewItemDraw_o *this,
        EventRankingListViewObject_o *listViewObject,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.listViewObject = listViewObject;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.listViewObject,
    (int64_t)listViewObject,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall EventRankingListViewItemDraw__SetRewardIconAlpha(
        EventRankingListViewItemDraw_o *this,
        float alpha,
        const MethodInfo *method)
{
  ItemIconComponent_o *itemIcon; // x0

  if ( this->fields.isMultipleReward )
  {
    itemIcon = this->fields.itemIcon;
    if ( !itemIcon )
      sub_1C22094(0LL, method);
    ItemIconComponent__SetAlpha(itemIcon, alpha, 0LL);
  }
}


void __fastcall EventRankingListViewItemDraw__UpdateItem(
        EventRankingListViewItemDraw_o *this,
        EventRankingListViewItem_o *item,
        int32_t mode,
        EventRankingListViewManager_o *manager,
        const MethodInfo *method)
{
  if ( item && mode )
  {
    if ( !manager )
      sub_1C22094(this, item);
    EventRankingListViewItemDraw__SetRewardIconAlpha(this, manager->fields.alphaAnimNow, (const MethodInfo *)item);
  }
}