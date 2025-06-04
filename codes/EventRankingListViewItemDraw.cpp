void __fastcall EventRankingListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct EventRankingListViewItemDraw_StaticFields *static_fields; // x0
  struct EventRankingListViewItemDraw_StaticFields *v11; // x0
  struct EventRankingListViewItemDraw_StaticFields *v12; // x0
  struct EventRankingListViewItemDraw_StaticFields *v13; // x0
  struct EventRankingListViewItemDraw_StaticFields *v14; // x0
  struct EventRankingListViewItemDraw_StaticFields *v15; // x0
  struct EventRankingListViewItemDraw_StaticFields *v16; // x0

  if ( (byte_4AFC700 & 1) == 0 )
  {
    sub_1BC3008(&EventRankingListViewItemDraw_TypeInfo, v1);
    sub_1BC3008(&StringLiteral_19067/*"event_ranking_"*/, v2);
    sub_1BC3008(&StringLiteral_19025/*"event_goal_flag"*/, v3);
    sub_1BC3008(&StringLiteral_19071/*"event_ranking_rewardget_"*/, v4);
    sub_1BC3008(&StringLiteral_19070/*"event_ranking_reward_txt"*/, v5);
    sub_1BC3008(&StringLiteral_19069/*"event_ranking_group_name_"*/, v6);
    sub_1BC3008(&StringLiteral_19068/*"event_ranking_group_"*/, v7);
    sub_1BC3008(&StringLiteral_19104/*"event_support_txt"*/, v8);
    sub_1BC3008(&StringLiteral_19084/*"event_rewardranking_"*/, v9);
    byte_4AFC700 = 1;
  }
  EventRankingListViewItemDraw_TypeInfo->static_fields->GROUP_IMAGE_NAME = (struct System_String_o *)StringLiteral_19068/*"event_ranking_group_"*/;
  sub_1BC2FAC(EventRankingListViewItemDraw_TypeInfo->static_fields);
  static_fields = EventRankingListViewItemDraw_TypeInfo->static_fields;
  static_fields->GROUP_NAME_IMAGE_NAME = (struct System_String_o *)StringLiteral_19069/*"event_ranking_group_name_"*/;
  sub_1BC2FAC(&static_fields->GROUP_NAME_IMAGE_NAME);
  v11 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v11->BOARD_IMAGE_NAME = (struct System_String_o *)StringLiteral_19084/*"event_rewardranking_"*/;
  sub_1BC2FAC(&v11->BOARD_IMAGE_NAME);
  v12 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v12->REWARD_GET_IMAGE_NAME = (struct System_String_o *)StringLiteral_19071/*"event_ranking_rewardget_"*/;
  sub_1BC2FAC(&v12->REWARD_GET_IMAGE_NAME);
  v13 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v13->RANKING_IMAGE_NAME = (struct System_String_o *)StringLiteral_19067/*"event_ranking_"*/;
  sub_1BC2FAC(&v13->RANKING_IMAGE_NAME);
  v14 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v14->GOAL_IMAGE_NAME = (struct System_String_o *)StringLiteral_19025/*"event_goal_flag"*/;
  sub_1BC2FAC(&v14->GOAL_IMAGE_NAME);
  v15 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v15->HIGHER_REWARD_IMAGE_NAME = (struct System_String_o *)StringLiteral_19070/*"event_ranking_reward_txt"*/;
  sub_1BC2FAC(&v15->HIGHER_REWARD_IMAGE_NAME);
  v16 = EventRankingListViewItemDraw_TypeInfo->static_fields;
  v16->SUPPORT_TXT_IMAGE_NAME = (struct System_String_o *)StringLiteral_19104/*"event_support_txt"*/;
  sub_1BC2FAC(&v16->SUPPORT_TXT_IMAGE_NAME);
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
      sub_1BC326C(this, manager, method);
    v6 = (int32_t *)giftEntityList->m_Items[v5];
    if ( !v6 || (this = (EventRankingListViewItemDraw_o *)this->fields.itemIcon) == 0LL )
