void TitleRootComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct TitleRootComponent_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  TitleRootComponent_c *v7; // x8
  struct TitleRootComponent_StaticFields *v8; // x9
  struct TitleRootComponent_StaticFields *v9; // x9
  int32_t v10; // w1
  struct TitleRootComponent_StaticFields *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w1
  struct TitleRootComponent_StaticFields *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  TitleRootComponent_c *v18; // x8
  struct TitleRootComponent_StaticFields *v19; // x9
  struct TitleRootComponent_StaticFields *v20; // x9
  int32_t v21; // w1
  struct TitleRootComponent_StaticFields *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w1
  struct TitleRootComponent_StaticFields *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct TitleRootComponent_StaticFields *v29; // x0
  int32_t v30; // w1
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int32_t v33; // w1
  CGThumbnailListItem_o *v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  int32_t v37; // w1
  struct TitleRootComponent_StaticFields *v38; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  struct TitleRootComponent_StaticFields *v41; // x8

  if ( (byte_4C39E39 & 1) == 0 )
  {
    sub_1C32C20(&TitleRootComponent_TypeInfo);
    sub_1C32C20(&StringLiteral_2925/*"BGM_TITLE_4"*/);
    sub_1C32C20(&StringLiteral_2924/*"BGM_TITLE_3"*/);
    sub_1C32C20(&StringLiteral_24095/*"title2_2"*/);
    sub_1C32C20(&StringLiteral_22722/*"playingMovie"*/);
    sub_1C32C20(&StringLiteral_2923/*"BGM_TITLE_2"*/);
    sub_1C32C20(&StringLiteral_22717/*"playedMovie"*/);
    sub_1C32C20(&StringLiteral_2922/*"BGM_TITLE_1"*/);
    sub_1C32C20(&StringLiteral_21341/*"logo_title_cil"*/);
    sub_1C32C20(&StringLiteral_21342/*"logo_title_er"*/);
    byte_4C39E39 = 1;
  }
  TitleRootComponent_TypeInfo->static_fields->DEFAULT_BGM = (struct System_String_o *)StringLiteral_2922/*"BGM_TITLE_1"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)TitleRootComponent_TypeInfo->static_fields, StringLiteral_2922/*"BGM_TITLE_1"*/, v1, v2);
  v3 = StringLiteral_21342/*"logo_title_er"*/;
  static_fields = TitleRootComponent_TypeInfo->static_fields;
  static_fields->EPIC_OF_REMNANT_TITLE = (struct System_String_o *)StringLiteral_21342/*"logo_title_er"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->EPIC_OF_REMNANT_TITLE, v3, v5, v6);
  v7 = TitleRootComponent_TypeInfo;
  v8 = TitleRootComponent_TypeInfo->static_fields;
  *(_QWORD *)&v8->EPIC_OF_REMNANT_START_IMG_POS.fields.x = 0xC325000000000000LL;
  v8->EPIC_OF_REMNANT_START_IMG_POS.fields.z = 0.0;
  v9 = v7->static_fields;
  *(_QWORD *)&v9->EPIC_OF_REMNANT_LOGO_POS.fields.x = 0x4248000041D80000LL;
  v9->EPIC_OF_REMNANT_LOGO_POS.fields.z = 0.0;
  v10 = StringLiteral_2923/*"BGM_TITLE_2"*/;
  v11 = v7->static_fields;
  v11->EPIC_OF_REMNANT_BGM = (struct System_String_o *)StringLiteral_2923/*"BGM_TITLE_2"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v11->EPIC_OF_REMNANT_BGM, v10, v12, v13);
  v14 = StringLiteral_21341/*"logo_title_cil"*/;
  v15 = TitleRootComponent_TypeInfo->static_fields;
  v15->COSMOS_IN_THE_LOSTBELT_TITLE = (struct System_String_o *)StringLiteral_21341/*"logo_title_cil"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v15->COSMOS_IN_THE_LOSTBELT_TITLE, v14, v16, v17);
  v18 = TitleRootComponent_TypeInfo;
  v19 = TitleRootComponent_TypeInfo->static_fields;
  *(_QWORD *)&v19->COSMOS_IN_THE_LOSTBELT_START_IMG_POS.fields.x = 0xC348000000000000LL;
  v19->COSMOS_IN_THE_LOSTBELT_START_IMG_POS.fields.z = 0.0;
  v20 = v18->static_fields;
  *(_QWORD *)&v20->COSMOS_IN_THE_LOSTBELT_LOGO_POS.fields.x = 0x42040000BF000000LL;
  v20->COSMOS_IN_THE_LOSTBELT_LOGO_POS.fields.z = 0.0;
  v21 = StringLiteral_2924/*"BGM_TITLE_3"*/;
  v22 = v18->static_fields;
  v22->COSMOS_IN_THE_LOSTBELT_BGM = (struct System_String_o *)StringLiteral_2924/*"BGM_TITLE_3"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v22->COSMOS_IN_THE_LOSTBELT_BGM, v21, v23, v24);
  v25 = StringLiteral_2925/*"BGM_TITLE_4"*/;
  v26 = TitleRootComponent_TypeInfo->static_fields;
  v26->COSMOS_IN_THE_LOSTBELT_VER2_BGM = (struct System_String_o *)StringLiteral_2925/*"BGM_TITLE_4"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v26->COSMOS_IN_THE_LOSTBELT_VER2_BGM, v25, v27, v28);
  v29 = TitleRootComponent_TypeInfo->static_fields;
  *(_QWORD *)&v29->BATTLERESUME_MESSAGE_FONT_SIZE = 0x411000000000001BLL;
  *(_QWORD *)&v29->BATTLERESUME_MESSAGE_SPACING_Y = 0x40E0000000000005LL;
  *(_OWORD *)&v29->TALKRESUME_MESSAGE_FONT_SIZE = xmmword_C0D5D0;
  v29->OPENING_MOVIE_CONFIRM_MESSAGE_FONT_SIZE = 23;
  v30 = StringLiteral_22717/*"playedMovie"*/;
  v29->SAVE_KEY_PLAYED_MOVIE = (struct System_String_o *)StringLiteral_22717/*"playedMovie"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v29->SAVE_KEY_PLAYED_MOVIE, v30, v31, v32);
  v33 = StringLiteral_22722/*"playingMovie"*/;
  v34 = (CGThumbnailListItem_o *)TitleRootComponent_TypeInfo->static_fields;
  v34[1].klass = (CGThumbnailListItem_c *)StringLiteral_22722/*"playingMovie"*/;
  sub_1C32BC4(v34 + 1, v33, v35, v36);
  v37 = StringLiteral_24095/*"title2_2"*/;
  v38 = TitleRootComponent_TypeInfo->static_fields;
  v38->PART2_CHAPTER6_EPILOGUE_BG_MOVIE_NAME = (struct System_String_o *)StringLiteral_24095/*"title2_2"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v38->PART2_CHAPTER6_EPILOGUE_BG_MOVIE_NAME, v37, v39, v40);
  v41 = TitleRootComponent_TypeInfo->static_fields;
  v41->PART2_CHAPTER6_EPILOGUE_BG_MOVIE_WAITTIME = 0.6;
  *(_QWORD *)&v41->ACCOUNT_LINKAGE_SELECT_CONTINUE_TYPE_HAS_DATA_FONT_SIZE = 0x1E00000016LL;
  v41->shouldFadeInOnError = 0;
}


void TitleRootComponent___ctor(TitleRootComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1

  if ( (byte_4C39E38 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_14484/*"Title/Prefabs/title_effect00"*/);
    byte_4C39E38 = 1;
  }
  v5 = StringLiteral_14484/*"Title/Prefabs/title_effect00"*/;
  this->fields.epicOfRemnantEffectPrefabName = (struct System_String_o *)StringLiteral_14484/*"Title/Prefabs/title_effect00"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.epicOfRemnantEffectPrefabName, v5, v2, v3);
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

  if ( (byte_4C39E2E & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AvalonSceneManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_TitleRootComponent__CancelAccountLinkageTakeOver_b__162_0__);
    byte_4C39E2E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  v7 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_TitleRootComponent__CancelAccountLinkageTakeOver_b__162_0__, 0);
  if ( !v5 )
    sub_1C32E7C(v8);
  CommonUI__maskFadeout(v5, 1, DEFAULT_FADE_TIME, v7, 0);
}


bool TitleRootComponent__CheckAndTransitionBattleTalk(TitleRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  DataManager_o *Instance; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct BattleScriptRootComponent_TalkScriptInfo_o *TalkResumeInfo; // x0
  Il2CppObject **p_talkResumeInfo; // x22
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  BattleScriptRootComponent_TalkScriptInfo_o *v11; // x0
  System_String_o *v12; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  Il2CppObject *v15; // x21
  TerminalPramsManager_c *v16; // x8
  int32_t v17; // w1
  CGThumbnailListItem_o *p_lastPlayBgmName; // x0
  int klass_high; // w8
  int32_t positionY; // w28
  System_String_o *v21; // x27
  QuestEntity_o *v22; // x25
  QuestConsumeItemEntity_o *ItemConsumeEntity; // x23
  Il2CppObject *MasterData_object; // x24
  unsigned int v25; // w25
  struct System_Int32_array *v26; // x8
  Il2CppObject *v27; // x0
  unsigned int v28; // w25
  struct System_Int32_array *itemIds; // x8
  Il2CppObject *Entity; // x0
  TerminalPramsManager_c *v31; // x0
  int lastPlayQuestConsumeAp; // w20
  __int64 *v33; // x8
  __int64 *v34; // x8
  System_Object_array *ListByType; // x23
  System_Func_object__bool__o *v36; // x24
  System_String_o *v37; // x0
  __int64 *v38; // x8
  System_String_o *v39; // x22
  System_String_o *v40; // x0
  System_String_o *v41; // x23
  System_String_o *v42; // x0
  Il2CppObject *v43; // x21
  System_String_o *v44; // x24
  System_String_o *v45; // x25
  TripleButtonDlgComponent_CallbackFunc_o *v46; // x26
  System_String_o *v47; // x0
  TerminalPramsManager_c *v48; // x8
  TitleRootComponent_c *v49; // x0
  TerminalPramsManager_c *v50; // x0
  System_String_o *v51; // x23
  int v52; // w20
  System_String_o *v53; // x0
  TitleRootComponent_c *v54; // x8

  if ( (byte_4C39E17 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Any_QuestReleaseEntity____78062248);
    sub_1C32C20(&TripleButtonDlgComponent_CallbackFunc_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_1C32C20(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C32C20(&System_Func_QuestReleaseEntity__bool__TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&ScriptManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    sub_1C32C20(&TitleRootComponent_TypeInfo);
    sub_1C32C20(&TutorialFlag_TypeInfo);
    sub_1C32C20(&Method_TitleRootComponent___c__DisplayClass137_0__CheckAndTransitionBattleTalk_b__0__);
    sub_1C32C20(&Method_TitleRootComponent___c__DisplayClass137_0__CheckAndTransitionBattleTalk_b__1__);
    sub_1C32C20(&TitleRootComponent___c__DisplayClass137_0_TypeInfo);
    sub_1C32C20(&StringLiteral_13346/*"TALKRESUME_CONFIRM_MESSAGE_QPITEM_PART"*/);
    sub_1C32C20(&StringLiteral_13347/*"TALKRESUME_CONFIRM_MESSAGE_QP_PART"*/);
    sub_1C32C20(&StringLiteral_13344/*"TALKRESUME_CONFIRM_MESSAGE_BEFORE_NONE_BATTLE"*/);
    sub_1C32C20(&StringLiteral_13345/*"TALKRESUME_CONFIRM_MESSAGE_ITEM_PART"*/);
    sub_1C32C20(&StringLiteral_13351/*"TALKRESUME_CONFIRM_MIDDLE_BEFORE_NONE_BATTLE"*/);
    sub_1C32C20(&StringLiteral_13343/*"TALKRESUME_CONFIRM_MESSAGE_BEFORE_BATTLE"*/);
    sub_1C32C20(&StringLiteral_13349/*"TALKRESUME_CONFIRM_MIDDLE_AFTER_NONE_BATTLE"*/);
    sub_1C32C20(&StringLiteral_13338/*"TALKRESUME_CONFIRM_MESSAGE_AFTER_BATTLE"*/);
    sub_1C32C20(&StringLiteral_13339/*"TALKRESUME_CONFIRM_MESSAGE_AFTER_NONE_BATTLE"*/);
    sub_1C32C20(&StringLiteral_13336/*"TALKRESUME_CONFIRM_CANCEL"*/);
    sub_1C32C20(&StringLiteral_13342/*"TALKRESUME_CONFIRM_MESSAGE_AP_PART"*/);
    sub_1C32C20(&StringLiteral_13337/*"TALKRESUME_CONFIRM_DECIDE"*/);
    sub_1C32C20(&StringLiteral_13340/*"TALKRESUME_CONFIRM_MESSAGE_AFTER_NONE_BATTLE_NO_CONSUME_AP0"*/);
    sub_1C32C20(&StringLiteral_13350/*"TALKRESUME_CONFIRM_MIDDLE_BEFORE_BATTLE"*/);
    sub_1C32C20(&StringLiteral_13348/*"TALKRESUME_CONFIRM_MIDDLE_AFTER_BATTLE"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_13352/*"TALKRESUME_CONFIRM_TITLE"*/);
    sub_1C32C20(&StringLiteral_13341/*"TALKRESUME_CONFIRM_MESSAGE_APQP_PART"*/);
    byte_4C39E17 = 1;
  }
  v3 = sub_1C32E6C(TitleRootComponent___c__DisplayClass137_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_127;
  *(_QWORD *)(v3 + 24) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 24), (int32_t)this, v5, v6);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  TalkResumeInfo = ScriptManager__GetTalkResumeInfo(0);
  p_talkResumeInfo = (Il2CppObject **)&this->fields.talkResumeInfo;
  this->fields.talkResumeInfo = TalkResumeInfo;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.talkResumeInfo, (int32_t)TalkResumeInfo, v9, v10);
  v11 = this->fields.talkResumeInfo;
  if ( v11 )
  {
    if ( BattleScriptRootComponent_TalkScriptInfo__IsRestorable(v11, 0) )
    {
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      if ( TutorialFlag__Get_40328320(102, 0) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v12 = LocalizationManager__Get((System_String_o *)StringLiteral_13352/*"TALKRESUME_CONFIRM_TITLE"*/, 0);
        v15 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_13342/*"TALKRESUME_CONFIRM_MESSAGE_AP_PART"*/, 0);
        v16 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v16 = TerminalPramsManager_TypeInfo;
        }
        v17 = StringLiteral_1/*""*/;
        p_lastPlayBgmName = (CGThumbnailListItem_o *)&v16->static_fields->lastPlayBgmName;
        p_lastPlayBgmName->klass = (CGThumbnailListItem_c *)StringLiteral_1/*""*/;
        sub_1C32BC4(p_lastPlayBgmName, v17, v13, v14);
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
            v21 = v12;
            Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_127;
            Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                          Instance,
                                          (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestMaster___);
            if ( !Instance )
              goto LABEL_127;
            Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                          *(_DWORD *)(v3 + 16),
                                          (const MethodInfo_3396838 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
            if ( !Instance )
              goto LABEL_127;
            v22 = (QuestEntity_o *)Instance;
            ItemConsumeEntity = QuestEntity__getItemConsumeEntity((QuestEntity_o *)Instance, 0, 0);
            Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_127;
            MasterData_object = DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ItemMaster___);
            Instance = (DataManager_o *)QuestEntity__GetConsumeType(v22, 0);
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
                Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13345/*"TALKRESUME_CONFIRM_MESSAGE_ITEM_PART"*/, 0);
                v15 = (Il2CppObject *)Instance;
              }
            }
            else if ( (_DWORD)Instance == 3 )
            {
              if ( ItemConsumeEntity )
              {
                Instance = (DataManager_o *)QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 0, 0);
                if ( ((unsigned __int8)Instance & 1) != 0 )
                {
                  v28 = 0;
                  while ( 1 )
                  {
                    itemIds = ItemConsumeEntity->fields.itemIds;
                    if ( !itemIds )
                      goto LABEL_127;
                    if ( v28 >= LODWORD(itemIds->max_length) )
LABEL_128:
                      sub_1C32E84(Instance);
                    if ( !MasterData_object )
                      goto LABEL_127;
                    Entity = DataMasterBase_object__object__int___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                               itemIds->m_Items[v28],
                               (const MethodInfo_3396838 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
                    if ( Entity )
                    {
                      if ( LODWORD(Entity[3].klass) == 1 )
                        break;
                    }
                    Instance = (DataManager_o *)QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, ++v28, 0);
                    if ( ((unsigned __int8)Instance & 1) == 0 )
                      goto LABEL_75;
                  }
                  if ( v28 || QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 1, 0) )
                  {
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    v34 = &StringLiteral_13346/*"TALKRESUME_CONFIRM_MESSAGE_QPITEM_PART"*/;
                  }
                  else
                  {
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    v34 = &StringLiteral_13347/*"TALKRESUME_CONFIRM_MESSAGE_QP_PART"*/;
                  }
                  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)*v34, 0);
                  v15 = (Il2CppObject *)Instance;
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
                Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13345/*"TALKRESUME_CONFIRM_MESSAGE_ITEM_PART"*/, 0);
                v15 = (Il2CppObject *)Instance;
              }
              if ( ItemConsumeEntity )
              {
                Instance = (DataManager_o *)QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 0, 0);
                if ( ((unsigned __int8)Instance & 1) != 0 )
                {
                  v25 = 0;
                  while ( 1 )
                  {
                    v26 = ItemConsumeEntity->fields.itemIds;
                    if ( !v26 )
                      goto LABEL_127;
                    if ( v25 >= LODWORD(v26->max_length) )
                      goto LABEL_128;
                    if ( !MasterData_object )
                      goto LABEL_127;
                    v27 = DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                            v26->m_Items[v25],
                            (const MethodInfo_3396838 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
                    if ( v27 )
                    {
                      if ( LODWORD(v27[3].klass) == 1 )
                        break;
                    }
                    Instance = (DataManager_o *)QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, ++v25, 0);
                    if ( ((unsigned __int8)Instance & 1) == 0 )
                      goto LABEL_75;
                  }
                  v31 = TerminalPramsManager_TypeInfo;
                  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                    v31 = TerminalPramsManager_TypeInfo;
                  }
                  lastPlayQuestConsumeAp = v31->static_fields->lastPlayQuestConsumeAp;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  if ( lastPlayQuestConsumeAp <= 0 )
                    v33 = &StringLiteral_13347/*"TALKRESUME_CONFIRM_MESSAGE_QP_PART"*/;
                  else
                    v33 = &StringLiteral_13341/*"TALKRESUME_CONFIRM_MESSAGE_APQP_PART"*/;
                  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)*v33, 0);
                  v15 = (Il2CppObject *)Instance;
LABEL_75:
                  v12 = v21;
                }
              }
            }
          }
          if ( *p_talkResumeInfo )
          {
            LOBYTE(v11) = 0;
            switch ( HIDWORD((*p_talkResumeInfo)[1].monitor) )
            {
              case 1:
                goto LABEL_87;
              case 3:
              case 7:
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v37 = LocalizationManager__Get((System_String_o *)StringLiteral_13343/*"TALKRESUME_CONFIRM_MESSAGE_BEFORE_BATTLE"*/, 0);
                v38 = &StringLiteral_13350/*"TALKRESUME_CONFIRM_MIDDLE_BEFORE_BATTLE"*/;
                goto LABEL_90;
              case 4:
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v39 = LocalizationManager__Get((System_String_o *)StringLiteral_13338/*"TALKRESUME_CONFIRM_MESSAGE_AFTER_BATTLE"*/, 0);
                v47 = LocalizationManager__Get((System_String_o *)StringLiteral_13348/*"TALKRESUME_CONFIRM_MIDDLE_AFTER_BATTLE"*/, 0);
                v48 = TerminalPramsManager_TypeInfo;
                v41 = v47;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v48 = TerminalPramsManager_TypeInfo;
                }
                if ( v48->static_fields->lastPlayQuestConsumeAp <= 0 )
                {
                  v49 = TitleRootComponent_TypeInfo;
                  if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
                    v49 = TitleRootComponent_TypeInfo;
                  }
                  positionY = v49->static_fields->TALKRESUME_AFTER_BATTLE_NO_CONSUME_AP_MESSAGE_POSITION_Y;
                }
                goto LABEL_92;
              case 5:
              case 6:
              case 8:
                Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !Instance )
                  goto LABEL_127;
                Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                              Instance,
                                              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
                if ( !Instance )
                  goto LABEL_127;
                ListByType = (System_Object_array *)QuestReleaseMaster__getListByType(
                                                      (QuestReleaseMaster_o *)Instance,
                                                      116,
                                                      0);
                v36 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_QuestReleaseEntity__bool__TypeInfo);
                System_Func_object__bool____ctor(
                  v36,
                  (Il2CppObject *)v3,
                  Method_TitleRootComponent___c__DisplayClass137_0__CheckAndTransitionBattleTalk_b__1__,
                  0);
                if ( BasicHelper__Any_object__51144764(
                       ListByType,
                       (System_Func_T__bool__o *)v36,
                       (const MethodInfo_30C683C *)Method_BasicHelper_Any_QuestReleaseEntity____78062248) )
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
                  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_13344/*"TALKRESUME_CONFIRM_MESSAGE_BEFORE_NONE_BATTLE"*/, 0);
                  v38 = &StringLiteral_13351/*"TALKRESUME_CONFIRM_MIDDLE_BEFORE_NONE_BATTLE"*/;
LABEL_90:
                  v39 = v37;
                  v40 = (System_String_o *)*v38;
                }
                else
                {
                  v50 = TerminalPramsManager_TypeInfo;
                  v51 = v12;
                  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                    v50 = TerminalPramsManager_TypeInfo;
                  }
                  v52 = v50->static_fields->lastPlayQuestConsumeAp;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  if ( v52 <= 0 )
                  {
                    v53 = LocalizationManager__Get((System_String_o *)StringLiteral_13340/*"TALKRESUME_CONFIRM_MESSAGE_AFTER_NONE_BATTLE_NO_CONSUME_AP0"*/, 0);
                    v54 = TitleRootComponent_TypeInfo;
                    v39 = v53;
                    v12 = v51;
                    if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
                      v54 = TitleRootComponent_TypeInfo;
                    }
                    positionY = v54->static_fields->TALKRESUME_AFTER_BATTLE_NO_CONSUME_AP_MESSAGE_POSITION_Y;
                  }
                  else
                  {
                    v39 = LocalizationManager__Get((System_String_o *)StringLiteral_13339/*"TALKRESUME_CONFIRM_MESSAGE_AFTER_NONE_BATTLE"*/, 0);
                    v12 = v51;
                  }
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v40 = (System_String_o *)StringLiteral_13349/*"TALKRESUME_CONFIRM_MIDDLE_AFTER_NONE_BATTLE"*/;
                }
                v41 = LocalizationManager__Get(v40, 0);
LABEL_92:
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v42 = LocalizationManager__Get((System_String_o *)StringLiteral_13340/*"TALKRESUME_CONFIRM_MESSAGE_AFTER_NONE_BATTLE_NO_CONSUME_AP0"*/, 0);
                if ( System_String__op_Inequality(v39, v42, 0) )
                  v39 = System_String__Format(v39, v15, 0);
                v43 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v44 = LocalizationManager__Get((System_String_o *)StringLiteral_13336/*"TALKRESUME_CONFIRM_CANCEL"*/, 0);
                v45 = LocalizationManager__Get((System_String_o *)StringLiteral_13337/*"TALKRESUME_CONFIRM_DECIDE"*/, 0);
                v46 = (TripleButtonDlgComponent_CallbackFunc_o *)sub_1C32E6C(TripleButtonDlgComponent_CallbackFunc_TypeInfo);
                TripleButtonDlgComponent_CallbackFunc___ctor(
                  v46,
                  (Il2CppObject *)v3,
                  Method_TitleRootComponent___c__DisplayClass137_0__CheckAndTransitionBattleTalk_b__0__,
                  0);
                Instance = (DataManager_o *)TitleRootComponent_TypeInfo;
                if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
                  Instance = (DataManager_o *)TitleRootComponent_TypeInfo;
                }
                if ( !v43 )
                  goto LABEL_127;
                CommonUI__OpenTripleButtonDlg(
                  (CommonUI_o *)v43,
                  v12,
                  v39,
                  v44,
                  v41,
                  v45,
                  v46,
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
                return (char)v11;
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
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( Instance )
          {
            AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 38, 2, *p_talkResumeInfo, 0, 0);
LABEL_102:
            LOBYTE(v11) = 1;
            return (char)v11;
          }
        }
      }
LABEL_127:
      sub_1C32E7C(Instance);
    }
LABEL_81:
    LOBYTE(v11) = 0;
  }
  return (char)v11;
}


void TitleRootComponent__CheckBattleBefore(TitleRootComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TitleRootComponent_o *v4; // x19
  struct BattleScriptRootComponent_TalkScriptInfo_o *talkResumeInfo; // x8
  int32_t talkType; // w8
  struct BattleScriptRootComponent_TalkScriptInfo_o *v7; // x8
  int32_t qId; // w21
  struct BattleScriptRootComponent_TalkScriptInfo_o *v9; // x8
  int32_t pId; // w21
  struct BattleScriptRootComponent_TalkScriptInfo_o *v11; // x21
  CGThumbnailListItem_o *p_updateAnchors; // x0
  const MethodInfo *v13; // x1

  v4 = this;
  if ( (byte_4C39E18 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    this = (TitleRootComponent_o *)sub_1C32C20(&StringLiteral_6979/*"GO_TERMINAL"*/);
    byte_4C39E18 = 1;
  }
  talkResumeInfo = v4->fields.talkResumeInfo;
  if ( !talkResumeInfo )
    goto LABEL_44;
  talkType = talkResumeInfo->fields.talkType;
  if ( (unsigned int)(talkType - 7) < 2 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C342AE )
    {
      sub_1C32C20(&TerminalPramsManager_TypeInfo);
      byte_4C342AE = 1;
    }
    this = (TitleRootComponent_o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      this = (TitleRootComponent_o *)TerminalPramsManager_TypeInfo;
    }
    LODWORD(this->fields.takteOverIdLb->klass) = 2;
    if ( !byte_4C3219C )
    {
      sub_1C32C20(&TerminalPramsManager_TypeInfo);
      this = (TitleRootComponent_o *)TerminalPramsManager_TypeInfo;
      byte_4C3219C = 1;
    }
    if ( !LODWORD(this->fields.takeoverPasswardInput) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (TitleRootComponent_o *)TerminalPramsManager_TypeInfo;
    }
    BYTE5(this->fields.takteOverIdLb[1].fields.rightAnchor) = 1;
    if ( !byte_4C3359F )
    {
      sub_1C32C20(&TerminalPramsManager_TypeInfo);
      this = (TitleRootComponent_o *)TerminalPramsManager_TypeInfo;
      byte_4C3359F = 1;
    }
    if ( !LODWORD(this->fields.takeoverPasswardInput) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (TitleRootComponent_o *)TerminalPramsManager_TypeInfo;
    }
    HIBYTE(this->fields.takteOverIdLb->fields.mUpdateFrame) = 0;
    if ( !byte_4C34DEC )
    {
      sub_1C32C20(&TerminalPramsManager_TypeInfo);
      this = (TitleRootComponent_o *)TerminalPramsManager_TypeInfo;
      byte_4C34DEC = 1;
    }
    if ( !LODWORD(this->fields.takeoverPasswardInput) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (TitleRootComponent_o *)TerminalPramsManager_TypeInfo;
    }
    this->fields.takteOverIdLb->fields.mAnchorsCached = 1;
    v7 = v4->fields.talkResumeInfo;
    if ( v7 )
    {
      qId = v7->fields.qId;
      if ( !byte_4C34DEA )
      {
        sub_1C32C20(&TerminalPramsManager_TypeInfo);
        this = (TitleRootComponent_o *)TerminalPramsManager_TypeInfo;
        byte_4C34DEA = 1;
      }
      if ( !LODWORD(this->fields.takeoverPasswardInput) )
      {
        j_il2cpp_runtime_class_init_0(this);
        this = (TitleRootComponent_o *)TerminalPramsManager_TypeInfo;
      }
      LODWORD(this->fields.takteOverIdLb[1].fields.topAnchor) = qId;
      v9 = v4->fields.talkResumeInfo;
      if ( v9 )
      {
        pId = v9->fields.pId;
        if ( !byte_4C34DEB )
        {
          sub_1C32C20(&TerminalPramsManager_TypeInfo);
          this = (TitleRootComponent_o *)TerminalPramsManager_TypeInfo;
          byte_4C34DEB = 1;
        }
        if ( !LODWORD(this->fields.takeoverPasswardInput) )
        {
          j_il2cpp_runtime_class_init_0(this);
          this = (TitleRootComponent_o *)TerminalPramsManager_TypeInfo;
        }
        HIDWORD(this->fields.takteOverIdLb[1].fields.topAnchor) = pId;
        v11 = v4->fields.talkResumeInfo;
        if ( !byte_4C34AD8 )
        {
          sub_1C32C20(&TerminalPramsManager_TypeInfo);
          this = (TitleRootComponent_o *)TerminalPramsManager_TypeInfo;
          byte_4C34AD8 = 1;
        }
        if ( !LODWORD(this->fields.takeoverPasswardInput) )
        {
          j_il2cpp_runtime_class_init_0(this);
          this = (TitleRootComponent_o *)TerminalPramsManager_TypeInfo;
        }
        p_updateAnchors = (CGThumbnailListItem_o *)&this->fields.takteOverIdLb[1].fields.updateAnchors;
        p_updateAnchors->klass = (CGThumbnailListItem_c *)v11;
        sub_1C32BC4(p_updateAnchors, (int32_t)v11, v2, v3);
        TitleRootComponent__ReleaseTitleAssets(v4, v13);
        this = (TitleRootComponent_o *)v4->fields.myFSM;
        if ( this )
        {
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_6979/*"GO_TERMINAL"*/, 0);
          return;
        }
      }
    }
LABEL_44:
    sub_1C32E7C(this);
  }
  if ( talkType == 3 )
  {
    TitleRootComponent__callHomeRequest(v4, method);
  }
  else
  {
    this = (TitleRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this )
      goto LABEL_44;
    CommonUI__SetChangeOtherConnectMarkFromPlayerPrefs((CommonUI_o *)this, 0);
    this = (TitleRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !this )
      goto LABEL_44;
    AvalonSceneManager__transitionSceneRefresh(
      (AvalonSceneManager_o *)this,
      38,
      2,
      (Il2CppObject *)v4->fields.talkResumeInfo,
      0,
      0);
  }
}


