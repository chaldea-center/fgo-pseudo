void RecommendSupportQuestBoardListViewItemDraw___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  struct RecommendSupportQuestBoardListViewItemDraw_StaticFields *static_fields; // x0
  int32_t v4; // w1
  int32_t v5; // w1
  struct RecommendSupportQuestBoardListViewItemDraw_StaticFields *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w1
  struct RecommendSupportQuestBoardListViewItemDraw_StaticFields *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w1
  struct RecommendSupportQuestBoardListViewItemDraw_StaticFields *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  struct RecommendSupportQuestBoardListViewItemDraw_StaticFields *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w1
  struct RecommendSupportQuestBoardListViewItemDraw_StaticFields *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w1
  struct RecommendSupportQuestBoardListViewItemDraw_StaticFields *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct RecommendSupportQuestBoardListViewItemDraw_StaticFields *v29; // x0
  int32_t v30; // w1
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int32_t v33; // w1
  struct RecommendSupportQuestBoardListViewItemDraw_StaticFields *v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  int32_t v37; // w1
  struct RecommendSupportQuestBoardListViewItemDraw_StaticFields *v38; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  __int64 v41; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  __int64 v44; // x19
  int32_t v45; // w1
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  int32_t v48; // w1
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  int32_t v51; // w1
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  int32_t v54; // w1
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  int32_t v57; // w1
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  int32_t v60; // w1
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  int32_t v63; // w1
  struct RecommendSupportQuestBoardListViewItemDraw_StaticFields *v64; // x0
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  int32_t v67; // w1
  struct RecommendSupportQuestBoardListViewItemDraw_StaticFields *v68; // x0
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  int32_t v71; // w1
  struct RecommendSupportQuestBoardListViewItemDraw_StaticFields *v72; // x0
  int32_t v73; // w2
  const MethodInfo *v74; // x3

  if ( (byte_4C338C8 & 1) == 0 )
  {
    sub_1C32C20(&RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
    sub_1C32C20(&string___TypeInfo);
    sub_1C32C20(&StringLiteral_22868/*"quest_board_icon_"*/);
    sub_1C32C20(&StringLiteral_22889/*"questboard_icon_cap{0:D2}"*/);
    sub_1C32C20(&StringLiteral_20526/*"img_questboard_story03mask"*/);
    sub_1C32C20(&StringLiteral_17797/*"chaldea_category_{0}"*/);
    sub_1C32C20(&StringLiteral_20518/*"img_questboard_main_"*/);
    sub_1C32C20(&StringLiteral_19310/*"event_war_"*/);
    sub_1C32C20(&StringLiteral_20528/*"img_questboard_story05mask"*/);
    sub_1C32C20(&StringLiteral_20516/*"img_questboard_hero03"*/);
    sub_1C32C20(&StringLiteral_22867/*"quest_board_"*/);
    sub_1C32C20(&StringLiteral_20513/*"img_questboard_free_"*/);
    sub_1C32C20(&StringLiteral_22869/*"quest_board_mask_"*/);
    sub_1C32C20(&StringLiteral_6275/*"EventUI/QuestBoardIcon/"*/);
    sub_1C32C20(&StringLiteral_20527/*"img_questboard_story04mask"*/);
    sub_1C32C20(&StringLiteral_20525/*"img_questboard_story03"*/);
    sub_1C32C20(&StringLiteral_20503/*"img_quest_unit_{0:D2}"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C338C8 = 1;
  }
  static_fields = RecommendSupportQuestBoardListViewItemDraw_TypeInfo->static_fields;
  static_fields->TITLE_LABEL_BASE_WIDTH = 256;
  v4 = StringLiteral_19310/*"event_war_"*/;
  static_fields->EVENT_WAR_SPNAME_PREFIX = (struct System_String_o *)StringLiteral_19310/*"event_war_"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->EVENT_WAR_SPNAME_PREFIX, v4, v1, v2);
  v5 = StringLiteral_17797/*"chaldea_category_{0}"*/;
  v6 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo->static_fields;
  v6->EVENT_WAR_SUBFOLDER_SPNAME_PREFIX = (struct System_String_o *)StringLiteral_17797/*"chaldea_category_{0}"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v6->EVENT_WAR_SUBFOLDER_SPNAME_PREFIX, v5, v7, v8);
  v9 = StringLiteral_22867/*"quest_board_"*/;
  v10 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo->static_fields;
  v10->QUEST_BOARD_SPNAME_PREFIX = (struct System_String_o *)StringLiteral_22867/*"quest_board_"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v10->QUEST_BOARD_SPNAME_PREFIX, v9, v11, v12);
  v13 = StringLiteral_22868/*"quest_board_icon_"*/;
  v14 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo->static_fields;
  v14->QUEST_BOARD_ICON_SPNAME_PREFIX = (struct System_String_o *)StringLiteral_22868/*"quest_board_icon_"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v14->QUEST_BOARD_ICON_SPNAME_PREFIX, v13, v15, v16);
  v17 = StringLiteral_22869/*"quest_board_mask_"*/;
  v18 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo->static_fields;
  v18->QUEST_BOARD_MASK_SPNAME_PREFIX = (struct System_String_o *)StringLiteral_22869/*"quest_board_mask_"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v18->QUEST_BOARD_MASK_SPNAME_PREFIX, v17, v19, v20);
  v21 = StringLiteral_6275/*"EventUI/QuestBoardIcon/"*/;
  v22 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo->static_fields;
  v22->QUEST_BOARD_ICON_TEXTURE_PATH = (struct System_String_o *)StringLiteral_6275/*"EventUI/QuestBoardIcon/"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v22->QUEST_BOARD_ICON_TEXTURE_PATH, v21, v23, v24);
  v25 = StringLiteral_22868/*"quest_board_icon_"*/;
  v26 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo->static_fields;
  v26->QUEST_BOARD_ICON_TEXTURE_PREFIX = (struct System_String_o *)StringLiteral_22868/*"quest_board_icon_"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v26->QUEST_BOARD_ICON_TEXTURE_PREFIX, v25, v27, v28);
  v29 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo->static_fields;
  v29->QUEST_FACE_MASK_SP_W = 124;
  v30 = StringLiteral_20526/*"img_questboard_story03mask"*/;
  v29->QUEST_STORY_FACE_MASK_SPNAME = (struct System_String_o *)StringLiteral_20526/*"img_questboard_story03mask"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v29->QUEST_STORY_FACE_MASK_SPNAME, v30, v31, v32);
  v33 = StringLiteral_20527/*"img_questboard_story04mask"*/;
  v34 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo->static_fields;
  v34->QUEST_MAIN_FACE_MASK_SPNAME = (struct System_String_o *)StringLiteral_20527/*"img_questboard_story04mask"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v34->QUEST_MAIN_FACE_MASK_SPNAME, v33, v35, v36);
  v37 = StringLiteral_20528/*"img_questboard_story05mask"*/;
  v38 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo->static_fields;
  v38->QUEST_EVENT_FACE_MASK_SPNAME = (struct System_String_o *)StringLiteral_20528/*"img_questboard_story05mask"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v38->QUEST_EVENT_FACE_MASK_SPNAME, v37, v39, v40);
  v41 = sub_1C32CC8(string___TypeInfo, 7);
  if ( !v41 )
    sub_1C32E7C(0);
  v44 = v41;
  if ( !*(_DWORD *)(v41 + 24) )
    goto LABEL_12;
  v45 = StringLiteral_1/*""*/;
  *(_QWORD *)(v41 + 32) = StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(v41 + 32), v45, v42, v43);
  if ( *(_DWORD *)(v44 + 24) <= 1u )
    goto LABEL_12;
  v48 = StringLiteral_20518/*"img_questboard_main_"*/;
  *(_QWORD *)(v44 + 40) = StringLiteral_20518/*"img_questboard_main_"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(v44 + 40), v48, v46, v47);
  if ( *(_DWORD *)(v44 + 24) <= 2u )
    goto LABEL_12;
  v51 = StringLiteral_20513/*"img_questboard_free_"*/;
  *(_QWORD *)(v44 + 48) = StringLiteral_20513/*"img_questboard_free_"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(v44 + 48), v51, v49, v50);
  if ( *(_DWORD *)(v44 + 24) <= 3u )
    goto LABEL_12;
  v54 = StringLiteral_20525/*"img_questboard_story03"*/;
  *(_QWORD *)(v44 + 56) = StringLiteral_20525/*"img_questboard_story03"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(v44 + 56), v54, v52, v53);
  if ( *(_DWORD *)(v44 + 24) <= 4u
    || (v57 = StringLiteral_1/*""*/,
        *(_QWORD *)(v44 + 64) = StringLiteral_1/*""*/,
        sub_1C32BC4((CGThumbnailListItem_o *)(v44 + 64), v57, v55, v56),
        *(_DWORD *)(v44 + 24) <= 5u)
    || (v60 = StringLiteral_20513/*"img_questboard_free_"*/,
        *(_QWORD *)(v44 + 72) = StringLiteral_20513/*"img_questboard_free_"*/,
        sub_1C32BC4((CGThumbnailListItem_o *)(v44 + 72), v60, v58, v59),
        *(_DWORD *)(v44 + 24) <= 6u) )
  {
LABEL_12:
    sub_1C32E84(v41);
  }
  v63 = StringLiteral_20516/*"img_questboard_hero03"*/;
  *(_QWORD *)(v44 + 80) = StringLiteral_20516/*"img_questboard_hero03"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(v44 + 80), v63, v61, v62);
  v64 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo->static_fields;
  v64->msQBoardL3Names = (struct System_String_array *)v44;
  sub_1C32BC4((CGThumbnailListItem_o *)&v64->msQBoardL3Names, v44, v65, v66);
  v67 = StringLiteral_22889/*"questboard_icon_cap{0:D2}"*/;
  v68 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo->static_fields;
  v68->CHAPTER_SP_BASE_NAME = (struct System_String_o *)StringLiteral_22889/*"questboard_icon_cap{0:D2}"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v68->CHAPTER_SP_BASE_NAME, v67, v69, v70);
  v71 = StringLiteral_20503/*"img_quest_unit_{0:D2}"*/;
  v72 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo->static_fields;
  v72->CHAPTER_SP_UNIT_NAME = (struct System_String_o *)StringLiteral_20503/*"img_quest_unit_{0:D2}"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v72->CHAPTER_SP_UNIT_NAME, v71, v73, v74);
}


void RecommendSupportQuestBoardListViewItemDraw___ctor(
        RecommendSupportQuestBoardListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  int v6; // w8

  if ( (byte_4C338C7 & 1) == 0 )
  {
    sub_1C32C20(&int___TypeInfo);
    byte_4C338C7 = 1;
  }
  *(_QWORD *)&this->fields.DEFAULT_SETTING_AREA_SP_POS_Y = 0x1E00000022LL;
  v3 = sub_1C32CC8(int___TypeInfo, 2);
  if ( !v3 )
    sub_1C32E7C(0);
  v6 = *(_DWORD *)(v3 + 24);
  if ( !v6 || (*(_DWORD *)(v3 + 32) = 11000, v6 == 1) )
    sub_1C32E84(v3);
  *(_DWORD *)(v3 + 36) = 12000;
  this->fields.parentFolderWarId = (struct System_Int32_array *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.parentFolderWarId, v3, v4, v5);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


System_String_o *RecommendSupportQuestBoardListViewItemDraw__ConvertToChineseAscii(
        RecommendSupportQuestBoardListViewItemDraw_o *this,
        int32_t n,
        bool isUppercase,
        const MethodInfo *method)
{
  __int16 v6; // w23
  unsigned int v7; // w21
  __int16 v8; // w22
  System_Text_StringBuilder_o *v9; // x19
  __int64 v10; // x0
  unsigned int v12; // w8
  unsigned int v13; // w8

  if ( (byte_4C338C2 & 1) == 0 )
  {
    sub_1C32C20(&System_Text_StringBuilder_TypeInfo);
    sub_1C32C20(&StringLiteral_1122/*"0"*/);
    byte_4C338C2 = 1;
  }
  if ( n <= 0 )
    return (System_String_o *)StringLiteral_1122/*"0"*/;
  if ( isUppercase )
    v6 = 32;
  else
    v6 = 0;
  v7 = n % 0xAu;
  v8 = 96 - v6;
  v9 = (System_Text_StringBuilder_o *)sub_1C32E6C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_63596960(v9, 5, 0);
  if ( n >= 10 )
  {
    if ( n >= 100 )
    {
      v13 = n / 0x64u % 0xA;
      if ( v13 >= 2 )
      {
        if ( !v9 )
          goto LABEL_25;
        System_Text_StringBuilder__Append_63605936(v9, v8 | v13, 0);
      }
      else if ( !v9 )
      {
LABEL_25:
        sub_1C32E7C(v10);
      }
      System_Text_StringBuilder__Append_63605936(v9, 107 - v6, 0);
      v12 = n / 0xAu % 0xA;
    }
    else
    {
      if ( !v9 )
        goto LABEL_25;
      v12 = (unsigned __int8)n / 0xAu % 0xA;
    }
    if ( v12 >= 2 )
      System_Text_StringBuilder__Append_63605936(v9, v8 | v12, 0);
    System_Text_StringBuilder__Append_63605936(v9, 106 - v6, 0);
    if ( !v7 )
      return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v9->klass->vtable._3_ToString.methodPtr)(
                                  v9,
                                  v9->klass->vtable._3_ToString.method);
  }
  else if ( !v9 )
  {
    goto LABEL_25;
  }
  System_Text_StringBuilder__Append_63605936(v9, v8 | v7, 0);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v9->klass->vtable._3_ToString.methodPtr)(
                              v9,
                              v9->klass->vtable._3_ToString.method);
}


