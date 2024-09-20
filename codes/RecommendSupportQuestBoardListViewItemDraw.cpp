void __fastcall RecommendSupportQuestBoardListViewItemDraw___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  struct RecommendSupportQuestBoardListViewItemDraw_StaticFields *static_fields; // x0
  int32_t v4; // w1
  int32_t v5; // w1
  struct RecommendSupportQuestBoardListViewItemDraw_StaticFields *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w1
  struct RecommendSupportQuestBoardListViewItemDraw_StaticFields *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w1
  struct RecommendSupportQuestBoardListViewItemDraw_StaticFields *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w1
  struct RecommendSupportQuestBoardListViewItemDraw_StaticFields *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w1
  struct RecommendSupportQuestBoardListViewItemDraw_StaticFields *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w1
  struct RecommendSupportQuestBoardListViewItemDraw_StaticFields *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  struct RecommendSupportQuestBoardListViewItemDraw_StaticFields *v29; // x0
  int32_t v30; // w1
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t v33; // w1
  struct RecommendSupportQuestBoardListViewItemDraw_StaticFields *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  int32_t v37; // w1
  struct RecommendSupportQuestBoardListViewItemDraw_StaticFields *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  __int64 v41; // x0
  __int64 v42; // x1
  int32_t v43; // w2
  int32_t v44; // w3
  __int64 v45; // x19
  int32_t v46; // w1
  int32_t v47; // w2
  int32_t v48; // w3
  int32_t v49; // w1
  int32_t v50; // w2
  int32_t v51; // w3
  int32_t v52; // w1
  int32_t v53; // w2
  int32_t v54; // w3
  int32_t v55; // w1
  int32_t v56; // w2
  int32_t v57; // w3
  int32_t v58; // w1
  int32_t v59; // w2
  int32_t v60; // w3
  int32_t v61; // w1
  int32_t v62; // w2
  int32_t v63; // w3
  int32_t v64; // w1
  struct RecommendSupportQuestBoardListViewItemDraw_StaticFields *v65; // x0
  int32_t v66; // w2
  int32_t v67; // w3
  int32_t v68; // w1
  struct RecommendSupportQuestBoardListViewItemDraw_StaticFields *v69; // x0
  int32_t v70; // w2
  int32_t v71; // w3
  int32_t v72; // w1
  struct RecommendSupportQuestBoardListViewItemDraw_StaticFields *v73; // x0
  int32_t v74; // w2
  int32_t v75; // w3

  if ( (byte_4A573F3 & 1) == 0 )
  {
    sub_1B885B0(&RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_22697/*"quest_board_icon_"*/);
    sub_1B885B0(&StringLiteral_22717/*"questboard_icon_cap{0:D2}"*/);
    sub_1B885B0(&StringLiteral_20421/*"img_questboard_story03mask"*/);
    sub_1B885B0(&StringLiteral_17801/*"chaldea_category_{0}"*/);
    sub_1B885B0(&StringLiteral_20416/*"img_questboard_main_"*/);
    sub_1B885B0(&StringLiteral_19292/*"event_war_"*/);
    sub_1B885B0(&StringLiteral_20423/*"img_questboard_story05mask"*/);
    sub_1B885B0(&StringLiteral_20414/*"img_questboard_hero03"*/);
    sub_1B885B0(&StringLiteral_22696/*"quest_board_"*/);
    sub_1B885B0(&StringLiteral_20411/*"img_questboard_free_"*/);
    sub_1B885B0(&StringLiteral_22698/*"quest_board_mask_"*/);
    sub_1B885B0(&StringLiteral_6236/*"EventUI/QuestBoardIcon/"*/);
    sub_1B885B0(&StringLiteral_20422/*"img_questboard_story04mask"*/);
    sub_1B885B0(&StringLiteral_20420/*"img_questboard_story03"*/);
    sub_1B885B0(&StringLiteral_20402/*"img_quest_unit_{0:D2}"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A573F3 = 1;
  }
  static_fields = RecommendSupportQuestBoardListViewItemDraw_TypeInfo->static_fields;
  static_fields->TITLE_LABEL_BASE_WIDTH = 256;
  v4 = StringLiteral_19292/*"event_war_"*/;
  static_fields->EVENT_WAR_SPNAME_PREFIX = (struct System_String_o *)StringLiteral_19292/*"event_war_"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->EVENT_WAR_SPNAME_PREFIX, v4, v1, v2);
  v5 = StringLiteral_17801/*"chaldea_category_{0}"*/;
  v6 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo->static_fields;
  v6->EVENT_WAR_SUBFOLDER_SPNAME_PREFIX = (struct System_String_o *)StringLiteral_17801/*"chaldea_category_{0}"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v6->EVENT_WAR_SUBFOLDER_SPNAME_PREFIX, v5, v7, v8);
  v9 = StringLiteral_22696/*"quest_board_"*/;
  v10 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo->static_fields;
  v10->QUEST_BOARD_SPNAME_PREFIX = (struct System_String_o *)StringLiteral_22696/*"quest_board_"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v10->QUEST_BOARD_SPNAME_PREFIX, v9, v11, v12);
  v13 = StringLiteral_22697/*"quest_board_icon_"*/;
  v14 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo->static_fields;
  v14->QUEST_BOARD_ICON_SPNAME_PREFIX = (struct System_String_o *)StringLiteral_22697/*"quest_board_icon_"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v14->QUEST_BOARD_ICON_SPNAME_PREFIX, v13, v15, v16);
  v17 = StringLiteral_22698/*"quest_board_mask_"*/;
  v18 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo->static_fields;
  v18->QUEST_BOARD_MASK_SPNAME_PREFIX = (struct System_String_o *)StringLiteral_22698/*"quest_board_mask_"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v18->QUEST_BOARD_MASK_SPNAME_PREFIX, v17, v19, v20);
  v21 = StringLiteral_6236/*"EventUI/QuestBoardIcon/"*/;
  v22 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo->static_fields;
  v22->QUEST_BOARD_ICON_TEXTURE_PATH = (struct System_String_o *)StringLiteral_6236/*"EventUI/QuestBoardIcon/"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v22->QUEST_BOARD_ICON_TEXTURE_PATH, v21, v23, v24);
  v25 = StringLiteral_22697/*"quest_board_icon_"*/;
  v26 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo->static_fields;
  v26->QUEST_BOARD_ICON_TEXTURE_PREFIX = (struct System_String_o *)StringLiteral_22697/*"quest_board_icon_"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v26->QUEST_BOARD_ICON_TEXTURE_PREFIX, v25, v27, v28);
  v29 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo->static_fields;
  v29->QUEST_FACE_MASK_SP_W = 124;
  v30 = StringLiteral_20421/*"img_questboard_story03mask"*/;
  v29->QUEST_STORY_FACE_MASK_SPNAME = (struct System_String_o *)StringLiteral_20421/*"img_questboard_story03mask"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v29->QUEST_STORY_FACE_MASK_SPNAME, v30, v31, v32);
  v33 = StringLiteral_20422/*"img_questboard_story04mask"*/;
  v34 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo->static_fields;
  v34->QUEST_MAIN_FACE_MASK_SPNAME = (struct System_String_o *)StringLiteral_20422/*"img_questboard_story04mask"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v34->QUEST_MAIN_FACE_MASK_SPNAME, v33, v35, v36);
  v37 = StringLiteral_20423/*"img_questboard_story05mask"*/;
  v38 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo->static_fields;
  v38->QUEST_EVENT_FACE_MASK_SPNAME = (struct System_String_o *)StringLiteral_20423/*"img_questboard_story05mask"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v38->QUEST_EVENT_FACE_MASK_SPNAME, v37, v39, v40);
  v41 = sub_1B88658(string___TypeInfo, 7LL);
  if ( !v41 )
    sub_1B8880C(0LL, v42);
  v45 = v41;
  if ( !*(_DWORD *)(v41 + 24) )
    goto LABEL_12;
  v46 = (int)StringLiteral_1/*""*/;
  *(_QWORD *)(v41 + 32) = StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v41 + 32), v46, v43, v44);
  if ( *(_DWORD *)(v45 + 24) <= 1u )
    goto LABEL_12;
  v49 = StringLiteral_20416/*"img_questboard_main_"*/;
  *(_QWORD *)(v45 + 40) = StringLiteral_20416/*"img_questboard_main_"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v45 + 40), v49, v47, v48);
  if ( *(_DWORD *)(v45 + 24) <= 2u )
    goto LABEL_12;
  v52 = StringLiteral_20411/*"img_questboard_free_"*/;
  *(_QWORD *)(v45 + 48) = StringLiteral_20411/*"img_questboard_free_"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v45 + 48), v52, v50, v51);
  if ( *(_DWORD *)(v45 + 24) <= 3u )
    goto LABEL_12;
  v55 = StringLiteral_20420/*"img_questboard_story03"*/;
  *(_QWORD *)(v45 + 56) = StringLiteral_20420/*"img_questboard_story03"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v45 + 56), v55, v53, v54);
  if ( *(_DWORD *)(v45 + 24) <= 4u
    || (v58 = (int)StringLiteral_1/*""*/,
        *(_QWORD *)(v45 + 64) = StringLiteral_1/*""*/,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v45 + 64), v58, v56, v57),
        *(_DWORD *)(v45 + 24) <= 5u)
    || (v61 = StringLiteral_20411/*"img_questboard_free_"*/,
        *(_QWORD *)(v45 + 72) = StringLiteral_20411/*"img_questboard_free_"*/,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v45 + 72), v61, v59, v60),
        *(_DWORD *)(v45 + 24) <= 6u) )
  {
LABEL_12:
    sub_1B88814(v41, v42);
  }
  v64 = StringLiteral_20414/*"img_questboard_hero03"*/;
  *(_QWORD *)(v45 + 80) = StringLiteral_20414/*"img_questboard_hero03"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v45 + 80), v64, v62, v63);
  v65 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo->static_fields;
  v65->msQBoardL3Names = (struct System_String_array *)v45;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v65->msQBoardL3Names, v45, v66, v67);
  v68 = StringLiteral_22717/*"questboard_icon_cap{0:D2}"*/;
  v69 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo->static_fields;
  v69->CHAPTER_SP_BASE_NAME = (struct System_String_o *)StringLiteral_22717/*"questboard_icon_cap{0:D2}"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v69->CHAPTER_SP_BASE_NAME, v68, v70, v71);
  v72 = StringLiteral_20402/*"img_quest_unit_{0:D2}"*/;
  v73 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo->static_fields;
  v73->CHAPTER_SP_UNIT_NAME = (struct System_String_o *)StringLiteral_20402/*"img_quest_unit_{0:D2}"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v73->CHAPTER_SP_UNIT_NAME, v72, v74, v75);
}


void __fastcall RecommendSupportQuestBoardListViewItemDraw___ctor(
        RecommendSupportQuestBoardListViewItemDraw_o *this,
        const MethodInfo *method)
{
  struct System_Int32_array *v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  il2cpp_array_size_t max_length; // w8

  if ( (byte_4A573F2 & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    byte_4A573F2 = 1;
  }
  *(_QWORD *)&this->fields.DEFAULT_SETTING_AREA_SP_POS_Y = 0x1E00000022LL;
  v3 = (struct System_Int32_array *)sub_1B88658(int___TypeInfo, 2LL);
  if ( !v3 )
    sub_1B8880C(0LL, v4);
  max_length = v3->max_length;
  if ( !max_length || (v3->m_Items[1] = 11000, max_length == 1) )
    sub_1B88814(v3, v3);
  v3->m_Items[2] = 12000;
  this->fields.parentFolderWarId = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.parentFolderWarId, (int32_t)v3, v5, v6);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


System_String_o *__fastcall RecommendSupportQuestBoardListViewItemDraw__ConvertToChineseAscii(
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
  __int64 v11; // x1
  unsigned int v13; // w8
  unsigned int v14; // w8

  if ( (byte_4A573ED & 1) == 0 )
  {
    sub_1B885B0(&System_Text_StringBuilder_TypeInfo);
    sub_1B885B0(&StringLiteral_1212/*"0"*/);
    byte_4A573ED = 1;
  }
  if ( n <= 0 )
    return (System_String_o *)StringLiteral_1212/*"0"*/;
  if ( isUppercase )
    v6 = 32;
  else
    v6 = 0;
  v7 = n % 0xAu;
  v8 = 96 - v6;
  v9 = (System_Text_StringBuilder_o *)sub_1B887FC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_60862280(v9, 5, 0LL);
  if ( n >= 10 )
  {
    if ( n >= 100 )
    {
      v14 = n / 0x64u % 0xA;
      if ( v14 >= 2 )
      {
        if ( !v9 )
          goto LABEL_25;
        System_Text_StringBuilder__Append_60871256(v9, v8 | v14, 0LL);
      }
      else if ( !v9 )
      {
LABEL_25:
        sub_1B8880C(v10, v11);
      }
      System_Text_StringBuilder__Append_60871256(v9, 107 - v6, 0LL);
      v13 = n / 0xAu % 0xA;
    }
    else
    {
      if ( !v9 )
        goto LABEL_25;
      v13 = (unsigned __int8)n / 0xAu % 0xA;
    }
    if ( v13 >= 2 )
      System_Text_StringBuilder__Append_60871256(v9, v8 | v13, 0LL);
    System_Text_StringBuilder__Append_60871256(v9, 106 - v6, 0LL);
    if ( !v7 )
      return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v9->klass->vtable._3_ToString.method)(
                                  v9,
                                  v9->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  }
  else if ( !v9 )
  {
    goto LABEL_25;
  }
  System_Text_StringBuilder__Append_60871256(v9, v8 | v7, 0LL);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v9->klass->vtable._3_ToString.method)(
                              v9,
                              v9->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


void __fastcall RecommendSupportQuestBoardListViewItemDraw__DispSettingQuestInfo(
        RecommendSupportQuestBoardListViewItemDraw_o *this,
        bool isSetting,
        int32_t index,
        System_String_o *svtName,
        const MethodInfo *method)
{
  UnityEngine_Object_o *settingQuestLb; // x23
  UnityEngine_Component_o *v10; // x1
  UnityEngine_Component_o *gameObject; // x0
  UILabel_o *v12; // x23
  System_String_o *v13; // x24
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  Il2CppObject *v17; // x0
  UnityEngine_Object_o *settingServantLb; // x23
  UILabel_o *v19; // x23
  bool IsNullOrEmpty; // w24
  System_String_o *v21; // x0
  UnityEngine_Object_o *settingBackSp; // x22
  UISprite_o *v23; // x21
  UnityEngine_Object_o *removeSp; // x21
  UnityEngine_GameObject_o *v25; // x20
  int v26; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A573F1 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1B885B0(&StringLiteral_11031/*"RECOMMEND_SUPPORT_QUEST_SELECT_SETTING_SERVANT"*/);
    sub_1B885B0(&StringLiteral_11030/*"RECOMMEND_SUPPORT_QUEST_SELECT_SETTING_INFO"*/);
    sub_1B885B0(&StringLiteral_11027/*"RECOMMEND_SUPPORT_QUEST_SELECT_NO_SETTING_SERVANT"*/);
    sub_1B885B0(&StringLiteral_17698/*"caldeagate_notice"*/);
    byte_4A573F1 = 1;
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
    v12 = this->fields.settingQuestLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_11030/*"RECOMMEND_SUPPORT_QUEST_SELECT_SETTING_INFO"*/, 0LL);
    v26 = index + 1;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26, v14, v15, v16);
    gameObject = (UnityEngine_Component_o *)System_String__Format(v13, v17, 0LL);
    if ( !v12 )
      goto LABEL_40;
    UILabel__set_text(v12, (System_String_o *)gameObject, 0LL);
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
    v19 = this->fields.settingServantLb;
    IsNullOrEmpty = System_String__IsNullOrEmpty(svtName, 0LL);
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( IsNullOrEmpty )
      {
LABEL_19:
        gameObject = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11027/*"RECOMMEND_SUPPORT_QUEST_SELECT_NO_SETTING_SERVANT"*/, 0LL);
