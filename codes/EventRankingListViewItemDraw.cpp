void __fastcall EventRankingListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t v12; // w1
  struct EventRankingListViewItemDraw_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w1
  struct EventRankingListViewItemDraw_StaticFields *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w1
  struct EventRankingListViewItemDraw_StaticFields *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w1
  struct EventRankingListViewItemDraw_StaticFields *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t v28; // w1
  struct EventRankingListViewItemDraw_StaticFields *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w1
  struct EventRankingListViewItemDraw_StaticFields *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  int32_t v36; // w1
  struct EventRankingListViewItemDraw_StaticFields *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3

  if ( (byte_4A73E2F & 1) == 0 )
  {
    sub_1B90010(&EventRankingListViewItemDraw_TypeInfo, v1);
    sub_1B90010(&StringLiteral_19259/*"event_ranking_"*/, v4);
    sub_1B90010(&StringLiteral_19217/*"event_goal_flag"*/, v5);
    sub_1B90010(&StringLiteral_19263/*"event_ranking_rewardget_"*/, v6);
    sub_1B90010(&StringLiteral_19262/*"event_ranking_reward_txt"*/, v7);
    sub_1B90010(&StringLiteral_19261/*"event_ranking_group_name_"*/, v8);
    sub_1B90010(&StringLiteral_19260/*"event_ranking_group_"*/, v9);
    sub_1B90010(&StringLiteral_19296/*"event_support_txt"*/, v10);
    sub_1B90010(&StringLiteral_19276/*"event_rewardranking_"*/, v11);
    byte_4A73E2F = 1;
  }
  EventRankingListViewItemDraw_TypeInfo->static_fields->GROUP_IMAGE_NAME = (struct System_String_o *)StringLiteral_19260/*"event_ranking_group_"*/;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)EventRankingListViewItemDraw_TypeInfo->static_fields,
    StringLiteral_19260/*"event_ranking_group_"*/,
    v2,
    v3);
  v12 = StringLiteral_19261/*"event_ranking_group_name_"*/;
  static_fields = EventRankingListViewItemDraw_TypeInfo->static_fields;
  static_fields->GROUP_NAME_IMAGE_NAME = (struct System_String_o *)StringLiteral_19261/*"event_ranking_group_name_"*/;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->GROUP_NAME_IMAGE_NAME, v12, v14, v15);
  v16 = StringLiteral_19276/*"event_rewardranking_"*/;
  v17 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v17->BOARD_IMAGE_NAME = (struct System_String_o *)StringLiteral_19276/*"event_rewardranking_"*/;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v17->BOARD_IMAGE_NAME, v16, v18, v19);
  v20 = StringLiteral_19263/*"event_ranking_rewardget_"*/;
  v21 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v21->REWARD_GET_IMAGE_NAME = (struct System_String_o *)StringLiteral_19263/*"event_ranking_rewardget_"*/;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v21->REWARD_GET_IMAGE_NAME, v20, v22, v23);
  v24 = StringLiteral_19259/*"event_ranking_"*/;
  v25 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v25->RANKING_IMAGE_NAME = (struct System_String_o *)StringLiteral_19259/*"event_ranking_"*/;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v25->RANKING_IMAGE_NAME, v24, v26, v27);
  v28 = StringLiteral_19217/*"event_goal_flag"*/;
  v29 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v29->GOAL_IMAGE_NAME = (struct System_String_o *)StringLiteral_19217/*"event_goal_flag"*/;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v29->GOAL_IMAGE_NAME, v28, v30, v31);
  v32 = StringLiteral_19262/*"event_ranking_reward_txt"*/;
  v33 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v33->HIGHER_REWARD_IMAGE_NAME = (struct System_String_o *)StringLiteral_19262/*"event_ranking_reward_txt"*/;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v33->HIGHER_REWARD_IMAGE_NAME, v32, v34, v35);
  v36 = StringLiteral_19296/*"event_support_txt"*/;
  v37 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v37->SUPPORT_TXT_IMAGE_NAME = (struct System_String_o *)StringLiteral_19296/*"event_support_txt"*/;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v37->SUPPORT_TXT_IMAGE_NAME, v36, v38, v39);
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
      sub_1B90274(this, manager);
    v6 = (int32_t *)giftEntityList->m_Items[v5];
    if ( !v6 || (this = (EventRankingListViewItemDraw_o *)this->fields.itemIcon) == 0LL )
