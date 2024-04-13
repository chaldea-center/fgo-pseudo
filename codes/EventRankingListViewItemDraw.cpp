void __fastcall EventRankingListViewItemDraw___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v33; // x1
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
  struct EventRankingListViewItemDraw_StaticFields *v74; // x0
  System_Int32_array **v75; // x1
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  struct EventRankingListViewItemDraw_StaticFields *v82; // x0
  System_Int32_array **v83; // x1
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7

  if ( (byte_42E8E8E & 1) == 0 )
  {
    sub_B5D5C4(&EventRankingListViewItemDraw_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_18795/*"event_ranking_"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_18754/*"event_goal_flag"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_18799/*"event_ranking_rewardget_"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_18798/*"event_ranking_reward_txt"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_18797/*"event_ranking_group_name_"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_18796/*"event_ranking_group_"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_18832/*"event_support_txt"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_18812/*"event_rewardranking_"*/, v29, v30, v31);
    byte_42E8E8E = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventRankingListViewItemDraw_TypeInfo->static_fields;
  v33 = (System_Int32_array **)StringLiteral_18796/*"event_ranking_group_"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18796/*"event_ranking_group_"*/;
  sub_B5D560(static_fields, v33, v2, v3, v4, v5, v6, v7);
  v34 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v35 = (System_Int32_array **)StringLiteral_18797/*"event_ranking_group_name_"*/;
  v34->GROUP_NAME_IMAGE_NAME = (struct System_String_o *)StringLiteral_18797/*"event_ranking_group_name_"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v34->GROUP_NAME_IMAGE_NAME, v35, v36, v37, v38, v39, v40, v41);
  v42 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v43 = (System_Int32_array **)StringLiteral_18812/*"event_rewardranking_"*/;
  v42->BOARD_IMAGE_NAME = (struct System_String_o *)StringLiteral_18812/*"event_rewardranking_"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v42->BOARD_IMAGE_NAME, v43, v44, v45, v46, v47, v48, v49);
  v50 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v51 = (System_Int32_array **)StringLiteral_18799/*"event_ranking_rewardget_"*/;
  v50->REWARD_GET_IMAGE_NAME = (struct System_String_o *)StringLiteral_18799/*"event_ranking_rewardget_"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v50->REWARD_GET_IMAGE_NAME, v51, v52, v53, v54, v55, v56, v57);
  v58 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v59 = (System_Int32_array **)StringLiteral_18795/*"event_ranking_"*/;
  v58->RANKING_IMAGE_NAME = (struct System_String_o *)StringLiteral_18795/*"event_ranking_"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v58->RANKING_IMAGE_NAME, v59, v60, v61, v62, v63, v64, v65);
  v66 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v67 = (System_Int32_array **)StringLiteral_18754/*"event_goal_flag"*/;
  v66->GOAL_IMAGE_NAME = (struct System_String_o *)StringLiteral_18754/*"event_goal_flag"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v66->GOAL_IMAGE_NAME, v67, v68, v69, v70, v71, v72, v73);
  v74 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v75 = (System_Int32_array **)StringLiteral_18798/*"event_ranking_reward_txt"*/;
  v74->HIGHER_REWARD_IMAGE_NAME = (struct System_String_o *)StringLiteral_18798/*"event_ranking_reward_txt"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v74->HIGHER_REWARD_IMAGE_NAME, v75, v76, v77, v78, v79, v80, v81);
  v82 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v83 = (System_Int32_array **)StringLiteral_18832/*"event_support_txt"*/;
  v82->SUPPORT_TXT_IMAGE_NAME = (struct System_String_o *)StringLiteral_18832/*"event_support_txt"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v82->SUPPORT_TXT_IMAGE_NAME, v83, v84, v85, v86, v87, v88, v89);
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
      v8 = sub_B5D6C8(this);
      sub_B5D668(v8, 0LL);
    }
    v6 = (int32_t *)giftEntityList->m_Items[v5];
    if ( !v6 || (this = (EventRankingListViewItemDraw_o *)this->fields.itemIcon) == 0LL )
LABEL_12:
      sub_B5D69C(this, manager);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  __int64 rewardGetObj; // x0
  UISprite_o *baseSprite; // x21
  int ranking; // w24
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Object_array *v40; // x22
  EventRankingListViewItemDraw_c *v41; // x8
  System_Int32_array **BOARD_IMAGE_NAME; // x23
  struct EventRankingRoundItemInfo_o *itemInfo; // x8
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **v50; // x23
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Int32_array **v57; // x1
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_Int32_array **v64; // x23
  System_String_o *v65; // x22
  UISprite_o *rankingSprite; // x21
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_Object_array *v73; // x22
  System_Int32_array **RANKING_IMAGE_NAME; // x23
  struct EventRankingRoundItemInfo_o *v75; // x8
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_Int32_array **v82; // x23
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  System_Int32_array **v89; // x1
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  System_Int32_array **v96; // x23
  System_String_o *v97; // x0
  UISprite_o *teamSprite; // x21
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  System_Object_array *v105; // x22
  System_Int32_array **GROUP_IMAGE_NAME; // x23
  struct EventRankingRoundItemInfo_o *v107; // x8
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  System_Int32_array **v114; // x23
  System_String_array **v115; // x2
  System_String_array **v116; // x3
  System_Boolean_array **v117; // x4
  System_Int32_array **v118; // x5
  System_Int32_array *v119; // x6
  System_Int32_array *v120; // x7
  System_Int32_array **v121; // x1
  System_String_array **v122; // x2
  System_String_array **v123; // x3
  System_Boolean_array **v124; // x4
  System_Int32_array **v125; // x5
  System_Int32_array *v126; // x6
  System_Int32_array *v127; // x7
  System_Int32_array **v128; // x23
  System_String_o *v129; // x0
  UISprite_o *teamNameSprite; // x21
  System_String_array **v131; // x2
  System_String_array **v132; // x3
  System_Boolean_array **v133; // x4
  System_Int32_array **v134; // x5
  System_Int32_array *v135; // x6
  System_Int32_array *v136; // x7
  System_Object_array *v137; // x22
  System_Int32_array **GROUP_NAME_IMAGE_NAME; // x23
  struct EventRankingRoundItemInfo_o *v139; // x8
  System_String_array **v140; // x2
  System_String_array **v141; // x3
  System_Boolean_array **v142; // x4
  System_Int32_array **v143; // x5
  System_Int32_array *v144; // x6
  System_Int32_array *v145; // x7
  System_Int32_array **v146; // x23
  System_String_array **v147; // x2
  System_String_array **v148; // x3
  System_Boolean_array **v149; // x4
  System_Int32_array **v150; // x5
  System_Int32_array *v151; // x6
  System_Int32_array *v152; // x7
  System_Int32_array **v153; // x1
  struct EventRankingRoundItemInfo_o *v154; // x8
  System_String_array **v155; // x2
  System_String_array **v156; // x3
  System_Boolean_array **v157; // x4
  System_Int32_array **v158; // x5
  System_Int32_array *v159; // x6
  System_Int32_array *v160; // x7
  System_Int32_array **v161; // x23
  System_String_o *v162; // x0
  struct EventRankingRoundItemInfo_o *v163; // x8
  UILabel_o *supportInfoLabel; // x21
  int64_t supportPoint; // x22
  System_String_array **v166; // x2
  System_String_array **v167; // x3
  System_Boolean_array **v168; // x4
  System_Int32_array **v169; // x5
  System_Int32_array *v170; // x6
  System_Int32_array *v171; // x7
  EventRankingListViewItemDraw_c *v172; // x0
  UISprite_o *goalSprite; // x21
  System_String_o *GOAL_IMAGE_NAME; // x22
  UISprite_o *rewardGetSprite; // x21
  System_String_array **v176; // x2
  System_String_array **v177; // x3
  System_Boolean_array **v178; // x4
  System_Int32_array **v179; // x5
  System_Int32_array *v180; // x6
  System_Int32_array *v181; // x7
  EventRankingListViewItemDraw_c *v182; // x8
  System_Object_array *v183; // x22
  System_Int32_array **REWARD_GET_IMAGE_NAME; // x23
  struct EventRankingRoundItemInfo_o *v185; // x8
  System_String_array **v186; // x2
  System_String_array **v187; // x3
  System_Boolean_array **v188; // x4
  System_Int32_array **v189; // x5
  System_Int32_array *v190; // x6
  System_Int32_array *v191; // x7
  System_Int32_array **v192; // x23
  System_String_array **v193; // x2
  System_String_array **v194; // x3
  System_Boolean_array **v195; // x4
  System_Int32_array **v196; // x5
  System_Int32_array *v197; // x6
  System_Int32_array *v198; // x7
  System_Int32_array **v199; // x1
  System_String_array **v200; // x2
  System_String_array **v201; // x3
  System_Boolean_array **v202; // x4
  System_Int32_array **v203; // x5
  System_Int32_array *v204; // x6
  System_Int32_array *v205; // x7
  System_Int32_array **v206; // x23
  System_String_o *v207; // x22
  int32_t v208; // w21
  struct GiftEntity_array *giftEntityList; // x1
  struct GiftEntity_array *v210; // x8
  int max_length; // w8
  struct EventRankingListViewObject_o *listViewObject; // x8
  UnityEngine_Object_o *manager; // x20
  struct EventRankingListViewObject_o *v214; // x9
  struct GiftEntity_array *v215; // x8
  __int64 v216; // x10
  il2cpp_array_size_t v217; // w10
  int v218; // w9
  struct GiftEntity_array *v219; // x8
  int32_t *v220; // x8
  int32_t v221; // w3
  __int64 v222; // x0
  __int64 v223; // x0
  EventRankingListViewManager_o *v224; // x0
  int32_t v225; // w1
  const MethodInfo *v226; // x2
  int32_t groupId; // [xsp+0h] [xbp-70h] BYREF
  int32_t v228; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t groupImageId; // [xsp+8h] [xbp-68h] BYREF
  int32_t v230; // [xsp+Ch] [xbp-64h] BYREF
  int32_t v231; // [xsp+10h] [xbp-60h] BYREF
  int32_t v232; // [xsp+14h] [xbp-5Ch] BYREF
  int v233; // [xsp+18h] [xbp-58h] BYREF
  int32_t eventId; // [xsp+1Ch] [xbp-54h] BYREF

  v5 = item;
  if ( (byte_42E8E8D & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)item, mode, method);
    sub_B5D5C4(&EventRankingListViewItemDraw_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&EventRankingListViewManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&EventRewardRootComponent_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&int_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&object___TypeInfo, v22, v23, v24);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_16096/*"_"*/, v28, v29, v30);
    byte_42E8E8D = 1;
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
  rewardGetObj = sub_B5D5DC(object___TypeInfo, 4LL);
  v40 = (System_Object_array *)rewardGetObj;
  v41 = EventRankingListViewItemDraw_TypeInfo;
  if ( (BYTE3(EventRankingListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRankingListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRankingListViewItemDraw_TypeInfo);
    v41 = EventRankingListViewItemDraw_TypeInfo;
  }
  if ( !v40 )
    goto LABEL_153;
  BOARD_IMAGE_NAME = (System_Int32_array **)v41->static_fields->BOARD_IMAGE_NAME;
  if ( BOARD_IMAGE_NAME )
  {
    rewardGetObj = sub_B5D684(BOARD_IMAGE_NAME, v40->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_155;
  }
  if ( !v40->max_length )
    goto LABEL_154;
  v40->m_Items[0] = (Il2CppObject *)BOARD_IMAGE_NAME;
  sub_B5D560((BattleServantConfConponent_o *)v40->m_Items, BOARD_IMAGE_NAME, v34, v35, v36, v37, v38, v39);
  itemInfo = v5->fields.itemInfo;
  if ( !itemInfo )
    goto LABEL_153;
  eventId = itemInfo->fields.eventId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &eventId);
  v50 = (System_Int32_array **)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_B5D684(rewardGetObj, v40->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_155;
  }
  if ( v40->max_length <= 1 )
    goto LABEL_154;
  v40->m_Items[1] = (Il2CppObject *)v50;
  sub_B5D560((BattleServantConfConponent_o *)&v40->m_Items[1], v50, v44, v45, v46, v47, v48, v49);
  rewardGetObj = StringLiteral_16096/*"_"*/;
  if ( StringLiteral_16096/*"_"*/ )
  {
    rewardGetObj = sub_B5D684(StringLiteral_16096/*"_"*/, v40->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_155;
    v57 = (System_Int32_array **)StringLiteral_16096/*"_"*/;
  }
  else
  {
    v57 = 0LL;
  }
  if ( v40->max_length <= 2 )
    goto LABEL_154;
  v40->m_Items[2] = (Il2CppObject *)v57;
  sub_B5D560((BattleServantConfConponent_o *)&v40->m_Items[2], v57, v51, v52, v53, v54, v55, v56);
  v233 = ranking;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v233);
  v64 = (System_Int32_array **)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_B5D684(rewardGetObj, v40->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_155;
  }
  if ( v40->max_length <= 3 )
    goto LABEL_154;
  v40->m_Items[3] = (Il2CppObject *)v64;
  sub_B5D560((BattleServantConfConponent_o *)&v40->m_Items[3], v64, v58, v59, v60, v61, v62, v63);
  v65 = System_String__Concat_44587572(v40, 0LL);
  if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
  }
  EventRewardRootComponent__setRewardInfoImg(baseSprite, v65, 0LL);
  rankingSprite = this->fields.rankingSprite;
  rewardGetObj = sub_B5D5DC(object___TypeInfo, 4LL);
  if ( !rewardGetObj )
    goto LABEL_153;
  v73 = (System_Object_array *)rewardGetObj;
  RANKING_IMAGE_NAME = (System_Int32_array **)EventRankingListViewItemDraw_TypeInfo->static_fields->RANKING_IMAGE_NAME;
  if ( RANKING_IMAGE_NAME )
  {
    rewardGetObj = sub_B5D684(RANKING_IMAGE_NAME, *(_QWORD *)(*(_QWORD *)rewardGetObj + 64LL));
    if ( !rewardGetObj )
      goto LABEL_155;
  }
  if ( !v73->max_length )
    goto LABEL_154;
  v73->m_Items[0] = (Il2CppObject *)RANKING_IMAGE_NAME;
  sub_B5D560((BattleServantConfConponent_o *)v73->m_Items, RANKING_IMAGE_NAME, v67, v68, v69, v70, v71, v72);
  v75 = v5->fields.itemInfo;
  if ( !v75 )
    goto LABEL_153;
  v232 = v75->fields.eventId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v232);
  v82 = (System_Int32_array **)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_B5D684(rewardGetObj, v73->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_155;
  }
  if ( v73->max_length <= 1 )
    goto LABEL_154;
  v73->m_Items[1] = (Il2CppObject *)v82;
  sub_B5D560((BattleServantConfConponent_o *)&v73->m_Items[1], v82, v76, v77, v78, v79, v80, v81);
  rewardGetObj = StringLiteral_16096/*"_"*/;
  if ( StringLiteral_16096/*"_"*/ )
  {
    rewardGetObj = sub_B5D684(StringLiteral_16096/*"_"*/, v73->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_155;
    v89 = (System_Int32_array **)StringLiteral_16096/*"_"*/;
  }
  else
  {
    v89 = 0LL;
  }
  if ( v73->max_length <= 2 )
    goto LABEL_154;
  v73->m_Items[2] = (Il2CppObject *)v89;
  sub_B5D560((BattleServantConfConponent_o *)&v73->m_Items[2], v89, v83, v84, v85, v86, v87, v88);
  v231 = v5->fields.ranking;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v231);
  v96 = (System_Int32_array **)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_B5D684(rewardGetObj, v73->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_155;
  }
  if ( v73->max_length <= 3 )
    goto LABEL_154;
  v73->m_Items[3] = (Il2CppObject *)v96;
  sub_B5D560((BattleServantConfConponent_o *)&v73->m_Items[3], v96, v90, v91, v92, v93, v94, v95);
  v97 = System_String__Concat_44587572(v73, 0LL);
  EventRewardRootComponent__setRewardInfoImg(rankingSprite, v97, 0LL);
  teamSprite = this->fields.teamSprite;
  rewardGetObj = sub_B5D5DC(object___TypeInfo, 4LL);
  if ( !rewardGetObj )
    goto LABEL_153;
  v105 = (System_Object_array *)rewardGetObj;
  GROUP_IMAGE_NAME = (System_Int32_array **)EventRankingListViewItemDraw_TypeInfo->static_fields->GROUP_IMAGE_NAME;
  if ( GROUP_IMAGE_NAME )
  {
    rewardGetObj = sub_B5D684(GROUP_IMAGE_NAME, *(_QWORD *)(*(_QWORD *)rewardGetObj + 64LL));
    if ( !rewardGetObj )
      goto LABEL_155;
  }
  if ( !v105->max_length )
    goto LABEL_154;
  v105->m_Items[0] = (Il2CppObject *)GROUP_IMAGE_NAME;
  sub_B5D560((BattleServantConfConponent_o *)v105->m_Items, GROUP_IMAGE_NAME, v99, v100, v101, v102, v103, v104);
  v107 = v5->fields.itemInfo;
  if ( !v107 )
    goto LABEL_153;
  v230 = v107->fields.eventId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v230);
  v114 = (System_Int32_array **)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_B5D684(rewardGetObj, v105->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_155;
  }
  if ( v105->max_length <= 1 )
    goto LABEL_154;
  v105->m_Items[1] = (Il2CppObject *)v114;
  sub_B5D560((BattleServantConfConponent_o *)&v105->m_Items[1], v114, v108, v109, v110, v111, v112, v113);
  rewardGetObj = StringLiteral_16096/*"_"*/;
  if ( StringLiteral_16096/*"_"*/ )
  {
    rewardGetObj = sub_B5D684(StringLiteral_16096/*"_"*/, v105->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_155;
    v121 = (System_Int32_array **)StringLiteral_16096/*"_"*/;
  }
  else
  {
    v121 = 0LL;
  }
  if ( v105->max_length <= 2 )
    goto LABEL_154;
  v105->m_Items[2] = (Il2CppObject *)v121;
  sub_B5D560((BattleServantConfConponent_o *)&v105->m_Items[2], v121, v115, v116, v117, v118, v119, v120);
  groupImageId = v5->fields.groupImageId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &groupImageId);
  v128 = (System_Int32_array **)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_B5D684(rewardGetObj, v105->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_155;
  }
  if ( v105->max_length <= 3 )
    goto LABEL_154;
  v105->m_Items[3] = (Il2CppObject *)v128;
  sub_B5D560((BattleServantConfConponent_o *)&v105->m_Items[3], v128, v122, v123, v124, v125, v126, v127);
  v129 = System_String__Concat_44587572(v105, 0LL);
  EventRewardRootComponent__setRewardInfoImg(teamSprite, v129, 0LL);
  teamNameSprite = this->fields.teamNameSprite;
  rewardGetObj = sub_B5D5DC(object___TypeInfo, 4LL);
  if ( !rewardGetObj )
    goto LABEL_153;
  v137 = (System_Object_array *)rewardGetObj;
  GROUP_NAME_IMAGE_NAME = (System_Int32_array **)EventRankingListViewItemDraw_TypeInfo->static_fields->GROUP_NAME_IMAGE_NAME;
  if ( GROUP_NAME_IMAGE_NAME )
  {
    rewardGetObj = sub_B5D684(GROUP_NAME_IMAGE_NAME, *(_QWORD *)(*(_QWORD *)rewardGetObj + 64LL));
    if ( !rewardGetObj )
      goto LABEL_155;
  }
  if ( !v137->max_length )
    goto LABEL_154;
  v137->m_Items[0] = (Il2CppObject *)GROUP_NAME_IMAGE_NAME;
  sub_B5D560((BattleServantConfConponent_o *)v137->m_Items, GROUP_NAME_IMAGE_NAME, v131, v132, v133, v134, v135, v136);
  v139 = v5->fields.itemInfo;
  if ( !v139 )
    goto LABEL_153;
  v228 = v139->fields.eventId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v228);
  v146 = (System_Int32_array **)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_B5D684(rewardGetObj, v137->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_155;
  }
  if ( v137->max_length <= 1 )
    goto LABEL_154;
  v137->m_Items[1] = (Il2CppObject *)v146;
  sub_B5D560((BattleServantConfConponent_o *)&v137->m_Items[1], v146, v140, v141, v142, v143, v144, v145);
  rewardGetObj = StringLiteral_16096/*"_"*/;
  if ( StringLiteral_16096/*"_"*/ )
  {
    rewardGetObj = sub_B5D684(StringLiteral_16096/*"_"*/, v137->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_155;
    v153 = (System_Int32_array **)StringLiteral_16096/*"_"*/;
  }
  else
  {
    v153 = 0LL;
  }
  if ( v137->max_length <= 2 )
    goto LABEL_154;
  v137->m_Items[2] = (Il2CppObject *)v153;
  sub_B5D560((BattleServantConfConponent_o *)&v137->m_Items[2], v153, v147, v148, v149, v150, v151, v152);
  v154 = v5->fields.itemInfo;
  if ( !v154 )
    goto LABEL_153;
  groupId = v154->fields.groupId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &groupId);
  v161 = (System_Int32_array **)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_B5D684(rewardGetObj, v137->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_155;
  }
  if ( v137->max_length <= 3 )
    goto LABEL_154;
  v137->m_Items[3] = (Il2CppObject *)v161;
  sub_B5D560((BattleServantConfConponent_o *)&v137->m_Items[3], v161, v155, v156, v157, v158, v159, v160);
  v162 = System_String__Concat_44587572(v137, 0LL);
  EventRewardRootComponent__setRewardInfoImg(teamNameSprite, v162, 0LL);
  rewardGetObj = EventRewardRootComponent__setRewardInfoImg(
                   this->fields.supportTxtSprite,
                   EventRankingListViewItemDraw_TypeInfo->static_fields->SUPPORT_TXT_IMAGE_NAME,
                   0LL);
  v163 = v5->fields.itemInfo;
  if ( !v163 )
    goto LABEL_153;
  supportInfoLabel = this->fields.supportInfoLabel;
  supportPoint = v163->fields.supportPoint;
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
      v172 = EventRankingListViewItemDraw_TypeInfo;
      goalSprite = this->fields.goalSprite;
      if ( (BYTE3(EventRankingListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRankingListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRankingListViewItemDraw_TypeInfo);
        v172 = EventRankingListViewItemDraw_TypeInfo;
      }
      GOAL_IMAGE_NAME = v172->static_fields->GOAL_IMAGE_NAME;
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
      rewardGetObj = sub_B5D5DC(object___TypeInfo, 4LL);
      v182 = EventRankingListViewItemDraw_TypeInfo;
      v183 = (System_Object_array *)rewardGetObj;
      if ( (BYTE3(EventRankingListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRankingListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRankingListViewItemDraw_TypeInfo);
        v182 = EventRankingListViewItemDraw_TypeInfo;
      }
      if ( !v183 )
        goto LABEL_153;
      REWARD_GET_IMAGE_NAME = (System_Int32_array **)v182->static_fields->REWARD_GET_IMAGE_NAME;
      if ( !REWARD_GET_IMAGE_NAME
        || (rewardGetObj = sub_B5D684(REWARD_GET_IMAGE_NAME, v183->obj.klass->_1.element_class)) != 0 )
      {
        if ( !v183->max_length )
          goto LABEL_154;
        v183->m_Items[0] = (Il2CppObject *)REWARD_GET_IMAGE_NAME;
        sub_B5D560(
          (BattleServantConfConponent_o *)v183->m_Items,
          REWARD_GET_IMAGE_NAME,
          v176,
          v177,
          v178,
          v179,
          v180,
          v181);
        v185 = v5->fields.itemInfo;
        if ( !v185 )
          goto LABEL_153;
        eventId = v185->fields.eventId;
        rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &eventId);
        v192 = (System_Int32_array **)rewardGetObj;
        if ( !rewardGetObj || (rewardGetObj = sub_B5D684(rewardGetObj, v183->obj.klass->_1.element_class)) != 0 )
        {
          if ( v183->max_length <= 1 )
            goto LABEL_154;
          v183->m_Items[1] = (Il2CppObject *)v192;
          sub_B5D560((BattleServantConfConponent_o *)&v183->m_Items[1], v192, v186, v187, v188, v189, v190, v191);
          rewardGetObj = StringLiteral_16096/*"_"*/;
          if ( StringLiteral_16096/*"_"*/ )
          {
            rewardGetObj = sub_B5D684(StringLiteral_16096/*"_"*/, v183->obj.klass->_1.element_class);
            if ( !rewardGetObj )
              goto LABEL_155;
            v199 = (System_Int32_array **)StringLiteral_16096/*"_"*/;
          }
          else
          {
            v199 = 0LL;
          }
          if ( v183->max_length <= 2 )
            goto LABEL_154;
          v183->m_Items[2] = (Il2CppObject *)v199;
          sub_B5D560((BattleServantConfConponent_o *)&v183->m_Items[2], v199, v193, v194, v195, v196, v197, v198);
          v233 = ranking;
          rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v233);
          v206 = (System_Int32_array **)rewardGetObj;
          if ( !rewardGetObj || (rewardGetObj = sub_B5D684(rewardGetObj, v183->obj.klass->_1.element_class)) != 0 )
          {
            if ( v183->max_length <= 3 )
              goto LABEL_154;
            v183->m_Items[3] = (Il2CppObject *)v206;
            sub_B5D560((BattleServantConfConponent_o *)&v183->m_Items[3], v206, v200, v201, v202, v203, v204, v205);
            v207 = System_String__Concat_44587572(v183, 0LL);
            if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
            }
            EventRewardRootComponent__setRewardInfoImg(rewardGetSprite, v207, 0LL);
            rewardGetObj = (__int64)this->fields.rewardGetSprite;
            if ( !rewardGetObj )
              goto LABEL_153;
            rewardGetObj = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rewardGetObj, 0LL);
            if ( !rewardGetObj )
              goto LABEL_153;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rewardGetObj, 1, 0LL);
            v208 = v5->fields.ranking;
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
              v208 <= BalanceConfig_TypeInfo->static_fields->raceRewardRankMax,
              0LL);
            goto LABEL_130;
          }
        }
      }
