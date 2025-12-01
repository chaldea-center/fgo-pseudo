void TitleRootComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  int32_t v7; // w1
  struct TitleRootComponent_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  TitleRootComponent_c *v15; // x8
  struct TitleRootComponent_StaticFields *v16; // x9
  struct TitleRootComponent_StaticFields *v17; // x9
  int32_t v18; // w1
  struct TitleRootComponent_StaticFields *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int32_t v26; // w1
  struct TitleRootComponent_StaticFields *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  TitleRootComponent_c *v34; // x8
  struct TitleRootComponent_StaticFields *v35; // x9
  struct TitleRootComponent_StaticFields *v36; // x9
  int32_t v37; // w1
  struct TitleRootComponent_StaticFields *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  int32_t v45; // w1
  struct TitleRootComponent_StaticFields *v46; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  struct TitleRootComponent_StaticFields *v53; // x0
  int32_t v54; // w1
  int32_t v55; // w2
  int32_t v56; // w3
  System_String_o *v57; // x4
  int32_t v58; // w5
  int64_t v59; // x6
  System_String_o *v60; // x7
  int32_t v61; // w1
  struct TitleRootComponent_StaticFields *v62; // x0
  int32_t v63; // w2
  int32_t v64; // w3
  System_String_o *v65; // x4
  int32_t v66; // w5
  int64_t v67; // x6
  System_String_o *v68; // x7
  int32_t v69; // w1
  struct TitleRootComponent_StaticFields *v70; // x0
  int32_t v71; // w2
  int32_t v72; // w3
  System_String_o *v73; // x4
  int32_t v74; // w5
  int64_t v75; // x6
  System_String_o *v76; // x7
  struct TitleRootComponent_StaticFields *v77; // x8

  if ( (byte_4CC98C1 & 1) == 0 )
  {
    sub_1C713B0(&TitleRootComponent_TypeInfo);
    sub_1C713B0(&StringLiteral_2919/*"BGM_TITLE_4"*/);
    sub_1C713B0(&StringLiteral_2918/*"BGM_TITLE_3"*/);
    sub_1C713B0(&StringLiteral_24217/*"title2_2"*/);
    sub_1C713B0(&StringLiteral_22832/*"playingMovie"*/);
    sub_1C713B0(&StringLiteral_2917/*"BGM_TITLE_2"*/);
    sub_1C713B0(&StringLiteral_22827/*"playedMovie"*/);
    sub_1C713B0(&StringLiteral_2916/*"BGM_TITLE_1"*/);
    sub_1C713B0(&StringLiteral_21443/*"logo_title_cil"*/);
    sub_1C713B0(&StringLiteral_21444/*"logo_title_er"*/);
    byte_4CC98C1 = 1;
  }
  TitleRootComponent_TypeInfo->static_fields->DEFAULT_BGM = (struct System_String_o *)StringLiteral_2916/*"BGM_TITLE_1"*/;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)TitleRootComponent_TypeInfo->static_fields,
    StringLiteral_2916/*"BGM_TITLE_1"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_21444/*"logo_title_er"*/;
  static_fields = TitleRootComponent_TypeInfo->static_fields;
  static_fields->EPIC_OF_REMNANT_TITLE = (struct System_String_o *)StringLiteral_21444/*"logo_title_er"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->EPIC_OF_REMNANT_TITLE, v7, v9, v10, v11, v12, v13, v14);
  v15 = TitleRootComponent_TypeInfo;
  v16 = TitleRootComponent_TypeInfo->static_fields;
  *(_QWORD *)&v16->EPIC_OF_REMNANT_START_IMG_POS.fields.x = 0xC325000000000000LL;
  v16->EPIC_OF_REMNANT_START_IMG_POS.fields.z = 0.0;
  v17 = v15->static_fields;
  *(_QWORD *)&v17->EPIC_OF_REMNANT_LOGO_POS.fields.x = 0x4248000041D80000LL;
  v17->EPIC_OF_REMNANT_LOGO_POS.fields.z = 0.0;
  v18 = StringLiteral_2917/*"BGM_TITLE_2"*/;
  v19 = v15->static_fields;
  v19->EPIC_OF_REMNANT_BGM = (struct System_String_o *)StringLiteral_2917/*"BGM_TITLE_2"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v19->EPIC_OF_REMNANT_BGM, v18, v20, v21, v22, v23, v24, v25);
  v26 = StringLiteral_21443/*"logo_title_cil"*/;
  v27 = TitleRootComponent_TypeInfo->static_fields;
  v27->COSMOS_IN_THE_LOSTBELT_TITLE = (struct System_String_o *)StringLiteral_21443/*"logo_title_cil"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v27->COSMOS_IN_THE_LOSTBELT_TITLE, v26, v28, v29, v30, v31, v32, v33);
  v34 = TitleRootComponent_TypeInfo;
  v35 = TitleRootComponent_TypeInfo->static_fields;
  *(_QWORD *)&v35->COSMOS_IN_THE_LOSTBELT_START_IMG_POS.fields.x = 0xC348000000000000LL;
  v35->COSMOS_IN_THE_LOSTBELT_START_IMG_POS.fields.z = 0.0;
  v36 = v34->static_fields;
  *(_QWORD *)&v36->COSMOS_IN_THE_LOSTBELT_LOGO_POS.fields.x = 0x42040000BF000000LL;
  v36->COSMOS_IN_THE_LOSTBELT_LOGO_POS.fields.z = 0.0;
  v37 = StringLiteral_2918/*"BGM_TITLE_3"*/;
  v38 = v34->static_fields;
  v38->COSMOS_IN_THE_LOSTBELT_BGM = (struct System_String_o *)StringLiteral_2918/*"BGM_TITLE_3"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v38->COSMOS_IN_THE_LOSTBELT_BGM, v37, v39, v40, v41, v42, v43, v44);
  v45 = StringLiteral_2919/*"BGM_TITLE_4"*/;
  v46 = TitleRootComponent_TypeInfo->static_fields;
  v46->COSMOS_IN_THE_LOSTBELT_VER2_BGM = (struct System_String_o *)StringLiteral_2919/*"BGM_TITLE_4"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v46->COSMOS_IN_THE_LOSTBELT_VER2_BGM, v45, v47, v48, v49, v50, v51, v52);
  v53 = TitleRootComponent_TypeInfo->static_fields;
  *(_QWORD *)&v53->BATTLERESUME_MESSAGE_FONT_SIZE = 0x411000000000001BLL;
  *(_QWORD *)&v53->BATTLERESUME_MESSAGE_SPACING_Y = 0x40E0000000000005LL;
  *(_OWORD *)&v53->TALKRESUME_MESSAGE_FONT_SIZE = xmmword_CEFAC0;
  v53->OPENING_MOVIE_CONFIRM_MESSAGE_FONT_SIZE = 23;
  v54 = StringLiteral_22827/*"playedMovie"*/;
  v53->SAVE_KEY_PLAYED_MOVIE = (struct System_String_o *)StringLiteral_22827/*"playedMovie"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v53->SAVE_KEY_PLAYED_MOVIE, v54, v55, v56, v57, v58, v59, v60);
  v61 = StringLiteral_22832/*"playingMovie"*/;
  v62 = TitleRootComponent_TypeInfo->static_fields;
  v62->SAVE_KEY_PLAYING_MOVIE = (struct System_String_o *)StringLiteral_22832/*"playingMovie"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v62->SAVE_KEY_PLAYING_MOVIE, v61, v63, v64, v65, v66, v67, v68);
  v69 = StringLiteral_24217/*"title2_2"*/;
  v70 = TitleRootComponent_TypeInfo->static_fields;
  v70->PART2_CHAPTER6_EPILOGUE_BG_MOVIE_NAME = (struct System_String_o *)StringLiteral_24217/*"title2_2"*/;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&v70->PART2_CHAPTER6_EPILOGUE_BG_MOVIE_NAME,
    v69,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  v77 = TitleRootComponent_TypeInfo->static_fields;
  v77->PART2_CHAPTER6_EPILOGUE_BG_MOVIE_WAITTIME = 0.6;
  *(_QWORD *)&v77->ACCOUNT_LINKAGE_SELECT_CONTINUE_TYPE_HAS_DATA_FONT_SIZE = 0x1E00000016LL;
  v77->shouldFadeInOnError = 0;
}


void TitleRootComponent___ctor(TitleRootComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w1

  if ( (byte_4CC98C0 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_14491/*"Title/Prefabs/title_effect00"*/);
    byte_4CC98C0 = 1;
  }
  v9 = StringLiteral_14491/*"Title/Prefabs/title_effect00"*/;
  this->fields.epicOfRemnantEffectPrefabName = (struct System_String_o *)StringLiteral_14491/*"Title/Prefabs/title_effect00"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.epicOfRemnantEffectPrefabName, v9, v2, v3, v4, v5, v6, v7);
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0);
}


void TitleRootComponent__CancelAccountLinkageTakeOver(TitleRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v4; // x8
  CommonUI_o *v5; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4CC98B6 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&AvalonSceneManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_TitleRootComponent__CancelAccountLinkageTakeOver_b__162_0__);
    byte_4CC98B6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  v7 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_TitleRootComponent__CancelAccountLinkageTakeOver_b__162_0__, 0);
  if ( !v5 )
    sub_1C71608(v8, v9);
  CommonUI__maskFadeout(v5, 1, DEFAULT_FADE_TIME, v7, 0);
}


bool TitleRootComponent__CheckAndTransitionBattleTalk(TitleRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  struct BattleScriptRootComponent_TalkScriptInfo_o *TalkResumeInfo; // x0
  Il2CppObject **p_talkResumeInfo; // x22
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  BattleScriptRootComponent_TalkScriptInfo_o *v20; // x0
  System_String_o *v21; // x20
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  Il2CppObject *v28; // x21
  TerminalPramsManager_c *v29; // x8
  int32_t v30; // w1
  GrandQuestFolderBoardItem_o *p_lastPlayBgmName; // x0
  int klass_high; // w8
  int32_t positionY; // w28
  System_String_o *v34; // x27
  QuestEntity_o *v35; // x25
  QuestConsumeItemEntity_o *ItemConsumeEntity; // x23
  Il2CppObject *MasterData_object; // x24
  unsigned int v38; // w25
  struct System_Int32_array *v39; // x8
  Il2CppObject *v40; // x0
  unsigned int v41; // w25
  struct System_Int32_array *itemIds; // x8
  Il2CppObject *Entity; // x0
  TerminalPramsManager_c *v44; // x0
  int lastPlayQuestConsumeAp; // w20
  __int64 *v46; // x8
  __int64 *v47; // x8
  System_Object_array *ListByType; // x23
  System_Func_object__bool__o *v49; // x24
  System_String_o *v50; // x0
  __int64 *v51; // x8
  System_String_o *v52; // x22
  System_String_o *v53; // x0
  System_String_o *v54; // x23
  System_String_o *v55; // x0
  Il2CppObject *v56; // x21
  System_String_o *v57; // x24
  System_String_o *v58; // x25
  TripleButtonDlgComponent_CallbackFunc_o *v59; // x26
  System_String_o *v60; // x0
  TerminalPramsManager_c *v61; // x8
  TitleRootComponent_c *v62; // x0
  TerminalPramsManager_c *v63; // x0
  System_String_o *v64; // x23
  int v65; // w20
  System_String_o *v66; // x0
  TitleRootComponent_c *v67; // x8

  if ( (byte_4CC989F & 1) == 0 )
  {
    sub_1C713B0(&Method_BasicHelper_Any_QuestReleaseEntity____78639840);
    sub_1C713B0(&TripleButtonDlgComponent_CallbackFunc_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_1C713B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C713B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C713B0(&System_Func_QuestReleaseEntity__bool__TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&ScriptManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    sub_1C713B0(&TitleRootComponent_TypeInfo);
    sub_1C713B0(&TutorialFlag_TypeInfo);
    sub_1C713B0(&Method_TitleRootComponent___c__DisplayClass137_0__CheckAndTransitionBattleTalk_b__0__);
    sub_1C713B0(&Method_TitleRootComponent___c__DisplayClass137_0__CheckAndTransitionBattleTalk_b__1__);
    sub_1C713B0(&TitleRootComponent___c__DisplayClass137_0_TypeInfo);
    sub_1C713B0(&StringLiteral_13354/*"TALKRESUME_CONFIRM_MESSAGE_QPITEM_PART"*/);
    sub_1C713B0(&StringLiteral_13355/*"TALKRESUME_CONFIRM_MESSAGE_QP_PART"*/);
    sub_1C713B0(&StringLiteral_13352/*"TALKRESUME_CONFIRM_MESSAGE_BEFORE_NONE_BATTLE"*/);
    sub_1C713B0(&StringLiteral_13353/*"TALKRESUME_CONFIRM_MESSAGE_ITEM_PART"*/);
    sub_1C713B0(&StringLiteral_13359/*"TALKRESUME_CONFIRM_MIDDLE_BEFORE_NONE_BATTLE"*/);
    sub_1C713B0(&StringLiteral_13351/*"TALKRESUME_CONFIRM_MESSAGE_BEFORE_BATTLE"*/);
    sub_1C713B0(&StringLiteral_13357/*"TALKRESUME_CONFIRM_MIDDLE_AFTER_NONE_BATTLE"*/);
    sub_1C713B0(&StringLiteral_13346/*"TALKRESUME_CONFIRM_MESSAGE_AFTER_BATTLE"*/);
    sub_1C713B0(&StringLiteral_13347/*"TALKRESUME_CONFIRM_MESSAGE_AFTER_NONE_BATTLE"*/);
    sub_1C713B0(&StringLiteral_13344/*"TALKRESUME_CONFIRM_CANCEL"*/);
    sub_1C713B0(&StringLiteral_13350/*"TALKRESUME_CONFIRM_MESSAGE_AP_PART"*/);
    sub_1C713B0(&StringLiteral_13345/*"TALKRESUME_CONFIRM_DECIDE"*/);
    sub_1C713B0(&StringLiteral_13348/*"TALKRESUME_CONFIRM_MESSAGE_AFTER_NONE_BATTLE_NO_CONSUME_AP0"*/);
    sub_1C713B0(&StringLiteral_13358/*"TALKRESUME_CONFIRM_MIDDLE_BEFORE_BATTLE"*/);
    sub_1C713B0(&StringLiteral_13356/*"TALKRESUME_CONFIRM_MIDDLE_AFTER_BATTLE"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    sub_1C713B0(&StringLiteral_13360/*"TALKRESUME_CONFIRM_TITLE"*/);
    sub_1C713B0(&StringLiteral_13349/*"TALKRESUME_CONFIRM_MESSAGE_APQP_PART"*/);
    byte_4CC989F = 1;
  }
  v3 = sub_1C715FC(TitleRootComponent___c__DisplayClass137_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_127;
  *(_QWORD *)(v3 + 24) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v3 + 24), (int32_t)this, v6, v7, v8, v9, v10, v11);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  TalkResumeInfo = ScriptManager__GetTalkResumeInfo(0);
  p_talkResumeInfo = (Il2CppObject **)&this->fields.talkResumeInfo;
  this->fields.talkResumeInfo = TalkResumeInfo;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.talkResumeInfo,
    (int32_t)TalkResumeInfo,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = this->fields.talkResumeInfo;
  if ( v20 )
  {
    if ( BattleScriptRootComponent_TalkScriptInfo__IsRestorable(v20, 0) )
    {
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      if ( TutorialFlag__Get_40699620(102, 0) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v21 = LocalizationManager__Get((System_String_o *)StringLiteral_13360/*"TALKRESUME_CONFIRM_TITLE"*/, 0);
        v28 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_13350/*"TALKRESUME_CONFIRM_MESSAGE_AP_PART"*/, 0);
        v29 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v29 = TerminalPramsManager_TypeInfo;
        }
        v30 = StringLiteral_1/*""*/;
        p_lastPlayBgmName = (GrandQuestFolderBoardItem_o *)&v29->static_fields->lastPlayBgmName;
        p_lastPlayBgmName->klass = (GrandQuestFolderBoardItem_c *)StringLiteral_1/*""*/;
        sub_1C71354(p_lastPlayBgmName, v30, v22, v23, v24, v25, v26, v27);
        TerminalPramsManager__LastPlayBgmNameSave_SaveData(0);
        Instance = (DataManager_o *)TitleRootComponent_TypeInfo;
        if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
          Instance = (DataManager_o *)TitleRootComponent_TypeInfo;
        }
        if ( *p_talkResumeInfo )
        {
          klass_high = HIDWORD((*p_talkResumeInfo)[1].klass);
          positionY = *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 116LL);
          *(_DWORD *)(v3 + 16) = klass_high;
          if ( klass_high )
          {
            v34 = v21;
            Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_127;
            Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                          Instance,
                                          (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_QuestMaster___);
            if ( !Instance )
              goto LABEL_127;
            Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                          *(_DWORD *)(v3 + 16),
                                          (const MethodInfo_3408E80 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
            if ( !Instance )
              goto LABEL_127;
            v35 = (QuestEntity_o *)Instance;
            ItemConsumeEntity = QuestEntity__getItemConsumeEntity((QuestEntity_o *)Instance, 0, 0);
            Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_127;
            MasterData_object = DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ItemMaster___);
            Instance = (DataManager_o *)QuestEntity__GetConsumeType(v35, 0);
            if ( (unsigned int)((_DWORD)Instance - 1) < 2 )
            {
              Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
              }
              if ( *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 712LL) <= 0 )
              {
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13353/*"TALKRESUME_CONFIRM_MESSAGE_ITEM_PART"*/, 0);
                v28 = (Il2CppObject *)Instance;
              }
            }
            else if ( (_DWORD)Instance == 3 )
            {
              if ( ItemConsumeEntity )
              {
                Instance = (DataManager_o *)QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 0, 0);
                if ( ((unsigned __int8)Instance & 1) != 0 )
                {
                  v41 = 0;
                  while ( 1 )
                  {
                    itemIds = ItemConsumeEntity->fields.itemIds;
                    if ( !itemIds )
                      goto LABEL_127;
                    if ( v41 >= LODWORD(itemIds->max_length) )
LABEL_128:
                      sub_1C71610(Instance);
                    if ( !MasterData_object )
                      goto LABEL_127;
                    Entity = DataMasterBase_object__object__int___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                               itemIds->m_Items[v41],
                               (const MethodInfo_3408E80 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
                    if ( Entity )
                    {
                      if ( LODWORD(Entity[3].klass) == 1 )
                        break;
                    }
                    Instance = (DataManager_o *)QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, ++v41, 0);
                    if ( ((unsigned __int8)Instance & 1) == 0 )
                      goto LABEL_75;
                  }
                  if ( v41 || QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 1, 0) )
                  {
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    v47 = &StringLiteral_13354/*"TALKRESUME_CONFIRM_MESSAGE_QPITEM_PART"*/;
                  }
                  else
                  {
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    v47 = &StringLiteral_13355/*"TALKRESUME_CONFIRM_MESSAGE_QP_PART"*/;
                  }
                  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)*v47, 0);
                  v28 = (Il2CppObject *)Instance;
                }
              }
            }
            else if ( (_DWORD)Instance == 4 )
            {
              Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
              }
              if ( *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 712LL) <= 0 )
              {
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13353/*"TALKRESUME_CONFIRM_MESSAGE_ITEM_PART"*/, 0);
                v28 = (Il2CppObject *)Instance;
              }
              if ( ItemConsumeEntity )
              {
                Instance = (DataManager_o *)QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 0, 0);
                if ( ((unsigned __int8)Instance & 1) != 0 )
                {
                  v38 = 0;
                  while ( 1 )
                  {
                    v39 = ItemConsumeEntity->fields.itemIds;
                    if ( !v39 )
                      goto LABEL_127;
                    if ( v38 >= LODWORD(v39->max_length) )
                      goto LABEL_128;
                    if ( !MasterData_object )
                      goto LABEL_127;
                    v40 = DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                            v39->m_Items[v38],
                            (const MethodInfo_3408E80 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
                    if ( v40 )
                    {
                      if ( LODWORD(v40[3].klass) == 1 )
                        break;
                    }
                    Instance = (DataManager_o *)QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, ++v38, 0);
                    if ( ((unsigned __int8)Instance & 1) == 0 )
                      goto LABEL_75;
                  }
                  v44 = TerminalPramsManager_TypeInfo;
                  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                    v44 = TerminalPramsManager_TypeInfo;
                  }
                  lastPlayQuestConsumeAp = v44->static_fields->lastPlayQuestConsumeAp;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  if ( lastPlayQuestConsumeAp <= 0 )
                    v46 = &StringLiteral_13355/*"TALKRESUME_CONFIRM_MESSAGE_QP_PART"*/;
                  else
                    v46 = &StringLiteral_13349/*"TALKRESUME_CONFIRM_MESSAGE_APQP_PART"*/;
                  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)*v46, 0);
                  v28 = (Il2CppObject *)Instance;
LABEL_75:
                  v21 = v34;
                }
              }
            }
          }
          if ( *p_talkResumeInfo )
          {
            LOBYTE(v20) = 0;
            switch ( HIDWORD((*p_talkResumeInfo)[1].monitor) )
            {
              case 1:
                goto LABEL_87;
              case 3:
              case 7:
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v50 = LocalizationManager__Get((System_String_o *)StringLiteral_13351/*"TALKRESUME_CONFIRM_MESSAGE_BEFORE_BATTLE"*/, 0);
                v51 = &StringLiteral_13358/*"TALKRESUME_CONFIRM_MIDDLE_BEFORE_BATTLE"*/;
                goto LABEL_90;
              case 4:
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v52 = LocalizationManager__Get((System_String_o *)StringLiteral_13346/*"TALKRESUME_CONFIRM_MESSAGE_AFTER_BATTLE"*/, 0);
                v60 = LocalizationManager__Get((System_String_o *)StringLiteral_13356/*"TALKRESUME_CONFIRM_MIDDLE_AFTER_BATTLE"*/, 0);
                v61 = TerminalPramsManager_TypeInfo;
                v54 = v60;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v61 = TerminalPramsManager_TypeInfo;
                }
                if ( v61->static_fields->lastPlayQuestConsumeAp <= 0 )
                {
                  v62 = TitleRootComponent_TypeInfo;
                  if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
                    v62 = TitleRootComponent_TypeInfo;
                  }
                  positionY = v62->static_fields->TALKRESUME_AFTER_BATTLE_NO_CONSUME_AP_MESSAGE_POSITION_Y;
                }
                goto LABEL_92;
              case 5:
              case 6:
              case 8:
                Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !Instance )
                  goto LABEL_127;
                Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                              Instance,
                                              (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
                if ( !Instance )
                  goto LABEL_127;
                ListByType = (System_Object_array *)QuestReleaseMaster__getListByType(
                                                      (QuestReleaseMaster_o *)Instance,
                                                      116,
                                                      0);
                v49 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_QuestReleaseEntity__bool__TypeInfo);
                System_Func_object__bool____ctor(
                  v49,
                  (Il2CppObject *)v3,
                  Method_TitleRootComponent___c__DisplayClass137_0__CheckAndTransitionBattleTalk_b__1__,
                  0);
                if ( BasicHelper__Any_object__51593856(
                       ListByType,
                       (System_Func_T__bool__o *)v49,
                       (const MethodInfo_3134280 *)Method_BasicHelper_Any_QuestReleaseEntity____78639840) )
                {
                  goto LABEL_81;
                }
                Instance = (DataManager_o *)*p_talkResumeInfo;
                if ( !*p_talkResumeInfo )
                  goto LABEL_127;
                if ( BattleScriptRootComponent_TalkScriptInfo__isPhaseBeforeBattle(
                       (BattleScriptRootComponent_TalkScriptInfo_o *)Instance,
                       0) )
                {
LABEL_87:
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v50 = LocalizationManager__Get((System_String_o *)StringLiteral_13352/*"TALKRESUME_CONFIRM_MESSAGE_BEFORE_NONE_BATTLE"*/, 0);
                  v51 = &StringLiteral_13359/*"TALKRESUME_CONFIRM_MIDDLE_BEFORE_NONE_BATTLE"*/;
LABEL_90:
                  v52 = v50;
                  v53 = (System_String_o *)*v51;
                }
                else
                {
                  v63 = TerminalPramsManager_TypeInfo;
                  v64 = v21;
                  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                    v63 = TerminalPramsManager_TypeInfo;
                  }
                  v65 = v63->static_fields->lastPlayQuestConsumeAp;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  if ( v65 <= 0 )
                  {
                    v66 = LocalizationManager__Get((System_String_o *)StringLiteral_13348/*"TALKRESUME_CONFIRM_MESSAGE_AFTER_NONE_BATTLE_NO_CONSUME_AP0"*/, 0);
                    v67 = TitleRootComponent_TypeInfo;
                    v52 = v66;
                    v21 = v64;
                    if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
                      v67 = TitleRootComponent_TypeInfo;
                    }
                    positionY = v67->static_fields->TALKRESUME_AFTER_BATTLE_NO_CONSUME_AP_MESSAGE_POSITION_Y;
                  }
                  else
                  {
                    v52 = LocalizationManager__Get((System_String_o *)StringLiteral_13347/*"TALKRESUME_CONFIRM_MESSAGE_AFTER_NONE_BATTLE"*/, 0);
                    v21 = v64;
                  }
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v53 = (System_String_o *)StringLiteral_13357/*"TALKRESUME_CONFIRM_MIDDLE_AFTER_NONE_BATTLE"*/;
                }
                v54 = LocalizationManager__Get(v53, 0);
LABEL_92:
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v55 = LocalizationManager__Get((System_String_o *)StringLiteral_13348/*"TALKRESUME_CONFIRM_MESSAGE_AFTER_NONE_BATTLE_NO_CONSUME_AP0"*/, 0);
                if ( System_String__op_Inequality(v52, v55, 0) )
                  v52 = System_String__Format(v52, v28, 0);
                v56 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v57 = LocalizationManager__Get((System_String_o *)StringLiteral_13344/*"TALKRESUME_CONFIRM_CANCEL"*/, 0);
                v58 = LocalizationManager__Get((System_String_o *)StringLiteral_13345/*"TALKRESUME_CONFIRM_DECIDE"*/, 0);
                v59 = (TripleButtonDlgComponent_CallbackFunc_o *)sub_1C715FC(TripleButtonDlgComponent_CallbackFunc_TypeInfo);
                TripleButtonDlgComponent_CallbackFunc___ctor(
                  v59,
                  (Il2CppObject *)v3,
                  Method_TitleRootComponent___c__DisplayClass137_0__CheckAndTransitionBattleTalk_b__0__,
                  0);
                Instance = (DataManager_o *)TitleRootComponent_TypeInfo;
                if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
                  Instance = (DataManager_o *)TitleRootComponent_TypeInfo;
                }
                if ( !v56 )
                  goto LABEL_127;
                CommonUI__OpenTripleButtonDlg(
                  (CommonUI_o *)v56,
                  v21,
                  v52,
                  v57,
                  v54,
                  v58,
                  v59,
                  *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 112LL),
                  positionY,
                  *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 120LL),
                  0,
                  0,
                  8,
                  8,
                  0,
                  0,
                  0,
                  0,
                  0,
                  0);
                break;
              default:
                return (char)v20;
            }
            goto LABEL_102;
          }
        }
      }
      else
      {
        Instance = (DataManager_o *)*p_talkResumeInfo;
        if ( *p_talkResumeInfo )
        {
          BattleScriptRootComponent_TalkScriptInfo__SetJump(
            (BattleScriptRootComponent_TalkScriptInfo_o *)Instance,
            0,
            0);
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( Instance )
          {
            AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 38, 2, *p_talkResumeInfo, 0, 0);
LABEL_102:
            LOBYTE(v20) = 1;
            return (char)v20;
          }
        }
      }
LABEL_127:
      sub_1C71608(Instance, v5);
    }
LABEL_81:
    LOBYTE(v20) = 0;
  }
  return (char)v20;
}


void TitleRootComponent__CheckBattleBefore(TitleRootComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  TitleRootComponent_o *v8; // x19
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkResumeInfo; // x8
  int32_t talkType; // w8
  struct BattleScriptRootComponent_TalkScriptInfo_o *v11; // x8
  int32_t qId; // w21
  struct BattleScriptRootComponent_TalkScriptInfo_o *v13; // x8
  int32_t pId; // w21
  struct BattleScriptRootComponent_TalkScriptInfo_o *v15; // x21
  GrandQuestFolderBoardItem_o *p_updateAnchors; // x0
  const MethodInfo *v17; // x1

  v8 = this;
  if ( (byte_4CC98A0 & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    this = (TitleRootComponent_o *)sub_1C713B0(&StringLiteral_6975/*"GO_TERMINAL"*/);
    byte_4CC98A0 = 1;
  }
  talkResumeInfo = v8->fields.talkResumeInfo;
  if ( !talkResumeInfo )
    goto LABEL_44;
  talkType = talkResumeInfo->fields.talkType;
  if ( (unsigned int)(talkType - 7) < 2 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4CC3C96 )
    {
      sub_1C713B0(&TerminalPramsManager_TypeInfo);
      byte_4CC3C96 = 1;
    }
    this = (TitleRootComponent_o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      this = (TitleRootComponent_o *)TerminalPramsManager_TypeInfo;
    }
    LODWORD(this->fields.takteOverIdLb->klass) = 2;
    if ( !byte_4CC1B52 )
    {
      sub_1C713B0(&TerminalPramsManager_TypeInfo);
      this = (TitleRootComponent_o *)TerminalPramsManager_TypeInfo;
      byte_4CC1B52 = 1;
    }
    if ( !LODWORD(this->fields.takeoverPasswardInput) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (TitleRootComponent_o *)TerminalPramsManager_TypeInfo;
    }
    BYTE5(this->fields.takteOverIdLb[1].fields.rightAnchor) = 1;
    if ( !byte_4CC3059 )
    {
      sub_1C713B0(&TerminalPramsManager_TypeInfo);
      this = (TitleRootComponent_o *)TerminalPramsManager_TypeInfo;
      byte_4CC3059 = 1;
    }
    if ( !LODWORD(this->fields.takeoverPasswardInput) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (TitleRootComponent_o *)TerminalPramsManager_TypeInfo;
    }
    HIBYTE(this->fields.takteOverIdLb->fields.mUpdateFrame) = 0;
    if ( !byte_4CC47DD )
    {
      sub_1C713B0(&TerminalPramsManager_TypeInfo);
      this = (TitleRootComponent_o *)TerminalPramsManager_TypeInfo;
      byte_4CC47DD = 1;
    }
    if ( !LODWORD(this->fields.takeoverPasswardInput) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (TitleRootComponent_o *)TerminalPramsManager_TypeInfo;
    }
    this->fields.takteOverIdLb->fields.mAnchorsCached = 1;
    v11 = v8->fields.talkResumeInfo;
    if ( v11 )
    {
      qId = v11->fields.qId;
      if ( !byte_4CC47DB )
      {
        sub_1C713B0(&TerminalPramsManager_TypeInfo);
        this = (TitleRootComponent_o *)TerminalPramsManager_TypeInfo;
        byte_4CC47DB = 1;
      }
      if ( !LODWORD(this->fields.takeoverPasswardInput) )
      {
        j_il2cpp_runtime_class_init_0(this);
        this = (TitleRootComponent_o *)TerminalPramsManager_TypeInfo;
      }
      LODWORD(this->fields.takteOverIdLb[1].fields.topAnchor) = qId;
      v13 = v8->fields.talkResumeInfo;
      if ( v13 )
      {
        pId = v13->fields.pId;
        if ( !byte_4CC47DC )
        {
          sub_1C713B0(&TerminalPramsManager_TypeInfo);
          this = (TitleRootComponent_o *)TerminalPramsManager_TypeInfo;
          byte_4CC47DC = 1;
        }
        if ( !LODWORD(this->fields.takeoverPasswardInput) )
        {
          j_il2cpp_runtime_class_init_0(this);
          this = (TitleRootComponent_o *)TerminalPramsManager_TypeInfo;
        }
        HIDWORD(this->fields.takteOverIdLb[1].fields.topAnchor) = pId;
        v15 = v8->fields.talkResumeInfo;
        if ( !byte_4CC44C6 )
        {
          sub_1C713B0(&TerminalPramsManager_TypeInfo);
          this = (TitleRootComponent_o *)TerminalPramsManager_TypeInfo;
          byte_4CC44C6 = 1;
        }
        if ( !LODWORD(this->fields.takeoverPasswardInput) )
        {
          j_il2cpp_runtime_class_init_0(this);
          this = (TitleRootComponent_o *)TerminalPramsManager_TypeInfo;
        }
        p_updateAnchors = (GrandQuestFolderBoardItem_o *)&this->fields.takteOverIdLb[1].fields.updateAnchors;
        p_updateAnchors->klass = (GrandQuestFolderBoardItem_c *)v15;
        sub_1C71354(p_updateAnchors, (int32_t)v15, v2, v3, v4, v5, v6, v7);
        TitleRootComponent__ReleaseTitleAssets(v8, v17);
        this = (TitleRootComponent_o *)v8->fields.myFSM;
        if ( this )
        {
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_6975/*"GO_TERMINAL"*/, 0);
          return;
        }
      }
    }
LABEL_44:
    sub_1C71608(this, method);
  }
  if ( talkType == 3 )
  {
    TitleRootComponent__callHomeRequest(v8, method);
  }
  else
  {
    this = (TitleRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this )
      goto LABEL_44;
    CommonUI__SetChangeOtherConnectMarkFromPlayerPrefs((CommonUI_o *)this, 0);
    this = (TitleRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !this )
      goto LABEL_44;
    AvalonSceneManager__transitionSceneRefresh(
      (AvalonSceneManager_o *)this,
      38,
      2,
      (Il2CppObject *)v8->fields.talkResumeInfo,
      0,
      0);
  }
}