void TitleRootComponent__CheckChangeTitle(TitleRootComponent_o *this, const MethodInfo *method)
{
  TitleRootComponent_c *v3; // x0
  TitleIlluminationManager_o *StoryProgress; // x0
  UnityEngine_GameObject_o *copylightImg; // x8
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  TitleRootComponent_c *v8; // x0
  struct System_String_o **p_DEFAULT_BGM; // x8
  struct System_String_o *v10; // x1
  Il2CppObject *object; // x21
  UnityEngine_Transform_o *transform; // x0
  struct UnityEngine_GameObject_o *v13; // x0
  struct UnityEngine_GameObject_o **p_titleBgEffect; // x20
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  UISprite_o *titleImgSprite; // x21
  struct System_String_o *EPIC_OF_REMNANT_BGM; // x1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  UnityEngine_Object_o *epicOfRemnantTitleBgObject; // x20
  bool v22; // w1
  UnityEngine_GameObject_o *cosmosInTheLostbeltEffectPrefab; // x20
  UnityEngine_Transform_o *v24; // x0
  struct UnityEngine_GameObject_o *v25; // x0
  struct UnityEngine_GameObject_o **v26; // x20
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  UISprite_o *v29; // x21
  struct System_String_o *COSMOS_IN_THE_LOSTBELT_BGM; // x1
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  bool v33; // w1
  UISprite_o *v34; // x20
  struct System_String_o *COSMOS_IN_THE_LOSTBELT_VER2_BGM; // x1
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  UnityEngine_Object_o *v38; // x20

  if ( (byte_4C39DF8 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponentInChildren_Camera___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Resources_Load_GameObject___);
    sub_1C32C20(&TitleRootComponent_TypeInfo);
    byte_4C39DF8 = 1;
  }
  v3 = TitleRootComponent_TypeInfo;
  if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
  StoryProgress = (TitleIlluminationManager_o *)TitleRootComponent__GetStoryProgress((const MethodInfo *)v3);
  copylightImg = this->fields.copylightImg;
  this->fields.storyProgress = (int)StoryProgress;
  if ( !copylightImg )
LABEL_72:
    sub_1C32E7C(StoryProgress);
  UnityEngine_GameObject__SetActive(copylightImg, 1, 0);
  switch ( this->fields.storyProgress )
  {
    case 0:
      v8 = TitleRootComponent_TypeInfo;
      if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
        v8 = TitleRootComponent_TypeInfo;
      }
      p_DEFAULT_BGM = &v8->static_fields->DEFAULT_BGM;
      v10 = *p_DEFAULT_BGM;
      this->fields.bgmName = *p_DEFAULT_BGM;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.bgmName, (int32_t)v10, v6, v7);
      StoryProgress = this->fields.effectManager;
      if ( !StoryProgress )
        goto LABEL_72;
      TitleIlluminationManager__StartIllumination(StoryProgress, 0);
      goto LABEL_65;
    case 1:
      object = UnityEngine_Resources__Load_object_(
                 this->fields.epicOfRemnantEffectPrefabName,
                 (const MethodInfo_31799A8 *)Method_UnityEngine_Resources_Load_GameObject___);
      StoryProgress = (TitleIlluminationManager_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0);
      if ( !StoryProgress )
        goto LABEL_72;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)StoryProgress, 0);
      v13 = BaseMonoBehaviour__createObject(
              (BaseMonoBehaviour_o *)this,
              (UnityEngine_GameObject_o *)object,
              transform,
              0,
              0);
      p_titleBgEffect = &this->fields.titleBgEffect;
      this->fields.titleBgEffect = v13;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.titleBgEffect, (int32_t)v13, v15, v16);
      if ( !object )
        goto LABEL_72;
      StoryProgress = (TitleIlluminationManager_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                                      (UnityEngine_GameObject_o *)object,
                                                      (const MethodInfo_3134BD4 *)Method_UnityEngine_GameObject_GetComponentInChildren_Camera___);
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
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.bgmName, (int32_t)EPIC_OF_REMNANT_BGM, v19, v20);
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
      v22 = 1;
      goto LABEL_70;
    case 2:
      StoryProgress = (TitleIlluminationManager_o *)this->fields.effectParentObject;
      if ( !StoryProgress )
        goto LABEL_72;
      cosmosInTheLostbeltEffectPrefab = this->fields.cosmosInTheLostbeltEffectPrefab;
      v24 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)StoryProgress, 0);
      v25 = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, cosmosInTheLostbeltEffectPrefab, v24, 0, 0);
      v26 = &this->fields.titleBgEffect;
      this->fields.titleBgEffect = v25;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.titleBgEffect, (int32_t)v25, v27, v28);
      StoryProgress = (TitleIlluminationManager_o *)this->fields.backImg;
      if ( !StoryProgress )
        goto LABEL_72;
      ((void (__fastcall *)(TitleIlluminationManager_o *, struct UnityEngine_Texture2D_o *, void *))StoryProgress->klass[1].vtable._3_ToString.method)(
        StoryProgress,
        this->fields.cosmosInTheLostbeltTitleBg,
        StoryProgress->klass[2]._1.image);
      StoryProgress = (TitleIlluminationManager_o *)TitleRootComponent_TypeInfo;
      v29 = this->fields.titleImgSprite;
      if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
      if ( !v29 )
        goto LABEL_72;
      UISprite__set_spriteName(v29, TitleRootComponent_TypeInfo->static_fields->COSMOS_IN_THE_LOSTBELT_TITLE, 0);
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
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.bgmName, (int32_t)COSMOS_IN_THE_LOSTBELT_BGM, v31, v32);
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
      StoryProgress = (TitleIlluminationManager_o *)*v26;
      if ( !*v26 )
        goto LABEL_72;
      v33 = 1;
      goto LABEL_64;
    case 3:
      StoryProgress = (TitleIlluminationManager_o *)TitleRootComponent_TypeInfo;
      v34 = this->fields.titleImgSprite;
      if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
      if ( !v34 )
        goto LABEL_72;
      UISprite__set_spriteName(v34, TitleRootComponent_TypeInfo->static_fields->COSMOS_IN_THE_LOSTBELT_TITLE, 0);
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
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.bgmName, (int32_t)COSMOS_IN_THE_LOSTBELT_VER2_BGM, v36, v37);
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
      v33 = 0;
LABEL_64:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)StoryProgress, v33, 0);
LABEL_65:
      v38 = (UnityEngine_Object_o *)this->fields.epicOfRemnantTitleBgObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v38, 0, 0) )
        return;
      StoryProgress = (TitleIlluminationManager_o *)this->fields.epicOfRemnantTitleBgObject;
      if ( !StoryProgress )
        goto LABEL_72;
      v22 = 0;
LABEL_70:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)StoryProgress, v22, 0);
      return;
    default:
      return;
  }
}


bool TitleRootComponent__CheckValidBattleSaveData(TitleRootComponent_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  int64_t ResumeBattleId; // x0
  struct WarBoardDataEntity_o *resumeWarBoardData; // x23
  __int64 v6; // x20
  System_String_o *AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY; // x21
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  NetworkManager_ResultCallbackFunc_o *v10; // x21
  Il2CppObject *Request_object; // x19
  int32_t v12; // w21
  int32_t v13; // w22
  System_Int32_array *v14; // x4
  int64_t v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  struct WarBoardDataEntity_o *v18; // x8
  NetworkManager_ResultCallbackFunc_o *v19; // x21
  struct WarBoardDataEntity_o *v20; // x8
  CommonConfirmDialog_ClickDelegate_o *v21; // x20
  TitleRootComponent_o *v22; // x0
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x1
  int32_t SavedQuestId; // w20
  int32_t SavedQuestPhase; // w21
  System_Int32_array *WaveClearTurn; // x22
  NetworkManager_ResultCallbackFunc_o *v28; // x23

  if ( (byte_4C39E12 & 1) == 0 )
  {
    sub_1C32C20(&BattleData_TypeInfo);
    sub_1C32C20(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C32C20(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C32C20(&Method_NetworkManager_getRequest_BattleResumeRequest___);
    sub_1C32C20(&Method_NetworkManager_getRequest_WarBoardBattleResumeRequest___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&PurchaseBehaviour_TypeInfo);
    sub_1C32C20(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_TitleRootComponent_OnClickConfirmWarBoardResumDialog__);
    sub_1C32C20(&Method_TitleRootComponent_endRequestBattleResumeRequest__);
    sub_1C32C20(&WarBoardData_TypeInfo);
    sub_1C32C20(&StringLiteral_6979/*"GO_TERMINAL"*/);
    byte_4C39E12 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  CommonUI__CheckChangeOtherConnectMark(Instance, 0);
  if ( !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  ResumeBattleId = BattleData__getResumeBattleId(0);
  resumeWarBoardData = this->fields.resumeWarBoardData;
  v6 = ResumeBattleId;
  if ( WarBoardData_TypeInfo->_2.cctor_finished )
  {
    if ( resumeWarBoardData )
      goto LABEL_8;
LABEL_13:
    WarBoardData__DeleteAfterContinueDeviceLocalSave(0);
    if ( v6 < 1 )
    {
      if ( TitleRootComponent__CheckAndTransitionBattleTalk(this, v9) )
        return 1;
      if ( !BattleData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
      if ( !BattleData__isReserveResumeBattle(0) )
      {
        TitleRootComponent__ReleaseTitleAssets(this, v24);
        if ( !BattleData_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
        BattleData__setContinueBattleFlg(0, 1, 0);
        Instance = (CommonUI_o *)this->fields.myFSM;
        if ( Instance )
        {
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_6979/*"GO_TERMINAL"*/, 0);
          return 1;
        }
        goto LABEL_46;
      }
      if ( !BattleData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
      SavedQuestId = BattleData__getSavedQuestId(0);
      SavedQuestPhase = BattleData__getSavedQuestPhase(0);
      WaveClearTurn = BattleData__getWaveClearTurn(0);
      v28 = (NetworkManager_ResultCallbackFunc_o *)sub_1C32E6C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v28,
        (Il2CppObject *)this,
        Method_TitleRootComponent_endRequestBattleResumeRequest__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (CommonUI_o *)NetworkManager__getRequest_object_(
                                 v28,
                                 (const MethodInfo_3168488 *)Method_NetworkManager_getRequest_BattleResumeRequest___);
      if ( !Instance )
        goto LABEL_46;
      v15 = -1;
      v16 = SavedQuestId;
      v17 = SavedQuestPhase;
      v14 = WaveClearTurn;
    }
    else
    {
      v10 = (NetworkManager_ResultCallbackFunc_o *)sub_1C32E6C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_TitleRootComponent_endRequestBattleResumeRequest__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = NetworkManager__getRequest_object_(
                         v10,
                         (const MethodInfo_3168488 *)Method_NetworkManager_getRequest_BattleResumeRequest___);
      if ( !BattleData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
      v12 = BattleData__getSavedQuestId(0);
      v13 = BattleData__getSavedQuestPhase(0);
      Instance = (CommonUI_o *)BattleData__getWaveClearTurn(0);
      if ( !Request_object )
        goto LABEL_46;
      v14 = (System_Int32_array *)Instance;
      Instance = (CommonUI_o *)Request_object;
      v15 = v6;
      v16 = v12;
      v17 = v13;
    }
    BattleResumeRequest__beginRequest((BattleResumeRequest_o *)Instance, v15, v16, v17, v14, 0);
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
    v18 = this->fields.resumeWarBoardData;
    if ( v18 )
    {
      if ( v18->fields.progressType != 2 )
      {
        v21 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C32E6C(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          v21,
          (Il2CppObject *)this,
          Method_TitleRootComponent_OnClickConfirmWarBoardResumDialog__,
          0);
        TitleRootComponent__ConfirmWarBoardResume(v22, v21, v23);
        return 1;
      }
      v19 = (NetworkManager_ResultCallbackFunc_o *)sub_1C32E6C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v19,
        (Il2CppObject *)this,
        Method_TitleRootComponent_endRequestBattleResumeRequest__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (CommonUI_o *)NetworkManager__getRequest_object_(
                                 v19,
                                 (const MethodInfo_3168488 *)Method_NetworkManager_getRequest_WarBoardBattleResumeRequest___);
      v20 = this->fields.resumeWarBoardData;
      if ( v20 )
      {
        if ( Instance )
        {
          WarBoardBattleResumeRequest__beginRequest(
            (WarBoardBattleResumeRequest_o *)Instance,
            v20->fields.stageId,
            v6 & ~(v6 >> 63),
            0);
          return 1;
        }
      }
    }
LABEL_46:
    sub_1C32E7C(Instance);
  }
  TitleRootComponent__RetireWarBoard(this, v8);
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

  if ( (byte_4C39E25 & 1) == 0 )
  {
    sub_1C32C20(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_TitleRootComponent_OnConfirmBattleContinueResume__);
    sub_1C32C20(&StringLiteral_2681/*"BATTLECONTINUERESUME_CONFIRM_TITLE"*/);
    sub_1C32C20(&StringLiteral_2680/*"BATTLECONTINUERESUME_CONFIRM_MESSAGE"*/);
    sub_1C32C20(&StringLiteral_2679/*"BATTLECONTINUERESUME_CONFIRM_DECIDE"*/);
    sub_1C32C20(&StringLiteral_2678/*"BATTLECONTINUERESUME_CONFIRM_CANCEL"*/);
    byte_4C39E25 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_2681/*"BATTLECONTINUERESUME_CONFIRM_TITLE"*/, 0);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_2680/*"BATTLECONTINUERESUME_CONFIRM_MESSAGE"*/, 0);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_2679/*"BATTLECONTINUERESUME_CONFIRM_DECIDE"*/, 0);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_2678/*"BATTLECONTINUERESUME_CONFIRM_CANCEL"*/, 0);
  v8 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C32E6C(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v8,
    (Il2CppObject *)this,
    Method_TitleRootComponent_OnConfirmBattleContinueResume__,
    0);
  if ( !Instance )
    sub_1C32E7C(v9);
  CommonUI__OpenConfirmDialog_31190412((CommonUI_o *)Instance, v4, v5, v6, v7, v8, 0, 0, 0, 0);
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
  Il2CppObject *Entity; // x26
  TitleRootComponent_c *v14; // x8
  struct TitleRootComponent_StaticFields *static_fields; // x8
  float BATTLERESUME_MESSAGE_POSITION_Y; // s8
  int32_t BATTLERESUME_MESSAGE_FONT_SIZE; // w22
  bool HasFlag; // w24
  System_String_o *v19; // x0
  bool isCancelTxtTwoLine; // w27
  int32_t v21; // w23
  System_String_o *v22; // x24
  CommonConfirmDialog_ClickDelegate_o *v23; // x26
  TitleRootComponent_o *v24; // x0
  float v25; // s1
  System_Collections_IEnumerator_o *v26; // x0
  Il2CppObject *v28; // x24
  System_String_o *v29; // x25
  const MethodInfo *v30; // x2
  QuestConsumeItemEntity_o *ItemConsumeEntity; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v32; // x27
  unsigned int v33; // w28
  struct System_Int32_array *itemIds; // x8
  Il2CppObject *v35; // x0
  __int64 *v36; // x8
  QuestConsumeItemEntity_o *v37; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v38; // x27
  TerminalPramsManager_c *v39; // x0
  __int64 v40; // x24
  unsigned int v41; // w28
  struct System_Int32_array *v42; // x8
  Il2CppObject *v43; // x0
  TerminalPramsManager_c *v44; // x0
  __int64 *v45; // x8
  bool v46; // w23
  System_String_o *v47; // x0
  TitleRootComponent_c *v48; // x0
  const MethodInfo *v49; // [xsp+10h] [xbp-80h]
  Il2CppObject *v50; // [xsp+28h] [xbp-68h]

  v2 = this;
  if ( (byte_4C39E1C & 1) == 0 )
  {
    sub_1C32C20(&BattleData_TypeInfo);
    sub_1C32C20(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C32C20(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    sub_1C32C20(&Method_TitleRootComponent_OnClickConfirmWarBoardBattleResumDialog__);
    sub_1C32C20(&Method_TitleRootComponent_OnConfirmBattleResume__);
    sub_1C32C20(&TitleRootComponent_TypeInfo);
    sub_1C32C20(&StringLiteral_2689/*"BATTLERESUME_CONFIRM_MESSAGE_CONSUME_ITEM_QP"*/);
    sub_1C32C20(&StringLiteral_2690/*"BATTLERESUME_CONFIRM_MESSAGE_CONSUME_QP"*/);
    sub_1C32C20(&StringLiteral_3798/*"CONSUME_TYPE_AP"*/);
    sub_1C32C20(&StringLiteral_2691/*"BATTLERESUME_CONFIRM_MESSAGE_CUSTOM"*/);
    sub_1C32C20(&StringLiteral_2692/*"BATTLERESUME_CONFIRM_MESSAGE_NO_CONSUME"*/);
    sub_1C32C20(&StringLiteral_2694/*"BATTLERESUME_CONFIRM_MESSAGE_TEMPORARY_WITHDRAWAL"*/);
    sub_1C32C20(&StringLiteral_2695/*"BATTLERESUME_CONFIRM_TEMPORARY_WITHDRAWAL"*/);
    sub_1C32C20(&StringLiteral_2696/*"BATTLERESUME_CONFIRM_TITLE"*/);
    sub_1C32C20(&StringLiteral_3799/*"CONSUME_TYPE_RP"*/);
    sub_1C32C20(&StringLiteral_2685/*"BATTLERESUME_CONFIRM_MESSAGE_CONSUME_AP0"*/);
    sub_1C32C20(&StringLiteral_2686/*"BATTLERESUME_CONFIRM_MESSAGE_CONSUME_AP_ITEM"*/);
    sub_1C32C20(&StringLiteral_2682/*"BATTLERESUME_CONFIRM_CANCEL"*/);
    sub_1C32C20(&StringLiteral_2683/*"BATTLERESUME_CONFIRM_DECIDE"*/);
    sub_1C32C20(&StringLiteral_2687/*"BATTLERESUME_CONFIRM_MESSAGE_CONSUME_AP_QP"*/);
    sub_1C32C20(&StringLiteral_2693/*"BATTLERESUME_CONFIRM_MESSAGE_TEMPORARY_TITLE"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_2684/*"BATTLERESUME_CONFIRM_MESSAGE"*/);
    this = (TitleRootComponent_o *)sub_1C32C20(&StringLiteral_2688/*"BATTLERESUME_CONFIRM_MESSAGE_CONSUME_ITEM"*/);
    byte_4C39E1C = 1;
  }
  if ( TitleRootComponent__IsTutorialBattleNow(this, method) )
  {
    TitleRootComponent__OnConfirmBattleResume(v2, 1, v3);
    return 1;
  }
  resumeWarBoardData = v2->fields.resumeWarBoardData;
  if ( resumeWarBoardData && resumeWarBoardData->fields.progressType == 2 )
  {
    v5 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C32E6C(CommonConfirmDialog_ClickDelegate_TypeInfo);
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
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_2684/*"BATTLERESUME_CONFIRM_MESSAGE"*/, 0);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_2682/*"BATTLERESUME_CONFIRM_CANCEL"*/, 0);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_2696/*"BATTLERESUME_CONFIRM_TITLE"*/, 0);
  if ( !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  SavedQuestId = BattleData__getSavedQuestId(0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0 )
  {
LABEL_88:
    sub_1C32E7C(Instance);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             SavedQuestId,
             (const MethodInfo_3396838 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  v14 = TitleRootComponent_TypeInfo;
  if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
    v14 = TitleRootComponent_TypeInfo;
  }
  static_fields = v14->static_fields;
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
    v28 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_3798/*"CONSUME_TYPE_AP"*/, 0);
    v29 = (System_String_o *)StringLiteral_2691/*"BATTLERESUME_CONFIRM_MESSAGE_CUSTOM"*/;
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
          v29 = (System_String_o *)StringLiteral_2685/*"BATTLERESUME_CONFIRM_MESSAGE_CONSUME_AP0"*/;
        }
        else
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3798/*"CONSUME_TYPE_AP"*/, 0);
          v28 = (Il2CppObject *)Instance;
        }
        goto LABEL_77;
      case 2:
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3799/*"CONSUME_TYPE_RP"*/, 0);
        v28 = (Il2CppObject *)Instance;
        goto LABEL_77;
      case 3:
        ItemConsumeEntity = QuestEntity__getItemConsumeEntity((QuestEntity_o *)Entity, 0, 0);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_88;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !ItemConsumeEntity )
          goto LABEL_77;
        v32 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        v28 = (Il2CppObject *)StringLiteral_1/*""*/;
        v29 = (System_String_o *)StringLiteral_2688/*"BATTLERESUME_CONFIRM_MESSAGE_CONSUME_ITEM"*/;
        Instance = (DataManager_o *)QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 0, 0);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          goto LABEL_77;
        v50 = v28;
        v33 = 0;
        while ( 1 )
        {
          itemIds = ItemConsumeEntity->fields.itemIds;
          if ( !itemIds )
            goto LABEL_88;
          if ( v33 >= LODWORD(itemIds->max_length) )
            goto LABEL_89;
          if ( !v32 )
            goto LABEL_88;
          v35 = DataMasterBase_object__object__int___GetEntity(
                  v32,
                  itemIds->m_Items[v33],
                  (const MethodInfo_3396838 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          if ( v35 && LODWORD(v35[3].klass) == 1 )
          {
            if ( v33 || QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 1, 0) )
              v36 = &StringLiteral_2689/*"BATTLERESUME_CONFIRM_MESSAGE_CONSUME_ITEM_QP"*/;
            else
              v36 = &StringLiteral_2690/*"BATTLERESUME_CONFIRM_MESSAGE_CONSUME_QP"*/;
            v29 = (System_String_o *)*v36;
          }
          Instance = (DataManager_o *)QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, ++v33, 0);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            goto LABEL_75;
        }
      case 4:
        v28 = (Il2CppObject *)StringLiteral_1/*""*/;
        v37 = QuestEntity__getItemConsumeEntity((QuestEntity_o *)Entity, 0, 0);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_88;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !v37 )
          goto LABEL_77;
        v50 = v28;
        v38 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        v39 = TerminalPramsManager_TypeInfo;
        v40 = StringLiteral_2686/*"BATTLERESUME_CONFIRM_MESSAGE_CONSUME_AP_ITEM"*/;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v39 = TerminalPramsManager_TypeInfo;
        }
        if ( v39->static_fields->lastPlayQuestConsumeAp <= 0 )
          v29 = (System_String_o *)StringLiteral_2688/*"BATTLERESUME_CONFIRM_MESSAGE_CONSUME_ITEM"*/;
        else
          v29 = (System_String_o *)v40;
        Instance = (DataManager_o *)QuestConsumeItemEntity__IsAvailableAt(v37, 0, 0);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          goto LABEL_75;
        v41 = 0;
        break;
      default:
        goto LABEL_77;
    }
    do
    {
      v42 = v37->fields.itemIds;
      if ( !v42 )
        goto LABEL_88;
      if ( v41 >= LODWORD(v42->max_length) )
LABEL_89:
        sub_1C32E84(Instance);
      if ( !v38 )
        goto LABEL_88;
      v43 = DataMasterBase_object__object__int___GetEntity(
              v38,
              v42->m_Items[v41],
              (const MethodInfo_3396838 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( v43 && LODWORD(v43[3].klass) == 1 )
      {
        v44 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v44 = TerminalPramsManager_TypeInfo;
        }
        if ( v44->static_fields->lastPlayQuestConsumeAp <= 0 )
          v45 = &StringLiteral_2690/*"BATTLERESUME_CONFIRM_MESSAGE_CONSUME_QP"*/;
        else
          v45 = &StringLiteral_2687/*"BATTLERESUME_CONFIRM_MESSAGE_CONSUME_AP_QP"*/;
        v29 = (System_String_o *)*v45;
      }
      Instance = (DataManager_o *)QuestConsumeItemEntity__IsAvailableAt(v37, ++v41, 0);
    }
    while ( ((unsigned __int8)Instance & 1) != 0 );
LABEL_75:
    v28 = v50;
LABEL_77:
    if ( TitleRootComponent__IsInterruptibleQuest((TitleRootComponent_o *)Instance, SavedQuestId, v30) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v8 = LocalizationManager__Get((System_String_o *)StringLiteral_2694/*"BATTLERESUME_CONFIRM_MESSAGE_TEMPORARY_WITHDRAWAL"*/, 0);
      v9 = LocalizationManager__Get((System_String_o *)StringLiteral_2695/*"BATTLERESUME_CONFIRM_TEMPORARY_WITHDRAWAL"*/, 0);
      v10 = LocalizationManager__Get((System_String_o *)StringLiteral_2693/*"BATTLERESUME_CONFIRM_MESSAGE_TEMPORARY_TITLE"*/, 0);
      BATTLERESUME_MESSAGE_POSITION_Y = 0.0;
      isCancelTxtTwoLine = 1;
      BATTLERESUME_MESSAGE_FONT_SIZE = 23;
      v21 = 280;
      goto LABEL_23;
    }
    v46 = System_String__op_Equality(v29, (System_String_o *)StringLiteral_2685/*"BATTLERESUME_CONFIRM_MESSAGE_CONSUME_AP0"*/, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v47 = LocalizationManager__Get(v29, 0);
    v8 = v47;
    if ( v46 )
    {
      v48 = TitleRootComponent_TypeInfo;
      if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
        v48 = TitleRootComponent_TypeInfo;
      }
      isCancelTxtTwoLine = 0;
      BATTLERESUME_MESSAGE_POSITION_Y = v48->static_fields->BATTLERESUME_NO_CONSUME_AP_MESSAGE_POSITION_Y;
      goto LABEL_22;
    }
    v19 = System_String__Format(v47, v28, 0);
    goto LABEL_20;
  }
  if ( !HasFlag )
    goto LABEL_28;
LABEL_19:
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_2692/*"BATTLERESUME_CONFIRM_MESSAGE_NO_CONSUME"*/, 0);
LABEL_20:
  v8 = v19;
LABEL_21:
  isCancelTxtTwoLine = 0;
LABEL_22:
  v21 = 240;
