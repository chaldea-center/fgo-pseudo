void __fastcall RecommendSupportQuestBoardListViewItemDraw___cctor(const MethodInfo *method)
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
  int32_t v26; // w3
  int32_t v27; // w1
  struct RecommendSupportQuestBoardListViewItemDraw_StaticFields *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w1
  struct RecommendSupportQuestBoardListViewItemDraw_StaticFields *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w1
  struct RecommendSupportQuestBoardListViewItemDraw_StaticFields *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  int32_t v39; // w1
  struct RecommendSupportQuestBoardListViewItemDraw_StaticFields *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  int32_t v43; // w1
  struct RecommendSupportQuestBoardListViewItemDraw_StaticFields *v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  struct RecommendSupportQuestBoardListViewItemDraw_StaticFields *v47; // x0
  int32_t v48; // w1
  int32_t v49; // w2
  int32_t v50; // w3
  int32_t v51; // w1
  struct RecommendSupportQuestBoardListViewItemDraw_StaticFields *v52; // x0
  int32_t v53; // w2
  int32_t v54; // w3
  int32_t v55; // w1
  struct RecommendSupportQuestBoardListViewItemDraw_StaticFields *v56; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  __int64 v59; // x0
  __int64 v60; // x1
  int32_t v61; // w2
  int32_t v62; // w3
  __int64 v63; // x19
  int32_t v64; // w1
  int32_t v65; // w2
  int32_t v66; // w3
  int32_t v67; // w1
  int32_t v68; // w2
  int32_t v69; // w3
  int32_t v70; // w1
  int32_t v71; // w2
  int32_t v72; // w3
  int32_t v73; // w1
  int32_t v74; // w2
  int32_t v75; // w3
  int32_t v76; // w1
  int32_t v77; // w2
  int32_t v78; // w3
  int32_t v79; // w1
  int32_t v80; // w2
  int32_t v81; // w3
  int32_t v82; // w1
  struct RecommendSupportQuestBoardListViewItemDraw_StaticFields *v83; // x0
  int32_t v84; // w2
  int32_t v85; // w3
  int32_t v86; // w1
  struct RecommendSupportQuestBoardListViewItemDraw_StaticFields *v87; // x0
  int32_t v88; // w2
  int32_t v89; // w3
  int32_t v90; // w1
  struct RecommendSupportQuestBoardListViewItemDraw_StaticFields *v91; // x0
  int32_t v92; // w2
  int32_t v93; // w3

  if ( (byte_49FA813 & 1) == 0 )
  {
    sub_1B64870(&RecommendSupportQuestBoardListViewItemDraw_TypeInfo, v1);
    sub_1B64870(&string___TypeInfo, v4);
    sub_1B64870(&StringLiteral_22608/*"quest_board_icon_"*/, v5);
    sub_1B64870(&StringLiteral_22627/*"questboard_icon_cap{0:D2}"*/, v6);
    sub_1B64870(&StringLiteral_20344/*"img_questboard_story03mask"*/, v7);
    sub_1B64870(&StringLiteral_17733/*"chaldea_category_{0}"*/, v8);
    sub_1B64870(&StringLiteral_20339/*"img_questboard_main_"*/, v9);
    sub_1B64870(&StringLiteral_19217/*"event_war_"*/, v10);
    sub_1B64870(&StringLiteral_20346/*"img_questboard_story05mask"*/, v11);
    sub_1B64870(&StringLiteral_20337/*"img_questboard_hero03"*/, v12);
    sub_1B64870(&StringLiteral_22607/*"quest_board_"*/, v13);
    sub_1B64870(&StringLiteral_20334/*"img_questboard_free_"*/, v14);
    sub_1B64870(&StringLiteral_22609/*"quest_board_mask_"*/, v15);
    sub_1B64870(&StringLiteral_6208/*"EventUI/QuestBoardIcon/"*/, v16);
    sub_1B64870(&StringLiteral_20345/*"img_questboard_story04mask"*/, v17);
    sub_1B64870(&StringLiteral_20343/*"img_questboard_story03"*/, v18);
    sub_1B64870(&StringLiteral_20325/*"img_quest_unit_{0:D2}"*/, v19);
    sub_1B64870(&StringLiteral_1/*""*/, v20);
    byte_49FA813 = 1;
  }
  static_fields = RecommendSupportQuestBoardListViewItemDraw_TypeInfo->static_fields;
  static_fields->TITLE_LABEL_BASE_WIDTH = 256;
  v22 = StringLiteral_19217/*"event_war_"*/;
  static_fields->EVENT_WAR_SPNAME_PREFIX = (struct System_String_o *)StringLiteral_19217/*"event_war_"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->EVENT_WAR_SPNAME_PREFIX, v22, v2, v3);
  v23 = StringLiteral_17733/*"chaldea_category_{0}"*/;
  v24 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo->static_fields;
  v24->EVENT_WAR_SUBFOLDER_SPNAME_PREFIX = (struct System_String_o *)StringLiteral_17733/*"chaldea_category_{0}"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v24->EVENT_WAR_SUBFOLDER_SPNAME_PREFIX, v23, v25, v26);
  v27 = StringLiteral_22607/*"quest_board_"*/;
  v28 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo->static_fields;
  v28->QUEST_BOARD_SPNAME_PREFIX = (struct System_String_o *)StringLiteral_22607/*"quest_board_"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v28->QUEST_BOARD_SPNAME_PREFIX, v27, v29, v30);
  v31 = StringLiteral_22608/*"quest_board_icon_"*/;
  v32 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo->static_fields;
  v32->QUEST_BOARD_ICON_SPNAME_PREFIX = (struct System_String_o *)StringLiteral_22608/*"quest_board_icon_"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v32->QUEST_BOARD_ICON_SPNAME_PREFIX, v31, v33, v34);
  v35 = StringLiteral_22609/*"quest_board_mask_"*/;
  v36 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo->static_fields;
  v36->QUEST_BOARD_MASK_SPNAME_PREFIX = (struct System_String_o *)StringLiteral_22609/*"quest_board_mask_"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v36->QUEST_BOARD_MASK_SPNAME_PREFIX, v35, v37, v38);
  v39 = StringLiteral_6208/*"EventUI/QuestBoardIcon/"*/;
  v40 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo->static_fields;
  v40->QUEST_BOARD_ICON_TEXTURE_PATH = (struct System_String_o *)StringLiteral_6208/*"EventUI/QuestBoardIcon/"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v40->QUEST_BOARD_ICON_TEXTURE_PATH, v39, v41, v42);
  v43 = StringLiteral_22608/*"quest_board_icon_"*/;
  v44 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo->static_fields;
  v44->QUEST_BOARD_ICON_TEXTURE_PREFIX = (struct System_String_o *)StringLiteral_22608/*"quest_board_icon_"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v44->QUEST_BOARD_ICON_TEXTURE_PREFIX, v43, v45, v46);
  v47 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo->static_fields;
  v47->QUEST_FACE_MASK_SP_W = 124;
  v48 = StringLiteral_20344/*"img_questboard_story03mask"*/;
  v47->QUEST_STORY_FACE_MASK_SPNAME = (struct System_String_o *)StringLiteral_20344/*"img_questboard_story03mask"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v47->QUEST_STORY_FACE_MASK_SPNAME, v48, v49, v50);
  v51 = StringLiteral_20345/*"img_questboard_story04mask"*/;
  v52 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo->static_fields;
  v52->QUEST_MAIN_FACE_MASK_SPNAME = (struct System_String_o *)StringLiteral_20345/*"img_questboard_story04mask"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v52->QUEST_MAIN_FACE_MASK_SPNAME, v51, v53, v54);
  v55 = StringLiteral_20346/*"img_questboard_story05mask"*/;
  v56 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo->static_fields;
  v56->QUEST_EVENT_FACE_MASK_SPNAME = (struct System_String_o *)StringLiteral_20346/*"img_questboard_story05mask"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v56->QUEST_EVENT_FACE_MASK_SPNAME, v55, v57, v58);
  v59 = sub_1B64918(string___TypeInfo, 7LL);
  if ( !v59 )
    sub_1B64ACC(0LL, v60);
  v63 = v59;
  if ( !*(_DWORD *)(v59 + 24) )
    goto LABEL_12;
  v64 = (int)StringLiteral_1/*""*/;
  *(_QWORD *)(v59 + 32) = StringLiteral_1/*""*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v59 + 32), v64, v61, v62);
  if ( *(_DWORD *)(v63 + 24) <= 1u )
    goto LABEL_12;
  v67 = StringLiteral_20339/*"img_questboard_main_"*/;
  *(_QWORD *)(v63 + 40) = StringLiteral_20339/*"img_questboard_main_"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v63 + 40), v67, v65, v66);
  if ( *(_DWORD *)(v63 + 24) <= 2u )
    goto LABEL_12;
  v70 = StringLiteral_20334/*"img_questboard_free_"*/;
  *(_QWORD *)(v63 + 48) = StringLiteral_20334/*"img_questboard_free_"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v63 + 48), v70, v68, v69);
  if ( *(_DWORD *)(v63 + 24) <= 3u )
    goto LABEL_12;
  v73 = StringLiteral_20343/*"img_questboard_story03"*/;
  *(_QWORD *)(v63 + 56) = StringLiteral_20343/*"img_questboard_story03"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v63 + 56), v73, v71, v72);
  if ( *(_DWORD *)(v63 + 24) <= 4u
    || (v76 = (int)StringLiteral_1/*""*/,
        *(_QWORD *)(v63 + 64) = StringLiteral_1/*""*/,
        sub_1B64814((ServantStatusBattleListViewItem_o *)(v63 + 64), v76, v74, v75),
        *(_DWORD *)(v63 + 24) <= 5u)
    || (v79 = StringLiteral_20334/*"img_questboard_free_"*/,
        *(_QWORD *)(v63 + 72) = StringLiteral_20334/*"img_questboard_free_"*/,
        sub_1B64814((ServantStatusBattleListViewItem_o *)(v63 + 72), v79, v77, v78),
        *(_DWORD *)(v63 + 24) <= 6u) )
  {
LABEL_12:
    sub_1B64AD4(v59, v60);
  }
  v82 = StringLiteral_20337/*"img_questboard_hero03"*/;
  *(_QWORD *)(v63 + 80) = StringLiteral_20337/*"img_questboard_hero03"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v63 + 80), v82, v80, v81);
  v83 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo->static_fields;
  v83->msQBoardL3Names = (struct System_String_array *)v63;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v83->msQBoardL3Names, v63, v84, v85);
  v86 = StringLiteral_22627/*"questboard_icon_cap{0:D2}"*/;
  v87 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo->static_fields;
  v87->CHAPTER_SP_BASE_NAME = (struct System_String_o *)StringLiteral_22627/*"questboard_icon_cap{0:D2}"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v87->CHAPTER_SP_BASE_NAME, v86, v88, v89);
  v90 = StringLiteral_20325/*"img_quest_unit_{0:D2}"*/;
  v91 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo->static_fields;
  v91->CHAPTER_SP_UNIT_NAME = (struct System_String_o *)StringLiteral_20325/*"img_quest_unit_{0:D2}"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v91->CHAPTER_SP_UNIT_NAME, v90, v92, v93);
}


void __fastcall RecommendSupportQuestBoardListViewItemDraw___ctor(
        RecommendSupportQuestBoardListViewItemDraw_o *this,
        const MethodInfo *method)
{
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

  if ( (byte_49FA80E & 1) == 0 )
  {
    sub_1B64870(&System_Text_StringBuilder_TypeInfo, *(_QWORD *)&n);
    sub_1B64870(&StringLiteral_1213/*"0"*/, v6);
    byte_49FA80E = 1;
  }
  if ( n <= 0 )
    return (System_String_o *)StringLiteral_1213/*"0"*/;
  if ( isUppercase )
    v7 = 32;
  else
    v7 = 0;
  v8 = n % 0xAu;
  v9 = 96 - v7;
  v10 = (System_Text_StringBuilder_o *)sub_1B64ABC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_60538824(v10, 5, 0LL);
  if ( n >= 10 )
  {
    if ( n >= 100 )
    {
      v15 = n / 0x64u % 0xA;
      if ( v15 >= 2 )
      {
        if ( !v10 )
          goto LABEL_25;
        System_Text_StringBuilder__Append_60547800(v10, v9 | v15, 0LL);
      }
      else if ( !v10 )
      {
LABEL_25:
        sub_1B64ACC(v11, v12);
      }
      System_Text_StringBuilder__Append_60547800(v10, 107 - v7, 0LL);
      v14 = n / 0xAu % 0xA;
    }
    else
    {
      if ( !v10 )
        goto LABEL_25;
      v14 = (unsigned __int8)n / 0xAu % 0xA;
    }
    if ( v14 >= 2 )
      System_Text_StringBuilder__Append_60547800(v10, v9 | v14, 0LL);
    System_Text_StringBuilder__Append_60547800(v10, 106 - v7, 0LL);
    if ( !v8 )
      return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v10->klass->vtable._3_ToString.method)(
                                  v10,
                                  v10->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  }
  else if ( !v10 )
  {
    goto LABEL_25;
  }
  System_Text_StringBuilder__Append_60547800(v10, v9 | v8, 0LL);
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
  UnityEngine_Object_o *settingQuestLb; // x23
  UnityEngine_Component_o *v17; // x1
  UnityEngine_Component_o *gameObject; // x0
  UILabel_o *v19; // x23
  System_String_o *v20; // x24
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  Il2CppObject *v24; // x0
  UnityEngine_Object_o *settingServantLb; // x22
  UILabel_o *v26; // x22
  bool IsNullOrEmpty; // w23
  System_String_o *v28; // x0
  UnityEngine_Object_o *settingBackSp; // x21
  UISprite_o *v30; // x19
  int v31; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_49FA812 & 1) == 0 )
  {
    sub_1B64870(&AtlasManager_TypeInfo, isSetting);
    sub_1B64870(&int_TypeInfo, v9);
    sub_1B64870(&LocalizationManager_TypeInfo, v10);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v11);
    sub_1B64870(&StringLiteral_10980/*"RECOMMEND_SUPPORT_QUEST_SELECT_SETTING_SERVANT"*/, v12);
    sub_1B64870(&StringLiteral_10979/*"RECOMMEND_SUPPORT_QUEST_SELECT_SETTING_INFO"*/, v13);
    sub_1B64870(&StringLiteral_10976/*"RECOMMEND_SUPPORT_QUEST_SELECT_NO_SETTING_SERVANT"*/, v14);
    sub_1B64870(&StringLiteral_17630/*"caldeagate_notice"*/, v15);
    byte_49FA812 = 1;
  }
  settingQuestLb = (UnityEngine_Object_o *)this->fields.settingQuestLb;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(settingQuestLb, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.settingQuestLb;
    if ( !gameObject )
      goto LABEL_33;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isSetting, 0LL);
    v19 = this->fields.settingQuestLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_10979/*"RECOMMEND_SUPPORT_QUEST_SELECT_SETTING_INFO"*/, 0LL);
    v31 = index + 1;
    v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31, v21, v22, v23);
    gameObject = (UnityEngine_Component_o *)System_String__Format(v20, v24, 0LL);
    if ( !v19 )
      goto LABEL_33;
    UILabel__set_text(v19, (System_String_o *)gameObject, 0LL);
  }
  settingServantLb = (UnityEngine_Object_o *)this->fields.settingServantLb;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(settingServantLb, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.settingServantLb;
    if ( !gameObject )
      goto LABEL_33;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isSetting, 0LL);
    v26 = this->fields.settingServantLb;
    IsNullOrEmpty = System_String__IsNullOrEmpty(svtName, 0LL);
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( IsNullOrEmpty )
      {
LABEL_19:
        gameObject = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10976/*"RECOMMEND_SUPPORT_QUEST_SELECT_NO_SETTING_SERVANT"*/, 0LL);
