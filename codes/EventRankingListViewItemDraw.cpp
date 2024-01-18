void __fastcall EventRankingListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v17; // x1
  struct EventRankingListViewItemDraw_StaticFields *v18; // x0
  System_Int32_array **v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct EventRankingListViewItemDraw_StaticFields *v26; // x0
  System_Int32_array **v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct EventRankingListViewItemDraw_StaticFields *v34; // x0
  System_Int32_array **v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct EventRankingListViewItemDraw_StaticFields *v42; // x0
  System_Int32_array **v43; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  struct EventRankingListViewItemDraw_StaticFields *v50; // x0
  System_Int32_array **v51; // x1
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  struct EventRankingListViewItemDraw_StaticFields *v58; // x0
  System_Int32_array **v59; // x1
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  struct EventRankingListViewItemDraw_StaticFields *v66; // x0
  System_Int32_array **v67; // x1
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7

  if ( (byte_4188763 & 1) == 0 )
  {
    sub_B2C35C(&EventRankingListViewItemDraw_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_18564/*"event_ranking_"*/, v8);
    sub_B2C35C(&StringLiteral_18523/*"event_goal_flag"*/, v9);
    sub_B2C35C(&StringLiteral_18568/*"event_ranking_rewardget_"*/, v10);
    sub_B2C35C(&StringLiteral_18567/*"event_ranking_reward_txt"*/, v11);
    sub_B2C35C(&StringLiteral_18566/*"event_ranking_group_name_"*/, v12);
    sub_B2C35C(&StringLiteral_18565/*"event_ranking_group_"*/, v13);
    sub_B2C35C(&StringLiteral_18601/*"event_support_txt"*/, v14);
    sub_B2C35C(&StringLiteral_18581/*"event_rewardranking_"*/, v15);
    byte_4188763 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventRankingListViewItemDraw_TypeInfo->static_fields;
  v17 = (System_Int32_array **)StringLiteral_18565/*"event_ranking_group_"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18565/*"event_ranking_group_"*/;
  sub_B2C2F8(static_fields, v17, v2, v3, v4, v5, v6, v7);
  v18 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v19 = (System_Int32_array **)StringLiteral_18566/*"event_ranking_group_name_"*/;
  v18->GROUP_NAME_IMAGE_NAME = (struct System_String_o *)StringLiteral_18566/*"event_ranking_group_name_"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v18->GROUP_NAME_IMAGE_NAME, v19, v20, v21, v22, v23, v24, v25);
  v26 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v27 = (System_Int32_array **)StringLiteral_18581/*"event_rewardranking_"*/;
  v26->BOARD_IMAGE_NAME = (struct System_String_o *)StringLiteral_18581/*"event_rewardranking_"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v26->BOARD_IMAGE_NAME, v27, v28, v29, v30, v31, v32, v33);
  v34 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v35 = (System_Int32_array **)StringLiteral_18568/*"event_ranking_rewardget_"*/;
  v34->REWARD_GET_IMAGE_NAME = (struct System_String_o *)StringLiteral_18568/*"event_ranking_rewardget_"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v34->REWARD_GET_IMAGE_NAME, v35, v36, v37, v38, v39, v40, v41);
  v42 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v43 = (System_Int32_array **)StringLiteral_18564/*"event_ranking_"*/;
  v42->RANKING_IMAGE_NAME = (struct System_String_o *)StringLiteral_18564/*"event_ranking_"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v42->RANKING_IMAGE_NAME, v43, v44, v45, v46, v47, v48, v49);
  v50 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v51 = (System_Int32_array **)StringLiteral_18523/*"event_goal_flag"*/;
  v50->GOAL_IMAGE_NAME = (struct System_String_o *)StringLiteral_18523/*"event_goal_flag"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v50->GOAL_IMAGE_NAME, v51, v52, v53, v54, v55, v56, v57);
  v58 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v59 = (System_Int32_array **)StringLiteral_18567/*"event_ranking_reward_txt"*/;
  v58->HIGHER_REWARD_IMAGE_NAME = (struct System_String_o *)StringLiteral_18567/*"event_ranking_reward_txt"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v58->HIGHER_REWARD_IMAGE_NAME, v59, v60, v61, v62, v63, v64, v65);
  v66 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v67 = (System_Int32_array **)StringLiteral_18601/*"event_support_txt"*/;
  v66->SUPPORT_TXT_IMAGE_NAME = (struct System_String_o *)StringLiteral_18601/*"event_support_txt"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v66->SUPPORT_TXT_IMAGE_NAME, v67, v68, v69, v70, v71, v72, v73);
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
      v8 = sub_B2C460(this);
      sub_B2C400(v8, 0LL);
    }
    v6 = (int32_t *)giftEntityList->m_Items[v5];
    if ( !v6 || (this = (EventRankingListViewItemDraw_o *)this->fields.itemIcon) == 0LL )
LABEL_12:
      sub_B2C434(this, manager);
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
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Object_array *v24; // x22
  EventRankingListViewItemDraw_c *v25; // x8
  System_Int32_array **BOARD_IMAGE_NAME; // x23
  struct EventRankingRoundItemInfo_o *itemInfo; // x8
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **v34; // x23
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **v41; // x1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Int32_array **v48; // x23
  System_String_o *v49; // x22
  UISprite_o *rankingSprite; // x21
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Object_array *v57; // x22
  System_Int32_array **RANKING_IMAGE_NAME; // x23
  struct EventRankingRoundItemInfo_o *v59; // x8
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_Int32_array **v66; // x23
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_Int32_array **v73; // x1
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  System_Int32_array **v80; // x23
  System_String_o *v81; // x0
  UISprite_o *teamSprite; // x21
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  System_Object_array *v89; // x22
  System_Int32_array **GROUP_IMAGE_NAME; // x23
  struct EventRankingRoundItemInfo_o *v91; // x8
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  System_Int32_array **v98; // x23
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  System_Int32_array **v105; // x1
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  System_Int32_array **v112; // x23
  System_String_o *v113; // x0
  UISprite_o *teamNameSprite; // x21
  System_String_array **v115; // x2
  System_String_array **v116; // x3
  System_Boolean_array **v117; // x4
  System_Int32_array **v118; // x5
  System_Int32_array *v119; // x6
  System_Int32_array *v120; // x7
  System_Object_array *v121; // x22
  System_Int32_array **GROUP_NAME_IMAGE_NAME; // x23
  struct EventRankingRoundItemInfo_o *v123; // x8
  System_String_array **v124; // x2
  System_String_array **v125; // x3
  System_Boolean_array **v126; // x4
  System_Int32_array **v127; // x5
  System_Int32_array *v128; // x6
  System_Int32_array *v129; // x7
  System_Int32_array **v130; // x23
  System_String_array **v131; // x2
  System_String_array **v132; // x3
  System_Boolean_array **v133; // x4
  System_Int32_array **v134; // x5
  System_Int32_array *v135; // x6
  System_Int32_array *v136; // x7
  System_Int32_array **v137; // x1
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
  struct EventRankingRoundItemInfo_o *v169; // x8
  System_String_array **v170; // x2
  System_String_array **v171; // x3
  System_Boolean_array **v172; // x4
  System_Int32_array **v173; // x5
  System_Int32_array *v174; // x6
  System_Int32_array *v175; // x7
  System_Int32_array **v176; // x23
  System_String_array **v177; // x2
  System_String_array **v178; // x3
  System_Boolean_array **v179; // x4
  System_Int32_array **v180; // x5
  System_Int32_array *v181; // x6
  System_Int32_array *v182; // x7
  System_Int32_array **v183; // x1
  System_String_array **v184; // x2
  System_String_array **v185; // x3
  System_Boolean_array **v186; // x4
  System_Int32_array **v187; // x5
  System_Int32_array *v188; // x6
  System_Int32_array *v189; // x7
  System_Int32_array **v190; // x23
  System_String_o *v191; // x22
  int32_t v192; // w21
  struct GiftEntity_array *giftEntityList; // x1
  struct GiftEntity_array *v194; // x8
  int max_length; // w8
  struct EventRankingListViewObject_o *listViewObject; // x8
  UnityEngine_Object_o *manager; // x20
  struct EventRankingListViewObject_o *v198; // x9
  struct GiftEntity_array *v199; // x8
  __int64 v200; // x10
  il2cpp_array_size_t v201; // w10
  int v202; // w9
  struct GiftEntity_array *v203; // x8
  int32_t *v204; // x8
  int32_t v205; // w3
  __int64 v206; // x0
  __int64 v207; // x0
  EventRankingListViewManager_o *v208; // x0
  int32_t v209; // w1
  const MethodInfo *v210; // x2
  int32_t groupId; // [xsp+0h] [xbp-70h] BYREF
  int32_t v212; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t groupImageId; // [xsp+8h] [xbp-68h] BYREF
  int32_t v214; // [xsp+Ch] [xbp-64h] BYREF
  int32_t v215; // [xsp+10h] [xbp-60h] BYREF
  int32_t v216; // [xsp+14h] [xbp-5Ch] BYREF
  int v217; // [xsp+18h] [xbp-58h] BYREF
  int32_t eventId; // [xsp+1Ch] [xbp-54h] BYREF

  v5 = item;
  if ( (byte_4188762 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, item);
    sub_B2C35C(&EventRankingListViewItemDraw_TypeInfo, v7);
    sub_B2C35C(&EventRankingListViewManager_TypeInfo, v8);
    sub_B2C35C(&EventRewardRootComponent_TypeInfo, v9);
    sub_B2C35C(&int_TypeInfo, v10);
    sub_B2C35C(&LocalizationManager_TypeInfo, v11);
    sub_B2C35C(&object___TypeInfo, v12);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v13);
    sub_B2C35C(&StringLiteral_15905/*"_"*/, v14);
    byte_4188762 = 1;
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
  rewardGetObj = sub_B2C374(object___TypeInfo, 4LL);
  v24 = (System_Object_array *)rewardGetObj;
  v25 = EventRankingListViewItemDraw_TypeInfo;
  if ( (BYTE3(EventRankingListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRankingListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRankingListViewItemDraw_TypeInfo);
    v25 = EventRankingListViewItemDraw_TypeInfo;
  }
  if ( !v24 )
    goto LABEL_153;
  BOARD_IMAGE_NAME = (System_Int32_array **)v25->static_fields->BOARD_IMAGE_NAME;
  if ( BOARD_IMAGE_NAME )
  {
    rewardGetObj = sub_B2C41C(BOARD_IMAGE_NAME, v24->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_155;
  }
  if ( !v24->max_length )
    goto LABEL_154;
  v24->m_Items[0] = (Il2CppObject *)BOARD_IMAGE_NAME;
  sub_B2C2F8((BattleServantConfConponent_o *)v24->m_Items, BOARD_IMAGE_NAME, v18, v19, v20, v21, v22, v23);
  itemInfo = v5->fields.itemInfo;
  if ( !itemInfo )
    goto LABEL_153;
  eventId = itemInfo->fields.eventId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &eventId);
  v34 = (System_Int32_array **)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_B2C41C(rewardGetObj, v24->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_155;
  }
  if ( v24->max_length <= 1 )
    goto LABEL_154;
  v24->m_Items[1] = (Il2CppObject *)v34;
  sub_B2C2F8((BattleServantConfConponent_o *)&v24->m_Items[1], v34, v28, v29, v30, v31, v32, v33);
  rewardGetObj = StringLiteral_15905/*"_"*/;
  if ( StringLiteral_15905/*"_"*/ )
  {
    rewardGetObj = sub_B2C41C(StringLiteral_15905/*"_"*/, v24->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_155;
    v41 = (System_Int32_array **)StringLiteral_15905/*"_"*/;
  }
  else
  {
    v41 = 0LL;
  }
  if ( v24->max_length <= 2 )
    goto LABEL_154;
  v24->m_Items[2] = (Il2CppObject *)v41;
  sub_B2C2F8((BattleServantConfConponent_o *)&v24->m_Items[2], v41, v35, v36, v37, v38, v39, v40);
  v217 = ranking;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v217);
  v48 = (System_Int32_array **)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_B2C41C(rewardGetObj, v24->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_155;
  }
  if ( v24->max_length <= 3 )
    goto LABEL_154;
  v24->m_Items[3] = (Il2CppObject *)v48;
  sub_B2C2F8((BattleServantConfConponent_o *)&v24->m_Items[3], v48, v42, v43, v44, v45, v46, v47);
  v49 = System_String__Concat_44315316(v24, 0LL);
  if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
  }
  EventRewardRootComponent__setRewardInfoImg(baseSprite, v49, 0LL);
  rankingSprite = this->fields.rankingSprite;
  rewardGetObj = sub_B2C374(object___TypeInfo, 4LL);
  if ( !rewardGetObj )
    goto LABEL_153;
  v57 = (System_Object_array *)rewardGetObj;
  RANKING_IMAGE_NAME = (System_Int32_array **)EventRankingListViewItemDraw_TypeInfo->static_fields->RANKING_IMAGE_NAME;
  if ( RANKING_IMAGE_NAME )
  {
    rewardGetObj = sub_B2C41C(RANKING_IMAGE_NAME, *(_QWORD *)(*(_QWORD *)rewardGetObj + 64LL));
    if ( !rewardGetObj )
      goto LABEL_155;
  }
  if ( !v57->max_length )
    goto LABEL_154;
  v57->m_Items[0] = (Il2CppObject *)RANKING_IMAGE_NAME;
  sub_B2C2F8((BattleServantConfConponent_o *)v57->m_Items, RANKING_IMAGE_NAME, v51, v52, v53, v54, v55, v56);
  v59 = v5->fields.itemInfo;
  if ( !v59 )
    goto LABEL_153;
  v216 = v59->fields.eventId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v216);
  v66 = (System_Int32_array **)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_B2C41C(rewardGetObj, v57->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_155;
  }
  if ( v57->max_length <= 1 )
    goto LABEL_154;
  v57->m_Items[1] = (Il2CppObject *)v66;
  sub_B2C2F8((BattleServantConfConponent_o *)&v57->m_Items[1], v66, v60, v61, v62, v63, v64, v65);
  rewardGetObj = StringLiteral_15905/*"_"*/;
  if ( StringLiteral_15905/*"_"*/ )
  {
    rewardGetObj = sub_B2C41C(StringLiteral_15905/*"_"*/, v57->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_155;
    v73 = (System_Int32_array **)StringLiteral_15905/*"_"*/;
  }
  else
  {
    v73 = 0LL;
  }
  if ( v57->max_length <= 2 )
    goto LABEL_154;
  v57->m_Items[2] = (Il2CppObject *)v73;
  sub_B2C2F8((BattleServantConfConponent_o *)&v57->m_Items[2], v73, v67, v68, v69, v70, v71, v72);
  v215 = v5->fields.ranking;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v215);
  v80 = (System_Int32_array **)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_B2C41C(rewardGetObj, v57->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_155;
  }
  if ( v57->max_length <= 3 )
    goto LABEL_154;
  v57->m_Items[3] = (Il2CppObject *)v80;
  sub_B2C2F8((BattleServantConfConponent_o *)&v57->m_Items[3], v80, v74, v75, v76, v77, v78, v79);
  v81 = System_String__Concat_44315316(v57, 0LL);
  EventRewardRootComponent__setRewardInfoImg(rankingSprite, v81, 0LL);
  teamSprite = this->fields.teamSprite;
  rewardGetObj = sub_B2C374(object___TypeInfo, 4LL);
  if ( !rewardGetObj )
    goto LABEL_153;
  v89 = (System_Object_array *)rewardGetObj;
  GROUP_IMAGE_NAME = (System_Int32_array **)EventRankingListViewItemDraw_TypeInfo->static_fields->GROUP_IMAGE_NAME;
  if ( GROUP_IMAGE_NAME )
  {
    rewardGetObj = sub_B2C41C(GROUP_IMAGE_NAME, *(_QWORD *)(*(_QWORD *)rewardGetObj + 64LL));
    if ( !rewardGetObj )
      goto LABEL_155;
  }
  if ( !v89->max_length )
    goto LABEL_154;
  v89->m_Items[0] = (Il2CppObject *)GROUP_IMAGE_NAME;
  sub_B2C2F8((BattleServantConfConponent_o *)v89->m_Items, GROUP_IMAGE_NAME, v83, v84, v85, v86, v87, v88);
  v91 = v5->fields.itemInfo;
  if ( !v91 )
    goto LABEL_153;
  v214 = v91->fields.eventId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v214);
  v98 = (System_Int32_array **)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_B2C41C(rewardGetObj, v89->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_155;
  }
  if ( v89->max_length <= 1 )
    goto LABEL_154;
  v89->m_Items[1] = (Il2CppObject *)v98;
  sub_B2C2F8((BattleServantConfConponent_o *)&v89->m_Items[1], v98, v92, v93, v94, v95, v96, v97);
  rewardGetObj = StringLiteral_15905/*"_"*/;
  if ( StringLiteral_15905/*"_"*/ )
  {
    rewardGetObj = sub_B2C41C(StringLiteral_15905/*"_"*/, v89->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_155;
    v105 = (System_Int32_array **)StringLiteral_15905/*"_"*/;
  }
  else
  {
    v105 = 0LL;
  }
  if ( v89->max_length <= 2 )
    goto LABEL_154;
  v89->m_Items[2] = (Il2CppObject *)v105;
  sub_B2C2F8((BattleServantConfConponent_o *)&v89->m_Items[2], v105, v99, v100, v101, v102, v103, v104);
  groupImageId = v5->fields.groupImageId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &groupImageId);
  v112 = (System_Int32_array **)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_B2C41C(rewardGetObj, v89->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_155;
  }
  if ( v89->max_length <= 3 )
    goto LABEL_154;
  v89->m_Items[3] = (Il2CppObject *)v112;
  sub_B2C2F8((BattleServantConfConponent_o *)&v89->m_Items[3], v112, v106, v107, v108, v109, v110, v111);
  v113 = System_String__Concat_44315316(v89, 0LL);
  EventRewardRootComponent__setRewardInfoImg(teamSprite, v113, 0LL);
  teamNameSprite = this->fields.teamNameSprite;
  rewardGetObj = sub_B2C374(object___TypeInfo, 4LL);
  if ( !rewardGetObj )
    goto LABEL_153;
  v121 = (System_Object_array *)rewardGetObj;
  GROUP_NAME_IMAGE_NAME = (System_Int32_array **)EventRankingListViewItemDraw_TypeInfo->static_fields->GROUP_NAME_IMAGE_NAME;
  if ( GROUP_NAME_IMAGE_NAME )
  {
    rewardGetObj = sub_B2C41C(GROUP_NAME_IMAGE_NAME, *(_QWORD *)(*(_QWORD *)rewardGetObj + 64LL));
    if ( !rewardGetObj )
      goto LABEL_155;
  }
  if ( !v121->max_length )
    goto LABEL_154;
  v121->m_Items[0] = (Il2CppObject *)GROUP_NAME_IMAGE_NAME;
  sub_B2C2F8((BattleServantConfConponent_o *)v121->m_Items, GROUP_NAME_IMAGE_NAME, v115, v116, v117, v118, v119, v120);
  v123 = v5->fields.itemInfo;
  if ( !v123 )
    goto LABEL_153;
  v212 = v123->fields.eventId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v212);
  v130 = (System_Int32_array **)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_B2C41C(rewardGetObj, v121->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_155;
  }
  if ( v121->max_length <= 1 )
    goto LABEL_154;
  v121->m_Items[1] = (Il2CppObject *)v130;
  sub_B2C2F8((BattleServantConfConponent_o *)&v121->m_Items[1], v130, v124, v125, v126, v127, v128, v129);
  rewardGetObj = StringLiteral_15905/*"_"*/;
  if ( StringLiteral_15905/*"_"*/ )
  {
    rewardGetObj = sub_B2C41C(StringLiteral_15905/*"_"*/, v121->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_155;
    v137 = (System_Int32_array **)StringLiteral_15905/*"_"*/;
  }
  else
  {
    v137 = 0LL;
  }
  if ( v121->max_length <= 2 )
    goto LABEL_154;
  v121->m_Items[2] = (Il2CppObject *)v137;
  sub_B2C2F8((BattleServantConfConponent_o *)&v121->m_Items[2], v137, v131, v132, v133, v134, v135, v136);
  v138 = v5->fields.itemInfo;
  if ( !v138 )
    goto LABEL_153;
  groupId = v138->fields.groupId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &groupId);
  v145 = (System_Int32_array **)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_B2C41C(rewardGetObj, v121->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_155;
  }
  if ( v121->max_length <= 3 )
    goto LABEL_154;
  v121->m_Items[3] = (Il2CppObject *)v145;
  sub_B2C2F8((BattleServantConfConponent_o *)&v121->m_Items[3], v145, v139, v140, v141, v142, v143, v144);
  v146 = System_String__Concat_44315316(v121, 0LL);
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
      rewardGetObj = sub_B2C374(object___TypeInfo, 4LL);
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
        || (rewardGetObj = sub_B2C41C(REWARD_GET_IMAGE_NAME, v167->obj.klass->_1.element_class)) != 0 )
      {
        if ( !v167->max_length )
          goto LABEL_154;
        v167->m_Items[0] = (Il2CppObject *)REWARD_GET_IMAGE_NAME;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)v167->m_Items,
          REWARD_GET_IMAGE_NAME,
          v160,
          v161,
          v162,
          v163,
          v164,
          v165);
        v169 = v5->fields.itemInfo;
        if ( !v169 )
          goto LABEL_153;
        eventId = v169->fields.eventId;
        rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &eventId);
        v176 = (System_Int32_array **)rewardGetObj;
        if ( !rewardGetObj || (rewardGetObj = sub_B2C41C(rewardGetObj, v167->obj.klass->_1.element_class)) != 0 )
        {
          if ( v167->max_length <= 1 )
            goto LABEL_154;
          v167->m_Items[1] = (Il2CppObject *)v176;
          sub_B2C2F8((BattleServantConfConponent_o *)&v167->m_Items[1], v176, v170, v171, v172, v173, v174, v175);
          rewardGetObj = StringLiteral_15905/*"_"*/;
          if ( StringLiteral_15905/*"_"*/ )
          {
            rewardGetObj = sub_B2C41C(StringLiteral_15905/*"_"*/, v167->obj.klass->_1.element_class);
            if ( !rewardGetObj )
              goto LABEL_155;
            v183 = (System_Int32_array **)StringLiteral_15905/*"_"*/;
          }
          else
          {
            v183 = 0LL;
          }
          if ( v167->max_length <= 2 )
            goto LABEL_154;
          v167->m_Items[2] = (Il2CppObject *)v183;
          sub_B2C2F8((BattleServantConfConponent_o *)&v167->m_Items[2], v183, v177, v178, v179, v180, v181, v182);
          v217 = ranking;
          rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v217);
          v190 = (System_Int32_array **)rewardGetObj;
          if ( !rewardGetObj || (rewardGetObj = sub_B2C41C(rewardGetObj, v167->obj.klass->_1.element_class)) != 0 )
          {
            if ( v167->max_length <= 3 )
              goto LABEL_154;
            v167->m_Items[3] = (Il2CppObject *)v190;
            sub_B2C2F8((BattleServantConfConponent_o *)&v167->m_Items[3], v190, v184, v185, v186, v187, v188, v189);
            v191 = System_String__Concat_44315316(v167, 0LL);
            if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
            }
            EventRewardRootComponent__setRewardInfoImg(rewardGetSprite, v191, 0LL);
            rewardGetObj = (__int64)this->fields.rewardGetSprite;
            if ( !rewardGetObj )
              goto LABEL_153;
            rewardGetObj = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rewardGetObj, 0LL);
            if ( !rewardGetObj )
              goto LABEL_153;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rewardGetObj, 1, 0LL);
            v192 = v5->fields.ranking;
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
              v192 <= BalanceConfig_TypeInfo->static_fields->raceRewardRankMax,
              0LL);
            goto LABEL_130;
          }
        }
      }