void RecommendSupportQuestBoardListViewItemDraw__DispSettingQuestInfo(
        RecommendSupportQuestBoardListViewItemDraw_o *this,
        bool isSetting,
        int32_t index,
        System_String_o *svtName,
        const MethodInfo *method)
{
  UnityEngine_Object_o *settingQuestLb; // x23
  UnityEngine_Component_o *gameObject; // x0
  UILabel_o *v11; // x23
  System_String_o *v12; // x24
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  __int64 v16; // x5
  __int64 v17; // x6
  __int64 v18; // x7
  Il2CppObject *v19; // x0
  UnityEngine_Object_o *settingServantLb; // x23
  UILabel_o *v21; // x23
  bool IsNullOrEmpty; // w24
  System_String_o *v23; // x0
  UnityEngine_Object_o *settingBackSp; // x22
  UISprite_o *v25; // x21
  UnityEngine_Object_o *removeSp; // x21
  UnityEngine_GameObject_o *v27; // x20
  int v28; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C338C6 & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1C32C20(&StringLiteral_11054/*"RECOMMEND_SUPPORT_QUEST_SELECT_SETTING_SERVANT"*/);
    sub_1C32C20(&StringLiteral_11053/*"RECOMMEND_SUPPORT_QUEST_SELECT_SETTING_INFO"*/);
    sub_1C32C20(&StringLiteral_11050/*"RECOMMEND_SUPPORT_QUEST_SELECT_NO_SETTING_SERVANT"*/);
    sub_1C32C20(&StringLiteral_17690/*"caldeagate_notice"*/);
    byte_4C338C6 = 1;
  }
  settingQuestLb = (UnityEngine_Object_o *)this->fields.settingQuestLb;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(settingQuestLb, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.settingQuestLb;
    if ( !gameObject )
      goto LABEL_40;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_40;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isSetting, 0);
    v11 = this->fields.settingQuestLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_11053/*"RECOMMEND_SUPPORT_QUEST_SELECT_SETTING_INFO"*/, 0);
    v28 = index + 1;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, v13, v14, v15, v16, v17, v18);
    gameObject = (UnityEngine_Component_o *)System_String__Format(v12, v19, 0);
    if ( !v11 )
      goto LABEL_40;
    UILabel__set_text(v11, (System_String_o *)gameObject, 0);
  }
  settingServantLb = (UnityEngine_Object_o *)this->fields.settingServantLb;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(settingServantLb, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.settingServantLb;
    if ( !gameObject )
      goto LABEL_40;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_40;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isSetting, 0);
    v21 = this->fields.settingServantLb;
    IsNullOrEmpty = System_String__IsNullOrEmpty(svtName, 0);
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( IsNullOrEmpty )
      {
LABEL_19:
        gameObject = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11050/*"RECOMMEND_SUPPORT_QUEST_SELECT_NO_SETTING_SERVANT"*/, 0);
LABEL_22:
        if ( !v21 )
          goto LABEL_40;
        UILabel__set_text(v21, (System_String_o *)gameObject, 0);
        goto LABEL_24;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( IsNullOrEmpty )
        goto LABEL_19;
    }
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_11054/*"RECOMMEND_SUPPORT_QUEST_SELECT_SETTING_SERVANT"*/, 0);
    gameObject = (UnityEngine_Component_o *)System_String__Format(v23, (Il2CppObject *)svtName, 0);
    goto LABEL_22;
  }
LABEL_24:
  settingBackSp = (UnityEngine_Object_o *)this->fields.settingBackSp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(settingBackSp, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.settingBackSp;
    if ( !gameObject )
      goto LABEL_40;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_40;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isSetting, 0);
    v25 = this->fields.settingBackSp;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetPartyOrganizationImage(v25, (System_String_o *)StringLiteral_17690/*"caldeagate_notice"*/, 0);
  }
  removeSp = (UnityEngine_Object_o *)this->fields.removeSp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(removeSp, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.removeSp;
    if ( gameObject )
    {
      v27 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)gameObject, 0);
      gameObject = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
      if ( gameObject )
      {
        if ( v27 )
        {
          UnityEngine_GameObject__SetActive(v27, LODWORD(gameObject[5].klass) == index, 0);
          return;
        }
      }
    }
LABEL_40:
    sub_1C32E7C(gameObject);
  }
}


