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

  if ( (byte_42B0483 & 1) == 0 )
  {
    sub_B52984(&EventRankingListViewItemDraw_TypeInfo);
    sub_B52984(&StringLiteral_18700/*"event_ranking_"*/);
    sub_B52984(&StringLiteral_18659/*"event_goal_flag"*/);
    sub_B52984(&StringLiteral_18704/*"event_ranking_rewardget_"*/);
    sub_B52984(&StringLiteral_18703/*"event_ranking_reward_txt"*/);
    sub_B52984(&StringLiteral_18702/*"event_ranking_group_name_"*/);
    sub_B52984(&StringLiteral_18701/*"event_ranking_group_"*/);
    sub_B52984(&StringLiteral_18737/*"event_support_txt"*/);
    sub_B52984(&StringLiteral_18717/*"event_rewardranking_"*/);
    byte_42B0483 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventRankingListViewItemDraw_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_18701/*"event_ranking_group_"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18701/*"event_ranking_group_"*/;
  sub_B52920(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_18702/*"event_ranking_group_name_"*/;
  v9->GROUP_NAME_IMAGE_NAME = (struct System_String_o *)StringLiteral_18702/*"event_ranking_group_name_"*/;
  sub_B52920((BattleServantConfConponent_o *)&v9->GROUP_NAME_IMAGE_NAME, v10, v11, v12, v13, v14, v15, v16);
  v17 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_18717/*"event_rewardranking_"*/;
  v17->BOARD_IMAGE_NAME = (struct System_String_o *)StringLiteral_18717/*"event_rewardranking_"*/;
  sub_B52920((BattleServantConfConponent_o *)&v17->BOARD_IMAGE_NAME, v18, v19, v20, v21, v22, v23, v24);
  v25 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v26 = (System_Int32_array **)StringLiteral_18704/*"event_ranking_rewardget_"*/;
  v25->REWARD_GET_IMAGE_NAME = (struct System_String_o *)StringLiteral_18704/*"event_ranking_rewardget_"*/;
  sub_B52920((BattleServantConfConponent_o *)&v25->REWARD_GET_IMAGE_NAME, v26, v27, v28, v29, v30, v31, v32);
  v33 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v34 = (System_Int32_array **)StringLiteral_18700/*"event_ranking_"*/;
  v33->RANKING_IMAGE_NAME = (struct System_String_o *)StringLiteral_18700/*"event_ranking_"*/;
  sub_B52920((BattleServantConfConponent_o *)&v33->RANKING_IMAGE_NAME, v34, v35, v36, v37, v38, v39, v40);
  v41 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v42 = (System_Int32_array **)StringLiteral_18659/*"event_goal_flag"*/;
  v41->GOAL_IMAGE_NAME = (struct System_String_o *)StringLiteral_18659/*"event_goal_flag"*/;
  sub_B52920((BattleServantConfConponent_o *)&v41->GOAL_IMAGE_NAME, v42, v43, v44, v45, v46, v47, v48);
  v49 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v50 = (System_Int32_array **)StringLiteral_18703/*"event_ranking_reward_txt"*/;
  v49->HIGHER_REWARD_IMAGE_NAME = (struct System_String_o *)StringLiteral_18703/*"event_ranking_reward_txt"*/;
  sub_B52920((BattleServantConfConponent_o *)&v49->HIGHER_REWARD_IMAGE_NAME, v50, v51, v52, v53, v54, v55, v56);
  v57 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v58 = (System_Int32_array **)StringLiteral_18737/*"event_support_txt"*/;
  v57->SUPPORT_TXT_IMAGE_NAME = (struct System_String_o *)StringLiteral_18737/*"event_support_txt"*/;
  sub_B52920((BattleServantConfConponent_o *)&v57->SUPPORT_TXT_IMAGE_NAME, v58, v59, v60, v61, v62, v63, v64);
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
      v8 = sub_B52A88(this);
      sub_B52A28(v8, 0LL);
    }
    v6 = (int32_t *)giftEntityList->m_Items[v5];
    if ( !v6 || (this = (EventRankingListViewItemDraw_o *)this->fields.itemIcon) == 0LL )
LABEL_12:
      sub_B52A5C(this, manager);
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
  struct EventRankingRoundItemInfo_o *itemInfo; // x8
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **v26; // x23
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **v40; // x23
  System_String_o *v41; // x22
  UISprite_o *rankingSprite; // x21
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Object_array *v49; // x22
  System_Int32_array **RANKING_IMAGE_NAME; // x23
  struct EventRankingRoundItemInfo_o *v51; // x8
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int32_array **v58; // x23
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Int32_array **v65; // x1
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_Int32_array **v72; // x23
  System_String_o *v73; // x0
  UISprite_o *teamSprite; // x21
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_Object_array *v81; // x22
  System_Int32_array **GROUP_IMAGE_NAME; // x23
  struct EventRankingRoundItemInfo_o *v83; // x8
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  System_Int32_array **v90; // x23
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  System_Int32_array **v97; // x1
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  System_Int32_array **v104; // x23
  System_String_o *v105; // x0
  UISprite_o *teamNameSprite; // x21
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  System_Object_array *v113; // x22
  System_Int32_array **GROUP_NAME_IMAGE_NAME; // x23
  struct EventRankingRoundItemInfo_o *v115; // x8
  System_String_array **v116; // x2
  System_String_array **v117; // x3
  System_Boolean_array **v118; // x4
  System_Int32_array **v119; // x5
  System_Int32_array *v120; // x6
  System_Int32_array *v121; // x7
  System_Int32_array **v122; // x23
  System_String_array **v123; // x2
  System_String_array **v124; // x3
  System_Boolean_array **v125; // x4
  System_Int32_array **v126; // x5
  System_Int32_array *v127; // x6
  System_Int32_array *v128; // x7
  System_Int32_array **v129; // x1
  struct EventRankingRoundItemInfo_o *v130; // x8
  System_String_array **v131; // x2
  System_String_array **v132; // x3
  System_Boolean_array **v133; // x4
  System_Int32_array **v134; // x5
  System_Int32_array *v135; // x6
  System_Int32_array *v136; // x7
  System_Int32_array **v137; // x23
  System_String_o *v138; // x0
  struct EventRankingRoundItemInfo_o *v139; // x8
  UILabel_o *supportInfoLabel; // x21
  int64_t supportPoint; // x22
  System_String_array **v142; // x2
  System_String_array **v143; // x3
  System_Boolean_array **v144; // x4
  System_Int32_array **v145; // x5
  System_Int32_array *v146; // x6
  System_Int32_array *v147; // x7
  EventRankingListViewItemDraw_c *v148; // x0
  UISprite_o *goalSprite; // x21
  System_String_o *GOAL_IMAGE_NAME; // x22
  UISprite_o *rewardGetSprite; // x21
  System_String_array **v152; // x2
  System_String_array **v153; // x3
  System_Boolean_array **v154; // x4
  System_Int32_array **v155; // x5
  System_Int32_array *v156; // x6
  System_Int32_array *v157; // x7
  EventRankingListViewItemDraw_c *v158; // x8
  System_Object_array *v159; // x22
  System_Int32_array **REWARD_GET_IMAGE_NAME; // x23
  struct EventRankingRoundItemInfo_o *v161; // x8
  System_String_array **v162; // x2
  System_String_array **v163; // x3
  System_Boolean_array **v164; // x4
  System_Int32_array **v165; // x5
  System_Int32_array *v166; // x6
  System_Int32_array *v167; // x7
  System_Int32_array **v168; // x23
  System_String_array **v169; // x2
  System_String_array **v170; // x3
  System_Boolean_array **v171; // x4
  System_Int32_array **v172; // x5
  System_Int32_array *v173; // x6
  System_Int32_array *v174; // x7
  System_Int32_array **v175; // x1
  System_String_array **v176; // x2
  System_String_array **v177; // x3
  System_Boolean_array **v178; // x4
  System_Int32_array **v179; // x5
  System_Int32_array *v180; // x6
  System_Int32_array *v181; // x7
  System_Int32_array **v182; // x23
  System_String_o *v183; // x22
  int32_t v184; // w21
  struct GiftEntity_array *giftEntityList; // x1
  struct GiftEntity_array *v186; // x8
  int max_length; // w8
  struct EventRankingListViewObject_o *listViewObject; // x8
  UnityEngine_Object_o *manager; // x20
  struct EventRankingListViewObject_o *v190; // x9
  struct GiftEntity_array *v191; // x8
  __int64 v192; // x10
  il2cpp_array_size_t v193; // w10
  int v194; // w9
  struct GiftEntity_array *v195; // x8
  int32_t *v196; // x8
  int32_t v197; // w3
  __int64 v198; // x0
  __int64 v199; // x0
  EventRankingListViewManager_o *v200; // x0
  int32_t v201; // w1
  const MethodInfo *v202; // x2
  int32_t groupId; // [xsp+0h] [xbp-70h] BYREF
  int32_t v204; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t groupImageId; // [xsp+8h] [xbp-68h] BYREF
  int32_t v206; // [xsp+Ch] [xbp-64h] BYREF
  int32_t v207; // [xsp+10h] [xbp-60h] BYREF
  int32_t v208; // [xsp+14h] [xbp-5Ch] BYREF
  int v209; // [xsp+18h] [xbp-58h] BYREF
  int32_t eventId; // [xsp+1Ch] [xbp-54h] BYREF

  v5 = item;
  if ( (byte_42B0482 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&EventRankingListViewItemDraw_TypeInfo);
    sub_B52984(&EventRankingListViewManager_TypeInfo);
    sub_B52984(&EventRewardRootComponent_TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&object___TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_16011/*"_"*/);
    byte_42B0482 = 1;
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
  rewardGetObj = sub_B5299C(object___TypeInfo, 4LL);
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
    rewardGetObj = sub_B52A44(BOARD_IMAGE_NAME, v16->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_155;
  }
  if ( !v16->max_length )
    goto LABEL_154;
  v16->m_Items[0] = (Il2CppObject *)BOARD_IMAGE_NAME;
  sub_B52920((BattleServantConfConponent_o *)v16->m_Items, BOARD_IMAGE_NAME, v10, v11, v12, v13, v14, v15);
  itemInfo = v5->fields.itemInfo;
  if ( !itemInfo )
    goto LABEL_153;
  eventId = itemInfo->fields.eventId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &eventId);
  v26 = (System_Int32_array **)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_B52A44(rewardGetObj, v16->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_155;
  }
  if ( v16->max_length <= 1 )
    goto LABEL_154;
  v16->m_Items[1] = (Il2CppObject *)v26;
  sub_B52920((BattleServantConfConponent_o *)&v16->m_Items[1], v26, v20, v21, v22, v23, v24, v25);
  rewardGetObj = StringLiteral_16011/*"_"*/;
  if ( StringLiteral_16011/*"_"*/ )
  {
    rewardGetObj = sub_B52A44(StringLiteral_16011/*"_"*/, v16->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_155;
    v33 = (System_Int32_array **)StringLiteral_16011/*"_"*/;
  }
  else
  {
    v33 = 0LL;
  }
  if ( v16->max_length <= 2 )
    goto LABEL_154;
  v16->m_Items[2] = (Il2CppObject *)v33;
  sub_B52920((BattleServantConfConponent_o *)&v16->m_Items[2], v33, v27, v28, v29, v30, v31, v32);
  v209 = ranking;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v209);
  v40 = (System_Int32_array **)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_B52A44(rewardGetObj, v16->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_155;
  }
  if ( v16->max_length <= 3 )
    goto LABEL_154;
  v16->m_Items[3] = (Il2CppObject *)v40;
  sub_B52920((BattleServantConfConponent_o *)&v16->m_Items[3], v40, v34, v35, v36, v37, v38, v39);
  v41 = System_String__Concat_44578100(v16, 0LL);
  if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
  }
  EventRewardRootComponent__setRewardInfoImg(baseSprite, v41, 0LL);
  rankingSprite = this->fields.rankingSprite;
  rewardGetObj = sub_B5299C(object___TypeInfo, 4LL);
  if ( !rewardGetObj )
    goto LABEL_153;
  v49 = (System_Object_array *)rewardGetObj;
  RANKING_IMAGE_NAME = (System_Int32_array **)EventRankingListViewItemDraw_TypeInfo->static_fields->RANKING_IMAGE_NAME;
  if ( RANKING_IMAGE_NAME )
  {
    rewardGetObj = sub_B52A44(RANKING_IMAGE_NAME, *(_QWORD *)(*(_QWORD *)rewardGetObj + 64LL));
    if ( !rewardGetObj )
      goto LABEL_155;
  }
  if ( !v49->max_length )
    goto LABEL_154;
  v49->m_Items[0] = (Il2CppObject *)RANKING_IMAGE_NAME;
  sub_B52920((BattleServantConfConponent_o *)v49->m_Items, RANKING_IMAGE_NAME, v43, v44, v45, v46, v47, v48);
  v51 = v5->fields.itemInfo;
  if ( !v51 )
    goto LABEL_153;
  v208 = v51->fields.eventId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v208);
  v58 = (System_Int32_array **)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_B52A44(rewardGetObj, v49->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_155;
  }
  if ( v49->max_length <= 1 )
    goto LABEL_154;
  v49->m_Items[1] = (Il2CppObject *)v58;
  sub_B52920((BattleServantConfConponent_o *)&v49->m_Items[1], v58, v52, v53, v54, v55, v56, v57);
  rewardGetObj = StringLiteral_16011/*"_"*/;
  if ( StringLiteral_16011/*"_"*/ )
  {
    rewardGetObj = sub_B52A44(StringLiteral_16011/*"_"*/, v49->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_155;
    v65 = (System_Int32_array **)StringLiteral_16011/*"_"*/;
  }
  else
  {
    v65 = 0LL;
  }
  if ( v49->max_length <= 2 )
    goto LABEL_154;
  v49->m_Items[2] = (Il2CppObject *)v65;
  sub_B52920((BattleServantConfConponent_o *)&v49->m_Items[2], v65, v59, v60, v61, v62, v63, v64);
  v207 = v5->fields.ranking;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v207);
  v72 = (System_Int32_array **)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_B52A44(rewardGetObj, v49->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_155;
  }
  if ( v49->max_length <= 3 )
    goto LABEL_154;
  v49->m_Items[3] = (Il2CppObject *)v72;
  sub_B52920((BattleServantConfConponent_o *)&v49->m_Items[3], v72, v66, v67, v68, v69, v70, v71);
  v73 = System_String__Concat_44578100(v49, 0LL);
  EventRewardRootComponent__setRewardInfoImg(rankingSprite, v73, 0LL);
  teamSprite = this->fields.teamSprite;
  rewardGetObj = sub_B5299C(object___TypeInfo, 4LL);
  if ( !rewardGetObj )
    goto LABEL_153;
  v81 = (System_Object_array *)rewardGetObj;
  GROUP_IMAGE_NAME = (System_Int32_array **)EventRankingListViewItemDraw_TypeInfo->static_fields->GROUP_IMAGE_NAME;
  if ( GROUP_IMAGE_NAME )
  {
    rewardGetObj = sub_B52A44(GROUP_IMAGE_NAME, *(_QWORD *)(*(_QWORD *)rewardGetObj + 64LL));
    if ( !rewardGetObj )
      goto LABEL_155;
  }
  if ( !v81->max_length )
    goto LABEL_154;
  v81->m_Items[0] = (Il2CppObject *)GROUP_IMAGE_NAME;
  sub_B52920((BattleServantConfConponent_o *)v81->m_Items, GROUP_IMAGE_NAME, v75, v76, v77, v78, v79, v80);
  v83 = v5->fields.itemInfo;
  if ( !v83 )
    goto LABEL_153;
  v206 = v83->fields.eventId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v206);
  v90 = (System_Int32_array **)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_B52A44(rewardGetObj, v81->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_155;
  }
  if ( v81->max_length <= 1 )
    goto LABEL_154;
  v81->m_Items[1] = (Il2CppObject *)v90;
  sub_B52920((BattleServantConfConponent_o *)&v81->m_Items[1], v90, v84, v85, v86, v87, v88, v89);
  rewardGetObj = StringLiteral_16011/*"_"*/;
  if ( StringLiteral_16011/*"_"*/ )
  {
    rewardGetObj = sub_B52A44(StringLiteral_16011/*"_"*/, v81->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_155;
    v97 = (System_Int32_array **)StringLiteral_16011/*"_"*/;
  }
  else
  {
    v97 = 0LL;
  }
  if ( v81->max_length <= 2 )
    goto LABEL_154;
  v81->m_Items[2] = (Il2CppObject *)v97;
  sub_B52920((BattleServantConfConponent_o *)&v81->m_Items[2], v97, v91, v92, v93, v94, v95, v96);
  groupImageId = v5->fields.groupImageId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &groupImageId);
  v104 = (System_Int32_array **)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_B52A44(rewardGetObj, v81->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_155;
  }
  if ( v81->max_length <= 3 )
    goto LABEL_154;
  v81->m_Items[3] = (Il2CppObject *)v104;
  sub_B52920((BattleServantConfConponent_o *)&v81->m_Items[3], v104, v98, v99, v100, v101, v102, v103);
  v105 = System_String__Concat_44578100(v81, 0LL);
  EventRewardRootComponent__setRewardInfoImg(teamSprite, v105, 0LL);
  teamNameSprite = this->fields.teamNameSprite;
  rewardGetObj = sub_B5299C(object___TypeInfo, 4LL);
  if ( !rewardGetObj )
    goto LABEL_153;
  v113 = (System_Object_array *)rewardGetObj;
  GROUP_NAME_IMAGE_NAME = (System_Int32_array **)EventRankingListViewItemDraw_TypeInfo->static_fields->GROUP_NAME_IMAGE_NAME;
  if ( GROUP_NAME_IMAGE_NAME )
  {
    rewardGetObj = sub_B52A44(GROUP_NAME_IMAGE_NAME, *(_QWORD *)(*(_QWORD *)rewardGetObj + 64LL));
    if ( !rewardGetObj )
      goto LABEL_155;
  }
  if ( !v113->max_length )
    goto LABEL_154;
  v113->m_Items[0] = (Il2CppObject *)GROUP_NAME_IMAGE_NAME;
  sub_B52920((BattleServantConfConponent_o *)v113->m_Items, GROUP_NAME_IMAGE_NAME, v107, v108, v109, v110, v111, v112);
  v115 = v5->fields.itemInfo;
  if ( !v115 )
    goto LABEL_153;
  v204 = v115->fields.eventId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v204);
  v122 = (System_Int32_array **)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_B52A44(rewardGetObj, v113->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_155;
  }
  if ( v113->max_length <= 1 )
    goto LABEL_154;
  v113->m_Items[1] = (Il2CppObject *)v122;
  sub_B52920((BattleServantConfConponent_o *)&v113->m_Items[1], v122, v116, v117, v118, v119, v120, v121);
  rewardGetObj = StringLiteral_16011/*"_"*/;
  if ( StringLiteral_16011/*"_"*/ )
  {
    rewardGetObj = sub_B52A44(StringLiteral_16011/*"_"*/, v113->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_155;
    v129 = (System_Int32_array **)StringLiteral_16011/*"_"*/;
  }
  else
  {
    v129 = 0LL;
  }
  if ( v113->max_length <= 2 )
    goto LABEL_154;
  v113->m_Items[2] = (Il2CppObject *)v129;
  sub_B52920((BattleServantConfConponent_o *)&v113->m_Items[2], v129, v123, v124, v125, v126, v127, v128);
  v130 = v5->fields.itemInfo;
  if ( !v130 )
    goto LABEL_153;
  groupId = v130->fields.groupId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &groupId);
  v137 = (System_Int32_array **)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_B52A44(rewardGetObj, v113->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_155;
  }
  if ( v113->max_length <= 3 )
    goto LABEL_154;
  v113->m_Items[3] = (Il2CppObject *)v137;
  sub_B52920((BattleServantConfConponent_o *)&v113->m_Items[3], v137, v131, v132, v133, v134, v135, v136);
  v138 = System_String__Concat_44578100(v113, 0LL);
  EventRewardRootComponent__setRewardInfoImg(teamNameSprite, v138, 0LL);
  rewardGetObj = EventRewardRootComponent__setRewardInfoImg(
                   this->fields.supportTxtSprite,
                   EventRankingListViewItemDraw_TypeInfo->static_fields->SUPPORT_TXT_IMAGE_NAME,
                   0LL);
  v139 = v5->fields.itemInfo;
  if ( !v139 )
    goto LABEL_153;
  supportInfoLabel = this->fields.supportInfoLabel;
  supportPoint = v139->fields.supportPoint;
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
      v148 = EventRankingListViewItemDraw_TypeInfo;
      goalSprite = this->fields.goalSprite;
      if ( (BYTE3(EventRankingListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRankingListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRankingListViewItemDraw_TypeInfo);
        v148 = EventRankingListViewItemDraw_TypeInfo;
      }
      GOAL_IMAGE_NAME = v148->static_fields->GOAL_IMAGE_NAME;
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
      rewardGetObj = sub_B5299C(object___TypeInfo, 4LL);
      v158 = EventRankingListViewItemDraw_TypeInfo;
      v159 = (System_Object_array *)rewardGetObj;
      if ( (BYTE3(EventRankingListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRankingListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRankingListViewItemDraw_TypeInfo);
        v158 = EventRankingListViewItemDraw_TypeInfo;
      }
      if ( !v159 )
        goto LABEL_153;
      REWARD_GET_IMAGE_NAME = (System_Int32_array **)v158->static_fields->REWARD_GET_IMAGE_NAME;
      if ( !REWARD_GET_IMAGE_NAME
        || (rewardGetObj = sub_B52A44(REWARD_GET_IMAGE_NAME, v159->obj.klass->_1.element_class)) != 0 )
      {
        if ( !v159->max_length )
          goto LABEL_154;
        v159->m_Items[0] = (Il2CppObject *)REWARD_GET_IMAGE_NAME;
        sub_B52920(
          (BattleServantConfConponent_o *)v159->m_Items,
          REWARD_GET_IMAGE_NAME,
          v152,
          v153,
          v154,
          v155,
          v156,
          v157);
        v161 = v5->fields.itemInfo;
        if ( !v161 )
          goto LABEL_153;
        eventId = v161->fields.eventId;
        rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &eventId);
        v168 = (System_Int32_array **)rewardGetObj;
        if ( !rewardGetObj || (rewardGetObj = sub_B52A44(rewardGetObj, v159->obj.klass->_1.element_class)) != 0 )
        {
          if ( v159->max_length <= 1 )
            goto LABEL_154;
          v159->m_Items[1] = (Il2CppObject *)v168;
          sub_B52920((BattleServantConfConponent_o *)&v159->m_Items[1], v168, v162, v163, v164, v165, v166, v167);
          rewardGetObj = StringLiteral_16011/*"_"*/;
          if ( StringLiteral_16011/*"_"*/ )
          {
            rewardGetObj = sub_B52A44(StringLiteral_16011/*"_"*/, v159->obj.klass->_1.element_class);
            if ( !rewardGetObj )
              goto LABEL_155;
            v175 = (System_Int32_array **)StringLiteral_16011/*"_"*/;
          }
          else
          {
            v175 = 0LL;
          }
          if ( v159->max_length <= 2 )
            goto LABEL_154;
          v159->m_Items[2] = (Il2CppObject *)v175;
          sub_B52920((BattleServantConfConponent_o *)&v159->m_Items[2], v175, v169, v170, v171, v172, v173, v174);
          v209 = ranking;
          rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v209);
          v182 = (System_Int32_array **)rewardGetObj;
          if ( !rewardGetObj || (rewardGetObj = sub_B52A44(rewardGetObj, v159->obj.klass->_1.element_class)) != 0 )
          {
            if ( v159->max_length <= 3 )
              goto LABEL_154;
            v159->m_Items[3] = (Il2CppObject *)v182;
            sub_B52920((BattleServantConfConponent_o *)&v159->m_Items[3], v182, v176, v177, v178, v179, v180, v181);
            v183 = System_String__Concat_44578100(v159, 0LL);
            if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
            }
            EventRewardRootComponent__setRewardInfoImg(rewardGetSprite, v183, 0LL);
            rewardGetObj = (__int64)this->fields.rewardGetSprite;
            if ( !rewardGetObj )
              goto LABEL_153;
            rewardGetObj = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rewardGetObj, 0LL);
            if ( !rewardGetObj )
              goto LABEL_153;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rewardGetObj, 1, 0LL);
            v184 = v5->fields.ranking;
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
              v184 <= BalanceConfig_TypeInfo->static_fields->raceRewardRankMax,
              0LL);
            goto LABEL_130;
          }
        }
      }