LABEL_22:
        v10 = gameObject;
        if ( !v19 )
          goto LABEL_40;
        UILabel__set_text(v19, (System_String_o *)gameObject, 0LL);
        goto LABEL_24;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( IsNullOrEmpty )
        goto LABEL_19;
    }
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_11031/*"RECOMMEND_SUPPORT_QUEST_SELECT_SETTING_SERVANT"*/, 0LL);
    gameObject = (UnityEngine_Component_o *)System_String__Format(v21, (Il2CppObject *)svtName, 0LL);
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
    v23 = this->fields.settingBackSp;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetPartyOrganizationImage(v23, (System_String_o *)StringLiteral_17698/*"caldeagate_notice"*/, 0LL);
  }
  removeSp = (UnityEngine_Object_o *)this->fields.removeSp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(removeSp, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.removeSp;
    if ( gameObject )
    {
      v25 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)gameObject, 0LL);
      gameObject = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
      if ( gameObject )
      {
        if ( v25 )
        {
          UnityEngine_GameObject__SetActive(v25, LODWORD(gameObject[5].klass) == index, 0LL);
          return;
        }
      }
    }
LABEL_40:
    sub_1B8880C(gameObject, v10);
  }
}


System_String_o *__fastcall RecommendSupportQuestBoardListViewItemDraw__GetDispQuestName(
        RecommendSupportQuestBoardListViewItemDraw_o *this,
        QuestEntity_o *questEnt,
        int32_t questType,
        const MethodInfo *method)
{
  RecommendSupportQuestBoardListViewItemDraw_o *v6; // x20
  Il2CppObject *Master_object; // x21
  Il2CppObject *BattleName; // x1

  if ( (byte_4A573E7 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    this = (RecommendSupportQuestBoardListViewItemDraw_o *)sub_1B885B0(&StringLiteral_24983/*"{0}"*/);
    byte_4A573E7 = 1;
  }
  if ( !questEnt )
    goto LABEL_14;
  this = (RecommendSupportQuestBoardListViewItemDraw_o *)QuestEntity__getQuestName(questEnt, 0LL);
  v6 = this;
  if ( (unsigned int)questType <= 5 && ((1 << questType) & 0x2C) != 0 )
  {
    if ( !this )
      goto LABEL_14;
    if ( System_String__Contains((System_String_o *)this, (System_String_o *)StringLiteral_24983/*"{0}"*/, 0LL) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantMaster___);
      this = (RecommendSupportQuestBoardListViewItemDraw_o *)QuestEntity__getServantId(questEnt, 0LL);
      if ( Master_object )
      {
        this = (RecommendSupportQuestBoardListViewItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                                 (int32_t)this,
                                                                 (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( this )
        {
          BattleName = (Il2CppObject *)ServantEntity__getBattleName((ServantEntity_o *)this, 0, -1, 0LL);
          return System_String__Format((System_String_o *)v6, BattleName, 0LL);
        }
      }
LABEL_14:
      sub_1B8880C(this, questEnt);
    }
  }
  return (System_String_o *)v6;
}


System_String_o *__fastcall RecommendSupportQuestBoardListViewItemDraw__GetEventAddBannerSpriteName(
        RecommendSupportQuestBoardListViewItemDraw_o *this,
        EventEntity_o *eventEnt,
        int32_t warId,
        bool isActiveEventWar,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  __int64 v11; // x21
  EventAddEntity_o *OverwriteEventAddEntity; // x0
  WarEntity_o *Entity; // x0
  int32_t PrioredBannerId; // w0
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  RecommendSupportQuestBoardListViewItemDraw_c *v18; // x8
  int v19; // w19
  System_String_o *EVENT_WAR_SUBFOLDER_SPNAME_PREFIX; // x20
  Il2CppObject *v21; // x0
  RecommendSupportQuestBoardListViewItemDraw_c *v23; // x0
  System_String_o *EVENT_WAR_SPNAME_PREFIX; // x19
  System_String_o *v25; // x0
  int v26; // [xsp+8h] [xbp-38h] BYREF
  int32_t overwriteId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A573EB & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventAddMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_WarMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
    byte_4A573EB = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventAddMaster___);
  if ( !eventEnt || !Master_object )
    goto LABEL_32;
  if ( isActiveEventWar )
    v10 = 4;
  else
    v10 = 5;
  if ( isActiveEventWar )
    v11 = 60LL;
  else
    v11 = 56LL;
  OverwriteEventAddEntity = EventAddMaster__getOverwriteEventAddEntity(
                              (EventAddMaster_o *)Master_object,
                              eventEnt->fields.id,
                              v10,
                              0LL);
  overwriteId = *(_DWORD *)((char *)&eventEnt->klass + v11);
  if ( OverwriteEventAddEntity )
    overwriteId = OverwriteEventAddEntity->fields.overwriteId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !Master_object )
    goto LABEL_32;
  Entity = (WarEntity_o *)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                            warId,
                            (const MethodInfo_311D934 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( Entity
    && Entity->fields.parentWarId
    && Entity->fields.eventId == eventEnt->fields.id
    && WarEntity__HasFlag(Entity, 0x80000, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_WarMaster___);
    if ( Master_object )
    {
      Master_object = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                        warId,
                        (const MethodInfo_311D934 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
      if ( Master_object )
      {
        PrioredBannerId = WarEntity__GetPrioredBannerId((WarEntity_o *)Master_object, 0LL);
        v18 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
        overwriteId = PrioredBannerId;
        v19 = PrioredBannerId;
        if ( !RecommendSupportQuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
          v18 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
        }
        EVENT_WAR_SUBFOLDER_SPNAME_PREFIX = v18->static_fields->EVENT_WAR_SUBFOLDER_SPNAME_PREFIX;
        v26 = v19;
        v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26, v15, v16, v17);
        return System_String__Format(EVENT_WAR_SUBFOLDER_SPNAME_PREFIX, v21, 0LL);
      }
    }
LABEL_32:
    sub_1B8880C(Master_object, v9);
  }
  v23 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
  if ( !RecommendSupportQuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
    v23 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
  }
  EVENT_WAR_SPNAME_PREFIX = v23->static_fields->EVENT_WAR_SPNAME_PREFIX;
  v25 = System_Int32__ToString((int32_t)&overwriteId, 0LL);
  return System_String__Concat_61707032(EVENT_WAR_SPNAME_PREFIX, v25, 0LL);
}


System_String_o *__fastcall RecommendSupportQuestBoardListViewItemDraw__GetFaceMaskSpriteName(
        RecommendSupportQuestBoardListViewItemDraw_o *this,
        int32_t questType,
        const MethodInfo *method)
{
  System_String_o **v4; // x8
  RecommendSupportQuestBoardListViewItemDraw_c *v5; // x0
  __int64 v6; // x8

  if ( (byte_4A573E6 & 1) == 0 )
  {
    sub_1B885B0(&RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A573E6 = 1;
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
      v6 = 80LL;
      goto LABEL_13;
    case 2:
    case 5:
      v5 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
      if ( !RecommendSupportQuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
        v5 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
      }
      v6 = 88LL;
      goto LABEL_13;
    case 3:
      v5 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
      if ( !RecommendSupportQuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
        v5 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
      }
      v6 = 72LL;
LABEL_13:
      v4 = (System_String_o **)((char *)v5->static_fields + v6);
      break;
    default:
      return *v4;
  }
  return *v4;
}


System_String_o *__fastcall RecommendSupportQuestBoardListViewItemDraw__GetQuestIconName(
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

  if ( (byte_4A573E9 & 1) == 0 )
  {
    sub_1B885B0(&RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
    sub_1B885B0(&StringLiteral_20428/*"img_questtxt_free"*/);
    sub_1B885B0(&StringLiteral_20427/*"img_questtxt_event"*/);
    this = (RecommendSupportQuestBoardListViewItemDraw_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A573E9 = 1;
  }
  if ( !questEnt )
    sub_1B8880C(this, questEnt);
  iconId = questEnt->fields.iconId;
  v6 = (_DWORD)questEnt + 68;
  if ( iconId < 1 )
  {
    if ( questType == 5 )
    {
      v12 = &StringLiteral_20427/*"img_questtxt_event"*/;
    }
    else if ( questType == 2 )
    {
      v12 = &StringLiteral_20428/*"img_questtxt_free"*/;
    }
    else
    {
      v12 = (__int64 *)&StringLiteral_1/*""*/;
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
    v10 = System_Int32__ToString(v6, 0LL);
    return System_String__Concat_61707032(QUEST_BOARD_ICON_SPNAME_PREFIX, v10, 0LL);
  }
}


System_String_o *__fastcall RecommendSupportQuestBoardListViewItemDraw__GetQuestIconNameForMainType(
        RecommendSupportQuestBoardListViewItemDraw_o *this,
        QuestEntity_o *questEnt,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  int32_t v6; // w20
  int32_t iconId; // w21
  RecommendSupportQuestBoardListViewItemDraw_c *v8; // x0
  struct RecommendSupportQuestBoardListViewItemDraw_StaticFields *static_fields; // x8
  System_String_o *QUEST_BOARD_ICON_SPNAME_PREFIX; // x19
  System_String_o *v11; // x0
  System_String_o *CHAPTER_SP_BASE_NAME; // x20
  Il2CppObject *v14; // x0
  int32_t chapterId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A573EA & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    this = (RecommendSupportQuestBoardListViewItemDraw_o *)sub_1B885B0(&RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
    byte_4A573EA = 1;
  }
  if ( !questEnt )
    sub_1B8880C(this, questEnt);
  v6 = (_DWORD)questEnt + 68;
  iconId = questEnt->fields.iconId;
  v8 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
  if ( !RecommendSupportQuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
    v8 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
  }
  static_fields = v8->static_fields;
  if ( iconId < 1 )
  {
    CHAPTER_SP_BASE_NAME = static_fields->CHAPTER_SP_BASE_NAME;
    chapterId = questEnt->fields.chapterId;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &chapterId, method, v3, v4);
    return System_String__Format(CHAPTER_SP_BASE_NAME, v14, 0LL);
  }
  else
  {
    QUEST_BOARD_ICON_SPNAME_PREFIX = static_fields->QUEST_BOARD_ICON_SPNAME_PREFIX;
    v11 = System_Int32__ToString(v6, 0LL);
    return System_String__Concat_61707032(QUEST_BOARD_ICON_SPNAME_PREFIX, v11, 0LL);
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


bool __fastcall RecommendSupportQuestBoardListViewItemDraw__IsMainWar(
        RecommendSupportQuestBoardListViewItemDraw_o *this,
        int32_t warId,
        int32_t eventId,
        const MethodInfo *method)
{
  BalanceConfig_c *v6; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8

  if ( (byte_4A573E5 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4A573E5 = 1;
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
  return (eventId == 0) | System_Linq_Enumerable__Contains_int_(
                            (System_Collections_Generic_IEnumerable_TSource__o *)static_fields->MainChaptersWithEventId,
                            warId,
                            (const MethodInfo_2E99A14 *)Method_System_Linq_Enumerable_Contains_int___);
}


void __fastcall RecommendSupportQuestBoardListViewItemDraw__LoadBoardIconTexture(
        RecommendSupportQuestBoardListViewItemDraw_o *this,
        QuestEntity_o *questEntity,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x20
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  const MethodInfo *v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  RecommendSupportQuestBoardListViewItemDraw_c *v18; // x0
  int32_t iconId; // w9
  Il2CppObject *QUEST_BOARD_ICON_TEXTURE_PREFIX; // x21
  Il2CppObject *v21; // x0
  struct System_String_o *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  struct System_String_o *boardIconName; // x1
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x19
  AssetLoader_LoadEndDataHandler_o *v29; // x21
  int32_t v30; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4A573EE & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass66_0__LoadBoardIconTexture_b__0__);
    sub_1B885B0(&RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass66_0_TypeInfo);
    byte_4A573EE = 1;
  }
  v7 = sub_1B887FC(RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass66_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_14;
  *(_QWORD *)(v7 + 24) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 32) = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)callback, v12, v13);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
  RecommendSupportQuestBoardListViewItemDraw__ReleaseBoardIconTexture(this, v14);
  if ( !questEntity )
    goto LABEL_14;
  this->fields.boardIconQuestId = questEntity->fields.id;
  v18 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
  if ( !RecommendSupportQuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
    v18 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
  }
  iconId = questEntity->fields.iconId;
  QUEST_BOARD_ICON_TEXTURE_PREFIX = (Il2CppObject *)v18->static_fields->QUEST_BOARD_ICON_TEXTURE_PREFIX;
  v30 = iconId;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30, v15, v16, v17);
  v22 = System_String__Concat(QUEST_BOARD_ICON_TEXTURE_PREFIX, v21, 0LL);
  this->fields.boardIconName = v22;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.boardIconName, (int32_t)v22, v23, v24);
  boardIconName = this->fields.boardIconName;
  *(_QWORD *)(v7 + 16) = boardIconName;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)boardIconName, v26, v27);
  v28 = System_String__Concat_61707032(
          RecommendSupportQuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_ICON_TEXTURE_PATH,
          this->fields.boardIconName,
          0LL);
  v29 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v29,
    (Il2CppObject *)v7,
    Method_RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass66_0__LoadBoardIconTexture_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v28, v29, 1, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
      return;
    }