LABEL_23:
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_2683/*"BATTLERESUME_CONFIRM_DECIDE"*/, 0);
  v23 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C32E6C(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v23,
    (Il2CppObject *)v2,
    Method_TitleRootComponent_OnConfirmBattleResume__,
    0);
  v26 = TitleRootComponent__WaitPurchase(
          v24,
          v10,
          v8,
          v22,
          v9,
          v23,
          BATTLERESUME_MESSAGE_FONT_SIZE,
          BATTLERESUME_MESSAGE_POSITION_Y,
          v25,
          v21,
          isCancelTxtTwoLine,
          0,
          v49);
  UnityEngine_MonoBehaviour__StartCoroutine_71209212((UnityEngine_MonoBehaviour_o *)v2, v26, 0);
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

  if ( (byte_4C39E20 & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&StringLiteral_15414/*"WARBOARD_RESUME_CONFIRM_DIALOG_YES"*/);
    sub_1C32C20(&StringLiteral_15411/*"WARBOARD_RESUME_CONFIRM_DIALOG_MESSAGE"*/);
    sub_1C32C20(&StringLiteral_15412/*"WARBOARD_RESUME_CONFIRM_DIALOG_NO"*/);
    sub_1C32C20(&StringLiteral_15413/*"WARBOARD_RESUME_CONFIRM_DIALOG_TITLE"*/);
    byte_4C39E20 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_15413/*"WARBOARD_RESUME_CONFIRM_DIALOG_TITLE"*/, 0);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_15411/*"WARBOARD_RESUME_CONFIRM_DIALOG_MESSAGE"*/, 0);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_15414/*"WARBOARD_RESUME_CONFIRM_DIALOG_YES"*/, 0);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_15412/*"WARBOARD_RESUME_CONFIRM_DIALOG_NO"*/, 0);
  if ( !Instance )
    sub_1C32E7C(v8);
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

  if ( (byte_4C39DEE & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Resources_Load_GameObject___);
    byte_4C39DEE = 1;
  }
  object = UnityEngine_Resources__Load_object_(
             moviePlayerName,
             (const MethodInfo_31799A8 *)Method_UnityEngine_Resources_Load_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__Instantiate_object_(
         object,
         (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)parent, 0, 0) )
    GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v7, parent, 0);
  return (UnityEngine_GameObject_o *)v7;
}


void TitleRootComponent__DispDeletePassword(TitleRootComponent_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  UserDeleteReservationEntity_o *v5; // x21
  CommonUI_o *v6; // x20
  System_String_o *password; // x21
  System_Action_o *v8; // x22

  if ( (byte_4C39E30 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserDeleteReservationMaster___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_TitleRootComponent__DispDeletePassword_b__164_0__);
    byte_4C39E30 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserDeleteReservationMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object
    || (v5 = UserDeleteReservationMaster__GetEntity(
               (UserDeleteReservationMaster_o *)MasterData_object,
               *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
               0),
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        !v5)
    || (v6 = (CommonUI_o *)Instance,
        password = v5->fields.password,
        v8 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo),
        System_Action___ctor(v8, (Il2CppObject *)this, Method_TitleRootComponent__DispDeletePassword_b__164_0__, 0),
        !v6) )
  {
LABEL_14:
    sub_1C32E7C(Instance);
  }
  CommonUI__OpenAccountDeletePasswordDialog(v6, 1, password, v8, 0);
}


void TitleRootComponent__EndPlayOpeningMovie(TitleRootComponent_o *this, const MethodInfo *method)
{
  TitleRootComponent_c *v3; // x0
  CommonUI_o *Instance; // x0

  if ( (byte_4C39DF1 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&TitleRootComponent_TypeInfo);
    sub_1C32C20(&StringLiteral_5451/*"END_OPENING_MOVIE"*/);
    byte_4C39DF1 = 1;
  }
  v3 = TitleRootComponent_TypeInfo;
  if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
    v3 = TitleRootComponent_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v3->static_fields->SAVE_KEY_PLAYING_MOVIE, 0, 0);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__maskFadeout(Instance, 1, 0.0, 0, 0), (Instance = (CommonUI_o *)this->fields.myFSM) == 0) )
    sub_1C32E7C(Instance);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5451/*"END_OPENING_MOVIE"*/, 0);
}


void TitleRootComponent__ExecTitleFade(TitleRootComponent_o *this, const MethodInfo *method)
{
  System_String_o *bgmName; // x20
  UnityEngine_GameObject_o *titleRootObjet; // x0
  UnityEngine_GameObject_o *v5; // x20
  const MethodInfo *v6; // x1

  if ( (byte_4C39DF3 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_1C32C20(&SoundManager_TypeInfo);
    sub_1C32C20(&StringLiteral_23666/*"startTitleFade"*/);
    byte_4C39DF3 = 1;
  }
  bgmName = this->fields.bgmName;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(bgmName, 0);
  titleRootObjet = this->fields.titleRootObjet;
  if ( !titleRootObjet
    || (titleRootObjet = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                       titleRootObjet,
                                                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___)) == 0 )
  {
    sub_1C32E7C(titleRootObjet);
  }
  v5 = titleRootObjet;
  if ( ((float (__fastcall *)(UnityEngine_GameObject_o *, _QWORD))titleRootObjet->klass[1]._1.this_arg.data)(
         titleRootObjet,
         *(_QWORD *)&titleRootObjet->klass[1]._1.this_arg.bits) >= 1.0 )
  {
    TitleRootComponent__endTitleFade(this, v6);
  }
  else
  {
    ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))v5->klass[1]._1.element_class)(
      v5,
      v5->klass[1]._1.castClass,
      1.0);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_23666/*"startTitleFade"*/,
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

  if ( (byte_4C39DEF & 1) == 0 )
  {
    this = (TitleRootComponent_o *)sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
    byte_4C39DEF = 1;
  }
  CriMoviePlayerObject = TitleRootComponent__CreateCriMoviePlayerObject(this, moviePlayerName, 0, v3);
  if ( !CriMoviePlayerObject )
    sub_1C32E7C(0);
  return (CRIMoviePlayer_o *)UnityEngine_GameObject__GetComponent_object_(
                               CriMoviePlayerObject,
                               (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
}


System_Collections_IEnumerator_o *TitleRootComponent__GetNoticeUpdate(
        TitleRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x19

  if ( (byte_4C39DF4 & 1) == 0 )
  {
    sub_1C32C20(&TitleRootComponent__GetNoticeUpdate_d__98_TypeInfo);
    byte_4C39DF4 = 1;
  }
  v2 = sub_1C32E6C(TitleRootComponent__GetNoticeUpdate_d__98_TypeInfo);
  System_Object___ctor((Il2CppObject *)v2, 0);
  *(_DWORD *)(v2 + 16) = 0;
  return (System_Collections_IEnumerator_o *)v2;
}


int32_t TitleRootComponent__GetStoryProgress(const MethodInfo *method)
{
  System_Int32_array *ClearWarIdList; // x0
  System_Int32_array *v2; // x21
  int32_t Value; // w19
  int32_t v4; // w20
  int32_t v5; // w0
  TitleRootComponent_c *v6; // x8
  int32_t v7; // w22
  System_String_o *PART2_CHAPTER6_EPILOGUE_BG_MOVIE_NAME; // x23
  System_String_o *MoviePath; // x23
  AssetData_o *Asset; // x23
  __int64 v11; // x0
  int max_length; // w8
  __int64 v13; // x9
  int32_t v14; // w11

  if ( (byte_4C39DEC & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_Reverse_int___);
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&CommonUI_TypeInfo);
    sub_1C32C20(&ServantCommentManager_TypeInfo);
    sub_1C32C20(&TitleRootComponent_TypeInfo);
    sub_1C32C20(&StringLiteral_6400/*"FES_WAR_ID"*/);
    sub_1C32C20(&StringLiteral_3334/*"CHAPTER2_EPILOGUE_WAR_ID"*/);
    sub_1C32C20(&StringLiteral_3335/*"CHAPTER2_PROLOGUE_WAR_ID"*/);
    byte_4C39DEC = 1;
  }
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  ClearWarIdList = ServantCommentManager__GetClearWarIdList(0);
  if ( !ClearWarIdList )
    sub_1C32E7C(0);
  v2 = ClearWarIdList;
  if ( !ClearWarIdList->max_length )
    return 0;
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_3334/*"CHAPTER2_EPILOGUE_WAR_ID"*/, 0);
  v4 = ConstantMaster__getValue((System_String_o *)StringLiteral_3335/*"CHAPTER2_PROLOGUE_WAR_ID"*/, 0);
  v5 = ConstantMaster__getValue((System_String_o *)StringLiteral_6400/*"FES_WAR_ID"*/, 0);
  v6 = TitleRootComponent_TypeInfo;
  v7 = v5;
  if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
    v6 = TitleRootComponent_TypeInfo;
  }
  PART2_CHAPTER6_EPILOGUE_BG_MOVIE_NAME = v6->static_fields->PART2_CHAPTER6_EPILOGUE_BG_MOVIE_NAME;
  if ( !CommonUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
  MoviePath = CommonUI__CreateMoviePath(PART2_CHAPTER6_EPILOGUE_BG_MOVIE_NAME, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  Asset = AssetManager__getAsset(0, MoviePath, 0);
  System_Array__Reverse_int_(v2, (const MethodInfo_309DDFC *)Method_System_Array_Reverse_int___);
  max_length = v2->max_length;
  if ( max_length < 1 )
    return 0;
  v13 = 0;
  while ( 1 )
  {
    if ( (unsigned int)v13 >= max_length )
      sub_1C32E84(v11);
    v14 = v2->m_Items[v13];
    if ( Asset && v14 == Value )
      return 3;
    if ( v14 == v4 )
      return 2;
    if ( v14 == v7 )
      break;
    if ( (int)++v13 >= max_length )
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
  Il2CppObject *Master_object; // x22
  System_Collections_Generic_IEnumerable_T__o *v8; // x0
  UserInterruptionQuestEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C39E34 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_UserInterruptionQuestMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleWaveInfoData__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleWaveInfoData__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleWaveInfoData___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_BattleWaveInfoData__TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C39E34 = 1;
  }
  entity = 0;
  v6 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_BattleWaveInfoData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_BattleWaveInfoData___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserInterruptionQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  v8 = (System_Collections_Generic_IEnumerable_T__o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v8 = (System_Collections_Generic_IEnumerable_T__o *)NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_18;
  v8 = (System_Collections_Generic_IEnumerable_T__o *)UserInterruptionQuestMaster__TryGetEntity(
                                                        (UserInterruptionQuestMaster_o *)Master_object,
                                                        &entity,
                                                        *((_QWORD *)v8[11].monitor + 8),
                                                        questId,
                                                        questPhase,
                                                        0);
  if ( ((unsigned __int8)v8 & 1) == 0 )
  {
    if ( v6 )
      return (BattleWaveInfoData_array *)System_Collections_Generic_List_object___ToArray(
                                           v6,
                                           (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_BattleWaveInfoData__ToArray__);
LABEL_18:
    sub_1C32E7C(v8);
  }
  v8 = (System_Collections_Generic_IEnumerable_T__o *)entity;
  if ( !entity )
    goto LABEL_18;
  v8 = (System_Collections_Generic_IEnumerable_T__o *)UserInterruptionQuestEntity__ConvertToBattleWaveInfoDataArray(
                                                        entity,
                                                        0);
  if ( !v6 )
    goto LABEL_18;
  System_Collections_Generic_List_object___AddRange(
    v6,
    v8,
    (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_BattleWaveInfoData__AddRange__);
  return (BattleWaveInfoData_array *)System_Collections_Generic_List_object___ToArray(
                                       v6,
                                       (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_BattleWaveInfoData__ToArray__);
}


void TitleRootComponent__HideAccountLinkageTakeOverPanel(TitleRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v4; // x8
  CommonUI_o *v5; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v7; // x21
  __int64 v8; // x0

  if ( (byte_4C39E2D & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AvalonSceneManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_TitleRootComponent__HideAccountLinkageTakeOverPanel_b__161_0__);
    byte_4C39E2D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  v7 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(
    v7,
    (Il2CppObject *)this,
    Method_TitleRootComponent__HideAccountLinkageTakeOverPanel_b__161_0__,
    0);
  if ( !v5 )
    sub_1C32E7C(v8);
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

  if ( (byte_4C39E2B & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AvalonSceneManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_TitleRootComponent__HideSelectTakeOverTypePanel_b__157_0__);
    sub_1C32C20(&StringLiteral_3282/*"CANCEL_SELECT_TAKEOVER_TYPE"*/);
    byte_4C39E2B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  v7 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_TitleRootComponent__HideSelectTakeOverTypePanel_b__157_0__, 0);
  if ( !v5 || (CommonUI__maskFadeout(v5, 1, DEFAULT_FADE_TIME, v7, 0), (myFSM = this->fields.myFSM) == 0) )
    sub_1C32E7C(myFSM);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_3282/*"CANCEL_SELECT_TAKEOVER_TYPE"*/, 0);
}


bool TitleRootComponent__IsInterruptibleQuest(TitleRootComponent_o *this, int32_t questId, const MethodInfo *method)
{
  int32_t SavedQuestPhase; // w20
  QuestPhaseMaster_o *Master_object; // x0
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C39E33 & 1) == 0 )
  {
    sub_1C32C20(&BattleData_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    byte_4C39E33 = 1;
  }
  entity = 0;
  if ( !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  SavedQuestPhase = BattleData__getSavedQuestPhase(0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_13;
  if ( !QuestPhaseMaster__TryGetEntity(Master_object, &entity, questId, SavedQuestPhase, 0) )
    return 0;
  Master_object = (QuestPhaseMaster_o *)entity;
  if ( !entity )
LABEL_13:
    sub_1C32E7C(Master_object);
  return QuestPhaseEntity__IsInterruptionQuest(entity, 0);
}


bool TitleRootComponent__IsTutorialBattleNow(TitleRootComponent_o *this, const MethodInfo *method)
{
  NetworkManager_c *v2; // x0
  int64_t userIdNumber; // x19
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  UserQuestEntity_o *Entity; // x0
  Il2CppObject *v7; // x20
  UserQuestEntity_o *v8; // x0
  Il2CppObject *v9; // x20
  UserQuestEntity_o *v10; // x0

  if ( (byte_4C39E1B & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&TutorialFlag_TypeInfo);
    sub_1C32C20(&StringLiteral_13605/*"TUTORIAL_QUEST_ID1"*/);
    sub_1C32C20(&StringLiteral_13606/*"TUTORIAL_QUEST_ID2"*/);
    sub_1C32C20(&StringLiteral_13607/*"TUTORIAL_QUEST_ID3"*/);
    byte_4C39E1B = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  userIdNumber = v2->static_fields->userIdNumber;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  Instance = (Il2CppObject *)ConstantMaster__getValue((System_String_o *)StringLiteral_13605/*"TUTORIAL_QUEST_ID1"*/, 0);
  if ( !MasterData_object )
    goto LABEL_25;
  Entity = UserQuestMaster__GetEntity((UserQuestMaster_o *)MasterData_object, userIdNumber, (int32_t)Instance, 0);
  if ( Entity && !UserQuestEntity__getClearNum(Entity, 0) )
    return 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  v7 = DataManager__GetMasterData_object_(
         (DataManager_o *)Instance,
         (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  Instance = (Il2CppObject *)ConstantMaster__getValue((System_String_o *)StringLiteral_13606/*"TUTORIAL_QUEST_ID2"*/, 0);
  if ( !v7 )
    goto LABEL_25;
  v8 = UserQuestMaster__GetEntity((UserQuestMaster_o *)v7, userIdNumber, (int32_t)Instance, 0);
  if ( v8 && !UserQuestEntity__getClearNum(v8, 0) )
    return 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (v9 = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserQuestMaster___),
        Instance = (Il2CppObject *)ConstantMaster__getValue((System_String_o *)StringLiteral_13607/*"TUTORIAL_QUEST_ID3"*/, 0),
        !v9) )
  {
LABEL_25:
    sub_1C32E7C(Instance);
  }
  v10 = UserQuestMaster__GetEntity((UserQuestMaster_o *)v9, userIdNumber, (int32_t)Instance, 0);
  if ( v10 && !UserQuestEntity__getClearNum(v10, 0) )
    return 1;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return !TutorialFlag__Get_40328320(102, 0);
}


void TitleRootComponent__OnClickConfirmWarBoardBattleResumDialog(
        TitleRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v6; // x1
  long double v7; // q0
  struct WarBoardDataEntity_o *resumeWarBoardData; // x8
  int64_t startedAt; // x20
  __int64 v10; // x0
  __int64 v11; // x0

  if ( (byte_4C39E21 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__getInstance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C32C20(&StringLiteral_3449/*"CLICK_DECIDE"*/);
    byte_4C39E21 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  CommonUI__CloseConfirmDialog(Instance, 0);
  if ( isDecide )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    CommonUI__SetLoadMode(Instance, 2, 0);
    Instance = (CommonUI_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
    resumeWarBoardData = this->fields.resumeWarBoardData;
    if ( resumeWarBoardData )
    {
      startedAt = resumeWarBoardData->fields.startedAt;
      if ( !byte_4C35538 )
      {
        sub_1C32C20(&SkillLvMaster_TypeInfo);
        byte_4C35538 = 1;
      }
      SkillLvMaster_TypeInfo->static_fields->propertyOverwriteBaseTime = startedAt;
      v10 = *((_QWORD *)Method_SingletonMonoBehaviour_AvalonSceneManager__getInstance__ + 4);
      if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
        v10 = sub_1C83334(v7);
      v11 = *(_QWORD *)(*(_QWORD *)(v10 + 192) + 16LL);
      if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
        v11 = sub_1C83334(v7);
      Instance = **(CommonUI_o ***)(v11 + 184);
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
      sub_1C32E7C(Instance);
    }
    Instance = (CommonUI_o *)this->fields.myFSM;
    if ( !Instance )
      goto LABEL_19;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3449/*"CLICK_DECIDE"*/, 0);
  }
  else
  {
    TitleRootComponent__RetireWarBoard(this, v6);
  }
}


void TitleRootComponent__OnClickConfirmWarBoardResumDialog(
        TitleRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v6; // x1
  long double v7; // q0
  struct WarBoardDataEntity_o *resumeWarBoardData; // x8
  int64_t startedAt; // x20
  __int64 v10; // x0
  __int64 v11; // x0

  if ( (byte_4C39E22 & 1) == 0 )
  {
    sub_1C32C20(&BattleData_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__getInstance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C39E22 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      if ( !byte_4C35538 )
      {
        sub_1C32C20(&SkillLvMaster_TypeInfo);
        byte_4C35538 = 1;
      }
      SkillLvMaster_TypeInfo->static_fields->propertyOverwriteBaseTime = startedAt;
      v10 = *((_QWORD *)Method_SingletonMonoBehaviour_AvalonSceneManager__getInstance__ + 4);
      if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
        v10 = sub_1C83334(v7);
      v11 = *(_QWORD *)(*(_QWORD *)(v10 + 192) + 16LL);
      if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
        v11 = sub_1C83334(v7);
      Instance = **(Il2CppObject ***)(v11 + 184);
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
    sub_1C32E7C(Instance);
  }
  TitleRootComponent__RetireWarBoard(this, v6);
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
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4C39E1F & 1) == 0 )
  {
    sub_1C32C20(&BattleData_TypeInfo);
    sub_1C32C20(&StringLiteral_3442/*"CLICK_CANCEL"*/);
    byte_4C39E1F = 1;
  }
  if ( !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  BattleData__DeleteBattleResumeData(0);
  BattleData__deleteSaveData(0);
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C32E7C(0);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_3442/*"CLICK_CANCEL"*/, 0);
}


void TitleRootComponent__OnConfirmBattleContinueResume(
        TitleRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4C39E26 & 1) == 0 )
  {
    sub_1C32C20(&BattleData_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&StringLiteral_6979/*"GO_TERMINAL"*/);
    byte_4C39E26 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog(Instance, 0);
  if ( isDecide )
  {
    TitleRootComponent__ReleaseTitleAssets(this, v6);
    if ( !BattleData_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
    BattleData__deleteSaveData(0);
    Instance = (CommonUI_o *)this->fields.myFSM;
    if ( Instance )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_6979/*"GO_TERMINAL"*/, 0);
      return;
    }
LABEL_10:
    sub_1C32E7C(Instance);
  }
  TitleRootComponent__battleContinueRequest(this, v6);
}


// positive sp value has been detected, the output may be wrong!
void TitleRootComponent__OnConfirmBattleResume(TitleRootComponent_o *this, bool isDecide, const MethodInfo *method)
{
  __int64 v5; // x19
  CommonUI_o *Instance; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_String_o *Value; // x23
  BattleData_SaveData_o *BattleSaveData; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x1
  int32_t SavedQuestPhase; // w21
  BalanceConfig_c *v17; // x0
  float BgmFadeOutTimeBeforeBattle; // s8

  if ( (byte_4C39E1E & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&BattleData_TypeInfo);
    sub_1C32C20(&CatAndMouseGame_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C32C20(&SoundManager_TypeInfo);
    sub_1C32C20(&TitleRootComponent___c__DisplayClass144_0_TypeInfo);
    sub_1C32C20(&StringLiteral_3449/*"CLICK_DECIDE"*/);
    sub_1C32C20(&StringLiteral_15558/*"WINGNAME"*/);
    byte_4C39E1E = 1;
  }
  v5 = sub_1C32E6C(TitleRootComponent___c__DisplayClass144_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_30;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 32) = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 32), 0, v9, v10);
  if ( !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  *(_DWORD *)(v5 + 24) = BattleData__getSavedQuestId(0);
  Value = ConstantStrMaster__getValue((System_String_o *)StringLiteral_15558/*"WINGNAME"*/, 0);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  CatAndMouseGame__SixHomeBuilding(Value, 0);
  if ( !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  BattleSaveData = BattleData__GetBattleSaveData(0);
  *(_QWORD *)(v5 + 32) = BattleSaveData;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 32), (int32_t)BattleSaveData, v13, v14);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  CommonUI__CloseConfirmDialog(Instance, 0);
  if ( isDecide )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetChangeOtherConnectMarkFromPlayerPrefs(Instance, 0);
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__SetLoadMode(Instance, 2, 0);
        if ( !BattleData_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
        SavedQuestPhase = BattleData__getSavedQuestPhase(0);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Instance = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
              v17 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v17 = BalanceConfig_TypeInfo;
              }
              BgmFadeOutTimeBeforeBattle = v17->static_fields->BgmFadeOutTimeBeforeBattle;
              if ( !SoundManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
              SoundManager__fadeoutBgm(BgmFadeOutTimeBeforeBattle, 0);
            }
            Instance = (CommonUI_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
            if ( Instance )
            {
              MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
              Instance = (CommonUI_o *)this->fields.myFSM;
              if ( Instance )
              {
                PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3449/*"CLICK_DECIDE"*/, 0);
                return;
              }
            }
          }
        }
      }
    }
LABEL_30:
    sub_1C32E7C(Instance);
  }
  TitleRootComponent___c__DisplayClass144_0___OnConfirmBattleResume_g__CancelBattleAndGoTerminal_0(
    (TitleRootComponent___c__DisplayClass144_0_o *)v5,
    v15);
}


void TitleRootComponent__OnDestroy(TitleRootComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  this->fields.epicOfRemnantTitleBg = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.epicOfRemnantTitleBg, 0, v2, v3);
  this->fields.cosmosInTheLostbeltTitleBg = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.cosmosInTheLostbeltTitleBg, 0, v5, v6);
  this->fields.cosmosInTheLostbeltEffectPrefab = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.cosmosInTheLostbeltEffectPrefab, 0, v7, v8);
}


void TitleRootComponent__OnEnable(TitleRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v4; // x0
  UnityEngine_Transform_o *v5; // x0

  if ( (byte_4C39DE9 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_14722/*"UI Root/Camera/TakeOverPanel/BtnObj/CancelBtn"*/);
    sub_1C32C20(&StringLiteral_14721/*"UI Root/Camera/SelectTakeOverTypePanel/BtnObj/CloseBtn"*/);
    sub_1C32C20(&StringLiteral_14720/*"UI Root/Camera/AccountLinkageTakeOverPanel/BtnObj/CancelBtn"*/);
    byte_4C39DE9 = 1;
  }
  AndroidBackKeyManager__AddBackBtn(this->fields.titleRootObjet, 0);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackKeyTarget_44858932(transform, (System_String_o *)StringLiteral_14721/*"UI Root/Camera/SelectTakeOverTypePanel/BtnObj/CloseBtn"*/, 0);
  v4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackKeyTarget_44858932(v4, (System_String_o *)StringLiteral_14722/*"UI Root/Camera/TakeOverPanel/BtnObj/CancelBtn"*/, 0);
  v5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackKeyTarget_44858932(v5, (System_String_o *)StringLiteral_14720/*"UI Root/Camera/AccountLinkageTakeOverPanel/BtnObj/CancelBtn"*/, 0);
}


void TitleRootComponent__OnEndDownload(TitleRootComponent_o *this, AssetData_o *data, const MethodInfo *method)
{
  __int64 v5; // x20
  OpeningMovieMaster_o *Master_object; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct OpeningMovieEntity_o *openingMovieEntity; // x8
  struct OpeningMovieEntity_o *v10; // x8
  const MethodInfo *v11; // x2
  TitleRootComponent_o *v12; // x0
  CRIMoviePlayer_o *CriMoviePlayer; // x0
  CRIMoviePlayer_o **v14; // x22
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct OpeningMovieEntity_o *v17; // x8
  System_String_o *MoviePath; // x23
  bool v19; // w24
  char v20; // w25
  CRIMoviePlayer_o *v21; // x21
  System_String_o *Path; // x19
  BgmManager_c *v23; // x0
  float masterVolume; // s8
  System_Action_o *v25; // x26

  if ( (byte_4C39DF0 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&BgmManager_TypeInfo);
    sub_1C32C20(&CommonUI_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_OpeningMovieMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&OptionManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&TitleRootComponent_TypeInfo);
    sub_1C32C20(&Method_TitleRootComponent___c__DisplayClass86_0__OnEndDownload_b__0__);
    sub_1C32C20(&TitleRootComponent___c__DisplayClass86_0_TypeInfo);
    byte_4C39DF0 = 1;
  }
  v5 = sub_1C32E6C(TitleRootComponent___c__DisplayClass86_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_38;
  *(_QWORD *)(v5 + 24) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v7, v8);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (OpeningMovieMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_OpeningMovieMaster___);
  openingMovieEntity = this->fields.openingMovieEntity;
  if ( !openingMovieEntity )
    goto LABEL_38;
  if ( !Master_object )
    goto LABEL_38;
  OpeningMovieMaster__SavePlayedOpeningMovie(Master_object, openingMovieEntity->fields.movieName, 0);
  Master_object = (OpeningMovieMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Master_object )
    goto LABEL_38;
  if ( CommonUI__maskFadeIsDisp((CommonUI_o *)Master_object, 0) )
  {
    Master_object = (OpeningMovieMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Master_object )
      goto LABEL_38;
    CommonUI__maskFadein((CommonUI_o *)Master_object, 0.0, 0, 0);
  }
  Master_object = (OpeningMovieMaster_o *)TitleRootComponent_TypeInfo;
  if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
  v10 = this->fields.openingMovieEntity;
  if ( !v10 )
    goto LABEL_38;
  UnityEngine_PlayerPrefs__SetInt(TitleRootComponent_TypeInfo->static_fields->SAVE_KEY_PLAYING_MOVIE, v10->fields.id, 0);
  v12 = (TitleRootComponent_o *)CommonUI_TypeInfo;
  if ( !CommonUI_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
    v12 = (TitleRootComponent_o *)CommonUI_TypeInfo;
  }
  CriMoviePlayer = TitleRootComponent__GetCriMoviePlayer(
                     v12,
                     (System_String_o *)v12->fields.takteOverIdLb->fields.mOnRender,
                     v11);
  *(_QWORD *)(v5 + 16) = CriMoviePlayer;
  v14 = (CRIMoviePlayer_o **)(v5 + 16);
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)CriMoviePlayer, v15, v16);
  v17 = this->fields.openingMovieEntity;
  if ( !v17 )
    goto LABEL_38;
  MoviePath = CommonUI__CreateMoviePath(v17->fields.movieName, 0);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__GetTouchSkipOpeningMovie(0) )
    goto LABEL_41;
  Master_object = (OpeningMovieMaster_o *)this->fields.openingMovieEntity;
  if ( !Master_object )
    goto LABEL_38;
  v19 = 1;
  Master_object = (OpeningMovieMaster_o *)OpeningMovieEntity__HasFlag((OpeningMovieEntity_o *)Master_object, 1, 0);
  v20 = 1;
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
LABEL_41:
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    Master_object = (OpeningMovieMaster_o *)OptionManager__GetTouchSkipOpeningMovie(0);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      v19 = 0;
      v20 = 1;
    }
    else
    {
      Master_object = (OpeningMovieMaster_o *)OpeningMovieMaster__IsPlayedOpeningMovie_42332112(
                                                this->fields.openingMovieEntity,
                                                1,
                                                0);
      v20 = (char)Master_object;
      v19 = 0;
    }
  }
  if ( !data )
    goto LABEL_38;
  v21 = *v14;
  Path = AssetData__get_Path(data, 0);
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  if ( !byte_4C32815 )
  {
    sub_1C32C20(&BgmManager_TypeInfo);
    byte_4C32815 = 1;
  }
  v23 = BgmManager_TypeInfo;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v23 = BgmManager_TypeInfo;
  }
  masterVolume = v23->static_fields->masterVolume;
  v25 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(
    v25,
    (Il2CppObject *)v5,
    Method_TitleRootComponent___c__DisplayClass86_0__OnEndDownload_b__0__,
    0);
  if ( !v21
    || (CRIMoviePlayer__Initialize(v21, MoviePath, Path, masterVolume, v20 & 1, 0, v25, v19, 0, 0, 0, 1, 0, 0),
        (Master_object = (OpeningMovieMaster_o *)*v14) == 0) )
  {
LABEL_38:
    sub_1C32E7C(Master_object);
  }
  CRIMoviePlayer__MoviePlay((CRIMoviePlayer_o *)Master_object, 1, 1, 1, 0, 0);
}