System_String_o *RecommendSupportQuestBoardListViewItemDraw__GetDispQuestName(
        RecommendSupportQuestBoardListViewItemDraw_o *this,
        QuestEntity_o *questEnt,
        int32_t questType,
        const MethodInfo *method)
{
  RecommendSupportQuestBoardListViewItemDraw_o *v6; // x20
  Il2CppObject *Master_object; // x21
  Il2CppObject *BattleName; // x1

  if ( (byte_4C338BC & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    this = (RecommendSupportQuestBoardListViewItemDraw_o *)sub_1C32C20(&StringLiteral_25096/*"{0}"*/);
    byte_4C338BC = 1;
  }
  if ( !questEnt )
    goto LABEL_14;
  this = (RecommendSupportQuestBoardListViewItemDraw_o *)QuestEntity__getQuestName(questEnt, 0);
  v6 = this;
  if ( (unsigned int)questType <= 5 && ((1 << questType) & 0x2C) != 0 )
  {
    if ( !this )
      goto LABEL_14;
    if ( System_String__Contains((System_String_o *)this, (System_String_o *)StringLiteral_25096/*"{0}"*/, 0) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantMaster___);
      this = (RecommendSupportQuestBoardListViewItemDraw_o *)QuestEntity__getServantId(questEnt, 0);
      if ( Master_object )
      {
        this = (RecommendSupportQuestBoardListViewItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                                 (int32_t)this,
                                                                 (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( this )
        {
          BattleName = (Il2CppObject *)ServantEntity__getBattleName((ServantEntity_o *)this, 0, -1, 0);
          return System_String__Format((System_String_o *)v6, BattleName, 0);
        }
      }
LABEL_14:
      sub_1C32E7C(this);
    }
  }
  return (System_String_o *)v6;
}


System_String_o *RecommendSupportQuestBoardListViewItemDraw__GetEventAddBannerSpriteName(
        RecommendSupportQuestBoardListViewItemDraw_o *this,
        EventEntity_o *eventEnt,
        int32_t warId,
        bool isActiveEventWar,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  int32_t v9; // w2
  __int64 v10; // x21
  EventAddEntity_o *OverwriteEventAddEntity; // x0
  WarEntity_o *Entity; // x0
  int32_t PrioredBannerId; // w0
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  __int64 v17; // x5
  __int64 v18; // x6
  __int64 v19; // x7
  RecommendSupportQuestBoardListViewItemDraw_c *v20; // x8
  int32_t v21; // w19
  System_String_o *EVENT_WAR_SUBFOLDER_SPNAME_PREFIX; // x20
  Il2CppObject *v23; // x0
  RecommendSupportQuestBoardListViewItemDraw_c *v25; // x0
  System_String_o *EVENT_WAR_SPNAME_PREFIX; // x19
  System_String_o *v27; // x0
  int32_t v28; // [xsp+8h] [xbp-38h] BYREF
  int32_t overwriteId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C338C0 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_EventAddMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
    byte_4C338C0 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventAddMaster___);
  if ( !eventEnt || !Master_object )
    goto LABEL_32;
  if ( isActiveEventWar )
    v9 = 4;
  else
    v9 = 5;
  if ( isActiveEventWar )
    v10 = 60;
  else
    v10 = 56;
  OverwriteEventAddEntity = EventAddMaster__getOverwriteEventAddEntity(
                              (EventAddMaster_o *)Master_object,
                              eventEnt->fields.id,
                              v9,
                              0);
  overwriteId = *(_DWORD *)((char *)&eventEnt->klass + v10);
  if ( OverwriteEventAddEntity )
    overwriteId = OverwriteEventAddEntity->fields.overwriteId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_WarMaster___);
  if ( !Master_object )
    goto LABEL_32;
  Entity = (WarEntity_o *)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                            warId,
                            (const MethodInfo_3396838 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( Entity
    && Entity->fields.parentWarId
    && Entity->fields.eventId == eventEnt->fields.id
    && WarEntity__HasFlag(Entity, 0x80000, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_WarMaster___);
    if ( Master_object )
    {
      Master_object = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                        warId,
                        (const MethodInfo_3396838 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
      if ( Master_object )
      {
        PrioredBannerId = WarEntity__GetPrioredBannerId((WarEntity_o *)Master_object, 0);
        v20 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
        overwriteId = PrioredBannerId;
        v21 = PrioredBannerId;
        if ( !RecommendSupportQuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
          v20 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
        }
        EVENT_WAR_SUBFOLDER_SPNAME_PREFIX = v20->static_fields->EVENT_WAR_SUBFOLDER_SPNAME_PREFIX;
        v28 = v21;
        v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, v14, v15, v16, v17, v18, v19);
        return System_String__Format(EVENT_WAR_SUBFOLDER_SPNAME_PREFIX, v23, 0);
      }
    }
LABEL_32:
    sub_1C32E7C(Master_object);
  }
  v25 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
  if ( !RecommendSupportQuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
    v25 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
  }
  EVENT_WAR_SPNAME_PREFIX = v25->static_fields->EVENT_WAR_SPNAME_PREFIX;
  v27 = System_Int32__ToString((int32_t)&overwriteId, 0);
  return System_String__Concat_63518544(EVENT_WAR_SPNAME_PREFIX, v27, 0);
}


System_String_o *RecommendSupportQuestBoardListViewItemDraw__GetFaceMaskSpriteName(
        RecommendSupportQuestBoardListViewItemDraw_o *this,
        int32_t questType,
        const MethodInfo *method)
{
  System_String_o **v4; // x8
  RecommendSupportQuestBoardListViewItemDraw_c *v5; // x0
  __int64 v6; // x8

  if ( (byte_4C338BB & 1) == 0 )
  {
    sub_1C32C20(&RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C338BB = 1;
  }
  v4 = (System_String_o **)&StringLiteral_1/*""*/;
  switch ( questType )
  {
    case 1:
      v5 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
      if ( !RecommendSupportQuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
        v5 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
      }
      v6 = 80;
      goto LABEL_13;
    case 2:
    case 5:
      v5 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
      if ( !RecommendSupportQuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
        v5 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
      }
      v6 = 88;
      goto LABEL_13;
    case 3:
      v5 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
      if ( !RecommendSupportQuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
        v5 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
      }
      v6 = 72;
LABEL_13:
      v4 = (System_String_o **)((char *)v5->static_fields + v6);
      break;
    default:
      return *v4;
  }
  return *v4;
}


System_String_o *RecommendSupportQuestBoardListViewItemDraw__GetQuestIconName(
        RecommendSupportQuestBoardListViewItemDraw_o *this,
        QuestEntity_o *questEnt,
        int32_t questType,
        const MethodInfo *method)
{
  int32_t v6; // w19
  int32_t iconId; // t1
  RecommendSupportQuestBoardListViewItemDraw_c *v8; // x0
  System_String_o *QUEST_BOARD_ICON_SPNAME_PREFIX; // x20
  System_String_o *v10; // x1
  __int64 *v12; // x8

  if ( (byte_4C338BE & 1) == 0 )
  {
    sub_1C32C20(&RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
    sub_1C32C20(&StringLiteral_20533/*"img_questtxt_free"*/);
    sub_1C32C20(&StringLiteral_20532/*"img_questtxt_event"*/);
    this = (RecommendSupportQuestBoardListViewItemDraw_o *)sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C338BE = 1;
  }
  if ( !questEnt )
    sub_1C32E7C(this);
  iconId = questEnt->fields.iconId;
  v6 = (_DWORD)questEnt + 68;
  if ( iconId < 1 )
  {
    if ( questType == 5 )
    {
      v12 = &StringLiteral_20532/*"img_questtxt_event"*/;
    }
    else if ( questType == 2 )
    {
      v12 = &StringLiteral_20533/*"img_questtxt_free"*/;
    }
    else
    {
      v12 = &StringLiteral_1/*""*/;
    }
    return (System_String_o *)*v12;
  }
  else
  {
    v8 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
    if ( !RecommendSupportQuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
      v8 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
    }
    QUEST_BOARD_ICON_SPNAME_PREFIX = v8->static_fields->QUEST_BOARD_ICON_SPNAME_PREFIX;
    v10 = System_Int32__ToString(v6, 0);
    return System_String__Concat_63518544(QUEST_BOARD_ICON_SPNAME_PREFIX, v10, 0);
  }
}


System_String_o *RecommendSupportQuestBoardListViewItemDraw__GetQuestIconNameForMainType(
        RecommendSupportQuestBoardListViewItemDraw_o *this,
        QuestEntity_o *questEnt,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  int32_t v9; // w20
  int32_t iconId; // w21
  RecommendSupportQuestBoardListViewItemDraw_c *v11; // x0
  struct RecommendSupportQuestBoardListViewItemDraw_StaticFields *static_fields; // x8
  System_String_o *QUEST_BOARD_ICON_SPNAME_PREFIX; // x19
  System_String_o *v14; // x0
  System_String_o *CHAPTER_SP_BASE_NAME; // x20
  Il2CppObject *v17; // x0
  int32_t chapterId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C338BF & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    this = (RecommendSupportQuestBoardListViewItemDraw_o *)sub_1C32C20(&RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
    byte_4C338BF = 1;
  }
  if ( !questEnt )
    sub_1C32E7C(this);
  v9 = (_DWORD)questEnt + 68;
  iconId = questEnt->fields.iconId;
  v11 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
  if ( !RecommendSupportQuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
    v11 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
  }
  static_fields = v11->static_fields;
  if ( iconId < 1 )
  {
    CHAPTER_SP_BASE_NAME = static_fields->CHAPTER_SP_BASE_NAME;
    chapterId = questEnt->fields.chapterId;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &chapterId, method, v3, v4, v5, v6, v7);
    return System_String__Format(CHAPTER_SP_BASE_NAME, v17, 0);
  }
  else
  {
    QUEST_BOARD_ICON_SPNAME_PREFIX = static_fields->QUEST_BOARD_ICON_SPNAME_PREFIX;
    v14 = System_Int32__ToString(v9, 0);
    return System_String__Concat_63518544(QUEST_BOARD_ICON_SPNAME_PREFIX, v14, 0);
  }
}


bool RecommendSupportQuestBoardListViewItemDraw__IsDispQuestName(
        RecommendSupportQuestBoardListViewItemDraw_o *this,
        int32_t questType,
        const MethodInfo *method)
{
  _BOOL4 v3; // w0

  if ( (unsigned int)(questType - 2) > 3 )
    LOBYTE(v3) = 0;
  else
    return (0xBu >> ((questType - 2) & 0xF)) & 1;
  return v3;
}


bool RecommendSupportQuestBoardListViewItemDraw__IsMainWar(
        RecommendSupportQuestBoardListViewItemDraw_o *this,
        int32_t warId,
        int32_t eventId,
        const MethodInfo *method)
{
  BalanceConfig_c *v6; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8

  if ( (byte_4C338BA & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4C338BA = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  static_fields = v6->static_fields;
  if ( static_fields->FesWarId == warId )
    return 1;
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    static_fields = BalanceConfig_TypeInfo->static_fields;
  }
  return (eventId == 0)
       | System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)static_fields->MainChaptersWithEventId,
           warId,
           (const MethodInfo_30FA3A0 *)Method_System_Linq_Enumerable_Contains_int___);
}


void RecommendSupportQuestBoardListViewItemDraw__LoadBoardIconTexture(
        RecommendSupportQuestBoardListViewItemDraw_o *this,
        QuestEntity_o *questEntity,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x20
  Il2CppObject *Instance; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  __int64 v17; // x5
  __int64 v18; // x6
  __int64 v19; // x7
  RecommendSupportQuestBoardListViewItemDraw_c *v20; // x0
  int32_t iconId; // w9
  Il2CppObject *QUEST_BOARD_ICON_TEXTURE_PREFIX; // x21
  Il2CppObject *v23; // x0
  struct System_String_o *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct System_String_o *boardIconName; // x1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_String_o *v30; // x19
  AssetLoader_LoadEndDataHandler_o *v31; // x21
  int32_t v32; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4C338C3 & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C32C20(&RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass66_0__LoadBoardIconTexture_b__0__);
    sub_1C32C20(&RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass66_0_TypeInfo);
    byte_4C338C3 = 1;
  }
  v7 = sub_1C32E6C(RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass66_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_14;
  *(_QWORD *)(v7 + 24) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 24), (int32_t)this, v9, v10);
  *(_QWORD *)(v7 + 32) = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 32), (int32_t)callback, v11, v12);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0);
  RecommendSupportQuestBoardListViewItemDraw__ReleaseBoardIconTexture(this, v13);
  if ( !questEntity )
    goto LABEL_14;
  this->fields.boardIconQuestId = questEntity->fields.id;
  v20 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
  if ( !RecommendSupportQuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
    v20 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
  }
  iconId = questEntity->fields.iconId;
  QUEST_BOARD_ICON_TEXTURE_PREFIX = (Il2CppObject *)v20->static_fields->QUEST_BOARD_ICON_TEXTURE_PREFIX;
  v32 = iconId;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32, v14, v15, v16, v17, v18, v19);
  v24 = System_String__Concat(QUEST_BOARD_ICON_TEXTURE_PREFIX, v23, 0);
  this->fields.boardIconName = v24;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.boardIconName, (int32_t)v24, v25, v26);
  boardIconName = this->fields.boardIconName;
  *(_QWORD *)(v7 + 16) = boardIconName;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 16), (int32_t)boardIconName, v28, v29);
  v30 = System_String__Concat_63518544(
          RecommendSupportQuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_ICON_TEXTURE_PATH,
          this->fields.boardIconName,
          0);
  v31 = (AssetLoader_LoadEndDataHandler_o *)sub_1C32E6C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v31,
    (Il2CppObject *)v7,
    Method_RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass66_0__LoadBoardIconTexture_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v30, v31, 1, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0);
      return;
    }
LABEL_14:
    sub_1C32E7C(Instance);
  }
}


// attributes: thunk
void RecommendSupportQuestBoardListViewItemDraw__OnDestroy(
        RecommendSupportQuestBoardListViewItemDraw_o *this,
        const MethodInfo *method)
{
  RecommendSupportQuestBoardListViewItemDraw__ReleaseBoardIconTexture(this, method);
}