LABEL_14:
    sub_1B8880C(Instance, v9);
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
  RecommendSupportQuestBoardListViewItemDraw_c *v3; // x0
  System_String_o *v4; // x21
  int32_t v5; // w2
  int32_t v6; // w3
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A573EF & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
    byte_4A573EF = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.boardIconName, 0LL) )
  {
    v3 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
    if ( !RecommendSupportQuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
      v3 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
    }
    v4 = System_String__Concat_61707032(
           v3->static_fields->QUEST_BOARD_ICON_TEXTURE_PATH,
           this->fields.boardIconName,
           0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v4, 0LL);
    this->fields.boardIconAssetData = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.boardIconAssetData, 0, v5, v6);
    this->fields.boardIconName = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.boardIconName, 0, v7, v8);
  }
}


void __fastcall RecommendSupportQuestBoardListViewItemDraw__SetChapterSubIdDisp(
        RecommendSupportQuestBoardListViewItemDraw_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *questInfo,
        const MethodInfo *method)
{
  RecommendSupportQuestBoardListViewItemDraw_o **v4; // x19
  struct QuestEntity_o *questEntity; // x21
  WarEntity_o *warEntity; // x22
  const MethodInfo *v7; // x3
  _BOOL4 HasFlag; // w23
  _BOOL8 IsChapterSubIdJapaneseNumeralsNormal; // x0
  UILabel_o *v10; // x22
  UISprite_o *v11; // x22
  RecommendSupportQuestBoardListViewItemDraw_o *v12; // x0
  const MethodInfo *v13; // x2
  System_String_o *QuestIconNameForMainType; // x21
  int32_t QuestBoardSectionId; // w0
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  int v19; // w21
  UISprite_o *v20; // x20
  RecommendSupportQuestBoardListViewItemDraw_c *v21; // x0
  System_String_o *CHAPTER_SP_UNIT_NAME; // x22
  Il2CppObject *v23; // x0
  System_String_o *v24; // x21
  int v25; // [xsp+Ch] [xbp-34h] BYREF

  v4 = (RecommendSupportQuestBoardListViewItemDraw_o **)this;
  if ( (byte_4A573E8 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    this = (RecommendSupportQuestBoardListViewItemDraw_o *)sub_1B885B0(&RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
    byte_4A573E8 = 1;
  }
  if ( !questInfo )
    goto LABEL_36;
  this = v4[16];
  if ( !this )
    goto LABEL_36;
  questEntity = questInfo->fields.questEntity;
  this = (RecommendSupportQuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL);
  if ( !this )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  if ( !questEntity )
    goto LABEL_36;
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
    v10 = (UILabel_o *)v4[16];
    if ( HasFlag || IsChapterSubIdJapaneseNumeralsNormal )
    {
      this = (RecommendSupportQuestBoardListViewItemDraw_o *)RecommendSupportQuestBoardListViewItemDraw__ConvertToChineseAscii(
                                                               (RecommendSupportQuestBoardListViewItemDraw_o *)IsChapterSubIdJapaneseNumeralsNormal,
                                                               questEntity->fields.chapterSubId,
                                                               IsChapterSubIdJapaneseNumeralsNormal,
                                                               v7);
      if ( !v10 )
        goto LABEL_36;
    }
    else
    {
      this = (RecommendSupportQuestBoardListViewItemDraw_o *)System_Int32__ToString((int)questEntity + 116, 0LL);
      if ( !v10 )
        goto LABEL_36;
    }
    UILabel__set_text(v10, (System_String_o *)this, 0LL);
    this = v4[16];
    if ( !this )
      goto LABEL_36;
    this = (RecommendSupportQuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)this,
                                                             0LL);
    if ( !this )
      goto LABEL_36;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  }
  this = v4[14];
  if ( !this )
    goto LABEL_36;
  this = (RecommendSupportQuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL);
  if ( !this )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v11 = (UISprite_o *)v4[14];
  QuestIconNameForMainType = RecommendSupportQuestBoardListViewItemDraw__GetQuestIconNameForMainType(
                               v12,
                               questEntity,
                               v13);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  this = (RecommendSupportQuestBoardListViewItemDraw_o *)AtlasManager__SetEventUI(v11, QuestIconNameForMainType, 0LL);
  if ( !v11 )
    goto LABEL_36;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v11, (unsigned __int8)this & 1, 0LL);
  this = v4[14];
  if ( !this )
    goto LABEL_36;
  ((void (__fastcall *)(RecommendSupportQuestBoardListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
    this,
    this->klass[2]._1.interopData);
  this = (RecommendSupportQuestBoardListViewItemDraw_o *)questInfo->fields.warEntity;
  if ( !this )
    goto LABEL_36;
  QuestBoardSectionId = WarEntity__GetQuestBoardSectionId((WarEntity_o *)this, 0LL);
  if ( !QuestBoardSectionId )
    return;
  v19 = QuestBoardSectionId;
  v20 = (UISprite_o *)v4[15];
  v21 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
  if ( !RecommendSupportQuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
    v21 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
  }
  CHAPTER_SP_UNIT_NAME = v21->static_fields->CHAPTER_SP_UNIT_NAME;
  v25 = v19;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25, v16, v17, v18);
  v24 = System_String__Format(CHAPTER_SP_UNIT_NAME, v23, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  this = (RecommendSupportQuestBoardListViewItemDraw_o *)AtlasManager__SetEventUI(v20, v24, 0LL);
  if ( !v20
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v20, (unsigned __int8)this & 1, 0LL),
        (this = v4[15]) == 0LL) )
  {
LABEL_36:
    sub_1B8880C(this, questInfo);
  }
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
  if ( (byte_4A573EC & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    this = (RecommendSupportQuestBoardListViewItemDraw_o *)sub_1B885B0(&RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
    byte_4A573EC = 1;
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
  AtlasManager__SetFaceImage(labelFaceIcon, ServantId, LimitCount, 0LL);
  this = (RecommendSupportQuestBoardListViewItemDraw_o *)v15->fields.labelFaceIcon;
  if ( !this )
    goto LABEL_23;
  v27.fields.r = r;
  v27.fields.g = g;
  v27.fields.b = b;
  v27.fields.a = a;
  UIWidget__set_color((UIWidget_o *)this, v27, 0LL);
  if ( !maskSprite )
    goto LABEL_23;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)maskSprite, 1, 0LL);
  v28.fields.r = r;
  v28.fields.g = g;
  v28.fields.b = b;
  v28.fields.a = a;
  UIWidget__set_color((UIWidget_o *)maskSprite, v28, 0LL);
  bannerId = questEnt->fields.bannerId;
  v20 = (_DWORD)questEnt + 64;
  if ( bannerId < 1 )
  {
    UISprite__set_atlas(maskSprite, v15->fields.terminalAtlas, 0LL);
    UISprite__set_spriteName(maskSprite, maskSpriteName, 0LL);
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
    v24 = System_Int32__ToString(v20, 0LL);
    maskSpriteName = System_String__Concat_61707032(QUEST_BOARD_MASK_SPNAME_PREFIX, v24, 0LL);
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
    sub_1B8880C(this, questEnt);
  }
  return 1;
}