void TitleRootComponent__OnFailureTakeOver(TitleRootComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4C39E0A & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_11081/*"REQUEST_NG"*/);
    byte_4C39E0A = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C32E7C(0);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11081/*"REQUEST_NG"*/, 0);
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
  const MethodInfo *v10; // x3
  __int64 *v11; // x8

  v3 = this;
  if ( (byte_4C39E24 & 1) == 0 )
  {
    sub_1C32C20(&BattleData_TypeInfo);
    sub_1C32C20(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C32C20(&WarBoardData_TypeInfo);
    sub_1C32C20(&StringLiteral_6979/*"GO_TERMINAL"*/);
    this = (TitleRootComponent_o *)sub_1C32C20(&StringLiteral_3442/*"CLICK_CANCEL"*/);
    byte_4C39E24 = 1;
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
  sub_1C32BC4((CGThumbnailListItem_o *)&v3->fields.resumeWarBoardData, 0, v9, v10);
  if ( !WarBoardData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
  WarBoardData__DeleteLocalSave(0);
  WarBoardData__DeleteAfterContinueDeviceLocalSave(0);
  this = (TitleRootComponent_o *)v3->fields.myFSM;
  if ( !this )
LABEL_16:
    sub_1C32E7C(this);
  v11 = &StringLiteral_3442/*"CLICK_CANCEL"*/;
  if ( progressType != 2 || HasKey )
    v11 = &StringLiteral_6979/*"GO_TERMINAL"*/;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v11, 0);
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
  CGThumbnailListItem_o *p_titleBgEffect; // x19
  UnityEngine_GameObject_o *klass; // x0
  int32_t storyProgress; // w8
  UnityEngine_Object_o *bgMoviePlayer; // x19
  Il2CppObject *Component_object; // x20
  UnityEngine_Object_o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  UnityEngine_Object_o *v12; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4C39E29 & 1) == 0 )
  {
    sub_1C32C20(&System_GC_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_TitleBgEffectComponent___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C39E29 = 1;
  }
  titleBgEffect = (UnityEngine_Object_o *)this->fields.titleBgEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(titleBgEffect, 0, 0) )
  {
    p_titleBgEffect = (CGThumbnailListItem_o *)&this->fields.titleBgEffect;
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
                                 (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_TitleBgEffectComponent___);
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
              v9 = (UnityEngine_Object_o *)p_titleBgEffect->klass;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              UnityEngine_Object__DestroyImmediate_71223828(v9, 0);
              p_titleBgEffect->klass = 0;
              sub_1C32BC4(p_titleBgEffect, 0, v10, v11);
              if ( !System_GC_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
              System_GC__Collect(0);
              return;
            }
          }
          break;
        case 2:
          v12 = (UnityEngine_Object_o *)p_titleBgEffect->klass;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__DestroyImmediate_71223828(v12, 0);
          p_titleBgEffect->klass = 0;
          sub_1C32BC4(p_titleBgEffect, 0, v13, v14);
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
    sub_1C32E7C(klass);
  }
}


void TitleRootComponent__RetireWarBoard(TitleRootComponent_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  Il2CppObject *Request_object; // x0
  struct WarBoardDataEntity_o *resumeWarBoardData; // x8

  if ( (byte_4C39E23 & 1) == 0 )
  {
    sub_1C32C20(&Method_NetworkManager_getRequest_WarBoardContinueRequest___);
    sub_1C32C20(&Method_NetworkManager_getRequest_WarBoardFinishRequest___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C32C20(&Method_TitleRootComponent_OnFinishedWarBoardRetire__);
    byte_4C39E23 = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_1C32E6C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_TitleRootComponent_OnFinishedWarBoardRetire__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v3,
                     (const MethodInfo_3168488 *)Method_NetworkManager_getRequest_WarBoardFinishRequest___);
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
                            (const MethodInfo_3168488 *)Method_NetworkManager_getRequest_WarBoardContinueRequest___)) == 0) )
  {
    sub_1C32E7C(Request_object);
  }
  WarBoardContinueRequest__ClearRetryParameter((WarBoardContinueRequest_o *)Request_object, 0);
}


void TitleRootComponent__SelectAccountLinkageTakeOver(TitleRootComponent_o *this, const MethodInfo *method)
{
  AccountLinkageTakeOverComponent_o *accountLinkageTakeOverComponent; // x0

  accountLinkageTakeOverComponent = this->fields.accountLinkageTakeOverComponent;
  if ( !accountLinkageTakeOverComponent )
    sub_1C32E7C(0);
  AccountLinkageTakeOverComponent__LinkageStatusCheck(accountLinkageTakeOverComponent, 0);
}


void TitleRootComponent__SelectContinueNumberTakeOver(TitleRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v4; // x8
  CommonUI_o *v5; // x20
  void *selectTakeOverTypeObj; // x0
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v8; // x21
  Il2CppObject *v9; // x22
  struct TitleRootComponent___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4C39E2C & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AvalonSceneManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_TitleRootComponent___c__SelectContinueNumberTakeOver_b__158_0__);
    sub_1C32C20(&TitleRootComponent___c_TypeInfo);
    sub_1C32C20(&StringLiteral_11523/*"SELECT_CONTINUE_NUMBER_TAKEOVER"*/);
    byte_4C39E2C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  selectTakeOverTypeObj = TitleRootComponent___c_TypeInfo;
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  if ( !TitleRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleRootComponent___c_TypeInfo);
    selectTakeOverTypeObj = TitleRootComponent___c_TypeInfo;
  }
  v8 = *(System_Action_o **)(*((_QWORD *)selectTakeOverTypeObj + 23) + 56LL);
  if ( !v8 )
  {
    if ( !*((_DWORD *)selectTakeOverTypeObj + 56) )
    {
      j_il2cpp_runtime_class_init_0(selectTakeOverTypeObj);
      selectTakeOverTypeObj = TitleRootComponent___c_TypeInfo;
    }
    v9 = (Il2CppObject *)**((_QWORD **)selectTakeOverTypeObj + 23);
    v8 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v8, v9, Method_TitleRootComponent___c__SelectContinueNumberTakeOver_b__158_0__, 0);
    static_fields = TitleRootComponent___c_TypeInfo->static_fields;
    static_fields->__9__158_0 = v8;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__158_0, (int32_t)v8, v11, v12);
  }
  if ( !v5
    || (CommonUI__maskFadeout(v5, 1, DEFAULT_FADE_TIME, v8, 0),
        (selectTakeOverTypeObj = this->fields.selectTakeOverTypeObj) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectTakeOverTypeObj, 0, 0),
        (selectTakeOverTypeObj = this->fields.myFSM) == 0) )
  {
    sub_1C32E7C(selectTakeOverTypeObj);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)selectTakeOverTypeObj, (System_String_o *)StringLiteral_11523/*"SELECT_CONTINUE_NUMBER_TAKEOVER"*/, 0);
}


void TitleRootComponent__SetReboot(TitleRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v4; // x8
  CommonUI_o *v5; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v7; // x21
  __int64 v8; // x0

  if ( (byte_4C39E32 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AvalonSceneManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_TitleRootComponent__SetReboot_b__166_0__);
    byte_4C39E32 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  v7 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_TitleRootComponent__SetReboot_b__166_0__, 0);
  if ( !v5 )
    sub_1C32E7C(v8);
  CommonUI__maskFadeout(v5, 1, DEFAULT_FADE_TIME, v7, 0);
}


void TitleRootComponent__SetTakeOverAndCacheClearEnable(
        TitleRootComponent_o *this,
        bool flag,
        const MethodInfo *method)
{
  struct UIButton_o *takeoverBtn; // x0

  if ( (byte_4C39E0F & 1) == 0 )
  {
    sub_1C32C20(&UserDeleteReservationEntity_TypeInfo);
    byte_4C39E0F = 1;
  }
  takeoverBtn = this->fields.takeoverBtn;
  if ( !takeoverBtn
    || (((void (__fastcall *)(struct UIButton_o *, bool, const MethodInfo *))takeoverBtn->klass->vtable._5_set_isEnabled.methodPtr)(
          takeoverBtn,
          flag,
          takeoverBtn->klass->vtable._5_set_isEnabled.method),
        (takeoverBtn = this->fields.cacheClearBtn) == 0) )
  {
    sub_1C32E7C(takeoverBtn);
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

  if ( (byte_4C39E28 & 1) == 0 )
  {
    sub_1C32C20(&ClassBoardUtility_TypeInfo);
    byte_4C39E28 = 1;
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
    sub_1C32E7C(selectTakeOverTypeObj);
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

  if ( (byte_4C39E2A & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AvalonSceneManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_TitleRootComponent__ShowSelectTakeOverTypePanel_b__156_0__);
    byte_4C39E2A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  v7 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_TitleRootComponent__ShowSelectTakeOverTypePanel_b__156_0__, 0);
  if ( !v5 )
    sub_1C32E7C(v8);
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
  if ( (byte_4C39DED & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&CommonUI_TypeInfo);
    sub_1C32C20(&AssetLoader_LoadEndDataHandler_TypeInfo);
    this = (TitleRootComponent_o *)sub_1C32C20(&Method_TitleRootComponent_OnEndDownload__);
    byte_4C39DED = 1;
  }
  klass = v2[27].klass;
  if ( !klass )
    sub_1C32E7C(this);
  data = (System_String_o *)klass->_1.byval_arg.data;
  if ( !CommonUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
  MoviePath = CommonUI__CreateMoviePath(data, 0);
  v6 = (AssetLoader_LoadEndDataHandler_o *)sub_1C32E6C(AssetLoader_LoadEndDataHandler_TypeInfo);
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
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  ScrTerminalListTop_c *v8; // x0
  System_String_o *TERMINAL_GRAND_BOARD_EFFECT_NAME; // x21
  int32_t id; // w22
  int32_t BannerEffectEventTutorialFlag; // w23
  _BOOL4 IsTerminalEffectPlayed; // w24
  _BOOL4 IsEventTutorialFlagOn; // w0
  int v14; // w8
  NetworkManager_ResultCallbackFunc_o *v15; // x20
  EventEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C39E36 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C32C20(&ScrTerminalListTop_TypeInfo);
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    sub_1C32C20(&Method_TitleRootComponent___c__DisplayClass170_0__SynchronizeGrandBoardSaveData_b__0__);
    sub_1C32C20(&TitleRootComponent___c__DisplayClass170_0_TypeInfo);
    byte_4C39E36 = 1;
  }
  entity = 0;
  v4 = sub_1C32E6C(TitleRootComponent___c__DisplayClass170_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_24;
  *(_QWORD *)(v4 + 16) = endAction;
  sub_1C32BC4((CGThumbnailListItem_o *)(v4 + 16), (int32_t)endAction, v6, v7);
  v8 = ScrTerminalListTop_TypeInfo;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v8 = ScrTerminalListTop_TypeInfo;
  }
  TERMINAL_GRAND_BOARD_EFFECT_NAME = v8->static_fields->TERMINAL_GRAND_BOARD_EFFECT_NAME;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_24;
  if ( !EventMaster__TryGetEntityByBannerEffectName(Master_object, &entity, TERMINAL_GRAND_BOARD_EFFECT_NAME, 0) )
    goto LABEL_22;
  Master_object = (EventMaster_o *)entity;
  if ( !entity )
LABEL_24:
    sub_1C32E7C(Master_object);
  id = entity->fields.id;
  BannerEffectEventTutorialFlag = EventEntity__GetBannerEffectEventTutorialFlag(entity, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  IsTerminalEffectPlayed = TerminalPramsManager__IsTerminalEffectPlayed(TERMINAL_GRAND_BOARD_EFFECT_NAME, 0);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsEventTutorialFlagOn = CondType__IsEventTutorialFlagOn(id, BannerEffectEventTutorialFlag, 0);
  v14 = !IsTerminalEffectPlayed;
  if ( !IsEventTutorialFlagOn && (v14 & 1) == 0 )
  {
    v15 = (NetworkManager_ResultCallbackFunc_o *)sub_1C32E6C(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v15,
      (Il2CppObject *)v4,
      Method_TitleRootComponent___c__DisplayClass170_0__SynchronizeGrandBoardSaveData_b__0__,
      0);
    EventTutorialMaster__RequestTutorialEventSet(id, BannerEffectEventTutorialFlag, v15, 0);
    return;
  }
  if ( (IsEventTutorialFlagOn & v14 & 1) != 0 )
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_OpeningMovieEntity__o *GrandOpeningMovieList; // x21
  System_Action_o *v12; // x22
  const MethodInfo *v13; // x4

  if ( (byte_4C39E35 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_OpeningMovieMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_TitleRootComponent___c__DisplayClass169_0__SynchronizeGrandEffectSaveData_b__0__);
    sub_1C32C20(&TitleRootComponent___c__DisplayClass169_0_TypeInfo);
    byte_4C39E35 = 1;
  }
  v5 = sub_1C32E6C(TitleRootComponent___c__DisplayClass169_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 24) = endAction;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 24), (int32_t)endAction, v9, v10);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_OpeningMovieMaster___);
  if ( !Master_object )
LABEL_8:
    sub_1C32E7C(Master_object);
  GrandOpeningMovieList = OpeningMovieMaster__GetGrandOpeningMovieList((OpeningMovieMaster_o *)Master_object, 0);
  v12 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(
    v12,
    (Il2CppObject *)v5,
    Method_TitleRootComponent___c__DisplayClass169_0__SynchronizeGrandEffectSaveData_b__0__,
    0);
  TitleRootComponent__SynchronizeGrandMovieSaveData(this, GrandOpeningMovieList, 0, v12, v13);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Action_o **v15; // x29
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w1
  OpeningMovieEntity_o *v19; // x25
  int32_t GrandPvEventTutorialFlag; // w19
  _BOOL4 IsPlayedOpeningMovie_42332112; // w0
  int32_t eventId; // w27
  _BOOL4 v23; // w23
  _BOOL4 IsEventTutorialFlagOn; // w0
  int v25; // w8
  int32_t v26; // w20
  NetworkManager_ResultCallbackFunc_o *v27; // x21

  while ( 1 )
  {
    if ( (byte_4C39E37 & 1) == 0 )
    {
      sub_1C32C20(&CondType_TypeInfo);
      sub_1C32C20(&Method_System_Collections_Generic_List_OpeningMovieEntity__get_Count__);
      sub_1C32C20(&Method_System_Collections_Generic_List_OpeningMovieEntity__get_Item__);
      sub_1C32C20(&NetworkManager_ResultCallbackFunc_TypeInfo);
      sub_1C32C20(&Method_TitleRootComponent___c__DisplayClass171_0__SynchronizeGrandMovieSaveData_b__0__);
      sub_1C32C20(&TitleRootComponent___c__DisplayClass171_0_TypeInfo);
      byte_4C39E37 = 1;
    }
    v9 = sub_1C32E6C(TitleRootComponent___c__DisplayClass171_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v9, 0);
    if ( !v9 )
      goto LABEL_16;
    *(_QWORD *)(v9 + 16) = this;
    sub_1C32BC4((CGThumbnailListItem_o *)(v9 + 16), (int32_t)this, v11, v12);
    *(_QWORD *)(v9 + 24) = grandPvList;
    sub_1C32BC4((CGThumbnailListItem_o *)(v9 + 24), (int32_t)grandPvList, v13, v14);
    *(_QWORD *)(v9 + 40) = endAction;
    v15 = (System_Action_o **)(v9 + 40);
    *(_DWORD *)(v9 + 32) = index;
    sub_1C32BC4((CGThumbnailListItem_o *)(v9 + 40), (int32_t)endAction, v16, v17);
    Item = *(System_Collections_Generic_List_object__o **)(v9 + 24);
    if ( !Item )
LABEL_16:
      sub_1C32E7C(Item);
    v18 = *(_DWORD *)(v9 + 32);
    if ( Item->fields._size <= v18 )
    {
      ActionExtensions__Call(*v15, 0);
      return;
    }
    Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                          Item,
                                                          v18,
                                                          (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_OpeningMovieEntity__get_Item__);
    if ( !Item )
      goto LABEL_16;
    v19 = (OpeningMovieEntity_o *)Item;
    GrandPvEventTutorialFlag = OpeningMovieEntity__GetGrandPvEventTutorialFlag((OpeningMovieEntity_o *)Item, 0);
    IsPlayedOpeningMovie_42332112 = OpeningMovieMaster__IsPlayedOpeningMovie_42332112(v19, 0, 0);
    eventId = v19->fields.eventId;
    v23 = IsPlayedOpeningMovie_42332112;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsEventTutorialFlagOn = CondType__IsEventTutorialFlagOn(eventId, GrandPvEventTutorialFlag, 0);
    index = *(_DWORD *)(v9 + 32) + 1;
    v25 = !v23;
    *(_DWORD *)(v9 + 32) = index;
    if ( !IsEventTutorialFlagOn && (v25 & 1) == 0 )
      break;
    if ( (IsEventTutorialFlagOn & v25 & 1) != 0 )
    {
      OpeningMovieMaster__SavePlayedOpeningMovie_42330816(v19, 0);
      index = *(_DWORD *)(v9 + 32);
    }
    endAction = *v15;
    grandPvList = *(System_Collections_Generic_List_OpeningMovieEntity__o **)(v9 + 24);
  }
  v26 = v19->fields.eventId;
  v27 = (NetworkManager_ResultCallbackFunc_o *)sub_1C32E6C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v27,
    (Il2CppObject *)v9,
    Method_TitleRootComponent___c__DisplayClass171_0__SynchronizeGrandMovieSaveData_b__0__,
    0);
  EventTutorialMaster__RequestTutorialEventSet(v26, GrandPvEventTutorialFlag, v27, 0);
}


void TitleRootComponent__UserDataInfoCheck(
        TitleRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  void *SelfUserGame; // x0
  System_String_o *friendCode; // x20
  const MethodInfo *v7; // x1
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
  const MethodInfo *v32; // x3
  UserGameEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C39E2F & 1) == 0 )
  {
    sub_1C32C20(&AccountLinkageComponent_TypeInfo);
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AvalonSceneManager_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&SelectTakeOverTypeComponent_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&TitleRootComponent_TypeInfo);
    sub_1C32C20(&Method_TitleRootComponent___c__UserDataInfoCheck_b__163_0__);
    sub_1C32C20(&TitleRootComponent___c_TypeInfo);
    sub_1C32C20(&StringLiteral_22379/*"ok"*/);
    sub_1C32C20(&StringLiteral_1898/*"ACCOUNT_LINKAGE_SELECT_CONTINUE_TYPE_NO_DATA"*/);
    sub_1C32C20(&StringLiteral_14844/*"USER_DATA_INFO"*/);
    sub_1C32C20(&StringLiteral_9338/*"NO_USER_DATA"*/);
    sub_1C32C20(&StringLiteral_1897/*"ACCOUNT_LINKAGE_SELECT_CONTINUE_TYPE_HAS_DATA"*/);
    sub_1C32C20(&StringLiteral_1896/*"ACCOUNT_LINKAGE_SELECT_CONTINUE_TYPE_CONTENT"*/);
    sub_1C32C20(&StringLiteral_14861/*"USER_NAME_NOT_SET"*/);
    byte_4C39E2F = 1;
  }
  entity = 0;
  SelectTakeOverTypeComponent_TypeInfo->static_fields->isOverride = 0;
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_22379/*"ok"*/, 0) )
    goto LABEL_33;
  SelfUserGame = (void *)UserGameMaster__TryGetSelfUserGame(&entity, 0);
  if ( ((unsigned __int8)SelfUserGame & 1) != 0 )
  {
    if ( entity )
    {
      friendCode = entity->fields.friendCode;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      SelfUserGame = LocalizationManager__GetNumberFormat_41175184(friendCode, 0);
      if ( entity )
      {
        v8 = (Il2CppObject *)SelfUserGame;
        if ( entity->fields.genderType == 3 )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          name = LocalizationManager__Get((System_String_o *)StringLiteral_14861/*"USER_NAME_NOT_SET"*/, 0);
        }
        else
        {
          name = entity->fields.name;
        }
        SelfUserGame = AccountLinkageParams__AddColorCodeBracket(name, v7);
        if ( entity )
        {
          v14 = (Il2CppObject *)SelfUserGame;
          v15 = (Il2CppObject *)System_Int32__ToString((int)entity + 80, 0);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v16 = LocalizationManager__Get((System_String_o *)StringLiteral_14844/*"USER_DATA_INFO"*/, 0);
          v17 = System_String__Format_63559904(v16, v8, v14, v15, 0);
          selectTakeOverTypeDetailText = this->fields.selectTakeOverTypeDetailText;
          v19 = v17;
          SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_1897/*"ACCOUNT_LINKAGE_SELECT_CONTINUE_TYPE_HAS_DATA"*/, 0);
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
    sub_1C32E7C(SelfUserGame);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_9338/*"NO_USER_DATA"*/, 0);
  v11 = this->fields.selectTakeOverTypeDetailText;
  v12 = v10;
  SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_1898/*"ACCOUNT_LINKAGE_SELECT_CONTINUE_TYPE_NO_DATA"*/, 0);
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
  SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_1896/*"ACCOUNT_LINKAGE_SELECT_CONTINUE_TYPE_CONTENT"*/, 0);
  if ( !selectTakeOverTypeContentText )
    goto LABEL_50;
  UILabel__set_text(selectTakeOverTypeContentText, (System_String_o *)SelfUserGame, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    v28 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v28, v29, Method_TitleRootComponent___c__UserDataInfoCheck_b__163_0__, 0);
    static_fields = TitleRootComponent___c_TypeInfo->static_fields;
    static_fields->__9__163_0 = v28;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__163_0, (int32_t)v28, v31, v32);
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
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-50h]

  if ( (byte_4C39E31 & 1) == 0 )
  {
    sub_1C32C20(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_TitleRootComponent__UserDeleteFinish_b__165_0__);
    sub_1C32C20(&StringLiteral_1847/*"ACCOUNT_DELETE_FINISH_MESSAGE"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C39E31 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_1847/*"ACCOUNT_DELETE_FINISH_MESSAGE"*/, 0);
  v5 = (ErrorDialog_ClickDelegate_o *)sub_1C32E6C(ErrorDialog_ClickDelegate_TypeInfo);
  ErrorDialog_ClickDelegate___ctor(v5, (Il2CppObject *)this, Method_TitleRootComponent__UserDeleteFinish_b__165_0__, 0);
  if ( !Instance )
    sub_1C32E7C(v6);
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
  const MethodInfo *v23; // x3
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w2
  const MethodInfo *v31; // x3

  if ( (byte_4C39E1D & 1) == 0 )
  {
    sub_1C32C20(&TitleRootComponent__WaitPurchase_d__143_TypeInfo);
    byte_4C39E1D = 1;
  }
  v21 = sub_1C32E6C(TitleRootComponent__WaitPurchase_d__143_TypeInfo);
  System_Object___ctor((Il2CppObject *)v21, 0);
  *(_DWORD *)(v21 + 16) = 0;
  *(_QWORD *)(v21 + 32) = title;
  sub_1C32BC4((CGThumbnailListItem_o *)(v21 + 32), (int32_t)title, v22, v23);
  *(_QWORD *)(v21 + 40) = message;
  sub_1C32BC4((CGThumbnailListItem_o *)(v21 + 40), (int32_t)message, v24, v25);
  *(_QWORD *)(v21 + 48) = decideTxt;
  sub_1C32BC4((CGThumbnailListItem_o *)(v21 + 48), (int32_t)decideTxt, v26, v27);
  *(_QWORD *)(v21 + 56) = cancleTxt;
  sub_1C32BC4((CGThumbnailListItem_o *)(v21 + 56), (int32_t)cancleTxt, v28, v29);
  *(_QWORD *)(v21 + 64) = func;
  sub_1C32BC4((CGThumbnailListItem_o *)(v21 + 64), (int32_t)func, v30, v31);
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
  const MethodInfo *v12; // x3

  if ( (byte_4C39E44 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AvalonSceneManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_TitleRootComponent___c__CancelAccountLinkageTakeOver_b__162_1__);
    sub_1C32C20(&TitleRootComponent___c_TypeInfo);
    sub_1C32C20(&StringLiteral_13329/*"TAKEOVER_CANCEL"*/);
    byte_4C39E44 = 1;
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
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)accountLinkageTakeOverPanel, (System_String_o *)StringLiteral_13329/*"TAKEOVER_CANCEL"*/, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    v8 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v8, v9, Method_TitleRootComponent___c__CancelAccountLinkageTakeOver_b__162_1__, 0);
    static_fields = TitleRootComponent___c_TypeInfo->static_fields;
    static_fields->__9__162_1 = v8;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__162_1, (int32_t)v8, v11, v12);
  }
  if ( !v6 )
LABEL_16:
    sub_1C32E7C(accountLinkageTakeOverPanel);
  CommonUI__maskFadein(v6, DEFAULT_FADE_TIME, v8, 0);
}


void TitleRootComponent___DispDeletePassword_b__164_0(TitleRootComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4C39E45 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_3442/*"CLICK_CANCEL"*/);
    byte_4C39E45 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C32E7C(0);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_3442/*"CLICK_CANCEL"*/, 0);
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
  const MethodInfo *v12; // x3

  if ( (byte_4C39E43 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AvalonSceneManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_TitleRootComponent___c__HideAccountLinkageTakeOverPanel_b__161_1__);
    sub_1C32C20(&TitleRootComponent___c_TypeInfo);
    byte_4C39E43 = 1;
  }
  accountLinkageTakeOverPanel = this->fields.accountLinkageTakeOverPanel;
  if ( !accountLinkageTakeOverPanel )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)accountLinkageTakeOverPanel, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    v8 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v8, v9, Method_TitleRootComponent___c__HideAccountLinkageTakeOverPanel_b__161_1__, 0);
    static_fields = TitleRootComponent___c_TypeInfo->static_fields;
    static_fields->__9__161_1 = v8;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__161_1, (int32_t)v8, v11, v12);
  }
  if ( !v6 )
LABEL_14:
    sub_1C32E7C(accountLinkageTakeOverPanel);
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
  const MethodInfo *v12; // x3

  if ( (byte_4C39E42 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AvalonSceneManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_TitleRootComponent___c__HideSelectTakeOverTypePanel_b__157_1__);
    sub_1C32C20(&TitleRootComponent___c_TypeInfo);
    byte_4C39E42 = 1;
  }
  selectTakeOverTypeObj = this->fields.selectTakeOverTypeObj;
  if ( !selectTakeOverTypeObj )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectTakeOverTypeObj, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    v8 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v8, v9, Method_TitleRootComponent___c__HideSelectTakeOverTypePanel_b__157_1__, 0);
    static_fields = TitleRootComponent___c_TypeInfo->static_fields;
    static_fields->__9__157_1 = v8;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__157_1, (int32_t)v8, v11, v12);
  }
  if ( !v6 )
