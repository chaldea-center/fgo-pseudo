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

  if ( (byte_40F60C7 & 1) == 0 )
  {
    sub_B16FFC(&EventRankingListViewItemDraw_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_18495, v8);
    sub_B16FFC(&StringLiteral_18454, v9);
    sub_B16FFC(&StringLiteral_18499, v10);
    sub_B16FFC(&StringLiteral_18498, v11);
    sub_B16FFC(&StringLiteral_18497, v12);
    sub_B16FFC(&StringLiteral_18496, v13);
    sub_B16FFC(&StringLiteral_18531, v14);
    sub_B16FFC(&StringLiteral_18511, v15);
    byte_40F60C7 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventRankingListViewItemDraw_TypeInfo->static_fields;
  v17 = (System_Int32_array **)StringLiteral_18496;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18496;
  sub_B16F98(static_fields, v17, v2, v3, v4, v5, v6, v7);
  v18 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v19 = (System_Int32_array **)StringLiteral_18497;
  v18->GROUP_NAME_IMAGE_NAME = (struct System_String_o *)StringLiteral_18497;
  sub_B16F98((BattleServantConfConponent_o *)&v18->GROUP_NAME_IMAGE_NAME, v19, v20, v21, v22, v23, v24, v25);
  v26 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v27 = (System_Int32_array **)StringLiteral_18511;
  v26->BOARD_IMAGE_NAME = (struct System_String_o *)StringLiteral_18511;
  sub_B16F98((BattleServantConfConponent_o *)&v26->BOARD_IMAGE_NAME, v27, v28, v29, v30, v31, v32, v33);
  v34 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v35 = (System_Int32_array **)StringLiteral_18499;
  v34->REWARD_GET_IMAGE_NAME = (struct System_String_o *)StringLiteral_18499;
  sub_B16F98((BattleServantConfConponent_o *)&v34->REWARD_GET_IMAGE_NAME, v35, v36, v37, v38, v39, v40, v41);
  v42 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v43 = (System_Int32_array **)StringLiteral_18495;
  v42->RANKING_IMAGE_NAME = (struct System_String_o *)StringLiteral_18495;
  sub_B16F98((BattleServantConfConponent_o *)&v42->RANKING_IMAGE_NAME, v43, v44, v45, v46, v47, v48, v49);
  v50 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v51 = (System_Int32_array **)StringLiteral_18454;
  v50->GOAL_IMAGE_NAME = (struct System_String_o *)StringLiteral_18454;
  sub_B16F98((BattleServantConfConponent_o *)&v50->GOAL_IMAGE_NAME, v51, v52, v53, v54, v55, v56, v57);
  v58 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v59 = (System_Int32_array **)StringLiteral_18498;
  v58->HIGHER_REWARD_IMAGE_NAME = (struct System_String_o *)StringLiteral_18498;
  sub_B16F98((BattleServantConfConponent_o *)&v58->HIGHER_REWARD_IMAGE_NAME, v59, v60, v61, v62, v63, v64, v65);
  v66 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v67 = (System_Int32_array **)StringLiteral_18531;
  v66->SUPPORT_TXT_IMAGE_NAME = (struct System_String_o *)StringLiteral_18531;
  sub_B16F98((BattleServantConfConponent_o *)&v66->SUPPORT_TXT_IMAGE_NAME, v67, v68, v69, v70, v71, v72, v73);
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
  ItemIconComponent_o *itemIcon; // x0
  int32_t v8; // w3

  if ( this->fields.isMultipleReward )
  {
    giftEntityList = this->fields.giftEntityList;
    if ( !giftEntityList || !manager )
      goto LABEL_12;
    max_length = giftEntityList->max_length;
    v5 = manager->fields.alphaAnimCnt % (int)max_length;
    if ( v5 >= max_length )
    {
      sub_B17100(this, manager, method);
      sub_B170A0();
    }
    v6 = (int32_t *)giftEntityList->m_Items[v5];
    if ( !v6 || (itemIcon = this->fields.itemIcon) == 0LL )
LABEL_12:
      sub_B170D4();
    if ( v6[7] <= 1 )
      v8 = -1;
    else
      v8 = v6[7];
    ItemIconComponent__SetGift(itemIcon, v6[5], v6[6], v8, 0, 0LL);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  UnityEngine_GameObject_o *rewardGetObj; // x0
  UnityEngine_Component_o *rewardGetSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *goalSprite; // x0
  UnityEngine_GameObject_o *v19; // x0
  __int64 v20; // x2
  UISprite_o *baseSprite; // x21
  int32_t ranking; // w24
  struct ListViewManager_o *v23; // x0
  System_Int32_array **v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Object_array *v31; // x22
  EventRankingListViewItemDraw_c *v32; // x8
  System_Int32_array **BOARD_IMAGE_NAME; // x23
  struct EventRankingRoundItemInfo_o *itemInfo; // x8
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **v40; // x23
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array **v51; // x23
  const MethodInfo *v52; // x2
  System_String_o *v53; // x22
  UISprite_o *rankingSprite; // x21
  __int64 v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Object_array *v61; // x22
  System_Int32_array **RANKING_IMAGE_NAME; // x23
  struct EventRankingRoundItemInfo_o *v63; // x8
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Int32_array **v69; // x23
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  System_Int32_array **v80; // x23
  System_String_o *v81; // x0
  const MethodInfo *v82; // x2
  UISprite_o *teamSprite; // x21
  __int64 v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  System_Object_array *v90; // x22
  System_Int32_array **GROUP_IMAGE_NAME; // x23
  struct EventRankingRoundItemInfo_o *v92; // x8
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  System_Int32_array **v98; // x23
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7
  System_Int32_array **v109; // x23
  System_String_o *v110; // x0
  const MethodInfo *v111; // x2
  UISprite_o *teamNameSprite; // x21
  __int64 v113; // x2
  System_String_array **v114; // x3
  System_Boolean_array **v115; // x4
  System_Int32_array **v116; // x5
  System_Int32_array *v117; // x6
  System_Int32_array *v118; // x7
  System_Object_array *v119; // x22
  System_Int32_array **GROUP_NAME_IMAGE_NAME; // x23
  struct EventRankingRoundItemInfo_o *v121; // x8
  System_String_array **v122; // x3
  System_Boolean_array **v123; // x4
  System_Int32_array **v124; // x5
  System_Int32_array *v125; // x6
  System_Int32_array *v126; // x7
  System_Int32_array **v127; // x23
  System_String_array **v128; // x3
  System_Boolean_array **v129; // x4
  System_Int32_array **v130; // x5
  System_Int32_array *v131; // x6
  System_Int32_array *v132; // x7
  struct EventRankingRoundItemInfo_o *v133; // x8
  System_String_array **v134; // x3
  System_Boolean_array **v135; // x4
  System_Int32_array **v136; // x5
  System_Int32_array *v137; // x6
  System_Int32_array *v138; // x7
  System_Int32_array **v139; // x23
  System_String_o *v140; // x0
  const MethodInfo *v141; // x2
  const MethodInfo *v142; // x2
  struct EventRankingRoundItemInfo_o *v143; // x8
  UILabel_o *supportInfoLabel; // x21
  int64_t supportPoint; // x22
  System_String_o *NumberFormatLong; // x0
  const MethodInfo *v147; // x2
  MethodInfo *v148; // x2
  System_String_array **v149; // x3
  System_Boolean_array **v150; // x4
  System_Int32_array **v151; // x5
  System_Int32_array *v152; // x6
  System_Int32_array *v153; // x7
  EventRankingListViewItemDraw_c *v154; // x0
  UISprite_o *v155; // x21
  System_String_o *GOAL_IMAGE_NAME; // x22
  UnityEngine_Component_o *v157; // x0
  UnityEngine_GameObject_o *v158; // x0
  UISprite_o *v159; // x21
  System_String_array **v160; // x3
  System_Boolean_array **v161; // x4
  System_Int32_array **v162; // x5
  System_Int32_array *v163; // x6
  System_Int32_array *v164; // x7
  EventRankingListViewItemDraw_c *v165; // x8
  System_Object_array *v166; // x22
  System_Int32_array **REWARD_GET_IMAGE_NAME; // x23
  struct EventRankingRoundItemInfo_o *v168; // x8
  System_String_array **v169; // x3
  System_Boolean_array **v170; // x4
  System_Int32_array **v171; // x5
  System_Int32_array *v172; // x6
  System_Int32_array *v173; // x7
  System_Int32_array **v174; // x23
  System_String_array **v175; // x3
  System_Boolean_array **v176; // x4
  System_Int32_array **v177; // x5
  System_Int32_array *v178; // x6
  System_Int32_array *v179; // x7
  System_String_array **v180; // x3
  System_Boolean_array **v181; // x4
  System_Int32_array **v182; // x5
  System_Int32_array *v183; // x6
  System_Int32_array *v184; // x7
  System_Int32_array **v185; // x23
  const MethodInfo *v186; // x2
  System_String_o *v187; // x22
  UnityEngine_Component_o *v188; // x0
  UnityEngine_GameObject_o *v189; // x0
  int32_t v190; // w21
  UnityEngine_GameObject_o *v191; // x0
  struct GiftEntity_array *giftEntityList; // x1
  struct GiftEntity_array *v193; // x8
  int max_length; // w8
  struct EventRankingListViewObject_o *listViewObject; // x8
  UnityEngine_Object_o *manager; // x20
  struct EventRankingListViewObject_o *v197; // x9
  struct GiftEntity_array *v198; // x8
  __int64 v199; // x10
  il2cpp_array_size_t v200; // w10
  int v201; // w9
  struct GiftEntity_array *v202; // x8
  int32_t *v203; // x8
  ItemIconComponent_o *itemIcon; // x0
  int32_t v205; // w3
  EventRankingListViewManager_o *v206; // x0
  int32_t v207; // w1
  const MethodInfo *v208; // x2
  int32_t groupId; // [xsp+0h] [xbp-70h] BYREF
  int32_t v210; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t groupImageId; // [xsp+8h] [xbp-68h] BYREF
  int32_t v212; // [xsp+Ch] [xbp-64h] BYREF
  int32_t v213; // [xsp+10h] [xbp-60h] BYREF
  int32_t v214; // [xsp+14h] [xbp-5Ch] BYREF
  int32_t v215; // [xsp+18h] [xbp-58h] BYREF
  int32_t eventId; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_40F60C6 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, item);
    sub_B16FFC(&EventRankingListViewItemDraw_TypeInfo, v7);
    sub_B16FFC(&EventRankingListViewManager_TypeInfo, v8);
    sub_B16FFC(&EventRewardRootComponent_TypeInfo, v9);
    sub_B16FFC(&int_TypeInfo, v10);
    sub_B16FFC(&LocalizationManager_TypeInfo, v11);
    sub_B16FFC(&object___TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    sub_B16FFC(&StringLiteral_15842, v14);
    byte_40F60C6 = 1;
  }
  if ( !item || !mode )
    return;
  rewardGetObj = this->fields.rewardGetObj;
  if ( !rewardGetObj )
    goto LABEL_153;
  UnityEngine_GameObject__SetActive(rewardGetObj, 0, 0LL);
  rewardGetSprite = (UnityEngine_Component_o *)this->fields.rewardGetSprite;
  if ( !rewardGetSprite )
    goto LABEL_153;
  gameObject = UnityEngine_Component__get_gameObject(rewardGetSprite, 0LL);
  if ( !gameObject )
    goto LABEL_153;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  goalSprite = (UnityEngine_Component_o *)this->fields.goalSprite;
  if ( !goalSprite )
    goto LABEL_153;
  v19 = UnityEngine_Component__get_gameObject(goalSprite, 0LL);
  if ( !v19 )
    goto LABEL_153;
  UnityEngine_GameObject__SetActive(v19, 0, 0LL);
  baseSprite = this->fields.baseSprite;
  if ( item->fields.ranking >= 4 )
    ranking = 4;
  else
    ranking = item->fields.ranking;
  v23 = (struct ListViewManager_o *)sub_B17014(object___TypeInfo, 4LL, v20);
  v31 = (System_Object_array *)v23;
  v32 = EventRankingListViewItemDraw_TypeInfo;
  if ( (BYTE3(EventRankingListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRankingListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRankingListViewItemDraw_TypeInfo);
    v32 = EventRankingListViewItemDraw_TypeInfo;
  }
  if ( !v31 )
    goto LABEL_153;
  BOARD_IMAGE_NAME = (System_Int32_array **)v32->static_fields->BOARD_IMAGE_NAME;
  if ( BOARD_IMAGE_NAME )
  {
    v23 = (struct ListViewManager_o *)sub_B170BC(BOARD_IMAGE_NAME, v31->obj.klass->_1.element_class);
    if ( !v23 )
      goto LABEL_155;
  }
  if ( !v31->max_length )
    goto LABEL_154;
  v31->m_Items[0] = (Il2CppObject *)BOARD_IMAGE_NAME;
  sub_B16F98((BattleServantConfConponent_o *)v31->m_Items, BOARD_IMAGE_NAME, v25, v26, v27, v28, v29, v30);
  itemInfo = item->fields.itemInfo;
  if ( !itemInfo )
    goto LABEL_153;
  eventId = itemInfo->fields.eventId;
  v23 = (struct ListViewManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
  v40 = (System_Int32_array **)v23;
  if ( v23 )
  {
    v23 = (struct ListViewManager_o *)sub_B170BC(v23, v31->obj.klass->_1.element_class);
    if ( !v23 )
      goto LABEL_155;
  }
  if ( v31->max_length <= 1 )
    goto LABEL_154;
  v31->m_Items[1] = (Il2CppObject *)v40;
  sub_B16F98((BattleServantConfConponent_o *)&v31->m_Items[1], v40, v25, v35, v36, v37, v38, v39);
  v23 = (struct ListViewManager_o *)StringLiteral_15842;
  if ( StringLiteral_15842 )
  {
    v23 = (struct ListViewManager_o *)sub_B170BC(StringLiteral_15842, v31->obj.klass->_1.element_class);
    if ( !v23 )
      goto LABEL_155;
    v24 = (System_Int32_array **)StringLiteral_15842;
  }
  else
  {
    v24 = 0LL;
  }
  if ( v31->max_length <= 2 )
    goto LABEL_154;
  v31->m_Items[2] = (Il2CppObject *)v24;
  sub_B16F98((BattleServantConfConponent_o *)&v31->m_Items[2], v24, v25, v41, v42, v43, v44, v45);
  v215 = ranking;
  v23 = (struct ListViewManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v215);
  v51 = (System_Int32_array **)v23;
  if ( v23 )
  {
    v23 = (struct ListViewManager_o *)sub_B170BC(v23, v31->obj.klass->_1.element_class);
    if ( !v23 )
      goto LABEL_155;
  }
  if ( v31->max_length <= 3 )
    goto LABEL_154;
  v31->m_Items[3] = (Il2CppObject *)v51;
  sub_B16F98((BattleServantConfConponent_o *)&v31->m_Items[3], v51, v25, v46, v47, v48, v49, v50);
  v53 = System_String__Concat_43753516(v31, 0LL);
  if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
  }
  EventRewardRootComponent__setRewardInfoImg(baseSprite, v53, v52);
  rankingSprite = this->fields.rankingSprite;
  v23 = (struct ListViewManager_o *)sub_B17014(object___TypeInfo, 4LL, v55);
  if ( !v23 )
    goto LABEL_153;
  v61 = (System_Object_array *)v23;
  RANKING_IMAGE_NAME = (System_Int32_array **)EventRankingListViewItemDraw_TypeInfo->static_fields->RANKING_IMAGE_NAME;
  if ( RANKING_IMAGE_NAME )
  {
    v23 = (struct ListViewManager_o *)sub_B170BC(RANKING_IMAGE_NAME, v23->klass->_1.element_class);
    if ( !v23 )
      goto LABEL_155;
  }
  if ( !v61->max_length )
    goto LABEL_154;
  v61->m_Items[0] = (Il2CppObject *)RANKING_IMAGE_NAME;
  sub_B16F98((BattleServantConfConponent_o *)v61->m_Items, RANKING_IMAGE_NAME, v25, v56, v57, v58, v59, v60);
  v63 = item->fields.itemInfo;
  if ( !v63 )
    goto LABEL_153;
  v214 = v63->fields.eventId;
  v23 = (struct ListViewManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v214);
  v69 = (System_Int32_array **)v23;
  if ( v23 )
  {
    v23 = (struct ListViewManager_o *)sub_B170BC(v23, v61->obj.klass->_1.element_class);
    if ( !v23 )
      goto LABEL_155;
  }
  if ( v61->max_length <= 1 )
    goto LABEL_154;
  v61->m_Items[1] = (Il2CppObject *)v69;
  sub_B16F98((BattleServantConfConponent_o *)&v61->m_Items[1], v69, v25, v64, v65, v66, v67, v68);
  v23 = (struct ListViewManager_o *)StringLiteral_15842;
  if ( StringLiteral_15842 )
  {
    v23 = (struct ListViewManager_o *)sub_B170BC(StringLiteral_15842, v61->obj.klass->_1.element_class);
    if ( !v23 )
      goto LABEL_155;
    v24 = (System_Int32_array **)StringLiteral_15842;
  }
  else
  {
    v24 = 0LL;
  }
  if ( v61->max_length <= 2 )
    goto LABEL_154;
  v61->m_Items[2] = (Il2CppObject *)v24;
  sub_B16F98((BattleServantConfConponent_o *)&v61->m_Items[2], v24, v25, v70, v71, v72, v73, v74);
  v213 = item->fields.ranking;
  v23 = (struct ListViewManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v213);
  v80 = (System_Int32_array **)v23;
  if ( v23 )
  {
    v23 = (struct ListViewManager_o *)sub_B170BC(v23, v61->obj.klass->_1.element_class);
    if ( !v23 )
      goto LABEL_155;
  }
  if ( v61->max_length <= 3 )
    goto LABEL_154;
  v61->m_Items[3] = (Il2CppObject *)v80;
  sub_B16F98((BattleServantConfConponent_o *)&v61->m_Items[3], v80, v25, v75, v76, v77, v78, v79);
  v81 = System_String__Concat_43753516(v61, 0LL);
  EventRewardRootComponent__setRewardInfoImg(rankingSprite, v81, v82);
  teamSprite = this->fields.teamSprite;
  v23 = (struct ListViewManager_o *)sub_B17014(object___TypeInfo, 4LL, v84);
  if ( !v23 )
    goto LABEL_153;
  v90 = (System_Object_array *)v23;
  GROUP_IMAGE_NAME = (System_Int32_array **)EventRankingListViewItemDraw_TypeInfo->static_fields->GROUP_IMAGE_NAME;
  if ( GROUP_IMAGE_NAME )
  {
    v23 = (struct ListViewManager_o *)sub_B170BC(GROUP_IMAGE_NAME, v23->klass->_1.element_class);
    if ( !v23 )
      goto LABEL_155;
  }
  if ( !v90->max_length )
    goto LABEL_154;
  v90->m_Items[0] = (Il2CppObject *)GROUP_IMAGE_NAME;
  sub_B16F98((BattleServantConfConponent_o *)v90->m_Items, GROUP_IMAGE_NAME, v25, v85, v86, v87, v88, v89);
  v92 = item->fields.itemInfo;
  if ( !v92 )
    goto LABEL_153;
  v212 = v92->fields.eventId;
  v23 = (struct ListViewManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v212);
  v98 = (System_Int32_array **)v23;
  if ( v23 )
  {
    v23 = (struct ListViewManager_o *)sub_B170BC(v23, v90->obj.klass->_1.element_class);
    if ( !v23 )
      goto LABEL_155;
  }
  if ( v90->max_length <= 1 )
    goto LABEL_154;
  v90->m_Items[1] = (Il2CppObject *)v98;
  sub_B16F98((BattleServantConfConponent_o *)&v90->m_Items[1], v98, v25, v93, v94, v95, v96, v97);
  v23 = (struct ListViewManager_o *)StringLiteral_15842;
  if ( StringLiteral_15842 )
  {
    v23 = (struct ListViewManager_o *)sub_B170BC(StringLiteral_15842, v90->obj.klass->_1.element_class);
    if ( !v23 )
      goto LABEL_155;
    v24 = (System_Int32_array **)StringLiteral_15842;
  }
  else
  {
    v24 = 0LL;
  }
  if ( v90->max_length <= 2 )
    goto LABEL_154;
  v90->m_Items[2] = (Il2CppObject *)v24;
  sub_B16F98((BattleServantConfConponent_o *)&v90->m_Items[2], v24, v25, v99, v100, v101, v102, v103);
  groupImageId = item->fields.groupImageId;
  v23 = (struct ListViewManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &groupImageId);
  v109 = (System_Int32_array **)v23;
  if ( v23 )
  {
    v23 = (struct ListViewManager_o *)sub_B170BC(v23, v90->obj.klass->_1.element_class);
    if ( !v23 )
      goto LABEL_155;
  }
  if ( v90->max_length <= 3 )
    goto LABEL_154;
  v90->m_Items[3] = (Il2CppObject *)v109;
  sub_B16F98((BattleServantConfConponent_o *)&v90->m_Items[3], v109, v25, v104, v105, v106, v107, v108);
  v110 = System_String__Concat_43753516(v90, 0LL);
  EventRewardRootComponent__setRewardInfoImg(teamSprite, v110, v111);
  teamNameSprite = this->fields.teamNameSprite;
  v23 = (struct ListViewManager_o *)sub_B17014(object___TypeInfo, 4LL, v113);
  if ( !v23 )
    goto LABEL_153;
  v119 = (System_Object_array *)v23;
  GROUP_NAME_IMAGE_NAME = (System_Int32_array **)EventRankingListViewItemDraw_TypeInfo->static_fields->GROUP_NAME_IMAGE_NAME;
  if ( GROUP_NAME_IMAGE_NAME )
  {
    v23 = (struct ListViewManager_o *)sub_B170BC(GROUP_NAME_IMAGE_NAME, v23->klass->_1.element_class);
    if ( !v23 )
      goto LABEL_155;
  }
  if ( !v119->max_length )
    goto LABEL_154;
  v119->m_Items[0] = (Il2CppObject *)GROUP_NAME_IMAGE_NAME;
  sub_B16F98((BattleServantConfConponent_o *)v119->m_Items, GROUP_NAME_IMAGE_NAME, v25, v114, v115, v116, v117, v118);
  v121 = item->fields.itemInfo;
  if ( !v121 )
    goto LABEL_153;
  v210 = v121->fields.eventId;
  v23 = (struct ListViewManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v210);
  v127 = (System_Int32_array **)v23;
  if ( v23 )
  {
    v23 = (struct ListViewManager_o *)sub_B170BC(v23, v119->obj.klass->_1.element_class);
    if ( !v23 )
      goto LABEL_155;
  }
  if ( v119->max_length <= 1 )
    goto LABEL_154;
  v119->m_Items[1] = (Il2CppObject *)v127;
  sub_B16F98((BattleServantConfConponent_o *)&v119->m_Items[1], v127, v25, v122, v123, v124, v125, v126);
  v23 = (struct ListViewManager_o *)StringLiteral_15842;
  if ( StringLiteral_15842 )
  {
    v23 = (struct ListViewManager_o *)sub_B170BC(StringLiteral_15842, v119->obj.klass->_1.element_class);
    if ( !v23 )
      goto LABEL_155;
    v24 = (System_Int32_array **)StringLiteral_15842;
  }
  else
  {
    v24 = 0LL;
  }
  if ( v119->max_length <= 2 )
    goto LABEL_154;
  v119->m_Items[2] = (Il2CppObject *)v24;
  sub_B16F98((BattleServantConfConponent_o *)&v119->m_Items[2], v24, v25, v128, v129, v130, v131, v132);
  v133 = item->fields.itemInfo;
  if ( !v133 )
    goto LABEL_153;
  groupId = v133->fields.groupId;
  v23 = (struct ListViewManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &groupId);
  v139 = (System_Int32_array **)v23;
  if ( v23 )
  {
    v23 = (struct ListViewManager_o *)sub_B170BC(v23, v119->obj.klass->_1.element_class);
    if ( !v23 )
      goto LABEL_155;
  }
  if ( v119->max_length <= 3 )
    goto LABEL_154;
  v119->m_Items[3] = (Il2CppObject *)v139;
  sub_B16F98((BattleServantConfConponent_o *)&v119->m_Items[3], v139, v25, v134, v135, v136, v137, v138);
  v140 = System_String__Concat_43753516(v119, 0LL);
  EventRewardRootComponent__setRewardInfoImg(teamNameSprite, v140, v141);
  EventRewardRootComponent__setRewardInfoImg(
    this->fields.supportTxtSprite,
    EventRankingListViewItemDraw_TypeInfo->static_fields->SUPPORT_TXT_IMAGE_NAME,
    v142);
  v143 = item->fields.itemInfo;
  if ( !v143 )
    goto LABEL_153;
  supportInfoLabel = this->fields.supportInfoLabel;
  supportPoint = v143->fields.supportPoint;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  NumberFormatLong = LocalizationManager__GetNumberFormatLong(supportPoint, 0LL);
  if ( !supportInfoLabel )
    goto LABEL_153;
  UILabel__set_text(supportInfoLabel, NumberFormatLong, 0LL);
  EventRewardRootComponent__setRewardInfoImg(
    this->fields.higherRewardSprite,
    EventRankingListViewItemDraw_TypeInfo->static_fields->HIGHER_REWARD_IMAGE_NAME,
    v147);
  if ( item->fields.isJoinTerm )
  {
    if ( item->fields.isPlayedGoal )
    {
      v154 = EventRankingListViewItemDraw_TypeInfo;
      v155 = this->fields.goalSprite;
      if ( (BYTE3(EventRankingListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRankingListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRankingListViewItemDraw_TypeInfo);
        v154 = EventRankingListViewItemDraw_TypeInfo;
      }
      GOAL_IMAGE_NAME = v154->static_fields->GOAL_IMAGE_NAME;
      if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
      }
      EventRewardRootComponent__setRewardInfoImg(v155, GOAL_IMAGE_NAME, v148);
      v157 = (UnityEngine_Component_o *)this->fields.goalSprite;
      if ( !v157 )
        goto LABEL_153;
      v158 = UnityEngine_Component__get_gameObject(v157, 0LL);
      if ( !v158 )
        goto LABEL_153;
      UnityEngine_GameObject__SetActive(v158, 1, 0LL);
    }
    if ( item->fields.isGetReward )
    {
      v159 = this->fields.rewardGetSprite;
      v23 = (struct ListViewManager_o *)sub_B17014(object___TypeInfo, 4LL, v148);
      v165 = EventRankingListViewItemDraw_TypeInfo;
      v166 = (System_Object_array *)v23;
      if ( (BYTE3(EventRankingListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRankingListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRankingListViewItemDraw_TypeInfo);
        v165 = EventRankingListViewItemDraw_TypeInfo;
      }
      if ( !v166 )
        goto LABEL_153;
      REWARD_GET_IMAGE_NAME = (System_Int32_array **)v165->static_fields->REWARD_GET_IMAGE_NAME;
      if ( !REWARD_GET_IMAGE_NAME
        || (v23 = (struct ListViewManager_o *)sub_B170BC(REWARD_GET_IMAGE_NAME, v166->obj.klass->_1.element_class)) != 0LL )
      {
        if ( !v166->max_length )
          goto LABEL_154;
        v166->m_Items[0] = (Il2CppObject *)REWARD_GET_IMAGE_NAME;
        sub_B16F98(
          (BattleServantConfConponent_o *)v166->m_Items,
          REWARD_GET_IMAGE_NAME,
          v25,
          v160,
          v161,
          v162,
          v163,
          v164);
        v168 = item->fields.itemInfo;
        if ( !v168 )
          goto LABEL_153;
        eventId = v168->fields.eventId;
        v23 = (struct ListViewManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
        v174 = (System_Int32_array **)v23;
        if ( !v23 || (v23 = (struct ListViewManager_o *)sub_B170BC(v23, v166->obj.klass->_1.element_class)) != 0LL )
        {
          if ( v166->max_length <= 1 )
            goto LABEL_154;
          v166->m_Items[1] = (Il2CppObject *)v174;
          sub_B16F98((BattleServantConfConponent_o *)&v166->m_Items[1], v174, v25, v169, v170, v171, v172, v173);
          v23 = (struct ListViewManager_o *)StringLiteral_15842;
          if ( StringLiteral_15842 )
          {
            v23 = (struct ListViewManager_o *)sub_B170BC(StringLiteral_15842, v166->obj.klass->_1.element_class);
            if ( !v23 )
              goto LABEL_155;
            v24 = (System_Int32_array **)StringLiteral_15842;
          }
          else
          {
            v24 = 0LL;
          }
          if ( v166->max_length <= 2 )
            goto LABEL_154;
          v166->m_Items[2] = (Il2CppObject *)v24;
          sub_B16F98((BattleServantConfConponent_o *)&v166->m_Items[2], v24, v25, v175, v176, v177, v178, v179);
          v215 = ranking;
          v23 = (struct ListViewManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v215);
          v185 = (System_Int32_array **)v23;
          if ( !v23 || (v23 = (struct ListViewManager_o *)sub_B170BC(v23, v166->obj.klass->_1.element_class)) != 0LL )
          {
            if ( v166->max_length <= 3 )
              goto LABEL_154;
            v166->m_Items[3] = (Il2CppObject *)v185;
            sub_B16F98((BattleServantConfConponent_o *)&v166->m_Items[3], v185, v25, v180, v181, v182, v183, v184);
            v187 = System_String__Concat_43753516(v166, 0LL);
            if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
            }
            EventRewardRootComponent__setRewardInfoImg(v159, v187, v186);
            v188 = (UnityEngine_Component_o *)this->fields.rewardGetSprite;
            if ( !v188 )
              goto LABEL_153;
            v189 = UnityEngine_Component__get_gameObject(v188, 0LL);
            if ( !v189 )
              goto LABEL_153;
            UnityEngine_GameObject__SetActive(v189, 1, 0LL);
            v190 = item->fields.ranking;
            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            }
            v191 = this->fields.rewardGetObj;
            if ( !v191 )
              goto LABEL_153;
            UnityEngine_GameObject__SetActive(
              v191,
              v190 <= BalanceConfig_TypeInfo->static_fields->raceRewardRankMax,
              0LL);
            goto LABEL_130;
          }
        }
      }
LABEL_155:
      sub_B170F4(v23);
      sub_B170A0();
    }
  }
LABEL_130:
  giftEntityList = item->fields.giftEntityList;
  this->fields.giftEntityList = giftEntityList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.giftEntityList,
    (System_Int32_array **)giftEntityList,
    (System_String_array **)v148,
    v149,
    v150,
    v151,
    v152,
    v153);
  v193 = item->fields.giftEntityList;
  if ( !v193 )
    goto LABEL_153;
  max_length = v193->max_length;
  this->fields.isMultipleReward = max_length > 1;
  if ( max_length < 2 )
  {
    v202 = this->fields.giftEntityList;
    if ( !v202 )
      goto LABEL_153;
    if ( v202->max_length )
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
  if ( UnityEngine_Object__op_Inequality(manager, 0LL, 0LL) )
  {
    v197 = this->fields.listViewObject;
    if ( !v197 )
      goto LABEL_153;
    v198 = this->fields.giftEntityList;
    if ( !v198 )
      goto LABEL_153;
    v23 = v197->fields.manager;
    if ( !v23 )
      goto LABEL_153;
    v24 = (System_Int32_array **)EventRankingListViewManager_TypeInfo;
    v199 = *(&EventRankingListViewManager_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v23->klass->_2.bitflags2 + 1) < (unsigned int)v199
      || (EventRankingListViewManager_c *)v23->klass->_2.typeHierarchy[v199 - 1] != EventRankingListViewManager_TypeInfo )
    {
      v206 = (EventRankingListViewManager_o *)sub_B173C8(v23);
      EventRankingListViewManager__GetAlphaAnimCnt(v206, v207, v208);
      return;
    }
    v200 = v198->max_length;
    v201 = SHIDWORD(v23[1].monitor) % (int)v200;
    if ( v201 < v200 )
    {
      v202 = (struct GiftEntity_array *)((char *)v198 + 8 * v201);
LABEL_146:
      v203 = (int32_t *)v202->m_Items[0];
      if ( v203 )
      {
        itemIcon = this->fields.itemIcon;
        if ( itemIcon )
        {
          if ( v203[7] <= 1 )
            v205 = -1;
          else
            v205 = v203[7];
          ItemIconComponent__SetGift(itemIcon, v203[5], v203[6], v205, 0, 0LL);
          return;
        }
      }
LABEL_153:
      sub_B170D4();
    }
LABEL_154:
    sub_B17100(v23, v24, v25);
    sub_B170A0();
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
  sub_B16F98(
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
      sub_B170D4();
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
      sub_B170D4();
    EventRankingListViewItemDraw__SetRewardIconAlpha(this, manager->fields.alphaAnimNow, (const MethodInfo *)item);
  }
}