void __fastcall RecommendSupportQuestBoardListViewItemDraw__SetItem(
        RecommendSupportQuestBoardListViewItemDraw_o *this,
        RecommendSupportQuestBoardListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *baseSprite; // x0
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x3
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( item )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !byte_4A55CE6 )
    {
      sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
      byte_4A55CE6 = 1;
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
    v10.fields.r = 1.0;
    v10.fields.g = 1.0;
    v10.fields.b = 1.0;
    v10.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)baseSprite, v10, 0LL);
    baseSprite = (UnityEngine_Component_o *)this->fields.baseSprite;
    if ( !baseSprite
      || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)baseSprite, 1, 0LL),
          (baseSprite = (UnityEngine_Component_o *)this->fields.classIconRoot) == 0LL)
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, 0, 0LL),
          (baseSprite = (UnityEngine_Component_o *)this->fields.questBoardMessage) == 0LL)
      || (baseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseSprite, 0LL)) == 0LL )
    {
LABEL_15:
      sub_1B8880C(baseSprite, v6);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, 0, 0LL);
    if ( item->fields._QuestInfo_k__BackingField )
      RecommendSupportQuestBoardListViewItemDraw__SetItemOfQuest(
        this,
        item,
        item->fields._IsQuestRestriction_k__BackingField,
        v9);
    else
      RecommendSupportQuestBoardListViewItemDraw__SetItemOfArea(this, item, v8);
  }
}