LABEL_22:
        v17 = gameObject;
        if ( !v26 )
          goto LABEL_33;
        UILabel__set_text(v26, (System_String_o *)gameObject, 0LL);
        goto LABEL_24;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( IsNullOrEmpty )
        goto LABEL_19;
    }
    v28 = LocalizationManager__Get((System_String_o *)StringLiteral_10980/*"RECOMMEND_SUPPORT_QUEST_SELECT_SETTING_SERVANT"*/, 0LL);
    gameObject = (UnityEngine_Component_o *)System_String__Format(v28, (Il2CppObject *)svtName, 0LL);
    goto LABEL_22;
  }
LABEL_24:
  settingBackSp = (UnityEngine_Object_o *)this->fields.settingBackSp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(settingBackSp, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.settingBackSp;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isSetting, 0LL);
        v30 = this->fields.settingBackSp;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetPartyOrganizationImage(v30, (System_String_o *)StringLiteral_17630/*"caldeagate_notice"*/, 0LL);
        return;
      }
    }
LABEL_33:
    sub_1B64ACC(gameObject, v17);
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

  if ( (byte_49FA808 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMaster_ServantMaster___, questEnt);
    sub_1B64870(&DataManager_TypeInfo, v6);
    sub_1B64870(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    this = (RecommendSupportQuestBoardListViewItemDraw_o *)sub_1B64870(&StringLiteral_24887/*"{0}"*/, v8);
    byte_49FA808 = 1;
  }
  if ( !questEnt )
    goto LABEL_14;
  this = (RecommendSupportQuestBoardListViewItemDraw_o *)QuestEntity__getQuestName(questEnt, 0LL);
  v9 = this;
  if ( (unsigned int)questType <= 5 && ((1 << questType) & 0x2C) != 0 )
  {
    if ( !this )
      goto LABEL_14;
    if ( System_String__Contains((System_String_o *)this, (System_String_o *)StringLiteral_24887/*"{0}"*/, 0LL) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_ServantMaster___);
      this = (RecommendSupportQuestBoardListViewItemDraw_o *)QuestEntity__getServantId(questEnt, 0LL);
      if ( Master_object )
      {
        this = (RecommendSupportQuestBoardListViewItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                                 (int32_t)this,
                                                                 (const MethodInfo_30D6180 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( this )
        {
          BattleName = (Il2CppObject *)ServantEntity__getBattleName((ServantEntity_o *)this, 0, -1, 0LL);
          return System_String__Format((System_String_o *)v9, BattleName, 0LL);
        }
      }
LABEL_14:
      sub_1B64ACC(this, questEnt);
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

  if ( (byte_49FA80C & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMaster_EventAddMaster___, eventEnt);
    sub_1B64870(&Method_DataManager_GetMaster_WarMaster___, v8);
    sub_1B64870(&DataManager_TypeInfo, v9);
    sub_1B64870(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v10);
    sub_1B64870(&int_TypeInfo, v11);
    sub_1B64870(&RecommendSupportQuestBoardListViewItemDraw_TypeInfo, v12);
    byte_49FA80C = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_EventAddMaster___);
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
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !Master_object )
    goto LABEL_32;
  Entity = (WarEntity_o *)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                            warId,
                            (const MethodInfo_30D6180 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( Entity
    && Entity->fields.parentWarId
    && Entity->fields.eventId == eventEnt->fields.id
    && WarEntity__HasFlag(Entity, 0x80000, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_WarMaster___);
    if ( Master_object )
    {
      Master_object = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                        warId,
                        (const MethodInfo_30D6180 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
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
    sub_1B64ACC(Master_object, v14);
  }
  v28 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
  if ( !RecommendSupportQuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
    v28 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
  }
  EVENT_WAR_SPNAME_PREFIX = v28->static_fields->EVENT_WAR_SPNAME_PREFIX;
  v30 = System_Int32__ToString((int32_t)&overwriteId, 0LL);
  return System_String__Concat_61383576(EVENT_WAR_SPNAME_PREFIX, v30, 0LL);
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

  if ( (byte_49FA807 & 1) == 0 )
  {
    sub_1B64870(&RecommendSupportQuestBoardListViewItemDraw_TypeInfo, *(_QWORD *)&questType);
    sub_1B64870(&StringLiteral_1/*""*/, v4);
    byte_49FA807 = 1;
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

  if ( (byte_49FA80A & 1) == 0 )
  {
    sub_1B64870(&RecommendSupportQuestBoardListViewItemDraw_TypeInfo, questEnt);
    sub_1B64870(&StringLiteral_20351/*"img_questtxt_free"*/, v6);
    sub_1B64870(&StringLiteral_20350/*"img_questtxt_event"*/, v7);
    this = (RecommendSupportQuestBoardListViewItemDraw_o *)sub_1B64870(&StringLiteral_1/*""*/, v8);
    byte_49FA80A = 1;
  }
  if ( !questEnt )
    sub_1B64ACC(this, questEnt);
  iconId = questEnt->fields.iconId;
  v9 = (_DWORD)questEnt + 68;
  if ( iconId < 1 )
  {
    if ( questType == 5 )
    {
      v15 = &StringLiteral_20350/*"img_questtxt_event"*/;
    }
    else if ( questType == 2 )
    {
      v15 = &StringLiteral_20351/*"img_questtxt_free"*/;
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
    return System_String__Concat_61383576(QUEST_BOARD_ICON_SPNAME_PREFIX, v13, 0LL);
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

  if ( (byte_49FA80B & 1) == 0 )
  {
    sub_1B64870(&int_TypeInfo, questEnt);
    this = (RecommendSupportQuestBoardListViewItemDraw_o *)sub_1B64870(
                                                             &RecommendSupportQuestBoardListViewItemDraw_TypeInfo,
                                                             v6);
    byte_49FA80B = 1;
  }
  if ( !questEnt )
    sub_1B64ACC(this, questEnt);
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
    return System_String__Concat_61383576(QUEST_BOARD_ICON_SPNAME_PREFIX, v12, 0LL);
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

  if ( (byte_49FA806 & 1) == 0 )
  {
    sub_1B64870(&BalanceConfig_TypeInfo, *(_QWORD *)&warId);
    sub_1B64870(&Method_System_Linq_Enumerable_Contains_int___, v6);
    byte_49FA806 = 1;
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
                            (const MethodInfo_2E54F84 *)Method_System_Linq_Enumerable_Contains_int___);
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
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
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
  int32_t v30; // w3
  struct System_String_o *boardIconName; // x1
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x19
  AssetLoader_LoadEndDataHandler_o *v35; // x21
  int32_t v36; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_49FA80F & 1) == 0 )
  {
    sub_1B64870(&AssetManager_TypeInfo, questEntity);
    sub_1B64870(&int_TypeInfo, v7);
    sub_1B64870(&AssetLoader_LoadEndDataHandler_TypeInfo, v8);
    sub_1B64870(&RecommendSupportQuestBoardListViewItemDraw_TypeInfo, v9);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1B64870(
      &Method_RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass62_0__LoadBoardIconTexture_b__0__,
      v11);
    sub_1B64870(&RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass62_0_TypeInfo, v12);
    byte_49FA80F = 1;
  }
  v13 = sub_1B64ABC(RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass62_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_14;
  *(_QWORD *)(v13 + 24) = this;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v13 + 24), (int32_t)this, v16, v17);
  *(_QWORD *)(v13 + 32) = callback;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v13 + 32), (int32_t)callback, v18, v19);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.boardIconName, (int32_t)v28, v29, v30);
  boardIconName = this->fields.boardIconName;
  *(_QWORD *)(v13 + 16) = boardIconName;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v13 + 16), (int32_t)boardIconName, v32, v33);
  v34 = System_String__Concat_61383576(
          RecommendSupportQuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_ICON_TEXTURE_PATH,
          this->fields.boardIconName,
          0LL);
  v35 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64ABC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v35,
    (Il2CppObject *)v13,
    Method_RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass62_0__LoadBoardIconTexture_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v34, v35, 1, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
      return;
    }