void RecommendSupportQuestBoardListViewItemDraw__ReleaseBoardIconTexture(
        RecommendSupportQuestBoardListViewItemDraw_o *this,
        const MethodInfo *method)
{
  RecommendSupportQuestBoardListViewItemDraw_c *v3; // x0
  System_String_o *v4; // x21
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C338C4 & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
    byte_4C338C4 = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.boardIconName, 0) )
  {
    v3 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
    if ( !RecommendSupportQuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
      v3 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
    }
    v4 = System_String__Concat_63518544(v3->static_fields->QUEST_BOARD_ICON_TEXTURE_PATH, this->fields.boardIconName, 0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v4, 0);
    this->fields.boardIconAssetData = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.boardIconAssetData, 0, v5, v6);
    this->fields.boardIconName = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.boardIconName, 0, v7, v8);
  }
}


void RecommendSupportQuestBoardListViewItemDraw__SetChapterSubIdDisp(
        RecommendSupportQuestBoardListViewItemDraw_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *questInfo,
        const MethodInfo *method)
{
  RecommendSupportQuestBoardListViewItemDraw_o *v4; // x19
  struct QuestEntity_o *questEntity; // x21
  WarEntity_o *warEntity; // x22
  const MethodInfo *v7; // x3
  _BOOL4 HasFlag; // w23
  _BOOL8 IsChapterSubIdJapaneseNumeralsNormal; // x0
  UILabel_o *labelSubSectionNumLb; // x22
  RecommendSupportQuestBoardListViewItemDraw_o *gameObject; // x0
  UISprite_o *labelChapterSp; // x23
  UnityEngine_GameObject_o *v13; // x22
  const MethodInfo *v14; // x2
  System_String_o *QuestIconNameForMainType; // x21
  struct UISprite_o *labelBoardSectionSp; // x8
  int v17; // w22
  UnityEngine_GameObject_o *v18; // x0
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  __int64 v22; // x5
  __int64 v23; // x6
  __int64 v24; // x7
  RecommendSupportQuestBoardListViewItemDraw_c *v25; // x8
  UISprite_o *v26; // x21
  UnityEngine_GameObject_o *v27; // x20
  System_String_o *CHAPTER_SP_UNIT_NAME; // x23
  Il2CppObject *v29; // x0
  System_String_o *v30; // x22
  int v31; // [xsp+Ch] [xbp-44h] BYREF

  v4 = this;
  if ( (byte_4C338BD & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
    this = (RecommendSupportQuestBoardListViewItemDraw_o *)sub_1C32C20(&StringLiteral_20500/*"img_quest_setsu"*/);
    byte_4C338BD = 1;
  }
  if ( !questInfo )
    goto LABEL_39;
  this = (RecommendSupportQuestBoardListViewItemDraw_o *)v4->fields.labelSubSectionNumLb;
  if ( !this )
    goto LABEL_39;
  questEntity = questInfo->fields.questEntity;
  this = (RecommendSupportQuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)this,
                                                           0);
  if ( !this )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  if ( !questEntity )
    goto LABEL_39;
  if ( questEntity->fields.iconId <= 0
    && !QuestEntity__HasFlag(questEntity, 0x2000000000000000LL, 0)
    && System_String__IsNullOrEmpty(questEntity->fields.chapterSubStr, 0) )
  {
    warEntity = questInfo->fields.warEntity;
    HasFlag = QuestEntity__HasFlag(questEntity, 0x40000, 0);
    if ( warEntity )
      IsChapterSubIdJapaneseNumeralsNormal = WarEntity__IsChapterSubIdJapaneseNumeralsNormal(warEntity, 0);
    else
      IsChapterSubIdJapaneseNumeralsNormal = 0;
    labelSubSectionNumLb = v4->fields.labelSubSectionNumLb;
    if ( HasFlag || IsChapterSubIdJapaneseNumeralsNormal )
    {
      this = (RecommendSupportQuestBoardListViewItemDraw_o *)RecommendSupportQuestBoardListViewItemDraw__ConvertToChineseAscii(
                                                               (RecommendSupportQuestBoardListViewItemDraw_o *)IsChapterSubIdJapaneseNumeralsNormal,
                                                               questEntity->fields.chapterSubId,
                                                               IsChapterSubIdJapaneseNumeralsNormal,
                                                               v7);
      if ( !labelSubSectionNumLb )
        goto LABEL_39;
    }
    else
    {
      this = (RecommendSupportQuestBoardListViewItemDraw_o *)System_Int32__ToString((int)questEntity + 116, 0);
      if ( !labelSubSectionNumLb )
        goto LABEL_39;
    }
    UILabel__set_text(labelSubSectionNumLb, (System_String_o *)this, 0);
    this = (RecommendSupportQuestBoardListViewItemDraw_o *)v4->fields.labelSubSectionNumLb;
    if ( !this )
      goto LABEL_39;
    this = (RecommendSupportQuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)this,
                                                             0);
    if ( !this )
      goto LABEL_39;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  }
  this = (RecommendSupportQuestBoardListViewItemDraw_o *)v4->fields.labelChapterSp;
  if ( !this )
    goto LABEL_39;
  gameObject = (RecommendSupportQuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)this,
                                                                 0);
  labelChapterSp = v4->fields.labelChapterSp;
  v13 = (UnityEngine_GameObject_o *)gameObject;
  QuestIconNameForMainType = RecommendSupportQuestBoardListViewItemDraw__GetQuestIconNameForMainType(
                               gameObject,
                               questEntity,
                               v14);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  this = (RecommendSupportQuestBoardListViewItemDraw_o *)AtlasManager__SetEventUI(
                                                           labelChapterSp,
                                                           QuestIconNameForMainType,
                                                           0);
  if ( !v13 )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive(v13, (unsigned __int8)this & 1, 0);
  this = (RecommendSupportQuestBoardListViewItemDraw_o *)v4->fields.labelChapterSp;
  if ( !this )
    goto LABEL_39;
  ((void (__fastcall *)(RecommendSupportQuestBoardListViewItemDraw_o *, void *))this->klass[2]._1.parent)(
    this,
    this->klass[2]._1.generic_class);
  this = (RecommendSupportQuestBoardListViewItemDraw_o *)questInfo->fields.warEntity;
  if ( !this )
    goto LABEL_39;
  this = (RecommendSupportQuestBoardListViewItemDraw_o *)WarEntity__GetQuestBoardSectionId((WarEntity_o *)this, 0);
  labelBoardSectionSp = v4->fields.labelBoardSectionSp;
  if ( (_DWORD)this )
  {
    if ( labelBoardSectionSp )
    {
      v17 = (int)this;
      v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4->fields.labelBoardSectionSp, 0);
      v25 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
      v26 = v4->fields.labelBoardSectionSp;
      v27 = v18;
      if ( !RecommendSupportQuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
        v25 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
      }
      CHAPTER_SP_UNIT_NAME = v25->static_fields->CHAPTER_SP_UNIT_NAME;
      v31 = v17;
      v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31, v19, v20, v21, v22, v23, v24);
      v30 = System_String__Format(CHAPTER_SP_UNIT_NAME, v29, 0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      this = (RecommendSupportQuestBoardListViewItemDraw_o *)AtlasManager__SetEventUI(v26, v30, 0);
      if ( v27 )
      {
        UnityEngine_GameObject__SetActive(v27, (unsigned __int8)this & 1, 0);
        goto LABEL_37;
      }
    }
LABEL_39:
    sub_1C32E7C(this);
  }
  if ( !labelBoardSectionSp )
    goto LABEL_39;
  UISprite__set_atlas(v4->fields.labelBoardSectionSp, v4->fields.terminalAtlas, 0);
  this = (RecommendSupportQuestBoardListViewItemDraw_o *)v4->fields.labelBoardSectionSp;
  if ( !this )
    goto LABEL_39;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20500/*"img_quest_setsu"*/, 0);
LABEL_37:
  this = (RecommendSupportQuestBoardListViewItemDraw_o *)v4->fields.labelBoardSectionSp;
  if ( !this )
    goto LABEL_39;
  ((void (__fastcall *)(RecommendSupportQuestBoardListViewItemDraw_o *, void *))this->klass[2]._1.parent)(
    this,
    this->klass[2]._1.generic_class);
}


bool RecommendSupportQuestBoardListViewItemDraw__SetFaceImage(
        RecommendSupportQuestBoardListViewItemDraw_o *this,
        QuestEntity_o *questEnt,
        UISprite_o *maskSprite,
        int32_t maskWidth,
        System_String_o *maskSpriteName,
        UnityEngine_Color_o baseColor,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  RecommendSupportQuestBoardListViewItemDraw_o *v15; // x23
  int32_t charaIconId; // w24
  UISprite_o *labelFaceIcon; // x24
  int32_t ServantId; // w25
  int32_t LimitCount; // w26
  int32_t v20; // w22
  int32_t bannerId; // t1
  RecommendSupportQuestBoardListViewItemDraw_c *v22; // x0
  System_String_o *QUEST_BOARD_MASK_SPNAME_PREFIX; // x21
  System_String_o *v24; // x0
  UISpriteData_o *Sprite; // x21
  UnityEngine_Color_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = baseColor.fields.a;
  b = baseColor.fields.b;
  g = baseColor.fields.g;
  r = baseColor.fields.r;
  v15 = this;
  if ( (byte_4C338C1 & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    this = (RecommendSupportQuestBoardListViewItemDraw_o *)sub_1C32C20(&RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
    byte_4C338C1 = 1;
  }
  if ( !questEnt )
    goto LABEL_23;
  this = (RecommendSupportQuestBoardListViewItemDraw_o *)v15->fields.labelFaceObj;
  if ( !this )
    goto LABEL_23;
  charaIconId = questEnt->fields.charaIconId;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, charaIconId > 0, 0);
  if ( charaIconId < 1 )
    return 0;
  labelFaceIcon = v15->fields.labelFaceIcon;
  ServantId = QuestEntity__getServantId(questEnt, 0);
  LimitCount = QuestEntity__getLimitCount(questEnt, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetFaceImage(labelFaceIcon, ServantId, LimitCount, 1, 0, 0);
  this = (RecommendSupportQuestBoardListViewItemDraw_o *)v15->fields.labelFaceIcon;
  if ( !this )
    goto LABEL_23;
  v27.fields.r = r;
  v27.fields.g = g;
  v27.fields.b = b;
  v27.fields.a = a;
  UIWidget__set_color((UIWidget_o *)this, v27, 0);
  if ( !maskSprite )
    goto LABEL_23;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)maskSprite, 1, 0);
  v28.fields.r = r;
  v28.fields.g = g;
  v28.fields.b = b;
  v28.fields.a = a;
  UIWidget__set_color((UIWidget_o *)maskSprite, v28, 0);
  bannerId = questEnt->fields.bannerId;
  v20 = (_DWORD)questEnt + 64;
  if ( bannerId < 1 )
  {
    UISprite__set_atlas(maskSprite, v15->fields.terminalAtlas, 0);
    UISprite__set_spriteName(maskSprite, maskSpriteName, 0);
  }
  else
  {
    v22 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
    if ( !RecommendSupportQuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
      v22 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
    }
    QUEST_BOARD_MASK_SPNAME_PREFIX = v22->static_fields->QUEST_BOARD_MASK_SPNAME_PREFIX;
    v24 = System_Int32__ToString(v20, 0);
    maskSpriteName = System_String__Concat_63518544(QUEST_BOARD_MASK_SPNAME_PREFIX, v24, 0);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(maskSprite, maskSpriteName, 0);
  }
  this = (RecommendSupportQuestBoardListViewItemDraw_o *)maskSprite->fields.mAtlas;
  if ( !this )
    goto LABEL_23;
  Sprite = UIAtlas__GetSprite((UIAtlas_o *)this, maskSpriteName, 0);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)maskSprite, Sprite != 0, 0);
  this = (RecommendSupportQuestBoardListViewItemDraw_o *)UnityEngine_Behaviour__get_enabled(
                                                           (UnityEngine_Behaviour_o *)maskSprite,
                                                           0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( Sprite )
    {
      Sprite->fields.width = maskWidth - 1;
      return 1;
    }
LABEL_23:
    sub_1C32E7C(this);
  }
  return 1;
}