void TitleRootComponent__CheckChangeTitle(TitleRootComponent_o *this, const MethodInfo *method)
{
  TitleRootComponent_c *v3; // x0
  TitleIlluminationManager_o *StoryProgress; // x0
  __int64 v5; // x1
  UnityEngine_GameObject_o *copylightImg; // x8
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  TitleRootComponent_c *v13; // x0
  struct System_String_o **p_DEFAULT_BGM; // x8
  struct System_String_o *v15; // x1
  Il2CppObject *object; // x21
  UnityEngine_Transform_o *transform; // x0
  struct UnityEngine_GameObject_o *v18; // x0
  struct UnityEngine_GameObject_o **p_titleBgEffect; // x20
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  UISprite_o *titleImgSprite; // x21
  struct System_String_o *EPIC_OF_REMNANT_BGM; // x1
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  UnityEngine_Object_o *epicOfRemnantTitleBgObject; // x20
  bool v35; // w1
  UnityEngine_GameObject_o *cosmosInTheLostbeltEffectPrefab; // x20
  UnityEngine_Transform_o *v37; // x0
  struct UnityEngine_GameObject_o *v38; // x0
  struct UnityEngine_GameObject_o **v39; // x20
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  UISprite_o *v46; // x21
  struct System_String_o *COSMOS_IN_THE_LOSTBELT_BGM; // x1
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  bool v54; // w1
  UISprite_o *v55; // x20
  struct System_String_o *COSMOS_IN_THE_LOSTBELT_VER2_BGM; // x1
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  UnityEngine_Object_o *v63; // x20

  if ( (byte_4CC9880 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponentInChildren_Camera___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_Resources_Load_GameObject___);
    sub_1C713B0(&TitleRootComponent_TypeInfo);
    byte_4CC9880 = 1;
  }
  v3 = TitleRootComponent_TypeInfo;
  if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
  StoryProgress = (TitleIlluminationManager_o *)TitleRootComponent__GetStoryProgress((const MethodInfo *)v3);
  copylightImg = this->fields.copylightImg;
  this->fields.storyProgress = (int)StoryProgress;
  if ( !copylightImg )
LABEL_72:
    sub_1C71608(StoryProgress, v5);
  UnityEngine_GameObject__SetActive(copylightImg, 1, 0);
  switch ( this->fields.storyProgress )
  {
    case 0:
      v13 = TitleRootComponent_TypeInfo;
      if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
        v13 = TitleRootComponent_TypeInfo;
      }
      p_DEFAULT_BGM = &v13->static_fields->DEFAULT_BGM;
      v15 = *p_DEFAULT_BGM;
      this->fields.bgmName = *p_DEFAULT_BGM;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.bgmName, (int32_t)v15, v7, v8, v9, v10, v11, v12);
      StoryProgress = this->fields.effectManager;
      if ( !StoryProgress )
        goto LABEL_72;
      TitleIlluminationManager__StartIllumination(StoryProgress, 0);
      goto LABEL_65;
    case 1:
      object = UnityEngine_Resources__Load_object_(
                 this->fields.epicOfRemnantEffectPrefabName,
                 (const MethodInfo_31E7F68 *)Method_UnityEngine_Resources_Load_GameObject___);
      StoryProgress = (TitleIlluminationManager_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0);
      if ( !StoryProgress )
        goto LABEL_72;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)StoryProgress, 0);
      v18 = BaseMonoBehaviour__createObject(
              (BaseMonoBehaviour_o *)this,
              (UnityEngine_GameObject_o *)object,
              transform,
              0,
              0);
      p_titleBgEffect = &this->fields.titleBgEffect;
      this->fields.titleBgEffect = v18;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&this->fields.titleBgEffect,
        (int32_t)v18,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
      if ( !object )
        goto LABEL_72;
      StoryProgress = (TitleIlluminationManager_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                                      (UnityEngine_GameObject_o *)object,
                                                      (const MethodInfo_31A3134 *)Method_UnityEngine_GameObject_GetComponentInChildren_Camera___);
      if ( !StoryProgress )
        goto LABEL_72;
      UnityEngine_Camera__set_targetTexture((UnityEngine_Camera_o *)StoryProgress, 0, 0);
      StoryProgress = (TitleIlluminationManager_o *)this->fields.backImg;
      if ( !StoryProgress )
        goto LABEL_72;
      ((void (__fastcall *)(TitleIlluminationManager_o *, struct UnityEngine_Texture2D_o *, void *))StoryProgress->klass[1].vtable._3_ToString.method)(
        StoryProgress,
        this->fields.epicOfRemnantTitleBg,
        StoryProgress->klass[2]._1.image);
      StoryProgress = (TitleIlluminationManager_o *)TitleRootComponent_TypeInfo;
      titleImgSprite = this->fields.titleImgSprite;
      if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
      if ( !titleImgSprite )
        goto LABEL_72;
      UISprite__set_spriteName(titleImgSprite, TitleRootComponent_TypeInfo->static_fields->EPIC_OF_REMNANT_TITLE, 0);
      StoryProgress = (TitleIlluminationManager_o *)this->fields.titleImgSprite;
      if ( !StoryProgress )
        goto LABEL_72;
      ((void (__fastcall *)(TitleIlluminationManager_o *, void *))StoryProgress->klass[2]._1.parent)(
        StoryProgress,
        StoryProgress->klass[2]._1.generic_class);
      StoryProgress = (TitleIlluminationManager_o *)this->fields.startImgObj;
      if ( !StoryProgress )
        goto LABEL_72;
      StoryProgress = (TitleIlluminationManager_o *)UnityEngine_GameObject__get_transform(
                                                      (UnityEngine_GameObject_o *)StoryProgress,
                                                      0);
      if ( !StoryProgress )
        goto LABEL_72;
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)StoryProgress,
        TitleRootComponent_TypeInfo->static_fields->EPIC_OF_REMNANT_START_IMG_POS,
        0);
      StoryProgress = (TitleIlluminationManager_o *)this->fields.titleImgSprite;
      if ( !StoryProgress )
        goto LABEL_72;
      StoryProgress = (TitleIlluminationManager_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)StoryProgress,
                                                      0);
      if ( !StoryProgress )
        goto LABEL_72;
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)StoryProgress,
        TitleRootComponent_TypeInfo->static_fields->EPIC_OF_REMNANT_LOGO_POS,
        0);
      EPIC_OF_REMNANT_BGM = TitleRootComponent_TypeInfo->static_fields->EPIC_OF_REMNANT_BGM;
      this->fields.bgmName = EPIC_OF_REMNANT_BGM;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&this->fields.bgmName,
        (int32_t)EPIC_OF_REMNANT_BGM,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
      StoryProgress = this->fields.effectManager;
      if ( !StoryProgress )
        goto LABEL_72;
      StoryProgress = (TitleIlluminationManager_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)StoryProgress,
                                                      0);
      if ( !StoryProgress )
        goto LABEL_72;
      StoryProgress = (TitleIlluminationManager_o *)UnityEngine_Transform__get_parent(
                                                      (UnityEngine_Transform_o *)StoryProgress,
                                                      0);
      if ( !StoryProgress )
        goto LABEL_72;
      StoryProgress = (TitleIlluminationManager_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)StoryProgress,
                                                      0);
      if ( !StoryProgress )
        goto LABEL_72;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)StoryProgress, 0, 0);
      StoryProgress = (TitleIlluminationManager_o *)*p_titleBgEffect;
      if ( !*p_titleBgEffect )
        goto LABEL_72;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)StoryProgress, 1, 0);
      epicOfRemnantTitleBgObject = (UnityEngine_Object_o *)this->fields.epicOfRemnantTitleBgObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(epicOfRemnantTitleBgObject, 0, 0) )
        return;
      StoryProgress = (TitleIlluminationManager_o *)this->fields.epicOfRemnantTitleBgObject;
      if ( !StoryProgress )
        goto LABEL_72;
      v35 = 1;
      goto LABEL_70;
    case 2:
      StoryProgress = (TitleIlluminationManager_o *)this->fields.effectParentObject;
      if ( !StoryProgress )
        goto LABEL_72;
      cosmosInTheLostbeltEffectPrefab = this->fields.cosmosInTheLostbeltEffectPrefab;
      v37 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)StoryProgress, 0);
      v38 = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, cosmosInTheLostbeltEffectPrefab, v37, 0, 0);
      v39 = &this->fields.titleBgEffect;
      this->fields.titleBgEffect = v38;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&this->fields.titleBgEffect,
        (int32_t)v38,
        v40,
        v41,
        v42,
        v43,
        v44,
        v45);
      StoryProgress = (TitleIlluminationManager_o *)this->fields.backImg;
      if ( !StoryProgress )
        goto LABEL_72;
      ((void (__fastcall *)(TitleIlluminationManager_o *, struct UnityEngine_Texture2D_o *, void *))StoryProgress->klass[1].vtable._3_ToString.method)(
        StoryProgress,
        this->fields.cosmosInTheLostbeltTitleBg,
        StoryProgress->klass[2]._1.image);
      StoryProgress = (TitleIlluminationManager_o *)TitleRootComponent_TypeInfo;
      v46 = this->fields.titleImgSprite;
      if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
      if ( !v46 )
        goto LABEL_72;
      UISprite__set_spriteName(v46, TitleRootComponent_TypeInfo->static_fields->COSMOS_IN_THE_LOSTBELT_TITLE, 0);
      StoryProgress = (TitleIlluminationManager_o *)this->fields.titleImgSprite;
      if ( !StoryProgress )
        goto LABEL_72;
      ((void (__fastcall *)(TitleIlluminationManager_o *, void *))StoryProgress->klass[2]._1.parent)(
        StoryProgress,
        StoryProgress->klass[2]._1.generic_class);
      StoryProgress = (TitleIlluminationManager_o *)this->fields.startImgObj;
      if ( !StoryProgress )
        goto LABEL_72;
      StoryProgress = (TitleIlluminationManager_o *)UnityEngine_GameObject__get_transform(
                                                      (UnityEngine_GameObject_o *)StoryProgress,
                                                      0);
      if ( !StoryProgress )
        goto LABEL_72;
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)StoryProgress,
        TitleRootComponent_TypeInfo->static_fields->COSMOS_IN_THE_LOSTBELT_START_IMG_POS,
        0);
      StoryProgress = (TitleIlluminationManager_o *)this->fields.titleImgSprite;
      if ( !StoryProgress )
        goto LABEL_72;
      StoryProgress = (TitleIlluminationManager_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)StoryProgress,
                                                      0);
      if ( !StoryProgress )
        goto LABEL_72;
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)StoryProgress,
        TitleRootComponent_TypeInfo->static_fields->COSMOS_IN_THE_LOSTBELT_LOGO_POS,
        0);
      COSMOS_IN_THE_LOSTBELT_BGM = TitleRootComponent_TypeInfo->static_fields->COSMOS_IN_THE_LOSTBELT_BGM;
      this->fields.bgmName = COSMOS_IN_THE_LOSTBELT_BGM;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&this->fields.bgmName,
        (int32_t)COSMOS_IN_THE_LOSTBELT_BGM,
        v48,
        v49,
        v50,
        v51,
        v52,
        v53);
      StoryProgress = this->fields.effectManager;
      if ( !StoryProgress )
        goto LABEL_72;
      StoryProgress = (TitleIlluminationManager_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)StoryProgress,
                                                      0);
      if ( !StoryProgress )
        goto LABEL_72;
      StoryProgress = (TitleIlluminationManager_o *)UnityEngine_Transform__get_parent(
                                                      (UnityEngine_Transform_o *)StoryProgress,
                                                      0);
      if ( !StoryProgress )
        goto LABEL_72;
      StoryProgress = (TitleIlluminationManager_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)StoryProgress,
                                                      0);
      if ( !StoryProgress )
        goto LABEL_72;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)StoryProgress, 0, 0);
      StoryProgress = (TitleIlluminationManager_o *)*v39;
      if ( !*v39 )
        goto LABEL_72;
      v54 = 1;
      goto LABEL_64;
    case 3:
      StoryProgress = (TitleIlluminationManager_o *)TitleRootComponent_TypeInfo;
      v55 = this->fields.titleImgSprite;
      if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
      if ( !v55 )
        goto LABEL_72;
      UISprite__set_spriteName(v55, TitleRootComponent_TypeInfo->static_fields->COSMOS_IN_THE_LOSTBELT_TITLE, 0);
      StoryProgress = (TitleIlluminationManager_o *)this->fields.titleImgSprite;
      if ( !StoryProgress )
        goto LABEL_72;
      ((void (__fastcall *)(TitleIlluminationManager_o *, void *))StoryProgress->klass[2]._1.parent)(
        StoryProgress,
        StoryProgress->klass[2]._1.generic_class);
      StoryProgress = (TitleIlluminationManager_o *)this->fields.startImgObj;
      if ( !StoryProgress )
        goto LABEL_72;
      StoryProgress = (TitleIlluminationManager_o *)UnityEngine_GameObject__get_transform(
                                                      (UnityEngine_GameObject_o *)StoryProgress,
                                                      0);
      if ( !StoryProgress )
        goto LABEL_72;
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)StoryProgress,
        TitleRootComponent_TypeInfo->static_fields->COSMOS_IN_THE_LOSTBELT_START_IMG_POS,
        0);
      StoryProgress = (TitleIlluminationManager_o *)this->fields.titleImgSprite;
      if ( !StoryProgress )
        goto LABEL_72;
      StoryProgress = (TitleIlluminationManager_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)StoryProgress,
                                                      0);
      if ( !StoryProgress )
        goto LABEL_72;
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)StoryProgress,
        TitleRootComponent_TypeInfo->static_fields->COSMOS_IN_THE_LOSTBELT_LOGO_POS,
        0);
      COSMOS_IN_THE_LOSTBELT_VER2_BGM = TitleRootComponent_TypeInfo->static_fields->COSMOS_IN_THE_LOSTBELT_VER2_BGM;
      this->fields.bgmName = COSMOS_IN_THE_LOSTBELT_VER2_BGM;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&this->fields.bgmName,
        (int32_t)COSMOS_IN_THE_LOSTBELT_VER2_BGM,
        v57,
        v58,
        v59,
        v60,
        v61,
        v62);
      StoryProgress = this->fields.effectManager;
      if ( !StoryProgress )
        goto LABEL_72;
      StoryProgress = (TitleIlluminationManager_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)StoryProgress,
                                                      0);
      if ( !StoryProgress )
        goto LABEL_72;
      StoryProgress = (TitleIlluminationManager_o *)UnityEngine_Transform__get_parent(
                                                      (UnityEngine_Transform_o *)StoryProgress,
                                                      0);
      if ( !StoryProgress )
        goto LABEL_72;
      StoryProgress = (TitleIlluminationManager_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)StoryProgress,
                                                      0);
      if ( !StoryProgress )
        goto LABEL_72;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)StoryProgress, 0, 0);
      StoryProgress = (TitleIlluminationManager_o *)this->fields.backImg;
      if ( !StoryProgress )
        goto LABEL_72;
      StoryProgress = (TitleIlluminationManager_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)StoryProgress,
                                                      0);
      if ( !StoryProgress )
        goto LABEL_72;
      v54 = 0;
LABEL_64:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)StoryProgress, v54, 0);
LABEL_65:
      v63 = (UnityEngine_Object_o *)this->fields.epicOfRemnantTitleBgObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v63, 0, 0) )
        return;
      StoryProgress = (TitleIlluminationManager_o *)this->fields.epicOfRemnantTitleBgObject;
      if ( !StoryProgress )
        goto LABEL_72;
      v35 = 0;
LABEL_70:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)StoryProgress, v35, 0);
      return;
    default:
      return;
  }
}


bool TitleRootComponent__CheckValidBattleSaveData(TitleRootComponent_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  int64_t ResumeBattleId; // x0
  struct WarBoardDataEntity_o *resumeWarBoardData; // x23
  __int64 v7; // x20
  System_String_o *AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY; // x21
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  NetworkManager_ResultCallbackFunc_o *v11; // x21
  Il2CppObject *Request_object; // x19
  int32_t v13; // w21
  int32_t v14; // w22
  System_Int32_array *v15; // x4
  int64_t v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  struct WarBoardDataEntity_o *v19; // x8
  NetworkManager_ResultCallbackFunc_o *v20; // x21
  struct WarBoardDataEntity_o *v21; // x8
  CommonConfirmDialog_ClickDelegate_o *v22; // x20
  TitleRootComponent_o *v23; // x0
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x1
  int32_t SavedQuestId; // w20
  int32_t SavedQuestPhase; // w21
  System_Int32_array *WaveClearTurn; // x22
  NetworkManager_ResultCallbackFunc_o *v29; // x23

  if ( (byte_4CC989A & 1) == 0 )
  {
    sub_1C713B0(&BattleData_TypeInfo);
    sub_1C713B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C713B0(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C713B0(&Method_NetworkManager_getRequest_BattleResumeRequest___);
    sub_1C713B0(&Method_NetworkManager_getRequest_WarBoardBattleResumeRequest___);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&PurchaseBehaviour_TypeInfo);
    sub_1C713B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_TitleRootComponent_OnClickConfirmWarBoardResumDialog__);
    sub_1C713B0(&Method_TitleRootComponent_endRequestBattleResumeRequest__);
    sub_1C713B0(&WarBoardData_TypeInfo);
    sub_1C713B0(&StringLiteral_6975/*"GO_TERMINAL"*/);
    byte_4CC989A = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  CommonUI__CheckChangeOtherConnectMark(Instance, 0);
  if ( !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  ResumeBattleId = BattleData__getResumeBattleId(0);
  resumeWarBoardData = this->fields.resumeWarBoardData;
  v7 = ResumeBattleId;
  if ( WarBoardData_TypeInfo->_2.cctor_finished )
  {
    if ( resumeWarBoardData )
      goto LABEL_8;
LABEL_13:
    WarBoardData__DeleteAfterContinueDeviceLocalSave(0);
    if ( v7 < 1 )
    {
      if ( TitleRootComponent__CheckAndTransitionBattleTalk(this, v10) )
        return 1;
      if ( !BattleData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
      if ( !BattleData__isReserveResumeBattle(0) )
      {
        TitleRootComponent__ReleaseTitleAssets(this, v25);
        if ( !BattleData_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
        BattleData__setContinueBattleFlg(0, 1, 0);
        Instance = (CommonUI_o *)this->fields.myFSM;
        if ( Instance )
        {
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_6975/*"GO_TERMINAL"*/, 0);
          return 1;
        }
        goto LABEL_46;
      }
      if ( !BattleData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
      SavedQuestId = BattleData__getSavedQuestId(0);
      SavedQuestPhase = BattleData__getSavedQuestPhase(0);
      WaveClearTurn = BattleData__getWaveClearTurn(0);
      v29 = (NetworkManager_ResultCallbackFunc_o *)sub_1C715FC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v29,
        (Il2CppObject *)this,
        Method_TitleRootComponent_endRequestBattleResumeRequest__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (CommonUI_o *)NetworkManager__getRequest_object_(
                                 v29,
                                 (const MethodInfo_31D69E8 *)Method_NetworkManager_getRequest_BattleResumeRequest___);
      if ( !Instance )
        goto LABEL_46;
      v16 = -1;
      v17 = SavedQuestId;
      v18 = SavedQuestPhase;
      v15 = WaveClearTurn;
    }
    else
    {
      v11 = (NetworkManager_ResultCallbackFunc_o *)sub_1C715FC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v11,
        (Il2CppObject *)this,
        Method_TitleRootComponent_endRequestBattleResumeRequest__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = NetworkManager__getRequest_object_(
                         v11,
                         (const MethodInfo_31D69E8 *)Method_NetworkManager_getRequest_BattleResumeRequest___);
      if ( !BattleData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
      v13 = BattleData__getSavedQuestId(0);
      v14 = BattleData__getSavedQuestPhase(0);
      Instance = (CommonUI_o *)BattleData__getWaveClearTurn(0);
      if ( !Request_object )
        goto LABEL_46;
      v15 = (System_Int32_array *)Instance;
      Instance = (CommonUI_o *)Request_object;
      v16 = v7;
      v17 = v13;
      v18 = v14;
    }
    BattleResumeRequest__beginRequest((BattleResumeRequest_o *)Instance, v16, v17, v18, v15, 0);
    return 1;
  }
  j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
  if ( !resumeWarBoardData )
    goto LABEL_13;
LABEL_8:
  AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY = WarBoardData_TypeInfo->static_fields->AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY;
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  if ( !EncryptedPlayerPrefs__HasKey(AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY, 0) )
  {
    if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
    PurchaseBehaviour__ActivateBoth(0);
    v19 = this->fields.resumeWarBoardData;
    if ( v19 )
    {
      if ( v19->fields.progressType != 2 )
      {
        v22 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C715FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          v22,
          (Il2CppObject *)this,
          Method_TitleRootComponent_OnClickConfirmWarBoardResumDialog__,
          0);
        TitleRootComponent__ConfirmWarBoardResume(v23, v22, v24);
        return 1;
      }
      v20 = (NetworkManager_ResultCallbackFunc_o *)sub_1C715FC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v20,
        (Il2CppObject *)this,
        Method_TitleRootComponent_endRequestBattleResumeRequest__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (CommonUI_o *)NetworkManager__getRequest_object_(
                                 v20,
                                 (const MethodInfo_31D69E8 *)Method_NetworkManager_getRequest_WarBoardBattleResumeRequest___);
      v21 = this->fields.resumeWarBoardData;
      if ( v21 )
      {
        if ( Instance )
        {
          WarBoardBattleResumeRequest__beginRequest(
            (WarBoardBattleResumeRequest_o *)Instance,
            v21->fields.stageId,
            v7 & ~(v7 >> 63),
            0);
          return 1;
        }
      }
    }
LABEL_46:
    sub_1C71608(Instance, v4);
  }
  TitleRootComponent__RetireWarBoard(this, v9);
  return 1;
}


bool TitleRootComponent__ConfirmBattleContinueResume(TitleRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_String_o *v4; // x21
  System_String_o *v5; // x22
  System_String_o *v6; // x23
  System_String_o *v7; // x24
  CommonConfirmDialog_ClickDelegate_o *v8; // x25
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4CC98AD & 1) == 0 )
  {
    sub_1C713B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_TitleRootComponent_OnConfirmBattleContinueResume__);
    sub_1C713B0(&StringLiteral_2675/*"BATTLECONTINUERESUME_CONFIRM_TITLE"*/);
    sub_1C713B0(&StringLiteral_2674/*"BATTLECONTINUERESUME_CONFIRM_MESSAGE"*/);
    sub_1C713B0(&StringLiteral_2673/*"BATTLECONTINUERESUME_CONFIRM_DECIDE"*/);
    sub_1C713B0(&StringLiteral_2672/*"BATTLECONTINUERESUME_CONFIRM_CANCEL"*/);
    byte_4CC98AD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_2675/*"BATTLECONTINUERESUME_CONFIRM_TITLE"*/, 0);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_2674/*"BATTLECONTINUERESUME_CONFIRM_MESSAGE"*/, 0);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_2673/*"BATTLECONTINUERESUME_CONFIRM_DECIDE"*/, 0);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_2672/*"BATTLECONTINUERESUME_CONFIRM_CANCEL"*/, 0);
  v8 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C715FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v8,
    (Il2CppObject *)this,
    Method_TitleRootComponent_OnConfirmBattleContinueResume__,
    0);
  if ( !Instance )
    sub_1C71608(v9, v10);
  CommonUI__OpenConfirmDialog_31440236((CommonUI_o *)Instance, v4, v5, v6, v7, v8, 0, 0, 0, 0);
  return 1;
}


bool TitleRootComponent__ConfirmBattleResume(TitleRootComponent_o *this, const MethodInfo *method)
{
  TitleRootComponent_o *v2; // x19
  const MethodInfo *v3; // x2
  struct WarBoardDataEntity_o *resumeWarBoardData; // x8
  CommonConfirmDialog_ClickDelegate_o *v5; // x20
  TitleRootComponent_o *v6; // x0
  const MethodInfo *v7; // x2
  System_String_o *v8; // x25
  System_String_o *v9; // x20
  System_String_o *v10; // x21
  int32_t SavedQuestId; // w23
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  Il2CppObject *Entity; // x26
  TitleRootComponent_c *v15; // x8
  struct TitleRootComponent_StaticFields *static_fields; // x8
  float BATTLERESUME_MESSAGE_POSITION_Y; // s8
  int32_t BATTLERESUME_MESSAGE_FONT_SIZE; // w22
  bool HasFlag; // w24
  System_String_o *v20; // x0
  bool isCancelTxtTwoLine; // w27
  int32_t v22; // w23
  System_String_o *v23; // x24
  CommonConfirmDialog_ClickDelegate_o *v24; // x26
  TitleRootComponent_o *v25; // x0
  float v26; // s1
  System_Collections_IEnumerator_o *v27; // x0
  Il2CppObject *v29; // x24
  System_String_o *v30; // x25
  const MethodInfo *v31; // x2
  QuestConsumeItemEntity_o *ItemConsumeEntity; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v33; // x27
  unsigned int v34; // w28
  struct System_Int32_array *itemIds; // x8
  Il2CppObject *v36; // x0
  __int64 *v37; // x8
  QuestConsumeItemEntity_o *v38; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v39; // x27
  TerminalPramsManager_c *v40; // x0
  __int64 v41; // x24
  unsigned int v42; // w28
  struct System_Int32_array *v43; // x8
  Il2CppObject *v44; // x0
  TerminalPramsManager_c *v45; // x0
  __int64 *v46; // x8
  bool v47; // w23
  System_String_o *v48; // x0
  TitleRootComponent_c *v49; // x0
  const MethodInfo *v50; // [xsp+10h] [xbp-80h]
  Il2CppObject *v51; // [xsp+28h] [xbp-68h]

  v2 = this;
  if ( (byte_4CC98A4 & 1) == 0 )
  {
    sub_1C713B0(&BattleData_TypeInfo);
    sub_1C713B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C713B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C713B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    sub_1C713B0(&Method_TitleRootComponent_OnClickConfirmWarBoardBattleResumDialog__);
    sub_1C713B0(&Method_TitleRootComponent_OnConfirmBattleResume__);
    sub_1C713B0(&TitleRootComponent_TypeInfo);
    sub_1C713B0(&StringLiteral_2683/*"BATTLERESUME_CONFIRM_MESSAGE_CONSUME_ITEM_QP"*/);
    sub_1C713B0(&StringLiteral_2684/*"BATTLERESUME_CONFIRM_MESSAGE_CONSUME_QP"*/);
    sub_1C713B0(&StringLiteral_3793/*"CONSUME_TYPE_AP"*/);
    sub_1C713B0(&StringLiteral_2685/*"BATTLERESUME_CONFIRM_MESSAGE_CUSTOM"*/);
    sub_1C713B0(&StringLiteral_2686/*"BATTLERESUME_CONFIRM_MESSAGE_NO_CONSUME"*/);
    sub_1C713B0(&StringLiteral_2688/*"BATTLERESUME_CONFIRM_MESSAGE_TEMPORARY_WITHDRAWAL"*/);
    sub_1C713B0(&StringLiteral_2689/*"BATTLERESUME_CONFIRM_TEMPORARY_WITHDRAWAL"*/);
    sub_1C713B0(&StringLiteral_2690/*"BATTLERESUME_CONFIRM_TITLE"*/);
    sub_1C713B0(&StringLiteral_3794/*"CONSUME_TYPE_RP"*/);
    sub_1C713B0(&StringLiteral_2679/*"BATTLERESUME_CONFIRM_MESSAGE_CONSUME_AP0"*/);
    sub_1C713B0(&StringLiteral_2680/*"BATTLERESUME_CONFIRM_MESSAGE_CONSUME_AP_ITEM"*/);
    sub_1C713B0(&StringLiteral_2676/*"BATTLERESUME_CONFIRM_CANCEL"*/);
    sub_1C713B0(&StringLiteral_2677/*"BATTLERESUME_CONFIRM_DECIDE"*/);
    sub_1C713B0(&StringLiteral_2681/*"BATTLERESUME_CONFIRM_MESSAGE_CONSUME_AP_QP"*/);
    sub_1C713B0(&StringLiteral_2687/*"BATTLERESUME_CONFIRM_MESSAGE_TEMPORARY_TITLE"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    sub_1C713B0(&StringLiteral_2678/*"BATTLERESUME_CONFIRM_MESSAGE"*/);
    this = (TitleRootComponent_o *)sub_1C713B0(&StringLiteral_2682/*"BATTLERESUME_CONFIRM_MESSAGE_CONSUME_ITEM"*/);
    byte_4CC98A4 = 1;
  }
  if ( TitleRootComponent__IsTutorialBattleNow(this, method) )
  {
    TitleRootComponent__OnConfirmBattleResume(v2, 1, v3);
    return 1;
  }
  resumeWarBoardData = v2->fields.resumeWarBoardData;
  if ( resumeWarBoardData && resumeWarBoardData->fields.progressType == 2 )
  {
    v5 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C715FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v5,
      (Il2CppObject *)v2,
      Method_TitleRootComponent_OnClickConfirmWarBoardBattleResumDialog__,
      0);
    TitleRootComponent__ConfirmWarBoardResume(v6, v5, v7);
    return 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_2678/*"BATTLERESUME_CONFIRM_MESSAGE"*/, 0);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_2676/*"BATTLERESUME_CONFIRM_CANCEL"*/, 0);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_2690/*"BATTLERESUME_CONFIRM_TITLE"*/, 0);
  if ( !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  SavedQuestId = BattleData__getSavedQuestId(0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_QuestMaster___)) == 0 )
  {
LABEL_88:
    sub_1C71608(Instance, v13);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             SavedQuestId,
             (const MethodInfo_3408E80 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  v15 = TitleRootComponent_TypeInfo;
  if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
    v15 = TitleRootComponent_TypeInfo;
  }
  static_fields = v15->static_fields;
  BATTLERESUME_MESSAGE_POSITION_Y = static_fields->BATTLERESUME_MESSAGE_POSITION_Y;
  BATTLERESUME_MESSAGE_FONT_SIZE = static_fields->BATTLERESUME_MESSAGE_FONT_SIZE;
  if ( !Entity )
    goto LABEL_21;
  HasFlag = QuestEntity__HasFlag((QuestEntity_o *)Entity, 0x40000000, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( HasFlag )
      goto LABEL_19;
LABEL_28:
    v29 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_3793/*"CONSUME_TYPE_AP"*/, 0);
    v30 = (System_String_o *)StringLiteral_2685/*"BATTLERESUME_CONFIRM_MESSAGE_CUSTOM"*/;
    Instance = (DataManager_o *)QuestEntity__GetConsumeType((QuestEntity_o *)Entity, 0);
    switch ( (int)Instance )
    {
      case 1:
        Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
        }
        if ( *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 712LL) <= 0 )
        {
          v30 = (System_String_o *)StringLiteral_2679/*"BATTLERESUME_CONFIRM_MESSAGE_CONSUME_AP0"*/;
        }
        else
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3793/*"CONSUME_TYPE_AP"*/, 0);
          v29 = (Il2CppObject *)Instance;
        }
        goto LABEL_77;
      case 2:
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3794/*"CONSUME_TYPE_RP"*/, 0);
        v29 = (Il2CppObject *)Instance;
        goto LABEL_77;
      case 3:
        ItemConsumeEntity = QuestEntity__getItemConsumeEntity((QuestEntity_o *)Entity, 0, 0);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_88;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !ItemConsumeEntity )
          goto LABEL_77;
        v33 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        v29 = (Il2CppObject *)StringLiteral_1/*""*/;
        v30 = (System_String_o *)StringLiteral_2682/*"BATTLERESUME_CONFIRM_MESSAGE_CONSUME_ITEM"*/;
        Instance = (DataManager_o *)QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 0, 0);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          goto LABEL_77;
        v51 = v29;
        v34 = 0;
        while ( 1 )
        {
          itemIds = ItemConsumeEntity->fields.itemIds;
          if ( !itemIds )
            goto LABEL_88;
          if ( v34 >= LODWORD(itemIds->max_length) )
            goto LABEL_89;
          if ( !v33 )
            goto LABEL_88;
          v36 = DataMasterBase_object__object__int___GetEntity(
                  v33,
                  itemIds->m_Items[v34],
                  (const MethodInfo_3408E80 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          if ( v36 && LODWORD(v36[3].klass) == 1 )
          {
            if ( v34 || QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 1, 0) )
              v37 = &StringLiteral_2683/*"BATTLERESUME_CONFIRM_MESSAGE_CONSUME_ITEM_QP"*/;
            else
              v37 = &StringLiteral_2684/*"BATTLERESUME_CONFIRM_MESSAGE_CONSUME_QP"*/;
            v30 = (System_String_o *)*v37;
          }
          Instance = (DataManager_o *)QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, ++v34, 0);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            goto LABEL_75;
        }
      case 4:
        v29 = (Il2CppObject *)StringLiteral_1/*""*/;
        v38 = QuestEntity__getItemConsumeEntity((QuestEntity_o *)Entity, 0, 0);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_88;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !v38 )
          goto LABEL_77;
        v51 = v29;
        v39 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        v40 = TerminalPramsManager_TypeInfo;
        v41 = StringLiteral_2680/*"BATTLERESUME_CONFIRM_MESSAGE_CONSUME_AP_ITEM"*/;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v40 = TerminalPramsManager_TypeInfo;
        }
        if ( v40->static_fields->lastPlayQuestConsumeAp <= 0 )
          v30 = (System_String_o *)StringLiteral_2682/*"BATTLERESUME_CONFIRM_MESSAGE_CONSUME_ITEM"*/;
        else
          v30 = (System_String_o *)v41;
        Instance = (DataManager_o *)QuestConsumeItemEntity__IsAvailableAt(v38, 0, 0);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          goto LABEL_75;
        v42 = 0;
        break;
      default:
        goto LABEL_77;
    }
    do
    {
      v43 = v38->fields.itemIds;
      if ( !v43 )
        goto LABEL_88;
      if ( v42 >= LODWORD(v43->max_length) )
LABEL_89:
        sub_1C71610(Instance);
      if ( !v39 )
        goto LABEL_88;
      v44 = DataMasterBase_object__object__int___GetEntity(
              v39,
              v43->m_Items[v42],
              (const MethodInfo_3408E80 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( v44 && LODWORD(v44[3].klass) == 1 )
      {
        v45 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v45 = TerminalPramsManager_TypeInfo;
        }
        if ( v45->static_fields->lastPlayQuestConsumeAp <= 0 )
          v46 = &StringLiteral_2684/*"BATTLERESUME_CONFIRM_MESSAGE_CONSUME_QP"*/;
        else
          v46 = &StringLiteral_2681/*"BATTLERESUME_CONFIRM_MESSAGE_CONSUME_AP_QP"*/;
        v30 = (System_String_o *)*v46;
      }
      Instance = (DataManager_o *)QuestConsumeItemEntity__IsAvailableAt(v38, ++v42, 0);
    }
    while ( ((unsigned __int8)Instance & 1) != 0 );
LABEL_75:
    v29 = v51;
LABEL_77:
    if ( TitleRootComponent__IsInterruptibleQuest((TitleRootComponent_o *)Instance, SavedQuestId, v31) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v8 = LocalizationManager__Get((System_String_o *)StringLiteral_2688/*"BATTLERESUME_CONFIRM_MESSAGE_TEMPORARY_WITHDRAWAL"*/, 0);
      v9 = LocalizationManager__Get((System_String_o *)StringLiteral_2689/*"BATTLERESUME_CONFIRM_TEMPORARY_WITHDRAWAL"*/, 0);
      v10 = LocalizationManager__Get((System_String_o *)StringLiteral_2687/*"BATTLERESUME_CONFIRM_MESSAGE_TEMPORARY_TITLE"*/, 0);
      BATTLERESUME_MESSAGE_POSITION_Y = 0.0;
      isCancelTxtTwoLine = 1;
      BATTLERESUME_MESSAGE_FONT_SIZE = 23;
      v22 = 280;
      goto LABEL_23;
    }
    v47 = System_String__op_Equality(v30, (System_String_o *)StringLiteral_2679/*"BATTLERESUME_CONFIRM_MESSAGE_CONSUME_AP0"*/, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v48 = LocalizationManager__Get(v30, 0);
    v8 = v48;
    if ( v47 )
    {
      v49 = TitleRootComponent_TypeInfo;
      if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
        v49 = TitleRootComponent_TypeInfo;
      }
      isCancelTxtTwoLine = 0;
      BATTLERESUME_MESSAGE_POSITION_Y = v49->static_fields->BATTLERESUME_NO_CONSUME_AP_MESSAGE_POSITION_Y;
      goto LABEL_22;
    }
    v20 = System_String__Format(v48, v29, 0);
    goto LABEL_20;
  }
  if ( !HasFlag )
    goto LABEL_28;
LABEL_19:
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_2686/*"BATTLERESUME_CONFIRM_MESSAGE_NO_CONSUME"*/, 0);
LABEL_20:
  v8 = v20;
LABEL_21:
  isCancelTxtTwoLine = 0;
LABEL_22:
  v22 = 240;
LABEL_23:
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_2677/*"BATTLERESUME_CONFIRM_DECIDE"*/, 0);
  v24 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C715FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v24,
    (Il2CppObject *)v2,
    Method_TitleRootComponent_OnConfirmBattleResume__,
    0);
  v27 = TitleRootComponent__WaitPurchase(
          v25,
          v10,
          v8,
          v23,
          v9,
          v24,
          BATTLERESUME_MESSAGE_FONT_SIZE,
          BATTLERESUME_MESSAGE_POSITION_Y,
          v26,
          v22,
          isCancelTxtTwoLine,
          0,
          v50);
  UnityEngine_MonoBehaviour__StartCoroutine_71709800((UnityEngine_MonoBehaviour_o *)v2, v27, 0);
  return 1;
}


void TitleRootComponent__ConfirmWarBoardResume(
        TitleRootComponent_o *this,
        CommonConfirmDialog_ClickDelegate_o *onClickEvent,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_String_o *v5; // x21
  System_String_o *v6; // x22
  System_String_o *v7; // x23
  System_String_o *v8; // x0
  __int64 v9; // x1

  if ( (byte_4CC98A8 & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&StringLiteral_15419/*"WARBOARD_RESUME_CONFIRM_DIALOG_YES"*/);
    sub_1C713B0(&StringLiteral_15416/*"WARBOARD_RESUME_CONFIRM_DIALOG_MESSAGE"*/);
    sub_1C713B0(&StringLiteral_15417/*"WARBOARD_RESUME_CONFIRM_DIALOG_NO"*/);
    sub_1C713B0(&StringLiteral_15418/*"WARBOARD_RESUME_CONFIRM_DIALOG_TITLE"*/);
    byte_4CC98A8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_15418/*"WARBOARD_RESUME_CONFIRM_DIALOG_TITLE"*/, 0);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_15416/*"WARBOARD_RESUME_CONFIRM_DIALOG_MESSAGE"*/, 0);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_15419/*"WARBOARD_RESUME_CONFIRM_DIALOG_YES"*/, 0);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_15417/*"WARBOARD_RESUME_CONFIRM_DIALOG_NO"*/, 0);
  if ( !Instance )
    sub_1C71608(v8, v9);
  CommonUI__OpenConfirmDecideDlg(
    (CommonUI_o *)Instance,
    v5,
    v6,
    v7,
    v8,
    onClickEvent,
    0,
    0.0,
    15.0,
    0,
    0,
    0,
    240,
    0,
    1,
    0,
    0,
    0);
}


UnityEngine_GameObject_o *TitleRootComponent__CreateCriMoviePlayerObject(
        TitleRootComponent_o *this,
        System_String_o *moviePlayerName,
        UnityEngine_Component_o *parent,
        const MethodInfo *method)
{
  Il2CppObject *object; // x20
  Il2CppObject *v7; // x20

  if ( (byte_4CC9876 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_Resources_Load_GameObject___);
    byte_4CC9876 = 1;
  }
  object = UnityEngine_Resources__Load_object_(
             moviePlayerName,
             (const MethodInfo_31E7F68 *)Method_UnityEngine_Resources_Load_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__Instantiate_object_(
         object,
         (const MethodInfo_31D7CB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)parent, 0, 0) )
    GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v7, parent, 0);
  return (UnityEngine_GameObject_o *)v7;
}


