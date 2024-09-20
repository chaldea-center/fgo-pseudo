void __fastcall EventRankingListViewItemDraw___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  int32_t v3; // w1
  struct EventRankingListViewItemDraw_StaticFields *static_fields; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  int32_t v7; // w1
  struct EventRankingListViewItemDraw_StaticFields *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w1
  struct EventRankingListViewItemDraw_StaticFields *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w1
  struct EventRankingListViewItemDraw_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w1
  struct EventRankingListViewItemDraw_StaticFields *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w1
  struct EventRankingListViewItemDraw_StaticFields *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w1
  struct EventRankingListViewItemDraw_StaticFields *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3

  if ( (byte_4A5F116 & 1) == 0 )
  {
    sub_1B885B0(&EventRankingListViewItemDraw_TypeInfo);
    sub_1B885B0(&StringLiteral_19232/*"event_ranking_"*/);
    sub_1B885B0(&StringLiteral_19190/*"event_goal_flag"*/);
    sub_1B885B0(&StringLiteral_19236/*"event_ranking_rewardget_"*/);
    sub_1B885B0(&StringLiteral_19235/*"event_ranking_reward_txt"*/);
    sub_1B885B0(&StringLiteral_19234/*"event_ranking_group_name_"*/);
    sub_1B885B0(&StringLiteral_19233/*"event_ranking_group_"*/);
    sub_1B885B0(&StringLiteral_19269/*"event_support_txt"*/);
    sub_1B885B0(&StringLiteral_19249/*"event_rewardranking_"*/);
    byte_4A5F116 = 1;
  }
  EventRankingListViewItemDraw_TypeInfo->static_fields->GROUP_IMAGE_NAME = (struct System_String_o *)StringLiteral_19233/*"event_ranking_group_"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)EventRankingListViewItemDraw_TypeInfo->static_fields,
    StringLiteral_19233/*"event_ranking_group_"*/,
    v1,
    v2);
  v3 = StringLiteral_19234/*"event_ranking_group_name_"*/;
  static_fields = EventRankingListViewItemDraw_TypeInfo->static_fields;
  static_fields->GROUP_NAME_IMAGE_NAME = (struct System_String_o *)StringLiteral_19234/*"event_ranking_group_name_"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->GROUP_NAME_IMAGE_NAME, v3, v5, v6);
  v7 = StringLiteral_19249/*"event_rewardranking_"*/;
  v8 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v8->BOARD_IMAGE_NAME = (struct System_String_o *)StringLiteral_19249/*"event_rewardranking_"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->BOARD_IMAGE_NAME, v7, v9, v10);
  v11 = StringLiteral_19236/*"event_ranking_rewardget_"*/;
  v12 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v12->REWARD_GET_IMAGE_NAME = (struct System_String_o *)StringLiteral_19236/*"event_ranking_rewardget_"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v12->REWARD_GET_IMAGE_NAME, v11, v13, v14);
  v15 = StringLiteral_19232/*"event_ranking_"*/;
  v16 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v16->RANKING_IMAGE_NAME = (struct System_String_o *)StringLiteral_19232/*"event_ranking_"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v16->RANKING_IMAGE_NAME, v15, v17, v18);
  v19 = StringLiteral_19190/*"event_goal_flag"*/;
  v20 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v20->GOAL_IMAGE_NAME = (struct System_String_o *)StringLiteral_19190/*"event_goal_flag"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v20->GOAL_IMAGE_NAME, v19, v21, v22);
  v23 = StringLiteral_19235/*"event_ranking_reward_txt"*/;
  v24 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v24->HIGHER_REWARD_IMAGE_NAME = (struct System_String_o *)StringLiteral_19235/*"event_ranking_reward_txt"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v24->HIGHER_REWARD_IMAGE_NAME, v23, v25, v26);
  v27 = StringLiteral_19269/*"event_support_txt"*/;
  v28 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v28->SUPPORT_TXT_IMAGE_NAME = (struct System_String_o *)StringLiteral_19269/*"event_support_txt"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v28->SUPPORT_TXT_IMAGE_NAME, v27, v29, v30);
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
      sub_1B88814(this, manager);
    v6 = (int32_t *)giftEntityList->m_Items[v5];
    if ( !v6 || (this = (EventRankingListViewItemDraw_o *)this->fields.itemIcon) == 0LL )
LABEL_12:
      sub_1B8880C(this, manager);
    if ( v6[7] <= 1 )
      v7 = -1;
    else
      v7 = v6[7];
    ItemIconComponent__SetGift_38144896((ItemIconComponent_o *)this, v6[5], v6[6], v7, 0, 0LL);
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_Object_array *v12; // x22
  EventRankingListViewItemDraw_c *v13; // x8
  Il2CppObject *BOARD_IMAGE_NAME; // x23
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  struct EventRankingRoundItemInfo_o *itemInfo; // x8
  int32_t v19; // w2
  int32_t v20; // w3
  Il2CppObject *v21; // x23
  int32_t v22; // w2
  int32_t v23; // w3
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  int32_t v27; // w2
  int32_t v28; // w3
  Il2CppObject *v29; // x23
  System_String_o *v30; // x22
  UISprite_o *rankingSprite; // x21
  int32_t v32; // w2
  int32_t v33; // w3
  System_Object_array *v34; // x22
  struct System_String_o *RANKING_IMAGE_NAME; // x23
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  struct EventRankingRoundItemInfo_o *v39; // x8
  int32_t v40; // w2
  int32_t v41; // w3
  Il2CppObject *v42; // x23
  int32_t v43; // w2
  int32_t v44; // w3
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  int32_t v48; // w2
  int32_t v49; // w3
  Il2CppObject *v50; // x23
  System_String_o *v51; // x0
  UISprite_o *teamSprite; // x21
  int32_t v53; // w2
  int32_t v54; // w3
  System_Object_array *v55; // x22
  struct System_String_o *GROUP_IMAGE_NAME; // x23
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  struct EventRankingRoundItemInfo_o *v60; // x8
  int32_t v61; // w2
  int32_t v62; // w3
  Il2CppObject *v63; // x23
  int32_t v64; // w2
  int32_t v65; // w3
  __int64 v66; // x2
  __int64 v67; // x3
  __int64 v68; // x4
  int32_t v69; // w2
  int32_t v70; // w3
  Il2CppObject *v71; // x23
  System_String_o *v72; // x0
  UISprite_o *teamNameSprite; // x21
  int32_t v74; // w2
  int32_t v75; // w3
  System_Object_array *v76; // x22
  struct System_String_o *GROUP_NAME_IMAGE_NAME; // x23
  __int64 v78; // x2
  __int64 v79; // x3
  __int64 v80; // x4
  struct EventRankingRoundItemInfo_o *v81; // x8
  int32_t v82; // w2
  int32_t v83; // w3
  Il2CppObject *v84; // x23
  int32_t v85; // w2
  int32_t v86; // w3
  __int64 v87; // x2
  __int64 v88; // x3
  __int64 v89; // x4
  struct EventRankingRoundItemInfo_o *v90; // x8
  int32_t v91; // w2
  int32_t v92; // w3
  Il2CppObject *v93; // x23
  System_String_o *v94; // x0
  struct EventRankingRoundItemInfo_o *v95; // x8
  UILabel_o *supportInfoLabel; // x21
  int64_t supportPoint; // x22
  int32_t v98; // w2
  int32_t v99; // w3
  EventRankingListViewItemDraw_c *v100; // x0
  UISprite_o *goalSprite; // x21
  System_String_o *GOAL_IMAGE_NAME; // x22
  UISprite_o *rewardGetSprite; // x21
  int32_t v104; // w2
  int32_t v105; // w3
  EventRankingListViewItemDraw_c *v106; // x8
  System_Object_array *v107; // x22
  Il2CppObject *REWARD_GET_IMAGE_NAME; // x23
  __int64 v109; // x2
  __int64 v110; // x3
  __int64 v111; // x4
  struct EventRankingRoundItemInfo_o *v112; // x8
  int32_t v113; // w2
  int32_t v114; // w3
  Il2CppObject *v115; // x23
  int32_t v116; // w2
  int32_t v117; // w3
  __int64 v118; // x2
  __int64 v119; // x3
  __int64 v120; // x4
  int32_t v121; // w2
  int32_t v122; // w3
  Il2CppObject *v123; // x23
  System_String_o *v124; // x22
  int32_t v125; // w21
  struct GiftEntity_array *giftEntityList; // x1
  struct GiftEntity_array *v127; // x8
  int max_length; // w8
  struct EventRankingListViewObject_o *listViewObject; // x8
  UnityEngine_Object_o *manager; // x20
  struct EventRankingListViewObject_o *v131; // x9
  struct GiftEntity_array *v132; // x8
  __int64 methodPtr_low; // x10
  il2cpp_array_size_t v134; // w10
  int v135; // w9
  struct GiftEntity_array *v136; // x8
  int32_t *v137; // x8
  int32_t v138; // w3
  __int64 v139; // x0
  EventRankingListViewManager_o *v140; // x0
  int32_t v141; // w1
  const MethodInfo *v142; // x2
  int32_t groupId; // [xsp+0h] [xbp-80h] BYREF
  int32_t v144; // [xsp+4h] [xbp-7Ch] BYREF
  int32_t groupImageId; // [xsp+8h] [xbp-78h] BYREF
  int32_t v146; // [xsp+Ch] [xbp-74h] BYREF
  int32_t v147; // [xsp+10h] [xbp-70h] BYREF
  int32_t v148; // [xsp+14h] [xbp-6Ch] BYREF
  int v149; // [xsp+18h] [xbp-68h] BYREF
  int32_t eventId; // [xsp+1Ch] [xbp-64h] BYREF

  v5 = item;
  if ( (byte_4A5F115 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&EventRankingListViewItemDraw_TypeInfo);
    sub_1B885B0(&EventRankingListViewManager_TypeInfo);
    sub_1B885B0(&EventRewardRootComponent_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_16123/*"_"*/);
    byte_4A5F115 = 1;
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
  rewardGetObj = sub_1B88658(object___TypeInfo, 4LL);
  v12 = (System_Object_array *)rewardGetObj;
  v13 = EventRankingListViewItemDraw_TypeInfo;
  if ( !EventRankingListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRankingListViewItemDraw_TypeInfo);
    v13 = EventRankingListViewItemDraw_TypeInfo;
  }
  if ( !v12 )
    goto LABEL_144;
  BOARD_IMAGE_NAME = (Il2CppObject *)v13->static_fields->BOARD_IMAGE_NAME;
  if ( BOARD_IMAGE_NAME )
  {
    rewardGetObj = sub_1B886EC(BOARD_IMAGE_NAME, v12->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( !v12->max_length )
    goto LABEL_145;
  v12->m_Items[0] = BOARD_IMAGE_NAME;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v12->m_Items, (int32_t)BOARD_IMAGE_NAME, v10, v11);
  itemInfo = v5->fields.itemInfo;
  if ( !itemInfo )
    goto LABEL_144;
  eventId = itemInfo->fields.eventId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &eventId, v15, v16, v17);
  v21 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1B886EC(rewardGetObj, v12->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( v12->max_length <= 1 )
    goto LABEL_145;
  v12->m_Items[1] = v21;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v12->m_Items[1], (int32_t)v21, v19, v20);
  rewardGetObj = StringLiteral_16123/*"_"*/;
  if ( StringLiteral_16123/*"_"*/ )
  {
    rewardGetObj = sub_1B886EC(StringLiteral_16123/*"_"*/, v12->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
    item = (EventRankingListViewItem_o *)StringLiteral_16123/*"_"*/;
  }
  else
  {
    item = 0LL;
  }
  if ( v12->max_length <= 2 )
    goto LABEL_145;
  v12->m_Items[2] = (Il2CppObject *)item;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v12->m_Items[2], (int32_t)item, v22, v23);
  v149 = ranking;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v149, v24, v25, v26);
  v29 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1B886EC(rewardGetObj, v12->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( v12->max_length <= 3 )
    goto LABEL_145;
  v12->m_Items[3] = v29;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v12->m_Items[3], (int32_t)v29, v27, v28);
  v30 = System_String__Concat_61718484(v12, 0LL);
  if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
  EventRewardRootComponent__setRewardInfoImg(baseSprite, v30, 0LL);
  rankingSprite = this->fields.rankingSprite;
  rewardGetObj = sub_1B88658(object___TypeInfo, 4LL);
  if ( !rewardGetObj )
    goto LABEL_144;
  v34 = (System_Object_array *)rewardGetObj;
  RANKING_IMAGE_NAME = EventRankingListViewItemDraw_TypeInfo->static_fields->RANKING_IMAGE_NAME;
  if ( RANKING_IMAGE_NAME )
  {
    rewardGetObj = sub_1B886EC(RANKING_IMAGE_NAME, *(_QWORD *)(*(_QWORD *)rewardGetObj + 64LL));
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( !v34->max_length )
    goto LABEL_145;
  v34->m_Items[0] = (Il2CppObject *)RANKING_IMAGE_NAME;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v34->m_Items, (int32_t)RANKING_IMAGE_NAME, v32, v33);
  v39 = v5->fields.itemInfo;
  if ( !v39 )
    goto LABEL_144;
  v148 = v39->fields.eventId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v148, v36, v37, v38);
  v42 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1B886EC(rewardGetObj, v34->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( v34->max_length <= 1 )
    goto LABEL_145;
  v34->m_Items[1] = v42;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v34->m_Items[1], (int32_t)v42, v40, v41);
  rewardGetObj = StringLiteral_16123/*"_"*/;
  if ( StringLiteral_16123/*"_"*/ )
  {
    rewardGetObj = sub_1B886EC(StringLiteral_16123/*"_"*/, v34->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
    item = (EventRankingListViewItem_o *)StringLiteral_16123/*"_"*/;
  }
  else
  {
    item = 0LL;
  }
  if ( v34->max_length <= 2 )
    goto LABEL_145;
  v34->m_Items[2] = (Il2CppObject *)item;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v34->m_Items[2], (int32_t)item, v43, v44);
  v147 = v5->fields.ranking;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v147, v45, v46, v47);
  v50 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1B886EC(rewardGetObj, v34->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( v34->max_length <= 3 )
    goto LABEL_145;
  v34->m_Items[3] = v50;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v34->m_Items[3], (int32_t)v50, v48, v49);
  v51 = System_String__Concat_61718484(v34, 0LL);
  EventRewardRootComponent__setRewardInfoImg(rankingSprite, v51, 0LL);
  teamSprite = this->fields.teamSprite;
  rewardGetObj = sub_1B88658(object___TypeInfo, 4LL);
  if ( !rewardGetObj )
    goto LABEL_144;
  v55 = (System_Object_array *)rewardGetObj;
  GROUP_IMAGE_NAME = EventRankingListViewItemDraw_TypeInfo->static_fields->GROUP_IMAGE_NAME;
  if ( GROUP_IMAGE_NAME )
  {
    rewardGetObj = sub_1B886EC(GROUP_IMAGE_NAME, *(_QWORD *)(*(_QWORD *)rewardGetObj + 64LL));
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( !v55->max_length )
    goto LABEL_145;
  v55->m_Items[0] = (Il2CppObject *)GROUP_IMAGE_NAME;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v55->m_Items, (int32_t)GROUP_IMAGE_NAME, v53, v54);
  v60 = v5->fields.itemInfo;
  if ( !v60 )
    goto LABEL_144;
  v146 = v60->fields.eventId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v146, v57, v58, v59);
  v63 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1B886EC(rewardGetObj, v55->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( v55->max_length <= 1 )
    goto LABEL_145;
  v55->m_Items[1] = v63;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v55->m_Items[1], (int32_t)v63, v61, v62);
  rewardGetObj = StringLiteral_16123/*"_"*/;
  if ( StringLiteral_16123/*"_"*/ )
  {
    rewardGetObj = sub_1B886EC(StringLiteral_16123/*"_"*/, v55->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
    item = (EventRankingListViewItem_o *)StringLiteral_16123/*"_"*/;
  }
  else
  {
    item = 0LL;
  }
  if ( v55->max_length <= 2 )
    goto LABEL_145;
  v55->m_Items[2] = (Il2CppObject *)item;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v55->m_Items[2], (int32_t)item, v64, v65);
  groupImageId = v5->fields.groupImageId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &groupImageId, v66, v67, v68);
  v71 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1B886EC(rewardGetObj, v55->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( v55->max_length <= 3 )
    goto LABEL_145;
  v55->m_Items[3] = v71;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v55->m_Items[3], (int32_t)v71, v69, v70);
  v72 = System_String__Concat_61718484(v55, 0LL);
  EventRewardRootComponent__setRewardInfoImg(teamSprite, v72, 0LL);
  teamNameSprite = this->fields.teamNameSprite;
  rewardGetObj = sub_1B88658(object___TypeInfo, 4LL);
  if ( !rewardGetObj )
    goto LABEL_144;
  v76 = (System_Object_array *)rewardGetObj;
  GROUP_NAME_IMAGE_NAME = EventRankingListViewItemDraw_TypeInfo->static_fields->GROUP_NAME_IMAGE_NAME;
  if ( GROUP_NAME_IMAGE_NAME )
  {
    rewardGetObj = sub_1B886EC(GROUP_NAME_IMAGE_NAME, *(_QWORD *)(*(_QWORD *)rewardGetObj + 64LL));
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( !v76->max_length )
    goto LABEL_145;
  v76->m_Items[0] = (Il2CppObject *)GROUP_NAME_IMAGE_NAME;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v76->m_Items, (int32_t)GROUP_NAME_IMAGE_NAME, v74, v75);
  v81 = v5->fields.itemInfo;
  if ( !v81 )
    goto LABEL_144;
  v144 = v81->fields.eventId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v144, v78, v79, v80);
  v84 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1B886EC(rewardGetObj, v76->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( v76->max_length <= 1 )
    goto LABEL_145;
  v76->m_Items[1] = v84;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v76->m_Items[1], (int32_t)v84, v82, v83);
  rewardGetObj = StringLiteral_16123/*"_"*/;
  if ( StringLiteral_16123/*"_"*/ )
  {
    rewardGetObj = sub_1B886EC(StringLiteral_16123/*"_"*/, v76->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
    item = (EventRankingListViewItem_o *)StringLiteral_16123/*"_"*/;
  }
  else
  {
    item = 0LL;
  }
  if ( v76->max_length <= 2 )
    goto LABEL_145;
  v76->m_Items[2] = (Il2CppObject *)item;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v76->m_Items[2], (int32_t)item, v85, v86);
  v90 = v5->fields.itemInfo;
  if ( !v90 )
    goto LABEL_144;
  groupId = v90->fields.groupId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &groupId, v87, v88, v89);
  v93 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1B886EC(rewardGetObj, v76->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( v76->max_length <= 3 )
    goto LABEL_145;
  v76->m_Items[3] = v93;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v76->m_Items[3], (int32_t)v93, v91, v92);
  v94 = System_String__Concat_61718484(v76, 0LL);
  EventRewardRootComponent__setRewardInfoImg(teamNameSprite, v94, 0LL);
  rewardGetObj = EventRewardRootComponent__setRewardInfoImg(
                   this->fields.supportTxtSprite,
                   EventRankingListViewItemDraw_TypeInfo->static_fields->SUPPORT_TXT_IMAGE_NAME,
                   0LL);
  v95 = v5->fields.itemInfo;
  if ( !v95 )
    goto LABEL_144;
  supportInfoLabel = this->fields.supportInfoLabel;
  supportPoint = v95->fields.supportPoint;
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
      v100 = EventRankingListViewItemDraw_TypeInfo;
      goalSprite = this->fields.goalSprite;
      if ( !EventRankingListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRankingListViewItemDraw_TypeInfo);
        v100 = EventRankingListViewItemDraw_TypeInfo;
      }
      GOAL_IMAGE_NAME = v100->static_fields->GOAL_IMAGE_NAME;
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
      rewardGetObj = sub_1B88658(object___TypeInfo, 4LL);
      v106 = EventRankingListViewItemDraw_TypeInfo;
      v107 = (System_Object_array *)rewardGetObj;
      if ( !EventRankingListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRankingListViewItemDraw_TypeInfo);
        v106 = EventRankingListViewItemDraw_TypeInfo;
      }
      if ( !v107 )
        goto LABEL_144;
      REWARD_GET_IMAGE_NAME = (Il2CppObject *)v106->static_fields->REWARD_GET_IMAGE_NAME;
      if ( !REWARD_GET_IMAGE_NAME
        || (rewardGetObj = sub_1B886EC(REWARD_GET_IMAGE_NAME, v107->obj.klass->_1.element_class)) != 0 )
      {
        if ( !v107->max_length )
          goto LABEL_145;
        v107->m_Items[0] = REWARD_GET_IMAGE_NAME;
        sub_1B88554((ServantStatusBattleListViewItem_o *)v107->m_Items, (int32_t)REWARD_GET_IMAGE_NAME, v104, v105);
        v112 = v5->fields.itemInfo;
        if ( !v112 )
          goto LABEL_144;
        eventId = v112->fields.eventId;
        rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &eventId, v109, v110, v111);
        v115 = (Il2CppObject *)rewardGetObj;
        if ( !rewardGetObj || (rewardGetObj = sub_1B886EC(rewardGetObj, v107->obj.klass->_1.element_class)) != 0 )
        {
          if ( v107->max_length <= 1 )
            goto LABEL_145;
          v107->m_Items[1] = v115;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v107->m_Items[1], (int32_t)v115, v113, v114);
          rewardGetObj = StringLiteral_16123/*"_"*/;
          if ( StringLiteral_16123/*"_"*/ )
          {
            rewardGetObj = sub_1B886EC(StringLiteral_16123/*"_"*/, v107->obj.klass->_1.element_class);
            if ( !rewardGetObj )
              goto LABEL_146;
            item = (EventRankingListViewItem_o *)StringLiteral_16123/*"_"*/;
          }
          else
          {
            item = 0LL;
          }
          if ( v107->max_length <= 2 )
            goto LABEL_145;
          v107->m_Items[2] = (Il2CppObject *)item;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v107->m_Items[2], (int32_t)item, v116, v117);
          v149 = ranking;
          rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v149, v118, v119, v120);
          v123 = (Il2CppObject *)rewardGetObj;
          if ( !rewardGetObj || (rewardGetObj = sub_1B886EC(rewardGetObj, v107->obj.klass->_1.element_class)) != 0 )
          {
            if ( v107->max_length <= 3 )
              goto LABEL_145;
            v107->m_Items[3] = v123;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v107->m_Items[3], (int32_t)v123, v121, v122);
            v124 = System_String__Concat_61718484(v107, 0LL);
            if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
            EventRewardRootComponent__setRewardInfoImg(rewardGetSprite, v124, 0LL);
            rewardGetObj = (__int64)this->fields.rewardGetSprite;
            if ( !rewardGetObj )
              goto LABEL_144;
            rewardGetObj = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rewardGetObj, 0LL);
            if ( !rewardGetObj )
              goto LABEL_144;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rewardGetObj, 1, 0LL);
            v125 = v5->fields.ranking;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            rewardGetObj = (__int64)this->fields.rewardGetObj;
            if ( !rewardGetObj )
              goto LABEL_144;
            UnityEngine_GameObject__SetActive(
              (UnityEngine_GameObject_o *)rewardGetObj,
              v125 <= BalanceConfig_TypeInfo->static_fields->raceRewardRankMax,
              0LL);
            goto LABEL_122;
          }
        }
      }