LABEL_14:
    sub_1C32E7C(selectTakeOverTypeObj);
  CommonUI__maskFadein(v6, DEFAULT_FADE_TIME, v8, 0);
}


void TitleRootComponent___SetReboot_b__166_0(TitleRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C39E46 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    byte_4C39E46 = 1;
  }
  TitleRootComponent__ReleaseTitleAssets(this, method);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance
    || (ManagementManager__titleCacheClear((ManagementManager_o *)Instance, 0),
        UserSaveData__DeleteSaveData(1, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0)
    || (AtlasManager__ReleaseUISkinDialog((AtlasManager_o *)Instance, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__)) == 0) )
  {
    sub_1C32E7C(Instance);
  }
  ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, 0);
}


void TitleRootComponent___ShowSelectTakeOverTypePanel_b__156_0(TitleRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *selectTakeOverTypeObj; // x0
  NetworkManager_ResultCallbackFunc_o *v4; // x20
  TitleRootComponent_c *v5; // x8
  AccountLinkageInfoRequest_o *v6; // x19

  if ( (byte_4C39E41 & 1) == 0 )
  {
    sub_1C32C20(&Method_NetworkManager_getRequest_AccountLinkageInfoRequest___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C32C20(&Method_TitleRootComponent_UserDataInfoCheck__);
    sub_1C32C20(&TitleRootComponent_TypeInfo);
    byte_4C39E41 = 1;
  }
  selectTakeOverTypeObj = this->fields.selectTakeOverTypeObj;
  if ( !selectTakeOverTypeObj )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(selectTakeOverTypeObj, 1, 0);
  v4 = (NetworkManager_ResultCallbackFunc_o *)sub_1C32E6C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v4, (Il2CppObject *)this, Method_TitleRootComponent_UserDataInfoCheck__, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  selectTakeOverTypeObj = (UnityEngine_GameObject_o *)NetworkManager__getRequest_object_(
                                                        v4,
                                                        (const MethodInfo_3168488 *)Method_NetworkManager_getRequest_AccountLinkageInfoRequest___);
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
    sub_1C32E7C(selectTakeOverTypeObj);
  AccountLinkageInfoRequest__beginRequest(v6, 0);
}


void TitleRootComponent___callbackContinueInput_b__117_0(
        TitleRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_4C39E3E & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&StringLiteral_13332/*"TAKEOVER_INPUT_OK"*/);
    byte_4C39E3E = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__CloseAccountLinkageOverrideTakeOverDialog(Instance, 0, 0);
  if ( isDecide )
  {
    Instance = (CommonUI_o *)this->fields.myFSM;
    if ( Instance )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_13332/*"TAKEOVER_INPUT_OK"*/, 0);
      return;
    }
LABEL_8:
    sub_1C32E7C(Instance);
  }
}


void TitleRootComponent___callbackContinueInput_b__117_1(
        TitleRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_4C39E3F & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&StringLiteral_13332/*"TAKEOVER_INPUT_OK"*/);
    byte_4C39E3F = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__CloseTakeOverDialog(Instance, 0, 0);
  if ( isDecide )
  {
    Instance = (CommonUI_o *)this->fields.myFSM;
    if ( Instance )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_13332/*"TAKEOVER_INPUT_OK"*/, 0);
      return;
    }
LABEL_8:
    sub_1C32E7C(Instance);
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
  const MethodInfo *v12; // x3

  if ( (byte_4C39E3D & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AvalonSceneManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_TitleRootComponent___c__closeTakeoverInput_b__113_1__);
    sub_1C32C20(&TitleRootComponent___c_TypeInfo);
    byte_4C39E3D = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    v8 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v8, v9, Method_TitleRootComponent___c__closeTakeoverInput_b__113_1__, 0);
    static_fields = TitleRootComponent___c_TypeInfo->static_fields;
    static_fields->__9__113_1 = v8;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__113_1, (int32_t)v8, v11, v12);
  }
  if ( !v6 )
LABEL_18:
    sub_1C32E7C(takeoverKeyInput);
  CommonUI__maskFadein(v6, DEFAULT_FADE_TIME, v8, 0);
}


void TitleRootComponent___confirmCacheClear_b__153_0(
        TitleRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  Il2CppObject *Instance; // x19
  System_Action_o *v10; // x20

  if ( (byte_4C39E40 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_TitleRootComponent___c__DisplayClass153_0__confirmCacheClear_b__1__);
    sub_1C32C20(&TitleRootComponent___c__DisplayClass153_0_TypeInfo);
    byte_4C39E40 = 1;
  }
  v5 = sub_1C32E6C(TitleRootComponent___c__DisplayClass153_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v7, v8),
        *(_BYTE *)(v5 + 16) = isDecide,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v10 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo),
        System_Action___ctor(
          v10,
          (Il2CppObject *)v5,
          Method_TitleRootComponent___c__DisplayClass153_0__confirmCacheClear_b__1__,
          0),
        !Instance) )
  {
    sub_1C32E7C(v6);
  }
  CommonUI__CloseConfirmDialog_31191080((CommonUI_o *)Instance, v10, 0);
}


void TitleRootComponent___endTitleFade_b__100_0(TitleRootComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4C39E3A & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_5441/*"END_FADE"*/);
    byte_4C39E3A = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C32E7C(0);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_5441/*"END_FADE"*/, 0);
}


void TitleRootComponent___startTakeoverInput_b__111_0(TitleRootComponent_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4C39E3B & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&CommonEffectManager_TypeInfo);
    sub_1C32C20(&Method_TitleRootComponent__startTakeoverInput_b__111_1__);
    byte_4C39E3B = 1;
  }
  v3 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_TitleRootComponent__startTakeoverInput_b__111_1__, 0);
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  CommonEffectManager__LoadSkinEffects(v3, 1, 0);
}


void TitleRootComponent___startTakeoverInput_b__111_1(TitleRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_4C39E3C & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    sub_1C32C20(&Method_TitleRootComponent__startTakeoverInput_b__111_2__);
    byte_4C39E3C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  if ( AtlasManager__isLoadedSkinData((AtlasManager_o *)Instance, 2, 0) )
  {
    TitleRootComponent__openTakeoverInput(this, v4);
  }
  else
  {
    v5 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_TitleRootComponent__startTakeoverInput_b__111_2__, 0);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__LoadUISkin(v5, 2, 1, 0);
  }
}


void TitleRootComponent__battleContinueRequest(TitleRootComponent_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  void *Request_object; // x0
  BattleUseContinueRequest_o *v5; // x20
  int64_t ResumeBattleId; // x0
  const MethodInfo *v7; // x1
  int64_t v8; // x21
  System_Int32_array *WaveClearTurn; // x19
  int32_t ContinueCount; // w0
  int32_t v11; // w3
  NetworkManager_ResultCallbackFunc_o *v12; // x20
  BattleCommandSpellRequest_o *v13; // x20
  int64_t v14; // x0
  int64_t v15; // x21
  int32_t Value; // w19
  System_Int32_array *v17; // x22
  int32_t v18; // w0
  int32_t v19; // w4
  BattleCommandSpellRequest_o *v20; // x0
  int64_t v21; // x1
  int32_t v22; // w2
  System_Int32_array *v23; // x3
  NetworkManager_ResultCallbackFunc_o *v24; // x20
  BattleCommandSpellRequest_o *v25; // x20
  int64_t v26; // x21
  int32_t CommandSpellIdBattle; // w0
  const MethodInfo *v28; // x1
  int32_t v29; // w22
  System_Int32_array *v30; // x19
  int32_t v31; // w0
  NetworkManager_ResultCallbackFunc_o *v32; // x20
  BattleUseContinueItemRequest_o *v33; // x20
  __int64 v34; // x21
  int32_t ContinueItemId; // w0
  const MethodInfo *v36; // x1
  int32_t v37; // w22
  int32_t v38; // w0
  int32_t v39; // w2
  NetworkManager_ResultCallbackFunc_o *v40; // x20
  BattleUseItemRequest_o *v41; // x20
  System_String_o *BattleUseItemParameter; // x21
  const MethodInfo *v43; // x1
  void *v44; // x21
  _BOOL8 v45; // x0
  int32_t eventId; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t result[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C39E14 & 1) == 0 )
  {
    sub_1C32C20(&BattleData_TypeInfo);
    sub_1C32C20(&Method_NetworkManager_getRequest_BattleCommandSpellRequest___);
    sub_1C32C20(&Method_NetworkManager_getRequest_BattleUseContinueItemRequest___);
    sub_1C32C20(&Method_NetworkManager_getRequest_BattleUseContinueRequest___);
    sub_1C32C20(&Method_NetworkManager_getRequest_BattleUseItemRequest___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C32C20(&Method_TitleRootComponent_endRequestBattleContinueRequest__);
    sub_1C32C20(&Method_TitleRootComponent_endRequestBattleUseItemRequest__);
    sub_1C32C20(&StringLiteral_6979/*"GO_TERMINAL"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_6920/*"GAME_OVER_COMMAND_SPELL_ID"*/);
    byte_4C39E14 = 1;
  }
  *(_QWORD *)result = 0;
  eventId = 0;
  if ( !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  switch ( BattleData__getContinueBattleFlg(0) )
  {
    case 1:
      v3 = (NetworkManager_ResultCallbackFunc_o *)sub_1C32E6C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v3,
        (Il2CppObject *)this,
        Method_TitleRootComponent_endRequestBattleContinueRequest__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = NetworkManager__getRequest_object_(
                         v3,
                         (const MethodInfo_3168488 *)Method_NetworkManager_getRequest_BattleUseContinueRequest___);
      if ( !Request_object )
        goto LABEL_92;
      v5 = (BattleUseContinueRequest_o *)Request_object;
      if ( RequestBase__beginRetryRequest((RequestBase_o *)Request_object, 0, 0) )
        return;
      if ( !BattleData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
      ResumeBattleId = BattleData__getResumeBattleId(0);
      if ( ResumeBattleId < 1 )
        goto LABEL_80;
      v8 = ResumeBattleId;
      if ( !BattleData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
      WaveClearTurn = BattleData__getWaveClearTurn(0);
      ContinueCount = BattleData__loadContinueCount(0);
      if ( ContinueCount )
        v11 = ContinueCount;
      else
        v11 = 1;
      BattleUseContinueRequest__beginRequest(v5, v8, WaveClearTurn, v11, 0);
      return;
    case 2:
      v12 = (NetworkManager_ResultCallbackFunc_o *)sub_1C32E6C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_TitleRootComponent_endRequestBattleContinueRequest__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = NetworkManager__getRequest_object_(
                         v12,
                         (const MethodInfo_3168488 *)Method_NetworkManager_getRequest_BattleCommandSpellRequest___);
      if ( !Request_object )
        goto LABEL_92;
      v13 = (BattleCommandSpellRequest_o *)Request_object;
      if ( RequestBase__beginRetryRequest((RequestBase_o *)Request_object, 0, 0) )
        return;
      if ( !BattleData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
      v14 = BattleData__getResumeBattleId(0);
      if ( v14 < 1 )
      {
LABEL_80:
        TitleRootComponent__ReleaseTitleAssets(this, v7);
        if ( !BattleData_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
        goto LABEL_82;
      }
      v15 = v14;
      Value = ConstantMaster__getValue((System_String_o *)StringLiteral_6920/*"GAME_OVER_COMMAND_SPELL_ID"*/, 0);
      if ( !BattleData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
      v17 = BattleData__getWaveClearTurn(0);
      v18 = BattleData__loadContinueCount(0);
      if ( v18 )
        v19 = v18;
      else
        v19 = 1;
      v20 = v13;
      v21 = v15;
      v22 = Value;
      v23 = v17;
      goto LABEL_46;
    case 3:
      v24 = (NetworkManager_ResultCallbackFunc_o *)sub_1C32E6C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v24,
        (Il2CppObject *)this,
        Method_TitleRootComponent_endRequestBattleContinueRequest__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = NetworkManager__getRequest_object_(
                         v24,
                         (const MethodInfo_3168488 *)Method_NetworkManager_getRequest_BattleCommandSpellRequest___);
      if ( !Request_object )
        goto LABEL_92;
      v25 = (BattleCommandSpellRequest_o *)Request_object;
      if ( RequestBase__beginRetryRequest((RequestBase_o *)Request_object, 0, 0) )
        return;
      if ( !BattleData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
      v26 = BattleData__getResumeBattleId(0);
      CommandSpellIdBattle = BattleData__getCommandSpellIdBattle(0);
      if ( v26 < 1 || (v29 = CommandSpellIdBattle, CommandSpellIdBattle < 1) )
      {
        TitleRootComponent__ReleaseTitleAssets(this, v28);
        if ( !BattleData_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
        BattleData__setContinueBattleFlg(0, 1, 0);
        BattleData__setCommandSpellIdBattle(0, 1, 0);
        goto LABEL_89;
      }
      if ( !BattleData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
      v30 = BattleData__getWaveClearTurn(0);
      v31 = BattleData__loadContinueCount(0);
      if ( v31 )
        v19 = v31;
      else
        v19 = 1;
      v20 = v25;
      v21 = v26;
      v22 = v29;
      v23 = v30;
LABEL_46:
      BattleCommandSpellRequest__beginRequest(v20, v21, v22, v23, v19, 1, 0);
      return;
    case 4:
      v32 = (NetworkManager_ResultCallbackFunc_o *)sub_1C32E6C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v32,
        (Il2CppObject *)this,
        Method_TitleRootComponent_endRequestBattleContinueRequest__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = NetworkManager__getRequest_object_(
                         v32,
                         (const MethodInfo_3168488 *)Method_NetworkManager_getRequest_BattleUseContinueItemRequest___);
      if ( !Request_object )
        goto LABEL_92;
      v33 = (BattleUseContinueItemRequest_o *)Request_object;
      if ( RequestBase__beginRetryRequest((RequestBase_o *)Request_object, 0, 0) )
        return;
      if ( !BattleData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
      v34 = BattleData__getResumeBattleId(0);
      ContinueItemId = BattleData__GetContinueItemId(0);
      if ( v34 >= 1 )
      {
        v37 = ContinueItemId;
        if ( ContinueItemId >= 1 )
        {
          if ( !BattleData_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
          v38 = BattleData__loadContinueCount(0);
          if ( v38 )
            v39 = v38;
          else
            v39 = 1;
          BattleUseContinueItemRequest__beginRequest(v33, v34, v39, v37, 1, 0);
          return;
        }
      }
      TitleRootComponent__ReleaseTitleAssets(this, v36);
      if ( !BattleData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
      BattleData__setContinueBattleFlg(0, 1, 0);
      BattleData__SaveContinueItemId(0, 1, 0);
      goto LABEL_89;
    case 5:
      v40 = (NetworkManager_ResultCallbackFunc_o *)sub_1C32E6C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v40,
        (Il2CppObject *)this,
        Method_TitleRootComponent_endRequestBattleUseItemRequest__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = NetworkManager__getRequest_object_(
                         v40,
                         (const MethodInfo_3168488 *)Method_NetworkManager_getRequest_BattleUseItemRequest___);
      if ( !Request_object )
        goto LABEL_92;
      v41 = (BattleUseItemRequest_o *)Request_object;
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
        sub_1C32E84(v45);
      if ( System_Int32__TryParse(*((System_String_o **)v44 + 6), &eventId, 0) )
      {
        BattleUseItemRequest__beginRequest(v41, result[1], result[0], eventId, 0);
      }
      else
      {
LABEL_77:
        TitleRootComponent__ReleaseTitleAssets(this, v43);
        if ( !BattleData_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
        BattleData__SaveBattleUseItemParameter((System_String_o *)StringLiteral_1/*""*/, 0, 0);
LABEL_82:
        BattleData__setContinueBattleFlg(0, 1, 0);
LABEL_89:
        Request_object = this->fields.myFSM;
        if ( !Request_object )
LABEL_92:
          sub_1C32E7C(Request_object);
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Request_object, (System_String_o *)StringLiteral_6979/*"GO_TERMINAL"*/, 0);
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

  if ( (byte_4C39DEA & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_1C32C20(&LogoMain_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C39DEA = 1;
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
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
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
  titleRootObjet = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !titleRootObjet )
LABEL_12:
    sub_1C32E7C(titleRootObjet);
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

  if ( (byte_4C39E19 & 1) == 0 )
  {
    sub_1C32C20(&Method_NetworkManager_getRequest_TopHomeRequest___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C32C20(&Method_TitleRootComponent_endHomeRequest__);
    byte_4C39E19 = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_1C32E6C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v3, (Il2CppObject *)this, Method_TitleRootComponent_endHomeRequest__, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v3,
                     (const MethodInfo_3168488 *)Method_NetworkManager_getRequest_TopHomeRequest___);
  if ( !Request_object )
    sub_1C32E7C(0);
  RequestBase__beginRequest((RequestBase_o *)Request_object, 0);
}


void TitleRootComponent__callbackContinueInput(
        TitleRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *Dictionary; // x0
  System_Collections_Generic_Dictionary_object__object__o *v6; // x20
  System_String_o *v7; // x21
  Il2CppObject *NumberFormat_41175184; // x21
  System_String_o *v9; // x0
  const MethodInfo *v10; // x1
  Il2CppObject *v11; // x22
  Il2CppObject *v12; // x24
  System_String_o *v13; // x20
  System_String_o *v14; // x23
  System_String_o *v15; // x21
  bool SelfUserGame; // w22
  System_String_o *v17; // x19
  System_String_o *v18; // x22
  const MethodInfo *v19; // x1
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

  if ( (byte_4C39E06 & 1) == 0 )
  {
    sub_1C32C20(&TakeOverDialog_ClickDelegate_TypeInfo);
    sub_1C32C20(&AccountLinkageOverrideTakeOverDialog_ClickDelegate_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C32C20(&JsonManager_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_TitleRootComponent__callbackContinueInput_b__117_0__);
    sub_1C32C20(&Method_TitleRootComponent__callbackContinueInput_b__117_1__);
    sub_1C32C20(&StringLiteral_13333/*"TAKEOVER_OVERRIDE_WARNING"*/);
    sub_1C32C20(&StringLiteral_14844/*"USER_DATA_INFO"*/);
    sub_1C32C20(&StringLiteral_5790/*"EXIST_ACCOUNT_DATA"*/);
    sub_1C32C20(&StringLiteral_11065/*"RECONFIRM_CONTINUE_OVERRIDE"*/);
    sub_1C32C20(&StringLiteral_22212/*"ng"*/);
    sub_1C32C20(&StringLiteral_1886/*"ACCOUNT_LINKAGE_RECONFIRM_DECIDE"*/);
    sub_1C32C20(&StringLiteral_1884/*"ACCOUNT_LINKAGE_RECONFIRM_CANCEL"*/);
    sub_1C32C20(&StringLiteral_1890/*"ACCOUNT_LINKAGE_RECONFIRM_OVERRIDE_DECIDE"*/);
    sub_1C32C20(&StringLiteral_1894/*"ACCOUNT_LINKAGE_RECONFIRM_WARNING_HAS_DATA"*/);
    sub_1C32C20(&StringLiteral_19675/*"friendCode"*/);
    sub_1C32C20(&StringLiteral_13335/*"TAKEOVER_WARNING"*/);
    sub_1C32C20(&StringLiteral_22147/*"name"*/);
    sub_1C32C20(&StringLiteral_11064/*"RECONFIRM_CONTINUE"*/);
    sub_1C32C20(&StringLiteral_14861/*"USER_NAME_NOT_SET"*/);
    sub_1C32C20(&StringLiteral_1895/*"ACCOUNT_LINKAGE_RECONFIRM_WARNING_NO_DATA"*/);
    sub_1C32C20(&StringLiteral_21367/*"lv"*/);
    byte_4C39E06 = 1;
  }
  entity = 0;
  if ( System_String__op_Inequality(result, (System_String_o *)StringLiteral_22212/*"ng"*/, 0) )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(result, 0);
    if ( !Dictionary )
      goto LABEL_30;
    v6 = Dictionary;
    Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              Dictionary,
                                                                              (Il2CppObject *)StringLiteral_19675/*"friendCode"*/,
                                                                              (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Dictionary )
      goto LABEL_30;
    v7 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, const MethodInfo *))Dictionary->klass->vtable._3_ToString.methodPtr)(
                              Dictionary,
                              Dictionary->klass->vtable._3_ToString.method);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    NumberFormat_41175184 = (Il2CppObject *)LocalizationManager__GetNumberFormat_41175184(v7, 0);
    Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              v6,
                                                                              (Il2CppObject *)StringLiteral_22147/*"name"*/,
                                                                              (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Dictionary )
      goto LABEL_30;
    v9 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, const MethodInfo *))Dictionary->klass->vtable._3_ToString.methodPtr)(
                              Dictionary,
                              Dictionary->klass->vtable._3_ToString.method);
    v11 = (Il2CppObject *)AccountLinkageParams__AddColorCodeBracket(v9, v10);
    Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              v6,
                                                                              (Il2CppObject *)StringLiteral_21367/*"lv"*/,
                                                                              (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Dictionary )
      goto LABEL_30;
    v12 = (Il2CppObject *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, const MethodInfo *))Dictionary->klass->vtable._3_ToString.methodPtr)(
                            Dictionary,
                            Dictionary->klass->vtable._3_ToString.method);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_1884/*"ACCOUNT_LINKAGE_RECONFIRM_CANCEL"*/, 0);
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_14844/*"USER_DATA_INFO"*/, 0);
    v15 = System_String__Format_63559904(v14, NumberFormat_41175184, v11, v12, 0);
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
        v17 = LocalizationManager__Get((System_String_o *)StringLiteral_11065/*"RECONFIRM_CONTINUE_OVERRIDE"*/, 0);
        Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)LocalizationManager__Get(
                                                                                  (System_String_o *)StringLiteral_1890/*"ACCOUNT_LINKAGE_RECONFIRM_OVERRIDE_DECIDE"*/,
                                                                                  0);
        if ( entity )
        {
          v18 = (System_String_o *)Dictionary;
          Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)LocalizationManager__GetNumberFormat_41175184(
                                                                                    entity->fields.friendCode,
                                                                                    0);
          if ( entity )
          {
            v20 = (Il2CppObject *)Dictionary;
            takeOverAccountData = v15;
            if ( entity->fields.genderType == 3 )
            {
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              name = LocalizationManager__Get((System_String_o *)StringLiteral_14861/*"USER_NAME_NOT_SET"*/, 0);
            }
            else
            {
              name = entity->fields.name;
            }
            v28 = v13;
            Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)AccountLinkageParams__AddColorCodeBracket(
                                                                                      name,
                                                                                      v19);
            if ( entity )
            {
              v29 = (Il2CppObject *)Dictionary;
              buttonDecide = v18;
              v31 = (Il2CppObject *)this;
              v32 = (Il2CppObject *)System_Int32__ToString((int)entity + 80, 0);
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v33 = LocalizationManager__Get((System_String_o *)StringLiteral_5790/*"EXIST_ACCOUNT_DATA"*/, 0);
              v34 = LocalizationManager__Get((System_String_o *)StringLiteral_13333/*"TAKEOVER_OVERRIDE_WARNING"*/, 0);
              v35 = LocalizationManager__Get((System_String_o *)StringLiteral_1894/*"ACCOUNT_LINKAGE_RECONFIRM_WARNING_HAS_DATA"*/, 0);
              v36 = System_String__Format_63559904(v14, v20, v29, v32, 0);
              Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              v38 = (AccountLinkageOverrideTakeOverDialog_ClickDelegate_o *)sub_1C32E6C(AccountLinkageOverrideTakeOverDialog_ClickDelegate_TypeInfo);
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
                  v17,
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
        sub_1C32E7C(Dictionary);
      }
    }
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_11064/*"RECONFIRM_CONTINUE"*/, 0);
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_1886/*"ACCOUNT_LINKAGE_RECONFIRM_DECIDE"*/, 0);
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_13335/*"TAKEOVER_WARNING"*/, 0);
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_1895/*"ACCOUNT_LINKAGE_RECONFIRM_WARNING_NO_DATA"*/, 0);
    v26 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v27 = (TakeOverDialog_ClickDelegate_o *)sub_1C32E6C(TakeOverDialog_ClickDelegate_TypeInfo);
    TakeOverDialog_ClickDelegate___ctor(
      v27,
      (Il2CppObject *)this,
      Method_TitleRootComponent__callbackContinueInput_b__117_1__,
      0);
    if ( v26 )
    {
      CommonUI__OpenTakeOverDialog((CommonUI_o *)v26, v27, v22, v15, v24, v25, v13, v23, 0);
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
  System_Collections_Generic_Dictionary_object__object__o *v7; // x20
  System_String_o *v8; // x21
  System_String_o *v9; // x22
  System_String_o *v10; // x20
  Il2CppClass *klass; // x20
  NetworkManager_o *v12; // x20
  System_String_o *monitor; // x21
  int32_t monitor_high; // w22
  System_DateTime_o v15; // x0
  int32_t Month; // w23
  System_DateTime_o v17; // x0
  System_String_o *v18; // x20
  System_String_o *v19; // x0
  Il2CppObject *Instance; // x21
  NotificationDialog_ClickDelegate_o *v21; // x22
  uint64_t dateData; // [xsp+68h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+78h] [xbp-38h] BYREF

  if ( (byte_4C39E09 & 1) == 0 )
  {
    sub_1C32C20(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1C32C20(&CommonUI_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_UserGameMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_UserGameMaster__UserGameEntity__long__TryGetSingleEntity__);
    sub_1C32C20(&System_DateTime_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C32C20(&JsonManager_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&OtherUserNewManager_TypeInfo);
    sub_1C32C20(&PurchaseBehaviour_TypeInfo);
    sub_1C32C20(&ServantCommentManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    sub_1C32C20(&TermsOfUseMenu_TypeInfo);
    sub_1C32C20(&Method_TitleRootComponent_onSelectTakeoverDecide__);
    sub_1C32C20(&UserCommandCodeCollectionManager_TypeInfo);
    sub_1C32C20(&UserCommandCodeNewManager_TypeInfo);
    sub_1C32C20(&UserEquipNewManager_TypeInfo);
    sub_1C32C20(&UserServantCollectionManager_TypeInfo);
    sub_1C32C20(&UserServantNewManager_TypeInfo);
    sub_1C32C20(&WarBoardData_TypeInfo);
    sub_1C32C20(&StringLiteral_3819/*"CONTINUE_DEVICE_TAKEOVER_DECIDE_MESSAGE"*/);
    sub_1C32C20(&StringLiteral_16944/*"authKey"*/);
    sub_1C32C20(&StringLiteral_22212/*"ng"*/);
    sub_1C32C20(&StringLiteral_23245/*"secretKey"*/);
    sub_1C32C20(&StringLiteral_24549/*"userId"*/);
    sub_1C32C20(&StringLiteral_3822/*"CONTINUE_DEVICE_TAKEOVER_GOOGLE_PLAY_ACCOUNT_ID_ERROR_MESSAGE"*/);
    byte_4C39E09 = 1;
  }
  entity = 0;
  dateData = 0;
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_22212/*"ng"*/, 0) )
    goto LABEL_71;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(result, 0);
  if ( !Dictionary )
    goto LABEL_73;
  v7 = Dictionary;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          Dictionary,
          (Il2CppObject *)StringLiteral_24549/*"userId"*/,
          (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__)
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v7,
          (Il2CppObject *)StringLiteral_16944/*"authKey"*/,
          (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__)
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v7,
          (Il2CppObject *)StringLiteral_23245/*"secretKey"*/,
          (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    goto LABEL_71;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserGameMaster___);
  if ( !Dictionary )
    goto LABEL_73;
  if ( !DataMasterBase_object__object__long___TryGetSingleEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Dictionary,
          &entity,
          (const MethodInfo_3398EC0 *)Method_DataMasterBase_UserGameMaster__UserGameEntity__long__TryGetSingleEntity__) )
  {
LABEL_71:
    TitleRootComponent__OnFailureTakeOver(this, v5);
    return;
  }
  Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            v7,
                                                                            (Il2CppObject *)StringLiteral_24549/*"userId"*/,
                                                                            (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Dictionary )
    goto LABEL_73;
  v8 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, const MethodInfo *))Dictionary->klass->vtable._3_ToString.methodPtr)(
                            Dictionary,
                            Dictionary->klass->vtable._3_ToString.method);
  Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            v7,
                                                                            (Il2CppObject *)StringLiteral_16944/*"authKey"*/,
                                                                            (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Dictionary )
    goto LABEL_73;
  v9 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, const MethodInfo *))Dictionary->klass->vtable._3_ToString.methodPtr)(
                            Dictionary,
                            Dictionary->klass->vtable._3_ToString.method);
  Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            v7,
                                                                            (Il2CppObject *)StringLiteral_23245/*"secretKey"*/,
                                                                            (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Dictionary )
    goto LABEL_73;
  v10 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, const MethodInfo *))Dictionary->klass->vtable._3_ToString.methodPtr)(
                             Dictionary,
                             Dictionary->klass->vtable._3_ToString.method);
  UserSaveData__DeleteAndInitContinueData(1, 0);
  Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Dictionary )
    goto LABEL_73;
  NetworkManager__SetAuth((NetworkManager_o *)Dictionary, v8, v9, v10, 0);
  Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Dictionary )
    goto LABEL_73;
  NetworkManager__WriteAuth((NetworkManager_o *)Dictionary, 0);
  if ( !entity )
    goto LABEL_73;
  klass = entity[2].klass;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getDateTime_41267668((int64_t)klass, 0).fields._dateData;
  Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !entity )
    goto LABEL_73;
  v12 = (NetworkManager_o *)Dictionary;
  monitor = (System_String_o *)entity[1].monitor;
  monitor_high = HIDWORD(entity[4].monitor);
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v15.fields._dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v15, 0);
  v17.fields._dateData = (uint64_t)&dateData;
  Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)System_DateTime__get_Day(v17, 0);
  if ( !v12 )
    goto LABEL_73;
  NetworkManager__SetSignup_41257592(v12, monitor, monitor_high, Month, (int32_t)Dictionary, 0);
  Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
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
  Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !entity )
    goto LABEL_73;
  if ( !Dictionary )
    goto LABEL_73;
  NetworkManager__SetFriendCode((NetworkManager_o *)Dictionary, (System_String_o *)entity[7].klass, 0);
  Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
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
  Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
  if ( !entity )
    goto LABEL_73;
  if ( !Dictionary )
    goto LABEL_73;
  AdManager__SetUserId((AdManager_o *)Dictionary, (int64_t)entity[1].klass, 0);
  Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
  if ( !entity || !Dictionary )
    goto LABEL_73;
  AdManager__SetFriendCode((AdManager_o *)Dictionary, (System_String_o *)entity[7].klass, 0);
  ListViewSort__FirstLoginSave(0);
  if ( !ServantCommentManager__GetUiFlag(0) )
  {
    Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( !Dictionary )
      goto LABEL_73;
    AtlasManager__ReleaseUISkinDialog((AtlasManager_o *)Dictionary, 0);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)LocalizationManager__Get(
                                                                            (System_String_o *)StringLiteral_3819/*"CONTINUE_DEVICE_TAKEOVER_DECIDE_MESSAGE"*/,
                                                                            0);
  if ( !entity )
    goto LABEL_73;
  v18 = System_String__Format((System_String_o *)Dictionary, (Il2CppObject *)entity[1].monitor, 0);
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  if ( PurchaseBehaviour__IsAlreadyInitializedWithObfuscatedAccountId(0) )
  {
    if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
    PurchaseBehaviour__SetInitializedWithMismatchedObfuscatedAccountId(1, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_3822/*"CONTINUE_DEVICE_TAKEOVER_GOOGLE_PLAY_ACCOUNT_ID_ERROR_MESSAGE"*/, 0);
    v18 = System_String__Concat_63518544(v18, v19, 0);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v21 = (NotificationDialog_ClickDelegate_o *)sub_1C32E6C(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(
    v21,
    (Il2CppObject *)this,
    Method_TitleRootComponent_onSelectTakeoverDecide__,
    0);
  if ( !Instance )
LABEL_73:
    sub_1C32E7C(Dictionary);
  CommonUI__OpenNotificationDialog_31193120(
    (CommonUI_o *)Instance,
    0,
    v18,
    v21,
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
  int32_t leftMaskPanel_high; // w21
  TerminalPramsManager_c *v7; // x0
  __int64 *v8; // x8
  UserGameEntity_o *v9; // x21
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2
  struct WarBoardDataEntity_o *WarBoardDataEntityFromResponse; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x1

  if ( (byte_4C39E0E & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    sub_1C32C20(&WarBoardManager_TypeInfo);
    sub_1C32C20(&StringLiteral_11083/*"REQUEST_OK"*/);
    sub_1C32C20(&StringLiteral_11080/*"REQUEST_DO_SIGNUP"*/);
    sub_1C32C20(&StringLiteral_4983/*"DELETE_PASSWORD"*/);
    sub_1C32C20(&StringLiteral_4982/*"DELETE_FINISH"*/);
    sub_1C32C20(&StringLiteral_11346/*"RequestLoginFirst"*/);
    sub_1C32C20(&StringLiteral_18657/*"do_signup"*/);
    byte_4C39E0E = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  CommonUI__SaveLoginResultHavingBonusDuringTutorial(Instance, 0);
  Instance = (CommonUI_o *)UserGameMaster__getSelfUserGame(0);
  if ( !Instance )
    goto LABEL_30;
  leftMaskPanel_high = HIDWORD(Instance->fields.leftMaskPanel);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C32B1E )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C32B1E = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_PlayerGenderType_k__BackingField = leftMaskPanel_high;
  TerminalPramsManager__PlayerGenderType_SaveData(0);
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_18657/*"do_signup"*/, 0) )
  {
    Instance = (CommonUI_o *)UserGameMaster__getSelfUserGame(0);
    if ( Instance )
    {
      v9 = (UserGameEntity_o *)Instance;
      if ( UserGameEntity__HasFlag((UserGameEntity_o *)Instance, 0x800000, 0) )
      {
        TitleRootComponent__SetTakeOverAndCacheClearEnable(this, 0, v10);
        Instance = (CommonUI_o *)this->fields.myFSM;
        if ( Instance )
        {
          v8 = &StringLiteral_4982/*"DELETE_FINISH"*/;
          goto LABEL_29;
        }
      }
      else if ( UserGameEntity__HasFlag(v9, 0x400000, 0) )
      {
        TitleRootComponent__SetTakeOverAndCacheClearEnable(this, 0, v11);
        Instance = (CommonUI_o *)this->fields.myFSM;
        if ( Instance )
        {
          v8 = &StringLiteral_4983/*"DELETE_PASSWORD"*/;
          goto LABEL_29;
        }
      }
      else
      {
        TitleRootComponent__SetTakeOverAndCacheClearEnable(this, 1, v11);
        Instance = (CommonUI_o *)this->fields.myFSM;
        if ( Instance )
        {
          Instance = (CommonUI_o *)PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)Instance, 0);
          if ( Instance )
          {
            if ( System_String__Equals_63553848((System_String_o *)Instance, (System_String_o *)StringLiteral_11346/*"RequestLoginFirst"*/, 0) )
              ListViewSort__FirstLoginSave(0);
            if ( !WarBoardManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
            WarBoardDataEntityFromResponse = WarBoardManager__GetWarBoardDataEntityFromResponse(result, 0);
            this->fields.resumeWarBoardData = WarBoardDataEntityFromResponse;
            sub_1C32BC4(
              (CGThumbnailListItem_o *)&this->fields.resumeWarBoardData,
              (int32_t)WarBoardDataEntityFromResponse,
              v13,
              v14);
            TitleRootComponent__SetupFirstLogin(this, v15);
            Instance = (CommonUI_o *)this->fields.myFSM;
            if ( Instance )
            {
              v8 = &StringLiteral_11083/*"REQUEST_OK"*/;
              goto LABEL_29;
            }
          }
        }
      }
    }
LABEL_30:
    sub_1C32E7C(Instance);
  }
  Instance = (CommonUI_o *)this->fields.myFSM;
  if ( !Instance )
    goto LABEL_30;
  v8 = &StringLiteral_11080/*"REQUEST_DO_SIGNUP"*/;
LABEL_29:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v8, 0);
}


