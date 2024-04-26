void __fastcall EventRankingListViewItemDraw___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  struct EventRankingListViewItemDraw_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct EventRankingListViewItemDraw_StaticFields *v17; // x0
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct EventRankingListViewItemDraw_StaticFields *v25; // x0
  System_Int32_array **v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct EventRankingListViewItemDraw_StaticFields *v33; // x0
  System_Int32_array **v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  struct EventRankingListViewItemDraw_StaticFields *v41; // x0
  System_Int32_array **v42; // x1
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  struct EventRankingListViewItemDraw_StaticFields *v49; // x0
  System_Int32_array **v50; // x1
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  struct EventRankingListViewItemDraw_StaticFields *v57; // x0
  System_Int32_array **v58; // x1
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7

  if ( (byte_4352614 & 1) == 0 )
  {
    sub_B70694(&EventRankingListViewItemDraw_TypeInfo);
    sub_B70694(&StringLiteral_18845/*"event_ranking_"*/);
    sub_B70694(&StringLiteral_18804/*"event_goal_flag"*/);
    sub_B70694(&StringLiteral_18849/*"event_ranking_rewardget_"*/);
    sub_B70694(&StringLiteral_18848/*"event_ranking_reward_txt"*/);
    sub_B70694(&StringLiteral_18847/*"event_ranking_group_name_"*/);
    sub_B70694(&StringLiteral_18846/*"event_ranking_group_"*/);
    sub_B70694(&StringLiteral_18882/*"event_support_txt"*/);
    sub_B70694(&StringLiteral_18862/*"event_rewardranking_"*/);
    byte_4352614 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventRankingListViewItemDraw_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_18846/*"event_ranking_group_"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18846/*"event_ranking_group_"*/;
  sub_B70630(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_18847/*"event_ranking_group_name_"*/;
  v9->GROUP_NAME_IMAGE_NAME = (struct System_String_o *)StringLiteral_18847/*"event_ranking_group_name_"*/;
  sub_B70630((BattleServantConfConponent_o *)&v9->GROUP_NAME_IMAGE_NAME, v10, v11, v12, v13, v14, v15, v16);
  v17 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_18862/*"event_rewardranking_"*/;
  v17->BOARD_IMAGE_NAME = (struct System_String_o *)StringLiteral_18862/*"event_rewardranking_"*/;
  sub_B70630((BattleServantConfConponent_o *)&v17->BOARD_IMAGE_NAME, v18, v19, v20, v21, v22, v23, v24);
  v25 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v26 = (System_Int32_array **)StringLiteral_18849/*"event_ranking_rewardget_"*/;
  v25->REWARD_GET_IMAGE_NAME = (struct System_String_o *)StringLiteral_18849/*"event_ranking_rewardget_"*/;
  sub_B70630((BattleServantConfConponent_o *)&v25->REWARD_GET_IMAGE_NAME, v26, v27, v28, v29, v30, v31, v32);
  v33 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v34 = (System_Int32_array **)StringLiteral_18845/*"event_ranking_"*/;
  v33->RANKING_IMAGE_NAME = (struct System_String_o *)StringLiteral_18845/*"event_ranking_"*/;
  sub_B70630((BattleServantConfConponent_o *)&v33->RANKING_IMAGE_NAME, v34, v35, v36, v37, v38, v39, v40);
  v41 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v42 = (System_Int32_array **)StringLiteral_18804/*"event_goal_flag"*/;
  v41->GOAL_IMAGE_NAME = (struct System_String_o *)StringLiteral_18804/*"event_goal_flag"*/;
  sub_B70630((BattleServantConfConponent_o *)&v41->GOAL_IMAGE_NAME, v42, v43, v44, v45, v46, v47, v48);
  v49 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v50 = (System_Int32_array **)StringLiteral_18848/*"event_ranking_reward_txt"*/;
  v49->HIGHER_REWARD_IMAGE_NAME = (struct System_String_o *)StringLiteral_18848/*"event_ranking_reward_txt"*/;
  sub_B70630((BattleServantConfConponent_o *)&v49->HIGHER_REWARD_IMAGE_NAME, v50, v51, v52, v53, v54, v55, v56);
  v57 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v58 = (System_Int32_array **)StringLiteral_18882/*"event_support_txt"*/;
  v57->SUPPORT_TXT_IMAGE_NAME = (struct System_String_o *)StringLiteral_18882/*"event_support_txt"*/;
  sub_B70630((BattleServantConfConponent_o *)&v57->SUPPORT_TXT_IMAGE_NAME, v58, v59, v60, v61, v62, v63, v64);
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
  __int64 v8; // x0

  if ( this->fields.isMultipleReward )
  {
    giftEntityList = this->fields.giftEntityList;
    if ( !giftEntityList || !manager )
      goto LABEL_12;
    max_length = giftEntityList->max_length;
    v5 = manager->fields.alphaAnimCnt % (int)max_length;
    if ( v5 >= max_length )
    {
      v8 = sub_B70798(this);
      sub_B70738(v8, 0LL);
    }
    v6 = (int32_t *)giftEntityList->m_Items[v5];
    if ( !v6 || (this = (EventRankingListViewItemDraw_o *)this->fields.itemIcon) == 0LL )
LABEL_12:
      sub_B7076C(this, manager);
    if ( v6[7] <= 1 )
      v7 = -1;
    else
      v7 = v6[7];
    ItemIconComponent__SetGift((ItemIconComponent_o *)this, v6[5], v6[6], v7, 0, 0LL);
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
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Object_array *v16; // x22
  EventRankingListViewItemDraw_c *v17; // x8
  System_Int32_array **BOARD_IMAGE_NAME; // x23
  __int64 v19; // x2
  struct EventRankingRoundItemInfo_o *itemInfo; // x8
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **v27; // x23
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **v34; // x1
  __int64 v35; // x2
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x23
  System_String_o *v43; // x22
  UISprite_o *rankingSprite; // x21
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Object_array *v51; // x22
  System_Int32_array **RANKING_IMAGE_NAME; // x23
  __int64 v53; // x2
  struct EventRankingRoundItemInfo_o *v54; // x8
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Int32_array **v61; // x23
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Int32_array **v68; // x1
  __int64 v69; // x2
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Int32_array **v76; // x23
  System_String_o *v77; // x0
  UISprite_o *teamSprite; // x21
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  System_Object_array *v85; // x22
  System_Int32_array **GROUP_IMAGE_NAME; // x23
  __int64 v87; // x2
  struct EventRankingRoundItemInfo_o *v88; // x8
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  System_Int32_array **v95; // x23
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  System_Int32_array **v102; // x1
  __int64 v103; // x2
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  System_Int32_array **v110; // x23
  System_String_o *v111; // x0
  UISprite_o *teamNameSprite; // x21
  System_String_array **v113; // x2
  System_String_array **v114; // x3
  System_Boolean_array **v115; // x4
  System_Int32_array **v116; // x5
  System_Int32_array *v117; // x6
  System_Int32_array *v118; // x7
  System_Object_array *v119; // x22
  System_Int32_array **GROUP_NAME_IMAGE_NAME; // x23
  __int64 v121; // x2
  struct EventRankingRoundItemInfo_o *v122; // x8
  System_String_array **v123; // x2
  System_String_array **v124; // x3
  System_Boolean_array **v125; // x4
  System_Int32_array **v126; // x5
  System_Int32_array *v127; // x6
  System_Int32_array *v128; // x7
  System_Int32_array **v129; // x23
  System_String_array **v130; // x2
  System_String_array **v131; // x3
  System_Boolean_array **v132; // x4
  System_Int32_array **v133; // x5
  System_Int32_array *v134; // x6
  System_Int32_array *v135; // x7
  System_Int32_array **v136; // x1
  __int64 v137; // x2
  struct EventRankingRoundItemInfo_o *v138; // x8
  System_String_array **v139; // x2
  System_String_array **v140; // x3
  System_Boolean_array **v141; // x4
  System_Int32_array **v142; // x5
  System_Int32_array *v143; // x6
  System_Int32_array *v144; // x7
  System_Int32_array **v145; // x23
  System_String_o *v146; // x0
  struct EventRankingRoundItemInfo_o *v147; // x8
  UILabel_o *supportInfoLabel; // x21
  int64_t supportPoint; // x22
  System_String_array **v150; // x2
  System_String_array **v151; // x3
  System_Boolean_array **v152; // x4
  System_Int32_array **v153; // x5
  System_Int32_array *v154; // x6
  System_Int32_array *v155; // x7
  EventRankingListViewItemDraw_c *v156; // x0
  UISprite_o *goalSprite; // x21
  System_String_o *GOAL_IMAGE_NAME; // x22
  UISprite_o *rewardGetSprite; // x21
  System_String_array **v160; // x2
  System_String_array **v161; // x3
  System_Boolean_array **v162; // x4
  System_Int32_array **v163; // x5
  System_Int32_array *v164; // x6
  System_Int32_array *v165; // x7
  EventRankingListViewItemDraw_c *v166; // x8
  System_Object_array *v167; // x22
  System_Int32_array **REWARD_GET_IMAGE_NAME; // x23
  __int64 v169; // x2
  struct EventRankingRoundItemInfo_o *v170; // x8
  System_String_array **v171; // x2
  System_String_array **v172; // x3
  System_Boolean_array **v173; // x4
  System_Int32_array **v174; // x5
  System_Int32_array *v175; // x6
  System_Int32_array *v176; // x7
  System_Int32_array **v177; // x23
  System_String_array **v178; // x2
  System_String_array **v179; // x3
  System_Boolean_array **v180; // x4
  System_Int32_array **v181; // x5
  System_Int32_array *v182; // x6
  System_Int32_array *v183; // x7
  System_Int32_array **v184; // x1
  __int64 v185; // x2
  System_String_array **v186; // x2
  System_String_array **v187; // x3
  System_Boolean_array **v188; // x4
  System_Int32_array **v189; // x5
  System_Int32_array *v190; // x6
  System_Int32_array *v191; // x7
  System_Int32_array **v192; // x23
  System_String_o *v193; // x22
  int32_t v194; // w21
  struct GiftEntity_array *giftEntityList; // x1
  struct GiftEntity_array *v196; // x8
  int max_length; // w8
  struct EventRankingListViewObject_o *listViewObject; // x8
  UnityEngine_Object_o *manager; // x20
  struct EventRankingListViewObject_o *v200; // x9
  struct GiftEntity_array *v201; // x8
  __int64 v202; // x10
  il2cpp_array_size_t v203; // w10
  int v204; // w9
  struct GiftEntity_array *v205; // x8
  int32_t *v206; // x8
  int32_t v207; // w3
  __int64 v208; // x0
  __int64 v209; // x0
  EventRankingListViewManager_o *v210; // x0
  int32_t v211; // w1
  const MethodInfo *v212; // x2
  int32_t groupId; // [xsp+0h] [xbp-70h] BYREF
  int32_t v214; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t groupImageId; // [xsp+8h] [xbp-68h] BYREF
  int32_t v216; // [xsp+Ch] [xbp-64h] BYREF
  int32_t v217; // [xsp+10h] [xbp-60h] BYREF
  int32_t v218; // [xsp+14h] [xbp-5Ch] BYREF
  int v219; // [xsp+18h] [xbp-58h] BYREF
  int32_t eventId; // [xsp+1Ch] [xbp-54h] BYREF

  v5 = item;
  if ( (byte_4352613 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&EventRankingListViewItemDraw_TypeInfo);
    sub_B70694(&EventRankingListViewManager_TypeInfo);
    sub_B70694(&EventRewardRootComponent_TypeInfo);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&object___TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_16127/*"_"*/);
    byte_4352613 = 1;
  }
  if ( !v5 || !mode )
    return;
  rewardGetObj = (__int64)this->fields.rewardGetObj;
  if ( !rewardGetObj )
    goto LABEL_153;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rewardGetObj, 0, 0LL);
  rewardGetObj = (__int64)this->fields.rewardGetSprite;
  if ( !rewardGetObj )
    goto LABEL_153;
  rewardGetObj = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rewardGetObj, 0LL);
  if ( !rewardGetObj )
    goto LABEL_153;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rewardGetObj, 0, 0LL);
  rewardGetObj = (__int64)this->fields.goalSprite;
  if ( !rewardGetObj )
    goto LABEL_153;
  rewardGetObj = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rewardGetObj, 0LL);
  if ( !rewardGetObj )
    goto LABEL_153;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rewardGetObj, 0, 0LL);
  baseSprite = this->fields.baseSprite;
  if ( v5->fields.ranking >= 4 )
    ranking = 4;
  else
    ranking = v5->fields.ranking;
  rewardGetObj = sub_B706AC(object___TypeInfo, 4LL);
  v16 = (System_Object_array *)rewardGetObj;
  v17 = EventRankingListViewItemDraw_TypeInfo;
  if ( (BYTE3(EventRankingListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRankingListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRankingListViewItemDraw_TypeInfo);
    v17 = EventRankingListViewItemDraw_TypeInfo;
  }
  if ( !v16 )
    goto LABEL_153;
  BOARD_IMAGE_NAME = (System_Int32_array **)v17->static_fields->BOARD_IMAGE_NAME;
  if ( BOARD_IMAGE_NAME )
  {
    rewardGetObj = sub_B70754(BOARD_IMAGE_NAME, v16->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_155;
  }
  if ( !v16->max_length )
    goto LABEL_154;
  v16->m_Items[0] = (Il2CppObject *)BOARD_IMAGE_NAME;
  sub_B70630((BattleServantConfConponent_o *)v16->m_Items, BOARD_IMAGE_NAME, v10, v11, v12, v13, v14, v15);
  itemInfo = v5->fields.itemInfo;
  if ( !itemInfo )
    goto LABEL_153;
  eventId = itemInfo->fields.eventId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &eventId, v19);
  v27 = (System_Int32_array **)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_B70754(rewardGetObj, v16->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_155;
  }
  if ( v16->max_length <= 1 )
    goto LABEL_154;
  v16->m_Items[1] = (Il2CppObject *)v27;
  sub_B70630((BattleServantConfConponent_o *)&v16->m_Items[1], v27, v21, v22, v23, v24, v25, v26);
  rewardGetObj = StringLiteral_16127/*"_"*/;
  if ( StringLiteral_16127/*"_"*/ )
  {
    rewardGetObj = sub_B70754(StringLiteral_16127/*"_"*/, v16->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_155;
    v34 = (System_Int32_array **)StringLiteral_16127/*"_"*/;
  }
  else
  {
    v34 = 0LL;
  }
  if ( v16->max_length <= 2 )
    goto LABEL_154;
  v16->m_Items[2] = (Il2CppObject *)v34;
  sub_B70630((BattleServantConfConponent_o *)&v16->m_Items[2], v34, v28, v29, v30, v31, v32, v33);
  v219 = ranking;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v219, v35);
  v42 = (System_Int32_array **)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_B70754(rewardGetObj, v16->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_155;
  }
  if ( v16->max_length <= 3 )
    goto LABEL_154;
  v16->m_Items[3] = (Il2CppObject *)v42;
  sub_B70630((BattleServantConfConponent_o *)&v16->m_Items[3], v42, v36, v37, v38, v39, v40, v41);
  v43 = System_String__Concat_44767952(v16, 0LL);
  if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
  }
  EventRewardRootComponent__setRewardInfoImg(baseSprite, v43, 0LL);
  rankingSprite = this->fields.rankingSprite;
  rewardGetObj = sub_B706AC(object___TypeInfo, 4LL);
  if ( !rewardGetObj )
    goto LABEL_153;
  v51 = (System_Object_array *)rewardGetObj;
  RANKING_IMAGE_NAME = (System_Int32_array **)EventRankingListViewItemDraw_TypeInfo->static_fields->RANKING_IMAGE_NAME;
  if ( RANKING_IMAGE_NAME )
  {
    rewardGetObj = sub_B70754(RANKING_IMAGE_NAME, *(_QWORD *)(*(_QWORD *)rewardGetObj + 64LL));
    if ( !rewardGetObj )
      goto LABEL_155;
  }
  if ( !v51->max_length )
    goto LABEL_154;
  v51->m_Items[0] = (Il2CppObject *)RANKING_IMAGE_NAME;
  sub_B70630((BattleServantConfConponent_o *)v51->m_Items, RANKING_IMAGE_NAME, v45, v46, v47, v48, v49, v50);
  v54 = v5->fields.itemInfo;
  if ( !v54 )
    goto LABEL_153;
  v218 = v54->fields.eventId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v218, v53);
  v61 = (System_Int32_array **)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_B70754(rewardGetObj, v51->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_155;
  }
  if ( v51->max_length <= 1 )
    goto LABEL_154;
  v51->m_Items[1] = (Il2CppObject *)v61;
  sub_B70630((BattleServantConfConponent_o *)&v51->m_Items[1], v61, v55, v56, v57, v58, v59, v60);
  rewardGetObj = StringLiteral_16127/*"_"*/;
  if ( StringLiteral_16127/*"_"*/ )
  {
    rewardGetObj = sub_B70754(StringLiteral_16127/*"_"*/, v51->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_155;
    v68 = (System_Int32_array **)StringLiteral_16127/*"_"*/;
  }
  else
  {
    v68 = 0LL;
  }
  if ( v51->max_length <= 2 )
    goto LABEL_154;
  v51->m_Items[2] = (Il2CppObject *)v68;
  sub_B70630((BattleServantConfConponent_o *)&v51->m_Items[2], v68, v62, v63, v64, v65, v66, v67);
  v217 = v5->fields.ranking;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v217, v69);
  v76 = (System_Int32_array **)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_B70754(rewardGetObj, v51->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_155;
  }
  if ( v51->max_length <= 3 )
    goto LABEL_154;
  v51->m_Items[3] = (Il2CppObject *)v76;
  sub_B70630((BattleServantConfConponent_o *)&v51->m_Items[3], v76, v70, v71, v72, v73, v74, v75);
  v77 = System_String__Concat_44767952(v51, 0LL);
  EventRewardRootComponent__setRewardInfoImg(rankingSprite, v77, 0LL);
  teamSprite = this->fields.teamSprite;
  rewardGetObj = sub_B706AC(object___TypeInfo, 4LL);
  if ( !rewardGetObj )
    goto LABEL_153;
  v85 = (System_Object_array *)rewardGetObj;
  GROUP_IMAGE_NAME = (System_Int32_array **)EventRankingListViewItemDraw_TypeInfo->static_fields->GROUP_IMAGE_NAME;
  if ( GROUP_IMAGE_NAME )
  {
    rewardGetObj = sub_B70754(GROUP_IMAGE_NAME, *(_QWORD *)(*(_QWORD *)rewardGetObj + 64LL));
    if ( !rewardGetObj )
      goto LABEL_155;
  }
  if ( !v85->max_length )
    goto LABEL_154;
  v85->m_Items[0] = (Il2CppObject *)GROUP_IMAGE_NAME;
  sub_B70630((BattleServantConfConponent_o *)v85->m_Items, GROUP_IMAGE_NAME, v79, v80, v81, v82, v83, v84);
  v88 = v5->fields.itemInfo;
  if ( !v88 )
    goto LABEL_153;
  v216 = v88->fields.eventId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v216, v87);
  v95 = (System_Int32_array **)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_B70754(rewardGetObj, v85->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_155;
  }
  if ( v85->max_length <= 1 )
    goto LABEL_154;
  v85->m_Items[1] = (Il2CppObject *)v95;
  sub_B70630((BattleServantConfConponent_o *)&v85->m_Items[1], v95, v89, v90, v91, v92, v93, v94);
  rewardGetObj = StringLiteral_16127/*"_"*/;
  if ( StringLiteral_16127/*"_"*/ )
  {
    rewardGetObj = sub_B70754(StringLiteral_16127/*"_"*/, v85->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_155;
    v102 = (System_Int32_array **)StringLiteral_16127/*"_"*/;
  }
  else
  {
    v102 = 0LL;
  }
  if ( v85->max_length <= 2 )
    goto LABEL_154;
  v85->m_Items[2] = (Il2CppObject *)v102;
  sub_B70630((BattleServantConfConponent_o *)&v85->m_Items[2], v102, v96, v97, v98, v99, v100, v101);
  groupImageId = v5->fields.groupImageId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &groupImageId, v103);
  v110 = (System_Int32_array **)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_B70754(rewardGetObj, v85->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_155;
  }
  if ( v85->max_length <= 3 )
    goto LABEL_154;
  v85->m_Items[3] = (Il2CppObject *)v110;
  sub_B70630((BattleServantConfConponent_o *)&v85->m_Items[3], v110, v104, v105, v106, v107, v108, v109);
  v111 = System_String__Concat_44767952(v85, 0LL);
  EventRewardRootComponent__setRewardInfoImg(teamSprite, v111, 0LL);
  teamNameSprite = this->fields.teamNameSprite;
  rewardGetObj = sub_B706AC(object___TypeInfo, 4LL);
  if ( !rewardGetObj )
    goto LABEL_153;
  v119 = (System_Object_array *)rewardGetObj;
  GROUP_NAME_IMAGE_NAME = (System_Int32_array **)EventRankingListViewItemDraw_TypeInfo->static_fields->GROUP_NAME_IMAGE_NAME;
  if ( GROUP_NAME_IMAGE_NAME )
  {
    rewardGetObj = sub_B70754(GROUP_NAME_IMAGE_NAME, *(_QWORD *)(*(_QWORD *)rewardGetObj + 64LL));
    if ( !rewardGetObj )
      goto LABEL_155;
  }
  if ( !v119->max_length )
    goto LABEL_154;
  v119->m_Items[0] = (Il2CppObject *)GROUP_NAME_IMAGE_NAME;
  sub_B70630((BattleServantConfConponent_o *)v119->m_Items, GROUP_NAME_IMAGE_NAME, v113, v114, v115, v116, v117, v118);
  v122 = v5->fields.itemInfo;
  if ( !v122 )
    goto LABEL_153;
  v214 = v122->fields.eventId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v214, v121);
  v129 = (System_Int32_array **)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_B70754(rewardGetObj, v119->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_155;
  }
  if ( v119->max_length <= 1 )
    goto LABEL_154;
  v119->m_Items[1] = (Il2CppObject *)v129;
  sub_B70630((BattleServantConfConponent_o *)&v119->m_Items[1], v129, v123, v124, v125, v126, v127, v128);
  rewardGetObj = StringLiteral_16127/*"_"*/;
  if ( StringLiteral_16127/*"_"*/ )
  {
    rewardGetObj = sub_B70754(StringLiteral_16127/*"_"*/, v119->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_155;
    v136 = (System_Int32_array **)StringLiteral_16127/*"_"*/;
  }
  else
  {
    v136 = 0LL;
  }
  if ( v119->max_length <= 2 )
    goto LABEL_154;
  v119->m_Items[2] = (Il2CppObject *)v136;
  sub_B70630((BattleServantConfConponent_o *)&v119->m_Items[2], v136, v130, v131, v132, v133, v134, v135);
  v138 = v5->fields.itemInfo;
  if ( !v138 )
    goto LABEL_153;
  groupId = v138->fields.groupId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &groupId, v137);
  v145 = (System_Int32_array **)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_B70754(rewardGetObj, v119->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_155;
  }
  if ( v119->max_length <= 3 )
    goto LABEL_154;
  v119->m_Items[3] = (Il2CppObject *)v145;
  sub_B70630((BattleServantConfConponent_o *)&v119->m_Items[3], v145, v139, v140, v141, v142, v143, v144);
  v146 = System_String__Concat_44767952(v119, 0LL);
  EventRewardRootComponent__setRewardInfoImg(teamNameSprite, v146, 0LL);
  rewardGetObj = EventRewardRootComponent__setRewardInfoImg(
                   this->fields.supportTxtSprite,
                   EventRankingListViewItemDraw_TypeInfo->static_fields->SUPPORT_TXT_IMAGE_NAME,
                   0LL);
  v147 = v5->fields.itemInfo;
  if ( !v147 )
    goto LABEL_153;
  supportInfoLabel = this->fields.supportInfoLabel;
  supportPoint = v147->fields.supportPoint;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  rewardGetObj = (__int64)LocalizationManager__GetNumberFormatLong(supportPoint, 0LL);
  if ( !supportInfoLabel )
    goto LABEL_153;
  UILabel__set_text(supportInfoLabel, (System_String_o *)rewardGetObj, 0LL);
  EventRewardRootComponent__setRewardInfoImg(
    this->fields.higherRewardSprite,
    EventRankingListViewItemDraw_TypeInfo->static_fields->HIGHER_REWARD_IMAGE_NAME,
    0LL);
  if ( v5->fields.isJoinTerm )
  {
    if ( v5->fields.isPlayedGoal )
    {
      v156 = EventRankingListViewItemDraw_TypeInfo;
      goalSprite = this->fields.goalSprite;
      if ( (BYTE3(EventRankingListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRankingListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRankingListViewItemDraw_TypeInfo);
        v156 = EventRankingListViewItemDraw_TypeInfo;
      }
      GOAL_IMAGE_NAME = v156->static_fields->GOAL_IMAGE_NAME;
      if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
      }
      EventRewardRootComponent__setRewardInfoImg(goalSprite, GOAL_IMAGE_NAME, 0LL);
      rewardGetObj = (__int64)this->fields.goalSprite;
      if ( !rewardGetObj )
        goto LABEL_153;
      rewardGetObj = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rewardGetObj, 0LL);
      if ( !rewardGetObj )
        goto LABEL_153;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rewardGetObj, 1, 0LL);
    }
    if ( v5->fields.isGetReward )
    {
      rewardGetSprite = this->fields.rewardGetSprite;
      rewardGetObj = sub_B706AC(object___TypeInfo, 4LL);
      v166 = EventRankingListViewItemDraw_TypeInfo;
      v167 = (System_Object_array *)rewardGetObj;
      if ( (BYTE3(EventRankingListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRankingListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRankingListViewItemDraw_TypeInfo);
        v166 = EventRankingListViewItemDraw_TypeInfo;
      }
      if ( !v167 )
        goto LABEL_153;
      REWARD_GET_IMAGE_NAME = (System_Int32_array **)v166->static_fields->REWARD_GET_IMAGE_NAME;
      if ( !REWARD_GET_IMAGE_NAME
        || (rewardGetObj = sub_B70754(REWARD_GET_IMAGE_NAME, v167->obj.klass->_1.element_class)) != 0 )
      {
        if ( !v167->max_length )
          goto LABEL_154;
        v167->m_Items[0] = (Il2CppObject *)REWARD_GET_IMAGE_NAME;
        sub_B70630(
          (BattleServantConfConponent_o *)v167->m_Items,
          REWARD_GET_IMAGE_NAME,
          v160,
          v161,
          v162,
          v163,
          v164,
          v165);
        v170 = v5->fields.itemInfo;
        if ( !v170 )
          goto LABEL_153;
        eventId = v170->fields.eventId;
        rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &eventId, v169);
        v177 = (System_Int32_array **)rewardGetObj;
        if ( !rewardGetObj || (rewardGetObj = sub_B70754(rewardGetObj, v167->obj.klass->_1.element_class)) != 0 )
        {
          if ( v167->max_length <= 1 )
            goto LABEL_154;
          v167->m_Items[1] = (Il2CppObject *)v177;
          sub_B70630((BattleServantConfConponent_o *)&v167->m_Items[1], v177, v171, v172, v173, v174, v175, v176);
          rewardGetObj = StringLiteral_16127/*"_"*/;
          if ( StringLiteral_16127/*"_"*/ )
          {
            rewardGetObj = sub_B70754(StringLiteral_16127/*"_"*/, v167->obj.klass->_1.element_class);
            if ( !rewardGetObj )
              goto LABEL_155;
            v184 = (System_Int32_array **)StringLiteral_16127/*"_"*/;
          }
          else
          {
            v184 = 0LL;
          }
          if ( v167->max_length <= 2 )
            goto LABEL_154;
          v167->m_Items[2] = (Il2CppObject *)v184;
          sub_B70630((BattleServantConfConponent_o *)&v167->m_Items[2], v184, v178, v179, v180, v181, v182, v183);
          v219 = ranking;
          rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v219, v185);
          v192 = (System_Int32_array **)rewardGetObj;
          if ( !rewardGetObj || (rewardGetObj = sub_B70754(rewardGetObj, v167->obj.klass->_1.element_class)) != 0 )
          {
            if ( v167->max_length <= 3 )
              goto LABEL_154;
            v167->m_Items[3] = (Il2CppObject *)v192;
            sub_B70630((BattleServantConfConponent_o *)&v167->m_Items[3], v192, v186, v187, v188, v189, v190, v191);
            v193 = System_String__Concat_44767952(v167, 0LL);
            if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
            }
            EventRewardRootComponent__setRewardInfoImg(rewardGetSprite, v193, 0LL);
            rewardGetObj = (__int64)this->fields.rewardGetSprite;
            if ( !rewardGetObj )
              goto LABEL_153;
            rewardGetObj = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rewardGetObj, 0LL);
            if ( !rewardGetObj )
              goto LABEL_153;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rewardGetObj, 1, 0LL);
            v194 = v5->fields.ranking;
            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            }
            rewardGetObj = (__int64)this->fields.rewardGetObj;
            if ( !rewardGetObj )
              goto LABEL_153;
            UnityEngine_GameObject__SetActive(
              (UnityEngine_GameObject_o *)rewardGetObj,
              v194 <= BalanceConfig_TypeInfo->static_fields->raceRewardRankMax,
              0LL);
            goto LABEL_130;
          }
        }
      }