void TitleRootComponent__DispDeletePassword(TitleRootComponent_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  UserDeleteReservationEntity_o *v6; // x21
  CommonUI_o *v7; // x20
  System_String_o *password; // x21
  System_Action_o *v9; // x22

  if ( (byte_4CC98B8 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserDeleteReservationMaster___);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&Method_TitleRootComponent__DispDeletePassword_b__164_0__);
    byte_4CC98B8 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserDeleteReservationMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CC112A )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC112A = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object
    || (v6 = UserDeleteReservationMaster__GetEntity(
               (UserDeleteReservationMaster_o *)MasterData_object,
               *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
               0),
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        !v6)
    || (v7 = (CommonUI_o *)Instance,
        password = v6->fields.password,
        v9 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo),
        System_Action___ctor(v9, (Il2CppObject *)this, Method_TitleRootComponent__DispDeletePassword_b__164_0__, 0),
        !v7) )
  {
LABEL_14:
    sub_1C71608(Instance, v4);
  }
  CommonUI__OpenAccountDeletePasswordDialog(v7, 1, password, v9, 0);
}


void TitleRootComponent__EndPlayOpeningMovie(TitleRootComponent_o *this, const MethodInfo *method)
{
  TitleRootComponent_c *v3; // x0
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4CC9879 & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&TitleRootComponent_TypeInfo);
    sub_1C713B0(&StringLiteral_5445/*"END_OPENING_MOVIE"*/);
    byte_4CC9879 = 1;
  }
  v3 = TitleRootComponent_TypeInfo;
  if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
    v3 = TitleRootComponent_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v3->static_fields->SAVE_KEY_PLAYING_MOVIE, 0, 0);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__maskFadeout(Instance, 1, 0.0, 0, 0), (Instance = (CommonUI_o *)this->fields.myFSM) == 0) )
    sub_1C71608(Instance, v5);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5445/*"END_OPENING_MOVIE"*/, 0);
}


void TitleRootComponent__ExecTitleFade(TitleRootComponent_o *this, const MethodInfo *method)
{
  System_String_o *bgmName; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *titleRootObjet; // x0
  UnityEngine_GameObject_o *v6; // x20
  const MethodInfo *v7; // x1

  if ( (byte_4CC987B & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_1C713B0(&SoundManager_TypeInfo);
    sub_1C713B0(&StringLiteral_23783/*"startTitleFade"*/);
    byte_4CC987B = 1;
  }
  bgmName = this->fields.bgmName;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(bgmName, 0);
  titleRootObjet = this->fields.titleRootObjet;
  if ( !titleRootObjet
    || (titleRootObjet = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                       titleRootObjet,
                                                       (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___)) == 0 )
  {
    sub_1C71608(titleRootObjet, v4);
  }
  v6 = titleRootObjet;
  if ( ((float (__fastcall *)(UnityEngine_GameObject_o *, _QWORD))titleRootObjet->klass[1]._1.this_arg.data)(
         titleRootObjet,
         *(_QWORD *)&titleRootObjet->klass[1]._1.this_arg.bits) >= 1.0 )
  {
    TitleRootComponent__endTitleFade(this, v7);
  }
  else
  {
    ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))v6->klass[1]._1.element_class)(
      v6,
      v6->klass[1]._1.castClass,
      1.0);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_23783/*"startTitleFade"*/,
      0.1,
      0);
  }
}


CRIMoviePlayer_o *TitleRootComponent__GetCriMoviePlayer(
        TitleRootComponent_o *this,
        System_String_o *moviePlayerName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  UnityEngine_GameObject_o *CriMoviePlayerObject; // x0
  __int64 v6; // x1

  if ( (byte_4CC9877 & 1) == 0 )
  {
    this = (TitleRootComponent_o *)sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
    byte_4CC9877 = 1;
  }
  CriMoviePlayerObject = TitleRootComponent__CreateCriMoviePlayerObject(this, moviePlayerName, 0, v3);
  if ( !CriMoviePlayerObject )
    sub_1C71608(0, v6);
  return (CRIMoviePlayer_o *)UnityEngine_GameObject__GetComponent_object_(
                               CriMoviePlayerObject,
                               (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
}


System_Collections_IEnumerator_o *TitleRootComponent__GetNoticeUpdate(
        TitleRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x19

  if ( (byte_4CC987C & 1) == 0 )
  {
    sub_1C713B0(&TitleRootComponent__GetNoticeUpdate_d__98_TypeInfo);
    byte_4CC987C = 1;
  }
  v2 = sub_1C715FC(TitleRootComponent__GetNoticeUpdate_d__98_TypeInfo);
  System_Object___ctor((Il2CppObject *)v2, 0);
  *(_DWORD *)(v2 + 16) = 0;
  return (System_Collections_IEnumerator_o *)v2;
}


int32_t TitleRootComponent__GetStoryProgress(const MethodInfo *method)
{
  System_Int32_array *ClearWarIdList; // x0
  __int64 v2; // x1
  System_Int32_array *v3; // x21
  int32_t Value; // w19
  int32_t v5; // w20
  int32_t v6; // w0
  TitleRootComponent_c *v7; // x8
  int32_t v8; // w22
  System_String_o *PART2_CHAPTER6_EPILOGUE_BG_MOVIE_NAME; // x23
  System_String_o *MoviePath; // x23
  AssetData_o *Asset; // x23
  __int64 v12; // x0
  int max_length; // w8
  __int64 v14; // x9
  int32_t v15; // w11

  if ( (byte_4CC9874 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Array_Reverse_int___);
    sub_1C713B0(&AssetManager_TypeInfo);
    sub_1C713B0(&CommonUI_TypeInfo);
    sub_1C713B0(&ServantCommentManager_TypeInfo);
    sub_1C713B0(&TitleRootComponent_TypeInfo);
    sub_1C713B0(&StringLiteral_6395/*"FES_WAR_ID"*/);
    sub_1C713B0(&StringLiteral_3329/*"CHAPTER2_EPILOGUE_WAR_ID"*/);
    sub_1C713B0(&StringLiteral_3330/*"CHAPTER2_PROLOGUE_WAR_ID"*/);
    byte_4CC9874 = 1;
  }
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  ClearWarIdList = ServantCommentManager__GetClearWarIdList(0);
  if ( !ClearWarIdList )
    sub_1C71608(0, v2);
  v3 = ClearWarIdList;
  if ( !ClearWarIdList->max_length )
    return 0;
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_3329/*"CHAPTER2_EPILOGUE_WAR_ID"*/, 0);
  v5 = ConstantMaster__getValue((System_String_o *)StringLiteral_3330/*"CHAPTER2_PROLOGUE_WAR_ID"*/, 0);
  v6 = ConstantMaster__getValue((System_String_o *)StringLiteral_6395/*"FES_WAR_ID"*/, 0);
  v7 = TitleRootComponent_TypeInfo;
  v8 = v6;
  if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
    v7 = TitleRootComponent_TypeInfo;
  }
  PART2_CHAPTER6_EPILOGUE_BG_MOVIE_NAME = v7->static_fields->PART2_CHAPTER6_EPILOGUE_BG_MOVIE_NAME;
  if ( !CommonUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
  MoviePath = CommonUI__CreateMoviePath(PART2_CHAPTER6_EPILOGUE_BG_MOVIE_NAME, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  Asset = AssetManager__getAsset(0, MoviePath, 0);
  System_Array__Reverse_int_(v3, (const MethodInfo_310B4D0 *)Method_System_Array_Reverse_int___);
  max_length = v3->max_length;
  if ( max_length < 1 )
    return 0;
  v14 = 0;
  while ( 1 )
  {
    if ( (unsigned int)v14 >= max_length )
      sub_1C71610(v12);
    v15 = v3->m_Items[v14];
    if ( Asset && v15 == Value )
      return 3;
    if ( v15 == v5 )
      return 2;
    if ( v15 == v8 )
      break;
    if ( (int)++v14 >= max_length )
      return 0;
  }
  return 1;
}


BattleWaveInfoData_array *TitleRootComponent__GetUserInterruptionBattleWaveInfoDataArray(
        TitleRootComponent_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v6; // x21
  __int64 v7; // x1
  Il2CppObject *Master_object; // x22
  System_Collections_Generic_IEnumerable_T__o *v9; // x0
  UserInterruptionQuestEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CC98BC & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_UserInterruptionQuestMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleWaveInfoData__AddRange__);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleWaveInfoData__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleWaveInfoData___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_BattleWaveInfoData__TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC98BC = 1;
  }
  entity = 0;
  v6 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_BattleWaveInfoData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_BattleWaveInfoData___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_UserInterruptionQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CC112A )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC112A = 1;
  }
  v9 = (System_Collections_Generic_IEnumerable_T__o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v9 = (System_Collections_Generic_IEnumerable_T__o *)NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_18;
  v9 = (System_Collections_Generic_IEnumerable_T__o *)UserInterruptionQuestMaster__TryGetEntity(
                                                        (UserInterruptionQuestMaster_o *)Master_object,
                                                        &entity,
                                                        *((_QWORD *)v9[11].monitor + 8),
                                                        questId,
                                                        questPhase,
                                                        0);
  if ( ((unsigned __int8)v9 & 1) == 0 )
  {
    if ( v6 )
      return (BattleWaveInfoData_array *)System_Collections_Generic_List_object___ToArray(
                                           v6,
                                           (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_BattleWaveInfoData__ToArray__);
LABEL_18:
    sub_1C71608(v9, v7);
  }
  v9 = (System_Collections_Generic_IEnumerable_T__o *)entity;
  if ( !entity )
    goto LABEL_18;
  v9 = (System_Collections_Generic_IEnumerable_T__o *)UserInterruptionQuestEntity__ConvertToBattleWaveInfoDataArray(
                                                        entity,
                                                        0);
  if ( !v6 )
    goto LABEL_18;
  System_Collections_Generic_List_object___AddRange(
    v6,
    v9,
    (const MethodInfo_3810924 *)Method_System_Collections_Generic_List_BattleWaveInfoData__AddRange__);
  return (BattleWaveInfoData_array *)System_Collections_Generic_List_object___ToArray(
                                       v6,
                                       (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_BattleWaveInfoData__ToArray__);
}


void TitleRootComponent__HideAccountLinkageTakeOverPanel(TitleRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v4; // x8
  CommonUI_o *v5; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4CC98B5 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&AvalonSceneManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_TitleRootComponent__HideAccountLinkageTakeOverPanel_b__161_0__);
    byte_4CC98B5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  v7 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(
    v7,
    (Il2CppObject *)this,
    Method_TitleRootComponent__HideAccountLinkageTakeOverPanel_b__161_0__,
    0);
  if ( !v5 )
    sub_1C71608(v8, v9);
  CommonUI__maskFadeout(v5, 1, DEFAULT_FADE_TIME, v7, 0);
}


void TitleRootComponent__HideSelectTakeOverTypePanel(TitleRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v4; // x8
  CommonUI_o *v5; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v7; // x21
  PlayMakerFSM_o *myFSM; // x0
  __int64 v9; // x1

  if ( (byte_4CC98B3 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&AvalonSceneManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_TitleRootComponent__HideSelectTakeOverTypePanel_b__157_0__);
    sub_1C713B0(&StringLiteral_3277/*"CANCEL_SELECT_TAKEOVER_TYPE"*/);
    byte_4CC98B3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  v7 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_TitleRootComponent__HideSelectTakeOverTypePanel_b__157_0__, 0);
  if ( !v5 || (CommonUI__maskFadeout(v5, 1, DEFAULT_FADE_TIME, v7, 0), (myFSM = this->fields.myFSM) == 0) )
    sub_1C71608(myFSM, v9);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_3277/*"CANCEL_SELECT_TAKEOVER_TYPE"*/, 0);
}


bool TitleRootComponent__IsInterruptibleQuest(TitleRootComponent_o *this, int32_t questId, const MethodInfo *method)
{
  int32_t SavedQuestPhase; // w20
  QuestPhaseMaster_o *Master_object; // x0
  __int64 v6; // x1
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CC98BB & 1) == 0 )
  {
    sub_1C713B0(&BattleData_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    byte_4CC98BB = 1;
  }
  entity = 0;
  if ( !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  SavedQuestPhase = BattleData__getSavedQuestPhase(0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_13;
  if ( !QuestPhaseMaster__TryGetEntity(Master_object, &entity, questId, SavedQuestPhase, 0) )
    return 0;
  Master_object = (QuestPhaseMaster_o *)entity;
  if ( !entity )
LABEL_13:
    sub_1C71608(Master_object, v6);
  return QuestPhaseEntity__IsInterruptionQuest(entity, 0);
}


bool TitleRootComponent__IsTutorialBattleNow(TitleRootComponent_o *this, const MethodInfo *method)
{
  NetworkManager_c *v2; // x0
  int64_t userIdNumber; // x19
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *MasterData_object; // x20
  UserQuestEntity_o *Entity; // x0
  Il2CppObject *v8; // x20
  UserQuestEntity_o *v9; // x0
  Il2CppObject *v10; // x20
  UserQuestEntity_o *v11; // x0

  if ( (byte_4CC98A3 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&TutorialFlag_TypeInfo);
    sub_1C713B0(&StringLiteral_13615/*"TUTORIAL_QUEST_ID1"*/);
    sub_1C713B0(&StringLiteral_13616/*"TUTORIAL_QUEST_ID2"*/);
    sub_1C713B0(&StringLiteral_13617/*"TUTORIAL_QUEST_ID3"*/);
    byte_4CC98A3 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CC112A )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC112A = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  userIdNumber = v2->static_fields->userIdNumber;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserQuestMaster___);
  Instance = (Il2CppObject *)ConstantMaster__getValue((System_String_o *)StringLiteral_13615/*"TUTORIAL_QUEST_ID1"*/, 0);
  if ( !MasterData_object )
    goto LABEL_25;
  Entity = UserQuestMaster__GetEntity((UserQuestMaster_o *)MasterData_object, userIdNumber, (int32_t)Instance, 0);
  if ( Entity && !UserQuestEntity__getClearNum(Entity, 0) )
    return 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  v8 = DataManager__GetMasterData_object_(
         (DataManager_o *)Instance,
         (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserQuestMaster___);
  Instance = (Il2CppObject *)ConstantMaster__getValue((System_String_o *)StringLiteral_13616/*"TUTORIAL_QUEST_ID2"*/, 0);
  if ( !v8 )
    goto LABEL_25;
  v9 = UserQuestMaster__GetEntity((UserQuestMaster_o *)v8, userIdNumber, (int32_t)Instance, 0);
  if ( v9 && !UserQuestEntity__getClearNum(v9, 0) )
    return 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (v10 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserQuestMaster___),
        Instance = (Il2CppObject *)ConstantMaster__getValue((System_String_o *)StringLiteral_13617/*"TUTORIAL_QUEST_ID3"*/, 0),
        !v10) )
  {
LABEL_25:
    sub_1C71608(Instance, v5);
  }
  v11 = UserQuestMaster__GetEntity((UserQuestMaster_o *)v10, userIdNumber, (int32_t)Instance, 0);
  if ( v11 && !UserQuestEntity__getClearNum(v11, 0) )
    return 1;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return !TutorialFlag__Get_40699620(102, 0);
}


void TitleRootComponent__OnClickConfirmWarBoardBattleResumDialog(
        TitleRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  long double v8; // q0
  struct WarBoardDataEntity_o *resumeWarBoardData; // x8
  int64_t startedAt; // x20
  __int64 v11; // x0
  __int64 v12; // x0

  if ( (byte_4CC98A9 & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__getInstance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C713B0(&StringLiteral_3444/*"CLICK_DECIDE"*/);
    byte_4CC98A9 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  CommonUI__CloseConfirmDialog(Instance, 0);
  if ( isDecide )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    CommonUI__SetLoadMode(Instance, 2, 0);
    Instance = (CommonUI_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
    resumeWarBoardData = this->fields.resumeWarBoardData;
    if ( resumeWarBoardData )
    {
      startedAt = resumeWarBoardData->fields.startedAt;
      if ( !byte_4CC4F2A )
      {
        sub_1C713B0(&SkillLvMaster_TypeInfo);
        byte_4CC4F2A = 1;
      }
      SkillLvMaster_TypeInfo->static_fields->propertyOverwriteBaseTime = startedAt;
      v11 = *((_QWORD *)Method_SingletonMonoBehaviour_AvalonSceneManager__getInstance__ + 4);
      if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
        v11 = sub_1C47444(v8);
      v12 = *(_QWORD *)(*(_QWORD *)(v11 + 192) + 16LL);
      if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
        v12 = sub_1C47444(v8);
      Instance = **(CommonUI_o ***)(v12 + 184);
      if ( Instance )
      {
        AvalonSceneManager__transitionSceneRefresh(
          (AvalonSceneManager_o *)Instance,
          80,
          0,
          (Il2CppObject *)this->fields.resumeWarBoardData,
          0,
          0);
        return;
      }
LABEL_19:
      sub_1C71608(Instance, v6);
    }
    Instance = (CommonUI_o *)this->fields.myFSM;
    if ( !Instance )
      goto LABEL_19;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3444/*"CLICK_DECIDE"*/, 0);
  }
  else
  {
    TitleRootComponent__RetireWarBoard(this, v7);
  }
}


void TitleRootComponent__OnClickConfirmWarBoardResumDialog(
        TitleRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  long double v8; // q0
  struct WarBoardDataEntity_o *resumeWarBoardData; // x8
  int64_t startedAt; // x20
  __int64 v11; // x0
  __int64 v12; // x0

  if ( (byte_4CC98AA & 1) == 0 )
  {
    sub_1C713B0(&BattleData_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__getInstance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CC98AA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0);
  if ( isDecide )
  {
    if ( !BattleData_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
    Instance = (Il2CppObject *)BattleData__deleteSaveData(0);
    resumeWarBoardData = this->fields.resumeWarBoardData;
    if ( resumeWarBoardData )
    {
      startedAt = resumeWarBoardData->fields.startedAt;
      if ( !byte_4CC4F2A )
      {
        sub_1C713B0(&SkillLvMaster_TypeInfo);
        byte_4CC4F2A = 1;
      }
      SkillLvMaster_TypeInfo->static_fields->propertyOverwriteBaseTime = startedAt;
      v11 = *((_QWORD *)Method_SingletonMonoBehaviour_AvalonSceneManager__getInstance__ + 4);
      if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
        v11 = sub_1C47444(v8);
      v12 = *(_QWORD *)(*(_QWORD *)(v11 + 192) + 16LL);
      if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
        v12 = sub_1C47444(v8);
      Instance = **(Il2CppObject ***)(v12 + 184);
      if ( Instance )
      {
        AvalonSceneManager__transitionSceneRefresh(
          (AvalonSceneManager_o *)Instance,
          80,
          2,
          (Il2CppObject *)this->fields.resumeWarBoardData,
          0,
          0);
        return;
      }
    }
LABEL_17:
    sub_1C71608(Instance, v6);
  }
  TitleRootComponent__RetireWarBoard(this, v7);
}


void TitleRootComponent__OnClickSwitchingAllocMem(TitleRootComponent_o *this, const MethodInfo *method)
{
  ;
}


void TitleRootComponent__OnClickSwitchingAssetLoad(TitleRootComponent_o *this, const MethodInfo *method)
{
  ;
}


void TitleRootComponent__OnClickSwitchingAssetSlowLoad(TitleRootComponent_o *this, const MethodInfo *method)
{
  ;
}


void TitleRootComponent__OnClickSwitchingAssetsInfo(TitleRootComponent_o *this, const MethodInfo *method)
{
  ;
}


void TitleRootComponent__OnCompleteResumeCancel(
        TitleRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4CC98A7 & 1) == 0 )
  {
    sub_1C713B0(&BattleData_TypeInfo);
    sub_1C713B0(&StringLiteral_3437/*"CLICK_CANCEL"*/);
    byte_4CC98A7 = 1;
  }
  if ( !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  BattleData__DeleteBattleResumeData(0);
  BattleData__deleteSaveData(0);
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C71608(0, v4);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_3437/*"CLICK_CANCEL"*/, 0);
}


void TitleRootComponent__OnConfirmBattleContinueResume(
        TitleRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x1

  if ( (byte_4CC98AE & 1) == 0 )
  {
    sub_1C713B0(&BattleData_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&StringLiteral_6975/*"GO_TERMINAL"*/);
    byte_4CC98AE = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog(Instance, 0);
  if ( isDecide )
  {
    TitleRootComponent__ReleaseTitleAssets(this, v7);
    if ( !BattleData_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
    BattleData__deleteSaveData(0);
    Instance = (CommonUI_o *)this->fields.myFSM;
    if ( Instance )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_6975/*"GO_TERMINAL"*/, 0);
      return;
    }
LABEL_10:
    sub_1C71608(Instance, v6);
  }
  TitleRootComponent__battleContinueRequest(this, v7);
}


// positive sp value has been detected, the output may be wrong!
void TitleRootComponent__OnConfirmBattleResume(TitleRootComponent_o *this, bool isDecide, const MethodInfo *method)
{
  __int64 v5; // x19
  CommonUI_o *Instance; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  System_String_o *Value; // x23
  BattleData_SaveData_o *BattleSaveData; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  const MethodInfo *v28; // x1
  int32_t SavedQuestPhase; // w21
  BalanceConfig_c *v30; // x0
  float BgmFadeOutTimeBeforeBattle; // s8

  if ( (byte_4CC98A6 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&BattleData_TypeInfo);
    sub_1C713B0(&CatAndMouseGame_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C713B0(&SoundManager_TypeInfo);
    sub_1C713B0(&TitleRootComponent___c__DisplayClass144_0_TypeInfo);
    sub_1C713B0(&StringLiteral_3444/*"CLICK_DECIDE"*/);
    sub_1C713B0(&StringLiteral_15563/*"WINGNAME"*/);
    byte_4CC98A6 = 1;
  }
  v5 = sub_1C715FC(TitleRootComponent___c__DisplayClass144_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_30;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 32) = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 32), 0, v14, v15, v16, v17, v18, v19);
  if ( !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  *(_DWORD *)(v5 + 24) = BattleData__getSavedQuestId(0);
  Value = ConstantStrMaster__getValue((System_String_o *)StringLiteral_15563/*"WINGNAME"*/, 0);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  CatAndMouseGame__SixHomeBuilding(Value, 0);
  if ( !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  BattleSaveData = BattleData__GetBattleSaveData(0);
  *(_QWORD *)(v5 + 32) = BattleSaveData;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)BattleSaveData, v22, v23, v24, v25, v26, v27);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  CommonUI__CloseConfirmDialog(Instance, 0);
  if ( isDecide )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetChangeOtherConnectMarkFromPlayerPrefs(Instance, 0);
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__SetLoadMode(Instance, 2, 0);
        if ( !BattleData_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
        SavedQuestPhase = BattleData__getSavedQuestPhase(0);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Instance = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
        if ( Instance )
        {
          Instance = (CommonUI_o *)QuestPhaseMaster__GetEntity(
                                     (QuestPhaseMaster_o *)Instance,
                                     *(_DWORD *)(v5 + 24),
                                     SavedQuestPhase,
                                     0);
          if ( Instance )
          {
            if ( QuestPhaseEntity__IsFadeOutMainBgmBeforeBattle((QuestPhaseEntity_o *)Instance, 0) )
            {
              v30 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v30 = BalanceConfig_TypeInfo;
              }
              BgmFadeOutTimeBeforeBattle = v30->static_fields->BgmFadeOutTimeBeforeBattle;
              if ( !SoundManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
              SoundManager__fadeoutBgm(BgmFadeOutTimeBeforeBattle, 0);
            }
            Instance = (CommonUI_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
            if ( Instance )
            {
              MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
              Instance = (CommonUI_o *)this->fields.myFSM;
              if ( Instance )
              {
                PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3444/*"CLICK_DECIDE"*/, 0);
                return;
              }
            }
          }
        }
      }
    }
LABEL_30:
    sub_1C71608(Instance, v7);
  }
  TitleRootComponent___c__DisplayClass144_0___OnConfirmBattleResume_g__CancelBattleAndGoTerminal_0(
    (TitleRootComponent___c__DisplayClass144_0_o *)v5,
    v28);
}


void TitleRootComponent__OnDestroy(TitleRootComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7

  this->fields.epicOfRemnantTitleBg = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.epicOfRemnantTitleBg, 0, v2, v3, v4, v5, v6, v7);
  this->fields.cosmosInTheLostbeltTitleBg = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.cosmosInTheLostbeltTitleBg, 0, v9, v10, v11, v12, v13, v14);
  this->fields.cosmosInTheLostbeltEffectPrefab = 0;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.cosmosInTheLostbeltEffectPrefab,
    0,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
}


void TitleRootComponent__OnEnable(TitleRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v4; // x0
  UnityEngine_Transform_o *v5; // x0

  if ( (byte_4CC9871 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_14730/*"UI Root/Camera/TakeOverPanel/BtnObj/CancelBtn"*/);
    sub_1C713B0(&StringLiteral_14729/*"UI Root/Camera/SelectTakeOverTypePanel/BtnObj/CloseBtn"*/);
    sub_1C713B0(&StringLiteral_14728/*"UI Root/Camera/AccountLinkageTakeOverPanel/BtnObj/CancelBtn"*/);
    byte_4CC9871 = 1;
  }
  AndroidBackKeyManager__AddBackBtn(this->fields.titleRootObjet, 0);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackKeyTarget_45261920(transform, (System_String_o *)StringLiteral_14729/*"UI Root/Camera/SelectTakeOverTypePanel/BtnObj/CloseBtn"*/, 0);
  v4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackKeyTarget_45261920(v4, (System_String_o *)StringLiteral_14730/*"UI Root/Camera/TakeOverPanel/BtnObj/CancelBtn"*/, 0);
  v5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackKeyTarget_45261920(v5, (System_String_o *)StringLiteral_14728/*"UI Root/Camera/AccountLinkageTakeOverPanel/BtnObj/CancelBtn"*/, 0);
}


void TitleRootComponent__OnEndDownload(TitleRootComponent_o *this, AssetData_o *data, const MethodInfo *method)
{
  __int64 v5; // x20
  OpeningMovieMaster_o *Master_object; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct OpeningMovieEntity_o *openingMovieEntity; // x8
  struct OpeningMovieEntity_o *v15; // x8
  const MethodInfo *v16; // x2
  TitleRootComponent_o *v17; // x0
  CRIMoviePlayer_o *CriMoviePlayer; // x0
  CRIMoviePlayer_o **v19; // x22
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  struct OpeningMovieEntity_o *v26; // x8
  System_String_o *MoviePath; // x23
  bool v28; // w24
  char v29; // w25
  CRIMoviePlayer_o *v30; // x21
  System_String_o *Path; // x19
  BgmManager_c *v32; // x0
  float masterVolume; // s8
  System_Action_o *v34; // x26

  if ( (byte_4CC9878 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&BgmManager_TypeInfo);
    sub_1C713B0(&CommonUI_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMaster_OpeningMovieMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&OptionManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&TitleRootComponent_TypeInfo);
    sub_1C713B0(&Method_TitleRootComponent___c__DisplayClass86_0__OnEndDownload_b__0__);
    sub_1C713B0(&TitleRootComponent___c__DisplayClass86_0_TypeInfo);
    byte_4CC9878 = 1;
  }
  v5 = sub_1C715FC(TitleRootComponent___c__DisplayClass86_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_38;
  *(_QWORD *)(v5 + 24) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (OpeningMovieMaster_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_OpeningMovieMaster___);
  openingMovieEntity = this->fields.openingMovieEntity;
  if ( !openingMovieEntity )
    goto LABEL_38;
  if ( !Master_object )
    goto LABEL_38;
  OpeningMovieMaster__SavePlayedOpeningMovie(Master_object, openingMovieEntity->fields.movieName, 0);
  Master_object = (OpeningMovieMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Master_object )
    goto LABEL_38;
  if ( CommonUI__maskFadeIsDisp((CommonUI_o *)Master_object, 0) )
  {
    Master_object = (OpeningMovieMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Master_object )
      goto LABEL_38;
    CommonUI__maskFadein((CommonUI_o *)Master_object, 0.0, 0, 0);
  }
  Master_object = (OpeningMovieMaster_o *)TitleRootComponent_TypeInfo;
  if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
  v15 = this->fields.openingMovieEntity;
  if ( !v15 )
    goto LABEL_38;
  UnityEngine_PlayerPrefs__SetInt(TitleRootComponent_TypeInfo->static_fields->SAVE_KEY_PLAYING_MOVIE, v15->fields.id, 0);
  v17 = (TitleRootComponent_o *)CommonUI_TypeInfo;
  if ( !CommonUI_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
    v17 = (TitleRootComponent_o *)CommonUI_TypeInfo;
  }
  CriMoviePlayer = TitleRootComponent__GetCriMoviePlayer(
                     v17,
                     (System_String_o *)v17->fields.takteOverIdLb->fields.mOnRender,
                     v16);
  *(_QWORD *)(v5 + 16) = CriMoviePlayer;
  v19 = (CRIMoviePlayer_o **)(v5 + 16);
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)CriMoviePlayer, v20, v21, v22, v23, v24, v25);
  v26 = this->fields.openingMovieEntity;
  if ( !v26 )
    goto LABEL_38;
  MoviePath = CommonUI__CreateMoviePath(v26->fields.movieName, 0);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__GetTouchSkipOpeningMovie(0) )
    goto LABEL_41;
  Master_object = (OpeningMovieMaster_o *)this->fields.openingMovieEntity;
  if ( !Master_object )
    goto LABEL_38;
  v28 = 1;
  Master_object = (OpeningMovieMaster_o *)OpeningMovieEntity__HasFlag((OpeningMovieEntity_o *)Master_object, 1, 0);
  v29 = 1;
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
LABEL_41:
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    Master_object = (OpeningMovieMaster_o *)OptionManager__GetTouchSkipOpeningMovie(0);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      v28 = 0;
      v29 = 1;
    }
    else
    {
      Master_object = (OpeningMovieMaster_o *)OpeningMovieMaster__IsPlayedOpeningMovie_42716096(
                                                this->fields.openingMovieEntity,
                                                1,
                                                0);
      v29 = (char)Master_object;
      v28 = 0;
    }
  }
  if ( !data )
    goto LABEL_38;
  v30 = *v19;
  Path = AssetData__get_Path(data, 0);
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  if ( !byte_4CC21CB )
  {
    sub_1C713B0(&BgmManager_TypeInfo);
    byte_4CC21CB = 1;
  }
  v32 = BgmManager_TypeInfo;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v32 = BgmManager_TypeInfo;
  }
  masterVolume = v32->static_fields->masterVolume;
  v34 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(
    v34,
    (Il2CppObject *)v5,
    Method_TitleRootComponent___c__DisplayClass86_0__OnEndDownload_b__0__,
    0);
  if ( !v30
    || (CRIMoviePlayer__Initialize(v30, MoviePath, Path, masterVolume, v29 & 1, 0, v34, v28, 0, 0, 0, 1, 0, 0),
        (Master_object = (OpeningMovieMaster_o *)*v19) == 0) )
  {
LABEL_38:
    sub_1C71608(Master_object, v7);
  }
  CRIMoviePlayer__MoviePlay((CRIMoviePlayer_o *)Master_object, 1, 1, 1, 0, 0);
}


void TitleRootComponent__OnFailureTakeOver(TitleRootComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4CC9892 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_11086/*"REQUEST_NG"*/);
    byte_4CC9892 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C71608(0, method);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11086/*"REQUEST_NG"*/, 0);
}


void TitleRootComponent__OnFinishedWarBoardRetire(
        TitleRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  TitleRootComponent_o *v3; // x19
  struct WarBoardDataEntity_o *resumeWarBoardData; // x8
  int32_t progressType; // w22
  WarBoardData_c *v6; // x0
  System_String_o *AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY; // x20
  _BOOL4 HasKey; // w20
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  __int64 *v15; // x8

  v3 = this;
  if ( (byte_4CC98AC & 1) == 0 )
  {
    sub_1C713B0(&BattleData_TypeInfo);
    sub_1C713B0(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C713B0(&WarBoardData_TypeInfo);
    sub_1C713B0(&StringLiteral_6975/*"GO_TERMINAL"*/);
    this = (TitleRootComponent_o *)sub_1C713B0(&StringLiteral_3437/*"CLICK_CANCEL"*/);
    byte_4CC98AC = 1;
  }
  resumeWarBoardData = v3->fields.resumeWarBoardData;
  if ( !resumeWarBoardData )
    goto LABEL_16;
  progressType = resumeWarBoardData->fields.progressType;
  v6 = WarBoardData_TypeInfo;
  if ( !WarBoardData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
    v6 = WarBoardData_TypeInfo;
  }
  AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY = v6->static_fields->AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY;
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  HasKey = EncryptedPlayerPrefs__HasKey(AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY, 0);
  if ( !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  BattleData__deleteSaveData(0);
  v3->fields.resumeWarBoardData = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v3->fields.resumeWarBoardData, 0, v9, v10, v11, v12, v13, v14);
  if ( !WarBoardData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
  WarBoardData__DeleteLocalSave(0);
  WarBoardData__DeleteAfterContinueDeviceLocalSave(0);
  this = (TitleRootComponent_o *)v3->fields.myFSM;
  if ( !this )
LABEL_16:
    sub_1C71608(this, result);
  v15 = &StringLiteral_3437/*"CLICK_CANCEL"*/;
  if ( progressType != 2 || HasKey )
    v15 = &StringLiteral_6975/*"GO_TERMINAL"*/;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v15, 0);
}


void TitleRootComponent__OnQuickStartMax(TitleRootComponent_o *this, const MethodInfo *method)
{
  ;
}


void TitleRootComponent__OnQuickStartMin(TitleRootComponent_o *this, const MethodInfo *method)
{
  ;
}


void TitleRootComponent__ReleaseTitleAssets(TitleRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *titleBgEffect; // x19
  __int64 v4; // x1
  GrandQuestFolderBoardItem_o *p_titleBgEffect; // x19
  UnityEngine_GameObject_o *klass; // x0
  int32_t storyProgress; // w8
  UnityEngine_Object_o *bgMoviePlayer; // x19
  Il2CppObject *Component_object; // x20
  UnityEngine_Object_o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  UnityEngine_Object_o *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7

  if ( (byte_4CC98B1 & 1) == 0 )
  {
    sub_1C713B0(&System_GC_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_TitleBgEffectComponent___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC98B1 = 1;
  }
  titleBgEffect = (UnityEngine_Object_o *)this->fields.titleBgEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(titleBgEffect, 0, 0) )
  {
    p_titleBgEffect = (GrandQuestFolderBoardItem_o *)&this->fields.titleBgEffect;
    klass = this->fields.titleBgEffect;
    if ( klass )
    {
      UnityEngine_GameObject__SetActive(klass, 0, 0);
      storyProgress = this->fields.storyProgress;
      switch ( storyProgress )
      {
        case 1:
          klass = (UnityEngine_GameObject_o *)p_titleBgEffect->klass;
          if ( p_titleBgEffect->klass )
          {
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 klass,
                                 (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_TitleBgEffectComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            klass = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                  (UnityEngine_Object_o *)Component_object,
                                                  0,
                                                  0);
            if ( ((unsigned __int8)klass & 1) == 0 )
              return;
            if ( Component_object )
            {
              TitleBgEffectComponent__Release((TitleBgEffectComponent_o *)Component_object, 0);
              v10 = (UnityEngine_Object_o *)p_titleBgEffect->klass;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              UnityEngine_Object__DestroyImmediate_71724796(v10, 0);
              p_titleBgEffect->klass = 0;
              sub_1C71354(p_titleBgEffect, 0, v11, v12, v13, v14, v15, v16);
              if ( !System_GC_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
              System_GC__Collect(0);
              return;
            }
          }
          break;
        case 2:
          v17 = (UnityEngine_Object_o *)p_titleBgEffect->klass;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__DestroyImmediate_71724796(v17, 0);
          p_titleBgEffect->klass = 0;
          sub_1C71354(p_titleBgEffect, 0, v18, v19, v20, v21, v22, v23);
          return;
        case 3:
          bgMoviePlayer = (UnityEngine_Object_o *)this->fields.bgMoviePlayer;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(bgMoviePlayer, 0, 0) )
            return;
          klass = (UnityEngine_GameObject_o *)this->fields.bgMoviePlayer;
          if ( klass )
          {
            CRIMoviePlayer__Dispose((CRIMoviePlayer_o *)klass, 0);
            return;
          }
          break;
        default:
          return;
      }
    }
    sub_1C71608(klass, v4);
  }
}


void TitleRootComponent__RetireWarBoard(TitleRootComponent_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  Il2CppObject *Request_object; // x0
  __int64 v5; // x1
  struct WarBoardDataEntity_o *resumeWarBoardData; // x8

  if ( (byte_4CC98AB & 1) == 0 )
  {
    sub_1C713B0(&Method_NetworkManager_getRequest_WarBoardContinueRequest___);
    sub_1C713B0(&Method_NetworkManager_getRequest_WarBoardFinishRequest___);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C713B0(&Method_TitleRootComponent_OnFinishedWarBoardRetire__);
    byte_4CC98AB = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_1C715FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_TitleRootComponent_OnFinishedWarBoardRetire__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v3,
                     (const MethodInfo_31D69E8 *)Method_NetworkManager_getRequest_WarBoardFinishRequest___);
  resumeWarBoardData = this->fields.resumeWarBoardData;
  if ( !resumeWarBoardData
    || !Request_object
    || (WarBoardFinishRequest__beginRequest(
          (WarBoardFinishRequest_o *)Request_object,
          resumeWarBoardData->fields.stageId,
          3,
          -1,
          -1,
          0),
        (Request_object = NetworkManager__getRequest_object_(
                            0,
                            (const MethodInfo_31D69E8 *)Method_NetworkManager_getRequest_WarBoardContinueRequest___)) == 0) )
  {
    sub_1C71608(Request_object, v5);
  }
  WarBoardContinueRequest__ClearRetryParameter((WarBoardContinueRequest_o *)Request_object, 0);
}


void TitleRootComponent__SelectAccountLinkageTakeOver(TitleRootComponent_o *this, const MethodInfo *method)
{
  AccountLinkageTakeOverComponent_o *accountLinkageTakeOverComponent; // x0

  accountLinkageTakeOverComponent = this->fields.accountLinkageTakeOverComponent;
  if ( !accountLinkageTakeOverComponent )
    sub_1C71608(0, method);
  AccountLinkageTakeOverComponent__LinkageStatusCheck(accountLinkageTakeOverComponent, 0);
}


void TitleRootComponent__SelectContinueNumberTakeOver(TitleRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  AvalonSceneManager_c *v5; // x8
  CommonUI_o *v6; // x20
  void *selectTakeOverTypeObj; // x0
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v9; // x21
  Il2CppObject *v10; // x22
  struct TitleRootComponent___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  if ( (byte_4CC98B4 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&AvalonSceneManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_TitleRootComponent___c__SelectContinueNumberTakeOver_b__158_0__);
    sub_1C713B0(&TitleRootComponent___c_TypeInfo);
    sub_1C713B0(&StringLiteral_11529/*"SELECT_CONTINUE_NUMBER_TAKEOVER"*/);
    byte_4CC98B4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = AvalonSceneManager_TypeInfo;
  v6 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v5 = AvalonSceneManager_TypeInfo;
  }
  selectTakeOverTypeObj = TitleRootComponent___c_TypeInfo;
  DEFAULT_FADE_TIME = v5->static_fields->DEFAULT_FADE_TIME;
  if ( !TitleRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleRootComponent___c_TypeInfo);
    selectTakeOverTypeObj = TitleRootComponent___c_TypeInfo;
  }
  v9 = *(System_Action_o **)(*((_QWORD *)selectTakeOverTypeObj + 23) + 56LL);
  if ( !v9 )
  {
    if ( !*((_DWORD *)selectTakeOverTypeObj + 56) )
    {
      j_il2cpp_runtime_class_init_0(selectTakeOverTypeObj);
      selectTakeOverTypeObj = TitleRootComponent___c_TypeInfo;
    }
    v10 = (Il2CppObject *)**((_QWORD **)selectTakeOverTypeObj + 23);
    v9 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(v9, v10, Method_TitleRootComponent___c__SelectContinueNumberTakeOver_b__158_0__, 0);
    static_fields = TitleRootComponent___c_TypeInfo->static_fields;
    static_fields->__9__158_0 = v9;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__158_0, (int32_t)v9, v12, v13, v14, v15, v16, v17);
  }
  if ( !v6
    || (CommonUI__maskFadeout(v6, 1, DEFAULT_FADE_TIME, v9, 0),
        (selectTakeOverTypeObj = this->fields.selectTakeOverTypeObj) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectTakeOverTypeObj, 0, 0),
        (selectTakeOverTypeObj = this->fields.myFSM) == 0) )
  {
    sub_1C71608(selectTakeOverTypeObj, v4);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)selectTakeOverTypeObj, (System_String_o *)StringLiteral_11529/*"SELECT_CONTINUE_NUMBER_TAKEOVER"*/, 0);
}