LABEL_146:
      v139 = sub_1B88830(rewardGetObj);
      sub_1B886D8(v139, 0LL);
    }
  }
LABEL_122:
  giftEntityList = v5->fields.giftEntityList;
  this->fields.giftEntityList = giftEntityList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.giftEntityList, (int32_t)giftEntityList, v98, v99);
  v127 = v5->fields.giftEntityList;
  if ( !v127 )
    goto LABEL_144;
  max_length = v127->max_length;
  this->fields.isMultipleReward = max_length > 1;
  if ( max_length < 2 )
  {
    v136 = this->fields.giftEntityList;
    if ( !v136 )
      goto LABEL_144;
    if ( v136->max_length )
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
    v131 = this->fields.listViewObject;
    if ( !v131 )
      goto LABEL_144;
    v132 = this->fields.giftEntityList;
    if ( !v132 )
      goto LABEL_144;
    rewardGetObj = (__int64)v131->fields.manager;
    if ( !rewardGetObj )
      goto LABEL_144;
    item = (EventRankingListViewItem_o *)EventRankingListViewManager_TypeInfo;
    methodPtr_low = LOBYTE(EventRankingListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)rewardGetObj + 304LL) < (unsigned int)methodPtr_low
      || *(EventRankingListViewManager_c **)(*(_QWORD *)(*(_QWORD *)rewardGetObj + 200LL) + 8 * methodPtr_low - 8) != EventRankingListViewManager_TypeInfo )
    {
      sub_1B88ACC(rewardGetObj);
      EventRankingListViewManager__GetAlphaAnimCnt(v140, v141, v142);
      return;
    }
    v134 = v132->max_length;
    v135 = *(_DWORD *)(rewardGetObj + 340) % (int)v134;
    if ( v135 < v134 )
    {
      v136 = (struct GiftEntity_array *)((char *)v132 + 8 * v135);
LABEL_137:
      v137 = (int32_t *)v136->m_Items[0];
      if ( v137 )
      {
        rewardGetObj = (__int64)this->fields.itemIcon;
        if ( rewardGetObj )
        {
          if ( v137[7] <= 1 )
            v138 = -1;
          else
            v138 = v137[7];
          ItemIconComponent__SetGift_38144896((ItemIconComponent_o *)rewardGetObj, v137[5], v137[6], v138, 0, 0LL);
          return;
        }
      }
LABEL_144:
      sub_1B8880C(rewardGetObj, item);
    }
LABEL_145:
    sub_1B88814(rewardGetObj, item);
  }
}


void __fastcall EventRankingListViewItemDraw__SetListViewObject(
        EventRankingListViewItemDraw_o *this,
        EventRankingListViewObject_o *listViewObject,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.listViewObject = listViewObject;
  sub_1B88554(
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
      sub_1B8880C(0LL, method);
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
      sub_1B8880C(this, item);
    EventRankingListViewItemDraw__SetRewardIconAlpha(this, manager->fields.alphaAnimNow, (const MethodInfo *)item);
  }
}