void RecommendSupportQuestBoardListViewItemDraw__SetItem(
        RecommendSupportQuestBoardListViewItemDraw_o *this,
        RecommendSupportQuestBoardListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_Component_o *baseSprite; // x0
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x3
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( item )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !byte_4C313D6 )
    {
      sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
      byte_4C313D6 = 1;
    }
    GameObjectExtensions__SetLocalScale(gameObject, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    baseSprite = (UnityEngine_Component_o *)this->fields.baseSprite;
    if ( !baseSprite )
      goto LABEL_15;
    baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0);
    if ( !baseSprite )
      goto LABEL_15;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, 1, 0);
    baseSprite = (UnityEngine_Component_o *)this->fields.baseSprite;
    if ( !baseSprite )
      goto LABEL_15;
    v9.fields.r = 1.0;
    v9.fields.g = 1.0;
    v9.fields.b = 1.0;
    v9.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)baseSprite, v9, 0);
    baseSprite = (UnityEngine_Component_o *)this->fields.baseSprite;
    if ( !baseSprite
      || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)baseSprite, 1, 0),
          (baseSprite = (UnityEngine_Component_o *)this->fields.classIconRoot) == 0)
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, 0, 0),
          (baseSprite = (UnityEngine_Component_o *)this->fields.questBoardMessage) == 0)
      || (baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0)) == 0 )
    {
LABEL_15:
      sub_1C32E7C(baseSprite);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, 0, 0);
    if ( item->fields._QuestInfo_k__BackingField )
      RecommendSupportQuestBoardListViewItemDraw__SetItemOfQuest(
        this,
        item,
        item->fields._IsQuestRestriction_k__BackingField,
        v8);
    else
      RecommendSupportQuestBoardListViewItemDraw__SetItemOfArea(this, item, v7);
  }
}


void RecommendSupportQuestBoardListViewItemDraw__SetItemOfArea(
        RecommendSupportQuestBoardListViewItemDraw_o *this,
        RecommendSupportQuestBoardListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *labelObj; // x0
  struct RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *QuestFolderInfo_k__BackingField; // x8
  WarEntity_o *warEntity; // x21
  int32_t id; // w22
  _BOOL8 v9; // x0
  const MethodInfo *v10; // x4
  System_String_o *EventAddBannerSpriteName; // x0
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  __int64 v15; // x5
  __int64 v16; // x6
  __int64 v17; // x7
  Il2CppObject *v18; // x0
  System_String_o *v19; // x8
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  __int64 v23; // x5
  __int64 v24; // x6
  __int64 v25; // x7
  System_String_o *v26; // x22
  UnityEngine_Object_o *settingAreaSp; // x23
  bool v28; // w0
  __int64 v29; // x8
  UISprite_o *baseSprite; // x20
  int32_t PrioredBannerId; // [xsp+4h] [xbp-3Ch] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C338B8 & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_17797/*"chaldea_category_{0}"*/);
    sub_1C32C20(&StringLiteral_22886/*"questboard_cap{0:D3}"*/);
    byte_4C338B8 = 1;
  }
  entity = 0;
  labelObj = this->fields.labelObj;
  if ( !labelObj )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive(labelObj, 0, 0);
  labelObj = this->fields.titleObj;
  if ( !labelObj )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive(labelObj, 0, 0);
  labelObj = this->fields.phaseObj;
  if ( !labelObj )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive(labelObj, 0, 0);
  labelObj = (UnityEngine_GameObject_o *)this->fields.labelFaceMaskQuestSp;
  if ( !labelObj )
    goto LABEL_35;
  labelObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelObj, 0);
  if ( !labelObj )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive(labelObj, 0, 0);
  if ( !item )
    goto LABEL_35;
  QuestFolderInfo_k__BackingField = item->fields._QuestFolderInfo_k__BackingField;
  if ( !QuestFolderInfo_k__BackingField )
    goto LABEL_35;
  warEntity = QuestFolderInfo_k__BackingField->fields.warEntity;
  if ( !warEntity )
    goto LABEL_35;
  id = warEntity->fields.id;
  if ( !WarEntity__IsEvent(QuestFolderInfo_k__BackingField->fields.warEntity, 0) )
    goto LABEL_17;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  labelObj = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventMaster___);
  if ( !labelObj )
    goto LABEL_35;
  v9 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)labelObj,
         &entity,
         warEntity->fields.eventId,
         (const MethodInfo_3396884 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( v9 )
  {
    EventAddBannerSpriteName = RecommendSupportQuestBoardListViewItemDraw__GetEventAddBannerSpriteName(
                                 (RecommendSupportQuestBoardListViewItemDraw_o *)v9,
                                 (EventEntity_o *)entity,
                                 id,
                                 1,
                                 v10);
  }
  else
  {
LABEL_17:
    if ( WarEntity__IsFolder(warEntity, 0) && !WarEntity__HasFlag(warEntity, 128, 0) )
    {
      PrioredBannerId = WarEntity__GetPrioredBannerId(warEntity, 0);
      v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PrioredBannerId, v20, v21, v22, v23, v24, v25);
      v19 = (System_String_o *)StringLiteral_17797/*"chaldea_category_{0}"*/;
    }
    else
    {
      PrioredBannerId = WarEntity__GetPrioredBannerId(warEntity, 0);
      v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PrioredBannerId, v12, v13, v14, v15, v16, v17);
      v19 = (System_String_o *)StringLiteral_22886/*"questboard_cap{0:D3}"*/;
    }
    EventAddBannerSpriteName = System_String__Format(v19, v18, 0);
  }
  v26 = EventAddBannerSpriteName;
  settingAreaSp = (UnityEngine_Object_o *)this->fields.settingAreaSp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(settingAreaSp, 0, 0) )
  {
    labelObj = this->fields.settingAreaSp;
    if ( !labelObj )
      goto LABEL_35;
    UnityEngine_GameObject__SetActive(labelObj, item->fields._IsSetting_k__BackingField, 0);
    v28 = System_Linq_Enumerable__Contains_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.parentFolderWarId,
            warEntity->fields.id,
            (const MethodInfo_30FA3A0 *)Method_System_Linq_Enumerable_Contains_int___);
    v29 = 32;
    if ( v28 )
      v29 = 36;
    GameObjectExtensions__SetLocalPositionY(this->fields.settingAreaSp, (float)*(int *)((char *)&this->klass + v29), 0);
  }
  baseSprite = this->fields.baseSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBanner(baseSprite, v26, 0);
  labelObj = (UnityEngine_GameObject_o *)this->fields.baseSprite;
  if ( !labelObj
    || (((void (__fastcall *)(UnityEngine_GameObject_o *, void *))labelObj->klass[2]._1.parent)(
          labelObj,
          labelObj->klass[2]._1.generic_class),
        (labelObj = (UnityEngine_GameObject_o *)this->fields.baseSprite) == 0)
    || (labelObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelObj, 0)) == 0 )
  {
LABEL_35:
    sub_1C32E7C(labelObj);
  }
  UnityEngine_GameObject__SetActive(labelObj, 1, 0);
}