LABEL_12:
      sub_1BC3264(this, manager);
    if ( v6[7] <= 1 )
      v7 = -1;
    else
      v7 = v6[7];
    ItemIconComponent__SetGift_39952716((ItemIconComponent_o *)this, v6[5], v6[6], v7, 0, 0LL);
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
  __int64 v18; // x2
  __int64 v19; // x3
  System_Object_array *v20; // x22
  EventRankingListViewItemDraw_c *v21; // x8
  Il2CppObject *BOARD_IMAGE_NAME; // x23
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  struct EventRankingRoundItemInfo_o *itemInfo; // x8
  Il2CppObject *v27; // x23
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  Il2CppObject *v31; // x23
  System_String_o *v32; // x22
  UISprite_o *rankingSprite; // x21
  System_Object_array *v34; // x22
  struct System_String_o *RANKING_IMAGE_NAME; // x23
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  struct EventRankingRoundItemInfo_o *v39; // x8
  Il2CppObject *v40; // x23
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  Il2CppObject *v44; // x23
  System_String_o *v45; // x0
  UISprite_o *teamSprite; // x21
  System_Object_array *v47; // x22
  struct System_String_o *GROUP_IMAGE_NAME; // x23
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  struct EventRankingRoundItemInfo_o *v52; // x8
  Il2CppObject *v53; // x23
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  Il2CppObject *v57; // x23
  System_String_o *v58; // x0
  UISprite_o *teamNameSprite; // x21
  System_Object_array *v60; // x22
  struct System_String_o *GROUP_NAME_IMAGE_NAME; // x23
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  struct EventRankingRoundItemInfo_o *v65; // x8
  Il2CppObject *v66; // x23
  __int64 v67; // x2
  __int64 v68; // x3
  __int64 v69; // x4
  struct EventRankingRoundItemInfo_o *v70; // x8
  Il2CppObject *v71; // x23
  System_String_o *v72; // x0
  struct EventRankingRoundItemInfo_o *v73; // x8
  UILabel_o *supportInfoLabel; // x21
  int64_t supportPoint; // x22
  EventRankingListViewItemDraw_c *v76; // x0
  UISprite_o *goalSprite; // x21
  System_String_o *GOAL_IMAGE_NAME; // x22
  UISprite_o *rewardGetSprite; // x21
  EventRankingListViewItemDraw_c *v80; // x8
  System_Object_array *v81; // x22
  Il2CppObject *REWARD_GET_IMAGE_NAME; // x23
  __int64 v83; // x2
  __int64 v84; // x3
  __int64 v85; // x4
  struct EventRankingRoundItemInfo_o *v86; // x8
  Il2CppObject *v87; // x23
  __int64 v88; // x2
  __int64 v89; // x3
  __int64 v90; // x4
  Il2CppObject *v91; // x23
  System_String_o *v92; // x22
  int32_t v93; // w21
  struct GiftEntity_array *giftEntityList; // x8
  int max_length; // w8
  struct EventRankingListViewObject_o *listViewObject; // x8
  UnityEngine_Object_o *manager; // x20
  struct EventRankingListViewObject_o *v98; // x9
  struct GiftEntity_array *v99; // x8
  __int64 methodPtr_low; // x10
  il2cpp_array_size_t v101; // w10
  int v102; // w9
  struct GiftEntity_array *v103; // x8
  int32_t *v104; // x8
  int32_t v105; // w3
  __int64 v106; // x0
  EventRankingListViewManager_o *v107; // x0
  int32_t v108; // w1
  const MethodInfo *v109; // x2
  int32_t groupId; // [xsp+0h] [xbp-80h] BYREF
  int32_t v111; // [xsp+4h] [xbp-7Ch] BYREF
  int32_t groupImageId; // [xsp+8h] [xbp-78h] BYREF
  int32_t v113; // [xsp+Ch] [xbp-74h] BYREF
  int32_t v114; // [xsp+10h] [xbp-70h] BYREF
  int32_t v115; // [xsp+14h] [xbp-6Ch] BYREF
  int v116; // [xsp+18h] [xbp-68h] BYREF
  int32_t eventId; // [xsp+1Ch] [xbp-64h] BYREF

  v5 = item;
  if ( (byte_4AFC6FF & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, item);
    sub_1BC3008(&EventRankingListViewItemDraw_TypeInfo, v7);
    sub_1BC3008(&EventRankingListViewManager_TypeInfo, v8);
    sub_1BC3008(&EventRewardRootComponent_TypeInfo, v9);
    sub_1BC3008(&int_TypeInfo, v10);
    sub_1BC3008(&LocalizationManager_TypeInfo, v11);
    sub_1BC3008(&object___TypeInfo, v12);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v13);
    sub_1BC3008(&StringLiteral_15961/*"_"*/, v14);
    byte_4AFC6FF = 1;
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
  rewardGetObj = sub_1BC30B0(object___TypeInfo, 4LL);
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
    rewardGetObj = sub_1BC3144(BOARD_IMAGE_NAME, v20->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( !v20->max_length )
    goto LABEL_145;
  v20->m_Items[0] = BOARD_IMAGE_NAME;
  rewardGetObj = sub_1BC2FAC(v20->m_Items);
  itemInfo = v5->fields.itemInfo;
  if ( !itemInfo )
    goto LABEL_144;
  eventId = itemInfo->fields.eventId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &eventId, v23, v24, v25);
  v27 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1BC3144(rewardGetObj, v20->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( v20->max_length <= 1 )
    goto LABEL_145;
  v20->m_Items[1] = v27;
  sub_1BC2FAC(&v20->m_Items[1]);
  rewardGetObj = StringLiteral_15961/*"_"*/;
  if ( StringLiteral_15961/*"_"*/ )
  {
    rewardGetObj = sub_1BC3144(StringLiteral_15961/*"_"*/, v20->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
    item = (EventRankingListViewItem_o *)StringLiteral_15961/*"_"*/;
  }
  else
  {
    item = 0LL;
  }
  if ( v20->max_length <= 2 )
    goto LABEL_145;
  v20->m_Items[2] = (Il2CppObject *)item;
  sub_1BC2FAC(&v20->m_Items[2]);
  v116 = ranking;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v116, v28, v29, v30);
  v31 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1BC3144(rewardGetObj, v20->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( v20->max_length <= 3 )
    goto LABEL_145;
  v20->m_Items[3] = v31;
  sub_1BC2FAC(&v20->m_Items[3]);
  v32 = System_String__Concat_62387088(v20, 0LL);
  if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
  EventRewardRootComponent__setRewardInfoImg(baseSprite, v32, 0LL);
  rankingSprite = this->fields.rankingSprite;
  rewardGetObj = sub_1BC30B0(object___TypeInfo, 4LL);
  if ( !rewardGetObj )
    goto LABEL_144;
  v34 = (System_Object_array *)rewardGetObj;
  RANKING_IMAGE_NAME = EventRankingListViewItemDraw_TypeInfo->static_fields->RANKING_IMAGE_NAME;
  if ( RANKING_IMAGE_NAME )
  {
    rewardGetObj = sub_1BC3144(RANKING_IMAGE_NAME, *(_QWORD *)(*(_QWORD *)rewardGetObj + 64LL));
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( !v34->max_length )
    goto LABEL_145;
  v34->m_Items[0] = (Il2CppObject *)RANKING_IMAGE_NAME;
  rewardGetObj = sub_1BC2FAC(v34->m_Items);
  v39 = v5->fields.itemInfo;
  if ( !v39 )
    goto LABEL_144;
  v115 = v39->fields.eventId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v115, v36, v37, v38);
  v40 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1BC3144(rewardGetObj, v34->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( v34->max_length <= 1 )
    goto LABEL_145;
  v34->m_Items[1] = v40;
  sub_1BC2FAC(&v34->m_Items[1]);
  rewardGetObj = StringLiteral_15961/*"_"*/;
  if ( StringLiteral_15961/*"_"*/ )
  {
    rewardGetObj = sub_1BC3144(StringLiteral_15961/*"_"*/, v34->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
    item = (EventRankingListViewItem_o *)StringLiteral_15961/*"_"*/;
  }
  else
  {
    item = 0LL;
  }
  if ( v34->max_length <= 2 )
    goto LABEL_145;
  v34->m_Items[2] = (Il2CppObject *)item;
  sub_1BC2FAC(&v34->m_Items[2]);
  v114 = v5->fields.ranking;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v114, v41, v42, v43);
  v44 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1BC3144(rewardGetObj, v34->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( v34->max_length <= 3 )
    goto LABEL_145;
  v34->m_Items[3] = v44;
  sub_1BC2FAC(&v34->m_Items[3]);
  v45 = System_String__Concat_62387088(v34, 0LL);
  EventRewardRootComponent__setRewardInfoImg(rankingSprite, v45, 0LL);
  teamSprite = this->fields.teamSprite;
  rewardGetObj = sub_1BC30B0(object___TypeInfo, 4LL);
  if ( !rewardGetObj )
    goto LABEL_144;
  v47 = (System_Object_array *)rewardGetObj;
  GROUP_IMAGE_NAME = EventRankingListViewItemDraw_TypeInfo->static_fields->GROUP_IMAGE_NAME;
  if ( GROUP_IMAGE_NAME )
  {
    rewardGetObj = sub_1BC3144(GROUP_IMAGE_NAME, *(_QWORD *)(*(_QWORD *)rewardGetObj + 64LL));
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( !v47->max_length )
    goto LABEL_145;
  v47->m_Items[0] = (Il2CppObject *)GROUP_IMAGE_NAME;
  rewardGetObj = sub_1BC2FAC(v47->m_Items);
  v52 = v5->fields.itemInfo;
  if ( !v52 )
    goto LABEL_144;
  v113 = v52->fields.eventId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v113, v49, v50, v51);
  v53 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1BC3144(rewardGetObj, v47->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( v47->max_length <= 1 )
    goto LABEL_145;
  v47->m_Items[1] = v53;
  sub_1BC2FAC(&v47->m_Items[1]);
  rewardGetObj = StringLiteral_15961/*"_"*/;
  if ( StringLiteral_15961/*"_"*/ )
  {
    rewardGetObj = sub_1BC3144(StringLiteral_15961/*"_"*/, v47->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
    item = (EventRankingListViewItem_o *)StringLiteral_15961/*"_"*/;
  }
  else
  {
    item = 0LL;
  }
  if ( v47->max_length <= 2 )
    goto LABEL_145;
  v47->m_Items[2] = (Il2CppObject *)item;
  sub_1BC2FAC(&v47->m_Items[2]);
  groupImageId = v5->fields.groupImageId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &groupImageId, v54, v55, v56);
  v57 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1BC3144(rewardGetObj, v47->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( v47->max_length <= 3 )
    goto LABEL_145;
  v47->m_Items[3] = v57;
  sub_1BC2FAC(&v47->m_Items[3]);
  v58 = System_String__Concat_62387088(v47, 0LL);
  EventRewardRootComponent__setRewardInfoImg(teamSprite, v58, 0LL);
  teamNameSprite = this->fields.teamNameSprite;
  rewardGetObj = sub_1BC30B0(object___TypeInfo, 4LL);
  if ( !rewardGetObj )
    goto LABEL_144;
  v60 = (System_Object_array *)rewardGetObj;
  GROUP_NAME_IMAGE_NAME = EventRankingListViewItemDraw_TypeInfo->static_fields->GROUP_NAME_IMAGE_NAME;
  if ( GROUP_NAME_IMAGE_NAME )
  {
    rewardGetObj = sub_1BC3144(GROUP_NAME_IMAGE_NAME, *(_QWORD *)(*(_QWORD *)rewardGetObj + 64LL));
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( !v60->max_length )
    goto LABEL_145;
  v60->m_Items[0] = (Il2CppObject *)GROUP_NAME_IMAGE_NAME;
  rewardGetObj = sub_1BC2FAC(v60->m_Items);
  v65 = v5->fields.itemInfo;
  if ( !v65 )
    goto LABEL_144;
  v111 = v65->fields.eventId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v111, v62, v63, v64);
  v66 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1BC3144(rewardGetObj, v60->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( v60->max_length <= 1 )
    goto LABEL_145;
  v60->m_Items[1] = v66;
  sub_1BC2FAC(&v60->m_Items[1]);
  rewardGetObj = StringLiteral_15961/*"_"*/;
  if ( StringLiteral_15961/*"_"*/ )
  {
    rewardGetObj = sub_1BC3144(StringLiteral_15961/*"_"*/, v60->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
    item = (EventRankingListViewItem_o *)StringLiteral_15961/*"_"*/;
  }
  else
  {
    item = 0LL;
  }
  if ( v60->max_length <= 2 )
    goto LABEL_145;
  v60->m_Items[2] = (Il2CppObject *)item;
  rewardGetObj = sub_1BC2FAC(&v60->m_Items[2]);
  v70 = v5->fields.itemInfo;
  if ( !v70 )
    goto LABEL_144;
  groupId = v70->fields.groupId;
  rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &groupId, v67, v68, v69);
  v71 = (Il2CppObject *)rewardGetObj;
  if ( rewardGetObj )
  {
    rewardGetObj = sub_1BC3144(rewardGetObj, v60->obj.klass->_1.element_class);
    if ( !rewardGetObj )
      goto LABEL_146;
  }
  if ( v60->max_length <= 3 )
    goto LABEL_145;
  v60->m_Items[3] = v71;
  sub_1BC2FAC(&v60->m_Items[3]);
  v72 = System_String__Concat_62387088(v60, 0LL);
  EventRewardRootComponent__setRewardInfoImg(teamNameSprite, v72, 0LL);
  rewardGetObj = EventRewardRootComponent__setRewardInfoImg(
                   this->fields.supportTxtSprite,
                   EventRankingListViewItemDraw_TypeInfo->static_fields->SUPPORT_TXT_IMAGE_NAME,
                   0LL);
  v73 = v5->fields.itemInfo;
  if ( !v73 )
    goto LABEL_144;
  supportInfoLabel = this->fields.supportInfoLabel;
  supportPoint = v73->fields.supportPoint;
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
      v76 = EventRankingListViewItemDraw_TypeInfo;
      goalSprite = this->fields.goalSprite;
      if ( !EventRankingListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRankingListViewItemDraw_TypeInfo);
        v76 = EventRankingListViewItemDraw_TypeInfo;
      }
      GOAL_IMAGE_NAME = v76->static_fields->GOAL_IMAGE_NAME;
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
      rewardGetObj = sub_1BC30B0(object___TypeInfo, 4LL);
      v80 = EventRankingListViewItemDraw_TypeInfo;
      v81 = (System_Object_array *)rewardGetObj;
      if ( !EventRankingListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRankingListViewItemDraw_TypeInfo);
        v80 = EventRankingListViewItemDraw_TypeInfo;
      }
      if ( !v81 )
        goto LABEL_144;
      REWARD_GET_IMAGE_NAME = (Il2CppObject *)v80->static_fields->REWARD_GET_IMAGE_NAME;
      if ( !REWARD_GET_IMAGE_NAME
        || (rewardGetObj = sub_1BC3144(REWARD_GET_IMAGE_NAME, v81->obj.klass->_1.element_class)) != 0 )
      {
        if ( !v81->max_length )
          goto LABEL_145;
        v81->m_Items[0] = REWARD_GET_IMAGE_NAME;
        rewardGetObj = sub_1BC2FAC(v81->m_Items);
        v86 = v5->fields.itemInfo;
        if ( !v86 )
          goto LABEL_144;
        eventId = v86->fields.eventId;
        rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &eventId, v83, v84, v85);
        v87 = (Il2CppObject *)rewardGetObj;
        if ( !rewardGetObj || (rewardGetObj = sub_1BC3144(rewardGetObj, v81->obj.klass->_1.element_class)) != 0 )
        {
          if ( v81->max_length <= 1 )
            goto LABEL_145;
          v81->m_Items[1] = v87;
          sub_1BC2FAC(&v81->m_Items[1]);
          rewardGetObj = StringLiteral_15961/*"_"*/;
          if ( StringLiteral_15961/*"_"*/ )
          {
            rewardGetObj = sub_1BC3144(StringLiteral_15961/*"_"*/, v81->obj.klass->_1.element_class);
            if ( !rewardGetObj )
              goto LABEL_146;
            item = (EventRankingListViewItem_o *)StringLiteral_15961/*"_"*/;
          }
          else
          {
            item = 0LL;
          }
          if ( v81->max_length <= 2 )
            goto LABEL_145;
          v81->m_Items[2] = (Il2CppObject *)item;
          sub_1BC2FAC(&v81->m_Items[2]);
          v116 = ranking;
          rewardGetObj = j_il2cpp_value_box_0(int_TypeInfo, &v116, v88, v89, v90);
          v91 = (Il2CppObject *)rewardGetObj;
          if ( !rewardGetObj || (rewardGetObj = sub_1BC3144(rewardGetObj, v81->obj.klass->_1.element_class)) != 0 )
          {
            if ( v81->max_length <= 3 )
              goto LABEL_145;
            v81->m_Items[3] = v91;
            sub_1BC2FAC(&v81->m_Items[3]);
            v92 = System_String__Concat_62387088(v81, 0LL);
            if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
            EventRewardRootComponent__setRewardInfoImg(rewardGetSprite, v92, 0LL);
            rewardGetObj = (__int64)this->fields.rewardGetSprite;
            if ( !rewardGetObj )
              goto LABEL_144;
            rewardGetObj = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rewardGetObj, 0LL);
            if ( !rewardGetObj )
              goto LABEL_144;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rewardGetObj, 1, 0LL);
            v93 = v5->fields.ranking;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            rewardGetObj = (__int64)this->fields.rewardGetObj;
            if ( !rewardGetObj )
              goto LABEL_144;
            UnityEngine_GameObject__SetActive(
              (UnityEngine_GameObject_o *)rewardGetObj,
              v93 <= BalanceConfig_TypeInfo->static_fields->raceRewardRankMax,
              0LL);
            goto LABEL_122;
          }
        }
      }
LABEL_146:
      v106 = sub_1BC3288();
      sub_1BC3130(v106, 0LL);
    }
  }