LABEL_14:
    sub_1B64ACC(Instance, v15);
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
  int32_t v7; // w3
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49FA810 & 1) == 0 )
  {
    sub_1B64870(&AssetManager_TypeInfo, method);
    sub_1B64870(&RecommendSupportQuestBoardListViewItemDraw_TypeInfo, v3);
    byte_49FA810 = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.boardIconName, 0LL) )
  {
    v4 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
    if ( !RecommendSupportQuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
      v4 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
    }
    v5 = System_String__Concat_61383576(
           v4->static_fields->QUEST_BOARD_ICON_TEXTURE_PATH,
           this->fields.boardIconName,
           0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v5, 0LL);
    this->fields.boardIconAssetData = 0LL;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.boardIconAssetData, 0, v6, v7);
    this->fields.boardIconName = 0LL;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.boardIconName, 0, v8, v9);
  }
}


void __fastcall RecommendSupportQuestBoardListViewItemDraw__SetChapterSubIdDisp(
        RecommendSupportQuestBoardListViewItemDraw_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *questInfo,
        const MethodInfo *method)
{
  RecommendSupportQuestBoardListViewItemDraw_o **v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  struct QuestEntity_o *questEntity; // x21
  WarEntity_o *warEntity; // x22
  const MethodInfo *v9; // x3
  _BOOL4 HasFlag; // w23
  _BOOL8 IsChapterSubIdJapaneseNumeralsNormal; // x0
  UILabel_o *v12; // x22
  UISprite_o *v13; // x22
  RecommendSupportQuestBoardListViewItemDraw_o *v14; // x0
  const MethodInfo *v15; // x2
  System_String_o *QuestIconNameForMainType; // x21
  int32_t QuestBoardSectionId; // w0
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  int v21; // w21
  UISprite_o *v22; // x20
  RecommendSupportQuestBoardListViewItemDraw_c *v23; // x0
  System_String_o *CHAPTER_SP_UNIT_NAME; // x22
  Il2CppObject *v25; // x0
  System_String_o *v26; // x21
  int v27; // [xsp+Ch] [xbp-34h] BYREF

  v4 = (RecommendSupportQuestBoardListViewItemDraw_o **)this;
  if ( (byte_49FA809 & 1) == 0 )
  {
    sub_1B64870(&AtlasManager_TypeInfo, questInfo);
    sub_1B64870(&int_TypeInfo, v5);
    this = (RecommendSupportQuestBoardListViewItemDraw_o *)sub_1B64870(
                                                             &RecommendSupportQuestBoardListViewItemDraw_TypeInfo,
                                                             v6);
    byte_49FA809 = 1;
  }
  if ( !questInfo )
    goto LABEL_36;
  this = v4[15];
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
    v12 = (UILabel_o *)v4[15];
    if ( HasFlag || IsChapterSubIdJapaneseNumeralsNormal )
    {
      this = (RecommendSupportQuestBoardListViewItemDraw_o *)RecommendSupportQuestBoardListViewItemDraw__ConvertToChineseAscii(
                                                               (RecommendSupportQuestBoardListViewItemDraw_o *)IsChapterSubIdJapaneseNumeralsNormal,
                                                               questEntity->fields.chapterSubId,
                                                               IsChapterSubIdJapaneseNumeralsNormal,
                                                               v9);
      if ( !v12 )
        goto LABEL_36;
    }
    else
    {
      this = (RecommendSupportQuestBoardListViewItemDraw_o *)System_Int32__ToString((int)questEntity + 116, 0LL);
      if ( !v12 )
        goto LABEL_36;
    }
    UILabel__set_text(v12, (System_String_o *)this, 0LL);
    this = v4[15];
    if ( !this )
      goto LABEL_36;
    this = (RecommendSupportQuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)this,
                                                             0LL);
    if ( !this )
      goto LABEL_36;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  }
  this = v4[13];
  if ( !this )
    goto LABEL_36;
  this = (RecommendSupportQuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL);
  if ( !this )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v13 = (UISprite_o *)v4[13];
  QuestIconNameForMainType = RecommendSupportQuestBoardListViewItemDraw__GetQuestIconNameForMainType(
                               v14,
                               questEntity,
                               v15);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  this = (RecommendSupportQuestBoardListViewItemDraw_o *)AtlasManager__SetEventUI(v13, QuestIconNameForMainType, 0LL);
  if ( !v13 )
    goto LABEL_36;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v13, (unsigned __int8)this & 1, 0LL);
  this = v4[13];
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
  v21 = QuestBoardSectionId;
  v22 = (UISprite_o *)v4[14];
  v23 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
  if ( !RecommendSupportQuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
    v23 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
  }
  CHAPTER_SP_UNIT_NAME = v23->static_fields->CHAPTER_SP_UNIT_NAME;
  v27 = v21;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27, v18, v19, v20);
  v26 = System_String__Format(CHAPTER_SP_UNIT_NAME, v25, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  this = (RecommendSupportQuestBoardListViewItemDraw_o *)AtlasManager__SetEventUI(v22, v26, 0LL);
  if ( !v22
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v22, (unsigned __int8)this & 1, 0LL),
        (this = v4[14]) == 0LL) )
  {
LABEL_36:
    sub_1B64ACC(this, questInfo);
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
  if ( (byte_49FA80D & 1) == 0 )
  {
    sub_1B64870(&AtlasManager_TypeInfo, questEnt);
    this = (RecommendSupportQuestBoardListViewItemDraw_o *)sub_1B64870(
                                                             &RecommendSupportQuestBoardListViewItemDraw_TypeInfo,
                                                             v16);
    byte_49FA80D = 1;
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
    maskSpriteName = System_String__Concat_61383576(QUEST_BOARD_MASK_SPNAME_PREFIX, v25, 0LL);
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
    sub_1B64ACC(this, questEnt);
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
    if ( !byte_49F9206 )
    {
      sub_1B64870(&UnityEngine_Vector3_TypeInfo, v5);
      byte_49F9206 = 1;
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
      sub_1B64ACC(baseSprite, v7);
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
  UnityEngine_GameObject_o *labelObj; // x0
  struct RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *QuestFolderInfo_k__BackingField; // x8
  WarEntity_o *warEntity; // x20
  int32_t id; // w21
  _BOOL8 v15; // x0
  const MethodInfo *v16; // x4
  System_String_o *EventAddBannerSpriteName; // x0
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  Il2CppObject *v21; // x0
  System_String_o *v22; // x8
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  System_String_o *v26; // x20
  UISprite_o *baseSprite; // x21
  int32_t PrioredBannerId; // [xsp+Ch] [xbp-34h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_49FA804 & 1) == 0 )
  {
    sub_1B64870(&AtlasManager_TypeInfo, item);
    sub_1B64870(&Method_DataManager_GetMaster_EventMaster___, v5);
    sub_1B64870(&DataManager_TypeInfo, v6);
    sub_1B64870(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v7);
    sub_1B64870(&int_TypeInfo, v8);
    sub_1B64870(&StringLiteral_17733/*"chaldea_category_{0}"*/, v9);
    sub_1B64870(&StringLiteral_22624/*"questboard_cap{0:D3}"*/, v10);
    byte_49FA804 = 1;
  }
  entity = 0LL;
  labelObj = this->fields.labelObj;
  if ( !labelObj )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(labelObj, 0, 0LL);
  labelObj = this->fields.titleObj;
  if ( !labelObj )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(labelObj, 0, 0LL);
  labelObj = this->fields.phaseObj;
  if ( !labelObj )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(labelObj, 0, 0LL);
  labelObj = (UnityEngine_GameObject_o *)this->fields.labelFaceMaskQuestSp;
  if ( !labelObj )
    goto LABEL_28;
  labelObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelObj, 0LL);
  if ( !labelObj )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(labelObj, 0, 0LL);
  if ( !item )
    goto LABEL_28;
  QuestFolderInfo_k__BackingField = item->fields._QuestFolderInfo_k__BackingField;
  if ( !QuestFolderInfo_k__BackingField )
    goto LABEL_28;
  warEntity = QuestFolderInfo_k__BackingField->fields.warEntity;
  if ( !warEntity )
    goto LABEL_28;
  id = warEntity->fields.id;
  if ( !WarEntity__IsEvent(QuestFolderInfo_k__BackingField->fields.warEntity, 0LL) )
    goto LABEL_17;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  labelObj = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !labelObj )
LABEL_28:
    sub_1B64ACC(labelObj, item);
  v15 = DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)labelObj,
          &entity,
          warEntity->fields.eventId,
          (const MethodInfo_30D61D4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( v15 )
  {
    EventAddBannerSpriteName = RecommendSupportQuestBoardListViewItemDraw__GetEventAddBannerSpriteName(
                                 (RecommendSupportQuestBoardListViewItemDraw_o *)v15,
                                 (EventEntity_o *)entity,
                                 id,
                                 1,
                                 v16);
    goto LABEL_22;
  }
LABEL_17:
  if ( WarEntity__IsFolder(warEntity, 0LL) && !WarEntity__HasFlag(warEntity, 128, 0LL) )
  {
    PrioredBannerId = WarEntity__GetPrioredBannerId(warEntity, 0LL);
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PrioredBannerId, v23, v24, v25);
    v22 = (System_String_o *)StringLiteral_17733/*"chaldea_category_{0}"*/;
  }
  else
  {
    PrioredBannerId = WarEntity__GetPrioredBannerId(warEntity, 0LL);
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PrioredBannerId, v18, v19, v20);
    v22 = (System_String_o *)StringLiteral_22624/*"questboard_cap{0:D3}"*/;
  }
  EventAddBannerSpriteName = System_String__Format(v22, v21, 0LL);
