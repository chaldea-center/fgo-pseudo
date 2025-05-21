void __fastcall RecommendSupportQuestBoardListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  struct RecommendSupportQuestBoardListViewItemDraw_StaticFields *static_fields; // x0
  int32_t v22; // w1
  int32_t v23; // w1
  struct RecommendSupportQuestBoardListViewItemDraw_StaticFields *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w1
  struct RecommendSupportQuestBoardListViewItemDraw_StaticFields *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int32_t v31; // w1
  struct RecommendSupportQuestBoardListViewItemDraw_StaticFields *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int32_t v35; // w1
  struct RecommendSupportQuestBoardListViewItemDraw_StaticFields *v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  int32_t v39; // w1
  struct RecommendSupportQuestBoardListViewItemDraw_StaticFields *v40; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  int32_t v43; // w1
  struct RecommendSupportQuestBoardListViewItemDraw_StaticFields *v44; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  struct RecommendSupportQuestBoardListViewItemDraw_StaticFields *v47; // x0
  int32_t v48; // w1
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  int32_t v51; // w1
  struct RecommendSupportQuestBoardListViewItemDraw_StaticFields *v52; // x0
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  int32_t v55; // w1
  struct RecommendSupportQuestBoardListViewItemDraw_StaticFields *v56; // x0
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  __int64 v59; // x0
  __int64 v60; // x1
  __int64 v61; // x2
  const MethodInfo *v62; // x3
  __int64 v63; // x19
  int32_t v64; // w1
  const MethodInfo *v65; // x3
  int32_t v66; // w1
  const MethodInfo *v67; // x3
  int32_t v68; // w1
  const MethodInfo *v69; // x3
  int32_t v70; // w1
  const MethodInfo *v71; // x3
  int32_t v72; // w1
  const MethodInfo *v73; // x3
  int32_t v74; // w1
  const MethodInfo *v75; // x3
  int32_t v76; // w1
  struct RecommendSupportQuestBoardListViewItemDraw_StaticFields *v77; // x0
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  int32_t v80; // w1
  struct RecommendSupportQuestBoardListViewItemDraw_StaticFields *v81; // x0
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  int32_t v84; // w1
  struct RecommendSupportQuestBoardListViewItemDraw_StaticFields *v85; // x0
  int32_t v86; // w2
  const MethodInfo *v87; // x3

  if ( (byte_4B40976 & 1) == 0 )
  {
    sub_1BDB878(&RecommendSupportQuestBoardListViewItemDraw_TypeInfo, v1);
    sub_1BDB878(&string___TypeInfo, v4);
    sub_1BDB878(&StringLiteral_22893/*"quest_board_icon_"*/, v5);
    sub_1BDB878(&StringLiteral_22914/*"questboard_icon_cap{0:D2}"*/, v6);
    sub_1BDB878(&StringLiteral_20537/*"img_questboard_story03mask"*/, v7);
    sub_1BDB878(&StringLiteral_17809/*"chaldea_category_{0}"*/, v8);
    sub_1BDB878(&StringLiteral_20530/*"img_questboard_main_"*/, v9);
    sub_1BDB878(&StringLiteral_19316/*"event_war_"*/, v10);
    sub_1BDB878(&StringLiteral_20539/*"img_questboard_story05mask"*/, v11);
    sub_1BDB878(&StringLiteral_20528/*"img_questboard_hero03"*/, v12);
    sub_1BDB878(&StringLiteral_22892/*"quest_board_"*/, v13);
    sub_1BDB878(&StringLiteral_20525/*"img_questboard_free_"*/, v14);
    sub_1BDB878(&StringLiteral_22894/*"quest_board_mask_"*/, v15);
    sub_1BDB878(&StringLiteral_6284/*"EventUI/QuestBoardIcon/"*/, v16);
    sub_1BDB878(&StringLiteral_20538/*"img_questboard_story04mask"*/, v17);
    sub_1BDB878(&StringLiteral_20536/*"img_questboard_story03"*/, v18);
    sub_1BDB878(&StringLiteral_20515/*"img_quest_unit_{0:D2}"*/, v19);
    sub_1BDB878(&StringLiteral_1/*""*/, v20);
    byte_4B40976 = 1;
  }
  static_fields = RecommendSupportQuestBoardListViewItemDraw_TypeInfo->static_fields;
  static_fields->TITLE_LABEL_BASE_WIDTH = 256;
  v22 = StringLiteral_19316/*"event_war_"*/;
  static_fields->EVENT_WAR_SPNAME_PREFIX = (struct System_String_o *)StringLiteral_19316/*"event_war_"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->EVENT_WAR_SPNAME_PREFIX, v22, v2, v3);
  v23 = StringLiteral_17809/*"chaldea_category_{0}"*/;
  v24 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo->static_fields;
  v24->EVENT_WAR_SUBFOLDER_SPNAME_PREFIX = (struct System_String_o *)StringLiteral_17809/*"chaldea_category_{0}"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&v24->EVENT_WAR_SUBFOLDER_SPNAME_PREFIX, v23, v25, v26);
  v27 = StringLiteral_22892/*"quest_board_"*/;
  v28 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo->static_fields;
  v28->QUEST_BOARD_SPNAME_PREFIX = (struct System_String_o *)StringLiteral_22892/*"quest_board_"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&v28->QUEST_BOARD_SPNAME_PREFIX, v27, v29, v30);
  v31 = StringLiteral_22893/*"quest_board_icon_"*/;
  v32 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo->static_fields;
  v32->QUEST_BOARD_ICON_SPNAME_PREFIX = (struct System_String_o *)StringLiteral_22893/*"quest_board_icon_"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&v32->QUEST_BOARD_ICON_SPNAME_PREFIX, v31, v33, v34);
  v35 = StringLiteral_22894/*"quest_board_mask_"*/;
  v36 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo->static_fields;
  v36->QUEST_BOARD_MASK_SPNAME_PREFIX = (struct System_String_o *)StringLiteral_22894/*"quest_board_mask_"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&v36->QUEST_BOARD_MASK_SPNAME_PREFIX, v35, v37, v38);
  v39 = StringLiteral_6284/*"EventUI/QuestBoardIcon/"*/;
  v40 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo->static_fields;
  v40->QUEST_BOARD_ICON_TEXTURE_PATH = (struct System_String_o *)StringLiteral_6284/*"EventUI/QuestBoardIcon/"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&v40->QUEST_BOARD_ICON_TEXTURE_PATH, v39, v41, v42);
  v43 = StringLiteral_22893/*"quest_board_icon_"*/;
  v44 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo->static_fields;
  v44->QUEST_BOARD_ICON_TEXTURE_PREFIX = (struct System_String_o *)StringLiteral_22893/*"quest_board_icon_"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&v44->QUEST_BOARD_ICON_TEXTURE_PREFIX, v43, v45, v46);
  v47 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo->static_fields;
  v47->QUEST_FACE_MASK_SP_W = 124;
  v48 = StringLiteral_20537/*"img_questboard_story03mask"*/;
  v47->QUEST_STORY_FACE_MASK_SPNAME = (struct System_String_o *)StringLiteral_20537/*"img_questboard_story03mask"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&v47->QUEST_STORY_FACE_MASK_SPNAME, v48, v49, v50);
  v51 = StringLiteral_20538/*"img_questboard_story04mask"*/;
  v52 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo->static_fields;
  v52->QUEST_MAIN_FACE_MASK_SPNAME = (struct System_String_o *)StringLiteral_20538/*"img_questboard_story04mask"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&v52->QUEST_MAIN_FACE_MASK_SPNAME, v51, v53, v54);
  v55 = StringLiteral_20539/*"img_questboard_story05mask"*/;
  v56 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo->static_fields;
  v56->QUEST_EVENT_FACE_MASK_SPNAME = (struct System_String_o *)StringLiteral_20539/*"img_questboard_story05mask"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&v56->QUEST_EVENT_FACE_MASK_SPNAME, v55, v57, v58);
  v59 = sub_1BDB920(string___TypeInfo, 7LL);
  if ( !v59 )
    sub_1BDBAD4(0LL, v60);
  v63 = v59;
  if ( !*(_DWORD *)(v59 + 24) )
    goto LABEL_12;
  v64 = (int)StringLiteral_1/*""*/;
  *(_QWORD *)(v59 + 32) = StringLiteral_1/*""*/;
  sub_1BDB81C((CGThumbnailListItem_o *)(v59 + 32), v64, v61, v62);
  if ( *(_DWORD *)(v63 + 24) <= 1u )
    goto LABEL_12;
  v66 = StringLiteral_20530/*"img_questboard_main_"*/;
  *(_QWORD *)(v63 + 40) = StringLiteral_20530/*"img_questboard_main_"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)(v63 + 40), v66, v61, v65);
  if ( *(_DWORD *)(v63 + 24) <= 2u )
    goto LABEL_12;
  v68 = StringLiteral_20525/*"img_questboard_free_"*/;
  *(_QWORD *)(v63 + 48) = StringLiteral_20525/*"img_questboard_free_"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)(v63 + 48), v68, v61, v67);
  if ( *(_DWORD *)(v63 + 24) <= 3u )
    goto LABEL_12;
  v70 = StringLiteral_20536/*"img_questboard_story03"*/;
  *(_QWORD *)(v63 + 56) = StringLiteral_20536/*"img_questboard_story03"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)(v63 + 56), v70, v61, v69);
  if ( *(_DWORD *)(v63 + 24) <= 4u
    || (v72 = (int)StringLiteral_1/*""*/,
        *(_QWORD *)(v63 + 64) = StringLiteral_1/*""*/,
        sub_1BDB81C((CGThumbnailListItem_o *)(v63 + 64), v72, v61, v71),
        *(_DWORD *)(v63 + 24) <= 5u)
    || (v74 = StringLiteral_20525/*"img_questboard_free_"*/,
        *(_QWORD *)(v63 + 72) = StringLiteral_20525/*"img_questboard_free_"*/,
        sub_1BDB81C((CGThumbnailListItem_o *)(v63 + 72), v74, v61, v73),
        *(_DWORD *)(v63 + 24) <= 6u) )
  {
LABEL_12:
    sub_1BDBADC(v59, v60, v61);
  }
  v76 = StringLiteral_20528/*"img_questboard_hero03"*/;
  *(_QWORD *)(v63 + 80) = StringLiteral_20528/*"img_questboard_hero03"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)(v63 + 80), v76, v61, v75);
  v77 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo->static_fields;
  v77->msQBoardL3Names = (struct System_String_array *)v63;
  sub_1BDB81C((CGThumbnailListItem_o *)&v77->msQBoardL3Names, v63, v78, v79);
  v80 = StringLiteral_22914/*"questboard_icon_cap{0:D2}"*/;
  v81 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo->static_fields;
  v81->CHAPTER_SP_BASE_NAME = (struct System_String_o *)StringLiteral_22914/*"questboard_icon_cap{0:D2}"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&v81->CHAPTER_SP_BASE_NAME, v80, v82, v83);
  v84 = StringLiteral_20515/*"img_quest_unit_{0:D2}"*/;
  v85 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo->static_fields;
  v85->CHAPTER_SP_UNIT_NAME = (struct System_String_o *)StringLiteral_20515/*"img_quest_unit_{0:D2}"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&v85->CHAPTER_SP_UNIT_NAME, v84, v86, v87);
}


void __fastcall RecommendSupportQuestBoardListViewItemDraw___ctor(
        RecommendSupportQuestBoardListViewItemDraw_o *this,
        const MethodInfo *method)
{
  struct System_Int32_array *v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  const MethodInfo *v6; // x3
  il2cpp_array_size_t max_length; // w8

  if ( (byte_4B40975 & 1) == 0 )
  {
    sub_1BDB878(&int___TypeInfo, method);
    byte_4B40975 = 1;
  }
  *(_QWORD *)&this->fields.DEFAULT_SETTING_AREA_SP_POS_Y = 0x1E00000022LL;
  v3 = (struct System_Int32_array *)sub_1BDB920(int___TypeInfo, 2LL);
  if ( !v3 )
    sub_1BDBAD4(0LL, v4);
  max_length = v3->max_length;
  if ( !max_length || (v3->m_Items[1] = 11000, max_length == 1) )
    sub_1BDBADC(v3, v3, v5);
  v3->m_Items[2] = 12000;
  this->fields.parentFolderWarId = v3;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.parentFolderWarId, (int32_t)v3, v5, v6);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall RecommendSupportQuestBoardListViewItemDraw__ConvertToChineseAscii(
        RecommendSupportQuestBoardListViewItemDraw_o *this,
        int32_t n,
        bool isUppercase,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int16 v7; // w23
  unsigned int v8; // w21
  __int16 v9; // w22
  System_Text_StringBuilder_o *v10; // x19
  __int64 v11; // x0
  __int64 v12; // x1
  unsigned int v14; // w8
  unsigned int v15; // w8

  if ( (byte_4B40970 & 1) == 0 )
  {
    sub_1BDB878(&System_Text_StringBuilder_TypeInfo, *(_QWORD *)&n);
    sub_1BDB878(&StringLiteral_1142/*"0"*/, v6);
    byte_4B40970 = 1;
  }
  if ( n <= 0 )
    return (System_String_o *)StringLiteral_1142/*"0"*/;
  if ( isUppercase )
    v7 = 32;
  else
    v7 = 0;
  v8 = n % 0xAu;
  v9 = 96 - v7;
  v10 = (System_Text_StringBuilder_o *)sub_1BDBAC4(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_62650796(v10, 5, 0LL);
  if ( n >= 10 )
  {
    if ( n >= 100 )
    {
      v15 = n / 0x64u % 0xA;
      if ( v15 >= 2 )
      {
        if ( !v10 )
          goto LABEL_25;
        System_Text_StringBuilder__Append_62659772(v10, v9 | v15, 0LL);
      }
      else if ( !v10 )
      {
LABEL_25:
        sub_1BDBAD4(v11, v12);
      }
      System_Text_StringBuilder__Append_62659772(v10, 107 - v7, 0LL);
      v14 = n / 0xAu % 0xA;
    }
    else
    {
      if ( !v10 )
        goto LABEL_25;
      v14 = (unsigned __int8)n / 0xAu % 0xA;
    }
    if ( v14 >= 2 )
      System_Text_StringBuilder__Append_62659772(v10, v9 | v14, 0LL);
    System_Text_StringBuilder__Append_62659772(v10, 106 - v7, 0LL);
    if ( !v8 )
      return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v10->klass->vtable._3_ToString.method)(
                                  v10,
                                  v10->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  }
  else if ( !v10 )
  {
    goto LABEL_25;
  }
  System_Text_StringBuilder__Append_62659772(v10, v9 | v8, 0LL);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v10->klass->vtable._3_ToString.method)(
                              v10,
                              v10->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportQuestBoardListViewItemDraw__DispSettingQuestInfo(
        RecommendSupportQuestBoardListViewItemDraw_o *this,
        bool isSetting,
        int32_t index,
        System_String_o *svtName,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  UnityEngine_Object_o *settingQuestLb; // x23
  UnityEngine_Component_o *v18; // x1
  UnityEngine_Component_o *gameObject; // x0
  UILabel_o *v20; // x23
  System_String_o *v21; // x24
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  Il2CppObject *v25; // x0
  UnityEngine_Object_o *settingServantLb; // x23
  UILabel_o *v27; // x23
  bool IsNullOrEmpty; // w24
  System_String_o *v29; // x0
  UnityEngine_Object_o *settingBackSp; // x22
  UISprite_o *v31; // x21
  UnityEngine_Object_o *removeSp; // x21
  UnityEngine_GameObject_o *v33; // x20
  int v34; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B40974 & 1) == 0 )
  {
    sub_1BDB878(&AtlasManager_TypeInfo, isSetting);
    sub_1BDB878(&int_TypeInfo, v9);
    sub_1BDB878(&LocalizationManager_TypeInfo, v10);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v11);
    sub_1BDB878(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v12);
    sub_1BDB878(&StringLiteral_11036/*"RECOMMEND_SUPPORT_QUEST_SELECT_SETTING_SERVANT"*/, v13);
    sub_1BDB878(&StringLiteral_11035/*"RECOMMEND_SUPPORT_QUEST_SELECT_SETTING_INFO"*/, v14);
    sub_1BDB878(&StringLiteral_11032/*"RECOMMEND_SUPPORT_QUEST_SELECT_NO_SETTING_SERVANT"*/, v15);
    sub_1BDB878(&StringLiteral_17702/*"caldeagate_notice"*/, v16);
    byte_4B40974 = 1;
  }
  settingQuestLb = (UnityEngine_Object_o *)this->fields.settingQuestLb;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(settingQuestLb, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.settingQuestLb;
    if ( !gameObject )
      goto LABEL_40;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_40;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isSetting, 0LL);
    v20 = this->fields.settingQuestLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_11035/*"RECOMMEND_SUPPORT_QUEST_SELECT_SETTING_INFO"*/, 0LL);
    v34 = index + 1;
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34, v22, v23, v24);
    gameObject = (UnityEngine_Component_o *)System_String__Format(v21, v25, 0LL);
    if ( !v20 )
      goto LABEL_40;
    UILabel__set_text(v20, (System_String_o *)gameObject, 0LL);
  }
  settingServantLb = (UnityEngine_Object_o *)this->fields.settingServantLb;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(settingServantLb, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.settingServantLb;
    if ( !gameObject )
      goto LABEL_40;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_40;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isSetting, 0LL);
    v27 = this->fields.settingServantLb;
    IsNullOrEmpty = System_String__IsNullOrEmpty(svtName, 0LL);
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( IsNullOrEmpty )
      {
LABEL_19:
        gameObject = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11032/*"RECOMMEND_SUPPORT_QUEST_SELECT_NO_SETTING_SERVANT"*/, 0LL);