void TitleRootComponent__callbackTopSignup(
        TitleRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  PlayMakerFSM_o *myFSM; // x8
  __int64 *v7; // x9

  if ( (byte_4C39E00 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_11083/*"REQUEST_OK"*/);
    sub_1C32C20(&StringLiteral_22379/*"ok"*/);
    sub_1C32C20(&StringLiteral_11081/*"REQUEST_NG"*/);
    byte_4C39E00 = 1;
  }
  v5 = System_String__op_Equality(result, (System_String_o *)StringLiteral_22379/*"ok"*/, 0);
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C32E7C(v5);
  v7 = &StringLiteral_11083/*"REQUEST_OK"*/;
  if ( !v5 )
    v7 = &StringLiteral_11081/*"REQUEST_NG"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v7, 0);
}


void TitleRootComponent__checkConcentTermsOfUse(TitleRootComponent_o *this, const MethodInfo *method)
{
  TermsOfUseMenu_o *termsOfUseMenu; // x0
  PlayMakerFSM_o *myFSM; // x8
  __int64 *v5; // x9

  if ( (byte_4C39DF7 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&StringLiteral_3713/*"CONCENT_OK"*/);
    sub_1C32C20(&StringLiteral_3712/*"CONCENT_NG"*/);
    byte_4C39DF7 = 1;
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
      v5 = &StringLiteral_3713/*"CONCENT_OK"*/;
      goto LABEL_12;
    }
LABEL_13:
    sub_1C32E7C(termsOfUseMenu);
  }
  termsOfUseMenu = this->fields.termsOfUseMenu;
  if ( !termsOfUseMenu )
    goto LABEL_13;
  termsOfUseMenu = (TermsOfUseMenu_o *)TermsOfUseMenu__IsConcent(termsOfUseMenu, 0);
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    goto LABEL_13;
  v5 = &StringLiteral_3713/*"CONCENT_OK"*/;
  if ( ((unsigned __int8)termsOfUseMenu & 1) != 0 )
    v5 = &StringLiteral_3712/*"CONCENT_NG"*/;
LABEL_12:
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v5, 0);
}


void TitleRootComponent__checkPlayMode(TitleRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  DataManager_o *Instance; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  NetworkManager_c *v7; // x0
  int64_t serverTimeChkMovie; // x21
  Il2CppObject *MasterData_object; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  OpeningMovieEntity_array *EnableOpeningMovies; // x0
  OpeningMovieEntity_o **p_openingMovieEntity; // x21
  OpeningMovieEntity_array *v14; // x22
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v20; // x23
  OpeningMovieEntity_o *v21; // x1
  OpeningMovieEntity_o *v22; // x1
  int v23; // w23
  __int64 *v24; // x8
  bool IsRegisterMaterial; // w22
  TitleRootComponent_c *v26; // x8
  System_String_o *v27; // x20
  System_String_o *v28; // x21
  System_String_o *v29; // x0
  System_String_o *v30; // x22
  System_String_o *v31; // x23
  Il2CppObject *v32; // x24
  CommonConfirmDialog_ClickDelegate_o *v33; // x25
  System_String_o *v34; // x23
  OpeningMovieEntity_o *v35; // x8
  Il2CppObject *name; // x21
  System_String_o *v37; // x20
  Il2CppObject *MoviePlayTime; // x22
  Il2CppObject *AssetDownloadSizeString; // x23
  System_String_o *v40; // x0
  System_String_o *v41; // x0
  System_String_o *v42; // x0
  System_String_o *v43; // x21
  System_String_o *v44; // x22
  System_String_o *v45; // x23
  Il2CppObject *v46; // x24
  CommonConfirmDialog_ClickDelegate_o *v47; // x25

  if ( (byte_4C39DEB & 1) == 0 )
  {
    sub_1C32C20(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_OpeningMovieMaster___);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&OptionManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1C32C20(&TitleRootComponent_TypeInfo);
    sub_1C32C20(&Method_TitleRootComponent___c__DisplayClass81_0__checkPlayMode_b__0__);
    sub_1C32C20(&Method_TitleRootComponent___c__DisplayClass81_0__checkPlayMode_b__1__);
    sub_1C32C20(&TitleRootComponent___c__DisplayClass81_0_TypeInfo);
    sub_1C32C20(&StringLiteral_10391/*"PLAY_OPENING_CONFIRM_DECIDE"*/);
    sub_1C32C20(&StringLiteral_9634/*"OPENING_MOVIE_SKIP_CONFIRM_DIALOG_TITLE"*/);
    sub_1C32C20(&StringLiteral_10393/*"PLAY_OPENING_CONFIRM_TITLE"*/);
    sub_1C32C20(&StringLiteral_5031/*"DOWNLOAD_AND_PLAY_OPENING_CONFIRM_MSG"*/);
    sub_1C32C20(&StringLiteral_9631/*"OPENING_MOVIE_SKIP_CONFIRM_DIALOG_MESSAGE"*/);
    sub_1C32C20(&StringLiteral_9632/*"OPENING_MOVIE_SKIP_CONFIRM_DIALOG_MESSAGE_MATERIAL"*/);
    sub_1C32C20(&StringLiteral_10392/*"PLAY_OPENING_CONFIRM_MSG"*/);
    sub_1C32C20(&StringLiteral_9633/*"OPENING_MOVIE_SKIP_CONFIRM_DIALOG_SKIP"*/);
    sub_1C32C20(&StringLiteral_10394/*"PLAY_OPENING_MOVIE"*/);
    sub_1C32C20(&StringLiteral_9630/*"OPENING_MOVIE_SKIP_CONFIRM_DIALOG_CLOSE"*/);
    sub_1C32C20(&StringLiteral_1046/*".usm"*/);
    sub_1C32C20(&StringLiteral_9177/*"Movie/"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_10390/*"PLAY_OPENING_CONFIRM_CANCEL"*/);
    sub_1C32C20(&StringLiteral_10389/*"PLAY_NORMAL_MODE"*/);
    byte_4C39DEB = 1;
  }
  v3 = sub_1C32E6C(TitleRootComponent___c__DisplayClass81_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_72;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 16), (int32_t)this, v5, v6);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C362B4 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C362B4 = 1;
  }
  v7 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v7 = NetworkManager_TypeInfo;
  }
  serverTimeChkMovie = v7->static_fields->serverTimeChkMovie;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_72;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_OpeningMovieMaster___);
  *(_QWORD *)(v3 + 24) = MasterData_object;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 24), (int32_t)MasterData_object, v10, v11);
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
  v14 = EnableOpeningMovies;
  this->fields.openingMovieEntity = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.openingMovieEntity, 0, v15, v16);
  if ( !v14 )
    goto LABEL_72;
  max_length = v14->max_length;
  if ( (int)max_length < 1 )
  {
LABEL_18:
    if ( max_length )
    {
      if ( !(_DWORD)max_length )
LABEL_71:
        sub_1C32E84(Instance);
      v22 = v14->m_Items[0];
      *p_openingMovieEntity = v22;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.openingMovieEntity, (int32_t)v22, v17, v18);
    }
    v23 = 1;
  }
  else
  {
    v20 = 0;
    while ( 1 )
    {
      if ( v20 >= (unsigned int)max_length )
        goto LABEL_71;
      v21 = v14->m_Items[v20];
      *p_openingMovieEntity = v21;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.openingMovieEntity, (int32_t)v21, v17, v18);
      Instance = (DataManager_o *)OpeningMovieMaster__IsPlayedOpeningMovie_42332112(*p_openingMovieEntity, 1, 0);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        break;
      max_length = v14->max_length;
      if ( (__int64)++v20 >= (int)max_length )
        goto LABEL_18;
    }
    v23 = 0;
  }
  if ( !*p_openingMovieEntity )
    goto LABEL_27;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( (OptionManager__GetNotPlayOpeningMovie(0) & v23) == 1 )
  {
LABEL_27:
    Instance = (DataManager_o *)this->fields.myFSM;
    if ( Instance )
    {
      v24 = &StringLiteral_10389/*"PLAY_NORMAL_MODE"*/;
LABEL_29:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v24, 0);
      return;
    }
    goto LABEL_72;
  }
  Instance = (DataManager_o *)*p_openingMovieEntity;
  if ( !*p_openingMovieEntity )
    goto LABEL_72;
  IsRegisterMaterial = OpeningMovieEntity__IsRegisterMaterial((OpeningMovieEntity_o *)Instance, 0);
  v26 = TitleRootComponent_TypeInfo;
  if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
    v26 = TitleRootComponent_TypeInfo;
  }
  Instance = (DataManager_o *)UnityEngine_PlayerPrefs__GetInt_71181884(v26->static_fields->SAVE_KEY_PLAYING_MOVIE, 0);
  if ( !*p_openingMovieEntity )
    goto LABEL_72;
  if ( (_DWORD)Instance != (*p_openingMovieEntity)->fields.id )
  {
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    if ( (v23 & !OptionManager__GetNotPlayOpeningMovie(0)) == 1 )
    {
      Instance = (DataManager_o *)this->fields.myFSM;
      if ( Instance )
      {
        v24 = &StringLiteral_10394/*"PLAY_OPENING_MOVIE"*/;
        goto LABEL_29;
      }
    }
    else
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)CommonUI__maskFadein((CommonUI_o *)Instance, 0.0, 0, 0);
        if ( *p_openingMovieEntity )
        {
          v34 = System_String__Concat_63556792(
                  (System_String_o *)StringLiteral_9177/*"Movie/"*/,
                  (*p_openingMovieEntity)->fields.movieName,
                  (System_String_o *)StringLiteral_1046/*".usm"*/,
                  0);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10393/*"PLAY_OPENING_CONFIRM_TITLE"*/, 0);
          v35 = *p_openingMovieEntity;
          if ( *p_openingMovieEntity )
          {
            name = (Il2CppObject *)v35->fields.name;
            v37 = (System_String_o *)Instance;
            MoviePlayTime = (Il2CppObject *)OpeningMovieEntity__GetMoviePlayTime(v35, 0);
            Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
            if ( Instance )
            {
              if ( AssetManager__IsNeedDownload((AssetManager_o *)Instance, v34, 0) )
              {
                Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
                if ( !Instance )
                  goto LABEL_72;
                AssetDownloadSizeString = (Il2CppObject *)AssetManager__GetAssetDownloadSizeString(
                                                            (AssetManager_o *)Instance,
                                                            v34,
                                                            0);
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v40 = LocalizationManager__Get((System_String_o *)StringLiteral_5031/*"DOWNLOAD_AND_PLAY_OPENING_CONFIRM_MSG"*/, 0);
                v41 = System_String__Format_63559904(v40, name, AssetDownloadSizeString, MoviePlayTime, 0);
              }
              else
              {
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v42 = LocalizationManager__Get((System_String_o *)StringLiteral_10392/*"PLAY_OPENING_CONFIRM_MSG"*/, 0);
                v41 = System_String__Format_63559836(v42, name, MoviePlayTime, 0);
              }
              v43 = v41;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v44 = LocalizationManager__Get((System_String_o *)StringLiteral_10390/*"PLAY_OPENING_CONFIRM_CANCEL"*/, 0);
              v45 = LocalizationManager__Get((System_String_o *)StringLiteral_10391/*"PLAY_OPENING_CONFIRM_DECIDE"*/, 0);
              v46 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              v47 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C32E6C(CommonConfirmDialog_ClickDelegate_TypeInfo);
              CommonConfirmDialog_ClickDelegate___ctor(
                v47,
                (Il2CppObject *)v3,
                Method_TitleRootComponent___c__DisplayClass81_0__checkPlayMode_b__1__,
                0);
              Instance = (DataManager_o *)TitleRootComponent_TypeInfo;
              if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
              if ( v46 )
              {
                CommonUI__OpenConfirmDialog_31190800(
                  (CommonUI_o *)v46,
                  v37,
                  v43,
                  v45,
                  v44,
                  1,
                  v47,
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
    sub_1C32E7C(Instance);
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_72;
  CommonUI__maskFadein((CommonUI_o *)Instance, 0.0, 0, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_9634/*"OPENING_MOVIE_SKIP_CONFIRM_DIALOG_TITLE"*/, 0);
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_9631/*"OPENING_MOVIE_SKIP_CONFIRM_DIALOG_MESSAGE"*/, 0);
  if ( IsRegisterMaterial )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v29 = LocalizationManager__Get((System_String_o *)StringLiteral_9632/*"OPENING_MOVIE_SKIP_CONFIRM_DIALOG_MESSAGE_MATERIAL"*/, 0);
    v28 = System_String__Concat_63518544(v28, v29, 0);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_9630/*"OPENING_MOVIE_SKIP_CONFIRM_DIALOG_CLOSE"*/, 0);
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_9633/*"OPENING_MOVIE_SKIP_CONFIRM_DIALOG_SKIP"*/, 0);
  v32 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v33 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C32E6C(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v33,
    (Il2CppObject *)v3,
    Method_TitleRootComponent___c__DisplayClass81_0__checkPlayMode_b__0__,
    0);
  if ( !v32 )
    goto LABEL_72;
  CommonUI__OpenConfirmDialog_31190800((CommonUI_o *)v32, v27, v28, v31, v30, 1, v33, 0, 0, 0, 0);
}


bool TitleRootComponent__checkSignup(TitleRootComponent_o *this, const MethodInfo *method)
{
  NetworkManager_o *Instance; // x0
  PlayMakerFSM_o *myFSM; // x8
  System_String_o **v5; // x9
  char v6; // w19

  if ( (byte_4C39DFD & 1) == 0 )
  {
    sub_1C32C20(&ManagerConfig_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_1C32C20(&StringLiteral_12218/*"SIGNUP_ENTRY_OK"*/);
    sub_1C32C20(&StringLiteral_12217/*"SIGNUP_ENTRY_NONE"*/);
    byte_4C39DFD = 1;
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
      v5 = (System_String_o **)&StringLiteral_12218/*"SIGNUP_ENTRY_OK"*/;
      v6 = 1;
      goto LABEL_12;
    }
LABEL_13:
    sub_1C32E7C(Instance);
  }
  Instance = (NetworkManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (NetworkManager_o *)NetworkManager__ReadSignup(Instance, 0);
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    goto LABEL_13;
  v5 = (System_String_o **)&StringLiteral_12217/*"SIGNUP_ENTRY_NONE"*/;
  v6 = (char)Instance;
  if ( ((unsigned __int8)Instance & 1) != 0 )
    v5 = (System_String_o **)&StringLiteral_12218/*"SIGNUP_ENTRY_OK"*/;
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

  if ( (byte_4C39E03 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AvalonSceneManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_TitleRootComponent__closeTakeoverInput_b__113_0__);
    byte_4C39E03 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  v7 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_TitleRootComponent__closeTakeoverInput_b__113_0__, 0);
  if ( !v5 )
    sub_1C32E7C(v8);
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

  if ( (byte_4C39E27 & 1) == 0 )
  {
    sub_1C32C20(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_TitleRootComponent__confirmCacheClear_b__153_0__);
    sub_1C32C20(&StringLiteral_7458/*"INIT_CACHE_CLEAR_CONFIRM_DECIDE"*/);
    sub_1C32C20(&StringLiteral_7462/*"INIT_CACHE_CLEAR_CONFIRM_TITLE_2"*/);
    sub_1C32C20(&StringLiteral_7460/*"INIT_CACHE_CLEAR_CONFIRM_MESSAGE_2"*/);
    sub_1C32C20(&StringLiteral_7457/*"INIT_CACHE_CLEAR_CONFIRM_CANCEL"*/);
    byte_4C39E27 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_7462/*"INIT_CACHE_CLEAR_CONFIRM_TITLE_2"*/, 0);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_7460/*"INIT_CACHE_CLEAR_CONFIRM_MESSAGE_2"*/, 0);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_7458/*"INIT_CACHE_CLEAR_CONFIRM_DECIDE"*/, 0);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_7457/*"INIT_CACHE_CLEAR_CONFIRM_CANCEL"*/, 0);
  v8 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C32E6C(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v8,
    (Il2CppObject *)this,
    Method_TitleRootComponent__confirmCacheClear_b__153_0__,
    0);
  if ( !Instance )
    sub_1C32E7C(v9);
  CommonUI__OpenConfirmDecideDlg((CommonUI_o *)Instance, v4, v5, v6, v7, v8, 0, 0.0, 15.0, 0, 0, 0, 240, 0, 1, 0, 0, 0);
}


void TitleRootComponent__endHomeRequest(TitleRootComponent_o *this, System_String_o *result, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C39E1A & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C39E1A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetChangeOtherConnectMarkFromPlayerPrefs((CommonUI_o *)Instance, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
  {
    sub_1C32E7C(Instance);
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
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4C39E15 & 1) == 0 )
  {
    sub_1C32C20(&BattleData_TypeInfo);
    sub_1C32C20(&StringLiteral_22379/*"ok"*/);
    sub_1C32C20(&StringLiteral_6975/*"GO_BATTLE"*/);
    byte_4C39E15 = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_22379/*"ok"*/, 0) )
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
      sub_1C32E7C(0);
    PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_6975/*"GO_BATTLE"*/, 0);
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
  PlayMakerFSM_o *myFSM; // x0
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  __int64 *v11; // x8

  if ( (byte_4C39E13 & 1) == 0 )
  {
    sub_1C32C20(&BattleData_TypeInfo);
    sub_1C32C20(&StringLiteral_22212/*"ng"*/);
    sub_1C32C20(&StringLiteral_6975/*"GO_BATTLE"*/);
    sub_1C32C20(&StringLiteral_6979/*"GO_TERMINAL"*/);
    byte_4C39E13 = 1;
  }
  v5 = System_String__op_Equality(result, (System_String_o *)StringLiteral_22212/*"ng"*/, 0);
  if ( !BattleData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
    if ( v5 )
      goto LABEL_5;
LABEL_12:
    if ( BattleData__getContinueBattleFlg(0) >= 1 )
    {
      TitleRootComponent__battleContinueRequest(this, v10);
      return;
    }
    myFSM = this->fields.myFSM;
    if ( myFSM )
    {
      v11 = &StringLiteral_6975/*"GO_BATTLE"*/;
      goto LABEL_18;
    }
LABEL_19:
    sub_1C32E7C(myFSM);
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
    PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_6979/*"GO_TERMINAL"*/, 0);
  }
  if ( !TitleRootComponent__CheckAndTransitionBattleTalk(this, v6) )
  {
    TitleRootComponent__ReleaseTitleAssets(this, v9);
    myFSM = this->fields.myFSM;
    if ( myFSM )
    {
      v11 = &StringLiteral_6979/*"GO_TERMINAL"*/;
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
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4C39E16 & 1) == 0 )
  {
    sub_1C32C20(&BattleData_TypeInfo);
    sub_1C32C20(&StringLiteral_22212/*"ng"*/);
    sub_1C32C20(&StringLiteral_6975/*"GO_BATTLE"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C39E16 = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_22212/*"ng"*/, 0) )
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
      sub_1C32E7C(0);
    PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_6975/*"GO_BATTLE"*/, 0);
  }
}


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
  if ( (byte_4C39DFA & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_TitleRootComponent_endTermsOfUseNg__);
    sub_1C32C20(&Method_TitleRootComponent_endTermsOfUseOk__);
    sub_1C32C20(&StringLiteral_13374/*"TERMS_OF_USE_DENIAL_TITLE"*/);
    this = (TitleRootComponent_o *)sub_1C32C20(&StringLiteral_13373/*"TERMS_OF_USE_DENIAL_MESSAGE"*/);
    byte_4C39DFA = 1;
  }
  termsOfUseMenu = v4->fields.termsOfUseMenu;
  if ( result )
  {
    v6 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)v4, Method_TitleRootComponent_endTermsOfUseOk__, 0);
    if ( termsOfUseMenu )
    {
      TermsOfUseMenu__Close_37591416(termsOfUseMenu, v6, 0);
      return;
    }
LABEL_11:
    sub_1C32E7C(this);
  }
  if ( !termsOfUseMenu )
    goto LABEL_11;
  TermsOfUseMenu__Close(v4->fields.termsOfUseMenu, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_13374/*"TERMS_OF_USE_DENIAL_TITLE"*/, 0);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_13373/*"TERMS_OF_USE_DENIAL_MESSAGE"*/, 0);
  v10 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)v4, Method_TitleRootComponent_endTermsOfUseNg__, 0);
  if ( !Instance )
    goto LABEL_11;
  CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v8, v9, v10, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0.0, 0, 0);
}