LABEL_155:
      v199 = sub_B52A7C(rewardGetObj);
      sub_B52A28(v199, 0LL);
    }
  }
LABEL_130:
  giftEntityList = v5->fields.giftEntityList;
  this->fields.giftEntityList = giftEntityList;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.giftEntityList,
    (System_Int32_array **)giftEntityList,
    v142,
    v143,
    v144,
    v145,
    v146,
    v147);
  v186 = v5->fields.giftEntityList;
  if ( !v186 )
    goto LABEL_153;
  max_length = v186->max_length;
  this->fields.isMultipleReward = max_length > 1;
  if ( max_length < 2 )
  {
    v195 = this->fields.giftEntityList;
    if ( !v195 )
      goto LABEL_153;
    if ( v195->max_length )
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
    v190 = this->fields.listViewObject;
    if ( !v190 )
      goto LABEL_153;
    v191 = this->fields.giftEntityList;
    if ( !v191 )
      goto LABEL_153;
    rewardGetObj = (__int64)v190->fields.manager;
    if ( !rewardGetObj )
      goto LABEL_153;
    item = (EventRankingListViewItem_o *)EventRankingListViewManager_TypeInfo;
    v192 = *(&EventRankingListViewManager_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)rewardGetObj + 300LL) < (unsigned int)v192
      || *(EventRankingListViewManager_c **)(*(_QWORD *)(*(_QWORD *)rewardGetObj + 200LL) + 8 * v192 - 8) != EventRankingListViewManager_TypeInfo )
    {
      v200 = (EventRankingListViewManager_o *)sub_B52D50(rewardGetObj);
      EventRankingListViewManager__GetAlphaAnimCnt(v200, v201, v202);
      return;
    }
    v193 = v191->max_length;
    v194 = *(_DWORD *)(rewardGetObj + 332) % (int)v193;
    if ( v194 < v193 )
    {
      v195 = (struct GiftEntity_array *)((char *)v191 + 8 * v194);
LABEL_146:
      v196 = (int32_t *)v195->m_Items[0];
      if ( v196 )
      {
        rewardGetObj = (__int64)this->fields.itemIcon;
        if ( rewardGetObj )
        {
          if ( v196[7] <= 1 )
            v197 = -1;
          else
            v197 = v196[7];
          ItemIconComponent__SetGift((ItemIconComponent_o *)rewardGetObj, v196[5], v196[6], v197, 0, 0LL);
          return;
        }
      }
LABEL_153:
      sub_B52A5C(rewardGetObj, item);
    }
LABEL_154:
    v198 = sub_B52A88(rewardGetObj);
    sub_B52A28(v198, 0LL);
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
  sub_B52920(
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
      sub_B52A5C(0LL, method);
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
      sub_B52A5C(this, item);
    EventRankingListViewItemDraw__SetRewardIconAlpha(this, manager->fields.alphaAnimNow, (const MethodInfo *)item);
  }
}