LABEL_22:
        v18 = gameObject;
        if ( !v27 )
          goto LABEL_40;
        UILabel__set_text(v27, (System_String_o *)gameObject, 0LL);
        goto LABEL_24;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( IsNullOrEmpty )
        goto LABEL_19;
    }
    v29 = LocalizationManager__Get((System_String_o *)StringLiteral_11036/*"RECOMMEND_SUPPORT_QUEST_SELECT_SETTING_SERVANT"*/, 0LL);
    gameObject = (UnityEngine_Component_o *)System_String__Format(v29, (Il2CppObject *)svtName, 0LL);
    goto LABEL_22;
  }
LABEL_24:
  settingBackSp = (UnityEngine_Object_o *)this->fields.settingBackSp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(settingBackSp, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.settingBackSp;
    if ( !gameObject )
      goto LABEL_40;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_40;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isSetting, 0LL);
    v31 = this->fields.settingBackSp;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetPartyOrganizationImage(v31, (System_String_o *)StringLiteral_17702/*"caldeagate_notice"*/, 0LL);
  }
  removeSp = (UnityEngine_Object_o *)this->fields.removeSp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(removeSp, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.removeSp;
    if ( gameObject )
    {
      v33 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)gameObject, 0LL);
      gameObject = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
      if ( gameObject )
      {
        if ( v33 )
        {
          UnityEngine_GameObject__SetActive(v33, LODWORD(gameObject[5].klass) == index, 0LL);
          return;
        }
      }
    }
LABEL_40:
    sub_1BDBAD4(gameObject, v18);
  }
}


