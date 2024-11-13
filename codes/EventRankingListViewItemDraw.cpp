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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  int64_t v24; // x1
  struct EventRankingListViewItemDraw_StaticFields *static_fields; // x0
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
  int64_t v72; // x1
  struct EventRankingListViewItemDraw_StaticFields *v73; // x0
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7

  if ( (byte_4B1A308 & 1) == 0 )
  {
    sub_1BCA7E0(&EventRankingListViewItemDraw_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_19433/*"event_ranking_"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_19391/*"event_goal_flag"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_19437/*"event_ranking_rewardget_"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_19436/*"event_ranking_reward_txt"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_19435/*"event_ranking_group_name_"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_19434/*"event_ranking_group_"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_19470/*"event_support_txt"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_19450/*"event_rewardranking_"*/, v22, v23);
    byte_4B1A308 = 1;
  }
  EventRankingListViewItemDraw_TypeInfo->static_fields->GROUP_IMAGE_NAME = (struct System_String_o *)StringLiteral_19434/*"event_ranking_group_"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventRankingListViewItemDraw_TypeInfo->static_fields,
    StringLiteral_19434/*"event_ranking_group_"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v24 = StringLiteral_19435/*"event_ranking_group_name_"*/;
  static_fields = EventRankingListViewItemDraw_TypeInfo->static_fields;
  static_fields->GROUP_NAME_IMAGE_NAME = (struct System_String_o *)StringLiteral_19435/*"event_ranking_group_name_"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->GROUP_NAME_IMAGE_NAME, v24, v26, v27, v28, v29, v30, v31);
  v32 = StringLiteral_19450/*"event_rewardranking_"*/;
  v33 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v33->BOARD_IMAGE_NAME = (struct System_String_o *)StringLiteral_19450/*"event_rewardranking_"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v33->BOARD_IMAGE_NAME, v32, v34, v35, v36, v37, v38, v39);
  v40 = StringLiteral_19437/*"event_ranking_rewardget_"*/;
  v41 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v41->REWARD_GET_IMAGE_NAME = (struct System_String_o *)StringLiteral_19437/*"event_ranking_rewardget_"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v41->REWARD_GET_IMAGE_NAME, v40, v42, v43, v44, v45, v46, v47);
  v48 = StringLiteral_19433/*"event_ranking_"*/;
  v49 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v49->RANKING_IMAGE_NAME = (struct System_String_o *)StringLiteral_19433/*"event_ranking_"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v49->RANKING_IMAGE_NAME, v48, v50, v51, v52, v53, v54, v55);
  v56 = StringLiteral_19391/*"event_goal_flag"*/;
  v57 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v57->GOAL_IMAGE_NAME = (struct System_String_o *)StringLiteral_19391/*"event_goal_flag"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v57->GOAL_IMAGE_NAME, v56, v58, v59, v60, v61, v62, v63);
  v64 = StringLiteral_19436/*"event_ranking_reward_txt"*/;
  v65 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v65->HIGHER_REWARD_IMAGE_NAME = (struct System_String_o *)StringLiteral_19436/*"event_ranking_reward_txt"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v65->HIGHER_REWARD_IMAGE_NAME, v64, v66, v67, v68, v69, v70, v71);
  v72 = StringLiteral_19470/*"event_support_txt"*/;
  v73 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v73->SUPPORT_TXT_IMAGE_NAME = (struct System_String_o *)StringLiteral_19470/*"event_support_txt"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v73->SUPPORT_TXT_IMAGE_NAME, v72, v74, v75, v76, v77, v78, v79);
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
      sub_1BCAA44(this, manager);
    v6 = (int32_t *)giftEntityList->m_Items[v5];
    if ( !v6 || (this = (EventRankingListViewItemDraw_o *)this->fields.itemIcon) == 0LL )
LABEL_12:
      sub_1BCAA3C(this, manager);
    if ( v6[7] <= 1 )
      v7 = -1;
    else
      v7 = v6[7];
    ItemIconComponent__SetGift_38855180((ItemIconComponent_o *)this, v6[5], v6[6], v7, 0, 0LL);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRankingListViewItemDraw__SetItem(
        EventRankingListViewItemDraw_o *this,
        EventRankingListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  EventRankingListViewItem_o *v5; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 rewardGetObj; // x0
  UISprite_o *baseSprite; // x21
  int ranking; // w24
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  System_Object_array *v32; // x22
  EventRankingListViewItemDraw_c *v33; // x8
  int64_t BOARD_IMAGE_NAME; // x23
  struct EventRankingRoundItemInfo_o *itemInfo; // x8
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t v42; // x23
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  int64_t v55; // x23
  __int64 v56; // x1
  System_String_o *v57; // x22
  UISprite_o *rankingSprite; // x21
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  System_Object_array *v65; // x22
  struct System_String_o *RANKING_IMAGE_NAME; // x23
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
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  int64_t v87; // x23
  System_String_o *v88; // x0
  UISprite_o *teamSprite; // x21
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  System_Object_array *v96; // x22
  struct System_String_o *GROUP_IMAGE_NAME; // x23
  struct EventRankingRoundItemInfo_o *v98; // x8
  int64_t v99; // x2
  int32_t v100; // w3
  System_String_o *v101; // x4
  BattleSetupInfo_o *v102; // x5
  FollowerInfo_o *v103; // x6
  PartyListViewItem_o *v104; // x7
  int64_t v105; // x23
  int64_t v106; // x2
  int32_t v107; // w3
  System_String_o *v108; // x4
  BattleSetupInfo_o *v109; // x5
  FollowerInfo_o *v110; // x6
  PartyListViewItem_o *v111; // x7
  int64_t v112; // x2
  int32_t v113; // w3
  System_String_o *v114; // x4
  BattleSetupInfo_o *v115; // x5
  FollowerInfo_o *v116; // x6
  PartyListViewItem_o *v117; // x7
  int64_t v118; // x23
  System_String_o *v119; // x0
  UISprite_o *teamNameSprite; // x21
  int64_t v121; // x2
  int32_t v122; // w3
  System_String_o *v123; // x4
  BattleSetupInfo_o *v124; // x5
  FollowerInfo_o *v125; // x6
  PartyListViewItem_o *v126; // x7
  System_Object_array *v127; // x22
  struct System_String_o *GROUP_NAME_IMAGE_NAME; // x23
  struct EventRankingRoundItemInfo_o *v129; // x8
  int64_t v130; // x2
  int32_t v131; // w3
  System_String_o *v132; // x4
  BattleSetupInfo_o *v133; // x5
  FollowerInfo_o *v134; // x6
  PartyListViewItem_o *v135; // x7
  int64_t v136; // x23
  int64_t v137; // x2
  int32_t v138; // w3
  System_String_o *v139; // x4
  BattleSetupInfo_o *v140; // x5
  FollowerInfo_o *v141; // x6
  PartyListViewItem_o *v142; // x7
  struct EventRankingRoundItemInfo_o *v143; // x8
  int64_t v144; // x2
  int32_t v145; // w3
  System_String_o *v146; // x4
  BattleSetupInfo_o *v147; // x5
  FollowerInfo_o *v148; // x6
  PartyListViewItem_o *v149; // x7
  int64_t v150; // x23
  System_String_o *v151; // x0
  struct EventRankingRoundItemInfo_o *v152; // x8
  UILabel_o *supportInfoLabel; // x21
  int64_t supportPoint; // x22
  __int64 v155; // x1
  int64_t v156; // x2
  int32_t v157; // w3
  System_String_o *v158; // x4
  BattleSetupInfo_o *v159; // x5
  FollowerInfo_o *v160; // x6
  PartyListViewItem_o *v161; // x7
  EventRankingListViewItemDraw_c *v162; // x0
  UISprite_o *goalSprite; // x21
  System_String_o *GOAL_IMAGE_NAME; // x22
  UISprite_o *rewardGetSprite; // x21
  int64_t v166; // x2
  int32_t v167; // w3
  System_String_o *v168; // x4
  BattleSetupInfo_o *v169; // x5
  FollowerInfo_o *v170; // x6
  PartyListViewItem_o *v171; // x7
  EventRankingListViewItemDraw_c *v172; // x8
  System_Object_array *v173; // x22
  int64_t REWARD_GET_IMAGE_NAME; // x23
  struct EventRankingRoundItemInfo_o *v175; // x8
  int64_t v176; // x2
  int32_t v177; // w3
  System_String_o *v178; // x4
  BattleSetupInfo_o *v179; // x5
  FollowerInfo_o *v180; // x6
  PartyListViewItem_o *v181; // x7
  int64_t v182; // x23
  int64_t v183; // x2
  int32_t v184; // w3
  System_String_o *v185; // x4
  BattleSetupInfo_o *v186; // x5
  FollowerInfo_o *v187; // x6
  PartyListViewItem_o *v188; // x7
  int64_t v189; // x2
  int32_t v190; // w3
  System_String_o *v191; // x4
  BattleSetupInfo_o *v192; // x5
  FollowerInfo_o *v193; // x6
  PartyListViewItem_o *v194; // x7
  int64_t v195; // x23
  __int64 v196; // x1
  System_String_o *v197; // x22
  int32_t v198; // w21
  struct GiftEntity_array *giftEntityList; // x1
  struct GiftEntity_array *v200; // x8
  int max_length; // w8
  struct EventRankingListViewObject_o *listViewObject; // x8
  UnityEngine_Object_o *manager; // x20
  struct EventRankingListViewObject_o *v204; // x9
  struct GiftEntity_array *v205; // x8
  __int64 methodPtr_low; // x10
  il2cpp_array_size_t v207; // w10
  int v208; // w9
  struct GiftEntity_array *v209; // x8
  int32_t *v210; // x8
  int32_t v211; // w3
  __int64 v212; // x0
  EventRankingListViewManager_o *v213; // x0
  int32_t v214; // w1
  const MethodInfo *v215; // x2
  int32_t groupId; // [xsp+0h] [xbp-80h] BYREF
  int32_t v217; // [xsp+4h] [xbp-7Ch] BYREF
  int32_t groupImageId; // [xsp+8h] [xbp-78h] BYREF
  int32_t v219; // [xsp+Ch] [xbp-74h] BYREF
  int32_t v220; // [xsp+10h] [xbp-70h] BYREF
  int32_t v221; // [xsp+14h] [xbp-6Ch] BYREF
  int v222; // [xsp+18h] [xbp-68h] BYREF
  int32_t eventId; // [xsp+1Ch] [xbp-64h] BYREF

  v5 = item;
  if ( (byte_4B1A307 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, item, *(_QWORD *)&mode);
    sub_1BCA7E0(&EventRankingListViewItemDraw_TypeInfo, v7, v8);
    sub_1BCA7E0(&EventRankingListViewManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&EventRewardRootComponent_TypeInfo, v11, v12);
    sub_1BCA7E0(&int_TypeInfo, v13, v14);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&object___TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    sub_1BCA7E0(&StringLiteral_16290/*"_"*/, v21, v22);
    byte_4B1A307 = 1;
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
  rewardGetObj = sub_1BCA888(object___TypeInfo, 4LL);
  v32 = (System_Object_array *)rewardGetObj;
  v33 = EventRankingListViewItemDraw_TypeInfo;
  if ( !EventRankingListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRankingListViewItemDraw_TypeInfo, item);
    v33 = EventRankingListViewItemDraw_TypeInfo;
  }
  if ( !v32 )
    goto LABEL_144;
  BOARD_IMAGE_NAME = (int64_t)v33->static_fields->BOARD_IMAGE_NAME;
  if ( BOARD_IMAGE_NAME )
  {
    rewardGetObj = sub_1BCA91C(BOARD_IMAGE_NAME, v32->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( !v32->max_length )
    goto LABEL_145;
  v32->m_Items[0] = (Il2CppObject *)BOARD_IMAGE_NAME;
  sub_1BCA784((PartyOrganizationUtility_o *)v32->m_Items, BOARD_IMAGE_NAME, v26, v27, v28, v29, v30, v31);
  itemInfo = v5->fields.itemInfo;
  if ( !itemInfo )
    goto LABEL_144;
  eventId = itemInfo->fields.eventId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &eventId);
  v42 = rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1BCA91C(rewardGetObj, v32->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( v32->max_length <= 1 )
    goto LABEL_145;
  v32->m_Items[1] = (Il2CppObject *)v42;
  sub_1BCA784((PartyOrganizationUtility_o *)&v32->m_Items[1], v42, v36, v37, v38, v39, v40, v41);
  rewardGetObj = StringLiteral_16290/*"_"*/;
  if ( StringLiteral_16290/*"_"*/ )
  {
    rewardGetObj = sub_1BCA91C(StringLiteral_16290/*"_"*/, v32->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
    item = (EventRankingListViewItem_o *)StringLiteral_16290/*"_"*/;
  }
  else
  {
    item = 0LL;
  }
  if ( v32->max_length <= 2 )
    goto LABEL_145;
  v32->m_Items[2] = (Il2CppObject *)item;
  sub_1BCA784((PartyOrganizationUtility_o *)&v32->m_Items[2], (int64_t)item, v43, v44, v45, v46, v47, v48);
  v222 = ranking;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v222);
  v55 = rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1BCA91C(rewardGetObj, v32->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( v32->max_length <= 3 )
    goto LABEL_145;
  v32->m_Items[3] = (Il2CppObject *)v55;
  sub_1BCA784((PartyOrganizationUtility_o *)&v32->m_Items[3], v55, v49, v50, v51, v52, v53, v54);
  v57 = System_String__Concat_62412672(v32, 0LL);
  if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo, v56);
  EventRewardRootComponent__setRewardInfoImg(baseSprite, v57, 0LL);
  rankingSprite = this->fields.rankingSprite;
  rewardGetObj = sub_1BCA888(object___TypeInfo, 4LL);
  if ( !rewardGetObj )
    goto LABEL_144;
  v65 = (System_Object_array *)rewardGetObj;
  RANKING_IMAGE_NAME = EventRankingListViewItemDraw_TypeInfo->static_fields->RANKING_IMAGE_NAME;
  if ( RANKING_IMAGE_NAME )
  {
    rewardGetObj = sub_1BCA91C(RANKING_IMAGE_NAME, *(_QWORD *)(*(_QWORD *)rewardGetObj + 64LL));
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( !v65->max_length )
    goto LABEL_145;
  v65->m_Items[0] = (Il2CppObject *)RANKING_IMAGE_NAME;
  sub_1BCA784((PartyOrganizationUtility_o *)v65->m_Items, (int64_t)RANKING_IMAGE_NAME, v59, v60, v61, v62, v63, v64);
  v67 = v5->fields.itemInfo;
  if ( !v67 )
    goto LABEL_144;
  v221 = v67->fields.eventId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v221);
  v74 = rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1BCA91C(rewardGetObj, v65->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( v65->max_length <= 1 )
    goto LABEL_145;
  v65->m_Items[1] = (Il2CppObject *)v74;
  sub_1BCA784((PartyOrganizationUtility_o *)&v65->m_Items[1], v74, v68, v69, v70, v71, v72, v73);
  rewardGetObj = StringLiteral_16290/*"_"*/;
  if ( StringLiteral_16290/*"_"*/ )
  {
    rewardGetObj = sub_1BCA91C(StringLiteral_16290/*"_"*/, v65->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
    item = (EventRankingListViewItem_o *)StringLiteral_16290/*"_"*/;
  }
  else
  {
    item = 0LL;
  }
  if ( v65->max_length <= 2 )
    goto LABEL_145;
  v65->m_Items[2] = (Il2CppObject *)item;
  sub_1BCA784((PartyOrganizationUtility_o *)&v65->m_Items[2], (int64_t)item, v75, v76, v77, v78, v79, v80);
  v220 = v5->fields.ranking;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v220);
  v87 = rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1BCA91C(rewardGetObj, v65->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( v65->max_length <= 3 )
    goto LABEL_145;
  v65->m_Items[3] = (Il2CppObject *)v87;
  sub_1BCA784((PartyOrganizationUtility_o *)&v65->m_Items[3], v87, v81, v82, v83, v84, v85, v86);
  v88 = System_String__Concat_62412672(v65, 0LL);
  EventRewardRootComponent__setRewardInfoImg(rankingSprite, v88, 0LL);
  teamSprite = this->fields.teamSprite;
  rewardGetObj = sub_1BCA888(object___TypeInfo, 4LL);
  if ( !rewardGetObj )
    goto LABEL_144;
  v96 = (System_Object_array *)rewardGetObj;
  GROUP_IMAGE_NAME = EventRankingListViewItemDraw_TypeInfo->static_fields->GROUP_IMAGE_NAME;
  if ( GROUP_IMAGE_NAME )
  {
    rewardGetObj = sub_1BCA91C(GROUP_IMAGE_NAME, *(_QWORD *)(*(_QWORD *)rewardGetObj + 64LL));
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( !v96->max_length )
    goto LABEL_145;
  v96->m_Items[0] = (Il2CppObject *)GROUP_IMAGE_NAME;
  sub_1BCA784((PartyOrganizationUtility_o *)v96->m_Items, (int64_t)GROUP_IMAGE_NAME, v90, v91, v92, v93, v94, v95);
  v98 = v5->fields.itemInfo;
  if ( !v98 )
    goto LABEL_144;
  v219 = v98->fields.eventId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v219);
  v105 = rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1BCA91C(rewardGetObj, v96->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( v96->max_length <= 1 )
    goto LABEL_145;
  v96->m_Items[1] = (Il2CppObject *)v105;
  sub_1BCA784((PartyOrganizationUtility_o *)&v96->m_Items[1], v105, v99, v100, v101, v102, v103, v104);
  rewardGetObj = StringLiteral_16290/*"_"*/;
  if ( StringLiteral_16290/*"_"*/ )
  {
    rewardGetObj = sub_1BCA91C(StringLiteral_16290/*"_"*/, v96->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
    item = (EventRankingListViewItem_o *)StringLiteral_16290/*"_"*/;
  }
  else
  {
    item = 0LL;
  }
  if ( v96->max_length <= 2 )
    goto LABEL_145;
  v96->m_Items[2] = (Il2CppObject *)item;
  sub_1BCA784((PartyOrganizationUtility_o *)&v96->m_Items[2], (int64_t)item, v106, v107, v108, v109, v110, v111);
  groupImageId = v5->fields.groupImageId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &groupImageId);
  v118 = rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1BCA91C(rewardGetObj, v96->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( v96->max_length <= 3 )
    goto LABEL_145;
  v96->m_Items[3] = (Il2CppObject *)v118;
  sub_1BCA784((PartyOrganizationUtility_o *)&v96->m_Items[3], v118, v112, v113, v114, v115, v116, v117);
  v119 = System_String__Concat_62412672(v96, 0LL);
  EventRewardRootComponent__setRewardInfoImg(teamSprite, v119, 0LL);
  teamNameSprite = this->fields.teamNameSprite;
  rewardGetObj = sub_1BCA888(object___TypeInfo, 4LL);
  if ( !rewardGetObj )
    goto LABEL_144;
  v127 = (System_Object_array *)rewardGetObj;
  GROUP_NAME_IMAGE_NAME = EventRankingListViewItemDraw_TypeInfo->static_fields->GROUP_NAME_IMAGE_NAME;
  if ( GROUP_NAME_IMAGE_NAME )
  {
    rewardGetObj = sub_1BCA91C(GROUP_NAME_IMAGE_NAME, *(_QWORD *)(*(_QWORD *)rewardGetObj + 64LL));
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( !v127->max_length )
    goto LABEL_145;
  v127->m_Items[0] = (Il2CppObject *)GROUP_NAME_IMAGE_NAME;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)v127->m_Items,
    (int64_t)GROUP_NAME_IMAGE_NAME,
    v121,
    v122,
    v123,
    v124,
    v125,
    v126);
  v129 = v5->fields.itemInfo;
  if ( !v129 )
    goto LABEL_144;
  v217 = v129->fields.eventId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v217);
  v136 = rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1BCA91C(rewardGetObj, v127->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( v127->max_length <= 1 )
    goto LABEL_145;
  v127->m_Items[1] = (Il2CppObject *)v136;
  sub_1BCA784((PartyOrganizationUtility_o *)&v127->m_Items[1], v136, v130, v131, v132, v133, v134, v135);
  rewardGetObj = StringLiteral_16290/*"_"*/;
  if ( StringLiteral_16290/*"_"*/ )
  {
    rewardGetObj = sub_1BCA91C(StringLiteral_16290/*"_"*/, v127->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
    item = (EventRankingListViewItem_o *)StringLiteral_16290/*"_"*/;
  }
  else
  {
    item = 0LL;
  }
  if ( v127->max_length <= 2 )
    goto LABEL_145;
  v127->m_Items[2] = (Il2CppObject *)item;
  sub_1BCA784((PartyOrganizationUtility_o *)&v127->m_Items[2], (int64_t)item, v137, v138, v139, v140, v141, v142);
  v143 = v5->fields.itemInfo;
  if ( !v143 )
    goto LABEL_144;
  groupId = v143->fields.groupId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &groupId);
  v150 = rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1BCA91C(rewardGetObj, v127->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( v127->max_length <= 3 )
    goto LABEL_145;
  v127->m_Items[3] = (Il2CppObject *)v150;
  sub_1BCA784((PartyOrganizationUtility_o *)&v127->m_Items[3], v150, v144, v145, v146, v147, v148, v149);
  v151 = System_String__Concat_62412672(v127, 0LL);
  EventRewardRootComponent__setRewardInfoImg(teamNameSprite, v151, 0LL);
  rewardGetObj = EventRewardRootComponent__setRewardInfoImg(
                   this->fields.supportTxtSprite,
                   EventRankingListViewItemDraw_TypeInfo->static_fields->SUPPORT_TXT_IMAGE_NAME,
                   0LL);
  v152 = v5->fields.itemInfo;
  if ( !v152 )
    goto LABEL_144;
  supportInfoLabel = this->fields.supportInfoLabel;
  supportPoint = v152->fields.supportPoint;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
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
      v162 = EventRankingListViewItemDraw_TypeInfo;
      goalSprite = this->fields.goalSprite;
      if ( !EventRankingListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRankingListViewItemDraw_TypeInfo, v155);
        v162 = EventRankingListViewItemDraw_TypeInfo;
      }
      GOAL_IMAGE_NAME = v162->static_fields->GOAL_IMAGE_NAME;
      if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo, v155);
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
      rewardGetObj = sub_1BCA888(object___TypeInfo, 4LL);
      v172 = EventRankingListViewItemDraw_TypeInfo;
      v173 = (System_Object_array *)rewardGetObj;
      if ( !EventRankingListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRankingListViewItemDraw_TypeInfo, item);
        v172 = EventRankingListViewItemDraw_TypeInfo;
      }
      if ( !v173 )
        goto LABEL_144;
      REWARD_GET_IMAGE_NAME = (int64_t)v172->static_fields->REWARD_GET_IMAGE_NAME;
      if ( !REWARD_GET_IMAGE_NAME
        || (rewardGetObj = sub_1BCA91C(REWARD_GET_IMAGE_NAME, v173->obj.klass->_1.element_class)) != 0 )
      {
        if ( !v173->max_length )
          goto LABEL_145;
        v173->m_Items[0] = (Il2CppObject *)REWARD_GET_IMAGE_NAME;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)v173->m_Items,
          REWARD_GET_IMAGE_NAME,
          v166,
          v167,
          v168,
          v169,
          v170,
          v171);
        v175 = v5->fields.itemInfo;
        if ( !v175 )
          goto LABEL_144;
        eventId = v175->fields.eventId;
        rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &eventId);
        v182 = rewardGetObj;
        if ( !rewardGetObj || (rewardGetObj = sub_1BCA91C(rewardGetObj, v173->obj.klass->_1.element_class)) != 0 )
        {
          if ( v173->max_length <= 1 )
            goto LABEL_145;
          v173->m_Items[1] = (Il2CppObject *)v182;
          sub_1BCA784((PartyOrganizationUtility_o *)&v173->m_Items[1], v182, v176, v177, v178, v179, v180, v181);
          rewardGetObj = StringLiteral_16290/*"_"*/;
          if ( StringLiteral_16290/*"_"*/ )
          {
            rewardGetObj = sub_1BCA91C(StringLiteral_16290/*"_"*/, v173->obj.klass->_1.element_class);
            if ( !rewardGetObj )
              goto LABEL_146;
            item = (EventRankingListViewItem_o *)StringLiteral_16290/*"_"*/;
          }
          else
          {
            item = 0LL;
          }
          if ( v173->max_length <= 2 )
            goto LABEL_145;
          v173->m_Items[2] = (Il2CppObject *)item;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&v173->m_Items[2],
            (int64_t)item,
            v183,
            v184,
            v185,
            v186,
            v187,
            v188);
          v222 = ranking;
          rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v222);
          v195 = rewardGetObj;
          if ( !rewardGetObj || (rewardGetObj = sub_1BCA91C(rewardGetObj, v173->obj.klass->_1.element_class)) != 0 )
          {
            if ( v173->max_length <= 3 )
              goto LABEL_145;
            v173->m_Items[3] = (Il2CppObject *)v195;
            sub_1BCA784((PartyOrganizationUtility_o *)&v173->m_Items[3], v195, v189, v190, v191, v192, v193, v194);
            v197 = System_String__Concat_62412672(v173, 0LL);
            if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo, v196);
            EventRewardRootComponent__setRewardInfoImg(rewardGetSprite, v197, 0LL);
            rewardGetObj = (__int64)this->fields.rewardGetSprite;
            if ( !rewardGetObj )
              goto LABEL_144;
            rewardGetObj = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rewardGetObj, 0LL);
            if ( !rewardGetObj )
              goto LABEL_144;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rewardGetObj, 1, 0LL);
            v198 = v5->fields.ranking;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, item);
            rewardGetObj = (__int64)this->fields.rewardGetObj;
            if ( !rewardGetObj )
              goto LABEL_144;
            UnityEngine_GameObject__SetActive(
              (UnityEngine_GameObject_o *)rewardGetObj,
              v198 <= BalanceConfig_TypeInfo->static_fields->raceRewardRankMax,
              0LL);
            goto LABEL_122;
          }
        }
      }