LABEL_155:
      v209 = sub_B7078C(rewardGetObj);
      sub_B70738(v209, 0LL);
    }
  }
LABEL_130:
  giftEntityList = v5->fields.giftEntityList;
  this->fields.giftEntityList = giftEntityList;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.giftEntityList,
    (System_Int32_array **)giftEntityList,
    v150,
    v151,
    v152,
    v153,
    v154,
    v155);
  v196 = v5->fields.giftEntityList;
  if ( !v196 )
    goto LABEL_153;
  max_length = v196->max_length;
  this->fields.isMultipleReward = max_length > 1;
  if ( max_length < 2 )
  {
    v205 = this->fields.giftEntityList;
    if ( !v205 )
      goto LABEL_153;
    if ( v205->max_length )
      goto LABEL_146;
    goto LABEL_154;
  }
  listViewObject = this->fields.listViewObject;
  if ( !listViewObject )
    goto LABEL_153;
  manager = (UnityEngine_Object_o *)listViewObject->fields.manager;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  rewardGetObj = UnityEngine_Object__op_Inequality(manager, 0LL, 0LL);
  if ( (rewardGetObj & 1) != 0 )
  {
    v200 = this->fields.listViewObject;
    if ( !v200 )
      goto LABEL_153;
    v201 = this->fields.giftEntityList;
    if ( !v201 )
      goto LABEL_153;
    rewardGetObj = (__int64)v200->fields.manager;
    if ( !rewardGetObj )
      goto LABEL_153;
    item = (EventRankingListViewItem_o *)EventRankingListViewManager_TypeInfo;
    v202 = *(&EventRankingListViewManager_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)rewardGetObj + 300LL) < (unsigned int)v202
      || *(EventRankingListViewManager_c **)(*(_QWORD *)(*(_QWORD *)rewardGetObj + 200LL) + 8 * v202 - 8) != EventRankingListViewManager_TypeInfo )
    {
      v210 = (EventRankingListViewManager_o *)sub_B70A60(rewardGetObj);
      EventRankingListViewManager__GetAlphaAnimCnt(v210, v211, v212);
      return;
    }
    v203 = v201->max_length;
    v204 = *(_DWORD *)(rewardGetObj + 332) % (int)v203;
    if ( v204 < v203 )
    {
      v205 = (struct GiftEntity_array *)((char *)v201 + 8 * v204);
LABEL_146:
      v206 = (int32_t *)v205->m_Items[0];
      if ( v206 )
      {
        rewardGetObj = (__int64)this->fields.itemIcon;
        if ( rewardGetObj )
        {
          if ( v206[7] <= 1 )
            v207 = -1;
          else
            v207 = v206[7];
          ItemIconComponent__SetGift((ItemIconComponent_o *)rewardGetObj, v206[5], v206[6], v207, 0, 0LL);
          return;
        }
      }
LABEL_153:
      sub_B7076C(rewardGetObj, item);
    }
LABEL_154:
    v208 = sub_B70798(rewardGetObj);
    sub_B70738(v208, 0LL);
  }
}


void __fastcall EventRankingListViewItemDraw__SetListViewObject(
        EventRankingListViewItemDraw_o *this,
        EventRankingListViewObject_o *listViewObject,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.listViewObject = listViewObject;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.listViewObject,
    (System_Int32_array **)listViewObject,
    (System_String_array **)method,
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
      sub_B7076C(0LL, method);
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
      sub_B7076C(this, item);
    EventRankingListViewItemDraw__SetRewardIconAlpha(this, manager->fields.alphaAnimNow, (const MethodInfo *)item);
  }
}