void TitleRootComponent__endTermsOfUseNg(TitleRootComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4C39DFC & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_3712/*"CONCENT_NG"*/);
    byte_4C39DFC = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C32E7C(0);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_3712/*"CONCENT_NG"*/, 0);
}


void TitleRootComponent__endTermsOfUseOk(TitleRootComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4C39DFB & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_3713/*"CONCENT_OK"*/);
    byte_4C39DFB = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C32E7C(0);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_3713/*"CONCENT_OK"*/, 0);
}


void TitleRootComponent__endTitleFade(TitleRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *v4; // x20
  System_Action_o *v5; // x21

  if ( (byte_4C39DF6 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_TitleRootComponent__endTitleFade_b__100_0__);
    sub_1C32C20(&TouchEffectManager_TypeInfo);
    byte_4C39DF6 = 1;
  }
  if ( this->fields.storyProgress == 3 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_10;
    CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0);
    if ( !TouchEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo);
    TouchEffectManager__SetBlock(0, 0);
  }
  v4 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_TitleRootComponent__endTitleFade_b__100_0__, 0);
  if ( !v4 )
LABEL_10:
    sub_1C32E7C(Instance);
  CommonUI__maskFadein((CommonUI_o *)v4, 0.1, v5, 0);
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
    sub_1C32E7C(takeoverKeyInput);
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
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4C39E07 & 1) == 0 )
  {
    sub_1C32C20(&Method_TitleRootComponent_onClickTakeoverCancel__);
    sub_1C32C20(&StringLiteral_13329/*"TAKEOVER_CANCEL"*/);
    byte_4C39E07 = 1;
  }
  v3 = Method_TitleRootComponent_onClickTakeoverCancel__;
  if ( (*((_BYTE *)Method_TitleRootComponent_onClickTakeoverCancel__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C32C38(Method_TitleRootComponent_onClickTakeoverCancel__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  TitleRootComponent__closeTakeoverInput(this, v5);
  UnityEngine_Input__set_imeCompositionMode(0, 0);
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C32E7C(0);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_13329/*"TAKEOVER_CANCEL"*/, 0);
}


void TitleRootComponent__onClickTakeoverInput(TitleRootComponent_o *this, const MethodInfo *method)
{
  struct UIButton_o *takeoverDecide; // x0
  char v4; // w0
  _QWORD *v5; // x8
  char v6; // w20
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4C39E04 & 1) == 0 )
  {
    sub_1C32C20(&Method_TitleRootComponent_onClickTakeoverInput__);
    byte_4C39E04 = 1;
  }
  takeoverDecide = this->fields.takeoverDecide;
  if ( !takeoverDecide )
    sub_1C32E7C(0);
  v4 = ((__int64 (__fastcall *)(struct UIButton_o *, const MethodInfo *))takeoverDecide->klass->vtable._4_get_isEnabled.methodPtr)(
         takeoverDecide,
         takeoverDecide->klass->vtable._4_get_isEnabled.method);
  v5 = Method_TitleRootComponent_onClickTakeoverInput__;
  v6 = v4;
  if ( (*((_BYTE *)Method_TitleRootComponent_onClickTakeoverInput__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C32C38(Method_TitleRootComponent_onClickTakeoverInput__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C32C04(v5, v5[4]);
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
  AvalonSceneManager_c *v3; // x8
  CommonUI_o *v4; // x19
  TitleRootComponent___c_c *v5; // x0
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__123_0; // x20
  Il2CppObject *v8; // x21
  struct TitleRootComponent___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C39E0C & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AvalonSceneManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_TitleRootComponent___c__onCloseTakeoverDecide_b__123_0__);
    sub_1C32C20(&TitleRootComponent___c_TypeInfo);
    byte_4C39E0C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v3 = AvalonSceneManager_TypeInfo;
  v4 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v3 = AvalonSceneManager_TypeInfo;
  }
  v5 = TitleRootComponent___c_TypeInfo;
  DEFAULT_FADE_TIME = v3->static_fields->DEFAULT_FADE_TIME;
  if ( !TitleRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleRootComponent___c_TypeInfo);
    v5 = TitleRootComponent___c_TypeInfo;
  }
  _9__123_0 = v5->static_fields->__9__123_0;
  if ( !_9__123_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = TitleRootComponent___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__123_0 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(_9__123_0, v8, Method_TitleRootComponent___c__onCloseTakeoverDecide_b__123_0__, 0);
    static_fields = TitleRootComponent___c_TypeInfo->static_fields;
    static_fields->__9__123_0 = _9__123_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__123_0, (int32_t)_9__123_0, v10, v11);
  }
  if ( !v4 )
    sub_1C32E7C(v5);
  CommonUI__maskFadeout(v4, 1, DEFAULT_FADE_TIME, _9__123_0, 0);
}


void TitleRootComponent__onEndWebView(TitleRootComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4C39E10 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_3515/*"CLOSE_NOTICE"*/);
    byte_4C39E10 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C32E7C(0);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_3515/*"CLOSE_NOTICE"*/, 0);
}


void TitleRootComponent__onSelectTakeoverDecide(TitleRootComponent_o *this, bool isDecide, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0

  if ( (byte_4C39E0B & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_TitleRootComponent_onCloseTakeoverDecide__);
    byte_4C39E0B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_TitleRootComponent_onCloseTakeoverDecide__, 0);
  if ( !Instance )
    sub_1C32E7C(v6);
  CommonUI__CloseNotificationDialog_31193592((CommonUI_o *)Instance, v5, 0);
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
  const MethodInfo *v16; // x3

  if ( (byte_4C39E02 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AvalonSceneManager_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UIInput___);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_TitleRootComponent___c__openTakeoverInput_b__112_0__);
    sub_1C32C20(&TitleRootComponent___c_TypeInfo);
    sub_1C32C20(&StringLiteral_3820/*"CONTINUE_DEVICE_TAKEOVER_EXPLANATIOIN1"*/);
    sub_1C32C20(&StringLiteral_3821/*"CONTINUE_DEVICE_TAKEOVER_EXPLANATIOIN2"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C39E02 = 1;
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
                          (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIInput___);
  if ( !this->fields.takeoverPasswardInput )
    goto LABEL_23;
  v4 = (UIInput_o *)friendCodeComponent;
  friendCodeComponent = UnityEngine_Component__GetComponent_object_(
                          (UnityEngine_Component_o *)this->fields.takeoverPasswardInput,
                          (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIInput___);
  if ( !friendCodeComponent )
    goto LABEL_23;
  v5 = (UIInput_o *)friendCodeComponent;
  UIInput__set_value((UIInput_o *)friendCodeComponent, (System_String_o *)StringLiteral_1/*""*/, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  friendCodeComponent = LocalizationManager__Get((System_String_o *)StringLiteral_3820/*"CONTINUE_DEVICE_TAKEOVER_EXPLANATIOIN1"*/, 0);
  if ( !v4 )
    goto LABEL_23;
  UIInput__set_defaultText(v4, (System_String_o *)friendCodeComponent, 0);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_3821/*"CONTINUE_DEVICE_TAKEOVER_EXPLANATIOIN2"*/, 0);
  UIInput__set_defaultText(v5, v6, 0);
  TitleRootComponent__onChangeTakeoverInput(this, v7);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    v12 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v12, v13, Method_TitleRootComponent___c__openTakeoverInput_b__112_0__, 0);
    static_fields = TitleRootComponent___c_TypeInfo->static_fields;
    static_fields->__9__112_0 = v12;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__112_0, (int32_t)v12, v15, v16);
  }
  if ( !v10 )
LABEL_23:
    sub_1C32E7C(friendCodeComponent);
  CommonUI__maskFadein(v10, DEFAULT_FADE_TIME, v12, 0);
  return 1;
}


void TitleRootComponent__requestContinueInput(TitleRootComponent_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  System_String_o *Request_object; // x0
  ContinueInputRequest_o *v5; // x20
  UILineInput_o *takeoverPasswardInput; // x8
  System_String_o *v7; // x19

  if ( (byte_4C39E05 & 1) == 0 )
  {
    sub_1C32C20(&Method_NetworkManager_getRequest_ContinueInputRequest___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C32C20(&Method_TitleRootComponent_callbackContinueInput__);
    byte_4C39E05 = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_1C32E6C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_TitleRootComponent_callbackContinueInput__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = (System_String_o *)NetworkManager__getRequest_object_(
                                        v3,
                                        (const MethodInfo_3168488 *)Method_NetworkManager_getRequest_ContinueInputRequest___);
  if ( !this->fields.takeoverKeyInput
    || (v5 = (ContinueInputRequest_o *)Request_object,
        Request_object = UILineInput__GetText(this->fields.takeoverKeyInput, 0),
        (takeoverPasswardInput = this->fields.takeoverPasswardInput) == 0)
    || (v7 = Request_object, Request_object = UILineInput__GetText(takeoverPasswardInput, 0), !v5) )
  {
    sub_1C32E7C(Request_object);
  }
  ContinueInputRequest__beginRequest(v5, v7, Request_object, 0);
}


void TitleRootComponent__requestLogin(TitleRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  NetworkManager_LoginCallbackFunc_o *v4; // x21
  __int64 v5; // x0

  if ( (byte_4C39E0D & 1) == 0 )
  {
    sub_1C32C20(&NetworkManager_LoginCallbackFunc_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_1C32C20(&Method_TitleRootComponent_callbackLogin__);
    byte_4C39E0D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  v4 = (NetworkManager_LoginCallbackFunc_o *)sub_1C32E6C(NetworkManager_LoginCallbackFunc_TypeInfo);
  NetworkManager_LoginCallbackFunc___ctor(v4, (Il2CppObject *)this, Method_TitleRootComponent_callbackLogin__, 0);
  if ( !Instance )
    sub_1C32E7C(v5);
  NetworkManager__RequestLogin((NetworkManager_o *)Instance, v4, 1, 0);
}


void TitleRootComponent__requestSignup(TitleRootComponent_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  Il2CppObject *Request_object; // x0

  if ( (byte_4C39DFF & 1) == 0 )
  {
    sub_1C32C20(&Method_NetworkManager_getRequest_TopSignupRequest___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C32C20(&Method_TitleRootComponent_callbackTopSignup__);
    byte_4C39DFF = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_1C32E6C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v3, (Il2CppObject *)this, Method_TitleRootComponent_callbackTopSignup__, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v3,
                     (const MethodInfo_3168488 *)Method_NetworkManager_getRequest_TopSignupRequest___);
  if ( !Request_object )
    sub_1C32E7C(0);
  RequestBase__beginRequest((RequestBase_o *)Request_object, 0);
}


void TitleRootComponent__requestTakeoverDecide(TitleRootComponent_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  System_String_o *Request_object; // x0
  ContinueDecideRequest_o *v5; // x20
  UILineInput_o *takeoverPasswardInput; // x8
  System_String_o *v7; // x19

  if ( (byte_4C39E08 & 1) == 0 )
  {
    sub_1C32C20(&Method_NetworkManager_getRequest_ContinueDecideRequest___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C32C20(&Method_TitleRootComponent_callbackInputDecide__);
    byte_4C39E08 = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_1C32E6C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v3, (Il2CppObject *)this, Method_TitleRootComponent_callbackInputDecide__, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = (System_String_o *)NetworkManager__getRequest_object_(
                                        v3,
                                        (const MethodInfo_3168488 *)Method_NetworkManager_getRequest_ContinueDecideRequest___);
  if ( !this->fields.takeoverKeyInput
    || (v5 = (ContinueDecideRequest_o *)Request_object,
        Request_object = UILineInput__GetText(this->fields.takeoverKeyInput, 0),
        (takeoverPasswardInput = this->fields.takeoverPasswardInput) == 0)
    || (v7 = Request_object, Request_object = UILineInput__GetText(takeoverPasswardInput, 0), !v5) )
  {
    sub_1C32E7C(Request_object);
  }
  ContinueDecideRequest__beginRequestCode(v5, v7, Request_object, 0);
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

  if ( (byte_4C39DFE & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_12219/*"SIGNUP_INPUT_OK"*/);
    byte_4C39DFE = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C32E7C(0);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_12219/*"SIGNUP_INPUT_OK"*/, 0);
  return 1;
}


bool TitleRootComponent__startTakeoverInput(TitleRootComponent_o *this, const MethodInfo *method)
{
  UILabel_o *takeOverDetailLb; // x20
  System_String_o *takeoverObj; // x0
  UILabel_o *takteOverIdLb; // x20
  UILabel_o *takeOverPwLb; // x20
  const MethodInfo *v7; // x1
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v9; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v11; // x21

  if ( (byte_4C39E01 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AvalonSceneManager_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_TitleRootComponent__startTakeoverInput_b__111_0__);
    sub_1C32C20(&StringLiteral_13334/*"TAKEOVER_PW_TXT"*/);
    sub_1C32C20(&StringLiteral_13330/*"TAKEOVER_DETAIL_TXT"*/);
    sub_1C32C20(&StringLiteral_13331/*"TAKEOVER_ID_TXT"*/);
    byte_4C39E01 = 1;
  }
  takeOverDetailLb = this->fields.takeOverDetailLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  takeoverObj = LocalizationManager__Get((System_String_o *)StringLiteral_13330/*"TAKEOVER_DETAIL_TXT"*/, 0);
  if ( !takeOverDetailLb )
    goto LABEL_16;
  UILabel__set_text(takeOverDetailLb, takeoverObj, 0);
  takteOverIdLb = this->fields.takteOverIdLb;
  takeoverObj = LocalizationManager__Get((System_String_o *)StringLiteral_13331/*"TAKEOVER_ID_TXT"*/, 0);
  if ( !takteOverIdLb )
    goto LABEL_16;
  UILabel__set_text(takteOverIdLb, takeoverObj, 0);
  takeOverPwLb = this->fields.takeOverPwLb;
  takeoverObj = LocalizationManager__Get((System_String_o *)StringLiteral_13334/*"TAKEOVER_PW_TXT"*/, 0);
  if ( !takeOverPwLb )
    goto LABEL_16;
  UILabel__set_text(takeOverPwLb, takeoverObj, 0);
  UnityEngine_Input__set_imeCompositionMode(1, 0);
  takeoverObj = (System_String_o *)this->fields.takeoverObj;
  if ( !takeoverObj )
    goto LABEL_16;
  if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)takeoverObj, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v9 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v9 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v9->static_fields->DEFAULT_FADE_TIME;
    v11 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_TitleRootComponent__startTakeoverInput_b__111_0__, 0);
    if ( Instance )
    {
      CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v11, 0);
      return 1;
    }
LABEL_16:
    sub_1C32E7C(takeoverObj);
  }
  TitleRootComponent__openTakeoverInput(this, v7);
  return 1;
}


bool TitleRootComponent__startTermsOfUseInput(TitleRootComponent_o *this, const MethodInfo *method)
{
  TermsOfUseMenu_o *termsOfUseMenu; // x20
  TermsOfUseMenu_CallbackFunc_o *v4; // x21
  __int64 v5; // x0

  if ( (byte_4C39DF9 & 1) == 0 )
  {
    sub_1C32C20(&TermsOfUseMenu_CallbackFunc_TypeInfo);
    sub_1C32C20(&Method_TitleRootComponent_endTermsOfUseInput__);
    byte_4C39DF9 = 1;
  }
  termsOfUseMenu = this->fields.termsOfUseMenu;
  v4 = (TermsOfUseMenu_CallbackFunc_o *)sub_1C32E6C(TermsOfUseMenu_CallbackFunc_TypeInfo);
  TermsOfUseMenu_CallbackFunc___ctor(v4, (Il2CppObject *)this, Method_TitleRootComponent_endTermsOfUseInput__, 0);
  if ( !termsOfUseMenu )
    sub_1C32E7C(v5);
  TermsOfUseMenu__Open(termsOfUseMenu, v4, 0);
  return 1;
}


void TitleRootComponent__startTitle(TitleRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  UnityEngine_GameObject_o *titleRootObjet; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  TitleRootComponent_c *v7; // x0
  TitleRootComponent_c *v8; // x0
  TitleRootComponent_o *v9; // x0
  const MethodInfo *v10; // x1
  System_Collections_IEnumerator_o *NoticeUpdate; // x0
  ManagerConfig_c *v12; // x0
  int32_t storyProgress; // w22
  UILabel_o *appVerLb; // x21
  System_String_o *v15; // x0
  ManagerConfig_c *v16; // x8
  System_String_o *v17; // x22
  UILabel_o *cpRghtLb; // x21
  System_String_o *v19; // x0
  ManagerConfig_c *v20; // x8
  System_String_o *v21; // x22
  UILabel_o *v22; // x21
  const MethodInfo *v23; // x1
  TitleRootComponent_c *v24; // x0
  System_String_o *PART2_CHAPTER6_EPILOGUE_BG_MOVIE_NAME; // x19
  System_String_o *MoviePath; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_String_o *v29; // x19
  AssetLoader_LoadEndDataHandler_o *v30; // x21
  UnityEngine_Color_o v31; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v34; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C39DF2 & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&CommonUI_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_1C32C20(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&ManagementManager_TypeInfo);
    sub_1C32C20(&ManagerConfig_TypeInfo);
    sub_1C32C20(&TitleRootComponent_TypeInfo);
    sub_1C32C20(&Method_TitleRootComponent___c__DisplayClass96_0__startTitle_b__0__);
    sub_1C32C20(&TitleRootComponent___c__DisplayClass96_0_TypeInfo);
    sub_1C32C20(&UserDeleteReservationEntity_TypeInfo);
    sub_1C32C20(&StringLiteral_2020/*"APP_VERSION"*/);
    sub_1C32C20(&StringLiteral_13449/*"TITLE_COPYRIGHT_BASE"*/);
    sub_1C32C20(&StringLiteral_2021/*"APP_VERSION_BASE"*/);
    sub_1C32C20(&StringLiteral_13448/*"TITLE_COPYRIGHT"*/);
    byte_4C39DF2 = 1;
  }
  v3 = sub_1C32E6C(TitleRootComponent___c__DisplayClass96_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_53;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 16), (int32_t)this, v5, v6);
  v7 = TitleRootComponent_TypeInfo;
  if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
    v7 = TitleRootComponent_TypeInfo;
  }
  if ( UnityEngine_PlayerPrefs__GetInt_71181884(v7->static_fields->SAVE_KEY_PLAYING_MOVIE, 0) )
  {
    v8 = TitleRootComponent_TypeInfo;
    if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
      v8 = TitleRootComponent_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v8->static_fields->SAVE_KEY_PLAYING_MOVIE, 0, 0);
  }
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
  ManagementManager__CompletionStartup(0);
  titleRootObjet = this->fields.titleRootObjet;
  if ( !titleRootObjet )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive(titleRootObjet, 1, 0);
  NoticeUpdate = TitleRootComponent__GetNoticeUpdate(v9, v10);
  UnityEngine_MonoBehaviour__StartCoroutine_71209212((UnityEngine_MonoBehaviour_o *)this, NoticeUpdate, 0);
  v12 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v12 = ManagerConfig_TypeInfo;
  }
  if ( v12->static_fields->UseMock )
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
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_2021/*"APP_VERSION_BASE"*/, 0);
    v16 = ManagerConfig_TypeInfo;
    v17 = v15;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v16 = ManagerConfig_TypeInfo;
    }
    titleRootObjet = (UnityEngine_GameObject_o *)System_String__Format(
                                                   v17,
                                                   (Il2CppObject *)v16->static_fields->AppVer,
                                                   0);
    if ( !appVerLb )
      goto LABEL_53;
    UILabel__set_text(appVerLb, (System_String_o *)titleRootObjet, 0);
    titleRootObjet = (UnityEngine_GameObject_o *)this->fields.appVerLb;
    if ( !titleRootObjet )
      goto LABEL_53;
    v31.fields.r = 1.0;
    v31.fields.g = 1.0;
    v31.fields.b = 1.0;
    v31.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)titleRootObjet, v31, 0);
    titleRootObjet = (UnityEngine_GameObject_o *)this->fields.appVerLb;
    if ( !titleRootObjet )
      goto LABEL_53;
    UILabel__set_effectStyle((UILabel_o *)titleRootObjet, 2, 0);
    titleRootObjet = (UnityEngine_GameObject_o *)this->fields.appVerLb;
    if ( !titleRootObjet )
      goto LABEL_53;
    v32.fields.a = 1.0;
    v32.fields.r = 0.0078431;
    v32.fields.g = 0.45098;
    v32.fields.b = 0.84706;
    UILabel__set_effectColor((UILabel_o *)titleRootObjet, v32, 0);
    cpRghtLb = this->fields.cpRghtLb;
    titleRootObjet = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13449/*"TITLE_COPYRIGHT_BASE"*/, 0);
    if ( !cpRghtLb )
      goto LABEL_53;
    UILabel__set_text(cpRghtLb, (System_String_o *)titleRootObjet, 0);
    titleRootObjet = (UnityEngine_GameObject_o *)this->fields.cpRghtLb;
    if ( !titleRootObjet )
      goto LABEL_53;
    v33.fields.r = 1.0;
    v33.fields.g = 1.0;
    v33.fields.b = 1.0;
    v33.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)titleRootObjet, v33, 0);
    titleRootObjet = (UnityEngine_GameObject_o *)this->fields.cpRghtLb;
    if ( !titleRootObjet )
      goto LABEL_53;
    UILabel__set_effectStyle((UILabel_o *)titleRootObjet, 2, 0);
    titleRootObjet = (UnityEngine_GameObject_o *)this->fields.cpRghtLb;
    if ( !titleRootObjet )
      goto LABEL_53;
    v34.fields.a = 1.0;
    v34.fields.r = 0.0078431;
    v34.fields.g = 0.45098;
    v34.fields.b = 0.84706;
    UILabel__set_effectColor((UILabel_o *)titleRootObjet, v34, 0);
  }
  else
  {
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_2020/*"APP_VERSION"*/, 0);
    v20 = ManagerConfig_TypeInfo;
    v21 = v19;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v20 = ManagerConfig_TypeInfo;
    }
    titleRootObjet = (UnityEngine_GameObject_o *)System_String__Format(
                                                   v21,
                                                   (Il2CppObject *)v20->static_fields->AppVer,
                                                   0);
    if ( !appVerLb )
      goto LABEL_53;
    UILabel__set_text(appVerLb, (System_String_o *)titleRootObjet, 0);
    v22 = this->fields.cpRghtLb;
    titleRootObjet = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13448/*"TITLE_COPYRIGHT"*/, 0);
    if ( !v22 )
      goto LABEL_53;
    UILabel__set_text(v22, (System_String_o *)titleRootObjet, 0);
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
    sub_1C32E7C(titleRootObjet);
  }
LABEL_43:
  titleRootObjet = this->fields.titleRootObjet;
  if ( !titleRootObjet )
    goto LABEL_53;
  UnityEngine_GameObject__GetComponent_object_(
    titleRootObjet,
    (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  if ( this->fields.storyProgress == 3 )
  {
    v24 = TitleRootComponent_TypeInfo;
    if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
      v24 = TitleRootComponent_TypeInfo;
    }
    PART2_CHAPTER6_EPILOGUE_BG_MOVIE_NAME = v24->static_fields->PART2_CHAPTER6_EPILOGUE_BG_MOVIE_NAME;
    if ( !CommonUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
    MoviePath = CommonUI__CreateMoviePath(PART2_CHAPTER6_EPILOGUE_BG_MOVIE_NAME, 0);
    *(_QWORD *)(v3 + 24) = MoviePath;
    sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 24), (int32_t)MoviePath, v27, v28);
    v29 = *(System_String_o **)(v3 + 24);
    v30 = (AssetLoader_LoadEndDataHandler_o *)sub_1C32E6C(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v30,
      (Il2CppObject *)v3,
      Method_TitleRootComponent___c__DisplayClass96_0__startTitle_b__0__,
      0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__downloadAssetStorage(v29, v30, 1, 0);
  }
  else
  {
    TitleRootComponent__ExecTitleFade(this, v23);
  }
}


void TitleRootComponent__startTitleFade(TitleRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0

  if ( (byte_4C39DF5 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_TitleRootComponent_endTitleFade__);
    byte_4C39DF5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_TitleRootComponent_endTitleFade__, 0);
  if ( !Instance )
    sub_1C32E7C(v5);
  CommonUI__maskFadein((CommonUI_o *)Instance, 1.5, v4, 0);
}