LABEL_22:
  v26 = EventAddBannerSpriteName;
  baseSprite = this->fields.baseSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBanner(baseSprite, v26, 0LL);
  labelObj = (UnityEngine_GameObject_o *)this->fields.baseSprite;
  if ( !labelObj )
    goto LABEL_28;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))labelObj->klass[2]._1.typeMetadataHandle)(
    labelObj,
    labelObj->klass[2]._1.interopData);
  labelObj = (UnityEngine_GameObject_o *)this->fields.baseSprite;
  if ( !labelObj )
    goto LABEL_28;
  labelObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelObj, 0LL);
  if ( !labelObj )
    goto LABEL_28;
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
  int32_t v24; // w3
  struct RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *QuestInfo_k__BackingField; // x23
  QuestEntity_o *questEntity; // x21
  __int64 type; // x24
  int32_t phase; // w22
  UILabel_o *questBoardMessageTitle; // x27
  UnityEngine_Object_o *restrictionMaskSp; // x27
  UnityEngine_Object_o *restrictionMessage; // x27
  const MethodInfo *v32; // x4
  UILabel_o *v33; // x26
  RecommendSupportQuestBoardListViewItemDraw_c *v39; // x0
  System_String_o *QUEST_BOARD_SPNAME_PREFIX; // x27
  System_String_o *v41; // x0
  System_String_o *v42; // x0
  UISprite_o *v43; // x26
  System_String_o *v44; // x27
  UISprite_o *baseSprite; // x26
  __int64 v46; // x8
  System_String_o *v47; // x27
  System_String_o *v48; // x0
  System_String_o *v49; // x27
  UISprite_o *v50; // x26
  __int64 v51; // x8
  System_String_o *RecommendLv_39152880; // x0
  const MethodInfo *v53; // x2
  const MethodInfo *v54; // x2
  RecommendSupportQuestBoardListViewItemDraw_o *v55; // x0
  UISprite_o *labelFaceMaskQuestSp; // x26
  int32_t updateAnchors; // w27
  System_String_o *FaceMaskSpriteName; // x0
  const MethodInfo *v59; // x5
  bool v60; // w0
  const MethodInfo *v61; // x3
  UILabel_o *titleNameLb; // x26
  const MethodInfo *v63; // x3
  struct WarEntity_o *warEntity; // x8
  const MethodInfo *v65; // x2
  UISprite_o *labelNameSp; // x23
  RecommendSupportQuestBoardListViewItemDraw_o *v67; // x0
  const MethodInfo *v68; // x3
  System_String_o *QuestIconName; // x24
  System_Action_o *v70; // x23
  const MethodInfo *v71; // x3
  UILabel_o *v72; // x23
  UnityEngine_GameObject_o *phaseObj; // x23
  UnityEngine_GameObject_o *v74; // x25
  UnityEngine_GameObject_o *v75; // x24
  char v76; // w8
  int v77; // w28
  UILabel_o *phaseNumLb; // x23
  System_String_o *v79; // x24
  __int64 v80; // x2
  __int64 v81; // x3
  __int64 v82; // x4
  Il2CppObject *v83; // x25
  __int64 v84; // x2
  __int64 v85; // x3
  __int64 v86; // x4
  Il2CppObject *v87; // x0
  QuestPhaseEntity_o *Entity; // x0
  QuestPhaseEntity_o *v89; // x22
  struct System_Int32_array *classIds; // x8
  bool v91; // w21
  struct ServantClassIconComponent_array *classIcons; // x8
  int max_length; // w9
  int v94; // w23
  struct System_Int32_array *v95; // x22
  il2cpp_array_size_t v96; // w9
  __int64 v97; // x24
  Il2CppClass **v98; // x8
  UnityEngine_Component_o *v99; // x21
  int v100; // [xsp+8h] [xbp-68h] BYREF
  int32_t v101; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_49FA805 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, item);
    sub_1B64870(&AtlasManager_TypeInfo, v7);
    sub_1B64870(&Method_DataManager_GetMaster_QuestPhaseMaster___, v8);
    sub_1B64870(&DataManager_TypeInfo, v9);
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v10);
    sub_1B64870(&int_TypeInfo, v11);
    sub_1B64870(&LocalizationManager_TypeInfo, v12);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v13);
    sub_1B64870(&RecommendSupportQuestBoardListViewItemDraw_TypeInfo, v14);
    sub_1B64870(&Method_RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass51_0__SetItemOfQuest_b__0__, v15);
    sub_1B64870(&RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass51_0_TypeInfo, v16);
    sub_1B64870(&StringLiteral_10977/*"RECOMMEND_SUPPORT_QUEST_SELECT_PHASE_INFO"*/, v17);
    sub_1B64870(&StringLiteral_10975/*"RECOMMEND_SUPPORT_QUEST_SELECT_MESSAGE_TITLE"*/, v18);
    sub_1B64870(&StringLiteral_10978/*"RECOMMEND_SUPPORT_QUEST_SELECT_RESTRICTION"*/, v19);
    byte_49FA805 = 1;
  }
  v20 = sub_1B64ABC(RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass51_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !v20 )
    goto LABEL_132;
  *(_QWORD *)(v20 + 16) = this;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v20 + 16), (int32_t)this, v23, v24);
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
  labelObj = LocalizationManager__Get((System_String_o *)StringLiteral_10975/*"RECOMMEND_SUPPORT_QUEST_SELECT_MESSAGE_TITLE"*/, 0LL);
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
    v33 = this->fields.restrictionMessage;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    labelObj = LocalizationManager__Get((System_String_o *)StringLiteral_10978/*"RECOMMEND_SUPPORT_QUEST_SELECT_RESTRICTION"*/, 0LL);
    if ( !v33 )
      goto LABEL_132;
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
      v46 = *(_QWORD *)(*((_QWORD *)labelObj + 23) + 96LL);
      if ( !v46 )
        goto LABEL_132;
      if ( (unsigned int)type >= *(_DWORD *)(v46 + 24) )
        goto LABEL_140;
      v47 = *(System_String_o **)(v46 + 8 * type + 32);
      v48 = System_Int32__ToString((int)questEntity + 60, 0LL);
      v49 = System_String__Concat_61383576(v47, v48, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetBanner(baseSprite, v49, 0LL);
    }
    else
    {
      if ( !baseSprite )
        goto LABEL_132;
      UISprite__set_atlas(this->fields.baseSprite, this->fields.terminalAtlas, 0LL);
      labelObj = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
      v50 = this->fields.baseSprite;
      if ( !RecommendSupportQuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
        labelObj = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
      }
      v51 = *(_QWORD *)(*((_QWORD *)labelObj + 23) + 96LL);
      if ( !v51 )
        goto LABEL_132;
      if ( (unsigned int)type >= *(_DWORD *)(v51 + 24) )
        goto LABEL_140;
      if ( !v50 )
        goto LABEL_132;
      UISprite__set_spriteName(v50, *(System_String_o **)(v51 + 8LL * (int)type + 32), 0LL);
    }
  }
  else
  {
    v39 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
    if ( !RecommendSupportQuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
      v39 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
    }
    QUEST_BOARD_SPNAME_PREFIX = v39->static_fields->QUEST_BOARD_SPNAME_PREFIX;
    v41 = System_Int32__ToString((int)questEntity + 64, 0LL);
    v42 = System_String__Concat_61383576(QUEST_BOARD_SPNAME_PREFIX, v41, 0LL);
    v43 = this->fields.baseSprite;
    v44 = v42;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    labelObj = (void *)AtlasManager__SetEventUI(v43, v44, 0LL);
    if ( !v43 )
      goto LABEL_132;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v43, (unsigned __int8)labelObj & 1, 0LL);
  }
  labelObj = this->fields.baseSprite;
  if ( !labelObj )
    goto LABEL_132;
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)labelObj + 840LL))(
    labelObj,
    *(_QWORD *)(*(_QWORD *)labelObj + 848LL));
  RecommendLv_39152880 = QuestEntity__getRecommendLv_39152880(questEntity, phase, 0LL);
  RecommendSupportQuestBoardListViewItemDraw__SetRecommendLv(
    this,
    RecommendLv_39152880,
    *(UnityEngine_Color_o *)(v20 + 24),
    v53);
  v55 = (RecommendSupportQuestBoardListViewItemDraw_o *)RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
  labelFaceMaskQuestSp = this->fields.labelFaceMaskQuestSp;
  if ( !RecommendSupportQuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
    v55 = (RecommendSupportQuestBoardListViewItemDraw_o *)RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
  }
  updateAnchors = v55->fields.labelFaceIcon->fields.updateAnchors;
  FaceMaskSpriteName = RecommendSupportQuestBoardListViewItemDraw__GetFaceMaskSpriteName(v55, type, v54);
  v60 = RecommendSupportQuestBoardListViewItemDraw__SetFaceImage(
          this,
          questEntity,
          labelFaceMaskQuestSp,
          updateAnchors,
          FaceMaskSpriteName,
          *(UnityEngine_Color_o *)(v20 + 24),
          v59);
  titleNameLb = this->fields.titleNameLb;
  if ( v60 )
  {
    labelObj = RecommendSupportQuestBoardListViewItemDraw__GetDispQuestName(this, questEntity, type, v61);
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
           v63) )
    {
      RecommendSupportQuestBoardListViewItemDraw__SetChapterSubIdDisp(this, QuestInfo_k__BackingField, v65);
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
      QuestIconName = RecommendSupportQuestBoardListViewItemDraw__GetQuestIconName(v67, questEntity, type, v68);
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
                   (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
      if ( !labelObj )
        goto LABEL_132;
      UIWidget__set_color((UIWidget_o *)labelObj, *(UnityEngine_Color_o *)(v20 + 24), 0LL);
      labelObj = this->fields.labelNameSp;
      if ( !labelObj )
        goto LABEL_132;
      if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)labelObj, 0LL) )
      {
        *(_DWORD *)(v20 + 40) = questEntity->fields.id;
        v70 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
        System_Action___ctor(
          v70,
          (Il2CppObject *)v20,
          Method_RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass51_0__SetItemOfQuest_b__0__,
          0LL);
        RecommendSupportQuestBoardListViewItemDraw__LoadBoardIconTexture(this, questEntity, v70, v71);
      }
    }
  }
  labelObj = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
  v72 = this->fields.titleNameLb;
  if ( !RecommendSupportQuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
  if ( !v72 )
    goto LABEL_132;
  UILabel__SetCondensedScale(
    v72,
    RecommendSupportQuestBoardListViewItemDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH,
    0LL);
  labelObj = this->fields.titleNameLb;
  if ( !labelObj )
    goto LABEL_132;
  UIWidget__set_color((UIWidget_o *)labelObj, *(UnityEngine_Color_o *)(v20 + 24), 0LL);
  phaseObj = this->fields.phaseObj;
  labelObj = (void *)QuestEntity__HasFlag(questEntity, 0x4000LL, 0LL);
  v74 = ((unsigned __int8)labelObj & 1) != 0 ? 0LL : phaseObj;
  if ( ((unsigned __int8)labelObj & 1) != 0
    || ((labelObj = (void *)QuestEntity__HasFlag(questEntity, 0x10000LL, 0LL), ((unsigned __int8)labelObj & 1) == 0)
      ? (v75 = v74)
      : (v75 = 0LL),
        ((unsigned __int8)labelObj & 1) != 0) )
  {
    v76 = 0;
  }
  else
  {
    labelObj = (void *)QuestEntity__HasFlag(questEntity, 512LL, 0LL);
    if ( ((unsigned __int8)labelObj & 1) != 0 )
    {
      v76 = 0;
      phaseObj = v74;
    }
    else
    {
      labelObj = (void *)QuestEntity__HasFlag(questEntity, 0x4000000LL, 0LL);
      if ( ((unsigned __int8)labelObj & 1) != 0 )
      {
        v76 = 0;
      }
      else
      {
        labelObj = (void *)QuestEntity__HasFlag(questEntity, 0x2000000000LL, 0LL);
        v76 = (unsigned __int8)labelObj ^ 1;
      }
      phaseObj = v75;
    }
  }
  if ( !phaseObj )
    goto LABEL_132;
  UnityEngine_GameObject__SetActive(phaseObj, v76 & 1, 0LL);
  labelObj = this->fields.phaseObj;
  if ( !labelObj )
    goto LABEL_132;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)labelObj, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    labelObj = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !labelObj )
      goto LABEL_132;
    labelObj = QuestPhaseMaster__getList((QuestPhaseMaster_o *)labelObj, questEntity->fields.id, 0LL);
    if ( !labelObj )
      goto LABEL_132;
    v77 = *((_DWORD *)labelObj + 6);
    phaseNumLb = this->fields.phaseNumLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v79 = LocalizationManager__Get((System_String_o *)StringLiteral_10977/*"RECOMMEND_SUPPORT_QUEST_SELECT_PHASE_INFO"*/, 0LL);
    v101 = phase;
    v83 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v101, v80, v81, v82);
    v100 = v77;
    v87 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v100, v84, v85, v86);
    labelObj = System_String__Format_61397948(v79, v83, v87, 0LL);
    if ( !phaseNumLb )
      goto LABEL_132;
    UILabel__set_text(phaseNumLb, (System_String_o *)labelObj, 0LL);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  labelObj = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !labelObj )
    goto LABEL_132;
  Entity = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)labelObj, questEntity->fields.id, phase, 0LL);
  v89 = Entity;
  v91 = Entity
     && (classIds = Entity->fields.classIds) != 0LL
     && *(_QWORD *)&classIds->max_length
     && !QuestEntity__HasFlag(questEntity, 2048LL, 0LL);
  labelObj = this->fields.classIconRoot;
  if ( !labelObj )
    goto LABEL_132;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)labelObj, v91, 0LL);
  labelObj = this->fields.classStrSp;
  if ( !labelObj )
    goto LABEL_132;
  UIWidget__set_color((UIWidget_o *)labelObj, *(UnityEngine_Color_o *)(v20 + 24), 0LL);
  if ( !v91 )
    return;
  if ( !v89 || (classIcons = this->fields.classIcons) == 0LL )
