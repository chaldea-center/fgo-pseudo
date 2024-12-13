void __fastcall EventRankingListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  int64_t v16; // x1
  struct EventRankingListViewItemDraw_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x1
  struct EventRankingListViewItemDraw_StaticFields *v25; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x1
  struct EventRankingListViewItemDraw_StaticFields *v33; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t v40; // x1
  struct EventRankingListViewItemDraw_StaticFields *v41; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x1
  struct EventRankingListViewItemDraw_StaticFields *v49; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int64_t v56; // x1
  struct EventRankingListViewItemDraw_StaticFields *v57; // x0
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  int64_t v64; // x1
  struct EventRankingListViewItemDraw_StaticFields *v65; // x0
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7

  if ( (byte_4B3B306 & 1) == 0 )
  {
    sub_1BD3458(&EventRankingListViewItemDraw_TypeInfo, v1);
    sub_1BD3458(&StringLiteral_19462/*"event_ranking_"*/, v8);
    sub_1BD3458(&StringLiteral_19420/*"event_goal_flag"*/, v9);
    sub_1BD3458(&StringLiteral_19466/*"event_ranking_rewardget_"*/, v10);
    sub_1BD3458(&StringLiteral_19465/*"event_ranking_reward_txt"*/, v11);
    sub_1BD3458(&StringLiteral_19464/*"event_ranking_group_name_"*/, v12);
    sub_1BD3458(&StringLiteral_19463/*"event_ranking_group_"*/, v13);
    sub_1BD3458(&StringLiteral_19499/*"event_support_txt"*/, v14);
    sub_1BD3458(&StringLiteral_19479/*"event_rewardranking_"*/, v15);
    byte_4B3B306 = 1;
  }
  EventRankingListViewItemDraw_TypeInfo->static_fields->GROUP_IMAGE_NAME = (struct System_String_o *)StringLiteral_19463/*"event_ranking_group_"*/;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)EventRankingListViewItemDraw_TypeInfo->static_fields,
    StringLiteral_19463/*"event_ranking_group_"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v16 = StringLiteral_19464/*"event_ranking_group_name_"*/;
  static_fields = EventRankingListViewItemDraw_TypeInfo->static_fields;
  static_fields->GROUP_NAME_IMAGE_NAME = (struct System_String_o *)StringLiteral_19464/*"event_ranking_group_name_"*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)&static_fields->GROUP_NAME_IMAGE_NAME, v16, v18, v19, v20, v21, v22, v23);
  v24 = StringLiteral_19479/*"event_rewardranking_"*/;
  v25 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v25->BOARD_IMAGE_NAME = (struct System_String_o *)StringLiteral_19479/*"event_rewardranking_"*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v25->BOARD_IMAGE_NAME, v24, v26, v27, v28, v29, v30, v31);
  v32 = StringLiteral_19466/*"event_ranking_rewardget_"*/;
  v33 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v33->REWARD_GET_IMAGE_NAME = (struct System_String_o *)StringLiteral_19466/*"event_ranking_rewardget_"*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v33->REWARD_GET_IMAGE_NAME, v32, v34, v35, v36, v37, v38, v39);
  v40 = StringLiteral_19462/*"event_ranking_"*/;
  v41 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v41->RANKING_IMAGE_NAME = (struct System_String_o *)StringLiteral_19462/*"event_ranking_"*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v41->RANKING_IMAGE_NAME, v40, v42, v43, v44, v45, v46, v47);
  v48 = StringLiteral_19420/*"event_goal_flag"*/;
  v49 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v49->GOAL_IMAGE_NAME = (struct System_String_o *)StringLiteral_19420/*"event_goal_flag"*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v49->GOAL_IMAGE_NAME, v48, v50, v51, v52, v53, v54, v55);
  v56 = StringLiteral_19465/*"event_ranking_reward_txt"*/;
  v57 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v57->HIGHER_REWARD_IMAGE_NAME = (struct System_String_o *)StringLiteral_19465/*"event_ranking_reward_txt"*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v57->HIGHER_REWARD_IMAGE_NAME, v56, v58, v59, v60, v61, v62, v63);
  v64 = StringLiteral_19499/*"event_support_txt"*/;
  v65 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v65->SUPPORT_TXT_IMAGE_NAME = (struct System_String_o *)StringLiteral_19499/*"event_support_txt"*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v65->SUPPORT_TXT_IMAGE_NAME, v64, v66, v67, v68, v69, v70, v71);
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
      sub_1BD36BC(this, manager);
    v6 = (int32_t *)giftEntityList->m_Items[v5];
    if ( !v6 || (this = (EventRankingListViewItemDraw_o *)this->fields.itemIcon) == 0LL )
LABEL_12:
      sub_1BD36B4(this, manager);
    if ( v6[7] <= 1 )
      v7 = -1;
    else
      v7 = v6[7];
    ItemIconComponent__SetGift_38924152((ItemIconComponent_o *)this, v6[5], v6[6], v7, 0, 0LL);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 rewardGetObj; // x0
  UISprite_o *baseSprite; // x21
  int ranking; // w24
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Object_array *v24; // x22
  EventRankingListViewItemDraw_c *v25; // x8
  int64_t BOARD_IMAGE_NAME; // x23
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  struct EventRankingRoundItemInfo_o *itemInfo; // x8
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int64_t v37; // x23
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  int64_t v53; // x23
  System_String_o *v54; // x22
  UISprite_o *rankingSprite; // x21
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  System_Object_array *v62; // x22
  struct System_String_o *RANKING_IMAGE_NAME; // x23
  __int64 v64; // x2
  __int64 v65; // x3
  __int64 v66; // x4
  struct EventRankingRoundItemInfo_o *v67; // x8
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  int64_t v74; // x23
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  __int64 v81; // x2
  __int64 v82; // x3
  __int64 v83; // x4
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  int64_t v90; // x23
  System_String_o *v91; // x0
  UISprite_o *teamSprite; // x21
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  System_Object_array *v99; // x22
  struct System_String_o *GROUP_IMAGE_NAME; // x23
  __int64 v101; // x2
  __int64 v102; // x3
  __int64 v103; // x4
  struct EventRankingRoundItemInfo_o *v104; // x8
  int64_t v105; // x2
  int32_t v106; // w3
  System_String_o *v107; // x4
  BattleSetupInfo_o *v108; // x5
  FollowerInfo_o *v109; // x6
  PartyListViewItem_o *v110; // x7
  int64_t v111; // x23
  int64_t v112; // x2
  int32_t v113; // w3
  System_String_o *v114; // x4
  BattleSetupInfo_o *v115; // x5
  FollowerInfo_o *v116; // x6
  PartyListViewItem_o *v117; // x7
  __int64 v118; // x2
  __int64 v119; // x3
  __int64 v120; // x4
  int64_t v121; // x2
  int32_t v122; // w3
  System_String_o *v123; // x4
  BattleSetupInfo_o *v124; // x5
  FollowerInfo_o *v125; // x6
  PartyListViewItem_o *v126; // x7
  int64_t v127; // x23
  System_String_o *v128; // x0
  UISprite_o *teamNameSprite; // x21
  int64_t v130; // x2
  int32_t v131; // w3
  System_String_o *v132; // x4
  BattleSetupInfo_o *v133; // x5
  FollowerInfo_o *v134; // x6
  PartyListViewItem_o *v135; // x7
  System_Object_array *v136; // x22
  struct System_String_o *GROUP_NAME_IMAGE_NAME; // x23
  __int64 v138; // x2
  __int64 v139; // x3
  __int64 v140; // x4
  struct EventRankingRoundItemInfo_o *v141; // x8
  int64_t v142; // x2
  int32_t v143; // w3
  System_String_o *v144; // x4
  BattleSetupInfo_o *v145; // x5
  FollowerInfo_o *v146; // x6
  PartyListViewItem_o *v147; // x7
  int64_t v148; // x23
  int64_t v149; // x2
  int32_t v150; // w3
  System_String_o *v151; // x4
  BattleSetupInfo_o *v152; // x5
  FollowerInfo_o *v153; // x6
  PartyListViewItem_o *v154; // x7
  __int64 v155; // x2
  __int64 v156; // x3
  __int64 v157; // x4
  struct EventRankingRoundItemInfo_o *v158; // x8
  int64_t v159; // x2
  int32_t v160; // w3
  System_String_o *v161; // x4
  BattleSetupInfo_o *v162; // x5
  FollowerInfo_o *v163; // x6
  PartyListViewItem_o *v164; // x7
  int64_t v165; // x23
  System_String_o *v166; // x0
  struct EventRankingRoundItemInfo_o *v167; // x8
  UILabel_o *supportInfoLabel; // x21
  int64_t supportPoint; // x22
  int64_t v170; // x2
  int32_t v171; // w3
  System_String_o *v172; // x4
  BattleSetupInfo_o *v173; // x5
  FollowerInfo_o *v174; // x6
  PartyListViewItem_o *v175; // x7
  EventRankingListViewItemDraw_c *v176; // x0
  UISprite_o *goalSprite; // x21
  System_String_o *GOAL_IMAGE_NAME; // x22
  UISprite_o *rewardGetSprite; // x21
  int64_t v180; // x2
  int32_t v181; // w3
  System_String_o *v182; // x4
  BattleSetupInfo_o *v183; // x5
  FollowerInfo_o *v184; // x6
  PartyListViewItem_o *v185; // x7
  EventRankingListViewItemDraw_c *v186; // x8
  System_Object_array *v187; // x22
  int64_t REWARD_GET_IMAGE_NAME; // x23
  __int64 v189; // x2
  __int64 v190; // x3
  __int64 v191; // x4
  struct EventRankingRoundItemInfo_o *v192; // x8
  int64_t v193; // x2
  int32_t v194; // w3
  System_String_o *v195; // x4
  BattleSetupInfo_o *v196; // x5
  FollowerInfo_o *v197; // x6
  PartyListViewItem_o *v198; // x7
  int64_t v199; // x23
  int64_t v200; // x2
  int32_t v201; // w3
  System_String_o *v202; // x4
  BattleSetupInfo_o *v203; // x5
  FollowerInfo_o *v204; // x6
  PartyListViewItem_o *v205; // x7
  __int64 v206; // x2
  __int64 v207; // x3
  __int64 v208; // x4
  int64_t v209; // x2
  int32_t v210; // w3
  System_String_o *v211; // x4
  BattleSetupInfo_o *v212; // x5
  FollowerInfo_o *v213; // x6
  PartyListViewItem_o *v214; // x7
  int64_t v215; // x23
  System_String_o *v216; // x22
  int32_t v217; // w21
  struct GiftEntity_array *giftEntityList; // x1
  struct GiftEntity_array *v219; // x8
  int max_length; // w8
  struct EventRankingListViewObject_o *listViewObject; // x8
  UnityEngine_Object_o *manager; // x20
  struct EventRankingListViewObject_o *v223; // x9
  struct GiftEntity_array *v224; // x8
  __int64 methodPtr_low; // x10
  il2cpp_array_size_t v226; // w10
  int v227; // w9
  struct GiftEntity_array *v228; // x8
  int32_t *v229; // x8
  int32_t v230; // w3
  __int64 v231; // x0
  EventRankingListViewManager_o *v232; // x0
  int32_t v233; // w1
  const MethodInfo *v234; // x2
  int32_t groupId; // [xsp+0h] [xbp-80h] BYREF
  int32_t v236; // [xsp+4h] [xbp-7Ch] BYREF
  int32_t groupImageId; // [xsp+8h] [xbp-78h] BYREF
  int32_t v238; // [xsp+Ch] [xbp-74h] BYREF
  int32_t v239; // [xsp+10h] [xbp-70h] BYREF
  int32_t v240; // [xsp+14h] [xbp-6Ch] BYREF
  int v241; // [xsp+18h] [xbp-68h] BYREF
  int32_t eventId; // [xsp+1Ch] [xbp-64h] BYREF

  v5 = item;
  if ( (byte_4B3B305 & 1) == 0 )
  {
    sub_1BD3458(&BalanceConfig_TypeInfo, item);
    sub_1BD3458(&EventRankingListViewItemDraw_TypeInfo, v7);
    sub_1BD3458(&EventRankingListViewManager_TypeInfo, v8);
    sub_1BD3458(&EventRewardRootComponent_TypeInfo, v9);
    sub_1BD3458(&int_TypeInfo, v10);
    sub_1BD3458(&LocalizationManager_TypeInfo, v11);
    sub_1BD3458(&object___TypeInfo, v12);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v13);
    sub_1BD3458(&StringLiteral_16309/*"_"*/, v14);
    byte_4B3B305 = 1;
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
  rewardGetObj = sub_1BD3500(object___TypeInfo, 4LL);
  v24 = (System_Object_array *)rewardGetObj;
  v25 = EventRankingListViewItemDraw_TypeInfo;
  if ( !EventRankingListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRankingListViewItemDraw_TypeInfo);
    v25 = EventRankingListViewItemDraw_TypeInfo;
  }
  if ( !v24 )
    goto LABEL_144;
  BOARD_IMAGE_NAME = (int64_t)v25->static_fields->BOARD_IMAGE_NAME;
  if ( BOARD_IMAGE_NAME )
  {
    rewardGetObj = sub_1BD3594(BOARD_IMAGE_NAME, v24->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( !v24->max_length )
    goto LABEL_145;
  v24->m_Items[0] = (Il2CppObject *)BOARD_IMAGE_NAME;
  sub_1BD33FC((PartyOrganizationUtility_o *)v24->m_Items, BOARD_IMAGE_NAME, v18, v19, v20, v21, v22, v23);
  itemInfo = v5->fields.itemInfo;
  if ( !itemInfo )
    goto LABEL_144;
  eventId = itemInfo->fields.eventId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &eventId, v27, v28, v29);
  v37 = rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1BD3594(rewardGetObj, v24->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( v24->max_length <= 1 )
    goto LABEL_145;
  v24->m_Items[1] = (Il2CppObject *)v37;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v24->m_Items[1], v37, v31, v32, v33, v34, v35, v36);
  rewardGetObj = StringLiteral_16309/*"_"*/;
  if ( StringLiteral_16309/*"_"*/ )
  {
    rewardGetObj = sub_1BD3594(StringLiteral_16309/*"_"*/, v24->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
    item = (EventRankingListViewItem_o *)StringLiteral_16309/*"_"*/;
  }
  else
  {
    item = 0LL;
  }
  if ( v24->max_length <= 2 )
    goto LABEL_145;
  v24->m_Items[2] = (Il2CppObject *)item;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v24->m_Items[2], (int64_t)item, v38, v39, v40, v41, v42, v43);
  v241 = ranking;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v241, v44, v45, v46);
  v53 = rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1BD3594(rewardGetObj, v24->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( v24->max_length <= 3 )
    goto LABEL_145;
  v24->m_Items[3] = (Il2CppObject *)v53;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v24->m_Items[3], v53, v47, v48, v49, v50, v51, v52);
  v54 = System_String__Concat_62536700(v24, 0LL);
  if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
  EventRewardRootComponent__setRewardInfoImg(baseSprite, v54, 0LL);
  rankingSprite = this->fields.rankingSprite;
  rewardGetObj = sub_1BD3500(object___TypeInfo, 4LL);
  if ( !rewardGetObj )
    goto LABEL_144;
  v62 = (System_Object_array *)rewardGetObj;
  RANKING_IMAGE_NAME = EventRankingListViewItemDraw_TypeInfo->static_fields->RANKING_IMAGE_NAME;
  if ( RANKING_IMAGE_NAME )
  {
    rewardGetObj = sub_1BD3594(RANKING_IMAGE_NAME, *(_QWORD *)(*(_QWORD *)rewardGetObj + 64LL));
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( !v62->max_length )
    goto LABEL_145;
  v62->m_Items[0] = (Il2CppObject *)RANKING_IMAGE_NAME;
  sub_1BD33FC((PartyOrganizationUtility_o *)v62->m_Items, (int64_t)RANKING_IMAGE_NAME, v56, v57, v58, v59, v60, v61);
  v67 = v5->fields.itemInfo;
  if ( !v67 )
    goto LABEL_144;
  v240 = v67->fields.eventId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v240, v64, v65, v66);
  v74 = rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1BD3594(rewardGetObj, v62->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( v62->max_length <= 1 )
    goto LABEL_145;
  v62->m_Items[1] = (Il2CppObject *)v74;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v62->m_Items[1], v74, v68, v69, v70, v71, v72, v73);
  rewardGetObj = StringLiteral_16309/*"_"*/;
  if ( StringLiteral_16309/*"_"*/ )
  {
    rewardGetObj = sub_1BD3594(StringLiteral_16309/*"_"*/, v62->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
    item = (EventRankingListViewItem_o *)StringLiteral_16309/*"_"*/;
  }
  else
  {
    item = 0LL;
  }
  if ( v62->max_length <= 2 )
    goto LABEL_145;
  v62->m_Items[2] = (Il2CppObject *)item;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v62->m_Items[2], (int64_t)item, v75, v76, v77, v78, v79, v80);
  v239 = v5->fields.ranking;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v239, v81, v82, v83);
  v90 = rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1BD3594(rewardGetObj, v62->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( v62->max_length <= 3 )
    goto LABEL_145;
  v62->m_Items[3] = (Il2CppObject *)v90;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v62->m_Items[3], v90, v84, v85, v86, v87, v88, v89);
  v91 = System_String__Concat_62536700(v62, 0LL);
  EventRewardRootComponent__setRewardInfoImg(rankingSprite, v91, 0LL);
  teamSprite = this->fields.teamSprite;
  rewardGetObj = sub_1BD3500(object___TypeInfo, 4LL);
  if ( !rewardGetObj )
    goto LABEL_144;
  v99 = (System_Object_array *)rewardGetObj;
  GROUP_IMAGE_NAME = EventRankingListViewItemDraw_TypeInfo->static_fields->GROUP_IMAGE_NAME;
  if ( GROUP_IMAGE_NAME )
  {
    rewardGetObj = sub_1BD3594(GROUP_IMAGE_NAME, *(_QWORD *)(*(_QWORD *)rewardGetObj + 64LL));
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( !v99->max_length )
    goto LABEL_145;
  v99->m_Items[0] = (Il2CppObject *)GROUP_IMAGE_NAME;
  sub_1BD33FC((PartyOrganizationUtility_o *)v99->m_Items, (int64_t)GROUP_IMAGE_NAME, v93, v94, v95, v96, v97, v98);
  v104 = v5->fields.itemInfo;
  if ( !v104 )
    goto LABEL_144;
  v238 = v104->fields.eventId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v238, v101, v102, v103);
  v111 = rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1BD3594(rewardGetObj, v99->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( v99->max_length <= 1 )
    goto LABEL_145;
  v99->m_Items[1] = (Il2CppObject *)v111;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v99->m_Items[1], v111, v105, v106, v107, v108, v109, v110);
  rewardGetObj = StringLiteral_16309/*"_"*/;
  if ( StringLiteral_16309/*"_"*/ )
  {
    rewardGetObj = sub_1BD3594(StringLiteral_16309/*"_"*/, v99->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
    item = (EventRankingListViewItem_o *)StringLiteral_16309/*"_"*/;
  }
  else
  {
    item = 0LL;
  }
  if ( v99->max_length <= 2 )
    goto LABEL_145;
  v99->m_Items[2] = (Il2CppObject *)item;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v99->m_Items[2], (int64_t)item, v112, v113, v114, v115, v116, v117);
  groupImageId = v5->fields.groupImageId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &groupImageId, v118, v119, v120);
  v127 = rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1BD3594(rewardGetObj, v99->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( v99->max_length <= 3 )
    goto LABEL_145;
  v99->m_Items[3] = (Il2CppObject *)v127;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v99->m_Items[3], v127, v121, v122, v123, v124, v125, v126);
  v128 = System_String__Concat_62536700(v99, 0LL);
  EventRewardRootComponent__setRewardInfoImg(teamSprite, v128, 0LL);
  teamNameSprite = this->fields.teamNameSprite;
  rewardGetObj = sub_1BD3500(object___TypeInfo, 4LL);
  if ( !rewardGetObj )
    goto LABEL_144;
  v136 = (System_Object_array *)rewardGetObj;
  GROUP_NAME_IMAGE_NAME = EventRankingListViewItemDraw_TypeInfo->static_fields->GROUP_NAME_IMAGE_NAME;
  if ( GROUP_NAME_IMAGE_NAME )
  {
    rewardGetObj = sub_1BD3594(GROUP_NAME_IMAGE_NAME, *(_QWORD *)(*(_QWORD *)rewardGetObj + 64LL));
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( !v136->max_length )
    goto LABEL_145;
  v136->m_Items[0] = (Il2CppObject *)GROUP_NAME_IMAGE_NAME;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)v136->m_Items,
    (int64_t)GROUP_NAME_IMAGE_NAME,
    v130,
    v131,
    v132,
    v133,
    v134,
    v135);
  v141 = v5->fields.itemInfo;
  if ( !v141 )
    goto LABEL_144;
  v236 = v141->fields.eventId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v236, v138, v139, v140);
  v148 = rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1BD3594(rewardGetObj, v136->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( v136->max_length <= 1 )
    goto LABEL_145;
  v136->m_Items[1] = (Il2CppObject *)v148;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v136->m_Items[1], v148, v142, v143, v144, v145, v146, v147);
  rewardGetObj = StringLiteral_16309/*"_"*/;
  if ( StringLiteral_16309/*"_"*/ )
  {
    rewardGetObj = sub_1BD3594(StringLiteral_16309/*"_"*/, v136->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
    item = (EventRankingListViewItem_o *)StringLiteral_16309/*"_"*/;
  }
  else
  {
    item = 0LL;
  }
  if ( v136->max_length <= 2 )
    goto LABEL_145;
  v136->m_Items[2] = (Il2CppObject *)item;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v136->m_Items[2], (int64_t)item, v149, v150, v151, v152, v153, v154);
  v158 = v5->fields.itemInfo;
  if ( !v158 )
    goto LABEL_144;
  groupId = v158->fields.groupId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &groupId, v155, v156, v157);
  v165 = rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1BD3594(rewardGetObj, v136->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( v136->max_length <= 3 )
    goto LABEL_145;
  v136->m_Items[3] = (Il2CppObject *)v165;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v136->m_Items[3], v165, v159, v160, v161, v162, v163, v164);
  v166 = System_String__Concat_62536700(v136, 0LL);
  EventRewardRootComponent__setRewardInfoImg(teamNameSprite, v166, 0LL);
  rewardGetObj = EventRewardRootComponent__setRewardInfoImg(
                   this->fields.supportTxtSprite,
                   EventRankingListViewItemDraw_TypeInfo->static_fields->SUPPORT_TXT_IMAGE_NAME,
                   0LL);
  v167 = v5->fields.itemInfo;
  if ( !v167 )
    goto LABEL_144;
  supportInfoLabel = this->fields.supportInfoLabel;
  supportPoint = v167->fields.supportPoint;
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
      v176 = EventRankingListViewItemDraw_TypeInfo;
      goalSprite = this->fields.goalSprite;
      if ( !EventRankingListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRankingListViewItemDraw_TypeInfo);
        v176 = EventRankingListViewItemDraw_TypeInfo;
      }
      GOAL_IMAGE_NAME = v176->static_fields->GOAL_IMAGE_NAME;
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
      rewardGetObj = sub_1BD3500(object___TypeInfo, 4LL);
      v186 = EventRankingListViewItemDraw_TypeInfo;
      v187 = (System_Object_array *)rewardGetObj;
      if ( !EventRankingListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRankingListViewItemDraw_TypeInfo);
        v186 = EventRankingListViewItemDraw_TypeInfo;
      }
      if ( !v187 )
        goto LABEL_144;
      REWARD_GET_IMAGE_NAME = (int64_t)v186->static_fields->REWARD_GET_IMAGE_NAME;
      if ( !REWARD_GET_IMAGE_NAME
        || (rewardGetObj = sub_1BD3594(REWARD_GET_IMAGE_NAME, v187->obj.klass->_1.element_class)) != 0 )
      {
        if ( !v187->max_length )
          goto LABEL_145;
        v187->m_Items[0] = (Il2CppObject *)REWARD_GET_IMAGE_NAME;
        sub_1BD33FC(
          (PartyOrganizationUtility_o *)v187->m_Items,
          REWARD_GET_IMAGE_NAME,
          v180,
          v181,
          v182,
          v183,
          v184,
          v185);
        v192 = v5->fields.itemInfo;
        if ( !v192 )
          goto LABEL_144;
        eventId = v192->fields.eventId;
        rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &eventId, v189, v190, v191);
        v199 = rewardGetObj;
        if ( !rewardGetObj || (rewardGetObj = sub_1BD3594(rewardGetObj, v187->obj.klass->_1.element_class)) != 0 )
        {
          if ( v187->max_length <= 1 )
            goto LABEL_145;
          v187->m_Items[1] = (Il2CppObject *)v199;
          sub_1BD33FC((PartyOrganizationUtility_o *)&v187->m_Items[1], v199, v193, v194, v195, v196, v197, v198);
          rewardGetObj = StringLiteral_16309/*"_"*/;
          if ( StringLiteral_16309/*"_"*/ )
          {
            rewardGetObj = sub_1BD3594(StringLiteral_16309/*"_"*/, v187->obj.klass->_1.element_class);
            if ( !rewardGetObj )
              goto LABEL_146;
            item = (EventRankingListViewItem_o *)StringLiteral_16309/*"_"*/;
          }
          else
          {
            item = 0LL;
          }
          if ( v187->max_length <= 2 )
            goto LABEL_145;
          v187->m_Items[2] = (Il2CppObject *)item;
          sub_1BD33FC(
            (PartyOrganizationUtility_o *)&v187->m_Items[2],
            (int64_t)item,
            v200,
            v201,
            v202,
            v203,
            v204,
            v205);
          v241 = ranking;
          rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v241, v206, v207, v208);
          v215 = rewardGetObj;
          if ( !rewardGetObj || (rewardGetObj = sub_1BD3594(rewardGetObj, v187->obj.klass->_1.element_class)) != 0 )
          {
            if ( v187->max_length <= 3 )
              goto LABEL_145;
            v187->m_Items[3] = (Il2CppObject *)v215;
            sub_1BD33FC((PartyOrganizationUtility_o *)&v187->m_Items[3], v215, v209, v210, v211, v212, v213, v214);
            v216 = System_String__Concat_62536700(v187, 0LL);
            if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
            EventRewardRootComponent__setRewardInfoImg(rewardGetSprite, v216, 0LL);
            rewardGetObj = (__int64)this->fields.rewardGetSprite;
            if ( !rewardGetObj )
              goto LABEL_144;
            rewardGetObj = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rewardGetObj, 0LL);
            if ( !rewardGetObj )
              goto LABEL_144;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rewardGetObj, 1, 0LL);
            v217 = v5->fields.ranking;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            rewardGetObj = (__int64)this->fields.rewardGetObj;
            if ( !rewardGetObj )
              goto LABEL_144;
            UnityEngine_GameObject__SetActive(
              (UnityEngine_GameObject_o *)rewardGetObj,
              v217 <= BalanceConfig_TypeInfo->static_fields->raceRewardRankMax,
              0LL);
            goto LABEL_122;
          }
        }
      }