LABEL_122:
  this->fields.giftEntityList = v5->fields.giftEntityList;
  rewardGetObj = sub_1BC2FAC(&this->fields.giftEntityList);
  giftEntityList = v5->fields.giftEntityList;
  if ( !giftEntityList )
    goto LABEL_144;
  max_length = giftEntityList->max_length;
  this->fields.isMultipleReward = max_length > 1;
  if ( max_length < 2 )
  {
    v103 = this->fields.giftEntityList;
    if ( !v103 )
      goto LABEL_144;
    if ( v103->max_length )
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
    v98 = this->fields.listViewObject;
    if ( !v98 )
      goto LABEL_144;
    v99 = this->fields.giftEntityList;
    if ( !v99 )
      goto LABEL_144;
    rewardGetObj = (__int64)v98->fields.manager;
    if ( !rewardGetObj )
      goto LABEL_144;
    item = (EventRankingListViewItem_o *)EventRankingListViewManager_TypeInfo;
    methodPtr_low = LOBYTE(EventRankingListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)rewardGetObj + 304LL) < (unsigned int)methodPtr_low
      || *(EventRankingListViewManager_c **)(*(_QWORD *)(*(_QWORD *)rewardGetObj + 200LL) + 8 * methodPtr_low - 8) != EventRankingListViewManager_TypeInfo )
    {
      v107 = (EventRankingListViewManager_o *)sub_1BC3524(rewardGetObj);
      EventRankingListViewManager__GetAlphaAnimCnt(v107, v108, v109);
      return;
    }
    v101 = v99->max_length;
    v102 = *(_DWORD *)(rewardGetObj + 340) % (int)v101;
    if ( v102 < v101 )
    {
      v103 = (struct GiftEntity_array *)((char *)v99 + 8 * v102);
LABEL_137:
      v104 = (int32_t *)v103->m_Items[0];
      if ( v104 )
      {
        rewardGetObj = (__int64)this->fields.itemIcon;
        if ( rewardGetObj )
        {
          if ( v104[7] <= 1 )
            v105 = -1;
          else
            v105 = v104[7];
          ItemIconComponent__SetGift_39952716((ItemIconComponent_o *)rewardGetObj, v104[5], v104[6], v105, 0, 0LL);
          return;
        }
      }
LABEL_144:
      sub_1BC3264(rewardGetObj, item);
    }
LABEL_145:
    sub_1BC326C(rewardGetObj, item, v18, v19);
  }
}


void __fastcall EventRankingListViewItemDraw__SetListViewObject(
        EventRankingListViewItemDraw_o *this,
        EventRankingListViewObject_o *listViewObject,
        const MethodInfo *method)
{
  this->fields.listViewObject = listViewObject;
  sub_1BC2FAC(&this->fields.listViewObject);
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
      sub_1BC3264(0LL, method);
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
      sub_1BC3264(this, item);
    EventRankingListViewItemDraw__SetRewardIconAlpha(this, manager->fields.alphaAnimNow, (const MethodInfo *)item);
  }
}