System_String_o *__fastcall RecommendSupportQuestBoardListViewItemDraw__GetDispQuestName(
        RecommendSupportQuestBoardListViewItemDraw_o *this,
        QuestEntity_o *questEnt,
        int32_t questType,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  RecommendSupportQuestBoardListViewItemDraw_o *v9; // x20
  Il2CppObject *Master_object; // x21
  Il2CppObject *BattleName; // x1

  if ( (byte_4B4096A & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_ServantMaster___, questEnt);
    sub_1BDB878(&DataManager_TypeInfo, v6);
    sub_1BDB878(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    this = (RecommendSupportQuestBoardListViewItemDraw_o *)sub_1BDB878(&StringLiteral_25175/*"{0}"*/, v8);
    byte_4B4096A = 1;
  }
  if ( !questEnt )
    goto LABEL_14;
  this = (RecommendSupportQuestBoardListViewItemDraw_o *)QuestEntity__getQuestName(questEnt, 0LL);
  v9 = this;
  if ( (unsigned int)questType <= 5 && ((1 << questType) & 0x2C) != 0 )
  {
    if ( !this )
      goto LABEL_14;
    if ( System_String__Contains((System_String_o *)this, (System_String_o *)StringLiteral_25175/*"{0}"*/, 0LL) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantMaster___);
      this = (RecommendSupportQuestBoardListViewItemDraw_o *)QuestEntity__getServantId(questEnt, 0LL);
      if ( Master_object )
      {
        this = (RecommendSupportQuestBoardListViewItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                                 (int32_t)this,
                                                                 (const MethodInfo_32E1E3C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( this )
        {
          BattleName = (Il2CppObject *)ServantEntity__getBattleName((ServantEntity_o *)this, 0, -1, 0LL);
          return System_String__Format((System_String_o *)v9, BattleName, 0LL);
        }
      }
LABEL_14:
      sub_1BDBAD4(this, questEnt);
    }
  }
  return (System_String_o *)v9;
}


System_String_o *__fastcall RecommendSupportQuestBoardListViewItemDraw__GetEventAddBannerSpriteName(
        RecommendSupportQuestBoardListViewItemDraw_o *this,
        EventEntity_o *eventEnt,
        int32_t warId,
        bool isActiveEventWar,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  Il2CppObject *Master_object; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  __int64 v16; // x21
  EventAddEntity_o *OverwriteEventAddEntity; // x0
  WarEntity_o *Entity; // x0
  int32_t PrioredBannerId; // w0
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  RecommendSupportQuestBoardListViewItemDraw_c *v23; // x8
  int v24; // w19
  System_String_o *EVENT_WAR_SUBFOLDER_SPNAME_PREFIX; // x20
  Il2CppObject *v26; // x0
  RecommendSupportQuestBoardListViewItemDraw_c *v28; // x0
  System_String_o *EVENT_WAR_SPNAME_PREFIX; // x19
  System_String_o *v30; // x0
  int v31; // [xsp+8h] [xbp-38h] BYREF
  int32_t overwriteId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B4096E & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_EventAddMaster___, eventEnt);
    sub_1BDB878(&Method_DataManager_GetMaster_WarMaster___, v8);
    sub_1BDB878(&DataManager_TypeInfo, v9);
    sub_1BDB878(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v10);
    sub_1BDB878(&int_TypeInfo, v11);
    sub_1BDB878(&RecommendSupportQuestBoardListViewItemDraw_TypeInfo, v12);
    byte_4B4096E = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_EventAddMaster___);
  if ( !eventEnt || !Master_object )
    goto LABEL_32;
  if ( isActiveEventWar )
    v15 = 4;
  else
    v15 = 5;
  if ( isActiveEventWar )
    v16 = 60LL;
  else
    v16 = 56LL;
  OverwriteEventAddEntity = EventAddMaster__getOverwriteEventAddEntity(
                              (EventAddMaster_o *)Master_object,
                              eventEnt->fields.id,
                              v15,
                              0LL);
  overwriteId = *(_DWORD *)((char *)&eventEnt->klass + v16);
  if ( OverwriteEventAddEntity )
    overwriteId = OverwriteEventAddEntity->fields.overwriteId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !Master_object )
    goto LABEL_32;
  Entity = (WarEntity_o *)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                            warId,
                            (const MethodInfo_32E1E3C *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( Entity
    && Entity->fields.parentWarId
    && Entity->fields.eventId == eventEnt->fields.id
    && WarEntity__HasFlag(Entity, 0x80000, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_WarMaster___);
    if ( Master_object )
    {
      Master_object = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                        warId,
                        (const MethodInfo_32E1E3C *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
      if ( Master_object )
      {
        PrioredBannerId = WarEntity__GetPrioredBannerId((WarEntity_o *)Master_object, 0LL);
        v23 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
        overwriteId = PrioredBannerId;
        v24 = PrioredBannerId;
        if ( !RecommendSupportQuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
          v23 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
        }
        EVENT_WAR_SUBFOLDER_SPNAME_PREFIX = v23->static_fields->EVENT_WAR_SUBFOLDER_SPNAME_PREFIX;
        v31 = v24;
        v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31, v20, v21, v22);
        return System_String__Format(EVENT_WAR_SUBFOLDER_SPNAME_PREFIX, v26, 0LL);
      }
    }
LABEL_32:
    sub_1BDBAD4(Master_object, v14);
  }
  v28 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
  if ( !RecommendSupportQuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
    v28 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
  }
  EVENT_WAR_SPNAME_PREFIX = v28->static_fields->EVENT_WAR_SPNAME_PREFIX;
  v30 = System_Int32__ToString((int32_t)&overwriteId, 0LL);
  return System_String__Concat_62572260(EVENT_WAR_SPNAME_PREFIX, v30, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall RecommendSupportQuestBoardListViewItemDraw__GetFaceMaskSpriteName(
        RecommendSupportQuestBoardListViewItemDraw_o *this,
        int32_t questType,
        const MethodInfo *method)
{
  __int64 v4; // x1
  System_String_o **v5; // x8
  RecommendSupportQuestBoardListViewItemDraw_c *v6; // x0
  __int64 v7; // x8

  if ( (byte_4B40969 & 1) == 0 )
  {
    sub_1BDB878(&RecommendSupportQuestBoardListViewItemDraw_TypeInfo, *(_QWORD *)&questType);
    sub_1BDB878(&StringLiteral_1/*""*/, v4);
    byte_4B40969 = 1;
  }
  v5 = (System_String_o **)&StringLiteral_1/*""*/;
  switch ( questType )
  {
    case 1:
      v6 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
      if ( !RecommendSupportQuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
        v6 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
      }
      v7 = 80LL;
      goto LABEL_13;
    case 2:
    case 5:
      v6 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
      if ( !RecommendSupportQuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
        v6 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
      }
      v7 = 88LL;
      goto LABEL_13;
    case 3:
      v6 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
      if ( !RecommendSupportQuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
        v6 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
      }
      v7 = 72LL;
LABEL_13:
      v5 = (System_String_o **)((char *)v6->static_fields + v7);
      break;
    default:
      return *v5;
  }
  return *v5;
}


System_String_o *__fastcall RecommendSupportQuestBoardListViewItemDraw__GetQuestIconName(
        RecommendSupportQuestBoardListViewItemDraw_o *this,
        QuestEntity_o *questEnt,
        int32_t questType,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t v9; // w19
  int32_t iconId; // t1
  RecommendSupportQuestBoardListViewItemDraw_c *v11; // x0
  System_String_o *QUEST_BOARD_ICON_SPNAME_PREFIX; // x20
  System_String_o *v13; // x1
  __int64 *v15; // x8

  if ( (byte_4B4096C & 1) == 0 )
  {
    sub_1BDB878(&RecommendSupportQuestBoardListViewItemDraw_TypeInfo, questEnt);
    sub_1BDB878(&StringLiteral_20544/*"img_questtxt_free"*/, v6);
    sub_1BDB878(&StringLiteral_20543/*"img_questtxt_event"*/, v7);
    this = (RecommendSupportQuestBoardListViewItemDraw_o *)sub_1BDB878(&StringLiteral_1/*""*/, v8);
    byte_4B4096C = 1;
  }
  if ( !questEnt )
    sub_1BDBAD4(this, questEnt);
  iconId = questEnt->fields.iconId;
  v9 = (_DWORD)questEnt + 68;
  if ( iconId < 1 )
  {
    if ( questType == 5 )
    {
      v15 = &StringLiteral_20543/*"img_questtxt_event"*/;
    }
    else if ( questType == 2 )
    {
      v15 = &StringLiteral_20544/*"img_questtxt_free"*/;
    }
    else
    {
      v15 = (__int64 *)&StringLiteral_1/*""*/;
    }
    return (System_String_o *)*v15;
  }
  else
  {
    v11 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
    if ( !RecommendSupportQuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
      v11 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
    }
    QUEST_BOARD_ICON_SPNAME_PREFIX = v11->static_fields->QUEST_BOARD_ICON_SPNAME_PREFIX;
    v13 = System_Int32__ToString(v9, 0LL);
    return System_String__Concat_62572260(QUEST_BOARD_ICON_SPNAME_PREFIX, v13, 0LL);
  }
}


System_String_o *__fastcall RecommendSupportQuestBoardListViewItemDraw__GetQuestIconNameForMainType(
        RecommendSupportQuestBoardListViewItemDraw_o *this,
        QuestEntity_o *questEnt,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  int32_t v7; // w20
  int32_t iconId; // w21
  RecommendSupportQuestBoardListViewItemDraw_c *v9; // x0
  struct RecommendSupportQuestBoardListViewItemDraw_StaticFields *static_fields; // x8
  System_String_o *QUEST_BOARD_ICON_SPNAME_PREFIX; // x19
  System_String_o *v12; // x0
  System_String_o *CHAPTER_SP_BASE_NAME; // x20
  Il2CppObject *v15; // x0
  int32_t chapterId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B4096D & 1) == 0 )
  {
    sub_1BDB878(&int_TypeInfo, questEnt);
    this = (RecommendSupportQuestBoardListViewItemDraw_o *)sub_1BDB878(
                                                             &RecommendSupportQuestBoardListViewItemDraw_TypeInfo,
                                                             v6);
    byte_4B4096D = 1;
  }
  if ( !questEnt )
    sub_1BDBAD4(this, questEnt);
  v7 = (_DWORD)questEnt + 68;
  iconId = questEnt->fields.iconId;
  v9 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
  if ( !RecommendSupportQuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
    v9 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
  }
  static_fields = v9->static_fields;
  if ( iconId < 1 )
  {
    CHAPTER_SP_BASE_NAME = static_fields->CHAPTER_SP_BASE_NAME;
    chapterId = questEnt->fields.chapterId;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &chapterId, method, v3, v4);
    return System_String__Format(CHAPTER_SP_BASE_NAME, v15, 0LL);
  }
  else
  {
    QUEST_BOARD_ICON_SPNAME_PREFIX = static_fields->QUEST_BOARD_ICON_SPNAME_PREFIX;
    v12 = System_Int32__ToString(v7, 0LL);
    return System_String__Concat_62572260(QUEST_BOARD_ICON_SPNAME_PREFIX, v12, 0LL);
  }
}


bool __fastcall RecommendSupportQuestBoardListViewItemDraw__IsDispQuestName(
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall RecommendSupportQuestBoardListViewItemDraw__IsMainWar(
        RecommendSupportQuestBoardListViewItemDraw_o *this,
        int32_t warId,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  BalanceConfig_c *v7; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8

  if ( (byte_4B40968 & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, *(_QWORD *)&warId);
    sub_1BDB878(&Method_System_Linq_Enumerable_Contains_int___, v6);
    byte_4B40968 = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  static_fields = v7->static_fields;
  if ( static_fields->FesWarId == warId )
    return 1;
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    static_fields = BalanceConfig_TypeInfo->static_fields;
  }
  return (eventId == 0) | System_Linq_Enumerable__Contains_int_(
                            (System_Collections_Generic_IEnumerable_TSource__o *)static_fields->MainChaptersWithEventId,
                            warId,
                            (const MethodInfo_304CA50 *)Method_System_Linq_Enumerable_Contains_int___);
}


void __fastcall RecommendSupportQuestBoardListViewItemDraw__LoadBoardIconTexture(
        RecommendSupportQuestBoardListViewItemDraw_o *this,
        QuestEntity_o *questEntity,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x20
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  RecommendSupportQuestBoardListViewItemDraw_c *v24; // x0
  int32_t iconId; // w9
  Il2CppObject *QUEST_BOARD_ICON_TEXTURE_PREFIX; // x21
  Il2CppObject *v27; // x0
  struct System_String_o *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct System_String_o *boardIconName; // x1
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  System_String_o *v34; // x19
  AssetLoader_LoadEndDataHandler_o *v35; // x21
  int32_t v36; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4B40971 & 1) == 0 )
  {
    sub_1BDB878(&AssetManager_TypeInfo, questEntity);
    sub_1BDB878(&int_TypeInfo, v7);
    sub_1BDB878(&AssetLoader_LoadEndDataHandler_TypeInfo, v8);
    sub_1BDB878(&RecommendSupportQuestBoardListViewItemDraw_TypeInfo, v9);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1BDB878(
      &Method_RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass66_0__LoadBoardIconTexture_b__0__,
      v11);
    sub_1BDB878(&RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass66_0_TypeInfo, v12);
    byte_4B40971 = 1;
  }
  v13 = sub_1BDBAC4(RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass66_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_14;
  *(_QWORD *)(v13 + 24) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v13 + 24), (int32_t)this, v16, v17);
  *(_QWORD *)(v13 + 32) = callback;
  sub_1BDB81C((CGThumbnailListItem_o *)(v13 + 32), (int32_t)callback, v18, v19);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
  RecommendSupportQuestBoardListViewItemDraw__ReleaseBoardIconTexture(this, v20);
  if ( !questEntity )
    goto LABEL_14;
  this->fields.boardIconQuestId = questEntity->fields.id;
  v24 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
  if ( !RecommendSupportQuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
    v24 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
  }
  iconId = questEntity->fields.iconId;
  QUEST_BOARD_ICON_TEXTURE_PREFIX = (Il2CppObject *)v24->static_fields->QUEST_BOARD_ICON_TEXTURE_PREFIX;
  v36 = iconId;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36, v21, v22, v23);
  v28 = System_String__Concat(QUEST_BOARD_ICON_TEXTURE_PREFIX, v27, 0LL);
  this->fields.boardIconName = v28;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.boardIconName, (int32_t)v28, v29, v30);
  boardIconName = this->fields.boardIconName;
  *(_QWORD *)(v13 + 16) = boardIconName;
  sub_1BDB81C((CGThumbnailListItem_o *)(v13 + 16), (int32_t)boardIconName, v32, v33);
  v34 = System_String__Concat_62572260(
          RecommendSupportQuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_ICON_TEXTURE_PATH,
          this->fields.boardIconName,
          0LL);
  v35 = (AssetLoader_LoadEndDataHandler_o *)sub_1BDBAC4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v35,
    (Il2CppObject *)v13,
    Method_RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass66_0__LoadBoardIconTexture_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v34, v35, 1, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
      return;
    }