void TitleRootComponent__SetReboot(TitleRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v4; // x8
  CommonUI_o *v5; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4CC98BA & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&AvalonSceneManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_TitleRootComponent__SetReboot_b__166_0__);
    byte_4CC98BA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  v7 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_TitleRootComponent__SetReboot_b__166_0__, 0);
  if ( !v5 )
    sub_1C71608(v8, v9);
  CommonUI__maskFadeout(v5, 1, DEFAULT_FADE_TIME, v7, 0);
}


// local variable allocation has failed, the output may be wrong!
void TitleRootComponent__SetTakeOverAndCacheClearEnable(
        TitleRootComponent_o *this,
        bool flag,
        const MethodInfo *method)
{
  struct UIButton_o *takeoverBtn; // x0

  if ( (byte_4CC9897 & 1) == 0 )
  {
    sub_1C713B0(&UserDeleteReservationEntity_TypeInfo);
    byte_4CC9897 = 1;
  }
  takeoverBtn = this->fields.takeoverBtn;
  if ( !takeoverBtn
    || (((void (__fastcall *)(struct UIButton_o *, bool, const MethodInfo *))takeoverBtn->klass->vtable._5_set_isEnabled.methodPtr)(
          takeoverBtn,
          flag,
          takeoverBtn->klass->vtable._5_set_isEnabled.method),
        (takeoverBtn = this->fields.cacheClearBtn) == 0) )
  {
    sub_1C71608(takeoverBtn, flag);
  }
  ((void (__fastcall *)(struct UIButton_o *, bool, const MethodInfo *))takeoverBtn->klass->vtable._5_set_isEnabled.methodPtr)(
    takeoverBtn,
    flag,
    takeoverBtn->klass->vtable._5_set_isEnabled.method);
  if ( !UserDeleteReservationEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserDeleteReservationEntity_TypeInfo);
  UserDeleteReservationEntity__SetUserDeleteFlag(!flag, 0);
}


void TitleRootComponent__SetupFirstLogin(TitleRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4CC98B0 & 1) == 0 )
  {
    sub_1C713B0(&ClassBoardUtility_TypeInfo);
    byte_4CC98B0 = 1;
  }
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
  ClassBoardUtility__FirstSavePlayedExClassReleaseEffect(0);
  TitleRootComponent__SynchronizeGrandEffectSaveData(this, 0, v3);
}


void TitleRootComponent__ShowAccountLinkageTakeOverPanel(TitleRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *selectTakeOverTypeObj; // x0

  selectTakeOverTypeObj = this->fields.selectTakeOverTypeObj;
  if ( !selectTakeOverTypeObj
    || (UnityEngine_GameObject__SetActive(selectTakeOverTypeObj, 0, 0),
        (selectTakeOverTypeObj = this->fields.accountLinkageTakeOverPanel) == 0) )
  {
    sub_1C71608(selectTakeOverTypeObj, method);
  }
  UnityEngine_GameObject__SetActive(selectTakeOverTypeObj, 1, 0);
}


void TitleRootComponent__ShowSelectTakeOverTypePanel(TitleRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v4; // x8
  CommonUI_o *v5; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4CC98B2 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&AvalonSceneManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_TitleRootComponent__ShowSelectTakeOverTypePanel_b__156_0__);
    byte_4CC98B2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  v7 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_TitleRootComponent__ShowSelectTakeOverTypePanel_b__156_0__, 0);
  if ( !v5 )
    sub_1C71608(v8, v9);
  CommonUI__maskFadeout(v5, 1, DEFAULT_FADE_TIME, v7, 0);
}


void TitleRootComponent__StartOpeningMovie(TitleRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  Il2CppClass *klass; // x8
  System_String_o *data; // x20
  System_String_o *MoviePath; // x20
  AssetLoader_LoadEndDataHandler_o *v6; // x21

  v2 = (Il2CppObject *)this;
  if ( (byte_4CC9875 & 1) == 0 )
  {
    sub_1C713B0(&AssetManager_TypeInfo);
    sub_1C713B0(&CommonUI_TypeInfo);
    sub_1C713B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    this = (TitleRootComponent_o *)sub_1C713B0(&Method_TitleRootComponent_OnEndDownload__);
    byte_4CC9875 = 1;
  }
  klass = v2[27].klass;
  if ( !klass )
    sub_1C71608(this, method);
  data = (System_String_o *)klass->_1.byval_arg.data;
  if ( !CommonUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
  MoviePath = CommonUI__CreateMoviePath(data, 0);
  v6 = (AssetLoader_LoadEndDataHandler_o *)sub_1C715FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v6, v2, Method_TitleRootComponent_OnEndDownload__, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage(MoviePath, v6, 1, 0);
}


void TitleRootComponent__SynchronizeGrandBoardSaveData(
        TitleRootComponent_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v4; // x19
  EventMaster_o *Master_object; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  ScrTerminalListTop_c *v13; // x0
  System_String_o *TERMINAL_GRAND_BOARD_EFFECT_NAME; // x21
  int32_t id; // w22
  int32_t BannerEffectEventTutorialFlag; // w23
  _BOOL4 IsTerminalEffectPlayed; // w24
  _BOOL4 IsEventTutorialFlagOn; // w0
  int v19; // w8
  NetworkManager_ResultCallbackFunc_o *v20; // x20
  EventEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CC98BE & 1) == 0 )
  {
    sub_1C713B0(&CondType_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C713B0(&ScrTerminalListTop_TypeInfo);
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    sub_1C713B0(&Method_TitleRootComponent___c__DisplayClass170_0__SynchronizeGrandBoardSaveData_b__0__);
    sub_1C713B0(&TitleRootComponent___c__DisplayClass170_0_TypeInfo);
    byte_4CC98BE = 1;
  }
  entity = 0;
  v4 = sub_1C715FC(TitleRootComponent___c__DisplayClass170_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_24;
  *(_QWORD *)(v4 + 16) = endAction;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v4 + 16), (int32_t)endAction, v7, v8, v9, v10, v11, v12);
  v13 = ScrTerminalListTop_TypeInfo;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v13 = ScrTerminalListTop_TypeInfo;
  }
  TERMINAL_GRAND_BOARD_EFFECT_NAME = v13->static_fields->TERMINAL_GRAND_BOARD_EFFECT_NAME;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventMaster_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_24;
  if ( !EventMaster__TryGetEntityByBannerEffectName(Master_object, &entity, TERMINAL_GRAND_BOARD_EFFECT_NAME, 0) )
    goto LABEL_22;
  Master_object = (EventMaster_o *)entity;
  if ( !entity )
LABEL_24:
    sub_1C71608(Master_object, v6);
  id = entity->fields.id;
  BannerEffectEventTutorialFlag = EventEntity__GetBannerEffectEventTutorialFlag(entity, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  IsTerminalEffectPlayed = TerminalPramsManager__IsTerminalEffectPlayed(TERMINAL_GRAND_BOARD_EFFECT_NAME, 0);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsEventTutorialFlagOn = CondType__IsEventTutorialFlagOn(id, BannerEffectEventTutorialFlag, 0);
  v19 = !IsTerminalEffectPlayed;
  if ( !IsEventTutorialFlagOn && (v19 & 1) == 0 )
  {
    v20 = (NetworkManager_ResultCallbackFunc_o *)sub_1C715FC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v20,
      (Il2CppObject *)v4,
      Method_TitleRootComponent___c__DisplayClass170_0__SynchronizeGrandBoardSaveData_b__0__,
      0);
    EventTutorialMaster__RequestTutorialEventSet(id, BannerEffectEventTutorialFlag, v20, 0);
    return;
  }
  if ( (IsEventTutorialFlagOn & v19 & 1) != 0 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    TerminalPramsManager__PlayedTerminalEffectsSave_SaveData(TERMINAL_GRAND_BOARD_EFFECT_NAME, 0);
  }
LABEL_22:
  ActionExtensions__Call(*(System_Action_o **)(v4 + 16), 0);
}


void TitleRootComponent__SynchronizeGrandEffectSaveData(
        TitleRootComponent_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v5; // x20
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  System_Collections_Generic_List_OpeningMovieEntity__o *GrandOpeningMovieList; // x21
  System_Action_o *v21; // x22
  const MethodInfo *v22; // x4

  if ( (byte_4CC98BD & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMaster_OpeningMovieMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_TitleRootComponent___c__DisplayClass169_0__SynchronizeGrandEffectSaveData_b__0__);
    sub_1C713B0(&TitleRootComponent___c__DisplayClass169_0_TypeInfo);
    byte_4CC98BD = 1;
  }
  v5 = sub_1C715FC(TitleRootComponent___c__DisplayClass169_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = endAction;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)endAction, v14, v15, v16, v17, v18, v19);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_OpeningMovieMaster___);
  if ( !Master_object )
LABEL_8:
    sub_1C71608(Master_object, v7);
  GrandOpeningMovieList = OpeningMovieMaster__GetGrandOpeningMovieList((OpeningMovieMaster_o *)Master_object, 0);
  v21 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(
    v21,
    (Il2CppObject *)v5,
    Method_TitleRootComponent___c__DisplayClass169_0__SynchronizeGrandEffectSaveData_b__0__,
    0);
  TitleRootComponent__SynchronizeGrandMovieSaveData(this, GrandOpeningMovieList, 0, v21, v22);
}


void TitleRootComponent__SynchronizeGrandMovieSaveData(
        TitleRootComponent_o *this,
        System_Collections_Generic_List_OpeningMovieEntity__o *grandPvList,
        int32_t index,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v9; // x26
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  System_Action_o **v24; // x29
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w1
  OpeningMovieEntity_o *v32; // x25
  int32_t GrandPvEventTutorialFlag; // w19
  _BOOL4 IsPlayedOpeningMovie_42716096; // w0
  int32_t eventId; // w27
  _BOOL4 v36; // w23
  _BOOL4 IsEventTutorialFlagOn; // w0
  int v38; // w8
  int32_t v39; // w20
  NetworkManager_ResultCallbackFunc_o *v40; // x21

  while ( 1 )
  {
    if ( (byte_4CC98BF & 1) == 0 )
    {
      sub_1C713B0(&CondType_TypeInfo);
      sub_1C713B0(&Method_System_Collections_Generic_List_OpeningMovieEntity__get_Count__);
      sub_1C713B0(&Method_System_Collections_Generic_List_OpeningMovieEntity__get_Item__);
      sub_1C713B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
      sub_1C713B0(&Method_TitleRootComponent___c__DisplayClass171_0__SynchronizeGrandMovieSaveData_b__0__);
      sub_1C713B0(&TitleRootComponent___c__DisplayClass171_0_TypeInfo);
      byte_4CC98BF = 1;
    }
    v9 = sub_1C715FC(TitleRootComponent___c__DisplayClass171_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v9, 0);
    if ( !v9 )
      goto LABEL_16;
    *(_QWORD *)(v9 + 16) = this;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
    *(_QWORD *)(v9 + 24) = grandPvList;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v9 + 24), (int32_t)grandPvList, v18, v19, v20, v21, v22, v23);
    *(_QWORD *)(v9 + 40) = endAction;
    v24 = (System_Action_o **)(v9 + 40);
    *(_DWORD *)(v9 + 32) = index;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v9 + 40), (int32_t)endAction, v25, v26, v27, v28, v29, v30);
    Item = *(System_Collections_Generic_List_object__o **)(v9 + 24);
    if ( !Item )
LABEL_16:
      sub_1C71608(Item, v11);
    v31 = *(_DWORD *)(v9 + 32);
    if ( Item->fields._size <= v31 )
    {
      ActionExtensions__Call(*v24, 0);
      return;
    }
    Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                          Item,
                                                          v31,
                                                          (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_OpeningMovieEntity__get_Item__);
    if ( !Item )
      goto LABEL_16;
    v32 = (OpeningMovieEntity_o *)Item;
    GrandPvEventTutorialFlag = OpeningMovieEntity__GetGrandPvEventTutorialFlag((OpeningMovieEntity_o *)Item, 0);
    IsPlayedOpeningMovie_42716096 = OpeningMovieMaster__IsPlayedOpeningMovie_42716096(v32, 0, 0);
    eventId = v32->fields.eventId;
    v36 = IsPlayedOpeningMovie_42716096;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsEventTutorialFlagOn = CondType__IsEventTutorialFlagOn(eventId, GrandPvEventTutorialFlag, 0);
    index = *(_DWORD *)(v9 + 32) + 1;
    v38 = !v36;
    *(_DWORD *)(v9 + 32) = index;
    if ( !IsEventTutorialFlagOn && (v38 & 1) == 0 )
      break;
    if ( (IsEventTutorialFlagOn & v38 & 1) != 0 )
    {
      OpeningMovieMaster__SavePlayedOpeningMovie_42714800(v32, 0);
      index = *(_DWORD *)(v9 + 32);
    }
    endAction = *v24;
    grandPvList = *(System_Collections_Generic_List_OpeningMovieEntity__o **)(v9 + 24);
  }
  v39 = v32->fields.eventId;
  v40 = (NetworkManager_ResultCallbackFunc_o *)sub_1C715FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v40,
    (Il2CppObject *)v9,
    Method_TitleRootComponent___c__DisplayClass171_0__SynchronizeGrandMovieSaveData_b__0__,
    0);
  EventTutorialMaster__RequestTutorialEventSet(v39, GrandPvEventTutorialFlag, v40, 0);
}


void TitleRootComponent__UserDataInfoCheck(
        TitleRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  void *SelfUserGame; // x0
  System_String_o *friendCode; // x20
  Il2CppObject *v8; // x20
  System_String_o *name; // x0
  System_String_o *v10; // x0
  UILabel_o *v11; // x21
  System_String_o *v12; // x20
  UILabel_o *v13; // x21
  Il2CppObject *v14; // x21
  Il2CppObject *v15; // x22
  System_String_o *v16; // x0
  System_String_o *v17; // x0
  UILabel_o *selectTakeOverTypeDetailText; // x21
  System_String_o *v19; // x20
  UILabel_o *v20; // x21
  UILabel_o *selectTakeOverTypeUserDataInfo; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *selectTakeOverTypeContentText; // x19
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v25; // x8
  CommonUI_o *v26; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v28; // x20
  Il2CppObject *v29; // x21
  struct TitleRootComponent___c_StaticFields *static_fields; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  UserGameEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CC98B7 & 1) == 0 )
  {
    sub_1C713B0(&AccountLinkageComponent_TypeInfo);
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&AvalonSceneManager_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&SelectTakeOverTypeComponent_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&TitleRootComponent_TypeInfo);
    sub_1C713B0(&Method_TitleRootComponent___c__UserDataInfoCheck_b__163_0__);
    sub_1C713B0(&TitleRootComponent___c_TypeInfo);
    sub_1C713B0(&StringLiteral_22486/*"ok"*/);
    sub_1C713B0(&StringLiteral_1892/*"ACCOUNT_LINKAGE_SELECT_CONTINUE_TYPE_NO_DATA"*/);
    sub_1C713B0(&StringLiteral_14849/*"USER_DATA_INFO"*/);
    sub_1C713B0(&StringLiteral_9341/*"NO_USER_DATA"*/);
    sub_1C713B0(&StringLiteral_1891/*"ACCOUNT_LINKAGE_SELECT_CONTINUE_TYPE_HAS_DATA"*/);
    sub_1C713B0(&StringLiteral_1890/*"ACCOUNT_LINKAGE_SELECT_CONTINUE_TYPE_CONTENT"*/);
    sub_1C713B0(&StringLiteral_14866/*"USER_NAME_NOT_SET"*/);
    byte_4CC98B7 = 1;
  }
  entity = 0;
  SelectTakeOverTypeComponent_TypeInfo->static_fields->isOverride = 0;
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_22486/*"ok"*/, 0) )
    goto LABEL_33;
  SelfUserGame = (void *)UserGameMaster__TryGetSelfUserGame(&entity, 0);
  if ( ((unsigned __int8)SelfUserGame & 1) != 0 )
  {
    if ( entity )
    {
      friendCode = entity->fields.friendCode;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      SelfUserGame = LocalizationManager__GetNumberFormat_41551736(friendCode, 0);
      if ( entity )
      {
        v8 = (Il2CppObject *)SelfUserGame;
        if ( entity->fields.genderType == 3 )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          name = LocalizationManager__Get((System_String_o *)StringLiteral_14866/*"USER_NAME_NOT_SET"*/, 0);
        }
        else
        {
          name = entity->fields.name;
        }
        SelfUserGame = AccountLinkageParams__AddColorCodeBracket(name, v5);
        if ( entity )
        {
          v14 = (Il2CppObject *)SelfUserGame;
          v15 = (Il2CppObject *)System_Int32__ToString((int)entity + 80, 0);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v16 = LocalizationManager__Get((System_String_o *)StringLiteral_14849/*"USER_DATA_INFO"*/, 0);
          v17 = System_String__Format_64073100(v16, v8, v14, v15, 0);
          selectTakeOverTypeDetailText = this->fields.selectTakeOverTypeDetailText;
          v19 = v17;
          SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_1891/*"ACCOUNT_LINKAGE_SELECT_CONTINUE_TYPE_HAS_DATA"*/, 0);
          if ( selectTakeOverTypeDetailText )
          {
            UILabel__set_text(selectTakeOverTypeDetailText, (System_String_o *)SelfUserGame, 0);
            v20 = this->fields.selectTakeOverTypeDetailText;
            SelfUserGame = TitleRootComponent_TypeInfo;
            if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
            if ( v20 )
            {
              UILabel__set_fontSize(
                v20,
                TitleRootComponent_TypeInfo->static_fields->ACCOUNT_LINKAGE_SELECT_CONTINUE_TYPE_HAS_DATA_FONT_SIZE,
                0);
              SelfUserGame = this->fields.selectTakeOverTypeUserDataInfo;
              if ( SelfUserGame )
              {
                UILabel__set_text((UILabel_o *)SelfUserGame, v19, 0);
                SelectTakeOverTypeComponent_TypeInfo->static_fields->isOverride = 1;
                goto LABEL_31;
              }
            }
          }
        }
      }
    }
LABEL_50:
    sub_1C71608(SelfUserGame, v5);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_9341/*"NO_USER_DATA"*/, 0);
  v11 = this->fields.selectTakeOverTypeDetailText;
  v12 = v10;
  SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_1892/*"ACCOUNT_LINKAGE_SELECT_CONTINUE_TYPE_NO_DATA"*/, 0);
  if ( !v11 )
    goto LABEL_50;
  UILabel__set_text(v11, (System_String_o *)SelfUserGame, 0);
  v13 = this->fields.selectTakeOverTypeDetailText;
  SelfUserGame = TitleRootComponent_TypeInfo;
  if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
  if ( !v13 )
    goto LABEL_50;
  UILabel__set_fontSize(
    v13,
    TitleRootComponent_TypeInfo->static_fields->ACCOUNT_LINKAGE_SELECT_CONTINUE_TYPE_NO_DATA_FONT_SIZE,
    0);
  SelfUserGame = this->fields.selectTakeOverTypeUserDataInfo;
  if ( !SelfUserGame )
    goto LABEL_50;
  UILabel__set_text((UILabel_o *)SelfUserGame, v12, 0);
  SelectTakeOverTypeComponent_TypeInfo->static_fields->isOverride = 0;
LABEL_31:
  SelfUserGame = this->fields.selectTakeOverTypeComponent;
  if ( !SelfUserGame )
    goto LABEL_50;
  SelectTakeOverTypeComponent__SetupTitleImg((SelectTakeOverTypeComponent_o *)SelfUserGame, 0);
LABEL_33:
  selectTakeOverTypeUserDataInfo = this->fields.selectTakeOverTypeUserDataInfo;
  SelfUserGame = AccountLinkageComponent_TypeInfo;
  if ( !AccountLinkageComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AccountLinkageComponent_TypeInfo);
  if ( !selectTakeOverTypeUserDataInfo )
    goto LABEL_50;
  UILabel__set_spacingY(
    selectTakeOverTypeUserDataInfo,
    AccountLinkageComponent_TypeInfo->static_fields->ACCOUNT_LINKAGE_DATA_SPACING_Y,
    0);
  SelfUserGame = this->fields.selectTakeOverTypeUserDataInfo;
  if ( !SelfUserGame )
    goto LABEL_50;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SelfUserGame, 0);
  GameObjectExtensions__SetLocalPositionY(
    gameObject,
    (float)AccountLinkageComponent_TypeInfo->static_fields->ACCOUNT_LINKAGE_DATA_TRANSFORM_Y,
    0);
  selectTakeOverTypeContentText = this->fields.selectTakeOverTypeContentText;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_1890/*"ACCOUNT_LINKAGE_SELECT_CONTINUE_TYPE_CONTENT"*/, 0);
  if ( !selectTakeOverTypeContentText )
    goto LABEL_50;
  UILabel__set_text(selectTakeOverTypeContentText, (System_String_o *)SelfUserGame, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v25 = AvalonSceneManager_TypeInfo;
  v26 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v25 = AvalonSceneManager_TypeInfo;
  }
  SelfUserGame = TitleRootComponent___c_TypeInfo;
  DEFAULT_FADE_TIME = v25->static_fields->DEFAULT_FADE_TIME;
  if ( !TitleRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleRootComponent___c_TypeInfo);
    SelfUserGame = TitleRootComponent___c_TypeInfo;
  }
  v28 = *(System_Action_o **)(*((_QWORD *)SelfUserGame + 23) + 80LL);
  if ( !v28 )
  {
    if ( !*((_DWORD *)SelfUserGame + 56) )
    {
      j_il2cpp_runtime_class_init_0(SelfUserGame);
      SelfUserGame = TitleRootComponent___c_TypeInfo;
    }
    v29 = (Il2CppObject *)**((_QWORD **)SelfUserGame + 23);
    v28 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(v28, v29, Method_TitleRootComponent___c__UserDataInfoCheck_b__163_0__, 0);
    static_fields = TitleRootComponent___c_TypeInfo->static_fields;
    static_fields->__9__163_0 = v28;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__163_0, (int32_t)v28, v31, v32, v33, v34, v35, v36);
  }
  if ( !v26 )
    goto LABEL_50;
  CommonUI__maskFadein(v26, DEFAULT_FADE_TIME, v28, 0);
}


void TitleRootComponent__UserDeleteFinish(TitleRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_String_o *v4; // x21
  ErrorDialog_ClickDelegate_o *v5; // x22
  __int64 v6; // x0
  __int64 v7; // x1
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-50h]

  if ( (byte_4CC98B9 & 1) == 0 )
  {
    sub_1C713B0(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_TitleRootComponent__UserDeleteFinish_b__165_0__);
    sub_1C713B0(&StringLiteral_1841/*"ACCOUNT_DELETE_FINISH_MESSAGE"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC98B9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_1841/*"ACCOUNT_DELETE_FINISH_MESSAGE"*/, 0);
  v5 = (ErrorDialog_ClickDelegate_o *)sub_1C715FC(ErrorDialog_ClickDelegate_TypeInfo);
  ErrorDialog_ClickDelegate___ctor(v5, (Il2CppObject *)this, Method_TitleRootComponent__UserDeleteFinish_b__165_0__, 0);
  if ( !Instance )
    sub_1C71608(v6, v7);
  *(_QWORD *)&effectDistance.fields.hasValue = 0;
  effectDistance.fields.value.fields.y = 0.0;
  CommonUI__OpenWarningDialog(
    (CommonUI_o *)Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v4,
    v5,
    0,
    0,
    -2.0,
    3,
    effectDistance,
    0);
}


System_Collections_IEnumerator_o *TitleRootComponent__WaitPurchase(
        TitleRootComponent_o *this,
        System_String_o *title,
        System_String_o *message,
        System_String_o *decideTxt,
        System_String_o *cancleTxt,
        CommonConfirmDialog_ClickDelegate_o *func,
        int32_t fontsize,
        float windowPosY,
        float messagePosY,
        int32_t messageLabelHeight,
        bool isCancelTxtTwoLine,
        int32_t spacingY,
        const MethodInfo *method)
{
  __int64 v21; // x26
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7

  if ( (byte_4CC98A5 & 1) == 0 )
  {
    sub_1C713B0(&TitleRootComponent__WaitPurchase_d__143_TypeInfo);
    byte_4CC98A5 = 1;
  }
  v21 = sub_1C715FC(TitleRootComponent__WaitPurchase_d__143_TypeInfo);
  System_Object___ctor((Il2CppObject *)v21, 0);
  *(_DWORD *)(v21 + 16) = 0;
  *(_QWORD *)(v21 + 32) = title;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v21 + 32), (int32_t)title, v22, v23, v24, v25, v26, v27);
  *(_QWORD *)(v21 + 40) = message;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v21 + 40), (int32_t)message, v28, v29, v30, v31, v32, v33);
  *(_QWORD *)(v21 + 48) = decideTxt;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v21 + 48), (int32_t)decideTxt, v34, v35, v36, v37, v38, v39);
  *(_QWORD *)(v21 + 56) = cancleTxt;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v21 + 56), (int32_t)cancleTxt, v40, v41, v42, v43, v44, v45);
  *(_QWORD *)(v21 + 64) = func;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v21 + 64), (int32_t)func, v46, v47, v48, v49, v50, v51);
  *(_DWORD *)(v21 + 72) = fontsize;
  *(float *)(v21 + 76) = windowPosY;
  *(_BYTE *)(v21 + 88) = isCancelTxtTwoLine;
  *(_DWORD *)(v21 + 80) = spacingY;
  *(_DWORD *)(v21 + 84) = messageLabelHeight;
  return (System_Collections_IEnumerator_o *)v21;
}


void TitleRootComponent___CancelAccountLinkageTakeOver_b__162_0(TitleRootComponent_o *this, const MethodInfo *method)
{
  void *accountLinkageTakeOverPanel; // x0
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v5; // x8
  CommonUI_o *v6; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v8; // x20
  Il2CppObject *v9; // x21
  struct TitleRootComponent___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4CC98CC & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&AvalonSceneManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_TitleRootComponent___c__CancelAccountLinkageTakeOver_b__162_1__);
    sub_1C713B0(&TitleRootComponent___c_TypeInfo);
    sub_1C713B0(&StringLiteral_13337/*"TAKEOVER_CANCEL"*/);
    byte_4CC98CC = 1;
  }
  accountLinkageTakeOverPanel = this->fields.accountLinkageTakeOverPanel;
  if ( !accountLinkageTakeOverPanel )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)accountLinkageTakeOverPanel, 0, 0);
  accountLinkageTakeOverPanel = this->fields.selectTakeOverTypeObj;
  if ( !accountLinkageTakeOverPanel )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)accountLinkageTakeOverPanel, 1, 0);
  accountLinkageTakeOverPanel = this->fields.myFSM;
  if ( !accountLinkageTakeOverPanel )
    goto LABEL_16;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)accountLinkageTakeOverPanel, (System_String_o *)StringLiteral_13337/*"TAKEOVER_CANCEL"*/, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = AvalonSceneManager_TypeInfo;
  v6 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v5 = AvalonSceneManager_TypeInfo;
  }
  accountLinkageTakeOverPanel = TitleRootComponent___c_TypeInfo;
  DEFAULT_FADE_TIME = v5->static_fields->DEFAULT_FADE_TIME;
  if ( !TitleRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleRootComponent___c_TypeInfo);
    accountLinkageTakeOverPanel = TitleRootComponent___c_TypeInfo;
  }
  v8 = *(System_Action_o **)(*((_QWORD *)accountLinkageTakeOverPanel + 23) + 72LL);
  if ( !v8 )
  {
    if ( !*((_DWORD *)accountLinkageTakeOverPanel + 56) )
    {
      j_il2cpp_runtime_class_init_0(accountLinkageTakeOverPanel);
      accountLinkageTakeOverPanel = TitleRootComponent___c_TypeInfo;
    }
    v9 = (Il2CppObject *)**((_QWORD **)accountLinkageTakeOverPanel + 23);
    v8 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(v8, v9, Method_TitleRootComponent___c__CancelAccountLinkageTakeOver_b__162_1__, 0);
    static_fields = TitleRootComponent___c_TypeInfo->static_fields;
    static_fields->__9__162_1 = v8;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__162_1, (int32_t)v8, v11, v12, v13, v14, v15, v16);
  }
  if ( !v6 )
LABEL_16:
    sub_1C71608(accountLinkageTakeOverPanel, method);
  CommonUI__maskFadein(v6, DEFAULT_FADE_TIME, v8, 0);
}


void TitleRootComponent___DispDeletePassword_b__164_0(TitleRootComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4CC98CD & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_3437/*"CLICK_CANCEL"*/);
    byte_4CC98CD = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C71608(0, method);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_3437/*"CLICK_CANCEL"*/, 0);
}


void TitleRootComponent___HideAccountLinkageTakeOverPanel_b__161_0(
        TitleRootComponent_o *this,
        const MethodInfo *method)
{
  void *accountLinkageTakeOverPanel; // x0
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v5; // x8
  CommonUI_o *v6; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v8; // x20
  Il2CppObject *v9; // x21
  struct TitleRootComponent___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4CC98CB & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&AvalonSceneManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_TitleRootComponent___c__HideAccountLinkageTakeOverPanel_b__161_1__);
    sub_1C713B0(&TitleRootComponent___c_TypeInfo);
    byte_4CC98CB = 1;
  }
  accountLinkageTakeOverPanel = this->fields.accountLinkageTakeOverPanel;
  if ( !accountLinkageTakeOverPanel )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)accountLinkageTakeOverPanel, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = AvalonSceneManager_TypeInfo;
  v6 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v5 = AvalonSceneManager_TypeInfo;
  }
  accountLinkageTakeOverPanel = TitleRootComponent___c_TypeInfo;
  DEFAULT_FADE_TIME = v5->static_fields->DEFAULT_FADE_TIME;
  if ( !TitleRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleRootComponent___c_TypeInfo);
    accountLinkageTakeOverPanel = TitleRootComponent___c_TypeInfo;
  }
  v8 = *(System_Action_o **)(*((_QWORD *)accountLinkageTakeOverPanel + 23) + 64LL);
  if ( !v8 )
  {
    if ( !*((_DWORD *)accountLinkageTakeOverPanel + 56) )
    {
      j_il2cpp_runtime_class_init_0(accountLinkageTakeOverPanel);
      accountLinkageTakeOverPanel = TitleRootComponent___c_TypeInfo;
    }
    v9 = (Il2CppObject *)**((_QWORD **)accountLinkageTakeOverPanel + 23);
    v8 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(v8, v9, Method_TitleRootComponent___c__HideAccountLinkageTakeOverPanel_b__161_1__, 0);
    static_fields = TitleRootComponent___c_TypeInfo->static_fields;
    static_fields->__9__161_1 = v8;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__161_1, (int32_t)v8, v11, v12, v13, v14, v15, v16);
  }
  if ( !v6 )
LABEL_14:
    sub_1C71608(accountLinkageTakeOverPanel, method);
  CommonUI__maskFadein(v6, DEFAULT_FADE_TIME, v8, 0);
}


void TitleRootComponent___HideSelectTakeOverTypePanel_b__157_0(TitleRootComponent_o *this, const MethodInfo *method)
{
  void *selectTakeOverTypeObj; // x0
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v5; // x8
  CommonUI_o *v6; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v8; // x20
  Il2CppObject *v9; // x21
  struct TitleRootComponent___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4CC98CA & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&AvalonSceneManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_TitleRootComponent___c__HideSelectTakeOverTypePanel_b__157_1__);
    sub_1C713B0(&TitleRootComponent___c_TypeInfo);
    byte_4CC98CA = 1;
  }
  selectTakeOverTypeObj = this->fields.selectTakeOverTypeObj;
  if ( !selectTakeOverTypeObj )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectTakeOverTypeObj, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = AvalonSceneManager_TypeInfo;
  v6 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v5 = AvalonSceneManager_TypeInfo;
  }
  selectTakeOverTypeObj = TitleRootComponent___c_TypeInfo;
  DEFAULT_FADE_TIME = v5->static_fields->DEFAULT_FADE_TIME;
  if ( !TitleRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleRootComponent___c_TypeInfo);
    selectTakeOverTypeObj = TitleRootComponent___c_TypeInfo;
  }
  v8 = *(System_Action_o **)(*((_QWORD *)selectTakeOverTypeObj + 23) + 40LL);
  if ( !v8 )
  {
    if ( !*((_DWORD *)selectTakeOverTypeObj + 56) )
    {
      j_il2cpp_runtime_class_init_0(selectTakeOverTypeObj);
      selectTakeOverTypeObj = TitleRootComponent___c_TypeInfo;
    }
    v9 = (Il2CppObject *)**((_QWORD **)selectTakeOverTypeObj + 23);
    v8 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(v8, v9, Method_TitleRootComponent___c__HideSelectTakeOverTypePanel_b__157_1__, 0);
    static_fields = TitleRootComponent___c_TypeInfo->static_fields;
    static_fields->__9__157_1 = v8;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__157_1, (int32_t)v8, v11, v12, v13, v14, v15, v16);
  }
  if ( !v6 )
LABEL_14:
    sub_1C71608(selectTakeOverTypeObj, method);
  CommonUI__maskFadein(v6, DEFAULT_FADE_TIME, v8, 0);
}


