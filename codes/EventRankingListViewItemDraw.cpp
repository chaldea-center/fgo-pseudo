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

  if ( (byte_4A0032A & 1) == 0 )
  {
    sub_1B640C8(&EventRankingListViewItemDraw_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_19155/*"event_ranking_"*/, v4);
    sub_1B640C8(&StringLiteral_19114/*"event_goal_flag"*/, v5);
    sub_1B640C8(&StringLiteral_19159/*"event_ranking_rewardget_"*/, v6);
    sub_1B640C8(&StringLiteral_19158/*"event_ranking_reward_txt"*/, v7);
    sub_1B640C8(&StringLiteral_19157/*"event_ranking_group_name_"*/, v8);
    sub_1B640C8(&StringLiteral_19156/*"event_ranking_group_"*/, v9);
    sub_1B640C8(&StringLiteral_19192/*"event_support_txt"*/, v10);
    sub_1B640C8(&StringLiteral_19172/*"event_rewardranking_"*/, v11);
    byte_4A0032A = 1;
  }
  EventRankingListViewItemDraw_TypeInfo->static_fields->GROUP_IMAGE_NAME = (struct System_String_o *)StringLiteral_19156/*"event_ranking_group_"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)EventRankingListViewItemDraw_TypeInfo->static_fields,
    StringLiteral_19156/*"event_ranking_group_"*/,
    v2,
    v3);
  v12 = StringLiteral_19157/*"event_ranking_group_name_"*/;
  static_fields = EventRankingListViewItemDraw_TypeInfo->static_fields;
  static_fields->GROUP_NAME_IMAGE_NAME = (struct System_String_o *)StringLiteral_19157/*"event_ranking_group_name_"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->GROUP_NAME_IMAGE_NAME, v12, v14, v15);
  v16 = StringLiteral_19172/*"event_rewardranking_"*/;
  v17 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v17->BOARD_IMAGE_NAME = (struct System_String_o *)StringLiteral_19172/*"event_rewardranking_"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v17->BOARD_IMAGE_NAME, v16, v18, v19);
  v20 = StringLiteral_19159/*"event_ranking_rewardget_"*/;
  v21 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v21->REWARD_GET_IMAGE_NAME = (struct System_String_o *)StringLiteral_19159/*"event_ranking_rewardget_"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v21->REWARD_GET_IMAGE_NAME, v20, v22, v23);
  v24 = StringLiteral_19155/*"event_ranking_"*/;
  v25 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v25->RANKING_IMAGE_NAME = (struct System_String_o *)StringLiteral_19155/*"event_ranking_"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v25->RANKING_IMAGE_NAME, v24, v26, v27);
  v28 = StringLiteral_19114/*"event_goal_flag"*/;
  v29 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v29->GOAL_IMAGE_NAME = (struct System_String_o *)StringLiteral_19114/*"event_goal_flag"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v29->GOAL_IMAGE_NAME, v28, v30, v31);
  v32 = StringLiteral_19158/*"event_ranking_reward_txt"*/;
  v33 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v33->HIGHER_REWARD_IMAGE_NAME = (struct System_String_o *)StringLiteral_19158/*"event_ranking_reward_txt"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v33->HIGHER_REWARD_IMAGE_NAME, v32, v34, v35);
  v36 = StringLiteral_19192/*"event_support_txt"*/;
  v37 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v37->SUPPORT_TXT_IMAGE_NAME = (struct System_String_o *)StringLiteral_19192/*"event_support_txt"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v37->SUPPORT_TXT_IMAGE_NAME, v36, v38, v39);
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
      sub_1B6432C(this, manager);
    v6 = (int32_t *)giftEntityList->m_Items[v5];
    if ( !v6 || (this = (EventRankingListViewItemDraw_o *)this->fields.itemIcon) == 0LL )
LABEL_12:
      sub_1B64324(this);
    if ( v6[7] <= 1 )
      v7 = -1;
    else
      v7 = v6[7];
    ItemIconComponent__SetGift_37829292((ItemIconComponent_o *)this, v6[5], v6[6], v7, 0, 0LL);
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
  __int64 rewardGetObj; // x0
  UISprite_o *baseSprite; // x21
  int32_t ranking; // w24
  EventRankingListViewManager_c *v18; // x1
  int32_t v19; // w2
  int32_t v20; // w3
  System_Object_array *v21; // x22
  EventRankingListViewItemDraw_c *v22; // x8
  Il2CppObject *BOARD_IMAGE_NAME; // x23
  struct EventRankingRoundItemInfo_o *itemInfo; // x8
  int32_t v25; // w2
  int32_t v26; // w3
  Il2CppObject *v27; // x23
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w2
  int32_t v31; // w3
  Il2CppObject *v32; // x23
  System_String_o *v33; // x22
  UISprite_o *rankingSprite; // x21
  int32_t v35; // w2
  int32_t v36; // w3
  System_Object_array *v37; // x22
  struct System_String_o *RANKING_IMAGE_NAME; // x23
  struct EventRankingRoundItemInfo_o *v39; // x8
  int32_t v40; // w2
  int32_t v41; // w3
  Il2CppObject *v42; // x23
  int32_t v43; // w2
  int32_t v44; // w3
  int32_t v45; // w2
  int32_t v46; // w3
  Il2CppObject *v47; // x23
  System_String_o *v48; // x0
  UISprite_o *teamSprite; // x21
  int32_t v50; // w2
  int32_t v51; // w3
  System_Object_array *v52; // x22
  struct System_String_o *GROUP_IMAGE_NAME; // x23
  struct EventRankingRoundItemInfo_o *v54; // x8
  int32_t v55; // w2
  int32_t v56; // w3
  Il2CppObject *v57; // x23
  int32_t v58; // w2
  int32_t v59; // w3
  int32_t v60; // w2
  int32_t v61; // w3
  Il2CppObject *v62; // x23
  System_String_o *v63; // x0
  UISprite_o *teamNameSprite; // x21
  int32_t v65; // w2
  int32_t v66; // w3
  System_Object_array *v67; // x22
  struct System_String_o *GROUP_NAME_IMAGE_NAME; // x23
  struct EventRankingRoundItemInfo_o *v69; // x8
  int32_t v70; // w2
  int32_t v71; // w3
  Il2CppObject *v72; // x23
  int32_t v73; // w2
  int32_t v74; // w3
  struct EventRankingRoundItemInfo_o *v75; // x8
  int32_t v76; // w2
  int32_t v77; // w3
  Il2CppObject *v78; // x23
  System_String_o *v79; // x0
  struct EventRankingRoundItemInfo_o *v80; // x8
  UILabel_o *supportInfoLabel; // x21
  int64_t supportPoint; // x22
  int32_t v83; // w2
  int32_t v84; // w3
  EventRankingListViewItemDraw_c *v85; // x0
  UISprite_o *goalSprite; // x21
  System_String_o *GOAL_IMAGE_NAME; // x22
  UISprite_o *rewardGetSprite; // x21
  int32_t v89; // w2
  int32_t v90; // w3
  EventRankingListViewItemDraw_c *v91; // x8
  System_Object_array *v92; // x22
  Il2CppObject *REWARD_GET_IMAGE_NAME; // x23
  struct EventRankingRoundItemInfo_o *v94; // x8
  int32_t v95; // w2
  int32_t v96; // w3
  Il2CppObject *v97; // x23
  int32_t v98; // w2
  int32_t v99; // w3
  int32_t v100; // w2
  int32_t v101; // w3
  Il2CppObject *v102; // x23
  System_String_o *v103; // x22
  int32_t v104; // w21
  struct GiftEntity_array *giftEntityList; // x1
  struct GiftEntity_array *v106; // x8
  int max_length; // w8
  struct EventRankingListViewObject_o *listViewObject; // x8
  UnityEngine_Object_o *manager; // x20
  struct EventRankingListViewObject_o *v110; // x9
  struct GiftEntity_array *v111; // x8
  __int64 methodPtr_low; // x10
  il2cpp_array_size_t v113; // w10
  int v114; // w9
  struct GiftEntity_array *v115; // x8
  int32_t *v116; // x8
  int32_t v117; // w3
  __int64 v118; // x0
  EventRankingListViewManager_o *v119; // x0
  int32_t v120; // w1
  const MethodInfo *v121; // x2
  int32_t groupId; // [xsp+0h] [xbp-80h] BYREF
  int32_t v123; // [xsp+4h] [xbp-7Ch] BYREF
  int32_t groupImageId; // [xsp+8h] [xbp-78h] BYREF
  int32_t v125; // [xsp+Ch] [xbp-74h] BYREF
  int32_t v126; // [xsp+10h] [xbp-70h] BYREF
  int32_t v127; // [xsp+14h] [xbp-6Ch] BYREF
  int32_t v128; // [xsp+18h] [xbp-68h] BYREF
  int32_t eventId; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4A00329 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, item);
    sub_1B640C8(&EventRankingListViewItemDraw_TypeInfo, v7);
    sub_1B640C8(&EventRankingListViewManager_TypeInfo, v8);
    sub_1B640C8(&EventRewardRootComponent_TypeInfo, v9);
    sub_1B640C8(&int_TypeInfo, v10);
    sub_1B640C8(&LocalizationManager_TypeInfo, v11);
    sub_1B640C8(&object___TypeInfo, v12);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v13);
    sub_1B640C8(&StringLiteral_16054/*"_"*/, v14);
    byte_4A00329 = 1;
  }
  if ( !item || !mode )
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
  if ( item->fields.ranking >= 4 )
    ranking = 4;
  else
    ranking = item->fields.ranking;
  rewardGetObj = sub_1B64170(object___TypeInfo, 4LL);
  v21 = (System_Object_array *)rewardGetObj;
  v22 = EventRankingListViewItemDraw_TypeInfo;
  if ( !EventRankingListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRankingListViewItemDraw_TypeInfo);
    v22 = EventRankingListViewItemDraw_TypeInfo;
  }
  if ( !v21 )
    goto LABEL_144;
  BOARD_IMAGE_NAME = (Il2CppObject *)v22->static_fields->BOARD_IMAGE_NAME;
  if ( BOARD_IMAGE_NAME )
  {
    rewardGetObj = sub_1B64204(BOARD_IMAGE_NAME, v21->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( !v21->max_length )
    goto LABEL_145;
  v21->m_Items[0] = BOARD_IMAGE_NAME;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v21->m_Items, (int32_t)BOARD_IMAGE_NAME, v19, v20);
  itemInfo = item->fields.itemInfo;
  if ( !itemInfo )
    goto LABEL_144;
  eventId = itemInfo->fields.eventId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &eventId);
  v27 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1B64204(rewardGetObj, v21->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( v21->max_length <= 1 )
    goto LABEL_145;
  v21->m_Items[1] = v27;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v21->m_Items[1], (int32_t)v27, v25, v26);
  rewardGetObj = StringLiteral_16054/*"_"*/;
  if ( StringLiteral_16054/*"_"*/ )
  {
    rewardGetObj = sub_1B64204(StringLiteral_16054/*"_"*/, v21->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
    v18 = (EventRankingListViewManager_c *)StringLiteral_16054/*"_"*/;
  }
  else
  {
    v18 = 0LL;
  }
  if ( v21->max_length <= 2 )
    goto LABEL_145;
  v21->m_Items[2] = (Il2CppObject *)v18;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v21->m_Items[2], (int32_t)v18, v28, v29);
  v128 = ranking;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v128);
  v32 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1B64204(rewardGetObj, v21->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( v21->max_length <= 3 )
    goto LABEL_145;
  v21->m_Items[3] = v32;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v21->m_Items[3], (int32_t)v32, v30, v31);
  v33 = System_String__Concat_61386848(v21, 0LL);
  if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
  EventRewardRootComponent__setRewardInfoImg(baseSprite, v33, 0LL);
  rankingSprite = this->fields.rankingSprite;
  rewardGetObj = sub_1B64170(object___TypeInfo, 4LL);
  if ( !rewardGetObj )
    goto LABEL_144;
  v37 = (System_Object_array *)rewardGetObj;
  RANKING_IMAGE_NAME = EventRankingListViewItemDraw_TypeInfo->static_fields->RANKING_IMAGE_NAME;
  if ( RANKING_IMAGE_NAME )
  {
    rewardGetObj = sub_1B64204(RANKING_IMAGE_NAME, *(_QWORD *)(*(_QWORD *)rewardGetObj + 64LL));
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( !v37->max_length )
    goto LABEL_145;
  v37->m_Items[0] = (Il2CppObject *)RANKING_IMAGE_NAME;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v37->m_Items, (int32_t)RANKING_IMAGE_NAME, v35, v36);
  v39 = item->fields.itemInfo;
  if ( !v39 )
    goto LABEL_144;
  v127 = v39->fields.eventId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v127);
  v42 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1B64204(rewardGetObj, v37->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( v37->max_length <= 1 )
    goto LABEL_145;
  v37->m_Items[1] = v42;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v37->m_Items[1], (int32_t)v42, v40, v41);
  rewardGetObj = StringLiteral_16054/*"_"*/;
  if ( StringLiteral_16054/*"_"*/ )
  {
    rewardGetObj = sub_1B64204(StringLiteral_16054/*"_"*/, v37->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
    v18 = (EventRankingListViewManager_c *)StringLiteral_16054/*"_"*/;
  }
  else
  {
    v18 = 0LL;
  }
  if ( v37->max_length <= 2 )
    goto LABEL_145;
  v37->m_Items[2] = (Il2CppObject *)v18;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v37->m_Items[2], (int32_t)v18, v43, v44);
  v126 = item->fields.ranking;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v126);
  v47 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1B64204(rewardGetObj, v37->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( v37->max_length <= 3 )
    goto LABEL_145;
  v37->m_Items[3] = v47;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v37->m_Items[3], (int32_t)v47, v45, v46);
  v48 = System_String__Concat_61386848(v37, 0LL);
  EventRewardRootComponent__setRewardInfoImg(rankingSprite, v48, 0LL);
  teamSprite = this->fields.teamSprite;
  rewardGetObj = sub_1B64170(object___TypeInfo, 4LL);
  if ( !rewardGetObj )
    goto LABEL_144;
  v52 = (System_Object_array *)rewardGetObj;
  GROUP_IMAGE_NAME = EventRankingListViewItemDraw_TypeInfo->static_fields->GROUP_IMAGE_NAME;
  if ( GROUP_IMAGE_NAME )
  {
    rewardGetObj = sub_1B64204(GROUP_IMAGE_NAME, *(_QWORD *)(*(_QWORD *)rewardGetObj + 64LL));
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( !v52->max_length )
    goto LABEL_145;
  v52->m_Items[0] = (Il2CppObject *)GROUP_IMAGE_NAME;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v52->m_Items, (int32_t)GROUP_IMAGE_NAME, v50, v51);
  v54 = item->fields.itemInfo;
  if ( !v54 )
    goto LABEL_144;
  v125 = v54->fields.eventId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v125);
  v57 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1B64204(rewardGetObj, v52->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( v52->max_length <= 1 )
    goto LABEL_145;
  v52->m_Items[1] = v57;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v52->m_Items[1], (int32_t)v57, v55, v56);
  rewardGetObj = StringLiteral_16054/*"_"*/;
  if ( StringLiteral_16054/*"_"*/ )
  {
    rewardGetObj = sub_1B64204(StringLiteral_16054/*"_"*/, v52->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
    v18 = (EventRankingListViewManager_c *)StringLiteral_16054/*"_"*/;
  }
  else
  {
    v18 = 0LL;
  }
  if ( v52->max_length <= 2 )
    goto LABEL_145;
  v52->m_Items[2] = (Il2CppObject *)v18;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v52->m_Items[2], (int32_t)v18, v58, v59);
  groupImageId = item->fields.groupImageId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &groupImageId);
  v62 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1B64204(rewardGetObj, v52->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( v52->max_length <= 3 )
    goto LABEL_145;
  v52->m_Items[3] = v62;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v52->m_Items[3], (int32_t)v62, v60, v61);
  v63 = System_String__Concat_61386848(v52, 0LL);
  EventRewardRootComponent__setRewardInfoImg(teamSprite, v63, 0LL);
  teamNameSprite = this->fields.teamNameSprite;
  rewardGetObj = sub_1B64170(object___TypeInfo, 4LL);
  if ( !rewardGetObj )
    goto LABEL_144;
  v67 = (System_Object_array *)rewardGetObj;
  GROUP_NAME_IMAGE_NAME = EventRankingListViewItemDraw_TypeInfo->static_fields->GROUP_NAME_IMAGE_NAME;
  if ( GROUP_NAME_IMAGE_NAME )
  {
    rewardGetObj = sub_1B64204(GROUP_NAME_IMAGE_NAME, *(_QWORD *)(*(_QWORD *)rewardGetObj + 64LL));
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( !v67->max_length )
    goto LABEL_145;
  v67->m_Items[0] = (Il2CppObject *)GROUP_NAME_IMAGE_NAME;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v67->m_Items, (int32_t)GROUP_NAME_IMAGE_NAME, v65, v66);
  v69 = item->fields.itemInfo;
  if ( !v69 )
    goto LABEL_144;
  v123 = v69->fields.eventId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v123);
  v72 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1B64204(rewardGetObj, v67->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( v67->max_length <= 1 )
    goto LABEL_145;
  v67->m_Items[1] = v72;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v67->m_Items[1], (int32_t)v72, v70, v71);
  rewardGetObj = StringLiteral_16054/*"_"*/;
  if ( StringLiteral_16054/*"_"*/ )
  {
    rewardGetObj = sub_1B64204(StringLiteral_16054/*"_"*/, v67->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
    v18 = (EventRankingListViewManager_c *)StringLiteral_16054/*"_"*/;
  }
  else
  {
    v18 = 0LL;
  }
  if ( v67->max_length <= 2 )
    goto LABEL_145;
  v67->m_Items[2] = (Il2CppObject *)v18;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v67->m_Items[2], (int32_t)v18, v73, v74);
  v75 = item->fields.itemInfo;
  if ( !v75 )
    goto LABEL_144;
  groupId = v75->fields.groupId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &groupId);
  v78 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1B64204(rewardGetObj, v67->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( v67->max_length <= 3 )
    goto LABEL_145;
  v67->m_Items[3] = v78;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v67->m_Items[3], (int32_t)v78, v76, v77);
  v79 = System_String__Concat_61386848(v67, 0LL);
  EventRewardRootComponent__setRewardInfoImg(teamNameSprite, v79, 0LL);
  rewardGetObj = EventRewardRootComponent__setRewardInfoImg(
                   this->fields.supportTxtSprite,
                   EventRankingListViewItemDraw_TypeInfo->static_fields->SUPPORT_TXT_IMAGE_NAME,
                   0LL);
  v80 = item->fields.itemInfo;
  if ( !v80 )
    goto LABEL_144;
  supportInfoLabel = this->fields.supportInfoLabel;
  supportPoint = v80->fields.supportPoint;
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
  if ( item->fields.isJoinTerm )
  {
    if ( item->fields.isPlayedGoal )
    {
      v85 = EventRankingListViewItemDraw_TypeInfo;
      goalSprite = this->fields.goalSprite;
      if ( !EventRankingListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRankingListViewItemDraw_TypeInfo);
        v85 = EventRankingListViewItemDraw_TypeInfo;
      }
      GOAL_IMAGE_NAME = v85->static_fields->GOAL_IMAGE_NAME;
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
    if ( item->fields.isGetReward )
    {
      rewardGetSprite = this->fields.rewardGetSprite;
      rewardGetObj = sub_1B64170(object___TypeInfo, 4LL);
      v91 = EventRankingListViewItemDraw_TypeInfo;
      v92 = (System_Object_array *)rewardGetObj;
      if ( !EventRankingListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRankingListViewItemDraw_TypeInfo);
        v91 = EventRankingListViewItemDraw_TypeInfo;
      }
      if ( !v92 )
        goto LABEL_144;
      REWARD_GET_IMAGE_NAME = (Il2CppObject *)v91->static_fields->REWARD_GET_IMAGE_NAME;
      if ( !REWARD_GET_IMAGE_NAME
        || (rewardGetObj = sub_1B64204(REWARD_GET_IMAGE_NAME, v92->obj.klass->_1.element_class)) != 0 )
      {
        if ( !v92->max_length )
          goto LABEL_145;
        v92->m_Items[0] = REWARD_GET_IMAGE_NAME;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)v92->m_Items, (int32_t)REWARD_GET_IMAGE_NAME, v89, v90);
        v94 = item->fields.itemInfo;
        if ( !v94 )
          goto LABEL_144;
        eventId = v94->fields.eventId;
        rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &eventId);
        v97 = (Il2CppObject *)rewardGetObj;
        if ( !rewardGetObj || (rewardGetObj = sub_1B64204(rewardGetObj, v92->obj.klass->_1.element_class)) != 0 )
        {
          if ( v92->max_length <= 1 )
            goto LABEL_145;
          v92->m_Items[1] = v97;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v92->m_Items[1], (int32_t)v97, v95, v96);
          rewardGetObj = StringLiteral_16054/*"_"*/;
          if ( StringLiteral_16054/*"_"*/ )
          {
            rewardGetObj = sub_1B64204(StringLiteral_16054/*"_"*/, v92->obj.klass->_1.element_class);
            if ( !rewardGetObj )
              goto LABEL_146;
            v18 = (EventRankingListViewManager_c *)StringLiteral_16054/*"_"*/;
          }
          else
          {
            v18 = 0LL;
          }
          if ( v92->max_length <= 2 )
            goto LABEL_145;
          v92->m_Items[2] = (Il2CppObject *)v18;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v92->m_Items[2], (int32_t)v18, v98, v99);
          v128 = ranking;
          rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v128);
          v102 = (Il2CppObject *)rewardGetObj;
          if ( !rewardGetObj || (rewardGetObj = sub_1B64204(rewardGetObj, v92->obj.klass->_1.element_class)) != 0 )
          {
            if ( v92->max_length <= 3 )
              goto LABEL_145;
            v92->m_Items[3] = v102;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v92->m_Items[3], (int32_t)v102, v100, v101);
            v103 = System_String__Concat_61386848(v92, 0LL);
            if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
            EventRewardRootComponent__setRewardInfoImg(rewardGetSprite, v103, 0LL);
            rewardGetObj = (__int64)this->fields.rewardGetSprite;
            if ( !rewardGetObj )
              goto LABEL_144;
            rewardGetObj = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rewardGetObj, 0LL);
            if ( !rewardGetObj )
              goto LABEL_144;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rewardGetObj, 1, 0LL);
            v104 = item->fields.ranking;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            rewardGetObj = (__int64)this->fields.rewardGetObj;
            if ( !rewardGetObj )
              goto LABEL_144;
            UnityEngine_GameObject__SetActive(
              (UnityEngine_GameObject_o *)rewardGetObj,
              v104 <= BalanceConfig_TypeInfo->static_fields->raceRewardRankMax,
              0LL);
            goto LABEL_122;
          }
        }
      }