LABEL_12:
      sub_1B9026C(this, manager);
    if ( v6[7] <= 1 )
      v7 = -1;
    else
      v7 = v6[7];
    ItemIconComponent__SetGift_38197016((ItemIconComponent_o *)this, v6[5], v6[6], v7, 0, 0LL);
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
  int32_t v18; // w2
  int32_t v19; // w3
  System_Object_array *v20; // x22
  EventRankingListViewItemDraw_c *v21; // x8
  Il2CppObject *BOARD_IMAGE_NAME; // x23
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  struct EventRankingRoundItemInfo_o *itemInfo; // x8
  int32_t v27; // w2
  int32_t v28; // w3
  Il2CppObject *v29; // x23
  int32_t v30; // w2
  int32_t v31; // w3
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  int32_t v35; // w2
  int32_t v36; // w3
  Il2CppObject *v37; // x23
  System_String_o *v38; // x22
  UISprite_o *rankingSprite; // x21
  int32_t v40; // w2
  int32_t v41; // w3
  System_Object_array *v42; // x22
  struct System_String_o *RANKING_IMAGE_NAME; // x23
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  struct EventRankingRoundItemInfo_o *v47; // x8
  int32_t v48; // w2
  int32_t v49; // w3
  Il2CppObject *v50; // x23
  int32_t v51; // w2
  int32_t v52; // w3
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  int32_t v56; // w2
  int32_t v57; // w3
  Il2CppObject *v58; // x23
  System_String_o *v59; // x0
  UISprite_o *teamSprite; // x21
  int32_t v61; // w2
  int32_t v62; // w3
  System_Object_array *v63; // x22
  struct System_String_o *GROUP_IMAGE_NAME; // x23
  __int64 v65; // x2
  __int64 v66; // x3
  __int64 v67; // x4
  struct EventRankingRoundItemInfo_o *v68; // x8
  int32_t v69; // w2
  int32_t v70; // w3
  Il2CppObject *v71; // x23
  int32_t v72; // w2
  int32_t v73; // w3
  __int64 v74; // x2
  __int64 v75; // x3
  __int64 v76; // x4
  int32_t v77; // w2
  int32_t v78; // w3
  Il2CppObject *v79; // x23
  System_String_o *v80; // x0
  UISprite_o *teamNameSprite; // x21
  int32_t v82; // w2
  int32_t v83; // w3
  System_Object_array *v84; // x22
  struct System_String_o *GROUP_NAME_IMAGE_NAME; // x23
  __int64 v86; // x2
  __int64 v87; // x3
  __int64 v88; // x4
  struct EventRankingRoundItemInfo_o *v89; // x8
  int32_t v90; // w2
  int32_t v91; // w3
  Il2CppObject *v92; // x23
  int32_t v93; // w2
  int32_t v94; // w3
  __int64 v95; // x2
  __int64 v96; // x3
  __int64 v97; // x4
  struct EventRankingRoundItemInfo_o *v98; // x8
  int32_t v99; // w2
  int32_t v100; // w3
  Il2CppObject *v101; // x23
  System_String_o *v102; // x0
  struct EventRankingRoundItemInfo_o *v103; // x8
  UILabel_o *supportInfoLabel; // x21
  int64_t supportPoint; // x22
  int32_t v106; // w2
  int32_t v107; // w3
  EventRankingListViewItemDraw_c *v108; // x0
  UISprite_o *goalSprite; // x21
  System_String_o *GOAL_IMAGE_NAME; // x22
  UISprite_o *rewardGetSprite; // x21
  int32_t v112; // w2
  int32_t v113; // w3
  EventRankingListViewItemDraw_c *v114; // x8
  System_Object_array *v115; // x22
  Il2CppObject *REWARD_GET_IMAGE_NAME; // x23
  __int64 v117; // x2
  __int64 v118; // x3
  __int64 v119; // x4
  struct EventRankingRoundItemInfo_o *v120; // x8
  int32_t v121; // w2
  int32_t v122; // w3
  Il2CppObject *v123; // x23
  int32_t v124; // w2
  int32_t v125; // w3
  __int64 v126; // x2
  __int64 v127; // x3
  __int64 v128; // x4
  int32_t v129; // w2
  int32_t v130; // w3
  Il2CppObject *v131; // x23
  System_String_o *v132; // x22
  int32_t v133; // w21
  struct GiftEntity_array *giftEntityList; // x1
  struct GiftEntity_array *v135; // x8
  int max_length; // w8
  struct EventRankingListViewObject_o *listViewObject; // x8
  UnityEngine_Object_o *manager; // x20
  struct EventRankingListViewObject_o *v139; // x9
  struct GiftEntity_array *v140; // x8
  __int64 methodPtr_low; // x10
  il2cpp_array_size_t v142; // w10
  int v143; // w9
  struct GiftEntity_array *v144; // x8
  int32_t *v145; // x8
  int32_t v146; // w3
  __int64 v147; // x0
  EventRankingListViewManager_o *v148; // x0
  int32_t v149; // w1
  const MethodInfo *v150; // x2
  int32_t groupId; // [xsp+0h] [xbp-80h] BYREF
  int32_t v152; // [xsp+4h] [xbp-7Ch] BYREF
  int32_t groupImageId; // [xsp+8h] [xbp-78h] BYREF
  int32_t v154; // [xsp+Ch] [xbp-74h] BYREF
  int32_t v155; // [xsp+10h] [xbp-70h] BYREF
  int32_t v156; // [xsp+14h] [xbp-6Ch] BYREF
  int v157; // [xsp+18h] [xbp-68h] BYREF
  int32_t eventId; // [xsp+1Ch] [xbp-64h] BYREF

  v5 = item;
  if ( (byte_4A73E2E & 1) == 0 )
  {
    sub_1B90010(&BalanceConfig_TypeInfo, item);
    sub_1B90010(&EventRankingListViewItemDraw_TypeInfo, v7);
    sub_1B90010(&EventRankingListViewManager_TypeInfo, v8);
    sub_1B90010(&EventRewardRootComponent_TypeInfo, v9);
    sub_1B90010(&int_TypeInfo, v10);
    sub_1B90010(&LocalizationManager_TypeInfo, v11);
    sub_1B90010(&object___TypeInfo, v12);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v13);
    sub_1B90010(&StringLiteral_16148/*"_"*/, v14);
    byte_4A73E2E = 1;
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
  rewardGetObj = sub_1B900B8(object___TypeInfo, 4LL);
  v20 = (System_Object_array *)rewardGetObj;
  v21 = EventRankingListViewItemDraw_TypeInfo;
  if ( !EventRankingListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRankingListViewItemDraw_TypeInfo);
    v21 = EventRankingListViewItemDraw_TypeInfo;
  }
  if ( !v20 )
    goto LABEL_144;
  BOARD_IMAGE_NAME = (Il2CppObject *)v21->static_fields->BOARD_IMAGE_NAME;
  if ( BOARD_IMAGE_NAME )
  {
    rewardGetObj = sub_1B9014C(BOARD_IMAGE_NAME, v20->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( !v20->max_length )
    goto LABEL_145;
  v20->m_Items[0] = BOARD_IMAGE_NAME;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)v20->m_Items, (int32_t)BOARD_IMAGE_NAME, v18, v19);
  itemInfo = v5->fields.itemInfo;
  if ( !itemInfo )
    goto LABEL_144;
  eventId = itemInfo->fields.eventId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &eventId, v23, v24, v25);
  v29 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1B9014C(rewardGetObj, v20->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( v20->max_length <= 1 )
    goto LABEL_145;
  v20->m_Items[1] = v29;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v20->m_Items[1], (int32_t)v29, v27, v28);
  rewardGetObj = StringLiteral_16148/*"_"*/;
  if ( StringLiteral_16148/*"_"*/ )
  {
    rewardGetObj = sub_1B9014C(StringLiteral_16148/*"_"*/, v20->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
    item = (EventRankingListViewItem_o *)StringLiteral_16148/*"_"*/;
  }
  else
  {
    item = 0LL;
  }
  if ( v20->max_length <= 2 )
    goto LABEL_145;
  v20->m_Items[2] = (Il2CppObject *)item;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v20->m_Items[2], (int32_t)item, v30, v31);
  v157 = ranking;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v157, v32, v33, v34);
  v37 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1B9014C(rewardGetObj, v20->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( v20->max_length <= 3 )
    goto LABEL_145;
  v20->m_Items[3] = v37;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v20->m_Items[3], (int32_t)v37, v35, v36);
  v38 = System_String__Concat_61798544(v20, 0LL);
  if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
  EventRewardRootComponent__setRewardInfoImg(baseSprite, v38, 0LL);
  rankingSprite = this->fields.rankingSprite;
  rewardGetObj = sub_1B900B8(object___TypeInfo, 4LL);
  if ( !rewardGetObj )
    goto LABEL_144;
  v42 = (System_Object_array *)rewardGetObj;
  RANKING_IMAGE_NAME = EventRankingListViewItemDraw_TypeInfo->static_fields->RANKING_IMAGE_NAME;
  if ( RANKING_IMAGE_NAME )
  {
    rewardGetObj = sub_1B9014C(RANKING_IMAGE_NAME, *(_QWORD *)(*(_QWORD *)rewardGetObj + 64LL));
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( !v42->max_length )
    goto LABEL_145;
  v42->m_Items[0] = (Il2CppObject *)RANKING_IMAGE_NAME;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)v42->m_Items, (int32_t)RANKING_IMAGE_NAME, v40, v41);
  v47 = v5->fields.itemInfo;
  if ( !v47 )
    goto LABEL_144;
  v156 = v47->fields.eventId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v156, v44, v45, v46);
  v50 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1B9014C(rewardGetObj, v42->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( v42->max_length <= 1 )
    goto LABEL_145;
  v42->m_Items[1] = v50;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v42->m_Items[1], (int32_t)v50, v48, v49);
  rewardGetObj = StringLiteral_16148/*"_"*/;
  if ( StringLiteral_16148/*"_"*/ )
  {
    rewardGetObj = sub_1B9014C(StringLiteral_16148/*"_"*/, v42->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
    item = (EventRankingListViewItem_o *)StringLiteral_16148/*"_"*/;
  }
  else
  {
    item = 0LL;
  }
  if ( v42->max_length <= 2 )
    goto LABEL_145;
  v42->m_Items[2] = (Il2CppObject *)item;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v42->m_Items[2], (int32_t)item, v51, v52);
  v155 = v5->fields.ranking;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v155, v53, v54, v55);
  v58 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1B9014C(rewardGetObj, v42->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( v42->max_length <= 3 )
    goto LABEL_145;
  v42->m_Items[3] = v58;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v42->m_Items[3], (int32_t)v58, v56, v57);
  v59 = System_String__Concat_61798544(v42, 0LL);
  EventRewardRootComponent__setRewardInfoImg(rankingSprite, v59, 0LL);
  teamSprite = this->fields.teamSprite;
  rewardGetObj = sub_1B900B8(object___TypeInfo, 4LL);
  if ( !rewardGetObj )
    goto LABEL_144;
  v63 = (System_Object_array *)rewardGetObj;
  GROUP_IMAGE_NAME = EventRankingListViewItemDraw_TypeInfo->static_fields->GROUP_IMAGE_NAME;
  if ( GROUP_IMAGE_NAME )
  {
    rewardGetObj = sub_1B9014C(GROUP_IMAGE_NAME, *(_QWORD *)(*(_QWORD *)rewardGetObj + 64LL));
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( !v63->max_length )
    goto LABEL_145;
  v63->m_Items[0] = (Il2CppObject *)GROUP_IMAGE_NAME;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)v63->m_Items, (int32_t)GROUP_IMAGE_NAME, v61, v62);
  v68 = v5->fields.itemInfo;
  if ( !v68 )
    goto LABEL_144;
  v154 = v68->fields.eventId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v154, v65, v66, v67);
  v71 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1B9014C(rewardGetObj, v63->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( v63->max_length <= 1 )
    goto LABEL_145;
  v63->m_Items[1] = v71;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v63->m_Items[1], (int32_t)v71, v69, v70);
  rewardGetObj = StringLiteral_16148/*"_"*/;
  if ( StringLiteral_16148/*"_"*/ )
  {
    rewardGetObj = sub_1B9014C(StringLiteral_16148/*"_"*/, v63->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
    item = (EventRankingListViewItem_o *)StringLiteral_16148/*"_"*/;
  }
  else
  {
    item = 0LL;
  }
  if ( v63->max_length <= 2 )
    goto LABEL_145;
  v63->m_Items[2] = (Il2CppObject *)item;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v63->m_Items[2], (int32_t)item, v72, v73);
  groupImageId = v5->fields.groupImageId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &groupImageId, v74, v75, v76);
  v79 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1B9014C(rewardGetObj, v63->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( v63->max_length <= 3 )
    goto LABEL_145;
  v63->m_Items[3] = v79;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v63->m_Items[3], (int32_t)v79, v77, v78);
  v80 = System_String__Concat_61798544(v63, 0LL);
  EventRewardRootComponent__setRewardInfoImg(teamSprite, v80, 0LL);
  teamNameSprite = this->fields.teamNameSprite;
  rewardGetObj = sub_1B900B8(object___TypeInfo, 4LL);
  if ( !rewardGetObj )
    goto LABEL_144;
  v84 = (System_Object_array *)rewardGetObj;
  GROUP_NAME_IMAGE_NAME = EventRankingListViewItemDraw_TypeInfo->static_fields->GROUP_NAME_IMAGE_NAME;
  if ( GROUP_NAME_IMAGE_NAME )
  {
    rewardGetObj = sub_1B9014C(GROUP_NAME_IMAGE_NAME, *(_QWORD *)(*(_QWORD *)rewardGetObj + 64LL));
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( !v84->max_length )
    goto LABEL_145;
  v84->m_Items[0] = (Il2CppObject *)GROUP_NAME_IMAGE_NAME;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)v84->m_Items, (int32_t)GROUP_NAME_IMAGE_NAME, v82, v83);
  v89 = v5->fields.itemInfo;
  if ( !v89 )
    goto LABEL_144;
  v152 = v89->fields.eventId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v152, v86, v87, v88);
  v92 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1B9014C(rewardGetObj, v84->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( v84->max_length <= 1 )
    goto LABEL_145;
  v84->m_Items[1] = v92;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v84->m_Items[1], (int32_t)v92, v90, v91);
  rewardGetObj = StringLiteral_16148/*"_"*/;
  if ( StringLiteral_16148/*"_"*/ )
  {
    rewardGetObj = sub_1B9014C(StringLiteral_16148/*"_"*/, v84->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
    item = (EventRankingListViewItem_o *)StringLiteral_16148/*"_"*/;
  }
  else
  {
    item = 0LL;
  }
  if ( v84->max_length <= 2 )
    goto LABEL_145;
  v84->m_Items[2] = (Il2CppObject *)item;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v84->m_Items[2], (int32_t)item, v93, v94);
  v98 = v5->fields.itemInfo;
  if ( !v98 )
    goto LABEL_144;
  groupId = v98->fields.groupId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &groupId, v95, v96, v97);
  v101 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1B9014C(rewardGetObj, v84->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( v84->max_length <= 3 )
    goto LABEL_145;
  v84->m_Items[3] = v101;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v84->m_Items[3], (int32_t)v101, v99, v100);
  v102 = System_String__Concat_61798544(v84, 0LL);
  EventRewardRootComponent__setRewardInfoImg(teamNameSprite, v102, 0LL);
  rewardGetObj = EventRewardRootComponent__setRewardInfoImg(
                   this->fields.supportTxtSprite,
                   EventRankingListViewItemDraw_TypeInfo->static_fields->SUPPORT_TXT_IMAGE_NAME,
                   0LL);
  v103 = v5->fields.itemInfo;
  if ( !v103 )
    goto LABEL_144;
  supportInfoLabel = this->fields.supportInfoLabel;
  supportPoint = v103->fields.supportPoint;
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
      v108 = EventRankingListViewItemDraw_TypeInfo;
      goalSprite = this->fields.goalSprite;
      if ( !EventRankingListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRankingListViewItemDraw_TypeInfo);
        v108 = EventRankingListViewItemDraw_TypeInfo;
      }
      GOAL_IMAGE_NAME = v108->static_fields->GOAL_IMAGE_NAME;
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
      rewardGetObj = sub_1B900B8(object___TypeInfo, 4LL);
      v114 = EventRankingListViewItemDraw_TypeInfo;
      v115 = (System_Object_array *)rewardGetObj;
      if ( !EventRankingListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRankingListViewItemDraw_TypeInfo);
        v114 = EventRankingListViewItemDraw_TypeInfo;
      }
      if ( !v115 )
        goto LABEL_144;
      REWARD_GET_IMAGE_NAME = (Il2CppObject *)v114->static_fields->REWARD_GET_IMAGE_NAME;
      if ( !REWARD_GET_IMAGE_NAME
        || (rewardGetObj = sub_1B9014C(REWARD_GET_IMAGE_NAME, v115->obj.klass->_1.element_class)) != 0 )
      {
        if ( !v115->max_length )
          goto LABEL_145;
        v115->m_Items[0] = REWARD_GET_IMAGE_NAME;
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)v115->m_Items, (int32_t)REWARD_GET_IMAGE_NAME, v112, v113);
        v120 = v5->fields.itemInfo;
        if ( !v120 )
          goto LABEL_144;
        eventId = v120->fields.eventId;
        rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &eventId, v117, v118, v119);
        v123 = (Il2CppObject *)rewardGetObj;
        if ( !rewardGetObj || (rewardGetObj = sub_1B9014C(rewardGetObj, v115->obj.klass->_1.element_class)) != 0 )
        {
          if ( v115->max_length <= 1 )
            goto LABEL_145;
          v115->m_Items[1] = v123;
          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v115->m_Items[1], (int32_t)v123, v121, v122);
          rewardGetObj = StringLiteral_16148/*"_"*/;
          if ( StringLiteral_16148/*"_"*/ )
          {
            rewardGetObj = sub_1B9014C(StringLiteral_16148/*"_"*/, v115->obj.klass->_1.element_class);
            if ( !rewardGetObj )
              goto LABEL_146;
            item = (EventRankingListViewItem_o *)StringLiteral_16148/*"_"*/;
          }
          else
          {
            item = 0LL;
          }
          if ( v115->max_length <= 2 )
            goto LABEL_145;
          v115->m_Items[2] = (Il2CppObject *)item;
          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v115->m_Items[2], (int32_t)item, v124, v125);
          v157 = ranking;
          rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v157, v126, v127, v128);
          v131 = (Il2CppObject *)rewardGetObj;
          if ( !rewardGetObj || (rewardGetObj = sub_1B9014C(rewardGetObj, v115->obj.klass->_1.element_class)) != 0 )
          {
            if ( v115->max_length <= 3 )
              goto LABEL_145;
            v115->m_Items[3] = v131;
            sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v115->m_Items[3], (int32_t)v131, v129, v130);
            v132 = System_String__Concat_61798544(v115, 0LL);
            if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
            EventRewardRootComponent__setRewardInfoImg(rewardGetSprite, v132, 0LL);
            rewardGetObj = (__int64)this->fields.rewardGetSprite;
            if ( !rewardGetObj )
              goto LABEL_144;
            rewardGetObj = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rewardGetObj, 0LL);
            if ( !rewardGetObj )
              goto LABEL_144;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rewardGetObj, 1, 0LL);
            v133 = v5->fields.ranking;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            rewardGetObj = (__int64)this->fields.rewardGetObj;
            if ( !rewardGetObj )
              goto LABEL_144;
            UnityEngine_GameObject__SetActive(
              (UnityEngine_GameObject_o *)rewardGetObj,
              v133 <= BalanceConfig_TypeInfo->static_fields->raceRewardRankMax,
              0LL);
            goto LABEL_122;
          }
        }
      }