LABEL_14:
    sub_1BDBAD4(Instance, v15);
  }
}


// attributes: thunk
void __fastcall RecommendSupportQuestBoardListViewItemDraw__OnDestroy(
        RecommendSupportQuestBoardListViewItemDraw_o *this,
        const MethodInfo *method)
{
  RecommendSupportQuestBoardListViewItemDraw__ReleaseBoardIconTexture(this, method);
}


void __fastcall RecommendSupportQuestBoardListViewItemDraw__ReleaseBoardIconTexture(
        RecommendSupportQuestBoardListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  RecommendSupportQuestBoardListViewItemDraw_c *v4; // x0
  System_String_o *v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4B40972 & 1) == 0 )
  {
    sub_1BDB878(&AssetManager_TypeInfo, method);
    sub_1BDB878(&RecommendSupportQuestBoardListViewItemDraw_TypeInfo, v3);
    byte_4B40972 = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.boardIconName, 0LL) )
  {
    v4 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
    if ( !RecommendSupportQuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
      v4 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
    }
    v5 = System_String__Concat_62572260(
           v4->static_fields->QUEST_BOARD_ICON_TEXTURE_PATH,
           this->fields.boardIconName,
           0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v5, 0LL);
    this->fields.boardIconAssetData = 0LL;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.boardIconAssetData, 0, v6, v7);
    this->fields.boardIconName = 0LL;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.boardIconName, 0, v8, v9);
  }
}


void __fastcall RecommendSupportQuestBoardListViewItemDraw__SetChapterSubIdDisp(
        RecommendSupportQuestBoardListViewItemDraw_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *questInfo,
        const MethodInfo *method)
{
  RecommendSupportQuestBoardListViewItemDraw_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct QuestEntity_o *questEntity; // x21
  WarEntity_o *warEntity; // x22
  const MethodInfo *v10; // x3
  _BOOL4 HasFlag; // w23
  _BOOL8 IsChapterSubIdJapaneseNumeralsNormal; // x0
  UILabel_o *labelSubSectionNumLb; // x22
  RecommendSupportQuestBoardListViewItemDraw_o *gameObject; // x0
  UISprite_o *labelChapterSp; // x23
  UnityEngine_GameObject_o *v16; // x22
  const MethodInfo *v17; // x2
  System_String_o *QuestIconNameForMainType; // x21
  struct UISprite_o *labelBoardSectionSp; // x8
  int v20; // w22
  UnityEngine_GameObject_o *v21; // x0
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  RecommendSupportQuestBoardListViewItemDraw_c *v25; // x8
  UISprite_o *v26; // x21
  UnityEngine_GameObject_o *v27; // x20
  System_String_o *CHAPTER_SP_UNIT_NAME; // x23
  Il2CppObject *v29; // x0
  System_String_o *v30; // x22
  int v31; // [xsp+Ch] [xbp-44h] BYREF

  v4 = this;
  if ( (byte_4B4096B & 1) == 0 )
  {
    sub_1BDB878(&AtlasManager_TypeInfo, questInfo);
    sub_1BDB878(&int_TypeInfo, v5);
    sub_1BDB878(&RecommendSupportQuestBoardListViewItemDraw_TypeInfo, v6);
    this = (RecommendSupportQuestBoardListViewItemDraw_o *)sub_1BDB878(&StringLiteral_20512/*"img_quest_setsu"*/, v7);
    byte_4B4096B = 1;
  }
  if ( !questInfo )
    goto LABEL_39;
  this = (RecommendSupportQuestBoardListViewItemDraw_o *)v4->fields.labelSubSectionNumLb;
  if ( !this )
    goto LABEL_39;
  questEntity = questInfo->fields.questEntity;
  this = (RecommendSupportQuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL);
  if ( !this )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  if ( !questEntity )
    goto LABEL_39;
  if ( questEntity->fields.iconId <= 0
    && !QuestEntity__HasFlag(questEntity, 0x2000000000000000LL, 0LL)
    && System_String__IsNullOrEmpty(questEntity->fields.chapterSubStr, 0LL) )
  {
    warEntity = questInfo->fields.warEntity;
    HasFlag = QuestEntity__HasFlag(questEntity, 0x40000LL, 0LL);
    if ( warEntity )
      IsChapterSubIdJapaneseNumeralsNormal = WarEntity__IsChapterSubIdJapaneseNumeralsNormal(warEntity, 0LL);
    else
      IsChapterSubIdJapaneseNumeralsNormal = 0LL;
    labelSubSectionNumLb = v4->fields.labelSubSectionNumLb;
    if ( HasFlag || IsChapterSubIdJapaneseNumeralsNormal )
    {
      this = (RecommendSupportQuestBoardListViewItemDraw_o *)RecommendSupportQuestBoardListViewItemDraw__ConvertToChineseAscii(
                                                               (RecommendSupportQuestBoardListViewItemDraw_o *)IsChapterSubIdJapaneseNumeralsNormal,
                                                               questEntity->fields.chapterSubId,
                                                               IsChapterSubIdJapaneseNumeralsNormal,
                                                               v10);
      if ( !labelSubSectionNumLb )
        goto LABEL_39;
    }
    else
    {
      this = (RecommendSupportQuestBoardListViewItemDraw_o *)System_Int32__ToString((int)questEntity + 116, 0LL);
      if ( !labelSubSectionNumLb )
        goto LABEL_39;
    }
    UILabel__set_text(labelSubSectionNumLb, (System_String_o *)this, 0LL);
    this = (RecommendSupportQuestBoardListViewItemDraw_o *)v4->fields.labelSubSectionNumLb;
    if ( !this )
      goto LABEL_39;
    this = (RecommendSupportQuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)this,
                                                             0LL);
    if ( !this )
      goto LABEL_39;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  }
  this = (RecommendSupportQuestBoardListViewItemDraw_o *)v4->fields.labelChapterSp;
  if ( !this )
    goto LABEL_39;
  gameObject = (RecommendSupportQuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)this,
                                                                 0LL);
  labelChapterSp = v4->fields.labelChapterSp;
  v16 = (UnityEngine_GameObject_o *)gameObject;
  QuestIconNameForMainType = RecommendSupportQuestBoardListViewItemDraw__GetQuestIconNameForMainType(
                               gameObject,
                               questEntity,
                               v17);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  this = (RecommendSupportQuestBoardListViewItemDraw_o *)AtlasManager__SetEventUI(
                                                           labelChapterSp,
                                                           QuestIconNameForMainType,
                                                           0LL);
  if ( !v16 )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive(v16, (unsigned __int8)this & 1, 0LL);
  this = (RecommendSupportQuestBoardListViewItemDraw_o *)v4->fields.labelChapterSp;
  if ( !this )
    goto LABEL_39;
  ((void (__fastcall *)(RecommendSupportQuestBoardListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
    this,
    this->klass[2]._1.interopData);
  this = (RecommendSupportQuestBoardListViewItemDraw_o *)questInfo->fields.warEntity;
  if ( !this )
    goto LABEL_39;
  this = (RecommendSupportQuestBoardListViewItemDraw_o *)WarEntity__GetQuestBoardSectionId((WarEntity_o *)this, 0LL);
  labelBoardSectionSp = v4->fields.labelBoardSectionSp;
  if ( (_DWORD)this )
  {
    if ( labelBoardSectionSp )
    {
      v20 = (int)this;
      v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4->fields.labelBoardSectionSp, 0LL);
      v25 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
      v26 = v4->fields.labelBoardSectionSp;
      v27 = v21;
      if ( !RecommendSupportQuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
        v25 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
      }
      CHAPTER_SP_UNIT_NAME = v25->static_fields->CHAPTER_SP_UNIT_NAME;
      v31 = v20;
      v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31, v22, v23, v24);
      v30 = System_String__Format(CHAPTER_SP_UNIT_NAME, v29, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      this = (RecommendSupportQuestBoardListViewItemDraw_o *)AtlasManager__SetEventUI(v26, v30, 0LL);
      if ( v27 )
      {
        UnityEngine_GameObject__SetActive(v27, (unsigned __int8)this & 1, 0LL);
        goto LABEL_37;
      }
    }
LABEL_39:
    sub_1BDBAD4(this, questInfo);
  }
  if ( !labelBoardSectionSp )
    goto LABEL_39;
  UISprite__set_atlas(v4->fields.labelBoardSectionSp, v4->fields.terminalAtlas, 0LL);
  this = (RecommendSupportQuestBoardListViewItemDraw_o *)v4->fields.labelBoardSectionSp;
  if ( !this )
    goto LABEL_39;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20512/*"img_quest_setsu"*/, 0LL);