void __fastcall RecommendSupportQuestBoardListViewItemDraw__SetItemOfArea(
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
  Il2CppObject *v15; // x0
  System_String_o *v16; // x8
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_String_o *v20; // x22
  UnityEngine_Object_o *settingAreaSp; // x23
  bool v22; // w0
  __int64 v23; // x8
  UISprite_o *baseSprite; // x20
  int32_t PrioredBannerId; // [xsp+4h] [xbp-3Ch] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A573E3 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_EventMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_17801/*"chaldea_category_{0}"*/);
    sub_1B885B0(&StringLiteral_22714/*"questboard_cap{0:D3}"*/);
    byte_4A573E3 = 1;
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
  labelObj = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !labelObj )
    goto LABEL_35;
  v9 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)labelObj,
         &entity,
         warEntity->fields.eventId,
         (const MethodInfo_311D988 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
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
    if ( WarEntity__IsFolder(warEntity, 0LL) && !WarEntity__HasFlag(warEntity, 128, 0LL) )
    {
      PrioredBannerId = WarEntity__GetPrioredBannerId(warEntity, 0LL);
      v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PrioredBannerId, v17, v18, v19);
      v16 = (System_String_o *)StringLiteral_17801/*"chaldea_category_{0}"*/;
    }
    else
    {
      PrioredBannerId = WarEntity__GetPrioredBannerId(warEntity, 0LL);
      v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PrioredBannerId, v12, v13, v14);
      v16 = (System_String_o *)StringLiteral_22714/*"questboard_cap{0:D3}"*/;
    }
    EventAddBannerSpriteName = System_String__Format(v16, v15, 0LL);
  }
  v20 = EventAddBannerSpriteName;
  settingAreaSp = (UnityEngine_Object_o *)this->fields.settingAreaSp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(settingAreaSp, 0LL, 0LL) )
  {
    labelObj = this->fields.settingAreaSp;
    if ( !labelObj )
      goto LABEL_35;
    UnityEngine_GameObject__SetActive(labelObj, item->fields._IsSetting_k__BackingField, 0LL);
    v22 = System_Linq_Enumerable__Contains_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.parentFolderWarId,
            warEntity->fields.id,
            (const MethodInfo_2E99A14 *)Method_System_Linq_Enumerable_Contains_int___);
    v23 = 32LL;
    if ( v22 )
      v23 = 36LL;
    GameObjectExtensions__SetLocalPositionY(
      this->fields.settingAreaSp,
      (float)*(int *)((char *)&this->klass + v23),
      0LL);
  }
  baseSprite = this->fields.baseSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBanner(baseSprite, v20, 0LL);
  labelObj = (UnityEngine_GameObject_o *)this->fields.baseSprite;
  if ( !labelObj
    || (((void (__fastcall *)(UnityEngine_GameObject_o *, void *))labelObj->klass[2]._1.typeMetadataHandle)(
          labelObj,
          labelObj->klass[2]._1.interopData),
        (labelObj = (UnityEngine_GameObject_o *)this->fields.baseSprite) == 0LL)
    || (labelObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelObj, 0LL)) == 0LL )
  {
LABEL_35:
    sub_1B8880C(labelObj, item);
  }
  UnityEngine_GameObject__SetActive(labelObj, 1, 0LL);
}