void RecommendSupportQuestBoardListViewItemDraw__SetItemOfQuest(
        RecommendSupportQuestBoardListViewItemDraw_o *this,
        RecommendSupportQuestBoardListViewItem_o *item,
        bool isQuestRestriction,
        const MethodInfo *method)
{
  __int64 v7; // x20
  UnityEngine_GameObject_o *labelObj; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *QuestInfo_k__BackingField; // x23
  QuestEntity_o *questEntity; // x21
  __int64 type; // x24
  int32_t phase; // w22
  UILabel_o *questBoardMessageTitle; // x27
  UnityEngine_Object_o *restrictionMaskSp; // x27
  UnityEngine_Object_o *restrictionMessage; // x27
  const MethodInfo *v18; // x4
  UILabel_o *v19; // x26
  RecommendSupportQuestBoardListViewItemDraw_c *v25; // x0
  System_String_o *QUEST_BOARD_SPNAME_PREFIX; // x27
  System_String_o *v27; // x0
  System_String_o *v28; // x0
  UISprite_o *v29; // x26
  System_String_o *v30; // x27
  UISprite_o *baseSprite; // x26
  __int64 v32; // x8
  System_String_o *v33; // x27
  System_String_o *v34; // x0
  System_String_o *v35; // x27
  UISprite_o *v36; // x26
  __int64 v37; // x8
  System_String_o *RecommendLv_42366540; // x0
  const MethodInfo *v39; // x2
  const MethodInfo *v40; // x2
  RecommendSupportQuestBoardListViewItemDraw_o *v41; // x0
  UISprite_o *labelFaceMaskQuestSp; // x26
  int32_t m_CachedPtr; // w27
  System_String_o *FaceMaskSpriteName; // x0
  const MethodInfo *v45; // x5
  bool v46; // w0
  const MethodInfo *v47; // x3
  UILabel_o *titleNameLb; // x26
  const MethodInfo *v49; // x3
  struct WarEntity_o *warEntity; // x8
  const MethodInfo *v51; // x2
  UISprite_o *labelNameSp; // x23
  RecommendSupportQuestBoardListViewItemDraw_o *v53; // x0
  const MethodInfo *v54; // x3
  System_String_o *QuestIconName; // x24
  System_Action_o *v56; // x23
  const MethodInfo *v57; // x3
  UILabel_o *v58; // x23
  UnityEngine_GameObject_o *phaseObj; // x23
  UnityEngine_GameObject_o *v60; // x25
  UnityEngine_GameObject_o *v61; // x24
  char v62; // w8
  int klass; // w28
  UILabel_o *phaseNumLb; // x23
  System_String_o *v65; // x24
  __int64 v66; // x2
  __int64 v67; // x3
  __int64 v68; // x4
  __int64 v69; // x5
  __int64 v70; // x6
  __int64 v71; // x7
  Il2CppObject *v72; // x25
  __int64 v73; // x2
  __int64 v74; // x3
  __int64 v75; // x4
  __int64 v76; // x5
  __int64 v77; // x6
  __int64 v78; // x7
  Il2CppObject *v79; // x0
  QuestPhaseEntity_o *Entity; // x0
  QuestPhaseEntity_o *v81; // x22
  struct System_Int32_array *classIds; // x8
  bool v83; // w21
  struct ServantClassIconComponent_array *classIcons; // x8
  int max_length; // w9
  int v86; // w23
  struct System_Int32_array *v87; // x22
  unsigned int v88; // w9
  __int64 v89; // x24
  Il2CppClass **v90; // x8
  UnityEngine_Component_o *v91; // x21
  int v92; // [xsp+8h] [xbp-68h] BYREF
  int32_t v93; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4C338B9 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
    sub_1C32C20(&Method_RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass55_0__SetItemOfQuest_b__0__);
    sub_1C32C20(&RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass55_0_TypeInfo);
    sub_1C32C20(&StringLiteral_11051/*"RECOMMEND_SUPPORT_QUEST_SELECT_PHASE_INFO"*/);
    sub_1C32C20(&StringLiteral_11049/*"RECOMMEND_SUPPORT_QUEST_SELECT_MESSAGE_TITLE"*/);
    sub_1C32C20(&StringLiteral_11052/*"RECOMMEND_SUPPORT_QUEST_SELECT_RESTRICTION"*/);
    byte_4C338B9 = 1;
  }
  v7 = sub_1C32E6C(RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass55_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_134;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v9, v10);
  if ( !item )
    goto LABEL_134;
  QuestInfo_k__BackingField = item->fields._QuestInfo_k__BackingField;
  if ( !QuestInfo_k__BackingField )
    goto LABEL_134;
  questEntity = QuestInfo_k__BackingField->fields.questEntity;
  if ( !questEntity )
    goto LABEL_134;
  labelObj = this->fields.labelObj;
  if ( !labelObj )
    goto LABEL_134;
  type = (unsigned int)questEntity->fields.type;
  phase = QuestInfo_k__BackingField->fields.phase;
  UnityEngine_GameObject__SetActive(labelObj, 1, 0);
  labelObj = (UnityEngine_GameObject_o *)this->fields.labelNameSp;
  if ( !labelObj )
    goto LABEL_134;
  labelObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelObj, 0);
  if ( !labelObj )
    goto LABEL_134;
  UnityEngine_GameObject__SetActive(labelObj, 0, 0);
  labelObj = (UnityEngine_GameObject_o *)this->fields.labelChapterSp;
  if ( !labelObj )
    goto LABEL_134;
  labelObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelObj, 0);
  if ( !labelObj )
    goto LABEL_134;
  UnityEngine_GameObject__SetActive(labelObj, 0, 0);
  labelObj = (UnityEngine_GameObject_o *)this->fields.labelSubSectionNumLb;
  if ( !labelObj )
    goto LABEL_134;
  labelObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelObj, 0);
  if ( !labelObj )
    goto LABEL_134;
  UnityEngine_GameObject__SetActive(labelObj, 0, 0);
  labelObj = this->fields.titleObj;
  if ( !labelObj )
    goto LABEL_134;
  UnityEngine_GameObject__SetActive(labelObj, 1, 0);
  labelObj = (UnityEngine_GameObject_o *)this->fields.labelFaceMaskQuestSp;
  if ( !labelObj )
    goto LABEL_134;
  labelObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelObj, 0);
  if ( !labelObj )
    goto LABEL_134;
  UnityEngine_GameObject__SetActive(labelObj, 1, 0);
  labelObj = (UnityEngine_GameObject_o *)this->fields.questBoardMessage;
  if ( !labelObj )
    goto LABEL_134;
  labelObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelObj, 0);
  if ( !labelObj )
    goto LABEL_134;
  UnityEngine_GameObject__SetActive(labelObj, 1, 0);
  labelObj = (UnityEngine_GameObject_o *)this->fields.questBoardMessage;
  if ( !labelObj )
    goto LABEL_134;
  UILabel__set_text((UILabel_o *)labelObj, QuestInfo_k__BackingField->fields.message, 0);
  questBoardMessageTitle = this->fields.questBoardMessageTitle;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  labelObj = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11049/*"RECOMMEND_SUPPORT_QUEST_SELECT_MESSAGE_TITLE"*/, 0);
  if ( !questBoardMessageTitle )
    goto LABEL_134;
  UILabel__set_text(questBoardMessageTitle, (System_String_o *)labelObj, 0);
  restrictionMaskSp = (UnityEngine_Object_o *)this->fields.restrictionMaskSp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSp, 0, 0) )
  {
    labelObj = (UnityEngine_GameObject_o *)this->fields.restrictionMaskSp;
    if ( !labelObj )
      goto LABEL_134;
    labelObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelObj, 0);
    if ( !labelObj )
      goto LABEL_134;
    UnityEngine_GameObject__SetActive(labelObj, isQuestRestriction, 0);
  }
  restrictionMessage = (UnityEngine_Object_o *)this->fields.restrictionMessage;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMessage, 0, 0) )
  {
    labelObj = (UnityEngine_GameObject_o *)this->fields.restrictionMessage;
    if ( !labelObj )
      goto LABEL_134;
    labelObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelObj, 0);
    if ( !labelObj )
      goto LABEL_134;
    UnityEngine_GameObject__SetActive(labelObj, isQuestRestriction, 0);
    v19 = this->fields.restrictionMessage;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    labelObj = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11052/*"RECOMMEND_SUPPORT_QUEST_SELECT_RESTRICTION"*/, 0);
    if ( !v19 )
      goto LABEL_134;
    UILabel__set_text(v19, (System_String_o *)labelObj, 0);
  }
  RecommendSupportQuestBoardListViewItemDraw__DispSettingQuestInfo(
    this,
    item->fields._IsSetting_k__BackingField,
    item->fields._SettingSelectIndex_k__BackingField,
    item->fields._SettingSvtName_k__BackingField,
    v18);
  __asm { FMOV            V0.4S, #1.0 }
  *(_OWORD *)(v7 + 24) = _Q0;
  if ( questEntity->fields.bannerId < 1 )
  {
    baseSprite = this->fields.baseSprite;
    if ( (unsigned int)type <= 5 && ((1 << type) & 0x26) != 0 )
    {
      labelObj = (UnityEngine_GameObject_o *)RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
      if ( !RecommendSupportQuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
        labelObj = (UnityEngine_GameObject_o *)RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
      }
      v32 = *(_QWORD *)(labelObj[7].fields.m_CachedPtr + 96);
      if ( !v32 )
        goto LABEL_134;
      if ( (unsigned int)type >= *(_DWORD *)(v32 + 24) )
        goto LABEL_142;
      v33 = *(System_String_o **)(v32 + 8 * type + 32);
      v34 = System_Int32__ToString((int)questEntity + 60, 0);
      v35 = System_String__Concat_63518544(v33, v34, 0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetBanner(baseSprite, v35, 0);
    }
    else
    {
      if ( !baseSprite )
        goto LABEL_134;
      UISprite__set_atlas(this->fields.baseSprite, this->fields.terminalAtlas, 0);
      labelObj = (UnityEngine_GameObject_o *)RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
      v36 = this->fields.baseSprite;
      if ( !RecommendSupportQuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
        labelObj = (UnityEngine_GameObject_o *)RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
      }
      v37 = *(_QWORD *)(labelObj[7].fields.m_CachedPtr + 96);
      if ( !v37 )
        goto LABEL_134;
      if ( (unsigned int)type >= *(_DWORD *)(v37 + 24) )
        goto LABEL_142;
      if ( !v36 )
        goto LABEL_134;
      UISprite__set_spriteName(v36, *(System_String_o **)(v37 + 8LL * (int)type + 32), 0);
    }
  }
  else
  {
    v25 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
    if ( !RecommendSupportQuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
      v25 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
    }
    QUEST_BOARD_SPNAME_PREFIX = v25->static_fields->QUEST_BOARD_SPNAME_PREFIX;
    v27 = System_Int32__ToString((int)questEntity + 64, 0);
    v28 = System_String__Concat_63518544(QUEST_BOARD_SPNAME_PREFIX, v27, 0);
    v29 = this->fields.baseSprite;
    v30 = v28;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    labelObj = (UnityEngine_GameObject_o *)AtlasManager__SetEventUI(v29, v30, 0);
    if ( !v29 )
      goto LABEL_134;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v29, (unsigned __int8)labelObj & 1, 0);
  }
  labelObj = (UnityEngine_GameObject_o *)this->fields.baseSprite;
  if ( !labelObj )
    goto LABEL_134;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))labelObj->klass[2]._1.parent)(
    labelObj,
    labelObj->klass[2]._1.generic_class);
  RecommendLv_42366540 = QuestEntity__getRecommendLv_42366540(questEntity, phase, 0);
  RecommendSupportQuestBoardListViewItemDraw__SetRecommendLv(
    this,
    RecommendLv_42366540,
    *(UnityEngine_Color_o *)(v7 + 24),
    v39);
  v41 = (RecommendSupportQuestBoardListViewItemDraw_o *)RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
  labelFaceMaskQuestSp = this->fields.labelFaceMaskQuestSp;
  if ( !RecommendSupportQuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
    v41 = (RecommendSupportQuestBoardListViewItemDraw_o *)RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
  }
  m_CachedPtr = v41->fields.labelFaceObj[2].fields.m_CachedPtr;
  FaceMaskSpriteName = RecommendSupportQuestBoardListViewItemDraw__GetFaceMaskSpriteName(v41, type, v40);
  v46 = RecommendSupportQuestBoardListViewItemDraw__SetFaceImage(
          this,
          questEntity,
          labelFaceMaskQuestSp,
          m_CachedPtr,
          FaceMaskSpriteName,
          *(UnityEngine_Color_o *)(v7 + 24),
          v45);
  titleNameLb = this->fields.titleNameLb;
  if ( v46 )
  {
    labelObj = (UnityEngine_GameObject_o *)RecommendSupportQuestBoardListViewItemDraw__GetDispQuestName(
                                             this,
                                             questEntity,
                                             type,
                                             v47);
    if ( !titleNameLb )
      goto LABEL_134;
    UILabel__set_text(titleNameLb, (System_String_o *)labelObj, 0);
  }
  else
  {
    labelObj = (UnityEngine_GameObject_o *)QuestEntity__getQuestName(questEntity, 0);
    if ( !titleNameLb )
      goto LABEL_134;
    UILabel__set_text(titleNameLb, (System_String_o *)labelObj, 0);
    if ( (_DWORD)type != 1 )
      goto LABEL_72;
    warEntity = QuestInfo_k__BackingField->fields.warEntity;
    if ( !warEntity )
      goto LABEL_134;
    if ( RecommendSupportQuestBoardListViewItemDraw__IsMainWar(
           (RecommendSupportQuestBoardListViewItemDraw_o *)labelObj,
           warEntity->fields.id,
           warEntity->fields.eventId,
           v49) )
    {
      RecommendSupportQuestBoardListViewItemDraw__SetChapterSubIdDisp(this, QuestInfo_k__BackingField, v51);
    }
    else
    {
LABEL_72:
      labelObj = (UnityEngine_GameObject_o *)this->fields.boardIconTexture;
      if ( !labelObj )
        goto LABEL_134;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)labelObj, 0, 0);
      labelObj = (UnityEngine_GameObject_o *)this->fields.labelNameSp;
      if ( !labelObj )
        goto LABEL_134;
      labelObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelObj, 0);
      if ( !labelObj )
        goto LABEL_134;
      UnityEngine_GameObject__SetActive(labelObj, 1, 0);
      labelNameSp = this->fields.labelNameSp;
      QuestIconName = RecommendSupportQuestBoardListViewItemDraw__GetQuestIconName(v53, questEntity, type, v54);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      labelObj = (UnityEngine_GameObject_o *)AtlasManager__SetEventUI(labelNameSp, QuestIconName, 0);
      if ( !labelNameSp )
        goto LABEL_134;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)labelNameSp, (unsigned __int8)labelObj & 1, 0);
      labelObj = (UnityEngine_GameObject_o *)this->fields.labelNameSp;
      if ( !labelObj )
        goto LABEL_134;
      ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))labelObj->klass[2]._1.parent)(
        labelObj,
        labelObj->klass[2]._1.generic_class);
      labelObj = (UnityEngine_GameObject_o *)this->fields.labelNameSp;
      if ( !labelObj )
        goto LABEL_134;
      labelObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelObj, 0);
      if ( !labelObj )
        goto LABEL_134;
      labelObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                               labelObj,
                                               (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
      if ( !labelObj )
        goto LABEL_134;
      UIWidget__set_color((UIWidget_o *)labelObj, *(UnityEngine_Color_o *)(v7 + 24), 0);
      labelObj = (UnityEngine_GameObject_o *)this->fields.labelNameSp;
      if ( !labelObj )
        goto LABEL_134;
      if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)labelObj, 0) )
      {
        *(_DWORD *)(v7 + 40) = questEntity->fields.id;
        v56 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
        System_Action___ctor(
          v56,
          (Il2CppObject *)v7,
          Method_RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass55_0__SetItemOfQuest_b__0__,
          0);
        RecommendSupportQuestBoardListViewItemDraw__LoadBoardIconTexture(this, questEntity, v56, v57);
      }
    }
  }
  labelObj = (UnityEngine_GameObject_o *)RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
  v58 = this->fields.titleNameLb;
  if ( !RecommendSupportQuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
  if ( !v58 )
    goto LABEL_134;
  UILabel__SetCondensedScale(
    v58,
    RecommendSupportQuestBoardListViewItemDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH,
    0,
    0);
  labelObj = (UnityEngine_GameObject_o *)this->fields.titleNameLb;
  if ( !labelObj )
    goto LABEL_134;
  UIWidget__set_color((UIWidget_o *)labelObj, *(UnityEngine_Color_o *)(v7 + 24), 0);
  phaseObj = this->fields.phaseObj;
  labelObj = (UnityEngine_GameObject_o *)QuestEntity__HasFlag(questEntity, 0x4000, 0);
  v60 = ((unsigned __int8)labelObj & 1) != 0 ? 0LL : phaseObj;
  if ( ((unsigned __int8)labelObj & 1) != 0
    || ((labelObj = (UnityEngine_GameObject_o *)QuestEntity__HasFlag(questEntity, 0x10000, 0),
         ((unsigned __int8)labelObj & 1) == 0)
      ? (v61 = v60)
      : (v61 = 0),
        ((unsigned __int8)labelObj & 1) != 0) )
  {
    v62 = 0;
  }
  else
  {
    labelObj = (UnityEngine_GameObject_o *)QuestEntity__HasFlag(questEntity, 512, 0);
    if ( ((unsigned __int8)labelObj & 1) != 0 )
    {
      v62 = 0;
      phaseObj = v60;
    }
    else
    {
      labelObj = (UnityEngine_GameObject_o *)QuestEntity__HasFlag(questEntity, 0x4000000, 0);
      if ( ((unsigned __int8)labelObj & 1) != 0 )
      {
        v62 = 0;
      }
      else
      {
        labelObj = (UnityEngine_GameObject_o *)QuestEntity__HasFlag(questEntity, 0x2000000000LL, 0);
        v62 = (unsigned __int8)labelObj ^ 1;
      }
      phaseObj = v61;
    }
  }
  if ( !phaseObj )
    goto LABEL_134;
  UnityEngine_GameObject__SetActive(phaseObj, v62 & 1, 0);
  labelObj = this->fields.phaseObj;
  if ( !labelObj )
    goto LABEL_134;
  if ( UnityEngine_GameObject__get_activeSelf(labelObj, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    labelObj = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !labelObj )
      goto LABEL_134;
    labelObj = (UnityEngine_GameObject_o *)QuestPhaseMaster__getList(
                                             (QuestPhaseMaster_o *)labelObj,
                                             questEntity->fields.id,
                                             0);
    if ( !labelObj )
      goto LABEL_134;
    klass = (int)labelObj[1].klass;
    phaseNumLb = this->fields.phaseNumLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v65 = LocalizationManager__Get((System_String_o *)StringLiteral_11051/*"RECOMMEND_SUPPORT_QUEST_SELECT_PHASE_INFO"*/, 0);
    v93 = phase;
    v72 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v93, v66, v67, v68, v69, v70, v71);
    v92 = klass;
    v79 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v92, v73, v74, v75, v76, v77, v78);
    labelObj = (UnityEngine_GameObject_o *)System_String__Format_63559836(v65, v72, v79, 0);
    if ( !phaseNumLb )
      goto LABEL_134;
    UILabel__set_text(phaseNumLb, (System_String_o *)labelObj, 0);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  labelObj = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !labelObj )
    goto LABEL_134;
  Entity = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)labelObj, questEntity->fields.id, phase, 0);
  v81 = Entity;
  v83 = Entity
     && (classIds = Entity->fields.classIds) != 0
     && classIds->max_length
     && !QuestEntity__HasFlag(questEntity, 2048, 0);
  labelObj = this->fields.classIconRoot;
  if ( !labelObj )
    goto LABEL_134;
  UnityEngine_GameObject__SetActive(labelObj, v83, 0);
  labelObj = (UnityEngine_GameObject_o *)this->fields.classStrSp;
  if ( !labelObj )
    goto LABEL_134;
  UIWidget__set_color((UIWidget_o *)labelObj, *(UnityEngine_Color_o *)(v7 + 24), 0);
  if ( !v83 )
    return;
  if ( !v81 || (classIcons = this->fields.classIcons) == 0 )