LABEL_37:
  this = (RecommendSupportQuestBoardListViewItemDraw_o *)v4->fields.labelBoardSectionSp;
  if ( !this )
    goto LABEL_39;
  ((void (__fastcall *)(RecommendSupportQuestBoardListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
    this,
    this->klass[2]._1.interopData);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall RecommendSupportQuestBoardListViewItemDraw__SetFaceImage(
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
  __int64 v16; // x1
  int32_t charaIconId; // w24
  UISprite_o *labelFaceIcon; // x24
  int32_t ServantId; // w25
  int32_t LimitCount; // w26
  int32_t v21; // w22
  int32_t bannerId; // t1
  RecommendSupportQuestBoardListViewItemDraw_c *v23; // x0
  System_String_o *QUEST_BOARD_MASK_SPNAME_PREFIX; // x21
  System_String_o *v25; // x0
  UISpriteData_o *Sprite; // x21
  UnityEngine_Color_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = baseColor.fields.a;
  b = baseColor.fields.b;
  g = baseColor.fields.g;
  r = baseColor.fields.r;
  v15 = this;
  if ( (byte_4B4096F & 1) == 0 )
  {
    sub_1BDB878(&AtlasManager_TypeInfo, questEnt);
    this = (RecommendSupportQuestBoardListViewItemDraw_o *)sub_1BDB878(
                                                             &RecommendSupportQuestBoardListViewItemDraw_TypeInfo,
                                                             v16);
    byte_4B4096F = 1;
  }
  if ( !questEnt )
    goto LABEL_23;
  this = (RecommendSupportQuestBoardListViewItemDraw_o *)v15->fields.labelFaceObj;
  if ( !this )
    goto LABEL_23;
  charaIconId = questEnt->fields.charaIconId;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, charaIconId > 0, 0LL);
  if ( charaIconId < 1 )
    return 0;
  labelFaceIcon = v15->fields.labelFaceIcon;
  ServantId = QuestEntity__getServantId(questEnt, 0LL);
  LimitCount = QuestEntity__getLimitCount(questEnt, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetFaceImage(labelFaceIcon, ServantId, LimitCount, 1, 0LL, 0LL);
  this = (RecommendSupportQuestBoardListViewItemDraw_o *)v15->fields.labelFaceIcon;
  if ( !this )
    goto LABEL_23;
  v28.fields.r = r;
  v28.fields.g = g;
  v28.fields.b = b;
  v28.fields.a = a;
  UIWidget__set_color((UIWidget_o *)this, v28, 0LL);
  if ( !maskSprite )
    goto LABEL_23;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)maskSprite, 1, 0LL);
  v29.fields.r = r;
  v29.fields.g = g;
  v29.fields.b = b;
  v29.fields.a = a;
  UIWidget__set_color((UIWidget_o *)maskSprite, v29, 0LL);
  bannerId = questEnt->fields.bannerId;
  v21 = (_DWORD)questEnt + 64;
  if ( bannerId < 1 )
  {
    UISprite__set_atlas(maskSprite, v15->fields.terminalAtlas, 0LL);
    UISprite__set_spriteName(maskSprite, maskSpriteName, 0LL);
  }
  else
  {
    v23 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
    if ( !RecommendSupportQuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
      v23 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
    }
    QUEST_BOARD_MASK_SPNAME_PREFIX = v23->static_fields->QUEST_BOARD_MASK_SPNAME_PREFIX;
    v25 = System_Int32__ToString(v21, 0LL);
    maskSpriteName = System_String__Concat_62572260(QUEST_BOARD_MASK_SPNAME_PREFIX, v25, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(maskSprite, maskSpriteName, 0LL);
  }
  this = (RecommendSupportQuestBoardListViewItemDraw_o *)maskSprite->fields.mAtlas;
  if ( !this )
    goto LABEL_23;
  Sprite = UIAtlas__GetSprite((UIAtlas_o *)this, maskSpriteName, 0LL);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)maskSprite, Sprite != 0LL, 0LL);
  this = (RecommendSupportQuestBoardListViewItemDraw_o *)UnityEngine_Behaviour__get_enabled(
                                                           (UnityEngine_Behaviour_o *)maskSprite,
                                                           0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( Sprite )
    {
      Sprite->fields.width = maskWidth - 1;
      return 1;
    }
LABEL_23:
    sub_1BDBAD4(this, questEnt);
  }
  return 1;
}


void __fastcall RecommendSupportQuestBoardListViewItemDraw__SetItem(
        RecommendSupportQuestBoardListViewItemDraw_o *this,
        RecommendSupportQuestBoardListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x21
  __int64 v7; // x1
  UnityEngine_Component_o *baseSprite; // x0
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x3
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( item )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !byte_4B3E916 )
    {
      sub_1BDB878(&UnityEngine_Vector3_TypeInfo, v5);
      byte_4B3E916 = 1;
    }
    GameObjectExtensions__SetLocalScale(gameObject, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    baseSprite = (UnityEngine_Component_o *)this->fields.baseSprite;
    if ( !baseSprite )
      goto LABEL_15;
    baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL);
    if ( !baseSprite )
      goto LABEL_15;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, 1, 0LL);
    baseSprite = (UnityEngine_Component_o *)this->fields.baseSprite;
    if ( !baseSprite )
      goto LABEL_15;
    v11.fields.r = 1.0;
    v11.fields.g = 1.0;
    v11.fields.b = 1.0;
    v11.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)baseSprite, v11, 0LL);
    baseSprite = (UnityEngine_Component_o *)this->fields.baseSprite;
    if ( !baseSprite
      || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)baseSprite, 1, 0LL),
          (baseSprite = (UnityEngine_Component_o *)this->fields.classIconRoot) == 0LL)
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, 0, 0LL),
          (baseSprite = (UnityEngine_Component_o *)this->fields.questBoardMessage) == 0LL)
      || (baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL)) == 0LL )
    {
LABEL_15:
      sub_1BDBAD4(baseSprite, v7);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, 0, 0LL);
    if ( item->fields._QuestInfo_k__BackingField )
      RecommendSupportQuestBoardListViewItemDraw__SetItemOfQuest(
        this,
        item,
        item->fields._IsQuestRestriction_k__BackingField,
        v10);
    else
      RecommendSupportQuestBoardListViewItemDraw__SetItemOfArea(this, item, v9);
  }
}


void __fastcall RecommendSupportQuestBoardListViewItemDraw__SetItemOfArea(
        RecommendSupportQuestBoardListViewItemDraw_o *this,
        RecommendSupportQuestBoardListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_GameObject_o *labelObj; // x0
  struct RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *QuestFolderInfo_k__BackingField; // x8
  WarEntity_o *warEntity; // x21
  int32_t id; // w22
  _BOOL8 v17; // x0
  const MethodInfo *v18; // x4
  System_String_o *EventAddBannerSpriteName; // x0
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  Il2CppObject *v23; // x0
  System_String_o *v24; // x8
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  System_String_o *v28; // x22
  UnityEngine_Object_o *settingAreaSp; // x23
  bool v30; // w0
  __int64 v31; // x8
  UISprite_o *baseSprite; // x20
  int32_t PrioredBannerId; // [xsp+4h] [xbp-3Ch] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B40966 & 1) == 0 )
  {
    sub_1BDB878(&AtlasManager_TypeInfo, item);
    sub_1BDB878(&Method_DataManager_GetMaster_EventMaster___, v5);
    sub_1BDB878(&DataManager_TypeInfo, v6);
    sub_1BDB878(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v7);
    sub_1BDB878(&Method_System_Linq_Enumerable_Contains_int___, v8);
    sub_1BDB878(&int_TypeInfo, v9);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v10);
    sub_1BDB878(&StringLiteral_17809/*"chaldea_category_{0}"*/, v11);
    sub_1BDB878(&StringLiteral_22911/*"questboard_cap{0:D3}"*/, v12);
    byte_4B40966 = 1;
  }
  entity = 0LL;
  labelObj = this->fields.labelObj;
  if ( !labelObj )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive(labelObj, 0, 0LL);
  labelObj = this->fields.titleObj;
  if ( !labelObj )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive(labelObj, 0, 0LL);
  labelObj = this->fields.phaseObj;
  if ( !labelObj )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive(labelObj, 0, 0LL);
  labelObj = (UnityEngine_GameObject_o *)this->fields.labelFaceMaskQuestSp;
  if ( !labelObj )
    goto LABEL_35;
  labelObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelObj, 0LL);
  if ( !labelObj )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive(labelObj, 0, 0LL);
  if ( !item )
    goto LABEL_35;
  QuestFolderInfo_k__BackingField = item->fields._QuestFolderInfo_k__BackingField;
  if ( !QuestFolderInfo_k__BackingField )
    goto LABEL_35;
  warEntity = QuestFolderInfo_k__BackingField->fields.warEntity;
  if ( !warEntity )
    goto LABEL_35;
  id = warEntity->fields.id;
  if ( !WarEntity__IsEvent(QuestFolderInfo_k__BackingField->fields.warEntity, 0LL) )
    goto LABEL_17;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  labelObj = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !labelObj )
    goto LABEL_35;
  v17 = DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)labelObj,
          &entity,
          warEntity->fields.eventId,
          (const MethodInfo_32E1E88 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( v17 )
  {
    EventAddBannerSpriteName = RecommendSupportQuestBoardListViewItemDraw__GetEventAddBannerSpriteName(
                                 (RecommendSupportQuestBoardListViewItemDraw_o *)v17,
                                 (EventEntity_o *)entity,
                                 id,
                                 1,
                                 v18);
  }
  else
  {
LABEL_17:
    if ( WarEntity__IsFolder(warEntity, 0LL) && !WarEntity__HasFlag(warEntity, 128, 0LL) )
    {
      PrioredBannerId = WarEntity__GetPrioredBannerId(warEntity, 0LL);
      v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PrioredBannerId, v25, v26, v27);
      v24 = (System_String_o *)StringLiteral_17809/*"chaldea_category_{0}"*/;
    }
    else
    {
      PrioredBannerId = WarEntity__GetPrioredBannerId(warEntity, 0LL);
      v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PrioredBannerId, v20, v21, v22);
      v24 = (System_String_o *)StringLiteral_22911/*"questboard_cap{0:D3}"*/;
    }
    EventAddBannerSpriteName = System_String__Format(v24, v23, 0LL);
  }
  v28 = EventAddBannerSpriteName;
  settingAreaSp = (UnityEngine_Object_o *)this->fields.settingAreaSp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(settingAreaSp, 0LL, 0LL) )
  {
    labelObj = this->fields.settingAreaSp;
    if ( !labelObj )
      goto LABEL_35;
    UnityEngine_GameObject__SetActive(labelObj, item->fields._IsSetting_k__BackingField, 0LL);
    v30 = System_Linq_Enumerable__Contains_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.parentFolderWarId,
            warEntity->fields.id,
            (const MethodInfo_304CA50 *)Method_System_Linq_Enumerable_Contains_int___);
    v31 = 32LL;
    if ( v30 )
      v31 = 36LL;
    GameObjectExtensions__SetLocalPositionY(
      this->fields.settingAreaSp,
      (float)*(int *)((char *)&this->klass + v31),
      0LL);
  }
  baseSprite = this->fields.baseSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBanner(baseSprite, v28, 0LL);
  labelObj = (UnityEngine_GameObject_o *)this->fields.baseSprite;
  if ( !labelObj
    || (((void (__fastcall *)(UnityEngine_GameObject_o *, void *))labelObj->klass[2]._1.typeMetadataHandle)(
          labelObj,
          labelObj->klass[2]._1.interopData),
        (labelObj = (UnityEngine_GameObject_o *)this->fields.baseSprite) == 0LL)
    || (labelObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelObj, 0LL)) == 0LL )
  {
LABEL_35:
    sub_1BDBAD4(labelObj, item);
  }
  UnityEngine_GameObject__SetActive(labelObj, 1, 0LL);
}