LABEL_146:
      v212 = sub_1BCAA60(rewardGetObj);
      sub_1BCA908(v212, 0LL);
    }
  }
LABEL_122:
  giftEntityList = v5->fields.giftEntityList;
  this->fields.giftEntityList = giftEntityList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.giftEntityList,
    (int64_t)giftEntityList,
    v156,
    v157,
    v158,
    v159,
    v160,
    v161);
  v200 = v5->fields.giftEntityList;
  if ( !v200 )
    goto LABEL_144;
  max_length = v200->max_length;
  this->fields.isMultipleReward = max_length > 1;
  if ( max_length < 2 )
  {
    v209 = this->fields.giftEntityList;
    if ( !v209 )
      goto LABEL_144;
    if ( v209->max_length )
      goto LABEL_137;
    goto LABEL_145;
  }
  listViewObject = this->fields.listViewObject;
  if ( !listViewObject )
    goto LABEL_144;
  manager = (UnityEngine_Object_o *)listViewObject->fields.manager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
  rewardGetObj = UnityEngine_Object__op_Inequality(manager, 0LL, 0LL);
  if ( (rewardGetObj & 1) != 0 )
  {
    v204 = this->fields.listViewObject;
    if ( !v204 )
      goto LABEL_144;
    v205 = this->fields.giftEntityList;
    if ( !v205 )
      goto LABEL_144;
    rewardGetObj = (__int64)v204->fields.manager;
    if ( !rewardGetObj )
      goto LABEL_144;
    item = (EventRankingListViewItem_o *)EventRankingListViewManager_TypeInfo;
    methodPtr_low = LOBYTE(EventRankingListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)rewardGetObj + 304LL) < (unsigned int)methodPtr_low
      || *(EventRankingListViewManager_c **)(*(_QWORD *)(*(_QWORD *)rewardGetObj + 200LL) + 8 * methodPtr_low - 8) != EventRankingListViewManager_TypeInfo )
    {
      sub_1BCACFC(rewardGetObj);
      EventRankingListViewManager__GetAlphaAnimCnt(v213, v214, v215);
      return;
    }
    v207 = v205->max_length;
    v208 = *(_DWORD *)(rewardGetObj + 340) % (int)v207;
    if ( v208 < v207 )
    {
      v209 = (struct GiftEntity_array *)((char *)v205 + 8 * v208);
LABEL_137:
      v210 = (int32_t *)v209->m_Items[0];
      if ( v210 )
      {
        rewardGetObj = (__int64)this->fields.itemIcon;
        if ( rewardGetObj )
        {
          if ( v210[7] <= 1 )
            v211 = -1;
          else
            v211 = v210[7];
          ItemIconComponent__SetGift_38855180((ItemIconComponent_o *)rewardGetObj, v210[5], v210[6], v211, 0, 0LL);
          return;
        }
      }
LABEL_144:
      sub_1BCAA3C(rewardGetObj, item);
    }
LABEL_145:
    sub_1BCAA44(rewardGetObj, item);
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
  sub_1BCA784(
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
      sub_1BCAA3C(0LL, method);
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
      sub_1BCAA3C(this, item);
    EventRankingListViewItemDraw__SetRewardIconAlpha(this, manager->fields.alphaAnimNow, (const MethodInfo *)item);
  }
}