void __fastcall RecommendSupportQuestBoardListViewItemDraw__SetItemOfQuest(
        RecommendSupportQuestBoardListViewItemDraw_o *this,
        RecommendSupportQuestBoardListViewItem_o *item,
        bool isQuestRestriction,
        const MethodInfo *method)
{
  __int64 v7; // x20
  void *labelObj; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  struct RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *QuestInfo_k__BackingField; // x23
  QuestEntity_o *questEntity; // x21
  __int64 type; // x24
  int32_t phase; // w22
  UILabel_o *questBoardMessageTitle; // x27
  UnityEngine_Object_o *restrictionMaskSp; // x27
  UnityEngine_Object_o *restrictionMessage; // x27
  const MethodInfo *v19; // x4
  UILabel_o *v20; // x26
  RecommendSupportQuestBoardListViewItemDraw_c *v26; // x0
  System_String_o *QUEST_BOARD_SPNAME_PREFIX; // x27
  System_String_o *v28; // x0
  System_String_o *v29; // x0
  UISprite_o *v30; // x26
  System_String_o *v31; // x27
  UISprite_o *baseSprite; // x26
  __int64 v33; // x8
  System_String_o *v34; // x27
  System_String_o *v35; // x0
  System_String_o *v36; // x27
  UISprite_o *v37; // x26
  __int64 v38; // x8
  System_String_o *RecommendLv_39472304; // x0
  const MethodInfo *v40; // x2
  const MethodInfo *v41; // x2
  RecommendSupportQuestBoardListViewItemDraw_o *v42; // x0
  UISprite_o *labelFaceMaskQuestSp; // x26
  int32_t m_CachedPtr; // w27
  System_String_o *FaceMaskSpriteName; // x0
  const MethodInfo *v46; // x5
  bool v47; // w0
  const MethodInfo *v48; // x3
  UILabel_o *titleNameLb; // x26
  const MethodInfo *v50; // x3
  struct WarEntity_o *warEntity; // x8
  const MethodInfo *v52; // x2
  UISprite_o *labelNameSp; // x23
  RecommendSupportQuestBoardListViewItemDraw_o *v54; // x0
  const MethodInfo *v55; // x3
  System_String_o *QuestIconName; // x24
  System_Action_o *v57; // x23
  const MethodInfo *v58; // x3
  UILabel_o *v59; // x23
  UnityEngine_GameObject_o *phaseObj; // x23
  UnityEngine_GameObject_o *v61; // x25
  UnityEngine_GameObject_o *v62; // x24
  char v63; // w8
  int v64; // w28
  UILabel_o *phaseNumLb; // x23
  System_String_o *v66; // x24
  __int64 v67; // x2
  __int64 v68; // x3
  __int64 v69; // x4
  Il2CppObject *v70; // x25
  __int64 v71; // x2
  __int64 v72; // x3
  __int64 v73; // x4
  Il2CppObject *v74; // x0
  QuestPhaseEntity_o *Entity; // x0
  QuestPhaseEntity_o *v76; // x22
  struct System_Int32_array *classIds; // x8
  bool v78; // w21
  struct ServantClassIconComponent_array *classIcons; // x8
  int max_length; // w9
  int v81; // w23
  struct System_Int32_array *v82; // x22
  il2cpp_array_size_t v83; // w9
  __int64 v84; // x24
  Il2CppClass **v85; // x8
  UnityEngine_Component_o *v86; // x21
  int v87; // [xsp+8h] [xbp-68h] BYREF
  int32_t v88; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4A573E4 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
    sub_1B885B0(&Method_RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass55_0__SetItemOfQuest_b__0__);
    sub_1B885B0(&RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass55_0_TypeInfo);
    sub_1B885B0(&StringLiteral_11028/*"RECOMMEND_SUPPORT_QUEST_SELECT_PHASE_INFO"*/);
    sub_1B885B0(&StringLiteral_11026/*"RECOMMEND_SUPPORT_QUEST_SELECT_MESSAGE_TITLE"*/);
    sub_1B885B0(&StringLiteral_11029/*"RECOMMEND_SUPPORT_QUEST_SELECT_RESTRICTION"*/);
    byte_4A573E4 = 1;
  }
  v7 = sub_1B887FC(RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass55_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_132;
  *(_QWORD *)(v7 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  if ( !item )
    goto LABEL_132;
  QuestInfo_k__BackingField = item->fields._QuestInfo_k__BackingField;
  if ( !QuestInfo_k__BackingField )
    goto LABEL_132;
  questEntity = QuestInfo_k__BackingField->fields.questEntity;
  if ( !questEntity )
    goto LABEL_132;
  labelObj = this->fields.labelObj;
  if ( !labelObj )
    goto LABEL_132;
  type = (unsigned int)questEntity->fields.type;
  phase = QuestInfo_k__BackingField->fields.phase;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)labelObj, 1, 0LL);
  labelObj = this->fields.labelNameSp;
  if ( !labelObj )
    goto LABEL_132;
  labelObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelObj, 0LL);
  if ( !labelObj )
    goto LABEL_132;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)labelObj, 0, 0LL);
  labelObj = this->fields.labelChapterSp;
  if ( !labelObj )
    goto LABEL_132;
  labelObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelObj, 0LL);
  if ( !labelObj )
    goto LABEL_132;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)labelObj, 0, 0LL);
  labelObj = this->fields.titleObj;
  if ( !labelObj )
    goto LABEL_132;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)labelObj, 1, 0LL);
  labelObj = this->fields.labelFaceMaskQuestSp;
  if ( !labelObj )
    goto LABEL_132;
  labelObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelObj, 0LL);
  if ( !labelObj )
    goto LABEL_132;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)labelObj, 1, 0LL);
  labelObj = this->fields.questBoardMessage;
  if ( !labelObj )
    goto LABEL_132;
  labelObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelObj, 0LL);
  if ( !labelObj )
    goto LABEL_132;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)labelObj, 1, 0LL);
  labelObj = this->fields.questBoardMessage;
  if ( !labelObj )
    goto LABEL_132;
  UILabel__set_text((UILabel_o *)labelObj, QuestInfo_k__BackingField->fields.message, 0LL);
  questBoardMessageTitle = this->fields.questBoardMessageTitle;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  labelObj = LocalizationManager__Get((System_String_o *)StringLiteral_11026/*"RECOMMEND_SUPPORT_QUEST_SELECT_MESSAGE_TITLE"*/, 0LL);
  if ( !questBoardMessageTitle )
    goto LABEL_132;
  UILabel__set_text(questBoardMessageTitle, (System_String_o *)labelObj, 0LL);
  restrictionMaskSp = (UnityEngine_Object_o *)this->fields.restrictionMaskSp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSp, 0LL, 0LL) )
  {
    labelObj = this->fields.restrictionMaskSp;
    if ( !labelObj )
      goto LABEL_132;
    labelObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelObj, 0LL);
    if ( !labelObj )
      goto LABEL_132;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)labelObj, isQuestRestriction, 0LL);
  }
  restrictionMessage = (UnityEngine_Object_o *)this->fields.restrictionMessage;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMessage, 0LL, 0LL) )
  {
    labelObj = this->fields.restrictionMessage;
    if ( !labelObj )
      goto LABEL_132;
    labelObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelObj, 0LL);
    if ( !labelObj )
      goto LABEL_132;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)labelObj, isQuestRestriction, 0LL);
    v20 = this->fields.restrictionMessage;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    labelObj = LocalizationManager__Get((System_String_o *)StringLiteral_11029/*"RECOMMEND_SUPPORT_QUEST_SELECT_RESTRICTION"*/, 0LL);
    if ( !v20 )
      goto LABEL_132;
    UILabel__set_text(v20, (System_String_o *)labelObj, 0LL);
  }
  RecommendSupportQuestBoardListViewItemDraw__DispSettingQuestInfo(
    this,
    item->fields._IsSetting_k__BackingField,
    item->fields._SettingSelectIndex_k__BackingField,
    item->fields._SettingSvtName_k__BackingField,
    v19);
  __asm { FMOV            V0.4S, #1.0 }
  *(_OWORD *)(v7 + 24) = _Q0;
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
      v33 = *(_QWORD *)(*((_QWORD *)labelObj + 23) + 96LL);
      if ( !v33 )
        goto LABEL_132;
      if ( (unsigned int)type >= *(_DWORD *)(v33 + 24) )
        goto LABEL_140;
      v34 = *(System_String_o **)(v33 + 8 * type + 32);
      v35 = System_Int32__ToString((int)questEntity + 60, 0LL);
      v36 = System_String__Concat_61707032(v34, v35, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetBanner(baseSprite, v36, 0LL);
    }
    else
    {
      if ( !baseSprite )
        goto LABEL_132;
      UISprite__set_atlas(this->fields.baseSprite, this->fields.terminalAtlas, 0LL);
      labelObj = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
      v37 = this->fields.baseSprite;
      if ( !RecommendSupportQuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
        labelObj = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
      }
      v38 = *(_QWORD *)(*((_QWORD *)labelObj + 23) + 96LL);
      if ( !v38 )
        goto LABEL_132;
      if ( (unsigned int)type >= *(_DWORD *)(v38 + 24) )
        goto LABEL_140;
      if ( !v37 )
        goto LABEL_132;
      UISprite__set_spriteName(v37, *(System_String_o **)(v38 + 8LL * (int)type + 32), 0LL);
    }
  }
  else
  {
    v26 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
    if ( !RecommendSupportQuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
      v26 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
    }
    QUEST_BOARD_SPNAME_PREFIX = v26->static_fields->QUEST_BOARD_SPNAME_PREFIX;
    v28 = System_Int32__ToString((int)questEntity + 64, 0LL);
    v29 = System_String__Concat_61707032(QUEST_BOARD_SPNAME_PREFIX, v28, 0LL);
    v30 = this->fields.baseSprite;
    v31 = v29;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    labelObj = (void *)AtlasManager__SetEventUI(v30, v31, 0LL);
    if ( !v30 )
      goto LABEL_132;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v30, (unsigned __int8)labelObj & 1, 0LL);
  }
  labelObj = this->fields.baseSprite;
  if ( !labelObj )
    goto LABEL_132;
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)labelObj + 840LL))(
    labelObj,
    *(_QWORD *)(*(_QWORD *)labelObj + 848LL));
  RecommendLv_39472304 = QuestEntity__getRecommendLv_39472304(questEntity, phase, 0LL);
  RecommendSupportQuestBoardListViewItemDraw__SetRecommendLv(
    this,
    RecommendLv_39472304,
    *(UnityEngine_Color_o *)(v7 + 24),
    v40);
  v42 = (RecommendSupportQuestBoardListViewItemDraw_o *)RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
  labelFaceMaskQuestSp = this->fields.labelFaceMaskQuestSp;
  if ( !RecommendSupportQuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
    v42 = (RecommendSupportQuestBoardListViewItemDraw_o *)RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
  }
  m_CachedPtr = v42->fields.labelFaceObj[2].fields.m_CachedPtr;
  FaceMaskSpriteName = RecommendSupportQuestBoardListViewItemDraw__GetFaceMaskSpriteName(v42, type, v41);
  v47 = RecommendSupportQuestBoardListViewItemDraw__SetFaceImage(
          this,
          questEntity,
          labelFaceMaskQuestSp,
          m_CachedPtr,
          FaceMaskSpriteName,
          *(UnityEngine_Color_o *)(v7 + 24),
          v46);
  titleNameLb = this->fields.titleNameLb;
  if ( v47 )
  {
    labelObj = RecommendSupportQuestBoardListViewItemDraw__GetDispQuestName(this, questEntity, type, v48);
    if ( !titleNameLb )
      goto LABEL_132;
    UILabel__set_text(titleNameLb, (System_String_o *)labelObj, 0LL);
  }
  else
  {
    labelObj = QuestEntity__getQuestName(questEntity, 0LL);
    if ( !titleNameLb )
      goto LABEL_132;
    UILabel__set_text(titleNameLb, (System_String_o *)labelObj, 0LL);
    if ( (_DWORD)type != 1 )
      goto LABEL_70;
    warEntity = QuestInfo_k__BackingField->fields.warEntity;
    if ( !warEntity )
      goto LABEL_132;
    if ( RecommendSupportQuestBoardListViewItemDraw__IsMainWar(
           (RecommendSupportQuestBoardListViewItemDraw_o *)labelObj,
           warEntity->fields.id,
           warEntity->fields.eventId,
           v50) )
    {
      RecommendSupportQuestBoardListViewItemDraw__SetChapterSubIdDisp(this, QuestInfo_k__BackingField, v52);
    }
    else
    {
LABEL_70:
      labelObj = this->fields.boardIconTexture;
      if ( !labelObj )
        goto LABEL_132;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)labelObj, 0, 0LL);
      labelObj = this->fields.labelNameSp;
      if ( !labelObj )
        goto LABEL_132;
      labelObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelObj, 0LL);
      if ( !labelObj )
        goto LABEL_132;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)labelObj, 1, 0LL);
      labelNameSp = this->fields.labelNameSp;
      QuestIconName = RecommendSupportQuestBoardListViewItemDraw__GetQuestIconName(v54, questEntity, type, v55);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      labelObj = (void *)AtlasManager__SetEventUI(labelNameSp, QuestIconName, 0LL);
      if ( !labelNameSp )
        goto LABEL_132;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)labelNameSp, (unsigned __int8)labelObj & 1, 0LL);
      labelObj = this->fields.labelNameSp;
      if ( !labelObj )
        goto LABEL_132;
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)labelObj + 840LL))(
        labelObj,
        *(_QWORD *)(*(_QWORD *)labelObj + 848LL));
      labelObj = this->fields.labelNameSp;
      if ( !labelObj )
        goto LABEL_132;
      labelObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelObj, 0LL);
      if ( !labelObj )
        goto LABEL_132;
      labelObj = UnityEngine_GameObject__GetComponent_object_(
                   (UnityEngine_GameObject_o *)labelObj,
                   (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
      if ( !labelObj )
        goto LABEL_132;
      UIWidget__set_color((UIWidget_o *)labelObj, *(UnityEngine_Color_o *)(v7 + 24), 0LL);
      labelObj = this->fields.labelNameSp;
      if ( !labelObj )
        goto LABEL_132;
      if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)labelObj, 0LL) )
      {
        *(_DWORD *)(v7 + 40) = questEntity->fields.id;
        v57 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
        System_Action___ctor(
          v57,
          (Il2CppObject *)v7,
          Method_RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass55_0__SetItemOfQuest_b__0__,
          0LL);
        RecommendSupportQuestBoardListViewItemDraw__LoadBoardIconTexture(this, questEntity, v57, v58);
      }
    }
  }
  labelObj = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
  v59 = this->fields.titleNameLb;
  if ( !RecommendSupportQuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
  if ( !v59 )
    goto LABEL_132;
  UILabel__SetCondensedScale(
    v59,
    RecommendSupportQuestBoardListViewItemDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH,
    0LL);
  labelObj = this->fields.titleNameLb;
  if ( !labelObj )
    goto LABEL_132;
  UIWidget__set_color((UIWidget_o *)labelObj, *(UnityEngine_Color_o *)(v7 + 24), 0LL);
  phaseObj = this->fields.phaseObj;
  labelObj = (void *)QuestEntity__HasFlag(questEntity, 0x4000LL, 0LL);
  v61 = ((unsigned __int8)labelObj & 1) != 0 ? 0LL : phaseObj;
  if ( ((unsigned __int8)labelObj & 1) != 0
    || ((labelObj = (void *)QuestEntity__HasFlag(questEntity, 0x10000LL, 0LL), ((unsigned __int8)labelObj & 1) == 0)
      ? (v62 = v61)
      : (v62 = 0LL),
        ((unsigned __int8)labelObj & 1) != 0) )
  {
    v63 = 0;
  }
  else
  {
    labelObj = (void *)QuestEntity__HasFlag(questEntity, 512LL, 0LL);
    if ( ((unsigned __int8)labelObj & 1) != 0 )
    {
      v63 = 0;
      phaseObj = v61;
    }
    else
    {
      labelObj = (void *)QuestEntity__HasFlag(questEntity, 0x4000000LL, 0LL);
      if ( ((unsigned __int8)labelObj & 1) != 0 )
      {
        v63 = 0;
      }
      else
      {
        labelObj = (void *)QuestEntity__HasFlag(questEntity, 0x2000000000LL, 0LL);
        v63 = (unsigned __int8)labelObj ^ 1;
      }
      phaseObj = v62;
    }
  }
  if ( !phaseObj )
    goto LABEL_132;
  UnityEngine_GameObject__SetActive(phaseObj, v63 & 1, 0LL);
  labelObj = this->fields.phaseObj;
  if ( !labelObj )
    goto LABEL_132;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)labelObj, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    labelObj = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !labelObj )
      goto LABEL_132;
    labelObj = QuestPhaseMaster__getList((QuestPhaseMaster_o *)labelObj, questEntity->fields.id, 0LL);
    if ( !labelObj )
      goto LABEL_132;
    v64 = *((_DWORD *)labelObj + 6);
    phaseNumLb = this->fields.phaseNumLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v66 = LocalizationManager__Get((System_String_o *)StringLiteral_11028/*"RECOMMEND_SUPPORT_QUEST_SELECT_PHASE_INFO"*/, 0LL);
    v88 = phase;
    v70 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v88, v67, v68, v69);
    v87 = v64;
    v74 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v87, v71, v72, v73);
    labelObj = System_String__Format_61721404(v66, v70, v74, 0LL);
    if ( !phaseNumLb )
      goto LABEL_132;
    UILabel__set_text(phaseNumLb, (System_String_o *)labelObj, 0LL);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  labelObj = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !labelObj )
    goto LABEL_132;
  Entity = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)labelObj, questEntity->fields.id, phase, 0LL);
  v76 = Entity;
  v78 = Entity
     && (classIds = Entity->fields.classIds) != 0LL
     && *(_QWORD *)&classIds->max_length
     && !QuestEntity__HasFlag(questEntity, 2048LL, 0LL);
  labelObj = this->fields.classIconRoot;
  if ( !labelObj )
    goto LABEL_132;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)labelObj, v78, 0LL);
  labelObj = this->fields.classStrSp;
  if ( !labelObj )
    goto LABEL_132;
  UIWidget__set_color((UIWidget_o *)labelObj, *(UnityEngine_Color_o *)(v7 + 24), 0LL);
  if ( !v78 )
    return;
  if ( !v76 || (classIcons = this->fields.classIcons) == 0LL )