void __fastcall RecommendSupportQuestBoardListViewItemDraw__SetItemOfQuest(
        RecommendSupportQuestBoardListViewItemDraw_o *this,
        RecommendSupportQuestBoardListViewItem_o *item,
        bool isQuestRestriction,
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x20
  void *labelObj; // x0
  __int64 v22; // x1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *QuestInfo_k__BackingField; // x23
  QuestEntity_o *questEntity; // x21
  __int64 type; // x24
  int32_t phase; // w22
  UILabel_o *questBoardMessageTitle; // x27
  UnityEngine_Object_o *restrictionMaskSp; // x27
  UnityEngine_Object_o *restrictionMessage; // x27
  const MethodInfo *v32; // x4
  UILabel_o *v33; // x26
  __int64 v34; // x2
  RecommendSupportQuestBoardListViewItemDraw_c *v40; // x0
  System_String_o *QUEST_BOARD_SPNAME_PREFIX; // x27
  System_String_o *v42; // x0
  System_String_o *v43; // x0
  UISprite_o *v44; // x26
  System_String_o *v45; // x27
  UISprite_o *baseSprite; // x26
  __int64 v47; // x8
  System_String_o *v48; // x27
  System_String_o *v49; // x0
  System_String_o *v50; // x27
  UISprite_o *v51; // x26
  __int64 v52; // x8
  System_String_o *RecommendLv_41335888; // x0
  const MethodInfo *v54; // x2
  const MethodInfo *v55; // x2
  RecommendSupportQuestBoardListViewItemDraw_o *v56; // x0
  UISprite_o *labelFaceMaskQuestSp; // x26
  int32_t m_CachedPtr; // w27
  System_String_o *FaceMaskSpriteName; // x0
  const MethodInfo *v60; // x5
  bool v61; // w0
  const MethodInfo *v62; // x3
  UILabel_o *titleNameLb; // x26
  const MethodInfo *v64; // x3
  struct WarEntity_o *warEntity; // x8
  const MethodInfo *v66; // x2
  UISprite_o *labelNameSp; // x23
  RecommendSupportQuestBoardListViewItemDraw_o *v68; // x0
  const MethodInfo *v69; // x3
  System_String_o *QuestIconName; // x24
  System_Action_o *v71; // x23
  const MethodInfo *v72; // x3
  UILabel_o *v73; // x23
  UnityEngine_GameObject_o *phaseObj; // x23
  UnityEngine_GameObject_o *v75; // x25
  UnityEngine_GameObject_o *v76; // x24
  char v77; // w8
  int v78; // w28
  UILabel_o *phaseNumLb; // x23
  System_String_o *v80; // x24
  __int64 v81; // x2
  __int64 v82; // x3
  __int64 v83; // x4
  Il2CppObject *v84; // x25
  __int64 v85; // x2
  __int64 v86; // x3
  __int64 v87; // x4
  Il2CppObject *v88; // x0
  QuestPhaseEntity_o *Entity; // x0
  QuestPhaseEntity_o *v90; // x22
  struct System_Int32_array *classIds; // x8
  bool v92; // w21
  struct ServantClassIconComponent_array *classIcons; // x8
  int max_length; // w9
  int v95; // w23
  struct System_Int32_array *v96; // x22
  il2cpp_array_size_t v97; // w9
  __int64 v98; // x24
  Il2CppClass **v99; // x8
  UnityEngine_Component_o *v100; // x21
  int v101; // [xsp+8h] [xbp-68h] BYREF
  int32_t v102; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4B40967 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, item);
    sub_1BDB878(&AtlasManager_TypeInfo, v7);
    sub_1BDB878(&Method_DataManager_GetMaster_QuestPhaseMaster___, v8);
    sub_1BDB878(&DataManager_TypeInfo, v9);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v10);
    sub_1BDB878(&int_TypeInfo, v11);
    sub_1BDB878(&LocalizationManager_TypeInfo, v12);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v13);
    sub_1BDB878(&RecommendSupportQuestBoardListViewItemDraw_TypeInfo, v14);
    sub_1BDB878(&Method_RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass55_0__SetItemOfQuest_b__0__, v15);
    sub_1BDB878(&RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass55_0_TypeInfo, v16);
    sub_1BDB878(&StringLiteral_11033/*"RECOMMEND_SUPPORT_QUEST_SELECT_PHASE_INFO"*/, v17);
    sub_1BDB878(&StringLiteral_11031/*"RECOMMEND_SUPPORT_QUEST_SELECT_MESSAGE_TITLE"*/, v18);
    sub_1BDB878(&StringLiteral_11034/*"RECOMMEND_SUPPORT_QUEST_SELECT_RESTRICTION"*/, v19);
    byte_4B40967 = 1;
  }
  v20 = sub_1BDBAC4(RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass55_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !v20 )
    goto LABEL_134;
  *(_QWORD *)(v20 + 16) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v20 + 16), (int32_t)this, v23, v24);
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
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)labelObj, 1, 0LL);
  labelObj = this->fields.labelNameSp;
  if ( !labelObj )
    goto LABEL_134;
  labelObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelObj, 0LL);
  if ( !labelObj )
    goto LABEL_134;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)labelObj, 0, 0LL);
  labelObj = this->fields.labelChapterSp;
  if ( !labelObj )
    goto LABEL_134;
  labelObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelObj, 0LL);
  if ( !labelObj )
    goto LABEL_134;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)labelObj, 0, 0LL);
  labelObj = this->fields.labelSubSectionNumLb;
  if ( !labelObj )
    goto LABEL_134;
  labelObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelObj, 0LL);
  if ( !labelObj )
    goto LABEL_134;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)labelObj, 0, 0LL);
  labelObj = this->fields.titleObj;
  if ( !labelObj )
    goto LABEL_134;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)labelObj, 1, 0LL);
  labelObj = this->fields.labelFaceMaskQuestSp;
  if ( !labelObj )
    goto LABEL_134;
  labelObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelObj, 0LL);
  if ( !labelObj )
    goto LABEL_134;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)labelObj, 1, 0LL);
  labelObj = this->fields.questBoardMessage;
  if ( !labelObj )
    goto LABEL_134;
  labelObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelObj, 0LL);
  if ( !labelObj )
    goto LABEL_134;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)labelObj, 1, 0LL);
  labelObj = this->fields.questBoardMessage;
  if ( !labelObj )
    goto LABEL_134;
  UILabel__set_text((UILabel_o *)labelObj, QuestInfo_k__BackingField->fields.message, 0LL);
  questBoardMessageTitle = this->fields.questBoardMessageTitle;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  labelObj = LocalizationManager__Get((System_String_o *)StringLiteral_11031/*"RECOMMEND_SUPPORT_QUEST_SELECT_MESSAGE_TITLE"*/, 0LL);
  if ( !questBoardMessageTitle )
    goto LABEL_134;
  UILabel__set_text(questBoardMessageTitle, (System_String_o *)labelObj, 0LL);
  restrictionMaskSp = (UnityEngine_Object_o *)this->fields.restrictionMaskSp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSp, 0LL, 0LL) )
  {
    labelObj = this->fields.restrictionMaskSp;
    if ( !labelObj )
      goto LABEL_134;
    labelObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelObj, 0LL);
    if ( !labelObj )
      goto LABEL_134;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)labelObj, isQuestRestriction, 0LL);
  }
  restrictionMessage = (UnityEngine_Object_o *)this->fields.restrictionMessage;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMessage, 0LL, 0LL) )
  {
    labelObj = this->fields.restrictionMessage;
    if ( !labelObj )
      goto LABEL_134;
    labelObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelObj, 0LL);
    if ( !labelObj )
      goto LABEL_134;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)labelObj, isQuestRestriction, 0LL);
    v33 = this->fields.restrictionMessage;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    labelObj = LocalizationManager__Get((System_String_o *)StringLiteral_11034/*"RECOMMEND_SUPPORT_QUEST_SELECT_RESTRICTION"*/, 0LL);
    if ( !v33 )
      goto LABEL_134;
    UILabel__set_text(v33, (System_String_o *)labelObj, 0LL);
  }
  RecommendSupportQuestBoardListViewItemDraw__DispSettingQuestInfo(
    this,
    item->fields._IsSetting_k__BackingField,
    item->fields._SettingSelectIndex_k__BackingField,
    item->fields._SettingSvtName_k__BackingField,
    v32);
  __asm { FMOV            V0.4S, #1.0 }
  *(_OWORD *)(v20 + 24) = _Q0;
  if ( questEntity->fields.bannerId < 1 )
  {
    baseSprite = this->fields.baseSprite;
    if ( (unsigned int)type <= 5 && ((1 << type) & 0x26) != 0 )
    {
      labelObj = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
      if ( !RecommendSupportQuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
        labelObj = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
      }
      v47 = *(_QWORD *)(*((_QWORD *)labelObj + 23) + 96LL);
      if ( !v47 )
        goto LABEL_134;
      if ( (unsigned int)type >= *(_DWORD *)(v47 + 24) )
        goto LABEL_142;
      v48 = *(System_String_o **)(v47 + 8 * type + 32);
      v49 = System_Int32__ToString((int)questEntity + 60, 0LL);
      v50 = System_String__Concat_62572260(v48, v49, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetBanner(baseSprite, v50, 0LL);
    }
    else
    {
      if ( !baseSprite )
        goto LABEL_134;
      UISprite__set_atlas(this->fields.baseSprite, this->fields.terminalAtlas, 0LL);
      labelObj = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
      v51 = this->fields.baseSprite;
      if ( !RecommendSupportQuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
        labelObj = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
      }
      v52 = *(_QWORD *)(*((_QWORD *)labelObj + 23) + 96LL);
      if ( !v52 )
        goto LABEL_134;
      if ( (unsigned int)type >= *(_DWORD *)(v52 + 24) )
        goto LABEL_142;
      if ( !v51 )
        goto LABEL_134;
      UISprite__set_spriteName(v51, *(System_String_o **)(v52 + 8LL * (int)type + 32), 0LL);
    }
  }
  else
  {
    v40 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
    if ( !RecommendSupportQuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
      v40 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
    }
    QUEST_BOARD_SPNAME_PREFIX = v40->static_fields->QUEST_BOARD_SPNAME_PREFIX;
    v42 = System_Int32__ToString((int)questEntity + 64, 0LL);
    v43 = System_String__Concat_62572260(QUEST_BOARD_SPNAME_PREFIX, v42, 0LL);
    v44 = this->fields.baseSprite;
    v45 = v43;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    labelObj = (void *)AtlasManager__SetEventUI(v44, v45, 0LL);
    if ( !v44 )
      goto LABEL_134;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v44, (unsigned __int8)labelObj & 1, 0LL);
  }
  labelObj = this->fields.baseSprite;
  if ( !labelObj )
    goto LABEL_134;
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)labelObj + 840LL))(
    labelObj,
    *(_QWORD *)(*(_QWORD *)labelObj + 848LL));
  RecommendLv_41335888 = QuestEntity__getRecommendLv_41335888(questEntity, phase, 0LL);
  RecommendSupportQuestBoardListViewItemDraw__SetRecommendLv(
    this,
    RecommendLv_41335888,
    *(UnityEngine_Color_o *)(v20 + 24),
    v54);
  v56 = (RecommendSupportQuestBoardListViewItemDraw_o *)RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
  labelFaceMaskQuestSp = this->fields.labelFaceMaskQuestSp;
  if ( !RecommendSupportQuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
    v56 = (RecommendSupportQuestBoardListViewItemDraw_o *)RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
  }
  m_CachedPtr = v56->fields.labelFaceObj[2].fields.m_CachedPtr;
  FaceMaskSpriteName = RecommendSupportQuestBoardListViewItemDraw__GetFaceMaskSpriteName(v56, type, v55);
  v61 = RecommendSupportQuestBoardListViewItemDraw__SetFaceImage(
          this,
          questEntity,
          labelFaceMaskQuestSp,
          m_CachedPtr,
          FaceMaskSpriteName,
          *(UnityEngine_Color_o *)(v20 + 24),
          v60);
  titleNameLb = this->fields.titleNameLb;
  if ( v61 )
  {
    labelObj = RecommendSupportQuestBoardListViewItemDraw__GetDispQuestName(this, questEntity, type, v62);
    if ( !titleNameLb )
      goto LABEL_134;
    UILabel__set_text(titleNameLb, (System_String_o *)labelObj, 0LL);
  }
  else
  {
    labelObj = QuestEntity__getQuestName(questEntity, 0LL);
    if ( !titleNameLb )
      goto LABEL_134;
    UILabel__set_text(titleNameLb, (System_String_o *)labelObj, 0LL);
    if ( (_DWORD)type != 1 )
      goto LABEL_72;
    warEntity = QuestInfo_k__BackingField->fields.warEntity;
    if ( !warEntity )
      goto LABEL_134;
    if ( RecommendSupportQuestBoardListViewItemDraw__IsMainWar(
           (RecommendSupportQuestBoardListViewItemDraw_o *)labelObj,
           warEntity->fields.id,
           warEntity->fields.eventId,
           v64) )
    {
      RecommendSupportQuestBoardListViewItemDraw__SetChapterSubIdDisp(this, QuestInfo_k__BackingField, v66);
    }
    else
    {
LABEL_72:
      labelObj = this->fields.boardIconTexture;
      if ( !labelObj )
        goto LABEL_134;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)labelObj, 0, 0LL);
      labelObj = this->fields.labelNameSp;
      if ( !labelObj )
        goto LABEL_134;
      labelObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelObj, 0LL);
      if ( !labelObj )
        goto LABEL_134;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)labelObj, 1, 0LL);
      labelNameSp = this->fields.labelNameSp;
      QuestIconName = RecommendSupportQuestBoardListViewItemDraw__GetQuestIconName(v68, questEntity, type, v69);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      labelObj = (void *)AtlasManager__SetEventUI(labelNameSp, QuestIconName, 0LL);
      if ( !labelNameSp )
        goto LABEL_134;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)labelNameSp, (unsigned __int8)labelObj & 1, 0LL);
      labelObj = this->fields.labelNameSp;
      if ( !labelObj )
        goto LABEL_134;
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)labelObj + 840LL))(
        labelObj,
        *(_QWORD *)(*(_QWORD *)labelObj + 848LL));
      labelObj = this->fields.labelNameSp;
      if ( !labelObj )
        goto LABEL_134;
      labelObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelObj, 0LL);
      if ( !labelObj )
        goto LABEL_134;
      labelObj = UnityEngine_GameObject__GetComponent_object_(
                   (UnityEngine_GameObject_o *)labelObj,
                   (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
      if ( !labelObj )
        goto LABEL_134;
      UIWidget__set_color((UIWidget_o *)labelObj, *(UnityEngine_Color_o *)(v20 + 24), 0LL);
      labelObj = this->fields.labelNameSp;
      if ( !labelObj )
        goto LABEL_134;
      if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)labelObj, 0LL) )
      {
        *(_DWORD *)(v20 + 40) = questEntity->fields.id;
        v71 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
        System_Action___ctor(
          v71,
          (Il2CppObject *)v20,
          Method_RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass55_0__SetItemOfQuest_b__0__,
          0LL);
        RecommendSupportQuestBoardListViewItemDraw__LoadBoardIconTexture(this, questEntity, v71, v72);
      }
    }
  }
  labelObj = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
  v73 = this->fields.titleNameLb;
  if ( !RecommendSupportQuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
  if ( !v73 )
    goto LABEL_134;
  UILabel__SetCondensedScale(
    v73,
    RecommendSupportQuestBoardListViewItemDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH,
    0,
    0LL);
  labelObj = this->fields.titleNameLb;
  if ( !labelObj )
    goto LABEL_134;
  UIWidget__set_color((UIWidget_o *)labelObj, *(UnityEngine_Color_o *)(v20 + 24), 0LL);
  phaseObj = this->fields.phaseObj;
  labelObj = (void *)QuestEntity__HasFlag(questEntity, 0x4000LL, 0LL);
  v75 = ((unsigned __int8)labelObj & 1) != 0 ? 0LL : phaseObj;
  if ( ((unsigned __int8)labelObj & 1) != 0
    || ((labelObj = (void *)QuestEntity__HasFlag(questEntity, 0x10000LL, 0LL), ((unsigned __int8)labelObj & 1) == 0)
      ? (v76 = v75)
      : (v76 = 0LL),
        ((unsigned __int8)labelObj & 1) != 0) )
  {
    v77 = 0;
  }
  else
  {
    labelObj = (void *)QuestEntity__HasFlag(questEntity, 512LL, 0LL);
    if ( ((unsigned __int8)labelObj & 1) != 0 )
    {
      v77 = 0;
      phaseObj = v75;
    }
    else
    {
      labelObj = (void *)QuestEntity__HasFlag(questEntity, 0x4000000LL, 0LL);
      if ( ((unsigned __int8)labelObj & 1) != 0 )
      {
        v77 = 0;
      }
      else
      {
        labelObj = (void *)QuestEntity__HasFlag(questEntity, 0x2000000000LL, 0LL);
        v77 = (unsigned __int8)labelObj ^ 1;
      }
      phaseObj = v76;
    }
  }
  if ( !phaseObj )
    goto LABEL_134;
  UnityEngine_GameObject__SetActive(phaseObj, v77 & 1, 0LL);
  labelObj = this->fields.phaseObj;
  if ( !labelObj )
    goto LABEL_134;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)labelObj, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    labelObj = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !labelObj )
      goto LABEL_134;
    labelObj = QuestPhaseMaster__getList((QuestPhaseMaster_o *)labelObj, questEntity->fields.id, 0LL);
    if ( !labelObj )
      goto LABEL_134;
    v78 = *((_DWORD *)labelObj + 6);
    phaseNumLb = this->fields.phaseNumLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v80 = LocalizationManager__Get((System_String_o *)StringLiteral_11033/*"RECOMMEND_SUPPORT_QUEST_SELECT_PHASE_INFO"*/, 0LL);
    v102 = phase;
    v84 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v102, v81, v82, v83);
    v101 = v78;
    v88 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v101, v85, v86, v87);
    labelObj = System_String__Format_62613552(v80, v84, v88, 0LL);
    if ( !phaseNumLb )
      goto LABEL_134;
    UILabel__set_text(phaseNumLb, (System_String_o *)labelObj, 0LL);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  labelObj = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !labelObj )
    goto LABEL_134;
  Entity = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)labelObj, questEntity->fields.id, phase, 0LL);
  v90 = Entity;
  v92 = Entity
     && (classIds = Entity->fields.classIds) != 0LL
     && *(_QWORD *)&classIds->max_length
     && !QuestEntity__HasFlag(questEntity, 2048LL, 0LL);
  labelObj = this->fields.classIconRoot;
  if ( !labelObj )
    goto LABEL_134;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)labelObj, v92, 0LL);
  labelObj = this->fields.classStrSp;
  if ( !labelObj )
    goto LABEL_134;
  UIWidget__set_color((UIWidget_o *)labelObj, *(UnityEngine_Color_o *)(v20 + 24), 0LL);
  if ( !v92 )
    return;
  if ( !v90 || (classIcons = this->fields.classIcons) == 0LL )