LABEL_132:
    sub_1B64ACC(labelObj, v22);
  max_length = classIcons->max_length;
  v94 = max_length - 1;
  if ( max_length >= 1 )
  {
    v95 = v89->fields.classIds;
    v96 = 0;
    while ( v96 < classIcons->max_length )
    {
      v97 = (int)v96;
      v98 = &classIcons->obj.klass + (int)v96;
      v99 = (UnityEngine_Component_o *)v98[4];
      if ( !v99 )
        goto LABEL_132;
      labelObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v98[4], 0LL);
      if ( !v95 )
        goto LABEL_132;
      if ( !labelObj )
        goto LABEL_132;
      UnityEngine_GameObject__SetActive(
        (UnityEngine_GameObject_o *)labelObj,
        (int)v97 < (signed int)v95->max_length,
        0LL);
      labelObj = UnityEngine_Component__get_gameObject(v99, 0LL);
      if ( !labelObj )
        goto LABEL_132;
      labelObj = (void *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)labelObj, 0LL);
      if ( ((unsigned __int8)labelObj & 1) != 0 )
      {
        if ( (unsigned int)v97 >= v95->max_length )
          break;
        ServantClassIconComponent__Set((ServantClassIconComponent_o *)v99, v95->m_Items[v97 + 1], 0LL);
        ServantClassIconComponent__SetColor((ServantClassIconComponent_o *)v99, *(UnityEngine_Color_o *)(v20 + 24), 0LL);
      }
      if ( v94 == (_DWORD)v97 )
        return;
      classIcons = this->fields.classIcons;
      v96 = v97 + 1;
      if ( !classIcons )
        goto LABEL_132;
    }