LABEL_132:
    sub_1B8880C(labelObj, v9);
  max_length = classIcons->max_length;
  v81 = max_length - 1;
  if ( max_length >= 1 )
  {
    v82 = v76->fields.classIds;
    v83 = 0;
    while ( v83 < classIcons->max_length )
    {
      v84 = (int)v83;
      v85 = &classIcons->obj.klass + (int)v83;
      v86 = (UnityEngine_Component_o *)v85[4];
      if ( !v86 )
        goto LABEL_132;
      labelObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v85[4], 0LL);
      if ( !v82 )
        goto LABEL_132;
      if ( !labelObj )
        goto LABEL_132;
      UnityEngine_GameObject__SetActive(
        (UnityEngine_GameObject_o *)labelObj,
        (int)v84 < (signed int)v82->max_length,
        0LL);
      labelObj = UnityEngine_Component__get_gameObject(v86, 0LL);
      if ( !labelObj )
        goto LABEL_132;
      labelObj = (void *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)labelObj, 0LL);
      if ( ((unsigned __int8)labelObj & 1) != 0 )
      {
        if ( (unsigned int)v84 >= v82->max_length )
          break;
        ServantClassIconComponent__Set((ServantClassIconComponent_o *)v86, v82->m_Items[v84 + 1], 0LL);
        ServantClassIconComponent__SetColor((ServantClassIconComponent_o *)v86, *(UnityEngine_Color_o *)(v7 + 24), 0LL);
      }
      if ( v81 == (_DWORD)v84 )
        return;
      classIcons = this->fields.classIcons;
      v83 = v84 + 1;
      if ( !classIcons )
        goto LABEL_132;
    }