LABEL_134:
    sub_1BDBAD4(labelObj, v22);
  max_length = classIcons->max_length;
  v95 = max_length - 1;
  if ( max_length >= 1 )
  {
    v96 = v90->fields.classIds;
    v97 = 0;
    while ( v97 < classIcons->max_length )
    {
      v98 = (int)v97;
      v99 = &classIcons->obj.klass + (int)v97;
      v100 = (UnityEngine_Component_o *)v99[4];
      if ( !v100 )
        goto LABEL_134;
      labelObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v99[4], 0LL);
      if ( !v96 )
        goto LABEL_134;
      if ( !labelObj )
        goto LABEL_134;
      UnityEngine_GameObject__SetActive(
        (UnityEngine_GameObject_o *)labelObj,
        (int)v98 < (signed int)v96->max_length,
        0LL);
      labelObj = UnityEngine_Component__get_gameObject(v100, 0LL);
      if ( !labelObj )
        goto LABEL_134;
      labelObj = (void *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)labelObj, 0LL);
      if ( ((unsigned __int8)labelObj & 1) != 0 )
      {
        if ( (unsigned int)v98 >= v96->max_length )
          break;
        ServantClassIconComponent__Set((ServantClassIconComponent_o *)v100, v96->m_Items[v98 + 1], 0, 0LL);
        ServantClassIconComponent__SetColor(
          (ServantClassIconComponent_o *)v100,
          *(UnityEngine_Color_o *)(v20 + 24),
          0LL);
      }
      if ( v95 == (_DWORD)v98 )
        return;
      classIcons = this->fields.classIcons;
      v97 = v98 + 1;
      if ( !classIcons )
        goto LABEL_134;
    }