bool TitleRootComponent__startTutorialCancelConfirm(TitleRootComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4C39E11 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_3442/*"CLICK_CANCEL"*/);
    byte_4C39E11 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C32E7C(0);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_3442/*"CLICK_CANCEL"*/, 0);
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
  const MethodInfo *v3; // x3
  int32_t _1__state; // w8
  System_String_o *WebViewAddress; // x0
  struct UnityEngine_Networking_UnityWebRequest_o *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  UnityEngine_Networking_UnityWebRequest_o *www_5__2; // x0
  Il2CppObject *v11; // x0
  Il2CppObject **p__2__current; // x19
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  bool result; // w0
  __int64 v16; // x20
  TerminalPramsManager_c *v17; // x0
  CGThumbnailListItem_o *p_NoticeLastModified_k__BackingField; // x0
  UnityEngine_Networking_UnityWebRequest_o *v19; // x8
  System_Collections_Generic_Dictionary_object__object__o *v20; // x19
  System_String_o *error; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  Il2CppObject *Item; // x19
  TerminalPramsManager_c *v25; // x0
  CGThumbnailListItem_o *v26; // x0

  if ( (byte_4C39E55 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    sub_1C32C20(&StringLiteral_8253/*"LAST-MODIFIED"*/);
    sub_1C32C20(&StringLiteral_1106/*"/newsupdate"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C39E55 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v16 = StringLiteral_1/*""*/;
    if ( !byte_4C39EB4 )
    {
      sub_1C32C20(&TerminalPramsManager_TypeInfo);
      byte_4C39EB4 = 1;
    }
    v17 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v17 = TerminalPramsManager_TypeInfo;
    }
    p_NoticeLastModified_k__BackingField = (CGThumbnailListItem_o *)&v17->static_fields->_NoticeLastModified_k__BackingField;
    p_NoticeLastModified_k__BackingField->klass = (CGThumbnailListItem_c *)v16;
    sub_1C32BC4(p_NoticeLastModified_k__BackingField, v16, v2, v3);
    www_5__2 = this->fields._www_5__2;
    if ( !www_5__2 )
      goto LABEL_29;
    www_5__2 = (UnityEngine_Networking_UnityWebRequest_o *)UnityEngine_Networking_UnityWebRequest__GetResponseHeaders(
                                                             www_5__2,
                                                             0);
    v19 = this->fields._www_5__2;
    if ( !v19 )
      goto LABEL_29;
    v20 = (System_Collections_Generic_Dictionary_object__object__o *)www_5__2;
    error = UnityEngine_Networking_UnityWebRequest__get_error(v19, 0);
    www_5__2 = (UnityEngine_Networking_UnityWebRequest_o *)System_String__IsNullOrEmpty(error, 0);
    if ( ((unsigned __int8)www_5__2 & 1) != 0 )
    {
      if ( !v20 )
        goto LABEL_29;
      if ( System_Collections_Generic_Dictionary_object__object___get_Count(
             v20,
             (const MethodInfo_3458A98 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__) >= 1
        && System_Collections_Generic_Dictionary_object__object___ContainsKey(
             v20,
             (Il2CppObject *)StringLiteral_8253/*"LAST-MODIFIED"*/,
             (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
      {
        Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 v20,
                 (Il2CppObject *)StringLiteral_8253/*"LAST-MODIFIED"*/,
                 (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C39EB4 )
        {
          sub_1C32C20(&TerminalPramsManager_TypeInfo);
          byte_4C39EB4 = 1;
        }
        v25 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v25 = TerminalPramsManager_TypeInfo;
        }
        v26 = (CGThumbnailListItem_o *)&v25->static_fields->_NoticeLastModified_k__BackingField;
        v26->klass = (CGThumbnailListItem_c *)Item;
        sub_1C32BC4(v26, (int32_t)Item, v22, v23);
      }
    }
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    WebViewAddress = NetworkManager__getWebViewAddress((System_String_o *)StringLiteral_1106/*"/newsupdate"*/, 0);
    v7 = UnityEngine_Networking_UnityWebRequest__Get(WebViewAddress, 0);
    this->fields._www_5__2 = v7;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._www_5__2, (int32_t)v7, v8, v9);
    www_5__2 = this->fields._www_5__2;
    if ( www_5__2 )
    {
      v11 = (Il2CppObject *)UnityEngine_Networking_UnityWebRequest__SendWebRequest(www_5__2, 0);
      this->fields.__2__current = v11;
      p__2__current = &this->fields.__2__current;
      sub_1C32BC4((CGThumbnailListItem_o *)p__2__current, (int32_t)v11, v13, v14);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
LABEL_29:
    sub_1C32E7C(www_5__2);
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

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_TitleRootComponent__GetNoticeUpdate_d__98_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
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
  const MethodInfo *v10; // x3
  UnityEngine_WaitUntil_o *v11; // x21
  Il2CppObject **p__2__current; // x19
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  bool result; // w0
  Il2CppObject *Instance; // x0

  if ( (byte_4C39E56 & 1) == 0 )
  {
    sub_1C32C20(&System_Func_bool__TypeInfo);
    sub_1C32C20(&PurchaseBehaviour_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_TitleRootComponent___c__WaitPurchase_b__143_0__);
    sub_1C32C20(&TitleRootComponent___c_TypeInfo);
    sub_1C32C20(&UnityEngine_WaitUntil_TypeInfo);
    byte_4C39E56 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_1C32E7C(0);
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
    _9__143_0 = (System_Func_bool__o *)sub_1C32E6C(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(_9__143_0, v7, Method_TitleRootComponent___c__WaitPurchase_b__143_0__, 0);
    static_fields = TitleRootComponent___c_TypeInfo->static_fields;
    static_fields->__9__143_0 = _9__143_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__143_0, (int32_t)_9__143_0, v9, v10);
  }
  v11 = (UnityEngine_WaitUntil_o *)sub_1C32E6C(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v11, _9__143_0, 0);
  this->fields.__2__current = (Il2CppObject *)v11;
  p__2__current = &this->fields.__2__current;
  sub_1C32BC4((CGThumbnailListItem_o *)p__2__current, (int32_t)v11, v13, v14);
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

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_TitleRootComponent__WaitPurchase_d__143_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
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
  const MethodInfo *v3; // x3

  if ( (byte_4C39E47 & 1) == 0 )
  {
    sub_1C32C20(&TitleRootComponent___c_TypeInfo);
    byte_4C39E47 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(TitleRootComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  TitleRootComponent___c_TypeInfo->static_fields->__9 = (struct TitleRootComponent___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)TitleRootComponent___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
  AvalonSceneManager_c *v3; // x8
  CommonUI_o *v4; // x19
  TitleRootComponent___c_c *v5; // x0
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__158_1; // x20
  Il2CppObject *v8; // x21
  struct TitleRootComponent___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C39E4A & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AvalonSceneManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_TitleRootComponent___c__SelectContinueNumberTakeOver_b__158_1__);
    sub_1C32C20(&TitleRootComponent___c_TypeInfo);
    byte_4C39E4A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v3 = AvalonSceneManager_TypeInfo;
  v4 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v3 = AvalonSceneManager_TypeInfo;
  }
  v5 = TitleRootComponent___c_TypeInfo;
  DEFAULT_FADE_TIME = v3->static_fields->DEFAULT_FADE_TIME;
  if ( !TitleRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleRootComponent___c_TypeInfo);
    v5 = TitleRootComponent___c_TypeInfo;
  }
  _9__158_1 = v5->static_fields->__9__158_1;
  if ( !_9__158_1 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = TitleRootComponent___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__158_1 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(_9__158_1, v8, Method_TitleRootComponent___c__SelectContinueNumberTakeOver_b__158_1__, 0);
    static_fields = TitleRootComponent___c_TypeInfo->static_fields;
    static_fields->__9__158_1 = _9__158_1;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__158_1, (int32_t)_9__158_1, v10, v11);
  }
  if ( !v4 )
    sub_1C32E7C(v5);
  CommonUI__maskFadein(v4, DEFAULT_FADE_TIME, _9__158_1, 0);
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

  if ( (byte_4C39E49 & 1) == 0 )
  {
    sub_1C32C20(&PurchaseBehaviour_TypeInfo);
    byte_4C39E49 = 1;
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

  if ( (byte_4C39E48 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_4C39E48 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
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
  struct TitleRootComponent_o *_4__this; // x8
  System_Action_o *_9__3; // x22
  CommonUI_o *v8; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4C39E4C & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&ScriptManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_TitleRootComponent___c__DisplayClass137_0__CheckAndTransitionBattleTalk_b__2__);
    sub_1C32C20(&Method_TitleRootComponent___c__DisplayClass137_0__CheckAndTransitionBattleTalk_b__3__);
    sub_1C32C20(&StringLiteral_6979/*"GO_TERMINAL"*/);
    byte_4C39E4C = 1;
  }
  switch ( result )
  {
    case 0:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      _9__3 = this->fields.__9__3;
      v8 = (CommonUI_o *)Instance;
      if ( !_9__3 )
      {
        _9__3 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
        System_Action___ctor(
          _9__3,
          (Il2CppObject *)this,
          Method_TitleRootComponent___c__DisplayClass137_0__CheckAndTransitionBattleTalk_b__3__,
          0);
        this->fields.__9__3 = _9__3;
        sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.__9__3, (int32_t)_9__3, v9, v10);
      }
      if ( !v8 )
        goto LABEL_18;
      goto LABEL_15;
    case 1:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      _9__3 = this->fields.__9__2;
      v8 = (CommonUI_o *)Instance;
      if ( _9__3 )
      {
        if ( !Instance )
          goto LABEL_18;
      }
      else
      {
        _9__3 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
        System_Action___ctor(
          _9__3,
          (Il2CppObject *)this,
          Method_TitleRootComponent___c__DisplayClass137_0__CheckAndTransitionBattleTalk_b__2__,
          0);
        this->fields.__9__2 = _9__3;
        sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__3, v11, v12);
        if ( !v8 )
          goto LABEL_18;
      }
LABEL_15:
      CommonUI__CloseTripleButtonDlg(v8, _9__3, 0);
      return;
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_6979/*"GO_TERMINAL"*/, 0);
            return;
          }
        }
      }
LABEL_18:
      sub_1C32E7C(Instance);
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
  if ( (byte_4C39E4B & 1) == 0 )
  {
    this = (TitleRootComponent___c__DisplayClass137_0_o *)sub_1C32C20(&ScrTerminalMap_TypeInfo);
    byte_4C39E4B = 1;
  }
  if ( !x )
    sub_1C32E7C(this);
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
  struct TitleRootComponent_o *_4__this; // x8
  const MethodInfo *v5; // x1

  if ( (byte_4C39E4D & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C39E4D = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetLoadMode(Instance, 1, 0), (_4__this = this->fields.__4__this) == 0)
    || (Instance = (CommonUI_o *)_4__this->fields.talkResumeInfo) == 0
    || (BattleScriptRootComponent_TalkScriptInfo__SetJump((BattleScriptRootComponent_TalkScriptInfo_o *)Instance, 0, 0),
        (Instance = (CommonUI_o *)this->fields.__4__this) == 0) )
  {
    sub_1C32E7C(Instance);
  }
  TitleRootComponent__CheckBattleBefore((TitleRootComponent_o *)Instance, v5);
}


void TitleRootComponent___c__DisplayClass137_0___CheckAndTransitionBattleTalk_b__3(
        TitleRootComponent___c__DisplayClass137_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  struct TitleRootComponent_o *_4__this; // x8
  const MethodInfo *v5; // x1

  if ( (byte_4C39E4E & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C39E4E = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetLoadMode(Instance, 1, 0), (_4__this = this->fields.__4__this) == 0)
    || (Instance = (CommonUI_o *)_4__this->fields.talkResumeInfo) == 0
    || (BattleScriptRootComponent_TalkScriptInfo__SetJump((BattleScriptRootComponent_TalkScriptInfo_o *)Instance, 1, 0),
        (Instance = (CommonUI_o *)this->fields.__4__this) == 0) )
  {
    sub_1C32E7C(Instance);
  }
  TitleRootComponent__CheckBattleBefore((TitleRootComponent_o *)Instance, v5);
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

  if ( (byte_4C39E4F & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_TitleRootComponent___c__DisplayClass144_0__OnConfirmBattleResume_g__CancelBattleAndGoTerminal_0__);
    sub_1C32C20(&StringLiteral_2697/*"BATTLERESUME_NOTIFICATION_MESSAGE_INTERRUPTION_BATTLE_DATA_CORRUPTED"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C39E4F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_2697/*"BATTLERESUME_NOTIFICATION_MESSAGE_INTERRUPTION_BATTLE_DATA_CORRUPTED"*/, 0);
  v5 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(
    v5,
    (Il2CppObject *)this,
    Method_TitleRootComponent___c__DisplayClass144_0__OnConfirmBattleResume_g__CancelBattleAndGoTerminal_0__,
    0);
  if ( !Instance )
    sub_1C32E7C(v6);
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
  const MethodInfo *v8; // x2
  unsigned int *v9; // x22
  struct BattleData_SaveData_o *saveData; // x8
  struct BattleData_SaveData_o *v11; // x8
  struct BattleWaveInfoData_SaveData_array *waveInfoSaveDataArray; // x8
  il2cpp_array_size_t max_length; // x19
  unsigned __int64 v14; // x21
  __int64 v15; // x25
  __int64 v16; // x26
  BattleWaveInfoData_o *v17; // x19
  struct BattleData_SaveData_o *v18; // x8
  struct BattleWaveInfoData_SaveData_array *v19; // x8
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int v22; // w19
  struct TitleRootComponent_o *v23; // x21
  int32_t questId; // w19
  const MethodInfo *v25; // x3
  TerminalPramsManager_c *v26; // x0
  signed int CurrentWaveNum_k__BackingField; // w9
  TerminalPramsManager_c *v28; // x0
  BattleResultRequest_SuperBossResult_array *v29; // x27
  System_Collections_Generic_List_object__o *firstNpPlayList; // x28
  PlayerServantNoblePhantasmUsageData_o *v31; // x29
  System_Collections_Generic_Dictionary_int__int__o *usedEquipSkillDict; // x21
  System_Int32_array *calledEnemyUniqueIdArray; // x24
  System_Int32_array *v34; // x25
  long double inited; // q0
  _QWORD *v36; // x26
  __int64 v37; // x8
  __int64 v38; // x0
  __int64 v39; // x0
  System_Int32_array *dataLostUniqueIdArray; // x19
  System_Collections_Generic_Dictionary_int__int__o *battleMissionValueDict; // x26
  __int64 v42; // x0
  System_Int64_array *v43; // [xsp+A0h] [xbp-B0h]
  System_Int32_array *skillShiftUniqueIdArray; // [xsp+A8h] [xbp-A8h]
  System_Collections_Generic_Dictionary_int__int__o *SavedServantCommonFlagDict; // [xsp+B0h] [xbp-A0h]
  System_Collections_Generic_Dictionary_string__object__o *recordJson; // [xsp+B8h] [xbp-98h]
  BattleResultRequest_RaidResult_array *raidResult; // [xsp+C0h] [xbp-90h]
  int64_t ResumeBattleId; // [xsp+C8h] [xbp-88h]
  int32_t waveNum; // [xsp+D0h] [xbp-80h]
  int32_t battleResult; // [xsp+D4h] [xbp-7Ch]
  System_Int32_array_array *v51; // [xsp+D8h] [xbp-78h]
  System_Int32_array *usedTurnArray; // [xsp+E0h] [xbp-70h]
  BattleResultRequest_o *Request_object; // [xsp+E8h] [xbp-68h]

  if ( (byte_4C39E50 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_Empty_int___);
    sub_1C32C20(&BattleData_TypeInfo);
    sub_1C32C20(&BattleWaveInfoData___TypeInfo);
    sub_1C32C20(&BattleWaveInfoData_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C32C20(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C32C20(&int_____TypeInfo);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&long___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Dictionary_string__object____ctor__);
    sub_1C32C20(&System_Collections_Generic_List_Dictionary_string__object___TypeInfo);
    sub_1C32C20(&Method_NetworkManager_getRequest_BattleResultRequest___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&PlayerServantNoblePhantasmUsageData_TypeInfo);
    sub_1C32C20(&BattleResultRequest_RaidResult___TypeInfo);
    sub_1C32C20(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C32C20(&BattleResultRequest_SuperBossResult___TypeInfo);
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    sub_1C32C20(&Method_TitleRootComponent_OnCompleteResumeCancel__);
    sub_1C32C20(&StringLiteral_22716/*"playWaveStartMovie"*/);
    sub_1C32C20(&StringLiteral_22975/*"rebootAlreadyPlayMovie"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C39E50 = 1;
  }
  _4__this = (Il2CppObject *)this->fields.__4__this;
  v4 = (NetworkManager_ResultCallbackFunc_o *)sub_1C32E6C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v4, _4__this, Method_TitleRootComponent_OnCompleteResumeCancel__, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = (BattleResultRequest_o *)NetworkManager__getRequest_object_(
                                              v4,
                                              (const MethodInfo_3168488 *)Method_NetworkManager_getRequest_BattleResultRequest___);
  v5 = sub_1C32CC8(int___TypeInfo, 0);
  v6 = sub_1C32CC8(int_____TypeInfo, 0);
  IsInterruptibleQuest = sub_1C32CC8(BattleWaveInfoData___TypeInfo, 0);
  if ( !this->fields.__4__this )
    goto LABEL_58;
  v9 = (unsigned int *)IsInterruptibleQuest;
  IsInterruptibleQuest = TitleRootComponent__IsInterruptibleQuest(
                           (TitleRootComponent_o *)IsInterruptibleQuest,
                           this->fields.questId,
                           v8);
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
        v11 = this->fields.saveData;
        if ( !v11 )
          goto LABEL_58;
        waveInfoSaveDataArray = v11->fields.waveInfoSaveDataArray;
        if ( !waveInfoSaveDataArray )
          goto LABEL_58;
        max_length = waveInfoSaveDataArray->max_length;
        if ( (_DWORD)max_length )
        {
          IsInterruptibleQuest = sub_1C32CC8(BattleWaveInfoData___TypeInfo, (unsigned int)max_length);
          v9 = (unsigned int *)IsInterruptibleQuest;
          if ( (int)max_length >= 1 )
          {
            v14 = 0;
            v15 = (unsigned int)max_length;
            v16 = 8;
            do
            {
              v17 = (BattleWaveInfoData_o *)sub_1C32E6C(BattleWaveInfoData_TypeInfo);
              BattleWaveInfoData___ctor(v17, 0);
              v18 = this->fields.saveData;
              if ( !v18 )
                goto LABEL_58;
              v19 = v18->fields.waveInfoSaveDataArray;
              if ( !v19 )
                goto LABEL_58;
              if ( v14 >= LODWORD(v19->max_length) )
                goto LABEL_59;
              if ( !v17 )
                goto LABEL_58;
              BattleWaveInfoData__SetDataFromSaveData(
                v17,
                *(BattleWaveInfoData_SaveData_o **)((char *)&v19->obj.klass + v16 * 4),
                0);
              if ( !v9 )
                goto LABEL_58;
              IsInterruptibleQuest = sub_1C32D5C(v17, *(_QWORD *)(*(_QWORD *)v9 + 64LL));
              if ( !IsInterruptibleQuest )
              {
                v42 = sub_1C32EA0(0);
                sub_1C32D48(v42, 0);
              }
              if ( v14 >= v9[6] )
LABEL_59:
                sub_1C32E84(IsInterruptibleQuest);
              *(_QWORD *)&v9[v16] = v17;
              sub_1C32BC4((CGThumbnailListItem_o *)&v9[v16], (int32_t)v17, v20, v21);
              ++v14;
              v16 += 2;
            }
            while ( v15 != v14 );
            v22 = 4;
            goto LABEL_30;
          }
          goto LABEL_29;
        }
      }
    }
    v23 = this->fields.__4__this;
    questId = this->fields.questId;
    if ( !BattleData_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
    IsInterruptibleQuest = BattleData__getSavedQuestPhase(0);
    if ( v23 )
    {
      IsInterruptibleQuest = (__int64)TitleRootComponent__GetUserInterruptionBattleWaveInfoDataArray(
                                        (TitleRootComponent_o *)IsInterruptibleQuest,
                                        questId,
                                        IsInterruptibleQuest,
                                        v25);
      v9 = (unsigned int *)IsInterruptibleQuest;
LABEL_29:
      v22 = 4;
      if ( !v9 )
        goto LABEL_58;
      goto LABEL_30;
    }
LABEL_58:
    sub_1C32E7C(IsInterruptibleQuest);
  }
  v22 = 3;
  if ( !v9 )
    goto LABEL_58;
LABEL_30:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C349F7 )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C349F7 = 1;
  }
  v26 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v26 = TerminalPramsManager_TypeInfo;
  }
  CurrentWaveNum_k__BackingField = v9[6];
  if ( v26->static_fields->_CurrentWaveNum_k__BackingField >= CurrentWaveNum_k__BackingField )
  {
    if ( !v26->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v26);
    if ( !byte_4C349F7 )
    {
      sub_1C32C20(&TerminalPramsManager_TypeInfo);
      byte_4C349F7 = 1;
    }
    v28 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v28 = TerminalPramsManager_TypeInfo;
    }
    CurrentWaveNum_k__BackingField = v28->static_fields->_CurrentWaveNum_k__BackingField;
  }
  waveNum = CurrentWaveNum_k__BackingField;
  battleResult = v22;
  v51 = (System_Int32_array_array *)v6;
  usedTurnArray = (System_Int32_array *)v5;
  if ( !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  ResumeBattleId = BattleData__getResumeBattleId(0);
  raidResult = (BattleResultRequest_RaidResult_array *)sub_1C32CC8(BattleResultRequest_RaidResult___TypeInfo, 0);
  v29 = (BattleResultRequest_SuperBossResult_array *)sub_1C32CC8(BattleResultRequest_SuperBossResult___TypeInfo, 0);
  recordJson = (System_Collections_Generic_Dictionary_string__object__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    (System_Collections_Generic_Dictionary_object__object__o *)recordJson,
    (const MethodInfo_3458418 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  firstNpPlayList = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_Dictionary_string__object___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    firstNpPlayList,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_Dictionary_string__object____ctor__);
  v31 = (PlayerServantNoblePhantasmUsageData_o *)sub_1C32E6C(PlayerServantNoblePhantasmUsageData_TypeInfo);
  PlayerServantNoblePhantasmUsageData___ctor(v31, 0);
  usedEquipSkillDict = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    usedEquipSkillDict,
    (const MethodInfo_33E68A0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  SavedServantCommonFlagDict = BattleData__GetSavedServantCommonFlagDict(0);
  skillShiftUniqueIdArray = (System_Int32_array *)sub_1C32CC8(int___TypeInfo, 0);
  v43 = (System_Int64_array *)sub_1C32CC8(long___TypeInfo, 0);
  calledEnemyUniqueIdArray = (System_Int32_array *)sub_1C32CC8(int___TypeInfo, 0);
  v34 = (System_Int32_array *)sub_1C32CC8(int___TypeInfo, 0);
  v36 = Method_System_Array_Empty_int___;
  v37 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v37 )
  {
    sub_1C83390(Method_System_Array_Empty_int___);
    v37 = v36[7];
  }
  v38 = *(_QWORD *)(v37 + 16);
  if ( (*(_BYTE *)(v38 + 309) & 1) == 0 )
    v38 = sub_1C83334(inited);
  if ( !*(_DWORD *)(v38 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v38);
  v39 = *(_QWORD *)(v36[7] + 16LL);
  if ( (*(_BYTE *)(v39 + 309) & 1) == 0 )
    v39 = sub_1C83334(inited);
  dataLostUniqueIdArray = **(System_Int32_array ***)(v39 + 184);
  battleMissionValueDict = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    battleMissionValueDict,
    (const MethodInfo_33E68A0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
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
    v51,
    usedTurnArray,
    raidResult,
    v29,
    0,
    usedTurnArray,
    1,
    recordJson,
    (System_Collections_Generic_List_Dictionary_string__object___o *)firstNpPlayList,
    v31,
    usedEquipSkillDict,
    SavedServantCommonFlagDict,
    skillShiftUniqueIdArray,
    v43,
    calledEnemyUniqueIdArray,
    v34,
    dataLostUniqueIdArray,
    (BattleWaveInfoData_array *)v9,
    waveNum,
    battleMissionValueDict,
    0);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  EncryptedPlayerPrefs__DeleteKey((System_String_o *)StringLiteral_22975/*"rebootAlreadyPlayMovie"*/, 0);
  EncryptedPlayerPrefs__DeleteKey((System_String_o *)StringLiteral_22716/*"playWaveStartMovie"*/, 0);
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
  if ( (byte_4C39E51 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    sub_1C32C20(&StringLiteral_3449/*"CLICK_DECIDE"*/);
    this = (TitleRootComponent___c__DisplayClass153_0_o *)sub_1C32C20(&StringLiteral_3442/*"CLICK_CANCEL"*/);
    byte_4C39E51 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_20;
  if ( !v2->fields.isDecide )
  {
    this = (TitleRootComponent___c__DisplayClass153_0_o *)_4__this->fields.myFSM;
    if ( this )
    {
      v7 = &StringLiteral_3442/*"CLICK_CANCEL"*/;
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
      sub_1C32E7C(this);
    }
  }
LABEL_12:
  this = (TitleRootComponent___c__DisplayClass153_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !this )
    goto LABEL_20;
  ManagementManager__titleCacheClear((ManagementManager_o *)this, 0);
  this = (TitleRootComponent___c__DisplayClass153_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !this )
    goto LABEL_20;
  ManagementManager__reboot((ManagementManager_o *)this, 0, 1, 0);
  v6 = v2->fields.__4__this;
  if ( !v6 )
    goto LABEL_20;
  this = (TitleRootComponent___c__DisplayClass153_0_o *)v6->fields.myFSM;
  if ( !this )
    goto LABEL_20;
  v7 = &StringLiteral_3449/*"CLICK_DECIDE"*/;
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
  TitleRootComponent_c *v6; // x0
  struct TitleRootComponent_o *v7; // x8
  __int64 *v8; // x8
  struct TitleRootComponent_o *_4__this; // x8

  if ( (byte_4C39E52 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&TitleRootComponent_TypeInfo);
    sub_1C32C20(&StringLiteral_10394/*"PLAY_OPENING_MOVIE"*/);
    sub_1C32C20(&StringLiteral_10389/*"PLAY_NORMAL_MODE"*/);
    byte_4C39E52 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
        v8 = &StringLiteral_10394/*"PLAY_OPENING_MOVIE"*/;
        goto LABEL_14;
      }
    }
LABEL_15:
    sub_1C32E7C(Instance);
  }
  v6 = TitleRootComponent_TypeInfo;
  if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
    v6 = TitleRootComponent_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v6->static_fields->SAVE_KEY_PLAYING_MOVIE, 0, 0);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (CommonUI_o *)CommonUI__maskFadeout(Instance, 1, 0.0, 0, 0);
  v7 = this->fields.__4__this;
  if ( !v7 )
    goto LABEL_15;
  Instance = (CommonUI_o *)v7->fields.myFSM;
  if ( !Instance )
    goto LABEL_15;
  v8 = &StringLiteral_10389/*"PLAY_NORMAL_MODE"*/;
LABEL_14:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v8, 0);
}


void TitleRootComponent___c__DisplayClass81_0___checkPlayMode_b__1(
        TitleRootComponent___c__DisplayClass81_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  struct TitleRootComponent_o *v6; // x8
  __int64 *v7; // x8
  TitleRootComponent_c *v8; // x0
  struct TitleRootComponent_o *_4__this; // x8
  struct OpeningMovieEntity_o *openingMovieEntity; // x8
  struct TitleRootComponent_o *v11; // x8

  if ( (byte_4C39E53 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&TitleRootComponent_TypeInfo);
    sub_1C32C20(&StringLiteral_10394/*"PLAY_OPENING_MOVIE"*/);
    sub_1C32C20(&StringLiteral_10389/*"PLAY_NORMAL_MODE"*/);
    byte_4C39E53 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  CommonUI__CloseConfirmDialog(Instance, 0);
  if ( !isDecide )
  {
    v8 = TitleRootComponent_TypeInfo;
    if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
      v8 = TitleRootComponent_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v8->static_fields->SAVE_KEY_PLAYING_MOVIE, 0, 0);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
            v11 = this->fields.__4__this;
            if ( v11 )
            {
              Instance = (CommonUI_o *)v11->fields.myFSM;
              if ( Instance )
              {
                v7 = &StringLiteral_10389/*"PLAY_NORMAL_MODE"*/;
                goto LABEL_17;
              }
            }
          }
        }
      }
    }
LABEL_18:
    sub_1C32E7C(Instance);
  }
  v6 = this->fields.__4__this;
  if ( !v6 )
    goto LABEL_18;
  Instance = (CommonUI_o *)v6->fields.myFSM;
  if ( !Instance )
    goto LABEL_18;
  v7 = &StringLiteral_10394/*"PLAY_OPENING_MOVIE"*/;
LABEL_17:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v7, 0);
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
  const MethodInfo *v4; // x1

  player = this->fields.player;
  if ( !player || (CRIMoviePlayer__Dispose(player, 0), (player = (CRIMoviePlayer_o *)this->fields.__4__this) == 0) )
    sub_1C32E7C(player);
  TitleRootComponent__EndPlayOpeningMovie((TitleRootComponent_o *)player, v4);
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
  const MethodInfo *v11; // x3
  struct TitleRootComponent_o *v12; // x8
  CRIMoviePlayer_o *bgMoviePlayer; // x21
  System_String_o *moviewFilePath; // x22
  System_String_o *Path; // x20
  struct TitleRootComponent_o *v16; // x8
  struct TitleRootComponent_o *v17; // x8
  UnityEngine_MonoBehaviour_o *v18; // x19

  if ( (byte_4C39E54 & 1) == 0 )
  {
    sub_1C32C20(&BgmManager_TypeInfo);
    sub_1C32C20(&CommonUI_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_1C32C20(&TitleRootComponent_TypeInfo);
    sub_1C32C20(&StringLiteral_6297/*"ExecTitleFade"*/);
    byte_4C39E54 = 1;
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
                                                   (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  if ( !CriMoviePlayerObject )
    goto LABEL_26;
  UIPanel__set_depth((UIPanel_o *)CriMoviePlayerObject, 1, 0);
  v9 = this->fields.__4__this;
  CriMoviePlayerObject = (TitleRootComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   v8,
                                                   (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
  if ( !v9 )
    goto LABEL_26;
  v9->fields.bgMoviePlayer = (struct CRIMoviePlayer_o *)CriMoviePlayerObject;
  sub_1C32BC4((CGThumbnailListItem_o *)&v9->fields.bgMoviePlayer, (int32_t)CriMoviePlayerObject, v10, v11);
  v12 = this->fields.__4__this;
  if ( !v12 || !data )
    goto LABEL_26;
  bgMoviePlayer = v12->fields.bgMoviePlayer;
  moviewFilePath = this->fields.moviewFilePath;
  Path = AssetData__get_Path(data, 0);
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  if ( !byte_4C32815 )
  {
    sub_1C32C20(&BgmManager_TypeInfo);
    byte_4C32815 = 1;
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
  v16 = this->fields.__4__this;
  if ( !v16 )
    goto LABEL_26;
  CriMoviePlayerObject = (TitleRootComponent_o *)v16->fields.bgMoviePlayer;
  if ( !CriMoviePlayerObject )
    goto LABEL_26;
  CriManaMovieMaterial__set_loop((CriManaMovieMaterial_o *)CriMoviePlayerObject, 1, 0);
  v17 = this->fields.__4__this;
  if ( !v17 )
    goto LABEL_26;
  CriMoviePlayerObject = (TitleRootComponent_o *)v17->fields.bgMoviePlayer;
  if ( !CriMoviePlayerObject )
    goto LABEL_26;
  CRIMoviePlayer__MoviePlay((CRIMoviePlayer_o *)CriMoviePlayerObject, 0, 0, 0, 0, 0);
  CriMoviePlayerObject = (TitleRootComponent_o *)TitleRootComponent_TypeInfo;
  v18 = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
  if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
  if ( !v18 )
LABEL_26:
    sub_1C32E7C(CriMoviePlayerObject);
  UnityEngine_MonoBehaviour__Invoke(
    v18,
    (System_String_o *)StringLiteral_6297/*"ExecTitleFade"*/,
    TitleRootComponent_TypeInfo->static_fields->PART2_CHAPTER6_EPILOGUE_BG_MOVIE_WAITTIME,
    0);
}