LABEL_155:
      v223 = sub_B5D6BC(rewardGetObj);
      sub_B5D668(v223, 0LL);
    }
  }
LABEL_130:
  giftEntityList = v5->fields.giftEntityList;
  this->fields.giftEntityList = giftEntityList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.giftEntityList,
    (System_Int32_array **)giftEntityList,
    v166,
    v167,
    v168,
    v169,
    v170,
    v171);
  v210 = v5->fields.giftEntityList;
  if ( !v210 )
    goto LABEL_153;
  max_length = v210->max_length;
  this->fields.isMultipleReward = max_length > 1;
  if ( max_length < 2 )
  {
    v219 = this->fields.giftEntityList;
    if ( !v219 )
      goto LABEL_153;
    if ( v219->max_length )
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
    v214 = this->fields.listViewObject;
    if ( !v214 )
      goto LABEL_153;
    v215 = this->fields.giftEntityList;
    if ( !v215 )
      goto LABEL_153;
    rewardGetObj = (__int64)v214->fields.manager;
    if ( !rewardGetObj )
      goto LABEL_153;
    item = (EventRankingListViewItem_o *)EventRankingListViewManager_TypeInfo;
    v216 = *(&EventRankingListViewManager_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)rewardGetObj + 300LL) < (unsigned int)v216
      || *(EventRankingListViewManager_c **)(*(_QWORD *)(*(_QWORD *)rewardGetObj + 200LL) + 8 * v216 - 8) != EventRankingListViewManager_TypeInfo )
    {
      v224 = (EventRankingListViewManager_o *)sub_B5D990(rewardGetObj);
      EventRankingListViewManager__GetAlphaAnimCnt(v224, v225, v226);
      return;
    }
    v217 = v215->max_length;
    v218 = *(_DWORD *)(rewardGetObj + 332) % (int)v217;
    if ( v218 < v217 )
    {
      v219 = (struct GiftEntity_array *)((char *)v215 + 8 * v218);
LABEL_146:
      v220 = (int32_t *)v219->m_Items[0];
      if ( v220 )
      {
        rewardGetObj = (__int64)this->fields.itemIcon;
        if ( rewardGetObj )
        {
          if ( v220[7] <= 1 )
            v221 = -1;
          else
            v221 = v220[7];
          ItemIconComponent__SetGift((ItemIconComponent_o *)rewardGetObj, v220[5], v220[6], v221, 0, 0LL);
          return;
        }
      }
LABEL_153:
      sub_B5D69C(rewardGetObj, item);
    }
LABEL_154:
    v222 = sub_B5D6C8(rewardGetObj);
    sub_B5D668(v222, 0LL);
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
  sub_B5D560(
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
      sub_B5D69C(0LL, method);
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
      sub_B5D69C(this, item);
    EventRankingListViewItemDraw__SetRewardIconAlpha(this, manager->fields.alphaAnimNow, (const MethodInfo *)item);
  }
}