LABEL_134:
    sub_1C32E7C(labelObj);
  max_length = classIcons->max_length;
  v86 = max_length - 1;
  if ( max_length >= 1 )
  {
    v87 = v81->fields.classIds;
    v88 = 0;
    while ( v88 < LODWORD(classIcons->max_length) )
    {
      v89 = (int)v88;
      v90 = &classIcons->obj.klass + (int)v88;
      v91 = (UnityEngine_Component_o *)v90[4];
      if ( !v91 )
        goto LABEL_134;
      labelObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v90[4], 0);
      if ( !v87 )
        goto LABEL_134;
      if ( !labelObj )
        goto LABEL_134;
      UnityEngine_GameObject__SetActive(labelObj, (int)v89 < SLODWORD(v87->max_length), 0);
      labelObj = UnityEngine_Component__get_gameObject(v91, 0);
      if ( !labelObj )
        goto LABEL_134;
      labelObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_activeSelf(labelObj, 0);
      if ( ((unsigned __int8)labelObj & 1) != 0 )
      {
        if ( (unsigned int)v89 >= LODWORD(v87->max_length) )
          break;
        ServantClassIconComponent__Set((ServantClassIconComponent_o *)v91, v87->m_Items[v89], 0, 0);
        ServantClassIconComponent__SetColor((ServantClassIconComponent_o *)v91, *(UnityEngine_Color_o *)(v7 + 24), 0);
      }
      if ( v86 == (_DWORD)v89 )
        return;
      classIcons = this->fields.classIcons;
      v88 = v89 + 1;
      if ( !classIcons )
        goto LABEL_134;
    }
LABEL_142:
    sub_1C32E84(labelObj);
  }
}