LABEL_140:
    sub_1B64AD4(labelObj, v22);
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
  if ( (byte_49FA811 & 1) == 0 )
  {
    sub_1B64870(&Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___, recommendLv);
    sub_1B64870(&Method_UnityEngine_Component_GetComponent_CondensedScaleSprite___, v10);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v11);
    byte_49FA811 = 1;
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
                         (const MethodInfo_2E3216C *)Method_UnityEngine_Component_GetComponent_CondensedScaleSprite___);
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
                                                                   (const MethodInfo_2E3216C *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
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
    sub_1B64ACC(IsNullOrEmpty, v14);
  }
}


void __fastcall RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass51_0___ctor(
        RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass51_0___SetItemOfQuest_b__0(
        RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  struct RecommendSupportQuestBoardListViewItemDraw_o *_4__this; // x8
  RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass51_0_o *v3; // x19
  struct RecommendSupportQuestBoardListViewItemDraw_o *v4; // x8
  struct RecommendSupportQuestBoardListViewItemDraw_o *v5; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  v3 = this;
  this = (RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass51_0_o *)_4__this->fields.labelNameSp;
  if ( !this )
    goto LABEL_11;
  this = (RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass51_0_o *)UnityEngine_Behaviour__get_enabled(
                                                                                 (UnityEngine_Behaviour_o *)this,
                                                                                 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v4 = v3->fields.__4__this;
    if ( !v4 )
      goto LABEL_11;
    if ( v4->fields.boardIconQuestId == v3->fields.boardIconQuestIdOld )
    {
      this = (RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass51_0_o *)v4->fields.boardIconTexture;
      if ( this )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
        v5 = v3->fields.__4__this;
        if ( v5 )
        {
          this = (RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass51_0_o *)v5->fields.boardIconTexture;
          if ( this )
          {
            UIWidget__set_color((UIWidget_o *)this, v3->fields.baseColor, 0LL);
            return;
          }
        }
      }
LABEL_11:
      sub_1B64ACC(this, method);
    }
  }
}