LABEL_146:
      v118 = sub_1B64348(rewardGetObj);
      sub_1B641F0(v118, 0LL);
    }
  }
LABEL_122:
  giftEntityList = item->fields.giftEntityList;
  this->fields.giftEntityList = giftEntityList;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.giftEntityList, (int32_t)giftEntityList, v83, v84);
  v106 = item->fields.giftEntityList;
  if ( !v106 )
    goto LABEL_144;
  max_length = v106->max_length;
  this->fields.isMultipleReward = max_length > 1;
  if ( max_length < 2 )
  {
    v115 = this->fields.giftEntityList;
    if ( !v115 )
      goto LABEL_144;
    if ( v115->max_length )
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
    v110 = this->fields.listViewObject;
    if ( !v110 )
      goto LABEL_144;
    v111 = this->fields.giftEntityList;
    if ( !v111 )
      goto LABEL_144;
    rewardGetObj = (__int64)v110->fields.manager;
    if ( !rewardGetObj )
      goto LABEL_144;
    v18 = EventRankingListViewManager_TypeInfo;
    methodPtr_low = LOBYTE(EventRankingListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)rewardGetObj + 304LL) < (unsigned int)methodPtr_low
      || *(EventRankingListViewManager_c **)(*(_QWORD *)(*(_QWORD *)rewardGetObj + 200LL) + 8 * methodPtr_low - 8) != EventRankingListViewManager_TypeInfo )
    {
      sub_1B645E4(rewardGetObj);
      EventRankingListViewManager__GetAlphaAnimCnt(v119, v120, v121);
      return;
    }
    v113 = v111->max_length;
    v114 = *(_DWORD *)(rewardGetObj + 340) % (int)v113;
    if ( v114 < v113 )
    {
      v115 = (struct GiftEntity_array *)((char *)v111 + 8 * v114);
LABEL_137:
      v116 = (int32_t *)v115->m_Items[0];
      if ( v116 )
      {
        rewardGetObj = (__int64)this->fields.itemIcon;
        if ( rewardGetObj )
        {
          if ( v116[7] <= 1 )
            v117 = -1;
          else
            v117 = v116[7];
          ItemIconComponent__SetGift_37829292((ItemIconComponent_o *)rewardGetObj, v116[5], v116[6], v117, 0, 0LL);
          return;
        }
      }
LABEL_144:
      sub_1B64324(rewardGetObj);
    }
LABEL_145:
    sub_1B6432C(rewardGetObj, v18);
  }
}


void __fastcall EventRankingListViewItemDraw__SetListViewObject(
        EventRankingListViewItemDraw_o *this,
        EventRankingListViewObject_o *listViewObject,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.listViewObject = listViewObject;
  sub_1B6406C(
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
      sub_1B64324(0LL);
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
      sub_1B64324(this);
    EventRankingListViewItemDraw__SetRewardIconAlpha(this, manager->fields.alphaAnimNow, (const MethodInfo *)item);
  }
}