void TitleRootComponent___SetReboot_b__166_0(TitleRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4CC98CE & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    byte_4CC98CE = 1;
  }
  TitleRootComponent__ReleaseTitleAssets(this, method);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance
    || (ManagementManager__titleCacheClear((ManagementManager_o *)Instance, 0),
        UserSaveData__DeleteSaveData(1, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0)
    || (AtlasManager__ReleaseUISkinDialog((AtlasManager_o *)Instance, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__)) == 0) )
  {
    sub_1C71608(Instance, v4);
  }
  ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, 0);
}


void TitleRootComponent___ShowSelectTakeOverTypePanel_b__156_0(TitleRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *selectTakeOverTypeObj; // x0
  NetworkManager_ResultCallbackFunc_o *v4; // x20
  TitleRootComponent_c *v5; // x8
  AccountLinkageInfoRequest_o *v6; // x19

  if ( (byte_4CC98C9 & 1) == 0 )
  {
    sub_1C713B0(&Method_NetworkManager_getRequest_AccountLinkageInfoRequest___);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C713B0(&Method_TitleRootComponent_UserDataInfoCheck__);
    sub_1C713B0(&TitleRootComponent_TypeInfo);
    byte_4CC98C9 = 1;
  }
  selectTakeOverTypeObj = this->fields.selectTakeOverTypeObj;
  if ( !selectTakeOverTypeObj )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(selectTakeOverTypeObj, 1, 0);
  v4 = (NetworkManager_ResultCallbackFunc_o *)sub_1C715FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v4, (Il2CppObject *)this, Method_TitleRootComponent_UserDataInfoCheck__, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  selectTakeOverTypeObj = (UnityEngine_GameObject_o *)NetworkManager__getRequest_object_(
                                                        v4,
                                                        (const MethodInfo_31D69E8 *)Method_NetworkManager_getRequest_AccountLinkageInfoRequest___);
  v5 = TitleRootComponent_TypeInfo;
  v6 = (AccountLinkageInfoRequest_o *)selectTakeOverTypeObj;
  if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
    v5 = TitleRootComponent_TypeInfo;
  }
  v5->static_fields->shouldFadeInOnError = 1;
  if ( !v6 )
LABEL_10:
    sub_1C71608(selectTakeOverTypeObj, method);
  AccountLinkageInfoRequest__beginRequest(v6, 0);
}


void TitleRootComponent___callbackContinueInput_b__117_0(
        TitleRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4CC98C6 & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&StringLiteral_13340/*"TAKEOVER_INPUT_OK"*/);
    byte_4CC98C6 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__CloseAccountLinkageOverrideTakeOverDialog(Instance, 0, 0);
  if ( isDecide )
  {
    Instance = (CommonUI_o *)this->fields.myFSM;
    if ( Instance )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_13340/*"TAKEOVER_INPUT_OK"*/, 0);
      return;
    }
LABEL_8:
    sub_1C71608(Instance, v6);
  }
}


void TitleRootComponent___callbackContinueInput_b__117_1(
        TitleRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4CC98C7 & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&StringLiteral_13340/*"TAKEOVER_INPUT_OK"*/);
    byte_4CC98C7 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__CloseTakeOverDialog(Instance, 0, 0);
  if ( isDecide )
  {
    Instance = (CommonUI_o *)this->fields.myFSM;
    if ( Instance )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_13340/*"TAKEOVER_INPUT_OK"*/, 0);
      return;
    }
LABEL_8:
    sub_1C71608(Instance, v6);
  }
}


void TitleRootComponent___closeTakeoverInput_b__113_0(TitleRootComponent_o *this, const MethodInfo *method)
{
  void *takeoverKeyInput; // x0
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v5; // x8
  CommonUI_o *v6; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v8; // x20
  Il2CppObject *v9; // x21
  struct TitleRootComponent___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4CC98C5 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&AvalonSceneManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_TitleRootComponent___c__closeTakeoverInput_b__113_1__);
    sub_1C713B0(&TitleRootComponent___c_TypeInfo);
    byte_4CC98C5 = 1;
  }
  takeoverKeyInput = this->fields.takeoverKeyInput;
  if ( !takeoverKeyInput )
    goto LABEL_18;
  UILineInput__SetInputEnable((UILineInput_o *)takeoverKeyInput, 0, 0);
  takeoverKeyInput = this->fields.takeoverPasswardInput;
  if ( !takeoverKeyInput )
    goto LABEL_18;
  UILineInput__SetInputEnable((UILineInput_o *)takeoverKeyInput, 0, 0);
  takeoverKeyInput = this->fields.takeoverObj;
  if ( !takeoverKeyInput )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)takeoverKeyInput, 0, 0);
  takeoverKeyInput = this->fields.friendCodeComponent;
  if ( !takeoverKeyInput )
    goto LABEL_18;
  FriendCodeComponent__SetTouchEnable((FriendCodeComponent_o *)takeoverKeyInput, 1, 0);
  takeoverKeyInput = this->fields.selectTakeOverTypeObj;
  if ( !takeoverKeyInput )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)takeoverKeyInput, 1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = AvalonSceneManager_TypeInfo;
  v6 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v5 = AvalonSceneManager_TypeInfo;
  }
  takeoverKeyInput = TitleRootComponent___c_TypeInfo;
  DEFAULT_FADE_TIME = v5->static_fields->DEFAULT_FADE_TIME;
  if ( !TitleRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleRootComponent___c_TypeInfo);
    takeoverKeyInput = TitleRootComponent___c_TypeInfo;
  }
  v8 = *(System_Action_o **)(*((_QWORD *)takeoverKeyInput + 23) + 16LL);
  if ( !v8 )
  {
    if ( !*((_DWORD *)takeoverKeyInput + 56) )
    {
      j_il2cpp_runtime_class_init_0(takeoverKeyInput);
      takeoverKeyInput = TitleRootComponent___c_TypeInfo;
    }
    v9 = (Il2CppObject *)**((_QWORD **)takeoverKeyInput + 23);
    v8 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(v8, v9, Method_TitleRootComponent___c__closeTakeoverInput_b__113_1__, 0);
    static_fields = TitleRootComponent___c_TypeInfo->static_fields;
    static_fields->__9__113_1 = v8;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__113_1, (int32_t)v8, v11, v12, v13, v14, v15, v16);
  }
  if ( !v6 )
LABEL_18:
    sub_1C71608(takeoverKeyInput, method);
  CommonUI__maskFadein(v6, DEFAULT_FADE_TIME, v8, 0);
}


void TitleRootComponent___confirmCacheClear_b__153_0(
        TitleRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  Il2CppObject *Instance; // x19
  System_Action_o *v15; // x20

  if ( (byte_4CC98C8 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_TitleRootComponent___c__DisplayClass153_0__confirmCacheClear_b__1__);
    sub_1C713B0(&TitleRootComponent___c__DisplayClass153_0_TypeInfo);
    byte_4CC98C8 = 1;
  }
  v5 = sub_1C715FC(TitleRootComponent___c__DisplayClass153_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13),
        *(_BYTE *)(v5 + 16) = isDecide,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v15 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo),
        System_Action___ctor(
          v15,
          (Il2CppObject *)v5,
          Method_TitleRootComponent___c__DisplayClass153_0__confirmCacheClear_b__1__,
          0),
        !Instance) )
  {
    sub_1C71608(v6, v7);
  }
  CommonUI__CloseConfirmDialog_31440904((CommonUI_o *)Instance, v15, 0);
}


void TitleRootComponent___endTitleFade_b__100_0(TitleRootComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4CC98C2 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_5435/*"END_FADE"*/);
    byte_4CC98C2 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C71608(0, method);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_5435/*"END_FADE"*/, 0);
}


void TitleRootComponent___startTakeoverInput_b__111_0(TitleRootComponent_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4CC98C3 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&CommonEffectManager_TypeInfo);
    sub_1C713B0(&Method_TitleRootComponent__startTakeoverInput_b__111_1__);
    byte_4CC98C3 = 1;
  }
  v3 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_TitleRootComponent__startTakeoverInput_b__111_1__, 0);
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  CommonEffectManager__LoadSkinEffects(v3, 1, 0);
}


void TitleRootComponent___startTakeoverInput_b__111_1(TitleRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  System_Action_o *v6; // x20

  if ( (byte_4CC98C4 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    sub_1C713B0(&Method_TitleRootComponent__startTakeoverInput_b__111_2__);
    byte_4CC98C4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !Instance )
    sub_1C71608(0, v4);
  if ( AtlasManager__isLoadedSkinData((AtlasManager_o *)Instance, 2, 0) )
  {
    TitleRootComponent__openTakeoverInput(this, v5);
  }
  else
  {
    v6 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_TitleRootComponent__startTakeoverInput_b__111_2__, 0);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__LoadUISkin(v6, 2, 1, 0);
  }
}


void TitleRootComponent__battleContinueRequest(TitleRootComponent_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  void *Request_object; // x0
  const MethodInfo *v5; // x1
  BattleUseContinueRequest_o *v6; // x20
  int64_t ResumeBattleId; // x0
  const MethodInfo *v8; // x1
  int64_t v9; // x21
  System_Int32_array *WaveClearTurn; // x19
  int32_t ContinueCount; // w0
  int32_t v12; // w3
  NetworkManager_ResultCallbackFunc_o *v13; // x20
  BattleCommandSpellRequest_o *v14; // x20
  int64_t v15; // x0
  int64_t v16; // x21
  int32_t Value; // w19
  System_Int32_array *v18; // x22
  int32_t v19; // w0
  int32_t v20; // w4
  BattleCommandSpellRequest_o *v21; // x0
  int64_t v22; // x1
  int32_t v23; // w2
  System_Int32_array *v24; // x3
  NetworkManager_ResultCallbackFunc_o *v25; // x20
  BattleCommandSpellRequest_o *v26; // x20
  int64_t v27; // x21
  int32_t CommandSpellIdBattle; // w0
  const MethodInfo *v29; // x1
  int32_t v30; // w22
  System_Int32_array *v31; // x19
  int32_t v32; // w0
  NetworkManager_ResultCallbackFunc_o *v33; // x20
  BattleUseContinueItemRequest_o *v34; // x20
  __int64 v35; // x21
  int32_t ContinueItemId; // w0
  const MethodInfo *v37; // x1
  int32_t v38; // w22
  int32_t v39; // w0
  int32_t v40; // w2
  NetworkManager_ResultCallbackFunc_o *v41; // x20
  BattleUseItemRequest_o *v42; // x20
  System_String_o *BattleUseItemParameter; // x21
  void *v44; // x21
  _BOOL8 v45; // x0
  int32_t eventId; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t result[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CC989C & 1) == 0 )
  {
    sub_1C713B0(&BattleData_TypeInfo);
    sub_1C713B0(&Method_NetworkManager_getRequest_BattleCommandSpellRequest___);
    sub_1C713B0(&Method_NetworkManager_getRequest_BattleUseContinueItemRequest___);
    sub_1C713B0(&Method_NetworkManager_getRequest_BattleUseContinueRequest___);
    sub_1C713B0(&Method_NetworkManager_getRequest_BattleUseItemRequest___);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C713B0(&Method_TitleRootComponent_endRequestBattleContinueRequest__);
    sub_1C713B0(&Method_TitleRootComponent_endRequestBattleUseItemRequest__);
    sub_1C713B0(&StringLiteral_6975/*"GO_TERMINAL"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    sub_1C713B0(&StringLiteral_6916/*"GAME_OVER_COMMAND_SPELL_ID"*/);
    byte_4CC989C = 1;
  }
  *(_QWORD *)result = 0;
  eventId = 0;
  if ( !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  switch ( BattleData__getContinueBattleFlg(0) )
  {
    case 1:
      v3 = (NetworkManager_ResultCallbackFunc_o *)sub_1C715FC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v3,
        (Il2CppObject *)this,
        Method_TitleRootComponent_endRequestBattleContinueRequest__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = NetworkManager__getRequest_object_(
                         v3,
                         (const MethodInfo_31D69E8 *)Method_NetworkManager_getRequest_BattleUseContinueRequest___);
      if ( !Request_object )
        goto LABEL_92;
      v6 = (BattleUseContinueRequest_o *)Request_object;
      if ( RequestBase__beginRetryRequest((RequestBase_o *)Request_object, 0, 0) )
        return;
      if ( !BattleData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
      ResumeBattleId = BattleData__getResumeBattleId(0);
      if ( ResumeBattleId < 1 )
        goto LABEL_80;
      v9 = ResumeBattleId;
      if ( !BattleData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
      WaveClearTurn = BattleData__getWaveClearTurn(0);
      ContinueCount = BattleData__loadContinueCount(0);
      if ( ContinueCount )
        v12 = ContinueCount;
      else
        v12 = 1;
      BattleUseContinueRequest__beginRequest(v6, v9, WaveClearTurn, v12, 0);
      return;
    case 2:
      v13 = (NetworkManager_ResultCallbackFunc_o *)sub_1C715FC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_TitleRootComponent_endRequestBattleContinueRequest__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = NetworkManager__getRequest_object_(
                         v13,
                         (const MethodInfo_31D69E8 *)Method_NetworkManager_getRequest_BattleCommandSpellRequest___);
      if ( !Request_object )
        goto LABEL_92;
      v14 = (BattleCommandSpellRequest_o *)Request_object;
      if ( RequestBase__beginRetryRequest((RequestBase_o *)Request_object, 0, 0) )
        return;
      if ( !BattleData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
      v15 = BattleData__getResumeBattleId(0);
      if ( v15 < 1 )
      {
LABEL_80:
        TitleRootComponent__ReleaseTitleAssets(this, v8);
        if ( !BattleData_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
        goto LABEL_82;
      }
      v16 = v15;
      Value = ConstantMaster__getValue((System_String_o *)StringLiteral_6916/*"GAME_OVER_COMMAND_SPELL_ID"*/, 0);
      if ( !BattleData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
      v18 = BattleData__getWaveClearTurn(0);
      v19 = BattleData__loadContinueCount(0);
      if ( v19 )
        v20 = v19;
      else
        v20 = 1;
      v21 = v14;
      v22 = v16;
      v23 = Value;
      v24 = v18;
      goto LABEL_46;
    case 3:
      v25 = (NetworkManager_ResultCallbackFunc_o *)sub_1C715FC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v25,
        (Il2CppObject *)this,
        Method_TitleRootComponent_endRequestBattleContinueRequest__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = NetworkManager__getRequest_object_(
                         v25,
                         (const MethodInfo_31D69E8 *)Method_NetworkManager_getRequest_BattleCommandSpellRequest___);
      if ( !Request_object )
        goto LABEL_92;
      v26 = (BattleCommandSpellRequest_o *)Request_object;
      if ( RequestBase__beginRetryRequest((RequestBase_o *)Request_object, 0, 0) )
        return;
      if ( !BattleData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
      v27 = BattleData__getResumeBattleId(0);
      CommandSpellIdBattle = BattleData__getCommandSpellIdBattle(0);
      if ( v27 < 1 || (v30 = CommandSpellIdBattle, CommandSpellIdBattle < 1) )
      {
        TitleRootComponent__ReleaseTitleAssets(this, v29);
        if ( !BattleData_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
        BattleData__setContinueBattleFlg(0, 1, 0);
        BattleData__setCommandSpellIdBattle(0, 1, 0);
        goto LABEL_89;
      }
      if ( !BattleData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
      v31 = BattleData__getWaveClearTurn(0);
      v32 = BattleData__loadContinueCount(0);
      if ( v32 )
        v20 = v32;
      else
        v20 = 1;
      v21 = v26;
      v22 = v27;
      v23 = v30;
      v24 = v31;
LABEL_46:
      BattleCommandSpellRequest__beginRequest(v21, v22, v23, v24, v20, 1, 0);
      return;
    case 4:
      v33 = (NetworkManager_ResultCallbackFunc_o *)sub_1C715FC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v33,
        (Il2CppObject *)this,
        Method_TitleRootComponent_endRequestBattleContinueRequest__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = NetworkManager__getRequest_object_(
                         v33,
                         (const MethodInfo_31D69E8 *)Method_NetworkManager_getRequest_BattleUseContinueItemRequest___);
      if ( !Request_object )
        goto LABEL_92;
      v34 = (BattleUseContinueItemRequest_o *)Request_object;
      if ( RequestBase__beginRetryRequest((RequestBase_o *)Request_object, 0, 0) )
        return;
      if ( !BattleData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
      v35 = BattleData__getResumeBattleId(0);
      ContinueItemId = BattleData__GetContinueItemId(0);
      if ( v35 >= 1 )
      {
        v38 = ContinueItemId;
        if ( ContinueItemId >= 1 )
        {
          if ( !BattleData_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
          v39 = BattleData__loadContinueCount(0);
          if ( v39 )
            v40 = v39;
          else
            v40 = 1;
          BattleUseContinueItemRequest__beginRequest(v34, v35, v40, v38, 1, 0);
          return;
        }
      }
      TitleRootComponent__ReleaseTitleAssets(this, v37);
      if ( !BattleData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
      BattleData__setContinueBattleFlg(0, 1, 0);
      BattleData__SaveContinueItemId(0, 1, 0);
      goto LABEL_89;
    case 5:
      v41 = (NetworkManager_ResultCallbackFunc_o *)sub_1C715FC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v41,
        (Il2CppObject *)this,
        Method_TitleRootComponent_endRequestBattleUseItemRequest__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = NetworkManager__getRequest_object_(
                         v41,
                         (const MethodInfo_31D69E8 *)Method_NetworkManager_getRequest_BattleUseItemRequest___);
      if ( !Request_object )
        goto LABEL_92;
      v42 = (BattleUseItemRequest_o *)Request_object;
      if ( RequestBase__beginRetryRequest((RequestBase_o *)Request_object, 0, 0) )
        return;
      if ( !BattleData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
      BattleUseItemParameter = BattleData__GetBattleUseItemParameter(0);
      Request_object = (void *)System_String__IsNullOrEmpty(BattleUseItemParameter, 0);
      if ( ((unsigned __int8)Request_object & 1) != 0 )
        goto LABEL_77;
      if ( !BattleUseItemParameter )
        goto LABEL_92;
      Request_object = System_String__Split(BattleUseItemParameter, 0x2Cu, 0, 0);
      if ( !Request_object )
        goto LABEL_92;
      v44 = Request_object;
      if ( *((int *)Request_object + 6) < 3 )
        goto LABEL_77;
      *(_QWORD *)result = 0;
      eventId = 0;
      v45 = System_Int32__TryParse(*((System_String_o **)Request_object + 4), &result[1], 0);
      if ( !v45 )
        goto LABEL_77;
      if ( *((_DWORD *)v44 + 6) <= 1u )
        goto LABEL_93;
      v45 = System_Int32__TryParse(*((System_String_o **)v44 + 5), result, 0);
      if ( !v45 )
        goto LABEL_77;
      if ( *((_DWORD *)v44 + 6) <= 2u )
LABEL_93:
        sub_1C71610(v45);
      if ( System_Int32__TryParse(*((System_String_o **)v44 + 6), &eventId, 0) )
      {
        BattleUseItemRequest__beginRequest(v42, result[1], result[0], eventId, 0);
      }
      else
      {
LABEL_77:
        TitleRootComponent__ReleaseTitleAssets(this, v5);
        if ( !BattleData_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
        BattleData__SaveBattleUseItemParameter((System_String_o *)StringLiteral_1/*""*/, 0, 0);
LABEL_82:
        BattleData__setContinueBattleFlg(0, 1, 0);
LABEL_89:
        Request_object = this->fields.myFSM;
        if ( !Request_object )
LABEL_92:
          sub_1C71608(Request_object, v5);
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Request_object, (System_String_o *)StringLiteral_6975/*"GO_TERMINAL"*/, 0);
      }
      return;
    default:
      return;
  }
}


void TitleRootComponent__beginInitialize(TitleRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *titleRootObjet; // x0
  Il2CppObject *Component_object; // x20
  long double v5; // q0
  const MethodInfo *v6; // x1

  if ( (byte_4CC9872 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_1C713B0(&LogoMain_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4CC9872 = 1;
  }
  titleRootObjet = this->fields.titleRootObjet;
  if ( !titleRootObjet )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(titleRootObjet, 0, 0);
  titleRootObjet = this->fields.titleRootObjet;
  if ( !titleRootObjet )
    goto LABEL_12;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       titleRootObjet,
                       (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  if ( !LogoMain_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo);
  titleRootObjet = (UnityEngine_GameObject_o *)LogoMain__IsPLayLogo(0);
  if ( !Component_object )
    goto LABEL_12;
  LODWORD(v5) = 1.0;
  if ( ((unsigned __int8)titleRootObjet & 1) != 0 )
    *(float *)&v5 = 0.0;
  ((void (__fastcall *)(Il2CppObject *, const MethodInfo *, long double))Component_object->klass->vtable[8].methodPtr)(
    Component_object,
    Component_object->klass->vtable[8].method,
    v5);
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0);
  TitleRootComponent__CheckChangeTitle(this, v6);
  SkillLvMaster__ResetBaseTime(0);
  titleRootObjet = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !titleRootObjet )
LABEL_12:
    sub_1C71608(titleRootObjet, method);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)titleRootObjet, (SceneRootComponent_o *)this, 0);
}


void TitleRootComponent__beginStartUp(TitleRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Time__set_timeScale(1.0, 0);
  SceneRootComponent__sendMessageStartUp((SceneRootComponent_o *)this, 0);
}


void TitleRootComponent__callHomeRequest(TitleRootComponent_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  Il2CppObject *Request_object; // x0
  __int64 v5; // x1

  if ( (byte_4CC98A1 & 1) == 0 )
  {
    sub_1C713B0(&Method_NetworkManager_getRequest_TopHomeRequest___);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C713B0(&Method_TitleRootComponent_endHomeRequest__);
    byte_4CC98A1 = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_1C715FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v3, (Il2CppObject *)this, Method_TitleRootComponent_endHomeRequest__, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v3,
                     (const MethodInfo_31D69E8 *)Method_NetworkManager_getRequest_TopHomeRequest___);
  if ( !Request_object )
    sub_1C71608(0, v5);
  RequestBase__beginRequest((RequestBase_o *)Request_object, 0);
}


void TitleRootComponent__callbackContinueInput(
        TitleRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *Dictionary; // x0
  const MethodInfo *v6; // x1
  System_Collections_Generic_Dictionary_object__object__o *v7; // x20
  System_String_o *v8; // x21
  Il2CppObject *NumberFormat_41551736; // x21
  System_String_o *v10; // x0
  const MethodInfo *v11; // x1
  Il2CppObject *v12; // x22
  Il2CppObject *v13; // x24
  System_String_o *v14; // x20
  System_String_o *v15; // x23
  System_String_o *v16; // x21
  bool SelfUserGame; // w22
  System_String_o *v18; // x19
  System_String_o *v19; // x22
  Il2CppObject *v20; // x25
  System_String_o *name; // x0
  System_String_o *v22; // x22
  System_String_o *v23; // x23
  System_String_o *v24; // x24
  System_String_o *v25; // x25
  Il2CppObject *v26; // x26
  TakeOverDialog_ClickDelegate_o *v27; // x27
  System_String_o *v28; // x21
  Il2CppObject *v29; // x29
  System_String_o *buttonDecide; // x20
  Il2CppObject *v31; // x24
  Il2CppObject *v32; // x22
  System_String_o *v33; // x26
  System_String_o *v34; // x27
  System_String_o *v35; // x28
  System_String_o *v36; // x23
  Il2CppObject *Instance; // x22
  AccountLinkageOverrideTakeOverDialog_ClickDelegate_o *v38; // x25
  System_String_o *takeOverAccountData; // [xsp+20h] [xbp-70h]
  UserGameEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4CC988E & 1) == 0 )
  {
    sub_1C713B0(&TakeOverDialog_ClickDelegate_TypeInfo);
    sub_1C713B0(&AccountLinkageOverrideTakeOverDialog_ClickDelegate_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C713B0(&JsonManager_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_TitleRootComponent__callbackContinueInput_b__117_0__);
    sub_1C713B0(&Method_TitleRootComponent__callbackContinueInput_b__117_1__);
    sub_1C713B0(&StringLiteral_13341/*"TAKEOVER_OVERRIDE_WARNING"*/);
    sub_1C713B0(&StringLiteral_14849/*"USER_DATA_INFO"*/);
    sub_1C713B0(&StringLiteral_5784/*"EXIST_ACCOUNT_DATA"*/);
    sub_1C713B0(&StringLiteral_11070/*"RECONFIRM_CONTINUE_OVERRIDE"*/);
    sub_1C713B0(&StringLiteral_22316/*"ng"*/);
    sub_1C713B0(&StringLiteral_1880/*"ACCOUNT_LINKAGE_RECONFIRM_DECIDE"*/);
    sub_1C713B0(&StringLiteral_1878/*"ACCOUNT_LINKAGE_RECONFIRM_CANCEL"*/);
    sub_1C713B0(&StringLiteral_1884/*"ACCOUNT_LINKAGE_RECONFIRM_OVERRIDE_DECIDE"*/);
    sub_1C713B0(&StringLiteral_1888/*"ACCOUNT_LINKAGE_RECONFIRM_WARNING_HAS_DATA"*/);
    sub_1C713B0(&StringLiteral_19752/*"friendCode"*/);
    sub_1C713B0(&StringLiteral_13343/*"TAKEOVER_WARNING"*/);
    sub_1C713B0(&StringLiteral_22251/*"name"*/);
    sub_1C713B0(&StringLiteral_11069/*"RECONFIRM_CONTINUE"*/);
    sub_1C713B0(&StringLiteral_14866/*"USER_NAME_NOT_SET"*/);
    sub_1C713B0(&StringLiteral_1889/*"ACCOUNT_LINKAGE_RECONFIRM_WARNING_NO_DATA"*/);
    sub_1C713B0(&StringLiteral_21469/*"lv"*/);
    byte_4CC988E = 1;
  }
  entity = 0;
  if ( System_String__op_Inequality(result, (System_String_o *)StringLiteral_22316/*"ng"*/, 0) )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(result, 0);
    if ( !Dictionary )
      goto LABEL_30;
    v7 = Dictionary;
    Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              Dictionary,
                                                                              (Il2CppObject *)StringLiteral_19752/*"friendCode"*/,
                                                                              (const MethodInfo_34CB660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Dictionary )
      goto LABEL_30;
    v8 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, const MethodInfo *))Dictionary->klass->vtable._3_ToString.methodPtr)(
                              Dictionary,
                              Dictionary->klass->vtable._3_ToString.method);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    NumberFormat_41551736 = (Il2CppObject *)LocalizationManager__GetNumberFormat_41551736(v8, 0);
    Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              v7,
                                                                              (Il2CppObject *)StringLiteral_22251/*"name"*/,
                                                                              (const MethodInfo_34CB660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Dictionary )
      goto LABEL_30;
    v10 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, const MethodInfo *))Dictionary->klass->vtable._3_ToString.methodPtr)(
                               Dictionary,
                               Dictionary->klass->vtable._3_ToString.method);
    v12 = (Il2CppObject *)AccountLinkageParams__AddColorCodeBracket(v10, v11);
    Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              v7,
                                                                              (Il2CppObject *)StringLiteral_21469/*"lv"*/,
                                                                              (const MethodInfo_34CB660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Dictionary )
      goto LABEL_30;
    v13 = (Il2CppObject *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, const MethodInfo *))Dictionary->klass->vtable._3_ToString.methodPtr)(
                            Dictionary,
                            Dictionary->klass->vtable._3_ToString.method);
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_1878/*"ACCOUNT_LINKAGE_RECONFIRM_CANCEL"*/, 0);
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_14849/*"USER_DATA_INFO"*/, 0);
    v16 = System_String__Format_64073100(v15, NumberFormat_41551736, v12, v13, 0);
    SelfUserGame = UserGameMaster__TryGetSelfUserGame(&entity, 0);
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( SelfUserGame )
        goto LABEL_14;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( SelfUserGame )
      {
LABEL_14:
        v18 = LocalizationManager__Get((System_String_o *)StringLiteral_11070/*"RECONFIRM_CONTINUE_OVERRIDE"*/, 0);
        Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)LocalizationManager__Get(
                                                                                  (System_String_o *)StringLiteral_1884/*"ACCOUNT_LINKAGE_RECONFIRM_OVERRIDE_DECIDE"*/,
                                                                                  0);
        if ( entity )
        {
          v19 = (System_String_o *)Dictionary;
          Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)LocalizationManager__GetNumberFormat_41551736(
                                                                                    entity->fields.friendCode,
                                                                                    0);
          if ( entity )
          {
            v20 = (Il2CppObject *)Dictionary;
            takeOverAccountData = v16;
            if ( entity->fields.genderType == 3 )
            {
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              name = LocalizationManager__Get((System_String_o *)StringLiteral_14866/*"USER_NAME_NOT_SET"*/, 0);
            }
            else
            {
              name = entity->fields.name;
            }
            v28 = v14;
            Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)AccountLinkageParams__AddColorCodeBracket(
                                                                                      name,
                                                                                      v6);
            if ( entity )
            {
              v29 = (Il2CppObject *)Dictionary;
              buttonDecide = v19;
              v31 = (Il2CppObject *)this;
              v32 = (Il2CppObject *)System_Int32__ToString((int)entity + 80, 0);
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v33 = LocalizationManager__Get((System_String_o *)StringLiteral_5784/*"EXIST_ACCOUNT_DATA"*/, 0);
              v34 = LocalizationManager__Get((System_String_o *)StringLiteral_13341/*"TAKEOVER_OVERRIDE_WARNING"*/, 0);
              v35 = LocalizationManager__Get((System_String_o *)StringLiteral_1888/*"ACCOUNT_LINKAGE_RECONFIRM_WARNING_HAS_DATA"*/, 0);
              v36 = System_String__Format_64073100(v15, v20, v29, v32, 0);
              Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              v38 = (AccountLinkageOverrideTakeOverDialog_ClickDelegate_o *)sub_1C715FC(AccountLinkageOverrideTakeOverDialog_ClickDelegate_TypeInfo);
              AccountLinkageOverrideTakeOverDialog_ClickDelegate___ctor(
                v38,
                v31,
                Method_TitleRootComponent__callbackContinueInput_b__117_0__,
                0);
              if ( Instance )
              {
                CommonUI__OpenAccountLinkageOverrideTakeOverDialog(
                  (CommonUI_o *)Instance,
                  v38,
                  v18,
                  v33,
                  v36,
                  takeOverAccountData,
                  v34,
                  v35,
                  v28,
                  buttonDecide,
                  0);
                return;
              }
            }
          }
        }
LABEL_30:
        sub_1C71608(Dictionary, v6);
      }
    }
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_11069/*"RECONFIRM_CONTINUE"*/, 0);
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_1880/*"ACCOUNT_LINKAGE_RECONFIRM_DECIDE"*/, 0);
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_13343/*"TAKEOVER_WARNING"*/, 0);
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_1889/*"ACCOUNT_LINKAGE_RECONFIRM_WARNING_NO_DATA"*/, 0);
    v26 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v27 = (TakeOverDialog_ClickDelegate_o *)sub_1C715FC(TakeOverDialog_ClickDelegate_TypeInfo);
    TakeOverDialog_ClickDelegate___ctor(
      v27,
      (Il2CppObject *)this,
      Method_TitleRootComponent__callbackContinueInput_b__117_1__,
      0);
    if ( v26 )
    {
      CommonUI__OpenTakeOverDialog((CommonUI_o *)v26, v27, v22, v16, v24, v25, v14, v23, 0);
      return;
    }
    goto LABEL_30;
  }
}