void __fastcall RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass62_0___ctor(
        RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass62_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass62_0___LoadBoardIconTexture_b__0(
        RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass62_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass62_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct RecommendSupportQuestBoardListViewItemDraw_o *_4__this; // x8
  int32_t v13; // w2
  int32_t v14; // w3
  RecommendSupportQuestBoardListViewItemDraw_c *v15; // x0
  System_String_o *v16; // x19
  struct RecommendSupportQuestBoardListViewItemDraw_o *v17; // x8
  UnityEngine_Shader_o *v18; // x21
  UnityEngine_Material_o *v19; // x20
  struct RecommendSupportQuestBoardListViewItemDraw_o *v20; // x8
  struct RecommendSupportQuestBoardListViewItemDraw_o *v21; // x8
  struct RecommendSupportQuestBoardListViewItemDraw_o *v22; // x8
  AssetData_o *boardIconAssetData; // x21
  Il2CppObject *Object_object__48356600; // x0

  v4 = this;
  if ( (byte_49FA814 & 1) == 0 )
  {
    sub_1B64870(&Method_AssetData_GetObject_Texture2D____75714464, assetData);
    sub_1B64870(&AssetManager_TypeInfo, v5);
    sub_1B64870(&UnityEngine_Material_TypeInfo, v6);
    sub_1B64870(&RecommendSupportQuestBoardListViewItemDraw_TypeInfo, v7);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1B64870(&StringLiteral_16459/*"_alpha"*/, v9);
    sub_1B64870(&StringLiteral_4952/*"Custom/SpriteWithMask"*/, v10);
    this = (RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass62_0_o *)sub_1B64870(&StringLiteral_16200/*"_MaskTex"*/, v11);
    byte_49FA814 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_20;
  this = (RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass62_0_o *)System_String__op_Inequality(
                                                                                 v4->fields.loadBoardIconName,
                                                                                 _4__this->fields.boardIconName,
                                                                                 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v17 = v4->fields.__4__this;
    if ( v17 )
    {
      v17->fields.boardIconAssetData = assetData;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&v17->fields.boardIconAssetData, (int32_t)assetData, v13, v14);
      v18 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4952/*"Custom/SpriteWithMask"*/, 0LL);
      v19 = (UnityEngine_Material_o *)sub_1B64ABC(UnityEngine_Material_TypeInfo);
      UnityEngine_Material___ctor(v19, v18, 0LL);
      v20 = v4->fields.__4__this;
      if ( v20 )
      {
        this = (RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass62_0_o *)v20->fields.boardIconTexture;
        if ( this )
        {
          this = (RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass62_0_o *)((__int64 (__fastcall *)(RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass62_0_o *, UnityEngine_Material_o *, Il2CppMethodPointer))this->klass[1].vtable._2_GetHashCode.method)(
                                                                                         this,
                                                                                         v19,
                                                                                         this->klass[1].vtable._3_ToString.methodPtr);
          v21 = v4->fields.__4__this;
          if ( v21 )
          {
            this = (RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass62_0_o *)v21->fields.boardIconAssetData;
            if ( this )
            {
              this = (RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass62_0_o *)AssetData__GetObject_object__48356600(
                                                                                             (AssetData_o *)this,
                                                                                             v21->fields.boardIconName,
                                                                                             (const MethodInfo_2E1DCF8 *)Method_AssetData_GetObject_Texture2D____75714464);
              if ( v19 )
              {
                UnityEngine_Material__set_mainTexture(v19, (UnityEngine_Texture_o *)this, 0LL);
                v22 = v4->fields.__4__this;
                if ( v22 )
                {
                  boardIconAssetData = v22->fields.boardIconAssetData;
                  this = (RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass62_0_o *)System_String__Concat_61383576(
                                                                                                 v22->fields.boardIconName,
                                                                                                 (System_String_o *)StringLiteral_16459/*"_alpha"*/,
                                                                                                 0LL);
                  if ( boardIconAssetData )
                  {
                    Object_object__48356600 = AssetData__GetObject_object__48356600(
                                                boardIconAssetData,
                                                (System_String_o *)this,
                                                (const MethodInfo_2E1DCF8 *)Method_AssetData_GetObject_Texture2D____75714464);
                    UnityEngine_Material__SetTexture(
                      v19,
                      (System_String_o *)StringLiteral_16200/*"_MaskTex"*/,
                      (UnityEngine_Texture_o *)Object_object__48356600,
                      0LL);
                    this = (RecommendSupportQuestBoardListViewItemDraw___c__DisplayClass62_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1B64ACC(this, assetData);
  }
  v15 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
  if ( !RecommendSupportQuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewItemDraw_TypeInfo);
    v15 = RecommendSupportQuestBoardListViewItemDraw_TypeInfo;
  }
  v16 = System_String__Concat_61383576(
          v15->static_fields->QUEST_BOARD_ICON_TEXTURE_PATH,
          v4->fields.loadBoardIconName,
          0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(v16, 0LL);
}