LABEL_140:
    sub_1B88814(labelObj, v9);
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
  UnityEngine_GameObject_o *titleLevelRoot; // x20
  UnityEngine_Component_o *IsNullOrEmpty; // x0
  __int64 v12; // x1
  Il2CppObject *Component_object; // x20
  UnityEngine_GameObject_o *v14; // x21
  float v15; // s0
  float v16; // s0
  float v17; // s8
  struct UILabel_o *titleLevelLb; // x8
  UnityEngine_Object_o *v19; // x20
  int mWidth; // s8
  float klass_low; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = baseColor.fields.a;
  b = baseColor.fields.b;
  g = baseColor.fields.g;
  r = baseColor.fields.r;
  if ( (byte_4A573F0 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_CondensedScaleSprite___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A573F0 = 1;
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
                         (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_CondensedScaleSprite___);
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
        v23.fields.r = r;
        v23.fields.g = g;
        v23.fields.b = b;
        v23.fields.a = a;
        UIWidget__set_color((UIWidget_o *)IsNullOrEmpty, v23, 0LL);
        IsNullOrEmpty = (UnityEngine_Component_o *)this->fields.titleLevelSp;
        if ( IsNullOrEmpty )
        {
          v24.fields.r = r;
          v24.fields.g = g;
          v24.fields.b = b;
          v24.fields.a = a;
          UIWidget__set_color((UIWidget_o *)IsNullOrEmpty, v24, 0LL);
          IsNullOrEmpty = (UnityEngine_Component_o *)this->fields.titleLevelStrSp;
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
              IsNullOrEmpty = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(IsNullOrEmpty, 0LL);
              if ( this->fields.titleLevelStrSp )
              {
                v14 = (UnityEngine_GameObject_o *)IsNullOrEmpty;
                IsNullOrEmpty = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                             (UnityEngine_Component_o *)this->fields.titleLevelStrSp,
                                                             0LL);
                if ( IsNullOrEmpty )
                {
                  LODWORD(v15) = (unsigned int)UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)IsNullOrEmpty,
                                                 0LL);
                  GameObjectExtensions__SetLocalPositionX(v14, v15, 0LL);
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
                      v16 = CondensedScaleSprite__GetAfterAdjustWidth((CondensedScaleSprite_o *)Component_object, 0LL);
                      IsNullOrEmpty = (UnityEngine_Component_o *)this->fields.titleLevelSp;
                      if ( IsNullOrEmpty )
                      {
                        v17 = (float)(SLODWORD(IsNullOrEmpty[7].klass) / 2) + (float)(v16 * -0.5);
LABEL_36:
                        gameObject = UnityEngine_Component__get_gameObject(IsNullOrEmpty, 0LL);
                        GameObjectExtensions__AddLocalPositionX(gameObject, v17, 0LL);
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
                                                                   (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
                      titleLevelLb = this->fields.titleLevelLb;
                      if ( titleLevelLb )
                      {
                        v19 = (UnityEngine_Object_o *)IsNullOrEmpty;
                        mWidth = titleLevelLb->fields.mWidth;
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        klass_low = (float)mWidth;
                        IsNullOrEmpty = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v19, 0LL, 0LL);
                        if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
                        {
                          if ( !v19 )
                            goto LABEL_37;
                          if ( klass_low > (float)SLODWORD(v19[2].klass) )
                            klass_low = (float)SLODWORD(v19[2].klass);
                        }
                        IsNullOrEmpty = (UnityEngine_Component_o *)this->fields.titleLevelSp;
                        if ( IsNullOrEmpty )
                        {
                          v17 = klass_low * -0.5;
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
    sub_1B8880C(IsNullOrEmpty, v12);
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
      sub_1B8880C(this, method);
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
  struct RecommendSupportQuestBoardListViewItemDraw_o *_4__this; // x8
  int32_t v6; // w2
  int32_t v7; // w3
  RecommendSupportQuestBoardListViewItemDraw_c *v8; // x0
  System_String_o *v9; // x19
  struct RecommendSupportQuestBoardListViewItemDraw_o *v10; // x8
  UnityEngine_Shader_o *v11; // x21
  UnityEngine_Material_o *v12; // x20
  struct RecommendSupportQuestBoardListViewItemDraw_o *v13; // x8
  struct RecommendSupportQuestBoardListViewItemDraw_o *v14; // x8
  struct RecommendSupportQuestBoardListViewItemDraw_o *v15; // x8
  AssetData_o *boardIconAssetData; // x21
  Il2CppObject *Object_object__48635516; // x0

  v4 = this;
  if ( (byte_4A573F4 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_Texture2D____76085376);
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Material_TypeInfo);
    sub_1B885B0(&RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&StringLiteral_16526/*"_alpha"*/);
    sub_1B885B0(&StringLiteral_4975/*"Custom/SpriteWithMask"*/);
    this = (RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass66_0_o *)sub_1B885B0(&StringLiteral_16267/*"_MaskTex"*/);
    byte_4A573F4 = 1;
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
    v10 = v4->fields.__4__this;
    if ( v10 )
    {
      v10->fields.boardIconAssetData = assetData;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v10->fields.boardIconAssetData, (int32_t)assetData, v6, v7);
      v11 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4975/*"Custom/SpriteWithMask"*/, 0LL);
      v12 = (UnityEngine_Material_o *)sub_1B887FC(UnityEngine_Material_TypeInfo);
      UnityEngine_Material___ctor(v12, v11, 0LL);
      v13 = v4->fields.__4__this;
      if ( v13 )
      {
        this = (RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass66_0_o *)v13->fields.boardIconTexture;
        if ( this )
        {
          this = (RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass66_0_o *)((__int64 (__fastcall *)(RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass66_0_o *, UnityEngine_Material_o *, Il2CppMethodPointer))this->klass[1].vtable._2_GetHashCode.method)(
                                                                                         this,
                                                                                         v12,
                                                                                         this->klass[1].vtable._3_ToString.methodPtr);
          v14 = v4->fields.__4__this;
          if ( v14 )
          {
            this = (RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass66_0_o *)v14->fields.boardIconAssetData;
            if ( this )
            {
              this = (RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass66_0_o *)AssetData__GetObject_object__48635516(
                                                                                             (AssetData_o *)this,
                                                                                             v14->fields.boardIconName,
                                                                                             (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_Texture2D____76085376);
              if ( v12 )
              {
                UnityEngine_Material__set_mainTexture(v12, (UnityEngine_Texture_o *)this, 0LL);
                v15 = v4->fields.__4__this;
                if ( v15 )
                {
                  boardIconAssetData = v15->fields.boardIconAssetData;
                  this = (RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass66_0_o *)System_String__Concat_61707032(
                                                                                                 v15->fields.boardIconName,
                                                                                                 (System_String_o *)StringLiteral_16526/*"_alpha"*/,
                                                                                                 0LL);
                  if ( boardIconAssetData )
                  {
                    Object_object__48635516 = AssetData__GetObject_object__48635516(
                                                boardIconAssetData,
                                                (System_String_o *)this,
                                                (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_Texture2D____76085376);
                    UnityEngine_Material__SetTexture(
                      v12,
                      (System_String_o *)StringLiteral_16267/*"_MaskTex"*/,
                      (UnityEngine_Texture_o *)Object_object__48635516,
                      0LL);
                    this = (RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass66_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1B8880C(this, assetData);
  }
  v8 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
  if ( !RecommendSupportQuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
    v8 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
  }
  v9 = System_String__Concat_61707032(
         v8->static_fields->QUEST_BOARD_ICON_TEXTURE_PATH,
         v4->fields.loadBoardIconName,
         0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(v9, 0LL);
}