void TitleRootComponent__callbackInputDecide(
        TitleRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  System_Collections_Generic_Dictionary_object__object__o *Dictionary; // x0
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_object__object__o *v8; // x20
  System_String_o *v9; // x21
  System_String_o *v10; // x22
  System_String_o *v11; // x20
  Il2CppClass *klass; // x20
  NetworkManager_o *v13; // x20
  System_String_o *monitor; // x21
  int32_t monitor_high; // w22
  System_DateTime_o v16; // x0
  int32_t Month; // w23
  System_DateTime_o v18; // x0
  System_String_o *v19; // x20
  System_String_o *v20; // x0
  Il2CppObject *Instance; // x21
  NotificationDialog_ClickDelegate_o *v22; // x22
  uint64_t dateData; // [xsp+68h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+78h] [xbp-38h] BYREF

  if ( (byte_4CC9891 & 1) == 0 )
  {
    sub_1C713B0(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1C713B0(&CommonUI_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMaster_UserGameMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_UserGameMaster__UserGameEntity__long__TryGetSingleEntity__);
    sub_1C713B0(&System_DateTime_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C713B0(&JsonManager_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&OtherUserNewManager_TypeInfo);
    sub_1C713B0(&PurchaseBehaviour_TypeInfo);
    sub_1C713B0(&ServantCommentManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    sub_1C713B0(&TermsOfUseMenu_TypeInfo);
    sub_1C713B0(&Method_TitleRootComponent_onSelectTakeoverDecide__);
    sub_1C713B0(&UserCommandCodeCollectionManager_TypeInfo);
    sub_1C713B0(&UserCommandCodeNewManager_TypeInfo);
    sub_1C713B0(&UserEquipNewManager_TypeInfo);
    sub_1C713B0(&UserServantCollectionManager_TypeInfo);
    sub_1C713B0(&UserServantNewManager_TypeInfo);
    sub_1C713B0(&WarBoardData_TypeInfo);
    sub_1C713B0(&StringLiteral_3814/*"CONTINUE_DEVICE_TAKEOVER_DECIDE_MESSAGE"*/);
    sub_1C713B0(&StringLiteral_16966/*"authKey"*/);
    sub_1C713B0(&StringLiteral_22316/*"ng"*/);
    sub_1C713B0(&StringLiteral_23370/*"secretKey"*/);
    sub_1C713B0(&StringLiteral_24677/*"userId"*/);
    sub_1C713B0(&StringLiteral_3817/*"CONTINUE_DEVICE_TAKEOVER_GOOGLE_PLAY_ACCOUNT_ID_ERROR_MESSAGE"*/);
    byte_4CC9891 = 1;
  }
  entity = 0;
  dateData = 0;
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_22316/*"ng"*/, 0) )
    goto LABEL_71;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(result, 0);
  if ( !Dictionary )
    goto LABEL_73;
  v8 = Dictionary;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          Dictionary,
          (Il2CppObject *)StringLiteral_24677/*"userId"*/,
          (const MethodInfo_34CB8D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__)
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v8,
          (Il2CppObject *)StringLiteral_16966/*"authKey"*/,
          (const MethodInfo_34CB8D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__)
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v8,
          (Il2CppObject *)StringLiteral_23370/*"secretKey"*/,
          (const MethodInfo_34CB8D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    goto LABEL_71;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_UserGameMaster___);
  if ( !Dictionary )
    goto LABEL_73;
  if ( !DataMasterBase_object__object__long___TryGetSingleEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Dictionary,
          &entity,
          (const MethodInfo_340B508 *)Method_DataMasterBase_UserGameMaster__UserGameEntity__long__TryGetSingleEntity__) )
  {
LABEL_71:
    TitleRootComponent__OnFailureTakeOver(this, v5);
    return;
  }
  Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            v8,
                                                                            (Il2CppObject *)StringLiteral_24677/*"userId"*/,
                                                                            (const MethodInfo_34CB660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Dictionary )
    goto LABEL_73;
  v9 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, const MethodInfo *))Dictionary->klass->vtable._3_ToString.methodPtr)(
                            Dictionary,
                            Dictionary->klass->vtable._3_ToString.method);
  Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            v8,
                                                                            (Il2CppObject *)StringLiteral_16966/*"authKey"*/,
                                                                            (const MethodInfo_34CB660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Dictionary )
    goto LABEL_73;
  v10 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, const MethodInfo *))Dictionary->klass->vtable._3_ToString.methodPtr)(
                             Dictionary,
                             Dictionary->klass->vtable._3_ToString.method);
  Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            v8,
                                                                            (Il2CppObject *)StringLiteral_23370/*"secretKey"*/,
                                                                            (const MethodInfo_34CB660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Dictionary )
    goto LABEL_73;
  v11 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, const MethodInfo *))Dictionary->klass->vtable._3_ToString.methodPtr)(
                             Dictionary,
                             Dictionary->klass->vtable._3_ToString.method);
  UserSaveData__DeleteAndInitContinueData(1, 0);
  Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Dictionary )
    goto LABEL_73;
  NetworkManager__SetAuth((NetworkManager_o *)Dictionary, v9, v10, v11, 0);
  Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Dictionary )
    goto LABEL_73;
  NetworkManager__WriteAuth((NetworkManager_o *)Dictionary, 0);
  if ( !entity )
    goto LABEL_73;
  klass = entity[2].klass;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getDateTime_41643704((int64_t)klass, 0).fields._dateData;
  Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !entity )
    goto LABEL_73;
  v13 = (NetworkManager_o *)Dictionary;
  monitor = (System_String_o *)entity[1].monitor;
  monitor_high = HIDWORD(entity[4].monitor);
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v16.fields._dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v16, 0);
  v18.fields._dateData = (uint64_t)&dateData;
  Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)System_DateTime__get_Day(v18, 0);
  if ( !v13 )
    goto LABEL_73;
  NetworkManager__SetSignup_41633628(v13, monitor, monitor_high, Month, (int32_t)Dictionary, 0);
  Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Dictionary )
    goto LABEL_73;
  NetworkManager__WriteSignup((NetworkManager_o *)Dictionary, 0);
  if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
  UserServantNewManager__CreateContinueDeviceSaveData(0);
  if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
  UserServantCollectionManager__CreateContinueDeviceSaveData(0);
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  ServantCommentManager__CreateContinueDeviceSaveData(0);
  if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
  UserEquipNewManager__CreateContinueDeviceSaveData(0);
  if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
  OtherUserNewManager__CreateContinueDeviceSaveData(0);
  if ( !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
  UserCommandCodeNewManager__CreateContinueDeviceSaveData(0);
  if ( !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
  UserCommandCodeCollectionManager__CreateContinueDeviceSaveData(0);
  SoundPlayerComponent__CreateContinueDeviceSaveData(0);
  if ( !WarBoardData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
  WarBoardData__CreateContinueDeviceSaveData(0);
  Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !entity )
    goto LABEL_73;
  if ( !Dictionary )
    goto LABEL_73;
  NetworkManager__SetFriendCode((NetworkManager_o *)Dictionary, (System_String_o *)entity[7].klass, 0);
  Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Dictionary )
    goto LABEL_73;
  NetworkManager__WriteFriendCode((NetworkManager_o *)Dictionary, 0);
  Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.friendCodeComponent;
  if ( !Dictionary )
    goto LABEL_73;
  FriendCodeComponent__UpdateFriendCode((FriendCodeComponent_o *)Dictionary, 0);
  if ( !TermsOfUseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TermsOfUseMenu_TypeInfo);
  TermsOfUseMenu__Save(0);
  Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
  if ( !entity )
    goto LABEL_73;
  if ( !Dictionary )
    goto LABEL_73;
  AdManager__SetUserId((AdManager_o *)Dictionary, (int64_t)entity[1].klass, 0);
  Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
  if ( !entity || !Dictionary )
    goto LABEL_73;
  AdManager__SetFriendCode((AdManager_o *)Dictionary, (System_String_o *)entity[7].klass, 0);
  ListViewSort__FirstLoginSave(0);
  if ( !ServantCommentManager__GetUiFlag(0) )
  {
    Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( !Dictionary )
      goto LABEL_73;
    AtlasManager__ReleaseUISkinDialog((AtlasManager_o *)Dictionary, 0);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)LocalizationManager__Get(
                                                                            (System_String_o *)StringLiteral_3814/*"CONTINUE_DEVICE_TAKEOVER_DECIDE_MESSAGE"*/,
                                                                            0);
  if ( !entity )
    goto LABEL_73;
  v19 = System_String__Format((System_String_o *)Dictionary, (Il2CppObject *)entity[1].monitor, 0);
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  if ( PurchaseBehaviour__IsAlreadyInitializedWithObfuscatedAccountId(0) )
  {
    if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
    PurchaseBehaviour__SetInitializedWithMismatchedObfuscatedAccountId(1, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_3817/*"CONTINUE_DEVICE_TAKEOVER_GOOGLE_PLAY_ACCOUNT_ID_ERROR_MESSAGE"*/, 0);
    v19 = System_String__Concat_64031724(v19, v20, 0);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v22 = (NotificationDialog_ClickDelegate_o *)sub_1C715FC(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(
    v22,
    (Il2CppObject *)this,
    Method_TitleRootComponent_onSelectTakeoverDecide__,
    0);
  if ( !Instance )
LABEL_73:
    sub_1C71608(Dictionary, v7);
  CommonUI__OpenNotificationDialog_31442944(
    (CommonUI_o *)Instance,
    0,
    v19,
    v22,
    -1,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    1,
    0,
    0,
    0,
    0);
  if ( !CommonUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
  CommonUI__DeleteMovieSaveKey(0);
  CommonUI__DeleteTutorialSaveKey(0);
  CommonUI__DeleteFortuneBonusSaveKey(0);
}


void TitleRootComponent__callbackLogin(TitleRootComponent_o *this, System_String_o *result, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  int32_t leftMaskPanel_high; // w21
  TerminalPramsManager_c *v8; // x0
  __int64 *v9; // x8
  UserGameEntity_o *v10; // x21
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2
  struct WarBoardDataEntity_o *WarBoardDataEntityFromResponse; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  const MethodInfo *v20; // x1

  if ( (byte_4CC9896 & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    sub_1C713B0(&WarBoardManager_TypeInfo);
    sub_1C713B0(&StringLiteral_11088/*"REQUEST_OK"*/);
    sub_1C713B0(&StringLiteral_11085/*"REQUEST_DO_SIGNUP"*/);
    sub_1C713B0(&StringLiteral_4974/*"DELETE_PASSWORD"*/);
    sub_1C713B0(&StringLiteral_4973/*"DELETE_FINISH"*/);
    sub_1C713B0(&StringLiteral_11352/*"RequestLoginFirst"*/);
    sub_1C713B0(&StringLiteral_18703/*"do_signup"*/);
    byte_4CC9896 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  CommonUI__SaveLoginResultHavingBonusDuringTutorial(Instance, 0);
  Instance = (CommonUI_o *)UserGameMaster__getSelfUserGame(0);
  if ( !Instance )
    goto LABEL_30;
  leftMaskPanel_high = HIDWORD(Instance->fields.leftMaskPanel);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CC24DD )
  {
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    byte_4CC24DD = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v8->static_fields->_PlayerGenderType_k__BackingField = leftMaskPanel_high;
  TerminalPramsManager__PlayerGenderType_SaveData(0);
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_18703/*"do_signup"*/, 0) )
  {
    Instance = (CommonUI_o *)UserGameMaster__getSelfUserGame(0);
    if ( Instance )
    {
      v10 = (UserGameEntity_o *)Instance;
      if ( UserGameEntity__HasFlag((UserGameEntity_o *)Instance, 0x800000, 0) )
      {
        TitleRootComponent__SetTakeOverAndCacheClearEnable(this, 0, v11);
        Instance = (CommonUI_o *)this->fields.myFSM;
        if ( Instance )
        {
          v9 = &StringLiteral_4973/*"DELETE_FINISH"*/;
          goto LABEL_29;
        }
      }
      else if ( UserGameEntity__HasFlag(v10, 0x400000, 0) )
      {
        TitleRootComponent__SetTakeOverAndCacheClearEnable(this, 0, v12);
        Instance = (CommonUI_o *)this->fields.myFSM;
        if ( Instance )
        {
          v9 = &StringLiteral_4974/*"DELETE_PASSWORD"*/;
          goto LABEL_29;
        }
      }
      else
      {
        TitleRootComponent__SetTakeOverAndCacheClearEnable(this, 1, v12);
        Instance = (CommonUI_o *)this->fields.myFSM;
        if ( Instance )
        {
          Instance = (CommonUI_o *)PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)Instance, 0);
          if ( Instance )
          {
            if ( System_String__Equals_64067044((System_String_o *)Instance, (System_String_o *)StringLiteral_11352/*"RequestLoginFirst"*/, 0) )
              ListViewSort__FirstLoginSave(0);
            if ( !WarBoardManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
            WarBoardDataEntityFromResponse = WarBoardManager__GetWarBoardDataEntityFromResponse(result, 0);
            this->fields.resumeWarBoardData = WarBoardDataEntityFromResponse;
            sub_1C71354(
              (GrandQuestFolderBoardItem_o *)&this->fields.resumeWarBoardData,
              (int32_t)WarBoardDataEntityFromResponse,
              v14,
              v15,
              v16,
              v17,
              v18,
              v19);
            TitleRootComponent__SetupFirstLogin(this, v20);
            Instance = (CommonUI_o *)this->fields.myFSM;
            if ( Instance )
            {
              v9 = &StringLiteral_11088/*"REQUEST_OK"*/;
              goto LABEL_29;
            }
          }
        }
      }
    }
LABEL_30:
    sub_1C71608(Instance, v6);
  }
  Instance = (CommonUI_o *)this->fields.myFSM;
  if ( !Instance )
    goto LABEL_30;
  v9 = &StringLiteral_11085/*"REQUEST_DO_SIGNUP"*/;
LABEL_29:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v9, 0);
}


void TitleRootComponent__callbackTopSignup(
        TitleRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  PlayMakerFSM_o *myFSM; // x8
  __int64 *v8; // x9

  if ( (byte_4CC9888 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_11088/*"REQUEST_OK"*/);
    sub_1C713B0(&StringLiteral_22486/*"ok"*/);
    sub_1C713B0(&StringLiteral_11086/*"REQUEST_NG"*/);
    byte_4CC9888 = 1;
  }
  v5 = System_String__op_Equality(result, (System_String_o *)StringLiteral_22486/*"ok"*/, 0);
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C71608(v5, v6);
  v8 = &StringLiteral_11088/*"REQUEST_OK"*/;
  if ( !v5 )
    v8 = &StringLiteral_11086/*"REQUEST_NG"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v8, 0);
}


void TitleRootComponent__checkConcentTermsOfUse(TitleRootComponent_o *this, const MethodInfo *method)
{
  TermsOfUseMenu_o *termsOfUseMenu; // x0
  PlayMakerFSM_o *myFSM; // x8
  __int64 *v5; // x9

  if ( (byte_4CC987F & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&StringLiteral_3708/*"CONCENT_OK"*/);
    sub_1C713B0(&StringLiteral_3707/*"CONCENT_NG"*/);
    byte_4CC987F = 1;
  }
  termsOfUseMenu = (TermsOfUseMenu_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    termsOfUseMenu = (TermsOfUseMenu_o *)BalanceConfig_TypeInfo;
  }
  if ( *(_BYTE *)(termsOfUseMenu[1].fields.m_CachedPtr + 320) )
  {
    myFSM = this->fields.myFSM;
    if ( myFSM )
    {
      v5 = &StringLiteral_3708/*"CONCENT_OK"*/;
      goto LABEL_12;
    }
LABEL_13:
    sub_1C71608(termsOfUseMenu, method);
  }
  termsOfUseMenu = this->fields.termsOfUseMenu;
  if ( !termsOfUseMenu )
    goto LABEL_13;
  termsOfUseMenu = (TermsOfUseMenu_o *)TermsOfUseMenu__IsConcent(termsOfUseMenu, 0);
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    goto LABEL_13;
  v5 = &StringLiteral_3708/*"CONCENT_OK"*/;
  if ( ((unsigned __int8)termsOfUseMenu & 1) != 0 )
    v5 = &StringLiteral_3707/*"CONCENT_NG"*/;
LABEL_12:
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v5, 0);
}


void TitleRootComponent__checkPlayMode(TitleRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  NetworkManager_c *v12; // x0
  int64_t serverTimeChkMovie; // x21
  Il2CppObject *MasterData_object; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  OpeningMovieEntity_array *EnableOpeningMovies; // x0
  OpeningMovieEntity_o **p_openingMovieEntity; // x21
  OpeningMovieEntity_array *v23; // x22
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v37; // x23
  OpeningMovieEntity_o *v38; // x1
  OpeningMovieEntity_o *v39; // x1
  int v40; // w23
  __int64 *v41; // x8
  bool IsRegisterMaterial; // w22
  TitleRootComponent_c *v43; // x8
  System_String_o *v44; // x20
  System_String_o *v45; // x21
  System_String_o *v46; // x0
  System_String_o *v47; // x22
  System_String_o *v48; // x23
  Il2CppObject *v49; // x24
  CommonConfirmDialog_ClickDelegate_o *v50; // x25
  System_String_o *v51; // x23
  OpeningMovieEntity_o *v52; // x8
  Il2CppObject *name; // x21
  System_String_o *v54; // x20
  Il2CppObject *MoviePlayTime; // x22
  Il2CppObject *AssetDownloadSizeString; // x23
  System_String_o *v57; // x0
  System_String_o *v58; // x0
  System_String_o *v59; // x0
  System_String_o *v60; // x21
  System_String_o *v61; // x22
  System_String_o *v62; // x23
  Il2CppObject *v63; // x24
  CommonConfirmDialog_ClickDelegate_o *v64; // x25

  if ( (byte_4CC9873 & 1) == 0 )
  {
    sub_1C713B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_OpeningMovieMaster___);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&OptionManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1C713B0(&TitleRootComponent_TypeInfo);
    sub_1C713B0(&Method_TitleRootComponent___c__DisplayClass81_0__checkPlayMode_b__0__);
    sub_1C713B0(&Method_TitleRootComponent___c__DisplayClass81_0__checkPlayMode_b__1__);
    sub_1C713B0(&TitleRootComponent___c__DisplayClass81_0_TypeInfo);
    sub_1C713B0(&StringLiteral_10396/*"PLAY_OPENING_CONFIRM_DECIDE"*/);
    sub_1C713B0(&StringLiteral_9636/*"OPENING_MOVIE_SKIP_CONFIRM_DIALOG_TITLE"*/);
    sub_1C713B0(&StringLiteral_10398/*"PLAY_OPENING_CONFIRM_TITLE"*/);
    sub_1C713B0(&StringLiteral_5022/*"DOWNLOAD_AND_PLAY_OPENING_CONFIRM_MSG"*/);
    sub_1C713B0(&StringLiteral_9633/*"OPENING_MOVIE_SKIP_CONFIRM_DIALOG_MESSAGE"*/);
    sub_1C713B0(&StringLiteral_9634/*"OPENING_MOVIE_SKIP_CONFIRM_DIALOG_MESSAGE_MATERIAL"*/);
    sub_1C713B0(&StringLiteral_10397/*"PLAY_OPENING_CONFIRM_MSG"*/);
    sub_1C713B0(&StringLiteral_9635/*"OPENING_MOVIE_SKIP_CONFIRM_DIALOG_SKIP"*/);
    sub_1C713B0(&StringLiteral_10399/*"PLAY_OPENING_MOVIE"*/);
    sub_1C713B0(&StringLiteral_9632/*"OPENING_MOVIE_SKIP_CONFIRM_DIALOG_CLOSE"*/);
    sub_1C713B0(&StringLiteral_1039/*".usm"*/);
    sub_1C713B0(&StringLiteral_9179/*"Movie/"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    sub_1C713B0(&StringLiteral_10395/*"PLAY_OPENING_CONFIRM_CANCEL"*/);
    sub_1C713B0(&StringLiteral_10394/*"PLAY_NORMAL_MODE"*/);
    byte_4CC9873 = 1;
  }
  v3 = sub_1C715FC(TitleRootComponent___c__DisplayClass81_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_72;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)this, v6, v7, v8, v9, v10, v11);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CC5CB9 )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC5CB9 = 1;
  }
  v12 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v12 = NetworkManager_TypeInfo;
  }
  serverTimeChkMovie = v12->static_fields->serverTimeChkMovie;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_72;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_OpeningMovieMaster___);
  *(_QWORD *)(v3 + 24) = MasterData_object;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v3 + 24), (int32_t)MasterData_object, v15, v16, v17, v18, v19, v20);
  Instance = *(DataManager_o **)(v3 + 24);
  if ( !Instance )
    goto LABEL_72;
  EnableOpeningMovies = OpeningMovieMaster__GetEnableOpeningMovies(
                          (OpeningMovieMaster_o *)Instance,
                          serverTimeChkMovie,
                          1,
                          1,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0);
  p_openingMovieEntity = &this->fields.openingMovieEntity;
  v23 = EnableOpeningMovies;
  this->fields.openingMovieEntity = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.openingMovieEntity, 0, v24, v25, v26, v27, v28, v29);
  if ( !v23 )
    goto LABEL_72;
  max_length = v23->max_length;
  if ( (int)max_length < 1 )
  {
LABEL_18:
    if ( max_length )
    {
      if ( !(_DWORD)max_length )
LABEL_71:
        sub_1C71610(Instance);
      v39 = v23->m_Items[0];
      *p_openingMovieEntity = v39;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&this->fields.openingMovieEntity,
        (int32_t)v39,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35);
    }
    v40 = 1;
  }
  else
  {
    v37 = 0;
    while ( 1 )
    {
      if ( v37 >= (unsigned int)max_length )
        goto LABEL_71;
      v38 = v23->m_Items[v37];
      *p_openingMovieEntity = v38;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&this->fields.openingMovieEntity,
        (int32_t)v38,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35);
      Instance = (DataManager_o *)OpeningMovieMaster__IsPlayedOpeningMovie_42716096(*p_openingMovieEntity, 1, 0);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        break;
      max_length = v23->max_length;
      if ( (__int64)++v37 >= (int)max_length )
        goto LABEL_18;
    }
    v40 = 0;
  }
  if ( !*p_openingMovieEntity )
    goto LABEL_27;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( (OptionManager__GetNotPlayOpeningMovie(0) & v40) == 1 )
  {
LABEL_27:
    Instance = (DataManager_o *)this->fields.myFSM;
    if ( Instance )
    {
      v41 = &StringLiteral_10394/*"PLAY_NORMAL_MODE"*/;
LABEL_29:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v41, 0);
      return;
    }
    goto LABEL_72;
  }
  Instance = (DataManager_o *)*p_openingMovieEntity;
  if ( !*p_openingMovieEntity )
    goto LABEL_72;
  IsRegisterMaterial = OpeningMovieEntity__IsRegisterMaterial((OpeningMovieEntity_o *)Instance, 0);
  v43 = TitleRootComponent_TypeInfo;
  if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
    v43 = TitleRootComponent_TypeInfo;
  }
  Instance = (DataManager_o *)UnityEngine_PlayerPrefs__GetInt_71682344(v43->static_fields->SAVE_KEY_PLAYING_MOVIE, 0);
  if ( !*p_openingMovieEntity )
    goto LABEL_72;
  if ( (_DWORD)Instance != (*p_openingMovieEntity)->fields.id )
  {
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    if ( (v40 & !OptionManager__GetNotPlayOpeningMovie(0)) == 1 )
    {
      Instance = (DataManager_o *)this->fields.myFSM;
      if ( Instance )
      {
        v41 = &StringLiteral_10399/*"PLAY_OPENING_MOVIE"*/;
        goto LABEL_29;
      }
    }
    else
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)CommonUI__maskFadein((CommonUI_o *)Instance, 0.0, 0, 0);
        if ( *p_openingMovieEntity )
        {
          v51 = System_String__Concat_64069988(
                  (System_String_o *)StringLiteral_9179/*"Movie/"*/,
                  (*p_openingMovieEntity)->fields.movieName,
                  (System_String_o *)StringLiteral_1039/*".usm"*/,
                  0);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10398/*"PLAY_OPENING_CONFIRM_TITLE"*/, 0);
          v52 = *p_openingMovieEntity;
          if ( *p_openingMovieEntity )
          {
            name = (Il2CppObject *)v52->fields.name;
            v54 = (System_String_o *)Instance;
            MoviePlayTime = (Il2CppObject *)OpeningMovieEntity__GetMoviePlayTime(v52, 0);
            Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
            if ( Instance )
            {
              if ( AssetManager__IsNeedDownload((AssetManager_o *)Instance, v51, 0) )
              {
                Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
                if ( !Instance )
                  goto LABEL_72;
                AssetDownloadSizeString = (Il2CppObject *)AssetManager__GetAssetDownloadSizeString(
                                                            (AssetManager_o *)Instance,
                                                            v51,
                                                            0);
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v57 = LocalizationManager__Get((System_String_o *)StringLiteral_5022/*"DOWNLOAD_AND_PLAY_OPENING_CONFIRM_MSG"*/, 0);
                v58 = System_String__Format_64073100(v57, name, AssetDownloadSizeString, MoviePlayTime, 0);
              }
              else
              {
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v59 = LocalizationManager__Get((System_String_o *)StringLiteral_10397/*"PLAY_OPENING_CONFIRM_MSG"*/, 0);
                v58 = System_String__Format_64073032(v59, name, MoviePlayTime, 0);
              }
              v60 = v58;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v61 = LocalizationManager__Get((System_String_o *)StringLiteral_10395/*"PLAY_OPENING_CONFIRM_CANCEL"*/, 0);
              v62 = LocalizationManager__Get((System_String_o *)StringLiteral_10396/*"PLAY_OPENING_CONFIRM_DECIDE"*/, 0);
              v63 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              v64 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C715FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
              CommonConfirmDialog_ClickDelegate___ctor(
                v64,
                (Il2CppObject *)v3,
                Method_TitleRootComponent___c__DisplayClass81_0__checkPlayMode_b__1__,
                0);
              Instance = (DataManager_o *)TitleRootComponent_TypeInfo;
              if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
              if ( v63 )
              {
                CommonUI__OpenConfirmDialog_31440624(
                  (CommonUI_o *)v63,
                  v54,
                  v60,
                  v62,
                  v61,
                  1,
                  v64,
                  TitleRootComponent_TypeInfo->static_fields->OPENING_MOVIE_CONFIRM_MESSAGE_FONT_SIZE,
                  0,
                  0,
                  0);
                return;
              }
            }
          }
        }
      }
    }
LABEL_72:
    sub_1C71608(Instance, v5);
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_72;
  CommonUI__maskFadein((CommonUI_o *)Instance, 0.0, 0, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v44 = LocalizationManager__Get((System_String_o *)StringLiteral_9636/*"OPENING_MOVIE_SKIP_CONFIRM_DIALOG_TITLE"*/, 0);
  v45 = LocalizationManager__Get((System_String_o *)StringLiteral_9633/*"OPENING_MOVIE_SKIP_CONFIRM_DIALOG_MESSAGE"*/, 0);
  if ( IsRegisterMaterial )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v46 = LocalizationManager__Get((System_String_o *)StringLiteral_9634/*"OPENING_MOVIE_SKIP_CONFIRM_DIALOG_MESSAGE_MATERIAL"*/, 0);
    v45 = System_String__Concat_64031724(v45, v46, 0);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v47 = LocalizationManager__Get((System_String_o *)StringLiteral_9632/*"OPENING_MOVIE_SKIP_CONFIRM_DIALOG_CLOSE"*/, 0);
  v48 = LocalizationManager__Get((System_String_o *)StringLiteral_9635/*"OPENING_MOVIE_SKIP_CONFIRM_DIALOG_SKIP"*/, 0);
  v49 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v50 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C715FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v50,
    (Il2CppObject *)v3,
    Method_TitleRootComponent___c__DisplayClass81_0__checkPlayMode_b__0__,
    0);
  if ( !v49 )
    goto LABEL_72;
  CommonUI__OpenConfirmDialog_31440624((CommonUI_o *)v49, v44, v45, v48, v47, 1, v50, 0, 0, 0, 0);
}


bool TitleRootComponent__checkSignup(TitleRootComponent_o *this, const MethodInfo *method)
{
  NetworkManager_o *Instance; // x0
  PlayMakerFSM_o *myFSM; // x8
  System_String_o **v5; // x9
  char v6; // w19

  if ( (byte_4CC9885 & 1) == 0 )
  {
    sub_1C713B0(&ManagerConfig_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_1C713B0(&StringLiteral_12224/*"SIGNUP_ENTRY_OK"*/);
    sub_1C713B0(&StringLiteral_12223/*"SIGNUP_ENTRY_NONE"*/);
    byte_4CC9885 = 1;
  }
  Instance = (NetworkManager_o *)ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    Instance = (NetworkManager_o *)ManagerConfig_TypeInfo;
  }
  if ( BYTE3(Instance[1].klass[1].vtable._2_GetHashCode.method) )
  {
    myFSM = this->fields.myFSM;
    if ( myFSM )
    {
      v5 = (System_String_o **)&StringLiteral_12224/*"SIGNUP_ENTRY_OK"*/;
      v6 = 1;
      goto LABEL_12;
    }
LABEL_13:
    sub_1C71608(Instance, method);
  }
  Instance = (NetworkManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (NetworkManager_o *)NetworkManager__ReadSignup(Instance, 0);
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    goto LABEL_13;
  v5 = (System_String_o **)&StringLiteral_12223/*"SIGNUP_ENTRY_NONE"*/;
  v6 = (char)Instance;
  if ( ((unsigned __int8)Instance & 1) != 0 )
    v5 = (System_String_o **)&StringLiteral_12224/*"SIGNUP_ENTRY_OK"*/;
LABEL_12:
  PlayMakerFSM__SendEvent(myFSM, *v5, 0);
  return v6 & 1;
}


bool TitleRootComponent__closeTakeoverInput(TitleRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v4; // x8
  CommonUI_o *v5; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4CC988B & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&AvalonSceneManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_TitleRootComponent__closeTakeoverInput_b__113_0__);
    byte_4CC988B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  v7 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_TitleRootComponent__closeTakeoverInput_b__113_0__, 0);
  if ( !v5 )
    sub_1C71608(v8, v9);
  CommonUI__maskFadeout(v5, 1, DEFAULT_FADE_TIME, v7, 0);
  return 1;
}


void TitleRootComponent__confirmCacheClear(TitleRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_String_o *v4; // x21
  System_String_o *v5; // x22
  System_String_o *v6; // x23
  System_String_o *v7; // x24
  CommonConfirmDialog_ClickDelegate_o *v8; // x25
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4CC98AF & 1) == 0 )
  {
    sub_1C713B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_TitleRootComponent__confirmCacheClear_b__153_0__);
    sub_1C713B0(&StringLiteral_7457/*"INIT_CACHE_CLEAR_CONFIRM_DECIDE"*/);
    sub_1C713B0(&StringLiteral_7461/*"INIT_CACHE_CLEAR_CONFIRM_TITLE_2"*/);
    sub_1C713B0(&StringLiteral_7459/*"INIT_CACHE_CLEAR_CONFIRM_MESSAGE_2"*/);
    sub_1C713B0(&StringLiteral_7456/*"INIT_CACHE_CLEAR_CONFIRM_CANCEL"*/);
    byte_4CC98AF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_7461/*"INIT_CACHE_CLEAR_CONFIRM_TITLE_2"*/, 0);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_7459/*"INIT_CACHE_CLEAR_CONFIRM_MESSAGE_2"*/, 0);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_7457/*"INIT_CACHE_CLEAR_CONFIRM_DECIDE"*/, 0);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_7456/*"INIT_CACHE_CLEAR_CONFIRM_CANCEL"*/, 0);
  v8 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C715FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v8,
    (Il2CppObject *)this,
    Method_TitleRootComponent__confirmCacheClear_b__153_0__,
    0);
  if ( !Instance )
    sub_1C71608(v9, v10);
  CommonUI__OpenConfirmDecideDlg((CommonUI_o *)Instance, v4, v5, v6, v7, v8, 0, 0.0, 15.0, 0, 0, 0, 240, 0, 1, 0, 0, 0);
}


void TitleRootComponent__endHomeRequest(TitleRootComponent_o *this, System_String_o *result, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4CC98A2 & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4CC98A2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetChangeOtherConnectMarkFromPlayerPrefs((CommonUI_o *)Instance, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
  {
    sub_1C71608(Instance, v5);
  }
  AvalonSceneManager__transitionSceneRefresh(
    (AvalonSceneManager_o *)Instance,
    38,
    2,
    (Il2CppObject *)this->fields.talkResumeInfo,
    0,
    0);
}


void TitleRootComponent__endRequestBattleContinueRequest(
        TitleRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  int32_t ContinueCount; // w0
  __int64 v7; // x1
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4CC989D & 1) == 0 )
  {
    sub_1C713B0(&BattleData_TypeInfo);
    sub_1C713B0(&StringLiteral_22486/*"ok"*/);
    sub_1C713B0(&StringLiteral_6971/*"GO_BATTLE"*/);
    byte_4CC989D = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_22486/*"ok"*/, 0) )
  {
    if ( !BattleData_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
    BattleData__setContinueBattleFlg(0, 1, 0);
    BattleData__setCommandSpellIdBattle(0, 1, 0);
    BattleData__SaveContinueItemId(0, 1, 0);
    ContinueCount = BattleData__loadContinueCount(0);
    BattleData__saveContinueCount(ContinueCount + 1, 0);
    myFSM = this->fields.myFSM;
    if ( !myFSM )
      sub_1C71608(0, v7);
    PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_6971/*"GO_BATTLE"*/, 0);
  }
  else
  {
    TitleRootComponent__ConfirmBattleContinueResume(this, v5);
  }
}


void TitleRootComponent__endRequestBattleResumeRequest(
        TitleRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  bool v5; // w20
  const MethodInfo *v6; // x1
  struct WarBoardDataEntity_o *resumeWarBoardData; // x8
  const MethodInfo *v8; // x1
  PlayMakerFSM_o *myFSM; // x0
  const MethodInfo *v10; // x1
  __int64 *v11; // x8

  if ( (byte_4CC989B & 1) == 0 )
  {
    sub_1C713B0(&BattleData_TypeInfo);
    sub_1C713B0(&StringLiteral_22316/*"ng"*/);
    sub_1C713B0(&StringLiteral_6971/*"GO_BATTLE"*/);
    sub_1C713B0(&StringLiteral_6975/*"GO_TERMINAL"*/);
    byte_4CC989B = 1;
  }
  v5 = System_String__op_Equality(result, (System_String_o *)StringLiteral_22316/*"ng"*/, 0);
  if ( !BattleData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
    if ( v5 )
      goto LABEL_5;
LABEL_12:
    if ( BattleData__getContinueBattleFlg(0) >= 1 )
    {
      TitleRootComponent__battleContinueRequest(this, v8);
      return;
    }
    myFSM = this->fields.myFSM;
    if ( myFSM )
    {
      v11 = &StringLiteral_6971/*"GO_BATTLE"*/;
      goto LABEL_18;
    }
LABEL_19:
    sub_1C71608(myFSM, v8);
  }
  if ( !v5 )
    goto LABEL_12;
LABEL_5:
  BattleData__setContinueBattleFlg(0, 1, 0);
  resumeWarBoardData = this->fields.resumeWarBoardData;
  if ( resumeWarBoardData && resumeWarBoardData->fields.progressType == 2 )
  {
    TitleRootComponent__ReleaseTitleAssets(this, v6);
    myFSM = this->fields.myFSM;
    if ( !myFSM )
      goto LABEL_19;
    PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_6975/*"GO_TERMINAL"*/, 0);
  }
  if ( !TitleRootComponent__CheckAndTransitionBattleTalk(this, v6) )
  {
    TitleRootComponent__ReleaseTitleAssets(this, v10);
    myFSM = this->fields.myFSM;
    if ( myFSM )
    {
      v11 = &StringLiteral_6975/*"GO_TERMINAL"*/;
LABEL_18:
      PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v11, 0);
      return;
    }
    goto LABEL_19;
  }
}


void TitleRootComponent__endRequestBattleUseItemRequest(
        TitleRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  __int64 v6; // x1
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4CC989E & 1) == 0 )
  {
    sub_1C713B0(&BattleData_TypeInfo);
    sub_1C713B0(&StringLiteral_22316/*"ng"*/);
    sub_1C713B0(&StringLiteral_6971/*"GO_BATTLE"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC989E = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_22316/*"ng"*/, 0) )
  {
    TitleRootComponent__ConfirmBattleContinueResume(this, v5);
  }
  else
  {
    if ( !BattleData_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
    BattleData__SaveBattleUseItemParameter((System_String_o *)StringLiteral_1/*""*/, 0, 0);
    BattleData__setContinueBattleFlg(0, 1, 0);
    myFSM = this->fields.myFSM;
    if ( !myFSM )
      sub_1C71608(0, v6);
    PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_6971/*"GO_BATTLE"*/, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void TitleRootComponent__endTermsOfUseInput(TitleRootComponent_o *this, bool result, const MethodInfo *method)
{
  TitleRootComponent_o *v4; // x19
  TermsOfUseMenu_o *termsOfUseMenu; // x21
  System_Action_o *v6; // x20
  Il2CppObject *Instance; // x20
  System_String_o *v8; // x21
  System_String_o *v9; // x22
  System_Action_o *v10; // x23

  v4 = this;
  if ( (byte_4CC9882 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_TitleRootComponent_endTermsOfUseNg__);
    sub_1C713B0(&Method_TitleRootComponent_endTermsOfUseOk__);
    sub_1C713B0(&StringLiteral_13384/*"TERMS_OF_USE_DENIAL_TITLE"*/);
    this = (TitleRootComponent_o *)sub_1C713B0(&StringLiteral_13383/*"TERMS_OF_USE_DENIAL_MESSAGE"*/);
    byte_4CC9882 = 1;
  }
  termsOfUseMenu = v4->fields.termsOfUseMenu;
  if ( result )
  {
    v6 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)v4, Method_TitleRootComponent_endTermsOfUseOk__, 0);
    if ( termsOfUseMenu )
    {
      TermsOfUseMenu__Close_37951096(termsOfUseMenu, v6, 0);
      return;
    }
LABEL_11:
    sub_1C71608(this, result);
  }
  if ( !termsOfUseMenu )
    goto LABEL_11;
  TermsOfUseMenu__Close(v4->fields.termsOfUseMenu, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_13384/*"TERMS_OF_USE_DENIAL_TITLE"*/, 0);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_13383/*"TERMS_OF_USE_DENIAL_MESSAGE"*/, 0);
  v10 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)v4, Method_TitleRootComponent_endTermsOfUseNg__, 0);
  if ( !Instance )
    goto LABEL_11;
  CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v8, v9, v10, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0.0, 0, 0);
}


void TitleRootComponent__endTermsOfUseNg(TitleRootComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4CC9884 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_3707/*"CONCENT_NG"*/);
    byte_4CC9884 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C71608(0, method);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_3707/*"CONCENT_NG"*/, 0);
}


void TitleRootComponent__endTermsOfUseOk(TitleRootComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4CC9883 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_3708/*"CONCENT_OK"*/);
    byte_4CC9883 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C71608(0, method);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_3708/*"CONCENT_OK"*/, 0);
}


void TitleRootComponent__endTitleFade(TitleRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *v5; // x20
  System_Action_o *v6; // x21

  if ( (byte_4CC987E & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_TitleRootComponent__endTitleFade_b__100_0__);
    sub_1C713B0(&TouchEffectManager_TypeInfo);
    byte_4CC987E = 1;
  }
  if ( this->fields.storyProgress == 3 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_10;
    CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0);
    if ( !TouchEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo);
    TouchEffectManager__SetBlock(0, 0);
  }
  v5 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_TitleRootComponent__endTitleFade_b__100_0__, 0);
  if ( !v5 )
LABEL_10:
    sub_1C71608(Instance, v4);
  CommonUI__maskFadein((CommonUI_o *)v5, 0.1, v6, 0);
}


// local variable allocation has failed, the output may be wrong!
void TitleRootComponent__onChangeTakeoverInput(TitleRootComponent_o *this, const MethodInfo *method)
{
  UILineInput_o *takeoverKeyInput; // x0
  UILineInput_o *v4; // x20
  _BOOL4 v5; // w20
  float v6; // s0 OVERLAPPED
  float v7; // s3
  float v8; // s1
  float v9; // s2

  takeoverKeyInput = this->fields.takeoverKeyInput;
  if ( !takeoverKeyInput )
    goto LABEL_14;
  takeoverKeyInput = (UILineInput_o *)UILineInput__GetText(takeoverKeyInput, 0);
  if ( !this->fields.takeoverPasswardInput )
    goto LABEL_14;
  v4 = takeoverKeyInput;
  takeoverKeyInput = (UILineInput_o *)UILineInput__GetText(this->fields.takeoverPasswardInput, 0);
  if ( !v4 )
    goto LABEL_14;
  if ( SLODWORD(v4->fields.m_CachedPtr) >= 10 )
  {
    if ( !takeoverKeyInput )
      goto LABEL_14;
    v5 = SLODWORD(takeoverKeyInput->fields.m_CachedPtr) > 3;
  }
  else
  {
    v5 = 0;
  }
  takeoverKeyInput = (UILineInput_o *)this->fields.takeoverDecide;
  if ( !takeoverKeyInput )
    goto LABEL_14;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)takeoverKeyInput, v5, 0);
  takeoverKeyInput = (UILineInput_o *)this->fields.takeoverDecide;
  if ( !takeoverKeyInput )
    goto LABEL_14;
  ((void (__fastcall *)(UILineInput_o *, _BOOL4, const char *))takeoverKeyInput->klass[1]._1.name)(
    takeoverKeyInput,
    v5,
    takeoverKeyInput->klass[1]._1.namespaze);
  takeoverKeyInput = (UILineInput_o *)this->fields.takeoverDecide;
  v6 = 0.5;
  if ( v5 )
    v6 = 1.0;
  if ( !takeoverKeyInput )
LABEL_14:
    sub_1C71608(takeoverKeyInput, method);
  v7 = 1.0;
  v8 = v6;
  v9 = v6;
  UIButtonColor__set_defaultColor((UIButtonColor_o *)takeoverKeyInput, *(UnityEngine_Color_o *)&v6, 0);
}