LABEL_146:
      v147 = sub_1B90290(rewardGetObj);
      sub_1B90138(v147, 0LL);
    }
  }
LABEL_122:
  giftEntityList = v5->fields.giftEntityList;
  this->fields.giftEntityList = giftEntityList;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.giftEntityList, (int32_t)giftEntityList, v106, v107);
  v135 = v5->fields.giftEntityList;
  if ( !v135 )
    goto LABEL_144;
  max_length = v135->max_length;
  this->fields.isMultipleReward = max_length > 1;
  if ( max_length < 2 )
  {
    v144 = this->fields.giftEntityList;
    if ( !v144 )
      goto LABEL_144;
    if ( v144->max_length )
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
    v139 = this->fields.listViewObject;
    if ( !v139 )
      goto LABEL_144;
    v140 = this->fields.giftEntityList;
    if ( !v140 )
      goto LABEL_144;
    rewardGetObj = (__int64)v139->fields.manager;
    if ( !rewardGetObj )
      goto LABEL_144;
    item = (EventRankingListViewItem_o *)EventRankingListViewManager_TypeInfo;
    methodPtr_low = LOBYTE(EventRankingListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)rewardGetObj + 304LL) < (unsigned int)methodPtr_low
      || *(EventRankingListViewManager_c **)(*(_QWORD *)(*(_QWORD *)rewardGetObj + 200LL) + 8 * methodPtr_low - 8) != EventRankingListViewManager_TypeInfo )
    {
      sub_1B9052C(rewardGetObj);
      EventRankingListViewManager__GetAlphaAnimCnt(v148, v149, v150);
      return;
    }
    v142 = v140->max_length;
    v143 = *(_DWORD *)(rewardGetObj + 340) % (int)v142;
    if ( v143 < v142 )
    {
      v144 = (struct GiftEntity_array *)((char *)v140 + 8 * v143);
LABEL_137:
      v145 = (int32_t *)v144->m_Items[0];
      if ( v145 )
      {
        rewardGetObj = (__int64)this->fields.itemIcon;
        if ( rewardGetObj )
        {
          if ( v145[7] <= 1 )
            v146 = -1;
          else
            v146 = v145[7];
          ItemIconComponent__SetGift_38197016((ItemIconComponent_o *)rewardGetObj, v145[5], v145[6], v146, 0, 0LL);
          return;
        }
      }
LABEL_144:
      sub_1B9026C(rewardGetObj, item);
    }
LABEL_145:
    sub_1B90274(rewardGetObj, item);
  }
}


void __fastcall EventRankingListViewItemDraw__SetListViewObject(
        EventRankingListViewItemDraw_o *this,
        EventRankingListViewObject_o *listViewObject,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.listViewObject = listViewObject;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.listViewObject,
    (int32_t)listViewObject,
    (int32_t)method,
    v3);
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
      sub_1B9026C(0LL, method);
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
      sub_1B9026C(this, item);
    EventRankingListViewItemDraw__SetRewardIconAlpha(this, manager->fields.alphaAnimNow, (const MethodInfo *)item);
  }
}