LABEL_146:
      v231 = sub_1BD36D8(rewardGetObj);
      sub_1BD3580(v231, 0LL);
    }
  }
LABEL_122:
  giftEntityList = v5->fields.giftEntityList;
  this->fields.giftEntityList = giftEntityList;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.giftEntityList,
    (int64_t)giftEntityList,
    v170,
    v171,
    v172,
    v173,
    v174,
    v175);
  v219 = v5->fields.giftEntityList;
  if ( !v219 )
    goto LABEL_144;
  max_length = v219->max_length;
  this->fields.isMultipleReward = max_length > 1;
  if ( max_length < 2 )
  {
    v228 = this->fields.giftEntityList;
    if ( !v228 )
      goto LABEL_144;
    if ( v228->max_length )
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
    v223 = this->fields.listViewObject;
    if ( !v223 )
      goto LABEL_144;
    v224 = this->fields.giftEntityList;
    if ( !v224 )
      goto LABEL_144;
    rewardGetObj = (__int64)v223->fields.manager;
    if ( !rewardGetObj )
      goto LABEL_144;
    item = (EventRankingListViewItem_o *)EventRankingListViewManager_TypeInfo;
    methodPtr_low = LOBYTE(EventRankingListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)rewardGetObj + 304LL) < (unsigned int)methodPtr_low
      || *(EventRankingListViewManager_c **)(*(_QWORD *)(*(_QWORD *)rewardGetObj + 200LL) + 8 * methodPtr_low - 8) != EventRankingListViewManager_TypeInfo )
    {
      sub_1BD3974(rewardGetObj);
      EventRankingListViewManager__GetAlphaAnimCnt(v232, v233, v234);
      return;
    }
    v226 = v224->max_length;
    v227 = *(_DWORD *)(rewardGetObj + 340) % (int)v226;
    if ( v227 < v226 )
    {
      v228 = (struct GiftEntity_array *)((char *)v224 + 8 * v227);
LABEL_137:
      v229 = (int32_t *)v228->m_Items[0];
      if ( v229 )
      {
        rewardGetObj = (__int64)this->fields.itemIcon;
        if ( rewardGetObj )
        {
          if ( v229[7] <= 1 )
            v230 = -1;
          else
            v230 = v229[7];
          ItemIconComponent__SetGift_38924152((ItemIconComponent_o *)rewardGetObj, v229[5], v229[6], v230, 0, 0LL);
          return;
        }
      }
LABEL_144:
      sub_1BD36B4(rewardGetObj, item);
    }
LABEL_145:
    sub_1BD36BC(rewardGetObj, item);
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
  sub_1BD33FC(
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
      sub_1BD36B4(0LL, method);
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
      sub_1BD36B4(this, item);
    EventRankingListViewItemDraw__SetRewardIconAlpha(this, manager->fields.alphaAnimNow, (const MethodInfo *)item);
  }
}