LABEL_142:
    sub_1BDBADC(labelObj, v22, v34);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportQuestBoardListViewItemDraw__SetRecommendLv(
        RecommendSupportQuestBoardListViewItemDraw_o *this,
        System_String_o *recommendLv,
        UnityEngine_Color_o baseColor,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_GameObject_o *titleLevelRoot; // x20
  UnityEngine_Component_o *IsNullOrEmpty; // x0
  __int64 v14; // x1
  Il2CppObject *Component_object; // x20
  UnityEngine_GameObject_o *v16; // x21
  float v17; // s0
  float v18; // s0
  float v19; // s8
  struct UILabel_o *titleLevelLb; // x8
  UnityEngine_Object_o *v21; // x20
  int mWidth; // s8
  float klass_low; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = baseColor.fields.a;
  b = baseColor.fields.b;
  g = baseColor.fields.g;
  r = baseColor.fields.r;
  if ( (byte_4B40973 & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___, recommendLv);
    sub_1BDB878(&Method_UnityEngine_Component_GetComponent_CondensedScaleSprite___, v10);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v11);
    byte_4B40973 = 1;
  }
  titleLevelRoot = this->fields.titleLevelRoot;
  IsNullOrEmpty = (UnityEngine_Component_o *)System_String__IsNullOrEmpty(recommendLv, 0LL);
  if ( !titleLevelRoot )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(titleLevelRoot, ((unsigned __int8)IsNullOrEmpty & 1) == 0, 0LL);
  IsNullOrEmpty = (UnityEngine_Component_o *)this->fields.titleLevelRoot;
  if ( !IsNullOrEmpty )
    goto LABEL_37;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)IsNullOrEmpty, 0LL) )
  {
    IsNullOrEmpty = (UnityEngine_Component_o *)this->fields.titleLevelSp;
    if ( !IsNullOrEmpty )
      goto LABEL_37;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         IsNullOrEmpty,
                         (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_CondensedScaleSprite___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    IsNullOrEmpty = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)Component_object,
                                                 0LL,
                                                 0LL);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_37;
      CondensedScaleSprite__Init((CondensedScaleSprite_o *)Component_object, 0LL);
    }
    IsNullOrEmpty = (UnityEngine_Component_o *)this->fields.titleLevelLb;
    if ( IsNullOrEmpty )
    {
      UILabel__set_text((UILabel_o *)IsNullOrEmpty, recommendLv, 0LL);
      IsNullOrEmpty = (UnityEngine_Component_o *)this->fields.titleLevelLb;
      if ( IsNullOrEmpty )
      {
        v25.fields.r = r;
        v25.fields.g = g;
        v25.fields.b = b;
        v25.fields.a = a;
        UIWidget__set_color((UIWidget_o *)IsNullOrEmpty, v25, 0LL);
        IsNullOrEmpty = (UnityEngine_Component_o *)this->fields.titleLevelSp;
        if ( IsNullOrEmpty )
        {
          v26.fields.r = r;
          v26.fields.g = g;
          v26.fields.b = b;
          v26.fields.a = a;
          UIWidget__set_color((UIWidget_o *)IsNullOrEmpty, v26, 0LL);
          IsNullOrEmpty = (UnityEngine_Component_o *)this->fields.titleLevelStrSp;
          if ( IsNullOrEmpty )
          {
            v27.fields.r = r;
            v27.fields.g = g;
            v27.fields.b = b;
            v27.fields.a = a;
            UIWidget__set_color((UIWidget_o *)IsNullOrEmpty, v27, 0LL);
            IsNullOrEmpty = (UnityEngine_Component_o *)this->fields.titleLevelSp;
            if ( IsNullOrEmpty )
            {
              IsNullOrEmpty = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(IsNullOrEmpty, 0LL);
              if ( this->fields.titleLevelStrSp )
              {
                v16 = (UnityEngine_GameObject_o *)IsNullOrEmpty;
                IsNullOrEmpty = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                             (UnityEngine_Component_o *)this->fields.titleLevelStrSp,
                                                             0LL);
                if ( IsNullOrEmpty )
                {
                  LODWORD(v17) = (unsigned int)UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)IsNullOrEmpty,
                                                 0LL);
                  GameObjectExtensions__SetLocalPositionX(v16, v17, 0LL);
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  IsNullOrEmpty = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                                               (UnityEngine_Object_o *)Component_object,
                                                               0LL,
                                                               0LL);
                  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
                  {
                    if ( Component_object )
                    {
                      v18 = CondensedScaleSprite__GetAfterAdjustWidth((CondensedScaleSprite_o *)Component_object, 0LL);
                      IsNullOrEmpty = (UnityEngine_Component_o *)this->fields.titleLevelSp;
                      if ( IsNullOrEmpty )
                      {
                        v19 = (float)(SLODWORD(IsNullOrEmpty[7].klass) / 2) + (float)(v18 * -0.5);
LABEL_36:
                        gameObject = UnityEngine_Component__get_gameObject(IsNullOrEmpty, 0LL);
                        GameObjectExtensions__AddLocalPositionX(gameObject, v19, 0LL);
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
                                                                   (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
                      titleLevelLb = this->fields.titleLevelLb;
                      if ( titleLevelLb )
                      {
                        v21 = (UnityEngine_Object_o *)IsNullOrEmpty;
                        mWidth = titleLevelLb->fields.mWidth;
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        klass_low = (float)mWidth;
                        IsNullOrEmpty = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v21, 0LL, 0LL);
                        if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
                        {
                          if ( !v21 )
                            goto LABEL_37;
                          if ( klass_low > (float)SLODWORD(v21[2].klass) )
                            klass_low = (float)SLODWORD(v21[2].klass);
                        }
                        IsNullOrEmpty = (UnityEngine_Component_o *)this->fields.titleLevelSp;
                        if ( IsNullOrEmpty )
                        {
                          v19 = klass_low * -0.5;
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
    sub_1BDBAD4(IsNullOrEmpty, v14);
  }
}


void __fastcall RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass55_0___ctor(
        RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass55_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass55_0___SetItemOfQuest_b__0(
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
                                                                                 0LL);
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
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
        v5 = v3->fields.__4__this;
        if ( v5 )
        {
          this = (RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass55_0_o *)v5->fields.boardIconTexture;
          if ( this )
          {
            UIWidget__set_color((UIWidget_o *)this, v3->fields.baseColor, 0LL);
            return;
          }
        }
      }
LABEL_11:
      sub_1BDBAD4(this, method);
    }
  }
}


void __fastcall RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass66_0___ctor(
        RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass66_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass66_0___LoadBoardIconTexture_b__0(
        RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass66_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass66_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct RecommendSupportQuestBoardListViewItemDraw_o *_4__this; // x8
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  RecommendSupportQuestBoardListViewItemDraw_c *v15; // x0
  System_String_o *v16; // x19
  struct RecommendSupportQuestBoardListViewItemDraw_o *v17; // x8
  UnityEngine_Shader_o *v18; // x21
  UnityEngine_Material_o *v19; // x20
  struct RecommendSupportQuestBoardListViewItemDraw_o *v20; // x8
  struct RecommendSupportQuestBoardListViewItemDraw_o *v21; // x8
  struct RecommendSupportQuestBoardListViewItemDraw_o *v22; // x8
  AssetData_o *boardIconAssetData; // x21
  Il2CppObject *Object_object__50417328; // x0

  v4 = this;
  if ( (byte_4B40977 & 1) == 0 )
  {
    sub_1BDB878(&Method_AssetData_GetObject_Texture2D____77074040, assetData);
    sub_1BDB878(&AssetManager_TypeInfo, v5);
    sub_1BDB878(&UnityEngine_Material_TypeInfo, v6);
    sub_1BDB878(&RecommendSupportQuestBoardListViewItemDraw_TypeInfo, v7);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1BDB878(&StringLiteral_16514/*"_alpha"*/, v9);
    sub_1BDB878(&StringLiteral_4979/*"Custom/SpriteWithMask"*/, v10);
    this = (RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass66_0_o *)sub_1BDB878(&StringLiteral_16248/*"_MaskTex"*/, v11);
    byte_4B40977 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_20;
  this = (RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass66_0_o *)System_String__op_Inequality(
                                                                                 v4->fields.loadBoardIconName,
                                                                                 _4__this->fields.boardIconName,
                                                                                 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v17 = v4->fields.__4__this;
    if ( v17 )
    {
      v17->fields.boardIconAssetData = assetData;
      sub_1BDB81C((CGThumbnailListItem_o *)&v17->fields.boardIconAssetData, (int32_t)assetData, v13, v14);
      v18 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4979/*"Custom/SpriteWithMask"*/, 0LL);
      v19 = (UnityEngine_Material_o *)sub_1BDBAC4(UnityEngine_Material_TypeInfo);
      UnityEngine_Material___ctor(v19, v18, 0LL);
      v20 = v4->fields.__4__this;
      if ( v20 )
      {
        this = (RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass66_0_o *)v20->fields.boardIconTexture;
        if ( this )
        {
          this = (RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass66_0_o *)((__int64 (__fastcall *)(RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass66_0_o *, UnityEngine_Material_o *, Il2CppMethodPointer))this->klass[1].vtable._2_GetHashCode.method)(
                                                                                         this,
                                                                                         v19,
                                                                                         this->klass[1].vtable._3_ToString.methodPtr);
          v21 = v4->fields.__4__this;
          if ( v21 )
          {
            this = (RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass66_0_o *)v21->fields.boardIconAssetData;
            if ( this )
            {
              this = (RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass66_0_o *)AssetData__GetObject_object__50417328(
                                                                                             (AssetData_o *)this,
                                                                                             v21->fields.boardIconName,
                                                                                             (const MethodInfo_3014EB0 *)Method_AssetData_GetObject_Texture2D____77074040);
              if ( v19 )
              {
                UnityEngine_Material__set_mainTexture(v19, (UnityEngine_Texture_o *)this, 0LL);
                v22 = v4->fields.__4__this;
                if ( v22 )
                {
                  boardIconAssetData = v22->fields.boardIconAssetData;
                  this = (RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass66_0_o *)System_String__Concat_62572260(
                                                                                                 v22->fields.boardIconName,
                                                                                                 (System_String_o *)StringLiteral_16514/*"_alpha"*/,
                                                                                                 0LL);
                  if ( boardIconAssetData )
                  {
                    Object_object__50417328 = AssetData__GetObject_object__50417328(
                                                boardIconAssetData,
                                                (System_String_o *)this,
                                                (const MethodInfo_3014EB0 *)Method_AssetData_GetObject_Texture2D____77074040);
                    UnityEngine_Material__SetTexture(
                      v19,
                      (System_String_o *)StringLiteral_16248/*"_MaskTex"*/,
                      (UnityEngine_Texture_o *)Object_object__50417328,
                      0LL);
                    this = (RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass66_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                    if ( this )
                    {
                      CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
                      ActionExtensions__Call(v4->fields.callback, 0LL);
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
    sub_1BDBAD4(this, assetData);
  }
  v15 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
  if ( !RecommendSupportQuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
    v15 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
  }
  v16 = System_String__Concat_62572260(
          v15->static_fields->QUEST_BOARD_ICON_TEXTURE_PATH,
          v4->fields.loadBoardIconName,
          0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(v16, 0LL);
}