LABEL_155:
      v207 = sub_B2C454(rewardGetObj);
      sub_B2C400(v207, 0LL);
    }
  }
LABEL_130:
  giftEntityList = v5->fields.giftEntityList;
  this->fields.giftEntityList = giftEntityList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.giftEntityList,
    (System_Int32_array **)giftEntityList,
    v150,
    v151,
    v152,
    v153,
    v154,
    v155);
  v194 = v5->fields.giftEntityList;
  if ( !v194 )
    goto LABEL_153;
  max_length = v194->max_length;
  this->fields.isMultipleReward = max_length > 1;
  if ( max_length < 2 )
  {
    v203 = this->fields.giftEntityList;
    if ( !v203 )
      goto LABEL_153;
    if ( v203->max_length )
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
    v198 = this->fields.listViewObject;
    if ( !v198 )
      goto LABEL_153;
    v199 = this->fields.giftEntityList;
    if ( !v199 )
      goto LABEL_153;
    rewardGetObj = (__int64)v198->fields.manager;
    if ( !rewardGetObj )
      goto LABEL_153;
    item = (EventRankingListViewItem_o *)EventRankingListViewManager_TypeInfo;
    v200 = *(&EventRankingListViewManager_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)rewardGetObj + 300LL) < (unsigned int)v200
      || *(EventRankingListViewManager_c **)(*(_QWORD *)(*(_QWORD *)rewardGetObj + 200LL) + 8 * v200 - 8) != EventRankingListViewManager_TypeInfo )
    {
      v208 = (EventRankingListViewManager_o *)sub_B2C728(rewardGetObj);
      EventRankingListViewManager__GetAlphaAnimCnt(v208, v209, v210);
      return;
    }
    v201 = v199->max_length;
    v202 = *(_DWORD *)(rewardGetObj + 332) % (int)v201;
    if ( v202 < v201 )
    {
      v203 = (struct GiftEntity_array *)((char *)v199 + 8 * v202);
LABEL_146:
      v204 = (int32_t *)v203->m_Items[0];
      if ( v204 )
      {
        rewardGetObj = (__int64)this->fields.itemIcon;
        if ( rewardGetObj )
        {
          if ( v204[7] <= 1 )
            v205 = -1;
          else
            v205 = v204[7];
          ItemIconComponent__SetGift((ItemIconComponent_o *)rewardGetObj, v204[5], v204[6], v205, 0, 0LL);
          return;
        }
      }
LABEL_153:
      sub_B2C434(rewardGetObj, item);
    }
LABEL_154:
    v206 = sub_B2C460(rewardGetObj);
    sub_B2C400(v206, 0LL);
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
  sub_B2C2F8(
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
      sub_B2C434(0LL, method);
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
      sub_B2C434(this, item);
    EventRankingListViewItemDraw__SetRewardIconAlpha(this, manager->fields.alphaAnimNow, (const MethodInfo *)item);
  }
}