void RecommendSupportQuestBoardListViewItemDraw__SetRecommendLv(
        RecommendSupportQuestBoardListViewItemDraw_o *this,
        System_String_o *recommendLv,
        UnityEngine_Color_o baseColor,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  UnityEngine_GameObject_o *titleLevelRoot; // x20
  UnityEngine_Component_o *IsNullOrEmpty; // x0
  Il2CppObject *Component_object; // x20
  UnityEngine_GameObject_o *v13; // x21
  float v14; // s0
  float v15; // s0
  float v16; // s8
  struct UILabel_o *titleLevelLb; // x8
  UnityEngine_Object_o *v18; // x20
  int mWidth; // s8
  float monitor_low; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = baseColor.fields.a;
  b = baseColor.fields.b;
  g = baseColor.fields.g;
  r = baseColor.fields.r;
  if ( (byte_4C338C5 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_CondensedScaleSprite___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C338C5 = 1;
  }
  titleLevelRoot = this->fields.titleLevelRoot;
  IsNullOrEmpty = (UnityEngine_Component_o *)System_String__IsNullOrEmpty(recommendLv, 0);
  if ( !titleLevelRoot )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(titleLevelRoot, ((unsigned __int8)IsNullOrEmpty & 1) == 0, 0);
  IsNullOrEmpty = (UnityEngine_Component_o *)this->fields.titleLevelRoot;
  if ( !IsNullOrEmpty )
    goto LABEL_37;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)IsNullOrEmpty, 0) )
  {
    IsNullOrEmpty = (UnityEngine_Component_o *)this->fields.titleLevelSp;
    if ( !IsNullOrEmpty )
      goto LABEL_37;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         IsNullOrEmpty,
                         (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_CondensedScaleSprite___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    IsNullOrEmpty = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)Component_object,
                                                 0,
                                                 0);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_37;
      CondensedScaleSprite__Init((CondensedScaleSprite_o *)Component_object, 0);
    }
    IsNullOrEmpty = (UnityEngine_Component_o *)this->fields.titleLevelLb;
    if ( IsNullOrEmpty )
    {
      UILabel__set_text((UILabel_o *)IsNullOrEmpty, recommendLv, 0);
      IsNullOrEmpty = (UnityEngine_Component_o *)this->fields.titleLevelLb;
      if ( IsNullOrEmpty )
      {
        v22.fields.r = r;
        v22.fields.g = g;
        v22.fields.b = b;
        v22.fields.a = a;
        UIWidget__set_color((UIWidget_o *)IsNullOrEmpty, v22, 0);
        IsNullOrEmpty = (UnityEngine_Component_o *)this->fields.titleLevelSp;
        if ( IsNullOrEmpty )
        {
          v23.fields.r = r;
          v23.fields.g = g;
          v23.fields.b = b;
          v23.fields.a = a;
          UIWidget__set_color((UIWidget_o *)IsNullOrEmpty, v23, 0);
          IsNullOrEmpty = (UnityEngine_Component_o *)this->fields.titleLevelStrSp;
          if ( IsNullOrEmpty )
          {
            v24.fields.r = r;
            v24.fields.g = g;
            v24.fields.b = b;
            v24.fields.a = a;
            UIWidget__set_color((UIWidget_o *)IsNullOrEmpty, v24, 0);
            IsNullOrEmpty = (UnityEngine_Component_o *)this->fields.titleLevelSp;
            if ( IsNullOrEmpty )
            {
              IsNullOrEmpty = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(IsNullOrEmpty, 0);
              if ( this->fields.titleLevelStrSp )
              {
                v13 = (UnityEngine_GameObject_o *)IsNullOrEmpty;
                IsNullOrEmpty = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                             (UnityEngine_Component_o *)this->fields.titleLevelStrSp,
                                                             0);
                if ( IsNullOrEmpty )
                {
                  LODWORD(v14) = (unsigned int)UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)IsNullOrEmpty,
                                                 0);
                  GameObjectExtensions__SetLocalPositionX(v13, v14, 0);
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  IsNullOrEmpty = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                                               (UnityEngine_Object_o *)Component_object,
                                                               0,
                                                               0);
                  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
                  {
                    if ( Component_object )
                    {
                      v15 = CondensedScaleSprite__GetAfterAdjustWidth((CondensedScaleSprite_o *)Component_object, 0);
                      IsNullOrEmpty = (UnityEngine_Component_o *)this->fields.titleLevelSp;
                      if ( IsNullOrEmpty )
                      {
                        v16 = (float)(SLODWORD(IsNullOrEmpty[7].klass) / 2) + (float)(v15 * -0.5);
LABEL_36:
                        gameObject = UnityEngine_Component__get_gameObject(IsNullOrEmpty, 0);
                        GameObjectExtensions__AddLocalPositionX(gameObject, v16, 0);
                        return;
                      }
                    }
                  }
                  else
                  {
                    IsNullOrEmpty = (UnityEngine_Component_o *)this->fields.titleLevelLb;
                    if ( IsNullOrEmpty )
                    {
                      IsNullOrEmpty = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                                   IsNullOrEmpty,
                                                                   (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
                      titleLevelLb = this->fields.titleLevelLb;
                      if ( titleLevelLb )
                      {
                        v18 = (UnityEngine_Object_o *)IsNullOrEmpty;
                        mWidth = titleLevelLb->fields.mWidth;
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        monitor_low = (float)mWidth;
                        IsNullOrEmpty = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v18, 0, 0);
                        if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
                        {
                          if ( !v18 )
                            goto LABEL_37;
                          if ( monitor_low > (float)SLODWORD(v18[2].monitor) )
                            monitor_low = (float)SLODWORD(v18[2].monitor);
                        }
                        IsNullOrEmpty = (UnityEngine_Component_o *)this->fields.titleLevelSp;
                        if ( IsNullOrEmpty )
                        {
                          v16 = monitor_low * -0.5;
                          goto LABEL_36;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_37:
    sub_1C32E7C(IsNullOrEmpty);
  }
}


void RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass55_0___ctor(
        RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass55_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass55_0___SetItemOfQuest_b__0(
        RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass55_0_o *this,
        const MethodInfo *method)
{
  struct RecommendSupportQuestBoardListViewItemDraw_o *_4__this; // x8
  RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass55_0_o *v3; // x19
  struct RecommendSupportQuestBoardListViewItemDraw_o *v4; // x8
  struct RecommendSupportQuestBoardListViewItemDraw_o *v5; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  v3 = this;
  this = (RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass55_0_o *)_4__this->fields.labelNameSp;
  if ( !this )
    goto LABEL_11;
  this = (RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass55_0_o *)UnityEngine_Behaviour__get_enabled(
                                                                                 (UnityEngine_Behaviour_o *)this,
                                                                                 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v4 = v3->fields.__4__this;
    if ( !v4 )
      goto LABEL_11;
    if ( v4->fields.boardIconQuestId == v3->fields.boardIconQuestIdOld )
    {
      this = (RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass55_0_o *)v4->fields.boardIconTexture;
      if ( this )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0);
        v5 = v3->fields.__4__this;
        if ( v5 )
        {
          this = (RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass55_0_o *)v5->fields.boardIconTexture;
          if ( this )
          {
            UIWidget__set_color((UIWidget_o *)this, v3->fields.baseColor, 0);
            return;
          }
        }
      }
LABEL_11:
      sub_1C32E7C(this);
    }
  }
}


void RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass66_0___ctor(
        RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass66_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass66_0___LoadBoardIconTexture_b__0(
        RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass66_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass66_0_o *v4; // x19
  struct RecommendSupportQuestBoardListViewItemDraw_o *_4__this; // x8
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  RecommendSupportQuestBoardListViewItemDraw_c *v8; // x0
  System_String_o *v9; // x19
  struct RecommendSupportQuestBoardListViewItemDraw_o *v10; // x8
  UnityEngine_Shader_o *v11; // x21
  UnityEngine_Material_o *v12; // x20
  struct RecommendSupportQuestBoardListViewItemDraw_o *v13; // x8
  struct RecommendSupportQuestBoardListViewItemDraw_o *v14; // x8
  struct RecommendSupportQuestBoardListViewItemDraw_o *v15; // x8
  AssetData_o *boardIconAssetData; // x21
  Il2CppObject *Object_object__51111776; // x0

  v4 = this;
  if ( (byte_4C338C9 & 1) == 0 )
  {
    sub_1C32C20(&Method_AssetData_GetObject_Texture2D____78059424);
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Material_TypeInfo);
    sub_1C32C20(&RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&StringLiteral_16533/*"_alpha"*/);
    sub_1C32C20(&StringLiteral_4940/*"Custom/SpriteWithMask"*/);
    this = (RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass66_0_o *)sub_1C32C20(&StringLiteral_16267/*"_MaskTex"*/);
    byte_4C338C9 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_20;
  this = (RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass66_0_o *)System_String__op_Inequality(
                                                                                 v4->fields.loadBoardIconName,
                                                                                 _4__this->fields.boardIconName,
                                                                                 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v10 = v4->fields.__4__this;
    if ( v10 )
    {
      v10->fields.boardIconAssetData = assetData;
      sub_1C32BC4((CGThumbnailListItem_o *)&v10->fields.boardIconAssetData, (int32_t)assetData, v6, v7);
      v11 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4940/*"Custom/SpriteWithMask"*/, 0);
      v12 = (UnityEngine_Material_o *)sub_1C32E6C(UnityEngine_Material_TypeInfo);
      UnityEngine_Material___ctor(v12, v11, 0);
      v13 = v4->fields.__4__this;
      if ( v13 )
      {
        this = (RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass66_0_o *)v13->fields.boardIconTexture;
        if ( this )
        {
          this = (RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass66_0_o *)((__int64 (__fastcall *)(RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass66_0_o *, UnityEngine_Material_o *, Il2CppMethodPointer))this->klass[1].vtable._1_Finalize.method)(
                                                                                         this,
                                                                                         v12,
                                                                                         this->klass[1].vtable._2_GetHashCode.methodPtr);
          v14 = v4->fields.__4__this;
          if ( v14 )
          {
            this = (RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass66_0_o *)v14->fields.boardIconAssetData;
            if ( this )
            {
              this = (RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass66_0_o *)AssetData__GetObject_object__51111776(
                                                                                             (AssetData_o *)this,
                                                                                             v14->fields.boardIconName,
                                                                                             (const MethodInfo_30BE760 *)Method_AssetData_GetObject_Texture2D____78059424);
              if ( v12 )
              {
                UnityEngine_Material__set_mainTexture(v12, (UnityEngine_Texture_o *)this, 0);
                v15 = v4->fields.__4__this;
                if ( v15 )
                {
                  boardIconAssetData = v15->fields.boardIconAssetData;
                  this = (RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass66_0_o *)System_String__Concat_63518544(
                                                                                                 v15->fields.boardIconName,
                                                                                                 (System_String_o *)StringLiteral_16533/*"_alpha"*/,
                                                                                                 0);
                  if ( boardIconAssetData )
                  {
                    Object_object__51111776 = AssetData__GetObject_object__51111776(
                                                boardIconAssetData,
                                                (System_String_o *)this,
                                                (const MethodInfo_30BE760 *)Method_AssetData_GetObject_Texture2D____78059424);
                    UnityEngine_Material__SetTexture(
                      v12,
                      (System_String_o *)StringLiteral_16267/*"_MaskTex"*/,
                      (UnityEngine_Texture_o *)Object_object__51111776,
                      0);
                    this = (RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass66_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                    if ( this )
                    {
                      CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0);
                      ActionExtensions__Call(v4->fields.callback, 0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_20:
    sub_1C32E7C(this);
  }
  v8 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
  if ( !RecommendSupportQuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
    v8 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
  }
  v9 = System_String__Concat_63518544(v8->static_fields->QUEST_BOARD_ICON_TEXTURE_PATH, v4->fields.loadBoardIconName, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(v9, 0);
}