void TitleRootComponent__onClickTakeoverCancel(TitleRootComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  __int64 v6; // x1
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4CC988F & 1) == 0 )
  {
    sub_1C713B0(&Method_TitleRootComponent_onClickTakeoverCancel__);
    sub_1C713B0(&StringLiteral_13337/*"TAKEOVER_CANCEL"*/);
    byte_4CC988F = 1;
  }
  v3 = Method_TitleRootComponent_onClickTakeoverCancel__;
  if ( (*((_BYTE *)Method_TitleRootComponent_onClickTakeoverCancel__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C713C8(Method_TitleRootComponent_onClickTakeoverCancel__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  TitleRootComponent__closeTakeoverInput(this, v5);
  UnityEngine_Input__set_imeCompositionMode(0, 0);
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C71608(0, v6);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_13337/*"TAKEOVER_CANCEL"*/, 0);
}


void TitleRootComponent__onClickTakeoverInput(TitleRootComponent_o *this, const MethodInfo *method)
{
  struct UIButton_o *takeoverDecide; // x0
  char v4; // w0
  _QWORD *v5; // x8
  char v6; // w20
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4CC988C & 1) == 0 )
  {
    sub_1C713B0(&Method_TitleRootComponent_onClickTakeoverInput__);
    byte_4CC988C = 1;
  }
  takeoverDecide = this->fields.takeoverDecide;
  if ( !takeoverDecide )
    sub_1C71608(0, method);
  v4 = ((__int64 (__fastcall *)(struct UIButton_o *, const MethodInfo *))takeoverDecide->klass->vtable._4_get_isEnabled.methodPtr)(
         takeoverDecide,
         takeoverDecide->klass->vtable._4_get_isEnabled.method);
  v5 = Method_TitleRootComponent_onClickTakeoverInput__;
  v6 = v4;
  if ( (*((_BYTE *)Method_TitleRootComponent_onClickTakeoverInput__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C713C8(Method_TitleRootComponent_onClickTakeoverInput__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C71394(v5, v5[4]);
  if ( (v6 & 1) != 0 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v7, 8, 0, 0);
    UnityEngine_Input__set_imeCompositionMode(0, 0);
    TitleRootComponent__requestContinueInput(this, v8);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v7, 2, 0, 0);
  }
}


void TitleRootComponent__onCloseTakeoverDecide(TitleRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  AvalonSceneManager_c *v4; // x8
  CommonUI_o *v5; // x19
  TitleRootComponent___c_c *v6; // x0
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__123_0; // x20
  Il2CppObject *v9; // x21
  struct TitleRootComponent___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4CC9894 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&AvalonSceneManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_TitleRootComponent___c__onCloseTakeoverDecide_b__123_0__);
    sub_1C713B0(&TitleRootComponent___c_TypeInfo);
    byte_4CC9894 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  v6 = TitleRootComponent___c_TypeInfo;
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  if ( !TitleRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleRootComponent___c_TypeInfo);
    v6 = TitleRootComponent___c_TypeInfo;
  }
  _9__123_0 = v6->static_fields->__9__123_0;
  if ( !_9__123_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = TitleRootComponent___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__123_0 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(_9__123_0, v9, Method_TitleRootComponent___c__onCloseTakeoverDecide_b__123_0__, 0);
    static_fields = TitleRootComponent___c_TypeInfo->static_fields;
    static_fields->__9__123_0 = _9__123_0;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__123_0,
      (int32_t)_9__123_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  if ( !v5 )
    sub_1C71608(v6, v3);
  CommonUI__maskFadeout(v5, 1, DEFAULT_FADE_TIME, _9__123_0, 0);
}


void TitleRootComponent__onEndWebView(TitleRootComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4CC9898 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_3510/*"CLOSE_NOTICE"*/);
    byte_4CC9898 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C71608(0, method);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_3510/*"CLOSE_NOTICE"*/, 0);
}


void TitleRootComponent__onSelectTakeoverDecide(TitleRootComponent_o *this, bool isDecide, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4CC9893 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_TitleRootComponent_onCloseTakeoverDecide__);
    byte_4CC9893 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_TitleRootComponent_onCloseTakeoverDecide__, 0);
  if ( !Instance )
    sub_1C71608(v6, v7);
  CommonUI__CloseNotificationDialog_31443416((CommonUI_o *)Instance, v5, 0);
}


// attributes: thunk
void TitleRootComponent__openBannerWebVew(TitleRootComponent_o *this, const MethodInfo *method)
{
  TitleRootComponent__onEndWebView(this, method);
}


bool TitleRootComponent__openTakeoverInput(TitleRootComponent_o *this, const MethodInfo *method)
{
  void *friendCodeComponent; // x0
  UIInput_o *v4; // x21
  UIInput_o *v5; // x20
  System_String_o *v6; // x0
  const MethodInfo *v7; // x1
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v9; // x8
  CommonUI_o *v10; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v12; // x20
  Il2CppObject *v13; // x21
  struct TitleRootComponent___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7

  if ( (byte_4CC988A & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&AvalonSceneManager_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_UIInput___);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_TitleRootComponent___c__openTakeoverInput_b__112_0__);
    sub_1C713B0(&TitleRootComponent___c_TypeInfo);
    sub_1C713B0(&StringLiteral_3815/*"CONTINUE_DEVICE_TAKEOVER_EXPLANATIOIN1"*/);
    sub_1C713B0(&StringLiteral_3816/*"CONTINUE_DEVICE_TAKEOVER_EXPLANATIOIN2"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC988A = 1;
  }
  friendCodeComponent = this->fields.friendCodeComponent;
  if ( !friendCodeComponent )
    goto LABEL_23;
  FriendCodeComponent__SetTouchEnable((FriendCodeComponent_o *)friendCodeComponent, 0, 0);
  friendCodeComponent = this->fields.takeoverObj;
  if ( !friendCodeComponent )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)friendCodeComponent, 1, 0);
  friendCodeComponent = this->fields.takeoverKeyInput;
  if ( !friendCodeComponent )
    goto LABEL_23;
  UILineInput__SetInputEnable((UILineInput_o *)friendCodeComponent, 1, 0);
  friendCodeComponent = this->fields.takeoverPasswardInput;
  if ( !friendCodeComponent )
    goto LABEL_23;
  UILineInput__SetInputEnable((UILineInput_o *)friendCodeComponent, 1, 0);
  friendCodeComponent = this->fields.takeoverKeyInput;
  if ( !friendCodeComponent )
    goto LABEL_23;
  friendCodeComponent = UnityEngine_Component__GetComponent_object_(
                          (UnityEngine_Component_o *)friendCodeComponent,
                          (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_UIInput___);
  if ( !this->fields.takeoverPasswardInput )
    goto LABEL_23;
  v4 = (UIInput_o *)friendCodeComponent;
  friendCodeComponent = UnityEngine_Component__GetComponent_object_(
                          (UnityEngine_Component_o *)this->fields.takeoverPasswardInput,
                          (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_UIInput___);
  if ( !friendCodeComponent )
    goto LABEL_23;
  v5 = (UIInput_o *)friendCodeComponent;
  UIInput__set_value((UIInput_o *)friendCodeComponent, (System_String_o *)StringLiteral_1/*""*/, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  friendCodeComponent = LocalizationManager__Get((System_String_o *)StringLiteral_3815/*"CONTINUE_DEVICE_TAKEOVER_EXPLANATIOIN1"*/, 0);
  if ( !v4 )
    goto LABEL_23;
  UIInput__set_defaultText(v4, (System_String_o *)friendCodeComponent, 0);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_3816/*"CONTINUE_DEVICE_TAKEOVER_EXPLANATIOIN2"*/, 0);
  UIInput__set_defaultText(v5, v6, 0);
  TitleRootComponent__onChangeTakeoverInput(this, v7);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = AvalonSceneManager_TypeInfo;
  v10 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v9 = AvalonSceneManager_TypeInfo;
  }
  friendCodeComponent = TitleRootComponent___c_TypeInfo;
  DEFAULT_FADE_TIME = v9->static_fields->DEFAULT_FADE_TIME;
  if ( !TitleRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleRootComponent___c_TypeInfo);
    friendCodeComponent = TitleRootComponent___c_TypeInfo;
  }
  v12 = *(System_Action_o **)(*((_QWORD *)friendCodeComponent + 23) + 8LL);
  if ( !v12 )
  {
    if ( !*((_DWORD *)friendCodeComponent + 56) )
    {
      j_il2cpp_runtime_class_init_0(friendCodeComponent);
      friendCodeComponent = TitleRootComponent___c_TypeInfo;
    }
    v13 = (Il2CppObject *)**((_QWORD **)friendCodeComponent + 23);
    v12 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(v12, v13, Method_TitleRootComponent___c__openTakeoverInput_b__112_0__, 0);
    static_fields = TitleRootComponent___c_TypeInfo->static_fields;
    static_fields->__9__112_0 = v12;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__112_0, (int32_t)v12, v15, v16, v17, v18, v19, v20);
  }
  if ( !v10 )
LABEL_23:
    sub_1C71608(friendCodeComponent, method);
  CommonUI__maskFadein(v10, DEFAULT_FADE_TIME, v12, 0);
  return 1;
}


void TitleRootComponent__requestContinueInput(TitleRootComponent_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  System_String_o *Request_object; // x0
  __int64 v5; // x1
  ContinueInputRequest_o *v6; // x20
  UILineInput_o *takeoverPasswardInput; // x8
  System_String_o *v8; // x19

  if ( (byte_4CC988D & 1) == 0 )
  {
    sub_1C713B0(&Method_NetworkManager_getRequest_ContinueInputRequest___);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C713B0(&Method_TitleRootComponent_callbackContinueInput__);
    byte_4CC988D = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_1C715FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_TitleRootComponent_callbackContinueInput__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = (System_String_o *)NetworkManager__getRequest_object_(
                                        v3,
                                        (const MethodInfo_31D69E8 *)Method_NetworkManager_getRequest_ContinueInputRequest___);
  if ( !this->fields.takeoverKeyInput
    || (v6 = (ContinueInputRequest_o *)Request_object,
        Request_object = UILineInput__GetText(this->fields.takeoverKeyInput, 0),
        (takeoverPasswardInput = this->fields.takeoverPasswardInput) == 0)
    || (v8 = Request_object, Request_object = UILineInput__GetText(takeoverPasswardInput, 0), !v6) )
  {
    sub_1C71608(Request_object, v5);
  }
  ContinueInputRequest__beginRequest(v6, v8, Request_object, 0);
}


void TitleRootComponent__requestLogin(TitleRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  NetworkManager_LoginCallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4CC9895 & 1) == 0 )
  {
    sub_1C713B0(&NetworkManager_LoginCallbackFunc_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_1C713B0(&Method_TitleRootComponent_callbackLogin__);
    byte_4CC9895 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  v4 = (NetworkManager_LoginCallbackFunc_o *)sub_1C715FC(NetworkManager_LoginCallbackFunc_TypeInfo);
  NetworkManager_LoginCallbackFunc___ctor(v4, (Il2CppObject *)this, Method_TitleRootComponent_callbackLogin__, 0);
  if ( !Instance )
    sub_1C71608(v5, v6);
  NetworkManager__RequestLogin((NetworkManager_o *)Instance, v4, 1, 0);
}


void TitleRootComponent__requestSignup(TitleRootComponent_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  Il2CppObject *Request_object; // x0
  __int64 v5; // x1

  if ( (byte_4CC9887 & 1) == 0 )
  {
    sub_1C713B0(&Method_NetworkManager_getRequest_TopSignupRequest___);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C713B0(&Method_TitleRootComponent_callbackTopSignup__);
    byte_4CC9887 = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_1C715FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v3, (Il2CppObject *)this, Method_TitleRootComponent_callbackTopSignup__, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v3,
                     (const MethodInfo_31D69E8 *)Method_NetworkManager_getRequest_TopSignupRequest___);
  if ( !Request_object )
    sub_1C71608(0, v5);
  RequestBase__beginRequest((RequestBase_o *)Request_object, 0);
}


void TitleRootComponent__requestTakeoverDecide(TitleRootComponent_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  System_String_o *Request_object; // x0
  __int64 v5; // x1
  ContinueDecideRequest_o *v6; // x20
  UILineInput_o *takeoverPasswardInput; // x8
  System_String_o *v8; // x19

  if ( (byte_4CC9890 & 1) == 0 )
  {
    sub_1C713B0(&Method_NetworkManager_getRequest_ContinueDecideRequest___);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C713B0(&Method_TitleRootComponent_callbackInputDecide__);
    byte_4CC9890 = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_1C715FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v3, (Il2CppObject *)this, Method_TitleRootComponent_callbackInputDecide__, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = (System_String_o *)NetworkManager__getRequest_object_(
                                        v3,
                                        (const MethodInfo_31D69E8 *)Method_NetworkManager_getRequest_ContinueDecideRequest___);
  if ( !this->fields.takeoverKeyInput
    || (v6 = (ContinueDecideRequest_o *)Request_object,
        Request_object = UILineInput__GetText(this->fields.takeoverKeyInput, 0),
        (takeoverPasswardInput = this->fields.takeoverPasswardInput) == 0)
    || (v8 = Request_object, Request_object = UILineInput__GetText(takeoverPasswardInput, 0), !v6) )
  {
    sub_1C71608(Request_object, v5);
  }
  ContinueDecideRequest__beginRequestCode(v6, v8, Request_object, 0);
}


bool TitleRootComponent__requestTutorialCancel(TitleRootComponent_o *this, const MethodInfo *method)
{
  return 1;
}


void TitleRootComponent__setAssetSlowLoadLabel(TitleRootComponent_o *this, const MethodInfo *method)
{
  ;
}


bool TitleRootComponent__startDownLoad(TitleRootComponent_o *this, const MethodInfo *method)
{
  return 1;
}


bool TitleRootComponent__startSignupInput(TitleRootComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4CC9886 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_12225/*"SIGNUP_INPUT_OK"*/);
    byte_4CC9886 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C71608(0, method);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_12225/*"SIGNUP_INPUT_OK"*/, 0);
  return 1;
}


bool TitleRootComponent__startTakeoverInput(TitleRootComponent_o *this, const MethodInfo *method)
{
  UILabel_o *takeOverDetailLb; // x20
  System_String_o *takeoverObj; // x0
  __int64 v5; // x1
  UILabel_o *takteOverIdLb; // x20
  UILabel_o *takeOverPwLb; // x20
  const MethodInfo *v8; // x1
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v10; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v12; // x21

  if ( (byte_4CC9889 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&AvalonSceneManager_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_TitleRootComponent__startTakeoverInput_b__111_0__);
    sub_1C713B0(&StringLiteral_13342/*"TAKEOVER_PW_TXT"*/);
    sub_1C713B0(&StringLiteral_13338/*"TAKEOVER_DETAIL_TXT"*/);
    sub_1C713B0(&StringLiteral_13339/*"TAKEOVER_ID_TXT"*/);
    byte_4CC9889 = 1;
  }
  takeOverDetailLb = this->fields.takeOverDetailLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  takeoverObj = LocalizationManager__Get((System_String_o *)StringLiteral_13338/*"TAKEOVER_DETAIL_TXT"*/, 0);
  if ( !takeOverDetailLb )
    goto LABEL_16;
  UILabel__set_text(takeOverDetailLb, takeoverObj, 0);
  takteOverIdLb = this->fields.takteOverIdLb;
  takeoverObj = LocalizationManager__Get((System_String_o *)StringLiteral_13339/*"TAKEOVER_ID_TXT"*/, 0);
  if ( !takteOverIdLb )
    goto LABEL_16;
  UILabel__set_text(takteOverIdLb, takeoverObj, 0);
  takeOverPwLb = this->fields.takeOverPwLb;
  takeoverObj = LocalizationManager__Get((System_String_o *)StringLiteral_13342/*"TAKEOVER_PW_TXT"*/, 0);
  if ( !takeOverPwLb )
    goto LABEL_16;
  UILabel__set_text(takeOverPwLb, takeoverObj, 0);
  UnityEngine_Input__set_imeCompositionMode(1, 0);
  takeoverObj = (System_String_o *)this->fields.takeoverObj;
  if ( !takeoverObj )
    goto LABEL_16;
  if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)takeoverObj, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v10 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v10->static_fields->DEFAULT_FADE_TIME;
    v12 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(v12, (Il2CppObject *)this, Method_TitleRootComponent__startTakeoverInput_b__111_0__, 0);
    if ( Instance )
    {
      CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v12, 0);
      return 1;
    }
LABEL_16:
    sub_1C71608(takeoverObj, v5);
  }
  TitleRootComponent__openTakeoverInput(this, v8);
  return 1;
}


bool TitleRootComponent__startTermsOfUseInput(TitleRootComponent_o *this, const MethodInfo *method)
{
  TermsOfUseMenu_o *termsOfUseMenu; // x20
  TermsOfUseMenu_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4CC9881 & 1) == 0 )
  {
    sub_1C713B0(&TermsOfUseMenu_CallbackFunc_TypeInfo);
    sub_1C713B0(&Method_TitleRootComponent_endTermsOfUseInput__);
    byte_4CC9881 = 1;
  }
  termsOfUseMenu = this->fields.termsOfUseMenu;
  v4 = (TermsOfUseMenu_CallbackFunc_o *)sub_1C715FC(TermsOfUseMenu_CallbackFunc_TypeInfo);
  TermsOfUseMenu_CallbackFunc___ctor(v4, (Il2CppObject *)this, Method_TitleRootComponent_endTermsOfUseInput__, 0);
  if ( !termsOfUseMenu )
    sub_1C71608(v5, v6);
  TermsOfUseMenu__Open(termsOfUseMenu, v4, 0);
  return 1;
}


void TitleRootComponent__startTitle(TitleRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  UnityEngine_GameObject_o *titleRootObjet; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  TitleRootComponent_c *v12; // x0
  TitleRootComponent_c *v13; // x0
  TitleRootComponent_o *v14; // x0
  const MethodInfo *v15; // x1
  System_Collections_IEnumerator_o *NoticeUpdate; // x0
  ManagerConfig_c *v17; // x0
  int32_t storyProgress; // w22
  UILabel_o *appVerLb; // x21
  System_String_o *v20; // x0
  ManagerConfig_c *v21; // x8
  System_String_o *v22; // x22
  UILabel_o *cpRghtLb; // x21
  System_String_o *v24; // x0
  ManagerConfig_c *v25; // x8
  System_String_o *v26; // x22
  UILabel_o *v27; // x21
  const MethodInfo *v28; // x1
  TitleRootComponent_c *v29; // x0
  System_String_o *PART2_CHAPTER6_EPILOGUE_BG_MOVIE_NAME; // x19
  System_String_o *MoviePath; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  System_String_o *v38; // x19
  AssetLoader_LoadEndDataHandler_o *v39; // x21
  UnityEngine_Color_o v40; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v41; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v42; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v43; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CC987A & 1) == 0 )
  {
    sub_1C713B0(&AssetManager_TypeInfo);
    sub_1C713B0(&CommonUI_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_1C713B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&ManagementManager_TypeInfo);
    sub_1C713B0(&ManagerConfig_TypeInfo);
    sub_1C713B0(&TitleRootComponent_TypeInfo);
    sub_1C713B0(&Method_TitleRootComponent___c__DisplayClass96_0__startTitle_b__0__);
    sub_1C713B0(&TitleRootComponent___c__DisplayClass96_0_TypeInfo);
    sub_1C713B0(&UserDeleteReservationEntity_TypeInfo);
    sub_1C713B0(&StringLiteral_2015/*"APP_VERSION"*/);
    sub_1C713B0(&StringLiteral_13459/*"TITLE_COPYRIGHT_BASE"*/);
    sub_1C713B0(&StringLiteral_2016/*"APP_VERSION_BASE"*/);
    sub_1C713B0(&StringLiteral_13458/*"TITLE_COPYRIGHT"*/);
    byte_4CC987A = 1;
  }
  v3 = sub_1C715FC(TitleRootComponent___c__DisplayClass96_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_53;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)this, v6, v7, v8, v9, v10, v11);
  v12 = TitleRootComponent_TypeInfo;
  if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
    v12 = TitleRootComponent_TypeInfo;
  }
  if ( UnityEngine_PlayerPrefs__GetInt_71682344(v12->static_fields->SAVE_KEY_PLAYING_MOVIE, 0) )
  {
    v13 = TitleRootComponent_TypeInfo;
    if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
      v13 = TitleRootComponent_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v13->static_fields->SAVE_KEY_PLAYING_MOVIE, 0, 0);
  }
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
  ManagementManager__CompletionStartup(0);
  titleRootObjet = this->fields.titleRootObjet;
  if ( !titleRootObjet )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive(titleRootObjet, 1, 0);
  NoticeUpdate = TitleRootComponent__GetNoticeUpdate(v14, v15);
  UnityEngine_MonoBehaviour__StartCoroutine_71709800((UnityEngine_MonoBehaviour_o *)this, NoticeUpdate, 0);
  v17 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v17 = ManagerConfig_TypeInfo;
  }
  if ( v17->static_fields->UseMock )
  {
    titleRootObjet = (UnityEngine_GameObject_o *)this->fields.takeoverBtn;
    if ( !titleRootObjet )
      goto LABEL_53;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, const char *))titleRootObjet->klass[1]._1.name)(
      titleRootObjet,
      0,
      titleRootObjet->klass[1]._1.namespaze);
  }
  storyProgress = this->fields.storyProgress;
  appVerLb = this->fields.appVerLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( storyProgress == 3 )
  {
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_2016/*"APP_VERSION_BASE"*/, 0);
    v21 = ManagerConfig_TypeInfo;
    v22 = v20;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v21 = ManagerConfig_TypeInfo;
    }
    titleRootObjet = (UnityEngine_GameObject_o *)System_String__Format(
                                                   v22,
                                                   (Il2CppObject *)v21->static_fields->AppVer,
                                                   0);
    if ( !appVerLb )
      goto LABEL_53;
    UILabel__set_text(appVerLb, (System_String_o *)titleRootObjet, 0);
    titleRootObjet = (UnityEngine_GameObject_o *)this->fields.appVerLb;
    if ( !titleRootObjet )
      goto LABEL_53;
    v40.fields.r = 1.0;
    v40.fields.g = 1.0;
    v40.fields.b = 1.0;
    v40.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)titleRootObjet, v40, 0);
    titleRootObjet = (UnityEngine_GameObject_o *)this->fields.appVerLb;
    if ( !titleRootObjet )
      goto LABEL_53;
    UILabel__set_effectStyle((UILabel_o *)titleRootObjet, 2, 0);
    titleRootObjet = (UnityEngine_GameObject_o *)this->fields.appVerLb;
    if ( !titleRootObjet )
      goto LABEL_53;
    v41.fields.a = 1.0;
    v41.fields.r = 0.0078431;
    v41.fields.g = 0.45098;
    v41.fields.b = 0.84706;
    UILabel__set_effectColor((UILabel_o *)titleRootObjet, v41, 0);
    cpRghtLb = this->fields.cpRghtLb;
    titleRootObjet = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13459/*"TITLE_COPYRIGHT_BASE"*/, 0);
    if ( !cpRghtLb )
      goto LABEL_53;
    UILabel__set_text(cpRghtLb, (System_String_o *)titleRootObjet, 0);
    titleRootObjet = (UnityEngine_GameObject_o *)this->fields.cpRghtLb;
    if ( !titleRootObjet )
      goto LABEL_53;
    v42.fields.r = 1.0;
    v42.fields.g = 1.0;
    v42.fields.b = 1.0;
    v42.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)titleRootObjet, v42, 0);
    titleRootObjet = (UnityEngine_GameObject_o *)this->fields.cpRghtLb;
    if ( !titleRootObjet )
      goto LABEL_53;
    UILabel__set_effectStyle((UILabel_o *)titleRootObjet, 2, 0);
    titleRootObjet = (UnityEngine_GameObject_o *)this->fields.cpRghtLb;
    if ( !titleRootObjet )
      goto LABEL_53;
    v43.fields.a = 1.0;
    v43.fields.r = 0.0078431;
    v43.fields.g = 0.45098;
    v43.fields.b = 0.84706;
    UILabel__set_effectColor((UILabel_o *)titleRootObjet, v43, 0);
  }
  else
  {
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_2015/*"APP_VERSION"*/, 0);
    v25 = ManagerConfig_TypeInfo;
    v26 = v24;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v25 = ManagerConfig_TypeInfo;
    }
    titleRootObjet = (UnityEngine_GameObject_o *)System_String__Format(
                                                   v26,
                                                   (Il2CppObject *)v25->static_fields->AppVer,
                                                   0);
    if ( !appVerLb )
      goto LABEL_53;
    UILabel__set_text(appVerLb, (System_String_o *)titleRootObjet, 0);
    v27 = this->fields.cpRghtLb;
    titleRootObjet = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13458/*"TITLE_COPYRIGHT"*/, 0);
    if ( !v27 )
      goto LABEL_53;
    UILabel__set_text(v27, (System_String_o *)titleRootObjet, 0);
  }
  if ( !UserDeleteReservationEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserDeleteReservationEntity_TypeInfo);
  if ( UserDeleteReservationEntity__IsUserDeleteFlag(0) )
  {
    titleRootObjet = (UnityEngine_GameObject_o *)this->fields.takeoverBtn;
    if ( titleRootObjet )
    {
      ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, const char *))titleRootObjet->klass[1]._1.name)(
        titleRootObjet,
        0,
        titleRootObjet->klass[1]._1.namespaze);
      titleRootObjet = (UnityEngine_GameObject_o *)this->fields.cacheClearBtn;
      if ( titleRootObjet )
      {
        ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, const char *))titleRootObjet->klass[1]._1.name)(
          titleRootObjet,
          0,
          titleRootObjet->klass[1]._1.namespaze);
        goto LABEL_43;
      }
    }
LABEL_53:
    sub_1C71608(titleRootObjet, v5);
  }
LABEL_43:
  titleRootObjet = this->fields.titleRootObjet;
  if ( !titleRootObjet )
    goto LABEL_53;
  UnityEngine_GameObject__GetComponent_object_(
    titleRootObjet,
    (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  if ( this->fields.storyProgress == 3 )
  {
    v29 = TitleRootComponent_TypeInfo;
    if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
      v29 = TitleRootComponent_TypeInfo;
    }
    PART2_CHAPTER6_EPILOGUE_BG_MOVIE_NAME = v29->static_fields->PART2_CHAPTER6_EPILOGUE_BG_MOVIE_NAME;
    if ( !CommonUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
    MoviePath = CommonUI__CreateMoviePath(PART2_CHAPTER6_EPILOGUE_BG_MOVIE_NAME, 0);
    *(_QWORD *)(v3 + 24) = MoviePath;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v3 + 24), (int32_t)MoviePath, v32, v33, v34, v35, v36, v37);
    v38 = *(System_String_o **)(v3 + 24);
    v39 = (AssetLoader_LoadEndDataHandler_o *)sub_1C715FC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v39,
      (Il2CppObject *)v3,
      Method_TitleRootComponent___c__DisplayClass96_0__startTitle_b__0__,
      0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__downloadAssetStorage(v38, v39, 1, 0);
  }
  else
  {
    TitleRootComponent__ExecTitleFade(this, v28);
  }
}


void TitleRootComponent__startTitleFade(TitleRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4CC987D & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_TitleRootComponent_endTitleFade__);
    byte_4CC987D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_TitleRootComponent_endTitleFade__, 0);
  if ( !Instance )
    sub_1C71608(v5, v6);
  CommonUI__maskFadein((CommonUI_o *)Instance, 1.5, v4, 0);
}


bool TitleRootComponent__startTutorialCancelConfirm(TitleRootComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4CC9899 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_3437/*"CLICK_CANCEL"*/);
    byte_4CC9899 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C71608(0, method);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_3437/*"CLICK_CANCEL"*/, 0);
  return 1;
}


void TitleRootComponent__GetNoticeUpdate_d__98___ctor(
        TitleRootComponent__GetNoticeUpdate_d__98_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool TitleRootComponent__GetNoticeUpdate_d__98__MoveNext(
        TitleRootComponent__GetNoticeUpdate_d__98_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t _1__state; // w8
  System_String_o *WebViewAddress; // x0
  struct UnityEngine_Networking_UnityWebRequest_o *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  __int64 v18; // x1
  UnityEngine_Networking_UnityWebRequest_o *www_5__2; // x0
  Il2CppObject *v20; // x0
  Il2CppObject **p__2__current; // x19
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  bool result; // w0
  __int64 v29; // x20
  TerminalPramsManager_c *v30; // x0
  GrandQuestFolderBoardItem_o *p_NoticeLastModified_k__BackingField; // x0
  UnityEngine_Networking_UnityWebRequest_o *v32; // x8
  System_Collections_Generic_Dictionary_object__object__o *v33; // x19
  System_String_o *error; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  Il2CppObject *Item; // x19
  TerminalPramsManager_c *v42; // x0
  GrandQuestFolderBoardItem_o *v43; // x0

  if ( (byte_4CC98DD & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    sub_1C713B0(&StringLiteral_8255/*"LAST-MODIFIED"*/);
    sub_1C713B0(&StringLiteral_1099/*"/newsupdate"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC98DD = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v29 = StringLiteral_1/*""*/;
    if ( !byte_4CC9939 )
    {
      sub_1C713B0(&TerminalPramsManager_TypeInfo);
      byte_4CC9939 = 1;
    }
    v30 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v30 = TerminalPramsManager_TypeInfo;
    }
    p_NoticeLastModified_k__BackingField = (GrandQuestFolderBoardItem_o *)&v30->static_fields->_NoticeLastModified_k__BackingField;
    p_NoticeLastModified_k__BackingField->klass = (GrandQuestFolderBoardItem_c *)v29;
    sub_1C71354(p_NoticeLastModified_k__BackingField, v29, v2, v3, v4, v5, v6, v7);
    www_5__2 = this->fields._www_5__2;
    if ( !www_5__2 )
      goto LABEL_29;
    www_5__2 = (UnityEngine_Networking_UnityWebRequest_o *)UnityEngine_Networking_UnityWebRequest__GetResponseHeaders(
                                                             www_5__2,
                                                             0);
    v32 = this->fields._www_5__2;
    if ( !v32 )
      goto LABEL_29;
    v33 = (System_Collections_Generic_Dictionary_object__object__o *)www_5__2;
    error = UnityEngine_Networking_UnityWebRequest__get_error(v32, 0);
    www_5__2 = (UnityEngine_Networking_UnityWebRequest_o *)System_String__IsNullOrEmpty(error, 0);
    if ( ((unsigned __int8)www_5__2 & 1) != 0 )
    {
      if ( !v33 )
        goto LABEL_29;
      if ( System_Collections_Generic_Dictionary_object__object___get_Count(
             v33,
             (const MethodInfo_34CB3B0 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__) >= 1
        && System_Collections_Generic_Dictionary_object__object___ContainsKey(
             v33,
             (Il2CppObject *)StringLiteral_8255/*"LAST-MODIFIED"*/,
             (const MethodInfo_34CB8D4 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
      {
        Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 v33,
                 (Il2CppObject *)StringLiteral_8255/*"LAST-MODIFIED"*/,
                 (const MethodInfo_34CB660 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4CC9939 )
        {
          sub_1C713B0(&TerminalPramsManager_TypeInfo);
          byte_4CC9939 = 1;
        }
        v42 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v42 = TerminalPramsManager_TypeInfo;
        }
        v43 = (GrandQuestFolderBoardItem_o *)&v42->static_fields->_NoticeLastModified_k__BackingField;
        v43->klass = (GrandQuestFolderBoardItem_c *)Item;
        sub_1C71354(v43, (int32_t)Item, v35, v36, v37, v38, v39, v40);
      }
    }
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    WebViewAddress = NetworkManager__getWebViewAddress((System_String_o *)StringLiteral_1099/*"/newsupdate"*/, 0);
    v11 = UnityEngine_Networking_UnityWebRequest__Get(WebViewAddress, 0);
    this->fields._www_5__2 = v11;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields._www_5__2, (int32_t)v11, v12, v13, v14, v15, v16, v17);
    www_5__2 = this->fields._www_5__2;
    if ( www_5__2 )
    {
      v20 = (Il2CppObject *)UnityEngine_Networking_UnityWebRequest__SendWebRequest(www_5__2, 0);
      this->fields.__2__current = v20;
      p__2__current = &this->fields.__2__current;
      sub_1C71354((GrandQuestFolderBoardItem_o *)p__2__current, (int32_t)v20, v22, v23, v24, v25, v26, v27);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
LABEL_29:
    sub_1C71608(www_5__2, v18);
  }
  return 0;
}


Il2CppObject *TitleRootComponent__GetNoticeUpdate_d__98__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TitleRootComponent__GetNoticeUpdate_d__98_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn TitleRootComponent__GetNoticeUpdate_d__98__System_Collections_IEnumerator_Reset(
        TitleRootComponent__GetNoticeUpdate_d__98_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C713C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C715FC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C713C4(&Method_TitleRootComponent__GetNoticeUpdate_d__98_System_Collections_IEnumerator_Reset__);
  sub_1C714D8(v3, v4);
}


Il2CppObject *TitleRootComponent__GetNoticeUpdate_d__98__System_Collections_IEnumerator_get_Current(
        TitleRootComponent__GetNoticeUpdate_d__98_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void TitleRootComponent__GetNoticeUpdate_d__98__System_IDisposable_Dispose(
        TitleRootComponent__GetNoticeUpdate_d__98_o *this,
        const MethodInfo *method)
{
  ;
}


void TitleRootComponent__WaitPurchase_d__143___ctor(
        TitleRootComponent__WaitPurchase_d__143_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool TitleRootComponent__WaitPurchase_d__143__MoveNext(
        TitleRootComponent__WaitPurchase_d__143_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  PurchaseBehaviour_c *v4; // x0
  TitleRootComponent___c_c *v5; // x0
  System_Func_bool__o *_9__143_0; // x20
  Il2CppObject *v7; // x21
  struct TitleRootComponent___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  UnityEngine_WaitUntil_o *v15; // x21
  Il2CppObject **p__2__current; // x19
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  bool result; // w0
  Il2CppObject *Instance; // x0
  __int64 v25; // x1

  if ( (byte_4CC98DE & 1) == 0 )
  {
    sub_1C713B0(&System_Func_bool__TypeInfo);
    sub_1C713B0(&PurchaseBehaviour_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_TitleRootComponent___c__WaitPurchase_b__143_0__);
    sub_1C713B0(&TitleRootComponent___c_TypeInfo);
    sub_1C713B0(&UnityEngine_WaitUntil_TypeInfo);
    byte_4CC98DE = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_1C71608(0, v25);
    CommonUI__OpenConfirmDecideDlg(
      (CommonUI_o *)Instance,
      this->fields.title,
      this->fields.message,
      this->fields.decideTxt,
      this->fields.cancleTxt,
      this->fields.func,
      this->fields.fontsize,
      this->fields.windowPosY,
      (float)this->fields.spacingY,
      0,
      0,
      0,
      this->fields.messageLabelHeight,
      0,
      1,
      this->fields.isCancelTxtTwoLine,
      0,
      0);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  v4 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
    v4 = PurchaseBehaviour_TypeInfo;
  }
  v4->static_fields->isOpenPurchaseDialogEvent = 1;
  PurchaseBehaviour__ActivateBoth(0);
  v5 = TitleRootComponent___c_TypeInfo;
  if ( !TitleRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleRootComponent___c_TypeInfo);
    v5 = TitleRootComponent___c_TypeInfo;
  }
  _9__143_0 = v5->static_fields->__9__143_0;
  if ( !_9__143_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = TitleRootComponent___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v5->static_fields->__9;
    _9__143_0 = (System_Func_bool__o *)sub_1C715FC(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(_9__143_0, v7, Method_TitleRootComponent___c__WaitPurchase_b__143_0__, 0);
    static_fields = TitleRootComponent___c_TypeInfo->static_fields;
    static_fields->__9__143_0 = _9__143_0;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__143_0,
      (int32_t)_9__143_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v15 = (UnityEngine_WaitUntil_o *)sub_1C715FC(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v15, _9__143_0, 0);
  this->fields.__2__current = (Il2CppObject *)v15;
  p__2__current = &this->fields.__2__current;
  sub_1C71354((GrandQuestFolderBoardItem_o *)p__2__current, (int32_t)v15, v17, v18, v19, v20, v21, v22);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *TitleRootComponent__WaitPurchase_d__143__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TitleRootComponent__WaitPurchase_d__143_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn TitleRootComponent__WaitPurchase_d__143__System_Collections_IEnumerator_Reset(
        TitleRootComponent__WaitPurchase_d__143_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C713C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C715FC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C713C4(&Method_TitleRootComponent__WaitPurchase_d__143_System_Collections_IEnumerator_Reset__);
  sub_1C714D8(v3, v4);
}


Il2CppObject *TitleRootComponent__WaitPurchase_d__143__System_Collections_IEnumerator_get_Current(
        TitleRootComponent__WaitPurchase_d__143_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void TitleRootComponent__WaitPurchase_d__143__System_IDisposable_Dispose(
        TitleRootComponent__WaitPurchase_d__143_o *this,
        const MethodInfo *method)
{
  ;
}


void TitleRootComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC98CF & 1) == 0 )
  {
    sub_1C713B0(&TitleRootComponent___c_TypeInfo);
    byte_4CC98CF = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(TitleRootComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  TitleRootComponent___c_TypeInfo->static_fields->__9 = (struct TitleRootComponent___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)TitleRootComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void TitleRootComponent___c___ctor(TitleRootComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TitleRootComponent___c___CancelAccountLinkageTakeOver_b__162_1(
        TitleRootComponent___c_o *this,
        const MethodInfo *method)
{
  ;
}


void TitleRootComponent___c___HideAccountLinkageTakeOverPanel_b__161_1(
        TitleRootComponent___c_o *this,
        const MethodInfo *method)
{
  ;
}


void TitleRootComponent___c___HideSelectTakeOverTypePanel_b__157_1(
        TitleRootComponent___c_o *this,
        const MethodInfo *method)
{
  ;
}


void TitleRootComponent___c___SelectContinueNumberTakeOver_b__158_0(
        TitleRootComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  AvalonSceneManager_c *v4; // x8
  CommonUI_o *v5; // x19
  TitleRootComponent___c_c *v6; // x0
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__158_1; // x20
  Il2CppObject *v9; // x21
  struct TitleRootComponent___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4CC98D2 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&AvalonSceneManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_TitleRootComponent___c__SelectContinueNumberTakeOver_b__158_1__);
    sub_1C713B0(&TitleRootComponent___c_TypeInfo);
    byte_4CC98D2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  v6 = TitleRootComponent___c_TypeInfo;
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  if ( !TitleRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleRootComponent___c_TypeInfo);
    v6 = TitleRootComponent___c_TypeInfo;
  }
  _9__158_1 = v6->static_fields->__9__158_1;
  if ( !_9__158_1 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = TitleRootComponent___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__158_1 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(_9__158_1, v9, Method_TitleRootComponent___c__SelectContinueNumberTakeOver_b__158_1__, 0);
    static_fields = TitleRootComponent___c_TypeInfo->static_fields;
    static_fields->__9__158_1 = _9__158_1;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__158_1,
      (int32_t)_9__158_1,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  if ( !v5 )
    sub_1C71608(v6, v3);
  CommonUI__maskFadein(v5, DEFAULT_FADE_TIME, _9__158_1, 0);
}


void TitleRootComponent___c___SelectContinueNumberTakeOver_b__158_1(
        TitleRootComponent___c_o *this,
        const MethodInfo *method)
{
  ;
}


void TitleRootComponent___c___UserDataInfoCheck_b__163_0(TitleRootComponent___c_o *this, const MethodInfo *method)
{
  ;
}


bool TitleRootComponent___c___WaitPurchase_b__143_0(TitleRootComponent___c_o *this, const MethodInfo *method)
{
  PurchaseBehaviour_c *v2; // x0

  if ( (byte_4CC98D1 & 1) == 0 )
  {
    sub_1C713B0(&PurchaseBehaviour_TypeInfo);
    byte_4CC98D1 = 1;
  }
  v2 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
    v2 = PurchaseBehaviour_TypeInfo;
  }
  return !v2->static_fields->isOpenPurchaseDialogEvent;
}


void TitleRootComponent___c___closeTakeoverInput_b__113_1(TitleRootComponent___c_o *this, const MethodInfo *method)
{
  ;
}


void TitleRootComponent___c___onCloseTakeoverDecide_b__123_0(TitleRootComponent___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4CC98D0 & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_4CC98D0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_1C71608(0, v3);
  ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, 0);
}


void TitleRootComponent___c___openTakeoverInput_b__112_0(TitleRootComponent___c_o *this, const MethodInfo *method)
{
  ;
}


void TitleRootComponent___c__DisplayClass137_0___ctor(
        TitleRootComponent___c__DisplayClass137_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TitleRootComponent___c__DisplayClass137_0___CheckAndTransitionBattleTalk_b__0(
        TitleRootComponent___c__DisplayClass137_0_o *this,
        int32_t result,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  struct TitleRootComponent_o *_4__this; // x8
  System_Action_o *_9__3; // x22
  CommonUI_o *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7

  if ( (byte_4CC98D4 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&ScriptManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_TitleRootComponent___c__DisplayClass137_0__CheckAndTransitionBattleTalk_b__2__);
    sub_1C713B0(&Method_TitleRootComponent___c__DisplayClass137_0__CheckAndTransitionBattleTalk_b__3__);
    sub_1C713B0(&StringLiteral_6975/*"GO_TERMINAL"*/);
    byte_4CC98D4 = 1;
  }
  switch ( result )
  {
    case 0:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      _9__3 = this->fields.__9__3;
      v9 = (CommonUI_o *)Instance;
      if ( !_9__3 )
      {
        _9__3 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
        System_Action___ctor(
          _9__3,
          (Il2CppObject *)this,
          Method_TitleRootComponent___c__DisplayClass137_0__CheckAndTransitionBattleTalk_b__3__,
          0);
        this->fields.__9__3 = _9__3;
        sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.__9__3, (int32_t)_9__3, v10, v11, v12, v13, v14, v15);
      }
      if ( !v9 )
        goto LABEL_18;
      goto LABEL_15;
    case 1:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      _9__3 = this->fields.__9__2;
      v9 = (CommonUI_o *)Instance;
      if ( _9__3 )
      {
        if ( !Instance )
          goto LABEL_18;
      }
      else
      {
        _9__3 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
        System_Action___ctor(
          _9__3,
          (Il2CppObject *)this,
          Method_TitleRootComponent___c__DisplayClass137_0__CheckAndTransitionBattleTalk_b__2__,
          0);
        this->fields.__9__2 = _9__3;
        sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.__9__2, (int32_t)_9__3, v16, v17, v18, v19, v20, v21);
        if ( !v9 )
          goto LABEL_18;
      }
LABEL_15:
      CommonUI__CloseTripleButtonDlg(v9, _9__3, 0);
      return;
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__CloseTripleButtonDlg((CommonUI_o *)Instance, 0, 0);
        if ( !ScriptManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
        ScriptManager__DeleteContinueData(0);
        _4__this = this->fields.__4__this;
        if ( _4__this )
        {
          Instance = (Il2CppObject *)_4__this->fields.myFSM;
          if ( Instance )
          {
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_6975/*"GO_TERMINAL"*/, 0);
            return;
          }
        }
      }
LABEL_18:
      sub_1C71608(Instance, v6);
  }
}


bool TitleRootComponent___c__DisplayClass137_0___CheckAndTransitionBattleTalk_b__1(
        TitleRootComponent___c__DisplayClass137_0_o *this,
        QuestReleaseEntity_o *x,
        const MethodInfo *method)
{
  TitleRootComponent___c__DisplayClass137_0_o *v4; // x20
  int64_t value; // x21
  ScrTerminalMap_c *v6; // x0
  struct ScrTerminalMap_StaticFields *static_fields; // x8
  int64_t v9; // x19

  v4 = this;
  if ( (byte_4CC98D3 & 1) == 0 )
  {
    this = (TitleRootComponent___c__DisplayClass137_0_o *)sub_1C713B0(&ScrTerminalMap_TypeInfo);
    byte_4CC98D3 = 1;
  }
  if ( !x )
    sub_1C71608(this, x);
  if ( x->fields.questId != v4->fields.questId )
    return 0;
  value = x->fields.value;
  v6 = ScrTerminalMap_TypeInfo;
  if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
    v6 = ScrTerminalMap_TypeInfo;
  }
  static_fields = v6->static_fields;
  if ( value == static_fields->AUTO_QUEST_SQUARE_INDEX_1 )
    return 1;
  v9 = x->fields.value;
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    static_fields = ScrTerminalMap_TypeInfo->static_fields;
  }
  return v9 == static_fields->AUTO_QUEST_SQUARE_INDEX_2;
}


void TitleRootComponent___c__DisplayClass137_0___CheckAndTransitionBattleTalk_b__2(
        TitleRootComponent___c__DisplayClass137_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v4; // x1
  struct TitleRootComponent_o *_4__this; // x8

  if ( (byte_4CC98D5 & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CC98D5 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetLoadMode(Instance, 1, 0), (_4__this = this->fields.__4__this) == 0)
    || (Instance = (CommonUI_o *)_4__this->fields.talkResumeInfo) == 0
    || (BattleScriptRootComponent_TalkScriptInfo__SetJump((BattleScriptRootComponent_TalkScriptInfo_o *)Instance, 0, 0),
        (Instance = (CommonUI_o *)this->fields.__4__this) == 0) )
  {
    sub_1C71608(Instance, v4);
  }
  TitleRootComponent__CheckBattleBefore((TitleRootComponent_o *)Instance, v4);
}


void TitleRootComponent___c__DisplayClass137_0___CheckAndTransitionBattleTalk_b__3(
        TitleRootComponent___c__DisplayClass137_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v4; // x1
  struct TitleRootComponent_o *_4__this; // x8

  if ( (byte_4CC98D6 & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CC98D6 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetLoadMode(Instance, 1, 0), (_4__this = this->fields.__4__this) == 0)
    || (Instance = (CommonUI_o *)_4__this->fields.talkResumeInfo) == 0
    || (BattleScriptRootComponent_TalkScriptInfo__SetJump((BattleScriptRootComponent_TalkScriptInfo_o *)Instance, 1, 0),
        (Instance = (CommonUI_o *)this->fields.__4__this) == 0) )
  {
    sub_1C71608(Instance, v4);
  }
  TitleRootComponent__CheckBattleBefore((TitleRootComponent_o *)Instance, v4);
}


void TitleRootComponent___c__DisplayClass144_0___ctor(
        TitleRootComponent___c__DisplayClass144_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TitleRootComponent___c__DisplayClass144_0___OnConfirmBattleResume_b__1(
        TitleRootComponent___c__DisplayClass144_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_String_o *v4; // x21
  System_Action_o *v5; // x22
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4CC98D7 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_TitleRootComponent___c__DisplayClass144_0__OnConfirmBattleResume_g__CancelBattleAndGoTerminal_0__);
    sub_1C713B0(&StringLiteral_2691/*"BATTLERESUME_NOTIFICATION_MESSAGE_INTERRUPTION_BATTLE_DATA_CORRUPTED"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC98D7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_2691/*"BATTLERESUME_NOTIFICATION_MESSAGE_INTERRUPTION_BATTLE_DATA_CORRUPTED"*/, 0);
  v5 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(
    v5,
    (Il2CppObject *)this,
    Method_TitleRootComponent___c__DisplayClass144_0__OnConfirmBattleResume_g__CancelBattleAndGoTerminal_0__,
    0);
  if ( !Instance )
    sub_1C71608(v6, v7);
  CommonUI__OpenNotificationDialog(
    (CommonUI_o *)Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v4,
    v5,
    -1,
    0,
    0,
    0,
    0,
    0,
    1,
    0,
    0,
    0.0,
    0,
    0);
}


void TitleRootComponent___c__DisplayClass144_0___OnConfirmBattleResume_g__CancelBattleAndGoTerminal_0(
        TitleRootComponent___c__DisplayClass144_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *_4__this; // x20
  NetworkManager_ResultCallbackFunc_o *v4; // x19
  __int64 v5; // x28
  __int64 v6; // x29
  __int64 IsInterruptibleQuest; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  unsigned int *v10; // x22
  struct BattleData_SaveData_o *saveData; // x8
  struct BattleData_SaveData_o *v12; // x8
  struct BattleWaveInfoData_SaveData_array *waveInfoSaveDataArray; // x8
  il2cpp_array_size_t max_length; // x19
  unsigned __int64 v15; // x21
  __int64 v16; // x25
  __int64 v17; // x26
  BattleWaveInfoData_o *v18; // x19
  struct BattleData_SaveData_o *v19; // x8
  struct BattleWaveInfoData_SaveData_array *v20; // x8
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  int v27; // w19
  struct TitleRootComponent_o *v28; // x21
  int32_t questId; // w19
  const MethodInfo *v30; // x3
  TerminalPramsManager_c *v31; // x0
  signed int CurrentWaveNum_k__BackingField; // w9
  TerminalPramsManager_c *v33; // x0
  BattleResultRequest_SuperBossResult_array *v34; // x27
  System_Collections_Generic_List_object__o *firstNpPlayList; // x28
  PlayerServantNoblePhantasmUsageData_o *v36; // x29
  System_Collections_Generic_Dictionary_int__int__o *usedEquipSkillDict; // x21
  System_Int32_array *calledEnemyUniqueIdArray; // x24
  System_Int32_array *v39; // x25
  long double inited; // q0
  _QWORD *v41; // x26
  __int64 v42; // x8
  __int64 v43; // x0
  __int64 v44; // x0
  System_Int32_array *dataLostUniqueIdArray; // x19
  System_Collections_Generic_Dictionary_int__int__o *battleMissionValueDict; // x26
  __int64 v47; // x0
  System_Int64_array *v48; // [xsp+A0h] [xbp-B0h]
  System_Int32_array *skillShiftUniqueIdArray; // [xsp+A8h] [xbp-A8h]
  System_Collections_Generic_Dictionary_int__int__o *SavedServantCommonFlagDict; // [xsp+B0h] [xbp-A0h]
  System_Collections_Generic_Dictionary_string__object__o *recordJson; // [xsp+B8h] [xbp-98h]
  BattleResultRequest_RaidResult_array *raidResult; // [xsp+C0h] [xbp-90h]
  int64_t ResumeBattleId; // [xsp+C8h] [xbp-88h]
  int32_t waveNum; // [xsp+D0h] [xbp-80h]
  int32_t battleResult; // [xsp+D4h] [xbp-7Ch]
  System_Int32_array_array *v56; // [xsp+D8h] [xbp-78h]
  System_Int32_array *usedTurnArray; // [xsp+E0h] [xbp-70h]
  BattleResultRequest_o *Request_object; // [xsp+E8h] [xbp-68h]

  if ( (byte_4CC98D8 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Array_Empty_int___);
    sub_1C713B0(&BattleData_TypeInfo);
    sub_1C713B0(&BattleWaveInfoData___TypeInfo);
    sub_1C713B0(&BattleWaveInfoData_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1C713B0(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C713B0(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C713B0(&int_____TypeInfo);
    sub_1C713B0(&int___TypeInfo);
    sub_1C713B0(&long___TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_Dictionary_string__object____ctor__);
    sub_1C713B0(&System_Collections_Generic_List_Dictionary_string__object___TypeInfo);
    sub_1C713B0(&Method_NetworkManager_getRequest_BattleResultRequest___);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&PlayerServantNoblePhantasmUsageData_TypeInfo);
    sub_1C713B0(&BattleResultRequest_RaidResult___TypeInfo);
    sub_1C713B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C713B0(&BattleResultRequest_SuperBossResult___TypeInfo);
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    sub_1C713B0(&Method_TitleRootComponent_OnCompleteResumeCancel__);
    sub_1C713B0(&StringLiteral_22826/*"playWaveStartMovie"*/);
    sub_1C713B0(&StringLiteral_23090/*"rebootAlreadyPlayMovie"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC98D8 = 1;
  }
  _4__this = (Il2CppObject *)this->fields.__4__this;
  v4 = (NetworkManager_ResultCallbackFunc_o *)sub_1C715FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v4, _4__this, Method_TitleRootComponent_OnCompleteResumeCancel__, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = (BattleResultRequest_o *)NetworkManager__getRequest_object_(
                                              v4,
                                              (const MethodInfo_31D69E8 *)Method_NetworkManager_getRequest_BattleResultRequest___);
  v5 = sub_1C71458(int___TypeInfo, 0);
  v6 = sub_1C71458(int_____TypeInfo, 0);
  IsInterruptibleQuest = sub_1C71458(BattleWaveInfoData___TypeInfo, 0);
  if ( !this->fields.__4__this )
    goto LABEL_58;
  v10 = (unsigned int *)IsInterruptibleQuest;
  IsInterruptibleQuest = TitleRootComponent__IsInterruptibleQuest(
                           (TitleRootComponent_o *)IsInterruptibleQuest,
                           this->fields.questId,
                           v9);
  if ( (IsInterruptibleQuest & 1) != 0 )
  {
    saveData = this->fields.saveData;
    if ( saveData )
    {
      IsInterruptibleQuest = BasicHelper__IsNullOrEmpty(
                               (System_Collections_ICollection_o *)saveData->fields.waveInfoSaveDataArray,
                               0);
      if ( (IsInterruptibleQuest & 1) == 0 )
      {
        v12 = this->fields.saveData;
        if ( !v12 )
          goto LABEL_58;
        waveInfoSaveDataArray = v12->fields.waveInfoSaveDataArray;
        if ( !waveInfoSaveDataArray )
          goto LABEL_58;
        max_length = waveInfoSaveDataArray->max_length;
        if ( (_DWORD)max_length )
        {
          IsInterruptibleQuest = sub_1C71458(BattleWaveInfoData___TypeInfo, (unsigned int)max_length);
          v10 = (unsigned int *)IsInterruptibleQuest;
          if ( (int)max_length >= 1 )
          {
            v15 = 0;
            v16 = (unsigned int)max_length;
            v17 = 8;
            do
            {
              v18 = (BattleWaveInfoData_o *)sub_1C715FC(BattleWaveInfoData_TypeInfo);
              BattleWaveInfoData___ctor(v18, 0);
              v19 = this->fields.saveData;
              if ( !v19 )
                goto LABEL_58;
              v20 = v19->fields.waveInfoSaveDataArray;
              if ( !v20 )
                goto LABEL_58;
              if ( v15 >= LODWORD(v20->max_length) )
                goto LABEL_59;
              if ( !v18 )
                goto LABEL_58;
              BattleWaveInfoData__SetDataFromSaveData(
                v18,
                *(BattleWaveInfoData_SaveData_o **)((char *)&v20->obj.klass + v17 * 4),
                0);
              if ( !v10 )
                goto LABEL_58;
              IsInterruptibleQuest = sub_1C714EC(v18, *(_QWORD *)(*(_QWORD *)v10 + 64LL));
              if ( !IsInterruptibleQuest )
              {
                v47 = sub_1C7162C(0);
                sub_1C714D8(v47, 0);
              }
              if ( v15 >= v10[6] )
LABEL_59:
                sub_1C71610(IsInterruptibleQuest);
              *(_QWORD *)&v10[v17] = v18;
              sub_1C71354((GrandQuestFolderBoardItem_o *)&v10[v17], (int32_t)v18, v21, v22, v23, v24, v25, v26);
              ++v15;
              v17 += 2;
            }
            while ( v16 != v15 );
            v27 = 4;
            goto LABEL_30;
          }
          goto LABEL_29;
        }
      }
    }
    v28 = this->fields.__4__this;
    questId = this->fields.questId;
    if ( !BattleData_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
    IsInterruptibleQuest = BattleData__getSavedQuestPhase(0);
    if ( v28 )
    {
      IsInterruptibleQuest = (__int64)TitleRootComponent__GetUserInterruptionBattleWaveInfoDataArray(
                                        (TitleRootComponent_o *)IsInterruptibleQuest,
                                        questId,
                                        IsInterruptibleQuest,
                                        v30);
      v10 = (unsigned int *)IsInterruptibleQuest;
LABEL_29:
      v27 = 4;
      if ( !v10 )
        goto LABEL_58;
      goto LABEL_30;
    }
LABEL_58:
    sub_1C71608(IsInterruptibleQuest, v8);
  }
  v27 = 3;
  if ( !v10 )
    goto LABEL_58;
LABEL_30:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CC43E5 )
  {
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    byte_4CC43E5 = 1;
  }
  v31 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v31 = TerminalPramsManager_TypeInfo;
  }
  CurrentWaveNum_k__BackingField = v10[6];
  if ( v31->static_fields->_CurrentWaveNum_k__BackingField >= CurrentWaveNum_k__BackingField )
  {
    if ( !v31->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v31);
    if ( !byte_4CC43E5 )
    {
      sub_1C713B0(&TerminalPramsManager_TypeInfo);
      byte_4CC43E5 = 1;
    }
    v33 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v33 = TerminalPramsManager_TypeInfo;
    }
    CurrentWaveNum_k__BackingField = v33->static_fields->_CurrentWaveNum_k__BackingField;
  }
  waveNum = CurrentWaveNum_k__BackingField;
  battleResult = v27;
  v56 = (System_Int32_array_array *)v6;
  usedTurnArray = (System_Int32_array *)v5;
  if ( !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  ResumeBattleId = BattleData__getResumeBattleId(0);
  raidResult = (BattleResultRequest_RaidResult_array *)sub_1C71458(BattleResultRequest_RaidResult___TypeInfo, 0);
  v34 = (BattleResultRequest_SuperBossResult_array *)sub_1C71458(BattleResultRequest_SuperBossResult___TypeInfo, 0);
  recordJson = (System_Collections_Generic_Dictionary_string__object__o *)sub_1C715FC(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    (System_Collections_Generic_Dictionary_object__object__o *)recordJson,
    (const MethodInfo_34CAD30 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  firstNpPlayList = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_Dictionary_string__object___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    firstNpPlayList,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_Dictionary_string__object____ctor__);
  v36 = (PlayerServantNoblePhantasmUsageData_o *)sub_1C715FC(PlayerServantNoblePhantasmUsageData_TypeInfo);
  PlayerServantNoblePhantasmUsageData___ctor(v36, 0);
  usedEquipSkillDict = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C715FC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    usedEquipSkillDict,
    (const MethodInfo_3458E18 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  SavedServantCommonFlagDict = BattleData__GetSavedServantCommonFlagDict(0);
  skillShiftUniqueIdArray = (System_Int32_array *)sub_1C71458(int___TypeInfo, 0);
  v48 = (System_Int64_array *)sub_1C71458(long___TypeInfo, 0);
  calledEnemyUniqueIdArray = (System_Int32_array *)sub_1C71458(int___TypeInfo, 0);
  v39 = (System_Int32_array *)sub_1C71458(int___TypeInfo, 0);
  v41 = Method_System_Array_Empty_int___;
  v42 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v42 )
  {
    sub_1C474A0(Method_System_Array_Empty_int___);
    v42 = v41[7];
  }
  v43 = *(_QWORD *)(v42 + 16);
  if ( (*(_BYTE *)(v43 + 309) & 1) == 0 )
    v43 = sub_1C47444(inited);
  if ( !*(_DWORD *)(v43 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v43);
  v44 = *(_QWORD *)(v41[7] + 16LL);
  if ( (*(_BYTE *)(v44 + 309) & 1) == 0 )
    v44 = sub_1C47444(inited);
  dataLostUniqueIdArray = **(System_Int32_array ***)(v44 + 184);
  battleMissionValueDict = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C715FC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    battleMissionValueDict,
    (const MethodInfo_3458E18 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  IsInterruptibleQuest = (__int64)Request_object;
  if ( !Request_object )
    goto LABEL_58;
  BattleResultRequest__beginRequest(
    Request_object,
    ResumeBattleId,
    battleResult,
    0,
    (System_String_o *)StringLiteral_1/*""*/,
    (System_String_o *)StringLiteral_1/*""*/,
    v56,
    usedTurnArray,
    raidResult,
    v34,
    0,
    usedTurnArray,
    1,
    recordJson,
    (System_Collections_Generic_List_Dictionary_string__object___o *)firstNpPlayList,
    v36,
    usedEquipSkillDict,
    SavedServantCommonFlagDict,
    skillShiftUniqueIdArray,
    v48,
    calledEnemyUniqueIdArray,
    v39,
    dataLostUniqueIdArray,
    (BattleWaveInfoData_array *)v10,
    waveNum,
    battleMissionValueDict,
    0);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  EncryptedPlayerPrefs__DeleteKey((System_String_o *)StringLiteral_23090/*"rebootAlreadyPlayMovie"*/, 0);
  EncryptedPlayerPrefs__DeleteKey((System_String_o *)StringLiteral_22826/*"playWaveStartMovie"*/, 0);
}


void TitleRootComponent___c__DisplayClass153_0___ctor(
        TitleRootComponent___c__DisplayClass153_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TitleRootComponent___c__DisplayClass153_0___confirmCacheClear_b__1(
        TitleRootComponent___c__DisplayClass153_0_o *this,
        const MethodInfo *method)
{
  TitleRootComponent___c__DisplayClass153_0_o *v2; // x19
  struct TitleRootComponent_o *_4__this; // x8
  UnityEngine_Object_o *bgMoviePlayer; // x20
  struct TitleRootComponent_o *v5; // x8
  struct TitleRootComponent_o *v6; // x8
  __int64 *v7; // x8

  v2 = this;
  if ( (byte_4CC98D9 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    sub_1C713B0(&StringLiteral_3444/*"CLICK_DECIDE"*/);
    this = (TitleRootComponent___c__DisplayClass153_0_o *)sub_1C713B0(&StringLiteral_3437/*"CLICK_CANCEL"*/);
    byte_4CC98D9 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_20;
  if ( !v2->fields.isDecide )
  {
    this = (TitleRootComponent___c__DisplayClass153_0_o *)_4__this->fields.myFSM;
    if ( this )
    {
      v7 = &StringLiteral_3437/*"CLICK_CANCEL"*/;
      goto LABEL_19;
    }
    goto LABEL_20;
  }
  if ( _4__this->fields.storyProgress == 3 )
  {
    bgMoviePlayer = (UnityEngine_Object_o *)_4__this->fields.bgMoviePlayer;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (TitleRootComponent___c__DisplayClass153_0_o *)UnityEngine_Object__op_Inequality(bgMoviePlayer, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v5 = v2->fields.__4__this;
      if ( v5 )
      {
        this = (TitleRootComponent___c__DisplayClass153_0_o *)v5->fields.bgMoviePlayer;
        if ( this )
        {
          CRIMoviePlayer__Dispose((CRIMoviePlayer_o *)this, 0);
          goto LABEL_12;
        }
      }
LABEL_20:
      sub_1C71608(this, method);
    }
  }
LABEL_12:
  this = (TitleRootComponent___c__DisplayClass153_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !this )
    goto LABEL_20;
  ManagementManager__titleCacheClear((ManagementManager_o *)this, 0);
  this = (TitleRootComponent___c__DisplayClass153_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !this )
    goto LABEL_20;
  ManagementManager__reboot((ManagementManager_o *)this, 0, 1, 0);
  v6 = v2->fields.__4__this;
  if ( !v6 )
    goto LABEL_20;
  this = (TitleRootComponent___c__DisplayClass153_0_o *)v6->fields.myFSM;
  if ( !this )
    goto LABEL_20;
  v7 = &StringLiteral_3444/*"CLICK_DECIDE"*/;
LABEL_19:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v7, 0);
}


void TitleRootComponent___c__DisplayClass169_0___ctor(
        TitleRootComponent___c__DisplayClass169_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TitleRootComponent___c__DisplayClass169_0___SynchronizeGrandEffectSaveData_b__0(
        TitleRootComponent___c__DisplayClass169_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1C71608(this, method);
  TitleRootComponent__SynchronizeGrandBoardSaveData((TitleRootComponent_o *)this, this->fields.endAction, v2);
}


void TitleRootComponent___c__DisplayClass170_0___ctor(
        TitleRootComponent___c__DisplayClass170_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TitleRootComponent___c__DisplayClass170_0___SynchronizeGrandBoardSaveData_b__0(
        TitleRootComponent___c__DisplayClass170_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.endAction, 0);
}


void TitleRootComponent___c__DisplayClass171_0___ctor(
        TitleRootComponent___c__DisplayClass171_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TitleRootComponent___c__DisplayClass171_0___SynchronizeGrandMovieSaveData_b__0(
        TitleRootComponent___c__DisplayClass171_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  if ( !this->fields.__4__this )
    sub_1C71608(this, result);
  TitleRootComponent__SynchronizeGrandMovieSaveData(
    this->fields.__4__this,
    this->fields.grandPvList,
    this->fields.index,
    this->fields.endAction,
    v3);
}


void TitleRootComponent___c__DisplayClass81_0___ctor(
        TitleRootComponent___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TitleRootComponent___c__DisplayClass81_0___checkPlayMode_b__0(
        TitleRootComponent___c__DisplayClass81_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  TitleRootComponent_c *v7; // x0
  struct TitleRootComponent_o *v8; // x8
  __int64 *v9; // x8
  struct TitleRootComponent_o *_4__this; // x8

  if ( (byte_4CC98DA & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&TitleRootComponent_TypeInfo);
    sub_1C713B0(&StringLiteral_10399/*"PLAY_OPENING_MOVIE"*/);
    sub_1C713B0(&StringLiteral_10394/*"PLAY_NORMAL_MODE"*/);
    byte_4CC98DA = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__CloseConfirmDialog(Instance, 0);
  if ( !isDecide )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      Instance = (CommonUI_o *)_4__this->fields.myFSM;
      if ( Instance )
      {
        v9 = &StringLiteral_10399/*"PLAY_OPENING_MOVIE"*/;
        goto LABEL_14;
      }
    }
LABEL_15:
    sub_1C71608(Instance, v6);
  }
  v7 = TitleRootComponent_TypeInfo;
  if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
    v7 = TitleRootComponent_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v7->static_fields->SAVE_KEY_PLAYING_MOVIE, 0, 0);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (CommonUI_o *)CommonUI__maskFadeout(Instance, 1, 0.0, 0, 0);
  v8 = this->fields.__4__this;
  if ( !v8 )
    goto LABEL_15;
  Instance = (CommonUI_o *)v8->fields.myFSM;
  if ( !Instance )
    goto LABEL_15;
  v9 = &StringLiteral_10394/*"PLAY_NORMAL_MODE"*/;
LABEL_14:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v9, 0);
}


void TitleRootComponent___c__DisplayClass81_0___checkPlayMode_b__1(
        TitleRootComponent___c__DisplayClass81_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  struct TitleRootComponent_o *v7; // x8
  __int64 *v8; // x8
  TitleRootComponent_c *v9; // x0
  struct TitleRootComponent_o *_4__this; // x8
  struct OpeningMovieEntity_o *openingMovieEntity; // x8
  struct TitleRootComponent_o *v12; // x8

  if ( (byte_4CC98DB & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&TitleRootComponent_TypeInfo);
    sub_1C713B0(&StringLiteral_10399/*"PLAY_OPENING_MOVIE"*/);
    sub_1C713B0(&StringLiteral_10394/*"PLAY_NORMAL_MODE"*/);
    byte_4CC98DB = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  CommonUI__CloseConfirmDialog(Instance, 0);
  if ( !isDecide )
  {
    v9 = TitleRootComponent_TypeInfo;
    if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
      v9 = TitleRootComponent_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v9->static_fields->SAVE_KEY_PLAYING_MOVIE, 0, 0);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      Instance = (CommonUI_o *)CommonUI__maskFadeout(Instance, 1, 0.0, 0, 0);
      _4__this = this->fields.__4__this;
      if ( _4__this )
      {
        openingMovieEntity = _4__this->fields.openingMovieEntity;
        if ( openingMovieEntity )
        {
          Instance = (CommonUI_o *)this->fields.openingMaster;
          if ( Instance )
          {
            OpeningMovieMaster__SavePlayedOpeningMovie(
              (OpeningMovieMaster_o *)Instance,
              openingMovieEntity->fields.movieName,
              0);
            v12 = this->fields.__4__this;
            if ( v12 )
            {
              Instance = (CommonUI_o *)v12->fields.myFSM;
              if ( Instance )
              {
                v8 = &StringLiteral_10394/*"PLAY_NORMAL_MODE"*/;
                goto LABEL_17;
              }
            }
          }
        }
      }
    }
LABEL_18:
    sub_1C71608(Instance, v6);
  }
  v7 = this->fields.__4__this;
  if ( !v7 )
    goto LABEL_18;
  Instance = (CommonUI_o *)v7->fields.myFSM;
  if ( !Instance )
    goto LABEL_18;
  v8 = &StringLiteral_10399/*"PLAY_OPENING_MOVIE"*/;
LABEL_17:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v8, 0);
}


void TitleRootComponent___c__DisplayClass86_0___ctor(
        TitleRootComponent___c__DisplayClass86_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TitleRootComponent___c__DisplayClass86_0___OnEndDownload_b__0(
        TitleRootComponent___c__DisplayClass86_0_o *this,
        const MethodInfo *method)
{
  CRIMoviePlayer_o *player; // x0

  player = this->fields.player;
  if ( !player || (CRIMoviePlayer__Dispose(player, 0), (player = (CRIMoviePlayer_o *)this->fields.__4__this) == 0) )
    sub_1C71608(player, method);
  TitleRootComponent__EndPlayOpeningMovie((TitleRootComponent_o *)player, method);
}


void TitleRootComponent___c__DisplayClass96_0___ctor(
        TitleRootComponent___c__DisplayClass96_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TitleRootComponent___c__DisplayClass96_0___startTitle_b__0(
        TitleRootComponent___c__DisplayClass96_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  TitleRootComponent_o *CriMoviePlayerObject; // x0
  struct TitleRootComponent_o *_4__this; // x22
  UnityEngine_GameObject_o *v8; // x21
  struct TitleRootComponent_o *v9; // x22
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct TitleRootComponent_o *v16; // x8
  CRIMoviePlayer_o *bgMoviePlayer; // x21
  System_String_o *moviewFilePath; // x22
  System_String_o *Path; // x20
  struct TitleRootComponent_o *v20; // x8
  struct TitleRootComponent_o *v21; // x8
  UnityEngine_MonoBehaviour_o *v22; // x19

  if ( (byte_4CC98DC & 1) == 0 )
  {
    sub_1C713B0(&BgmManager_TypeInfo);
    sub_1C713B0(&CommonUI_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_1C713B0(&TitleRootComponent_TypeInfo);
    sub_1C713B0(&StringLiteral_6292/*"ExecTitleFade"*/);
    byte_4CC98DC = 1;
  }
  CriMoviePlayerObject = (TitleRootComponent_o *)CommonUI_TypeInfo;
  _4__this = this->fields.__4__this;
  if ( !CommonUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
  if ( !_4__this )
    goto LABEL_26;
  CriMoviePlayerObject = (TitleRootComponent_o *)TitleRootComponent__CreateCriMoviePlayerObject(
                                                   CriMoviePlayerObject,
                                                   CommonUI_TypeInfo->static_fields->MoviePlayerObjectPath,
                                                   (UnityEngine_Component_o *)this->fields.__4__this,
                                                   v3);
  if ( !CriMoviePlayerObject )
    goto LABEL_26;
  v8 = (UnityEngine_GameObject_o *)CriMoviePlayerObject;
  CriMoviePlayerObject = (TitleRootComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)CriMoviePlayerObject,
                                                   (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  if ( !CriMoviePlayerObject )
    goto LABEL_26;
  UIPanel__set_depth((UIPanel_o *)CriMoviePlayerObject, 1, 0);
  v9 = this->fields.__4__this;
  CriMoviePlayerObject = (TitleRootComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   v8,
                                                   (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
  if ( !v9 )
    goto LABEL_26;
  v9->fields.bgMoviePlayer = (struct CRIMoviePlayer_o *)CriMoviePlayerObject;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&v9->fields.bgMoviePlayer,
    (int32_t)CriMoviePlayerObject,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = this->fields.__4__this;
  if ( !v16 || !data )
    goto LABEL_26;
  bgMoviePlayer = v16->fields.bgMoviePlayer;
  moviewFilePath = this->fields.moviewFilePath;
  Path = AssetData__get_Path(data, 0);
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  if ( !byte_4CC21CB )
  {
    sub_1C713B0(&BgmManager_TypeInfo);
    byte_4CC21CB = 1;
  }
  CriMoviePlayerObject = (TitleRootComponent_o *)BgmManager_TypeInfo;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    CriMoviePlayerObject = (TitleRootComponent_o *)BgmManager_TypeInfo;
  }
  if ( !bgMoviePlayer )
    goto LABEL_26;
  CRIMoviePlayer__Initialize(
    bgMoviePlayer,
    moviewFilePath,
    Path,
    *((float *)&CriMoviePlayerObject->fields.takteOverIdLb->fields.leftAnchor + 1),
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0);
  v20 = this->fields.__4__this;
  if ( !v20 )
    goto LABEL_26;
  CriMoviePlayerObject = (TitleRootComponent_o *)v20->fields.bgMoviePlayer;
  if ( !CriMoviePlayerObject )
    goto LABEL_26;
  CriManaMovieMaterial__set_loop((CriManaMovieMaterial_o *)CriMoviePlayerObject, 1, 0);
  v21 = this->fields.__4__this;
  if ( !v21 )
    goto LABEL_26;
  CriMoviePlayerObject = (TitleRootComponent_o *)v21->fields.bgMoviePlayer;
  if ( !CriMoviePlayerObject )
    goto LABEL_26;
  CRIMoviePlayer__MoviePlay((CRIMoviePlayer_o *)CriMoviePlayerObject, 0, 0, 0, 0, 0);
  CriMoviePlayerObject = (TitleRootComponent_o *)TitleRootComponent_TypeInfo;
  v22 = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
  if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
  if ( !v22 )
LABEL_26:
    sub_1C71608(CriMoviePlayerObject, data);
  UnityEngine_MonoBehaviour__Invoke(
    v22,
    (System_String_o *)StringLiteral_6292/*"ExecTitleFade"*/,
    TitleRootComponent_TypeInfo->static_fields->PART2_CHAPTER6_EPILOGUE_BG_MOVIE_WAITTIME,
    0);
}