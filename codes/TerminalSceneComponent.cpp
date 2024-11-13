void __fastcall TerminalSceneComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  TerminalSceneComponent_c *v18; // x8
  int64_t v19; // x1
  struct TerminalSceneComponent_StaticFields *static_fields; // x0
  int64_t v21; // x1
  struct TerminalSceneComponent_StaticFields *v22; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x1
  struct TerminalSceneComponent_StaticFields *v30; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int64_t v37; // x1
  struct TerminalSceneComponent_StaticFields *v38; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int64_t v45; // x1
  struct TerminalSceneComponent_StaticFields *v46; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7

  if ( (byte_4B182D0 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_10240/*"OverwriteCommonBG2"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_10239/*"OverwriteCommonBG1"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_21540/*"masterMissionResetKey"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_13752/*"Terminal/EarthCore/{0:D2}"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_10189/*"OrdealCallChapterPlayState"*/, v16, v17);
    byte_4B182D0 = 1;
  }
  v18 = TerminalSceneComponent_TypeInfo;
  TerminalSceneComponent_TypeInfo->static_fields->DEFAULT_AMBIENT_LIGHT_COLOR = (struct UnityEngine_Color_o)xmmword_BD3730;
  v19 = StringLiteral_21540/*"masterMissionResetKey"*/;
  static_fields = v18->static_fields;
  static_fields->MASTER_MISSION_RESET_KEY = (struct System_String_o *)StringLiteral_21540/*"masterMissionResetKey"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->MASTER_MISSION_RESET_KEY, v19, v2, v3, v4, v5, v6, v7);
  v21 = StringLiteral_13752/*"Terminal/EarthCore/{0:D2}"*/;
  v22 = TerminalSceneComponent_TypeInfo->static_fields;
  v22->EARTH_ASSET_NAME = (struct System_String_o *)StringLiteral_13752/*"Terminal/EarthCore/{0:D2}"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v22->EARTH_ASSET_NAME, v21, v23, v24, v25, v26, v27, v28);
  v29 = StringLiteral_10189/*"OrdealCallChapterPlayState"*/;
  v30 = TerminalSceneComponent_TypeInfo->static_fields;
  v30->ORDEAL_CALL_CHAPTER_PLAY_STATE_KEY = (struct System_String_o *)StringLiteral_10189/*"OrdealCallChapterPlayState"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v30->ORDEAL_CALL_CHAPTER_PLAY_STATE_KEY, v29, v31, v32, v33, v34, v35, v36);
  v37 = StringLiteral_10239/*"OverwriteCommonBG1"*/;
  v38 = TerminalSceneComponent_TypeInfo->static_fields;
  v38->OVERWRITE_COMMON_BG_TYPE1_KEY = (struct System_String_o *)StringLiteral_10239/*"OverwriteCommonBG1"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v38->OVERWRITE_COMMON_BG_TYPE1_KEY, v37, v39, v40, v41, v42, v43, v44);
  v45 = StringLiteral_10240/*"OverwriteCommonBG2"*/;
  v46 = TerminalSceneComponent_TypeInfo->static_fields;
  v46->OVERWRITE_COMMON_BG_TYPE2_KEY = (struct System_String_o *)StringLiteral_10240/*"OverwriteCommonBG2"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v46->OVERWRITE_COMMON_BG_TYPE2_KEY, v45, v47, v48, v49, v50, v51, v52);
  *(_WORD *)&TerminalSceneComponent_TypeInfo->static_fields->isTitleToTerminalTransition = 0;
}


void __fastcall TerminalSceneComponent___ctor(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  this->fields.TUTORIAL_SPOT_ARROW_POS = (struct UnityEngine_Vector2_o)3263954944LL;
  this->fields.TUTORIAL_SPOT_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_BD3BC0;
  *(_OWORD *)&this->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.x = xmmword_BD3940;
  this->fields.TUTORIAL_QUEST_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_BD2AA0;
  *(_OWORD *)&this->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.x = xmmword_BD3950;
  this->fields.TUTORIAL_MENU_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_BD3C70;
  *(_OWORD *)&this->fields.TUTORIAL_MENU_MESSAGE_POS.fields.x = xmmword_BD24A0;
  this->fields.TUTORIAL_GACHA_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_BD2BF0;
  this->fields.TUTORIAL_MENU_ARROW_POS2 = (struct UnityEngine_Vector2_o)0xC366000043DB0000LL;
  this->fields.TUTORIAL_COMBINE_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_BD2EE0;
  this->fields.TUTORIAL_COMBINE_ARROW_POS = (struct UnityEngine_Vector2_o)0xC3200000C3058000LL;
  this->fields.isTopLoginBusy = 1;
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall TerminalSceneComponent__Awake(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x2
  TerminalSceneComponent_c *v11; // x0
  __int64 v12; // x1
  UnityEngine_GameObject_o *UiFlag; // x0
  __int64 v14; // x1
  bool v15; // w1

  if ( (byte_4B18286 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantCommentManager_TypeInfo, method, v2);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v9, v10);
    byte_4B18286 = 1;
  }
  v11 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
    v11 = TerminalSceneComponent_TypeInfo;
  }
  v11->static_fields->mInstance = this;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)TerminalSceneComponent_TypeInfo->static_fields,
    (int64_t)this,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v12);
  UiFlag = (UnityEngine_GameObject_o *)ServantCommentManager__GetUiFlag(0LL);
  if ( !this->fields.mBgText )
    goto LABEL_16;
  if ( !(_DWORD)UiFlag )
  {
    UnityEngine_GameObject__SetActive(this->fields.mBgText, 1, 0LL);
    UiFlag = this->fields.mBgGradLeft;
    if ( UiFlag )
    {
      UnityEngine_GameObject__SetActive(UiFlag, 1, 0LL);
      UiFlag = this->fields.mBgGradRight;
      if ( UiFlag )
      {
        v15 = 1;
        goto LABEL_15;
      }
    }
LABEL_16:
    sub_1BCAA3C(UiFlag, v14);
  }
  UnityEngine_GameObject__SetActive(this->fields.mBgText, 0, 0LL);
  UiFlag = this->fields.mBgGradLeft;
  if ( !UiFlag )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(UiFlag, 0, 0LL);
  UiFlag = this->fields.mBgGradRight;
  if ( !UiFlag )
    goto LABEL_16;
  v15 = 0;
LABEL_15:
  UnityEngine_GameObject__SetActive(UiFlag, v15, 0LL);
}


void __fastcall TerminalSceneComponent__CallAfterTopHome(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( this->fields.isTopLoginBusy )
  {
    this->fields.afterTopLogin = callback;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.afterTopLogin,
      (int64_t)callback,
      (int64_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
  else
  {
    ActionExtensions__Call(callback, 0LL);
  }
}


void __fastcall TerminalSceneComponent__CallQuestClearReset(
        TerminalSceneComponent_o *this,
        QuestBoardListViewItem_o *item,
        const MethodInfo *method)
{
  ScrTerminalListTop_o *mTerminalList; // x0

  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList )
    sub_1BCAA3C(0LL, item);
  ScrTerminalListTop__OpenQuestResetDialog(mTerminalList, item, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TerminalSceneComponent__CallQuestInfoAutoOpen(
        TerminalSceneComponent_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  QuestInformationComponent_o *mQuestInformation; // x0

  mQuestInformation = this->fields.mQuestInformation;
  if ( !mQuestInformation )
    sub_1BCAA3C(0LL, *(_QWORD *)&questId);
  return QuestInformationComponent__AutoOpen(mQuestInformation, questId, 1, 0LL, 0LL, 0LL);
}


void __fastcall TerminalSceneComponent__CallQuestInformation(
        TerminalSceneComponent_o *this,
        QuestBoardListViewItem_o *item,
        const MethodInfo *method)
{
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x8
  TerminalSceneComponent_o *v5; // x19
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x8

  if ( !item )
    goto LABEL_11;
  quest_info_k__BackingField = item->fields._quest_info_k__BackingField;
  if ( !quest_info_k__BackingField )
    goto LABEL_11;
  v5 = this;
  this = (TerminalSceneComponent_o *)this->fields.mQuestInformation;
  if ( !this )
    goto LABEL_11;
  if ( !QuestInformationComponent__Setup(
          (QuestInformationComponent_o *)this,
          quest_info_k__BackingField->fields.questId,
          1,
          0LL,
          0LL,
          0LL) )
    return;
  this = (TerminalSceneComponent_o *)v5->fields.mQuestInformation;
  if ( !this
    || (QuestInformationComponent__Open((QuestInformationComponent_o *)this, 0LL),
        (this = (TerminalSceneComponent_o *)v5->fields.mTerminalList) == 0LL)
    || (ScrTerminalListTop__InfoSettedUp((ScrTerminalListTop_o *)this, item, 0LL),
        (mTerminalList = v5->fields.mTerminalList) == 0LL)
    || (mQuestBoardListViewManager = mTerminalList->fields.mQuestBoardListViewManager) == 0LL )
  {
LABEL_11:
    sub_1BCAA3C(this, item);
  }
  mQuestBoardListViewManager->fields._IsShowingInfo_k__BackingField = 1;
}


void __fastcall TerminalSceneComponent__CallQuestInformationClose(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x8

  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList
    || (mQuestBoardListViewManager = mTerminalList->fields.mQuestBoardListViewManager) == 0LL
    || (mQuestBoardListViewManager->fields._IsShowingInfo_k__BackingField = 0,
        (this = (TerminalSceneComponent_o *)this->fields.mQuestInformation) == 0LL) )
  {
    sub_1BCAA3C(this, method);
  }
  QuestInformationComponent__Close((QuestInformationComponent_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalSceneComponent__CallQuestInformationCloseAtAll(
        TerminalSceneComponent_o *this,
        bool isPlaySe,
        const MethodInfo *method)
{
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x8

  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList
    || (mQuestBoardListViewManager = mTerminalList->fields.mQuestBoardListViewManager) == 0LL
    || (mQuestBoardListViewManager->fields._IsShowingInfo_k__BackingField = 0,
        (this = (TerminalSceneComponent_o *)this->fields.mQuestInformation) == 0LL) )
  {
    sub_1BCAA3C(this, isPlaySe);
  }
  QuestInformationComponent__CloseWindow((QuestInformationComponent_o *)this, isPlaySe, 0LL);
}


void __fastcall TerminalSceneComponent__CheckAfterQuestClearDialog(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  EventTutorialMaster__CheckTutorial(0, 93, callback, 0, 0, 0, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalSceneComponent__CheckConflictTutorialOnBlankEarth(
        TerminalSceneComponent_o *this,
        int32_t openType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  EventTutorialMaster_EventTutorialArgs_o *v9; // x20
  System_Collections_ICollection_o *IsNullOrEmpty; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x21
  EventTutorialEntity_array *AvailableTutorialArray; // x19
  int max_length; // w8
  System_Collections_ICollection_o *v17; // x20
  unsigned int v18; // w21
  EventTutorialEntity_o *v19; // x24
  struct EventTutorialEntity_TextTuto_array *textJson; // x8
  EventTutorialEntity_TextTuto_o *v21; // x8
  struct EventTutorialEntity_TextTuto_array *v22; // x8
  EventTutorialEntity_TextTuto_o *v23; // x8
  System_Collections_ICollection_o *v24; // x8
  int klass; // w25
  struct EventTutorialEntity_TextTuto_array *v26; // x8
  EventTutorialEntity_TextTuto_o *v27; // x8

  if ( (byte_4B182CF & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&openType, method);
    sub_1BCA7E0(&EventTutorialMaster_EventTutorialArgs_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonTemplate_QuestTree__get_Instance__, v7, v8);
    byte_4B182CF = 1;
  }
  v9 = (EventTutorialMaster_EventTutorialArgs_o *)sub_1BCAA2C(
                                                    EventTutorialMaster_EventTutorialArgs_TypeInfo,
                                                    *(_QWORD *)&openType,
                                                    method,
                                                    v3);
  EventTutorialMaster_EventTutorialArgs___ctor(v9, 0LL);
  if ( !v9
    || (v9->fields.eventId = 0,
        v9->fields.openKind = openType,
        v14 = sub_1BCAA2C(EventTutorialMaster_EventTutorialArgs_TypeInfo, v11, v12, v13),
        EventTutorialMaster_EventTutorialArgs___ctor((EventTutorialMaster_EventTutorialArgs_o *)v14, 0LL),
        !v14)
    || (*(_QWORD *)(v14 + 16) = 0x5300000000LL,
        AvailableTutorialArray = EventTutorialMaster__GetAvailableTutorialArray(v9, 0LL),
        IsNullOrEmpty = (System_Collections_ICollection_o *)EventTutorialMaster__GetAvailableTutorialArray(
                                                              (EventTutorialMaster_EventTutorialArgs_o *)v14,
                                                              0LL),
        !AvailableTutorialArray) )
  {
LABEL_31:
    sub_1BCAA3C(IsNullOrEmpty, v11);
  }
  max_length = AvailableTutorialArray->max_length;
  if ( max_length >= 1 )
  {
    v17 = IsNullOrEmpty;
    v18 = 0;
    while ( v18 < max_length )
    {
      v19 = AvailableTutorialArray->m_Items[v18];
      if ( !v19 )
        goto LABEL_31;
      IsNullOrEmpty = (System_Collections_ICollection_o *)BasicHelper__IsNullOrEmpty(
                                                            (System_Collections_ICollection_o *)v19->fields.textJson,
                                                            0LL);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        textJson = v19->fields.textJson;
        if ( !textJson )
          goto LABEL_31;
        if ( !textJson->max_length )
          break;
        v21 = textJson->m_Items[0];
        if ( !v21 )
          goto LABEL_31;
        if ( v21->fields.isQuestRelease )
        {
          IsNullOrEmpty = (System_Collections_ICollection_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
          if ( IsNullOrEmpty )
          {
            IsNullOrEmpty = (System_Collections_ICollection_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
            v22 = v19->fields.textJson;
            if ( !v22 )
              goto LABEL_31;
            if ( !v22->max_length )
              break;
            v23 = v22->m_Items[0];
            if ( !v23 || !IsNullOrEmpty )
              goto LABEL_31;
            IsNullOrEmpty = (System_Collections_ICollection_o *)QuestTree__GetQuestInfo(
                                                                  (QuestTree_o *)IsNullOrEmpty,
                                                                  v23->fields.questId,
                                                                  0LL);
            if ( IsNullOrEmpty )
            {
              v24 = IsNullOrEmpty;
              IsNullOrEmpty = (System_Collections_ICollection_o *)BalanceConfig_TypeInfo;
              klass = (int)v24[4].klass;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v11);
                IsNullOrEmpty = (System_Collections_ICollection_o *)BalanceConfig_TypeInfo;
              }
              if ( klass == *((_DWORD *)IsNullOrEmpty[11].monitor + 202) )
              {
                IsNullOrEmpty = (System_Collections_ICollection_o *)BasicHelper__IsNullOrEmpty(v17, 0LL);
                if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
                {
                  v26 = v19->fields.textJson;
                  if ( !v26 )
                    goto LABEL_31;
                  if ( !v26->max_length )
                    break;
                  v27 = v26->m_Items[0];
                  if ( !v27 )
                    goto LABEL_31;
                  v27->fields.isQuestRelease = 0;
                }
              }
            }
          }
        }
      }
      max_length = AvailableTutorialArray->max_length;
      if ( (int)++v18 >= max_length )
        return;
    }
    sub_1BCAA44(IsNullOrEmpty, v11);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TerminalSceneComponent__CheckEventDailyPoint(
        TerminalSceneComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *Instance; // x0
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x2
  TerminalPramsManager_c *v20; // x0
  int64_t BeforeTimeEventDailyPoint_k__BackingField; // x21
  __int64 v22; // x1
  __int64 v23; // x2
  uint64_t dateData; // x20
  TerminalPramsManager_c *v25; // x0
  __int64 v26; // x1
  __int64 v27; // x1
  int32_t Hour; // w19
  BalanceConfig_c *v29; // x8
  int32_t Year; // w19
  int32_t Month; // w21
  int32_t Day; // w0
  __int64 v33; // x1
  BalanceConfig_c *v34; // x8
  int32_t v35; // w22
  System_DateTime_o t2; // [xsp+0h] [xbp-50h] BYREF
  uint64_t v38; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF
  System_DateTime_o v40; // 0:x0.8
  System_DateTime_o v41; // 0:x0.8
  System_DateTime_o v42; // 0:x0.8
  System_DateTime_o v43; // 0:x0.8
  System_DateTime_o v44; // 0:x0.8
  System_DateTime_o v45; // 0:x0.8
  System_DateTime_o v46; // 0:x0.8
  System_DateTime_o v47; // 0:x1.8

  if ( (byte_4B182B4 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDetailMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v6, v7);
    sub_1BCA7E0(&System_DateTime_TypeInfo, v8, v9);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v14, v15);
    byte_4B182B4 = 1;
  }
  entity = 0LL;
  t2.fields._dateData = 0LL;
  v38 = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_40;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          eventId,
          (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Instance = entity;
  if ( !entity )
LABEL_40:
    sub_1BCAA3C(Instance, v17);
  if ( EventDetailEntity__IsEventDailyPoint((EventDetailEntity_o *)entity, 0LL) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v18);
    if ( !byte_4B1380E )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v18, v19);
      byte_4B1380E = 1;
    }
    v20 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v18);
      v20 = TerminalPramsManager_TypeInfo;
    }
    BeforeTimeEventDailyPoint_k__BackingField = v20->static_fields->_BeforeTimeEventDailyPoint_k__BackingField;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18);
    dateData = NetworkManager__getDateTime_39270164(BeforeTimeEventDailyPoint_k__BackingField, 0LL).fields._dateData;
    if ( !byte_4B1380D )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v22, v23);
      byte_4B1380D = 1;
    }
    v25 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v22);
      v25 = TerminalPramsManager_TypeInfo;
    }
    if ( BeforeTimeEventDailyPoint_k__BackingField < 1
      || v25->static_fields->_EventDailyPointEventId_k__BackingField != eventId )
    {
      return 1;
    }
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v22);
    v38 = NetworkManager__getServerDateTime(0LL).fields._dateData;
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v26);
    v40.fields._dateData = (uint64_t)&v38;
    Hour = System_DateTime__get_Hour(v40, 0LL);
    v29 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v27);
      v29 = BalanceConfig_TypeInfo;
    }
    if ( Hour < v29->static_fields->EventDailyPointResetAt )
    {
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v27);
      v41.fields._dateData = (uint64_t)&v38;
      v38 = System_DateTime__AddDays(v41, -1.0, 0LL).fields._dateData;
    }
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v27);
    v42.fields._dateData = (uint64_t)&v38;
    Year = System_DateTime__get_Year(v42, 0LL);
    v43.fields._dateData = (uint64_t)&v38;
    Month = System_DateTime__get_Month(v43, 0LL);
    v44.fields._dateData = (uint64_t)&v38;
    Day = System_DateTime__get_Day(v44, 0LL);
    v34 = BalanceConfig_TypeInfo;
    v35 = Day;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v33);
      v34 = BalanceConfig_TypeInfo;
    }
    v45.fields._dateData = (uint64_t)&t2;
    System_DateTime___ctor_63079992(v45, Year, Month, v35, v34->static_fields->EventDailyPointResetAt, 0, 0, 0LL);
    v47.fields._dateData = t2.fields._dateData;
    v46.fields._dateData = dateData;
    if ( System_DateTime__op_LessThanOrEqual(v46, v47, 0LL) )
      return 1;
  }
  return 0;
}


void __fastcall TerminalSceneComponent__CheckExchangeDialogTheFree(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_String_o *String_70112520; // x0
  const MethodInfo *v10; // x5

  if ( (byte_4B182C4 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_2032/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_FREE_SHOP_TITLE"*/, callback, method);
    sub_1BCA7E0(&StringLiteral_19829/*"freeShopIds"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_2031/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_FREE_SHOP_DETAIL"*/, v7, v8);
    byte_4B182C4 = 1;
  }
  String_70112520 = UnityEngine_PlayerPrefs__GetString_70112520((System_String_o *)StringLiteral_19829/*"freeShopIds"*/, 0LL);
  if ( System_String__IsNullOrEmpty(String_70112520, 0LL) )
    ActionExtensions__Call(callback, 0LL);
  else
    TerminalSceneComponent__OpenExchangeDialogue(
      this,
      (System_String_o *)StringLiteral_19829/*"freeShopIds"*/,
      (System_String_o *)StringLiteral_2032/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_FREE_SHOP_TITLE"*/,
      (System_String_o *)StringLiteral_2031/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_FREE_SHOP_DETAIL"*/,
      callback,
      v10);
}


void __fastcall TerminalSceneComponent__CheckExchangeDialogTheReturn(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_String_o *String_70112520; // x0
  const MethodInfo *v10; // x5

  if ( (byte_4B182C5 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_2034/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_RETURN_RARE_PRI_SHOP_TITLE"*/, callback, method);
    sub_1BCA7E0(&StringLiteral_23165/*"returnRarePriShopIds"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_2033/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_RETURN_RARE_PRI_SHOP_DETAIL"*/, v7, v8);
    byte_4B182C5 = 1;
  }
  String_70112520 = UnityEngine_PlayerPrefs__GetString_70112520((System_String_o *)StringLiteral_23165/*"returnRarePriShopIds"*/, 0LL);
  if ( System_String__IsNullOrEmpty(String_70112520, 0LL) )
    ActionExtensions__Call(callback, 0LL);
  else
    TerminalSceneComponent__OpenExchangeDialogue(
      this,
      (System_String_o *)StringLiteral_23165/*"returnRarePriShopIds"*/,
      (System_String_o *)StringLiteral_2034/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_RETURN_RARE_PRI_SHOP_TITLE"*/,
      (System_String_o *)StringLiteral_2033/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_RETURN_RARE_PRI_SHOP_DETAIL"*/,
      callback,
      v10);
}


void __fastcall TerminalSceneComponent__CheckLastPlayBgm(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *mTerminalList; // x20
  __int64 v5; // x1
  ScrTerminalListTop_o *v6; // x0

  if ( (byte_4B182AA & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B182AA = 1;
  }
  mTerminalList = (UnityEngine_Object_o *)this->fields.mTerminalList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(mTerminalList, 0LL, 0LL) )
  {
    v6 = this->fields.mTerminalList;
    if ( !v6 )
      sub_1BCAA3C(0LL, v5);
    ScrTerminalListTop__CheckLastPlayBgm(v6, 0LL);
  }
}


void __fastcall TerminalSceneComponent__CheckMasterMissionReset(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x19
  ScrPlayerStatus_o *mPlayerStatus; // x0
  __int64 v30; // x1
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  System_Action_o **v37; // x20
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  __int64 v44; // x1
  _QWORD *v45; // x21
  TerminalSceneComponent_c *v46; // x0
  System_String_o *String; // x0
  int64_t v48; // x0
  __int64 v49; // x1
  __int64 v50; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v52; // x21
  System_String_o *v53; // x22
  System_String_o *v54; // x23
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  CommonConfirmDialog_ClickDelegate_o *v58; // x24
  TerminalSceneComponent_c *v59; // x0
  struct TerminalSceneComponent_StaticFields *static_fields; // x8
  int64_t v61; // x0
  System_String_o *MASTER_MISSION_RESET_KEY; // x19
  System_String_o *v63; // x0

  if ( (byte_4B182C8 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, callback, method);
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, v6, v7);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__DisplayClass260_0__CheckMasterMissionReset_b__0__, v14, v15);
    sub_1BCA7E0(&TerminalSceneComponent___c__DisplayClass260_0_TypeInfo, v16, v17);
    sub_1BCA7E0(&StringLiteral_8899/*"MST_MISSION_CHANGE_MSG"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_8898/*"MST_MISSION_CHANGE_DECIDE"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_1209/*"0"*/, v26, v27);
    byte_4B182C8 = 1;
  }
  v28 = sub_1BCAA2C(TerminalSceneComponent___c__DisplayClass260_0_TypeInfo, callback, method, v3);
  System_Object___ctor((Il2CppObject *)v28, 0LL);
  if ( !v28 )
    goto LABEL_20;
  *(_QWORD *)(v28 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v28 + 24), (int64_t)this, v31, v32, v33, v34, v35, v36);
  *(_QWORD *)(v28 + 32) = callback;
  v37 = (System_Action_o **)(v28 + 32);
  sub_1BCA784((PartyOrganizationUtility_o *)(v28 + 32), (int64_t)callback, v38, v39, v40, v41, v42, v43);
  mPlayerStatus = this->fields.mPlayerStatus;
  if ( !mPlayerStatus )
    goto LABEL_20;
  *(_QWORD *)(v28 + 16) = ScrPlayerStatus__GetMstMissionStarts(mPlayerStatus, 0LL);
  v45 = (_QWORD *)(v28 + 16);
  v46 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v44);
    v46 = TerminalSceneComponent_TypeInfo;
  }
  String = UnityEngine_PlayerPrefs__GetString(
             v46->static_fields->MASTER_MISSION_RESET_KEY,
             (System_String_o *)StringLiteral_1209/*"0"*/,
             0LL);
  v48 = System_Int64__Parse(String, 0LL);
  if ( *v45 )
  {
    if ( v48 )
    {
      if ( v48 != *v45 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v50);
        v52 = LocalizationManager__Get((System_String_o *)StringLiteral_8899/*"MST_MISSION_CHANGE_MSG"*/, 0LL);
        v53 = LocalizationManager__Get((System_String_o *)StringLiteral_8898/*"MST_MISSION_CHANGE_DECIDE"*/, 0LL);
        v54 = LocalizationManager__Get((System_String_o *)StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
        v58 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                       CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                       v55,
                                                       v56,
                                                       v57);
        CommonConfirmDialog_ClickDelegate___ctor(
          v58,
          (Il2CppObject *)v28,
          Method_TerminalSceneComponent___c__DisplayClass260_0__CheckMasterMissionReset_b__0__,
          0LL);
        mPlayerStatus = (ScrPlayerStatus_o *)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v30);
        if ( Instance )
        {
          CommonUI__OpenConfirmDecideDlg(
            (CommonUI_o *)Instance,
            (System_String_o *)StringLiteral_1/*""*/,
            v52,
            v53,
            v54,
            v58,
            BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
            0.0,
            15.0,
            0,
            1,
            0,
            240,
            0,
            1,
            0,
            0,
            0LL);
          return;
        }
LABEL_20:
        sub_1BCAA3C(mPlayerStatus, v30);
      }
    }
    else
    {
      v59 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v49);
        v59 = TerminalSceneComponent_TypeInfo;
      }
      static_fields = v59->static_fields;
      v61 = v28 + 16;
      MASTER_MISSION_RESET_KEY = static_fields->MASTER_MISSION_RESET_KEY;
      v63 = System_Int64__ToString(v61, 0LL);
      UnityEngine_PlayerPrefs__SetString(MASTER_MISSION_RESET_KEY, v63, 0LL);
    }
  }
  ActionExtensions__Call(*v37, 0LL);
}


void __fastcall TerminalSceneComponent__CheckNotificationDialog(
        TerminalSceneComponent_o *this,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  int64_t v41; // x19
  DataManager_o *Instance; // x0
  __int64 v43; // x1
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  System_Action_o **v50; // x20
  __int64 v51; // x1
  BattleResultBondsComponent_c *v52; // x0
  __int64 v53; // x1
  BattleResultBondsComponent_c *v54; // x0
  __int64 v55; // x1
  Il2CppObject *String_70112520; // x21
  System_Object_array *v57; // x0
  System_Object_array *v58; // x22
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v60; // x23
  __int64 v61; // x25
  Il2CppObject *v62; // x8
  __int64 v63; // x2
  __int64 v64; // x3
  BattleResultBondsComponent_c *v65; // x0
  BattleResultBondsComponent_c *v66; // x0
  System_Action_o *v67; // x20
  EventServantEntity_o *v68; // x21
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  DataMasterBase_TMaster__TEntity__PKType__o *v75; // x22
  __int64 v76; // x2
  __int64 v77; // x3
  __int64 v78; // x22
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  int64_t v85; // x19
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x3
  int64_t v89; // x20
  Il2CppObject *v90; // x8
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7
  __int64 v103; // x1
  __int64 v104; // x2
  __int64 v105; // x3
  System_String_o *v106; // x19
  Il2CppObject *v107; // x22
  __int64 v108; // x0
  Il2CppObject *v109; // [xsp+30h] [xbp-60h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_4B182C9 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callBack, method);
    sub_1BCA7E0(&BattleResultBondsComponent_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMaster_SvtCoinMaster___, v9, v10);
    sub_1BCA7E0(&DataManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__, v13, v14);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v15, v16);
    sub_1BCA7E0(&GetSvtCoin___TypeInfo, v17, v18);
    sub_1BCA7E0(&GetSvtCoin_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_JsonManager_DeserializeArray_GetSvts___, v21, v22);
    sub_1BCA7E0(&JsonManager_TypeInfo, v23, v24);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v27, v28);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29, v30);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__DisplayClass261_0__CheckNotificationDialog_b__0__, v31, v32);
    sub_1BCA7E0(&TerminalSceneComponent___c__DisplayClass261_0_TypeInfo, v33, v34);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__DisplayClass261_1__CheckNotificationDialog_b__1__, v35, v36);
    sub_1BCA7E0(&TerminalSceneComponent___c__DisplayClass261_1_TypeInfo, v37, v38);
    sub_1BCA7E0(&StringLiteral_12499/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/, v39, v40);
    byte_4B182C9 = 1;
  }
  v109 = 0LL;
  entity = 0LL;
  v41 = sub_1BCAA2C(TerminalSceneComponent___c__DisplayClass261_0_TypeInfo, callBack, method, v3);
  System_Object___ctor((Il2CppObject *)v41, 0LL);
  if ( !v41 )
    goto LABEL_54;
  *(_QWORD *)(v41 + 16) = callBack;
  v50 = (System_Action_o **)(v41 + 16);
  sub_1BCA784((PartyOrganizationUtility_o *)(v41 + 16), (int64_t)callBack, v44, v45, v46, v47, v48, v49);
  v52 = BattleResultBondsComponent_TypeInfo;
  if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo, v51);
    v52 = BattleResultBondsComponent_TypeInfo;
  }
  if ( UnityEngine_PlayerPrefs__HasKey(v52->static_fields->GET_EXIST_SVT_KEY, 0LL) )
  {
    v54 = BattleResultBondsComponent_TypeInfo;
    if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo, v53);
      v54 = BattleResultBondsComponent_TypeInfo;
    }
    String_70112520 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_70112520(
                                        v54->static_fields->GET_EXIST_SVT_KEY,
                                        0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v55);
    v57 = JsonManager__DeserializeArray_object_(
            String_70112520,
            (const MethodInfo_2F79784 *)Method_JsonManager_DeserializeArray_GetSvts___);
    if ( v57 )
    {
      v58 = v57;
      if ( *(_QWORD *)&v57->max_length )
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_54;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
        max_length = v58->max_length;
        if ( max_length >= 1 )
        {
          v60 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
          v61 = 0LL;
          while ( 1 )
          {
            if ( (unsigned int)v61 >= max_length )
              goto LABEL_55;
            v62 = v58->m_Items[v61];
            if ( !v62 || !v60 )
              goto LABEL_54;
            Instance = (DataManager_o *)DataMasterBase_object__object__long___TryGetEntity(
                                          v60,
                                          &entity,
                                          (int64_t)v62[1].klass,
                                          (const MethodInfo_31B3040 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              Instance = (DataManager_o *)entity;
              if ( !entity )
                goto LABEL_54;
              Instance = (DataManager_o *)UserServantEntity__getEventServant((UserServantEntity_o *)entity, 0LL);
              if ( Instance )
                break;
              Instance = (DataManager_o *)entity;
              if ( !entity )
                goto LABEL_54;
              Instance = (DataManager_o *)UserServantEntity__getEventServantIgnoreEnd(
                                            (UserServantEntity_o *)entity,
                                            0LL);
              if ( Instance )
                break;
            }
            if ( (_DWORD)v61 == v58->max_length - 1 )
            {
              v65 = BattleResultBondsComponent_TypeInfo;
              if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo, v43);
                v65 = BattleResultBondsComponent_TypeInfo;
              }
              UnityEngine_PlayerPrefs__DeleteKey(v65->static_fields->GET_EXIST_SVT_KEY, 0LL);
              ActionExtensions__Call(*v50, 0LL);
            }
            max_length = v58->max_length;
            if ( (int)++v61 >= max_length )
              goto LABEL_29;
          }
          v67 = *(System_Action_o **)(v41 + 24);
          v68 = (EventServantEntity_o *)Instance;
          if ( !v67 )
          {
            v67 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v43, v63, v64);
            System_Action___ctor(
              v67,
              (Il2CppObject *)v41,
              Method_TerminalSceneComponent___c__DisplayClass261_0__CheckNotificationDialog_b__0__,
              0LL);
            *(_QWORD *)(v41 + 24) = v67;
            sub_1BCA784((PartyOrganizationUtility_o *)(v41 + 24), (int64_t)v67, v69, v70, v71, v72, v73, v74);
          }
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v43);
          Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SvtCoinMaster___);
          if ( entity )
          {
            v75 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
            Instance = (DataManager_o *)UserServantEntity__getSvtId((UserServantEntity_o *)entity, 0LL);
            if ( v75 )
            {
              Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                            v75,
                                            &v109,
                                            (int32_t)Instance,
                                            (const MethodInfo_31B2E94 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                if ( !v109 )
                  goto LABEL_54;
                if ( SHIDWORD(v109[1].klass) >= 1 )
                {
                  v78 = sub_1BCAA2C(TerminalSceneComponent___c__DisplayClass261_1_TypeInfo, v43, v76, v77);
                  System_Object___ctor((Il2CppObject *)v78, 0LL);
                  if ( !v78 )
                    goto LABEL_54;
                  *(_QWORD *)(v78 + 24) = v41;
                  sub_1BCA784((PartyOrganizationUtility_o *)(v78 + 24), v41, v79, v80, v81, v82, v83, v84);
                  v85 = sub_1BCA888(GetSvtCoin___TypeInfo, 1LL);
                  v89 = sub_1BCAA2C(GetSvtCoin_TypeInfo, v86, v87, v88);
                  GetSvtCoin___ctor((GetSvtCoin_o *)v89, 0LL);
                  v90 = v109;
                  if ( !v109 )
                    goto LABEL_54;
                  if ( !v89 )
                    goto LABEL_54;
                  *(_DWORD *)(v89 + 16) = v109[1].klass;
                  *(int32x2_t *)(v89 + 20) = vrev64_s32(*(int32x2_t *)((char *)&v90[1].klass + 4));
                  if ( !v85 )
                    goto LABEL_54;
                  Instance = (DataManager_o *)sub_1BCA91C(v89, *(_QWORD *)(*(_QWORD *)v85 + 64LL));
                  if ( !Instance )
                  {
                    v108 = sub_1BCAA60(0LL);
                    sub_1BCA908(v108, 0LL);
                  }
                  if ( !*(_DWORD *)(v85 + 24) )
LABEL_55:
                    sub_1BCAA44(Instance, v43);
                  *(_QWORD *)(v85 + 32) = v89;
                  sub_1BCA784((PartyOrganizationUtility_o *)(v85 + 32), v89, v91, v92, v93, v94, v95, v96);
                  *(_QWORD *)(v78 + 16) = v85;
                  sub_1BCA784((PartyOrganizationUtility_o *)(v78 + 16), v85, v97, v98, v99, v100, v101, v102);
                  v67 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v103, v104, v105);
                  System_Action___ctor(
                    v67,
                    (Il2CppObject *)v78,
                    Method_TerminalSceneComponent___c__DisplayClass261_1__CheckNotificationDialog_b__1__,
                    0LL);
                }
              }
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v43);
              v106 = LocalizationManager__Get((System_String_o *)StringLiteral_12499/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/, 0LL);
              v107 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              Instance = (DataManager_o *)EventServantEntity__GetGetMessage(v68, 0LL);
              if ( v107 )
              {
                CommonUI__OpenNotificationDialog(
                  (CommonUI_o *)v107,
                  v106,
                  (System_String_o *)Instance,
                  v67,
                  -1,
                  0,
                  0,
                  0,
                  0,
                  0,
                  1,
                  0,
                  0LL,
                  0.0,
                  0LL);
                return;
              }
            }
          }
LABEL_54:
          sub_1BCAA3C(Instance, v43);
        }
      }
    }
LABEL_29:
    v66 = BattleResultBondsComponent_TypeInfo;
    if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo, v43);
      v66 = BattleResultBondsComponent_TypeInfo;
    }
    UnityEngine_PlayerPrefs__DeleteKey(v66->static_fields->GET_EXIST_SVT_KEY, 0LL);
  }
  ActionExtensions__Call(*v50, 0LL);
}


void __fastcall TerminalSceneComponent__CheckOpenCampaignDirectBonus(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x22
  __int64 mTerminalList; // x0
  __int64 v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  System_Action_o **v29; // x20
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int v36; // w21
  __int64 v37; // x23
  bool IsBlankEarthAction; // w24
  int64_t v39; // x2
  __int64 v40; // x3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  TerminalSceneComponent___c_c *v45; // x8
  __int64 v46; // x25
  System_Action_object__o *_9__251_0; // x26
  Il2CppObject *v48; // x27
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int64_t v56; // x2
  __int64 v57; // x3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  System_Action_object__o *v62; // x26
  Il2CppObject *v63; // x27
  struct TerminalSceneComponent___c_StaticFields *v64; // x0
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x3
  System_Action_object__o *v74; // x26
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x3
  ActionChain_o *v84; // x22
  const MethodInfo *v85; // x2
  System_Collections_IEnumerator_o *v86; // x0

  if ( (byte_4B182C1 & 1) == 0 )
  {
    sub_1BCA7E0(&ActionChain_TypeInfo, callback, method);
    sub_1BCA7E0(&System_Action_Action____TypeInfo, v6, v7);
    sub_1BCA7E0(&System_Action_Action__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__CheckOpenCampaignDirectBonus_b__251_0__, v10, v11);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__CheckOpenCampaignDirectBonus_b__251_1__, v12, v13);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__DisplayClass251_0__CheckOpenCampaignDirectBonus_b__2__, v14, v15);
    sub_1BCA7E0(&TerminalSceneComponent___c__DisplayClass251_0_TypeInfo, v16, v17);
    sub_1BCA7E0(&TerminalSceneComponent___c_TypeInfo, v18, v19);
    byte_4B182C1 = 1;
  }
  v20 = sub_1BCAA2C(TerminalSceneComponent___c__DisplayClass251_0_TypeInfo, callback, method, v3);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !v20 )
    goto LABEL_33;
  *(_QWORD *)(v20 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v20 + 16), (int64_t)this, v23, v24, v25, v26, v27, v28);
  *(_QWORD *)(v20 + 24) = callback;
  v29 = (System_Action_o **)(v20 + 24);
  sub_1BCA784((PartyOrganizationUtility_o *)(v20 + 24), (int64_t)callback, v30, v31, v32, v33, v34, v35);
  mTerminalList = (__int64)this->fields.mTerminalList;
  this->fields._IsPlayingCampaignDirectBonus_k__BackingField = 1;
  if ( !mTerminalList )
    goto LABEL_33;
  mTerminalList = ScrTerminalListTop__CheckTerminalTopEffect((ScrTerminalListTop_o *)mTerminalList, 0LL);
  if ( !this->fields.mTerminalList )
    goto LABEL_33;
  v36 = mTerminalList;
  mTerminalList = (__int64)ScrTerminalListTop__GetCurrentLoginEntity(this->fields.mTerminalList, 0LL);
  if ( !this->fields.mTerminalList )
    goto LABEL_33;
  v37 = mTerminalList;
  IsBlankEarthAction = ScrTerminalListTop__IsBlankEarthAction(this->fields.mTerminalList, 0LL);
  mTerminalList = sub_1BCA888(System_Action_Action____TypeInfo, 3LL);
  v45 = TerminalSceneComponent___c_TypeInfo;
  v46 = mTerminalList;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo, v22);
    v45 = TerminalSceneComponent___c_TypeInfo;
  }
  _9__251_0 = (System_Action_object__o *)v45->static_fields->__9__251_0;
  if ( !_9__251_0 )
  {
    if ( !v45->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v45, v22);
      v45 = TerminalSceneComponent___c_TypeInfo;
    }
    v48 = (Il2CppObject *)v45->static_fields->__9;
    _9__251_0 = (System_Action_object__o *)sub_1BCAA2C(System_Action_Action__TypeInfo, v22, v39, v40);
    System_Action_object____ctor(
      _9__251_0,
      v48,
      Method_TerminalSceneComponent___c__CheckOpenCampaignDirectBonus_b__251_0__,
      0LL);
    static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    static_fields->__9__251_0 = (struct System_Action_Action__o *)_9__251_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__251_0,
      (int64_t)_9__251_0,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55);
  }
  if ( !v46 )
    goto LABEL_33;
  if ( !*(_DWORD *)(v46 + 24) )
    goto LABEL_34;
  *(_QWORD *)(v46 + 32) = _9__251_0;
  sub_1BCA784((PartyOrganizationUtility_o *)(v46 + 32), (int64_t)_9__251_0, v39, v40, v41, v42, v43, v44);
  mTerminalList = (__int64)TerminalSceneComponent___c_TypeInfo;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo, v22);
    mTerminalList = (__int64)TerminalSceneComponent___c_TypeInfo;
  }
  v62 = *(System_Action_object__o **)(*(_QWORD *)(mTerminalList + 184) + 136LL);
  if ( !v62 )
  {
    if ( !*(_DWORD *)(mTerminalList + 224) )
    {
      j_il2cpp_runtime_class_init_0(mTerminalList, v22);
      mTerminalList = (__int64)TerminalSceneComponent___c_TypeInfo;
    }
    v63 = **(Il2CppObject ***)(mTerminalList + 184);
    v62 = (System_Action_object__o *)sub_1BCAA2C(System_Action_Action__TypeInfo, v22, v56, v57);
    System_Action_object____ctor(
      v62,
      v63,
      Method_TerminalSceneComponent___c__CheckOpenCampaignDirectBonus_b__251_1__,
      0LL);
    v64 = TerminalSceneComponent___c_TypeInfo->static_fields;
    v64->__9__251_1 = (struct System_Action_Action__o *)v62;
    sub_1BCA784((PartyOrganizationUtility_o *)&v64->__9__251_1, (int64_t)v62, v65, v66, v67, v68, v69, v70);
  }
  if ( *(_DWORD *)(v46 + 24) <= 1u
    || (*(_QWORD *)(v46 + 40) = v62,
        sub_1BCA784((PartyOrganizationUtility_o *)(v46 + 40), (int64_t)v62, v56, v57, v58, v59, v60, v61),
        v74 = (System_Action_object__o *)sub_1BCAA2C(System_Action_Action__TypeInfo, v71, v72, v73),
        System_Action_object____ctor(
          v74,
          (Il2CppObject *)v20,
          Method_TerminalSceneComponent___c__DisplayClass251_0__CheckOpenCampaignDirectBonus_b__2__,
          0LL),
        *(_DWORD *)(v46 + 24) <= 2u) )
  {
LABEL_34:
    sub_1BCAA44(mTerminalList, v22);
  }
  *(_QWORD *)(v46 + 48) = v74;
  sub_1BCA784((PartyOrganizationUtility_o *)(v46 + 48), (int64_t)v74, v75, v76, v77, v78, v79, v80);
  v84 = (ActionChain_o *)sub_1BCAA2C(ActionChain_TypeInfo, v81, v82, v83);
  ActionChain___ctor_47118216(v84, (System_Action_Action__array *)v46, 0LL);
  if ( v36 <= 0 && v37 == 0 && !IsBlankEarthAction )
  {
    if ( v84 )
    {
      ChainableActionBase__Execute((ChainableActionBase_o *)v84, 0LL);
      return;
    }
LABEL_33:
    sub_1BCAA3C(mTerminalList, v22);
  }
  if ( !v37 && v36 >= 1 )
  {
    v86 = TerminalSceneComponent__CoWaitTerminalTopEffectEnd(this, v84, v85);
LABEL_31:
    UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v86, 0LL);
    return;
  }
  if ( IsBlankEarthAction )
  {
    v86 = TerminalSceneComponent__CoWaitBlankEarthActionEnd(this, v84, v85);
    goto LABEL_31;
  }
  this->fields._IsPlayingCampaignDirectBonus_k__BackingField = 0;
  ActionExtensions__Call(*v29, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TerminalSceneComponent__CheckPlayChapterStart(
        TerminalSceneComponent_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  WarEntity_o *WarEntityByWarID; // x0
  WarEntity_o *v11; // x20
  int32_t StartType; // w0
  __int64 v13; // x1
  int64_t targetId; // x19

  if ( (byte_4B182B6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, *(_QWORD *)&warId, method);
    sub_1BCA7E0(&Method_SingletonTemplate_QuestTree__get_Instance__, v4, v5);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v6, v7);
    byte_4B182B6 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)Instance, warId, 0LL);
  if ( !WarEntityByWarID )
    return (char)WarEntityByWarID;
  v11 = WarEntityByWarID;
  StartType = WarEntity__GetStartType(WarEntityByWarID, 0LL);
  if ( StartType != 2 )
  {
    if ( StartType != 1 )
      goto LABEL_10;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v13);
    if ( TerminalPramsManager__IsWarStartedId(warId, 0LL) )
      goto LABEL_10;
LABEL_13:
    LOBYTE(WarEntityByWarID) = 1;
    return (char)WarEntityByWarID;
  }
  targetId = v11->fields.targetId;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
LABEL_15:
    sub_1BCAA3C(Instance, v9);
  if ( !clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, targetId, 0, 0LL) )
    goto LABEL_13;
LABEL_10:
  LOBYTE(WarEntityByWarID) = 0;
  return (char)WarEntityByWarID;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalSceneComponent__CheckRewardPopupChain(
        TerminalSceneComponent_o *this,
        System_Action_o *afterChain,
        bool checkTutorialEnded,
        bool noExecuteCondition,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x20
  void *v64; // x0
  __int64 v65; // x1
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  _BOOL8 _38402052; // x0
  const MethodInfo *v79; // x1
  __int64 v80; // x0
  Il2CppObject *mTerminalList; // x23
  __int64 v82; // x21
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x3
  System_Action_object__o *v86; // x22
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  __int64 v93; // x1
  __int64 v94; // x2
  __int64 v95; // x3
  System_Action_object__o *v96; // x22
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7
  __int64 v103; // x1
  __int64 v104; // x2
  __int64 v105; // x3
  System_Action_object__o *v106; // x22
  int64_t v107; // x2
  int32_t v108; // w3
  System_String_o *v109; // x4
  BattleSetupInfo_o *v110; // x5
  FollowerInfo_o *v111; // x6
  PartyListViewItem_o *v112; // x7
  Il2CppObject *Instance; // x24
  __int64 v114; // x1
  __int64 v115; // x2
  __int64 v116; // x3
  System_Action_object__o *v117; // x22
  int64_t v118; // x2
  int32_t v119; // w3
  System_String_o *v120; // x4
  BattleSetupInfo_o *v121; // x5
  FollowerInfo_o *v122; // x6
  PartyListViewItem_o *v123; // x7
  Il2CppObject *v124; // x24
  __int64 v125; // x1
  __int64 v126; // x2
  __int64 v127; // x3
  System_Action_object__o *v128; // x22
  int64_t v129; // x2
  int32_t v130; // w3
  System_String_o *v131; // x4
  BattleSetupInfo_o *v132; // x5
  FollowerInfo_o *v133; // x6
  PartyListViewItem_o *v134; // x7
  Il2CppObject *v135; // x24
  __int64 v136; // x1
  __int64 v137; // x2
  __int64 v138; // x3
  System_Action_object__o *v139; // x22
  int64_t v140; // x2
  int32_t v141; // w3
  System_String_o *v142; // x4
  BattleSetupInfo_o *v143; // x5
  FollowerInfo_o *v144; // x6
  PartyListViewItem_o *v145; // x7
  __int64 v146; // x1
  __int64 v147; // x2
  __int64 v148; // x3
  System_Action_object__o *v149; // x22
  int64_t v150; // x2
  int32_t v151; // w3
  System_String_o *v152; // x4
  BattleSetupInfo_o *v153; // x5
  FollowerInfo_o *v154; // x6
  PartyListViewItem_o *v155; // x7
  __int64 v156; // x1
  __int64 v157; // x2
  __int64 v158; // x3
  System_Action_object__o *v159; // x22
  int64_t v160; // x2
  int32_t v161; // w3
  System_String_o *v162; // x4
  BattleSetupInfo_o *v163; // x5
  FollowerInfo_o *v164; // x6
  PartyListViewItem_o *v165; // x7
  __int64 v166; // x1
  __int64 v167; // x2
  __int64 v168; // x3
  System_Action_object__o *v169; // x22
  int64_t v170; // x2
  int32_t v171; // w3
  System_String_o *v172; // x4
  BattleSetupInfo_o *v173; // x5
  FollowerInfo_o *v174; // x6
  PartyListViewItem_o *v175; // x7
  int64_t v176; // x2
  __int64 v177; // x3
  System_String_o *v178; // x4
  BattleSetupInfo_o *v179; // x5
  FollowerInfo_o *v180; // x6
  PartyListViewItem_o *v181; // x7
  System_Action_object__o *v182; // x22
  Il2CppObject *v183; // x23
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int64_t v185; // x2
  int32_t v186; // w3
  System_String_o *v187; // x4
  BattleSetupInfo_o *v188; // x5
  FollowerInfo_o *v189; // x6
  PartyListViewItem_o *v190; // x7
  __int64 v191; // x1
  __int64 v192; // x2
  __int64 v193; // x3
  System_Action_object__o *v194; // x22
  int64_t v195; // x2
  int32_t v196; // w3
  System_String_o *v197; // x4
  BattleSetupInfo_o *v198; // x5
  FollowerInfo_o *v199; // x6
  PartyListViewItem_o *v200; // x7
  __int64 v201; // x1
  __int64 v202; // x2
  __int64 v203; // x3
  System_Action_object__o *v204; // x22
  int64_t v205; // x2
  int32_t v206; // w3
  System_String_o *v207; // x4
  BattleSetupInfo_o *v208; // x5
  FollowerInfo_o *v209; // x6
  PartyListViewItem_o *v210; // x7
  __int64 v211; // x1
  __int64 v212; // x2
  __int64 v213; // x3
  System_Action_object__o *v214; // x22
  int64_t v215; // x2
  int32_t v216; // w3
  System_String_o *v217; // x4
  BattleSetupInfo_o *v218; // x5
  FollowerInfo_o *v219; // x6
  PartyListViewItem_o *v220; // x7
  __int64 v221; // x1
  __int64 v222; // x2
  __int64 v223; // x3
  System_Action_object__o *v224; // x22
  int64_t v225; // x2
  int32_t v226; // w3
  System_String_o *v227; // x4
  BattleSetupInfo_o *v228; // x5
  FollowerInfo_o *v229; // x6
  PartyListViewItem_o *v230; // x7
  __int64 v231; // x1
  __int64 v232; // x2
  __int64 v233; // x3
  System_Action_object__o *v234; // x22
  int64_t v235; // x2
  int32_t v236; // w3
  System_String_o *v237; // x4
  BattleSetupInfo_o *v238; // x5
  FollowerInfo_o *v239; // x6
  PartyListViewItem_o *v240; // x7
  __int64 v241; // x1
  __int64 v242; // x2
  __int64 v243; // x3
  System_Action_object__o *v244; // x22
  int64_t v245; // x2
  int32_t v246; // w3
  System_String_o *v247; // x4
  BattleSetupInfo_o *v248; // x5
  FollowerInfo_o *v249; // x6
  PartyListViewItem_o *v250; // x7
  __int64 v251; // x1
  __int64 v252; // x2
  __int64 v253; // x3
  System_Action_object__o *v254; // x19
  int64_t v255; // x2
  int32_t v256; // w3
  System_String_o *v257; // x4
  BattleSetupInfo_o *v258; // x5
  FollowerInfo_o *v259; // x6
  PartyListViewItem_o *v260; // x7
  __int64 v261; // x1
  __int64 v262; // x2
  __int64 v263; // x3
  ActionChain_o *v264; // x19
  __int64 v265; // x21
  __int64 v266; // x1
  __int64 v267; // x2
  __int64 v268; // x3
  System_Action_o *v269; // x22
  int64_t v270; // x2
  int32_t v271; // w3
  System_String_o *v272; // x4
  BattleSetupInfo_o *v273; // x5
  FollowerInfo_o *v274; // x6
  PartyListViewItem_o *v275; // x7
  __int64 v276; // x1

  if ( (byte_4B182BF & 1) == 0 )
  {
    sub_1BCA7E0(&ActionChain_TypeInfo, afterChain, checkTutorialEnded);
    sub_1BCA7E0(&System_Action___TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Action_Action____TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Action_Action__TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Action_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_CommonUI_StartLoginMessages__, v17, v18);
    sub_1BCA7E0(&Method_CommonUI_StartServantEventJoinLeaveNotification__, v19, v20);
    sub_1BCA7E0(&Method_ScrTerminalListTop_ShowTerminalMessagesDialogue__, v21, v22);
    sub_1BCA7E0(&Method_ScrTerminalListTop_StartShowWarClearReward__, v23, v24);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v25, v26);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_TerminalSceneComponent_CheckAfterQuestClearDialog__, v29, v30);
    sub_1BCA7E0(&Method_TerminalSceneComponent_CheckExchangeDialogTheFree__, v31, v32);
    sub_1BCA7E0(&Method_TerminalSceneComponent_CheckExchangeDialogTheReturn__, v33, v34);
    sub_1BCA7E0(&Method_TerminalSceneComponent_CheckMasterMissionReset__, v35, v36);
    sub_1BCA7E0(&Method_TerminalSceneComponent_CheckNotificationDialog__, v37, v38);
    sub_1BCA7E0(&Method_TerminalSceneComponent_CheckSaveRouteSelect__, v39, v40);
    sub_1BCA7E0(&Method_TerminalSceneComponent_CheckSpecialAscensionTutorial__, v41, v42);
    sub_1BCA7E0(&Method_TerminalSceneComponent_CheckTutorialOnTerminalAfterFreeExchangeDialog__, v43, v44);
    sub_1BCA7E0(&Method_TerminalSceneComponent_CheckTutorialOnTerminal__, v45, v46);
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v47, v48);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__CheckRewardPopupChain_b__249_2__, v49, v50);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__DisplayClass249_0__CheckRewardPopupChain_b__0__, v51, v52);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__DisplayClass249_0__CheckRewardPopupChain_b__1__, v53, v54);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__DisplayClass249_0__CheckRewardPopupChain_b__3__, v55, v56);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__DisplayClass249_0__CheckRewardPopupChain_b__4__, v57, v58);
    sub_1BCA7E0(&TerminalSceneComponent___c__DisplayClass249_0_TypeInfo, v59, v60);
    sub_1BCA7E0(&TerminalSceneComponent___c_TypeInfo, v61, v62);
    byte_4B182BF = 1;
  }
  v63 = sub_1BCAA2C(
          TerminalSceneComponent___c__DisplayClass249_0_TypeInfo,
          afterChain,
          checkTutorialEnded,
          noExecuteCondition);
  System_Object___ctor((Il2CppObject *)v63, 0LL);
  if ( !v63 )
    goto LABEL_43;
  *(_QWORD *)(v63 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v63 + 16), (int64_t)this, v66, v67, v68, v69, v70, v71);
  *(_QWORD *)(v63 + 24) = afterChain;
  sub_1BCA784((PartyOrganizationUtility_o *)(v63 + 24), (int64_t)afterChain, v72, v73, v74, v75, v76, v77);
  if ( !checkTutorialEnded )
    goto LABEL_8;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v79);
  _38402052 = TutorialFlag__Get_38402052(102, 0LL);
  if ( _38402052 )
  {
LABEL_8:
    if ( !noExecuteCondition )
    {
      TerminalSceneComponent__SaveCommonUICampaignDirectBonus((TerminalSceneComponent_o *)_38402052, v79);
      v80 = sub_1BCA888(System_Action_Action____TypeInfo, 17LL);
      mTerminalList = (Il2CppObject *)this->fields.mTerminalList;
      v82 = v80;
      v86 = (System_Action_object__o *)sub_1BCAA2C(System_Action_Action__TypeInfo, v83, v84, v85);
      System_Action_object____ctor(v86, mTerminalList, Method_ScrTerminalListTop_StartShowWarClearReward__, 0LL);
      if ( !v82 )
        goto LABEL_43;
      if ( !*(_DWORD *)(v82 + 24) )
        goto LABEL_42;
      *(_QWORD *)(v82 + 32) = v86;
      sub_1BCA784((PartyOrganizationUtility_o *)(v82 + 32), (int64_t)v86, v87, v88, v89, v90, v91, v92);
      v96 = (System_Action_object__o *)sub_1BCAA2C(System_Action_Action__TypeInfo, v93, v94, v95);
      System_Action_object____ctor(
        v96,
        (Il2CppObject *)this,
        Method_TerminalSceneComponent_CheckAfterQuestClearDialog__,
        0LL);
      if ( *(_DWORD *)(v82 + 24) <= 1u )
        goto LABEL_42;
      *(_QWORD *)(v82 + 40) = v96;
      sub_1BCA784((PartyOrganizationUtility_o *)(v82 + 40), (int64_t)v96, v97, v98, v99, v100, v101, v102);
      v106 = (System_Action_object__o *)sub_1BCAA2C(System_Action_Action__TypeInfo, v103, v104, v105);
      System_Action_object____ctor(
        v106,
        (Il2CppObject *)v63,
        Method_TerminalSceneComponent___c__DisplayClass249_0__CheckRewardPopupChain_b__0__,
        0LL);
      if ( *(_DWORD *)(v82 + 24) <= 2u )
        goto LABEL_42;
      *(_QWORD *)(v82 + 48) = v106;
      sub_1BCA784((PartyOrganizationUtility_o *)(v82 + 48), (int64_t)v106, v107, v108, v109, v110, v111, v112);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v117 = (System_Action_object__o *)sub_1BCAA2C(System_Action_Action__TypeInfo, v114, v115, v116);
      System_Action_object____ctor(v117, Instance, Method_CommonUI_StartServantEventJoinLeaveNotification__, 0LL);
      if ( *(_DWORD *)(v82 + 24) <= 3u )
        goto LABEL_42;
      *(_QWORD *)(v82 + 56) = v117;
      sub_1BCA784((PartyOrganizationUtility_o *)(v82 + 56), (int64_t)v117, v118, v119, v120, v121, v122, v123);
      v124 = (Il2CppObject *)this->fields.mTerminalList;
      v128 = (System_Action_object__o *)sub_1BCAA2C(System_Action_Action__TypeInfo, v125, v126, v127);
      System_Action_object____ctor(v128, v124, Method_ScrTerminalListTop_ShowTerminalMessagesDialogue__, 0LL);
      if ( *(_DWORD *)(v82 + 24) <= 4u )
        goto LABEL_42;
      *(_QWORD *)(v82 + 64) = v128;
      sub_1BCA784((PartyOrganizationUtility_o *)(v82 + 64), (int64_t)v128, v129, v130, v131, v132, v133, v134);
      v135 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v139 = (System_Action_object__o *)sub_1BCAA2C(System_Action_Action__TypeInfo, v136, v137, v138);
      System_Action_object____ctor(v139, v135, Method_CommonUI_StartLoginMessages__, 0LL);
      if ( *(_DWORD *)(v82 + 24) <= 5u )
        goto LABEL_42;
      *(_QWORD *)(v82 + 72) = v139;
      sub_1BCA784((PartyOrganizationUtility_o *)(v82 + 72), (int64_t)v139, v140, v141, v142, v143, v144, v145);
      v149 = (System_Action_object__o *)sub_1BCAA2C(System_Action_Action__TypeInfo, v146, v147, v148);
      System_Action_object____ctor(
        v149,
        (Il2CppObject *)v63,
        Method_TerminalSceneComponent___c__DisplayClass249_0__CheckRewardPopupChain_b__1__,
        0LL);
      if ( *(_DWORD *)(v82 + 24) <= 6u )
        goto LABEL_42;
      *(_QWORD *)(v82 + 80) = v149;
      sub_1BCA784((PartyOrganizationUtility_o *)(v82 + 80), (int64_t)v149, v150, v151, v152, v153, v154, v155);
      v159 = (System_Action_object__o *)sub_1BCAA2C(System_Action_Action__TypeInfo, v156, v157, v158);
      System_Action_object____ctor(
        v159,
        (Il2CppObject *)this,
        Method_TerminalSceneComponent_CheckSpecialAscensionTutorial__,
        0LL);
      if ( *(_DWORD *)(v82 + 24) <= 7u )
        goto LABEL_42;
      *(_QWORD *)(v82 + 88) = v159;
      sub_1BCA784((PartyOrganizationUtility_o *)(v82 + 88), (int64_t)v159, v160, v161, v162, v163, v164, v165);
      v169 = (System_Action_object__o *)sub_1BCAA2C(System_Action_Action__TypeInfo, v166, v167, v168);
      System_Action_object____ctor(
        v169,
        (Il2CppObject *)this,
        Method_TerminalSceneComponent_CheckTutorialOnTerminal__,
        0LL);
      if ( *(_DWORD *)(v82 + 24) <= 8u )
        goto LABEL_42;
      *(_QWORD *)(v82 + 96) = v169;
      sub_1BCA784((PartyOrganizationUtility_o *)(v82 + 96), (int64_t)v169, v170, v171, v172, v173, v174, v175);
      v64 = TerminalSceneComponent___c_TypeInfo;
      if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo, v65);
        v64 = TerminalSceneComponent___c_TypeInfo;
      }
      v182 = *(System_Action_object__o **)(*((_QWORD *)v64 + 23) + 112LL);
      if ( !v182 )
      {
        if ( !*((_DWORD *)v64 + 56) )
        {
          j_il2cpp_runtime_class_init_0(v64, v65);
          v64 = TerminalSceneComponent___c_TypeInfo;
        }
        v183 = (Il2CppObject *)**((_QWORD **)v64 + 23);
        v182 = (System_Action_object__o *)sub_1BCAA2C(System_Action_Action__TypeInfo, v65, v176, v177);
        System_Action_object____ctor(
          v182,
          v183,
          Method_TerminalSceneComponent___c__CheckRewardPopupChain_b__249_2__,
          0LL);
        static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
        static_fields->__9__249_2 = (struct System_Action_Action__o *)v182;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&static_fields->__9__249_2,
          (int64_t)v182,
          v185,
          v186,
          v187,
          v188,
          v189,
          v190);
      }
      if ( *(_DWORD *)(v82 + 24) <= 9u )
        goto LABEL_42;
      *(_QWORD *)(v82 + 104) = v182;
      sub_1BCA784((PartyOrganizationUtility_o *)(v82 + 104), (int64_t)v182, v176, v177, v178, v179, v180, v181);
      v194 = (System_Action_object__o *)sub_1BCAA2C(System_Action_Action__TypeInfo, v191, v192, v193);
      System_Action_object____ctor(
        v194,
        (Il2CppObject *)this,
        Method_TerminalSceneComponent_CheckNotificationDialog__,
        0LL);
      if ( *(_DWORD *)(v82 + 24) <= 0xAu )
        goto LABEL_42;
      *(_QWORD *)(v82 + 112) = v194;
      sub_1BCA784((PartyOrganizationUtility_o *)(v82 + 112), (int64_t)v194, v195, v196, v197, v198, v199, v200);
      v204 = (System_Action_object__o *)sub_1BCAA2C(System_Action_Action__TypeInfo, v201, v202, v203);
      System_Action_object____ctor(
        v204,
        (Il2CppObject *)this,
        Method_TerminalSceneComponent_CheckMasterMissionReset__,
        0LL);
      if ( *(_DWORD *)(v82 + 24) <= 0xBu )
        goto LABEL_42;
      *(_QWORD *)(v82 + 120) = v204;
      sub_1BCA784((PartyOrganizationUtility_o *)(v82 + 120), (int64_t)v204, v205, v206, v207, v208, v209, v210);
      v214 = (System_Action_object__o *)sub_1BCAA2C(System_Action_Action__TypeInfo, v211, v212, v213);
      System_Action_object____ctor(
        v214,
        (Il2CppObject *)this,
        Method_TerminalSceneComponent_CheckSaveRouteSelect__,
        0LL);
      if ( *(_DWORD *)(v82 + 24) <= 0xCu )
        goto LABEL_42;
      *(_QWORD *)(v82 + 128) = v214;
      sub_1BCA784((PartyOrganizationUtility_o *)(v82 + 128), (int64_t)v214, v215, v216, v217, v218, v219, v220);
      v224 = (System_Action_object__o *)sub_1BCAA2C(System_Action_Action__TypeInfo, v221, v222, v223);
      System_Action_object____ctor(
        v224,
        (Il2CppObject *)this,
        Method_TerminalSceneComponent_CheckExchangeDialogTheFree__,
        0LL);
      if ( *(_DWORD *)(v82 + 24) <= 0xDu )
        goto LABEL_42;
      *(_QWORD *)(v82 + 136) = v224;
      sub_1BCA784((PartyOrganizationUtility_o *)(v82 + 136), (int64_t)v224, v225, v226, v227, v228, v229, v230);
      v234 = (System_Action_object__o *)sub_1BCAA2C(System_Action_Action__TypeInfo, v231, v232, v233);
      System_Action_object____ctor(
        v234,
        (Il2CppObject *)this,
        Method_TerminalSceneComponent_CheckExchangeDialogTheReturn__,
        0LL);
      if ( *(_DWORD *)(v82 + 24) <= 0xEu )
        goto LABEL_42;
      *(_QWORD *)(v82 + 144) = v234;
      sub_1BCA784((PartyOrganizationUtility_o *)(v82 + 144), (int64_t)v234, v235, v236, v237, v238, v239, v240);
      v244 = (System_Action_object__o *)sub_1BCAA2C(System_Action_Action__TypeInfo, v241, v242, v243);
      System_Action_object____ctor(
        v244,
        (Il2CppObject *)this,
        Method_TerminalSceneComponent_CheckTutorialOnTerminalAfterFreeExchangeDialog__,
        0LL);
      if ( *(_DWORD *)(v82 + 24) <= 0xFu )
        goto LABEL_42;
      *(_QWORD *)(v82 + 152) = v244;
      sub_1BCA784((PartyOrganizationUtility_o *)(v82 + 152), (int64_t)v244, v245, v246, v247, v248, v249, v250);
      v254 = (System_Action_object__o *)sub_1BCAA2C(System_Action_Action__TypeInfo, v251, v252, v253);
      System_Action_object____ctor(
        v254,
        (Il2CppObject *)v63,
        Method_TerminalSceneComponent___c__DisplayClass249_0__CheckRewardPopupChain_b__3__,
        0LL);
      if ( *(_DWORD *)(v82 + 24) <= 0x10u )
        goto LABEL_42;
      *(_QWORD *)(v82 + 160) = v254;
      sub_1BCA784((PartyOrganizationUtility_o *)(v82 + 160), (int64_t)v254, v255, v256, v257, v258, v259, v260);
      v264 = (ActionChain_o *)sub_1BCAA2C(ActionChain_TypeInfo, v261, v262, v263);
      ActionChain___ctor_47118216(v264, (System_Action_Action__array *)v82, 0LL);
      v265 = sub_1BCA888(System_Action___TypeInfo, 1LL);
      v269 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v266, v267, v268);
      System_Action___ctor(
        v269,
        (Il2CppObject *)v63,
        Method_TerminalSceneComponent___c__DisplayClass249_0__CheckRewardPopupChain_b__4__,
        0LL);
      if ( !v265 )
        goto LABEL_43;
      if ( !*(_DWORD *)(v265 + 24) )
LABEL_42:
        sub_1BCAA44(v64, v65);
      *(_QWORD *)(v265 + 32) = v269;
      sub_1BCA784((PartyOrganizationUtility_o *)(v265 + 32), (int64_t)v269, v270, v271, v272, v273, v274, v275);
      if ( v264 )
      {
        v64 = ChainableActionBase__Final((ChainableActionBase_o *)v264, (System_Action_array *)v265, 0LL);
        if ( v64 )
        {
          ChainableActionBase__Execute((ChainableActionBase_o *)v64, 0LL);
          goto LABEL_39;
        }
      }
LABEL_43:
      sub_1BCAA3C(v64, v65);
    }
  }
  ActionExtensions__Call(*(System_Action_o **)(v63 + 24), 0LL);
LABEL_39:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v276);
  TerminalPramsManager__DeleteClearDatas(0LL);
}


void __fastcall TerminalSceneComponent__CheckSaveRouteSelect(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x19
  Il2CppObject *Instance; // x0
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  NetworkManager_ResultCallbackFunc_o *v32; // x20
  __int64 v33; // x1
  System_Int32_array *routes; // [xsp+8h] [xbp-38h] BYREF
  int32_t phase; // [xsp+18h] [xbp-28h] BYREF
  int32_t questId; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4B182C7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestPhaseMaster___, callback, method);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_BattleRouteSelectRequest___, v5, v6);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v9, v10);
    sub_1BCA7E0(&ScriptManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__DisplayClass258_0__CheckSaveRouteSelect_b__0__, v15, v16);
    sub_1BCA7E0(&TerminalSceneComponent___c__DisplayClass258_0_TypeInfo, v17, v18);
    byte_4B182C7 = 1;
  }
  v19 = sub_1BCAA2C(TerminalSceneComponent___c__DisplayClass258_0_TypeInfo, callback, method, v3);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    goto LABEL_19;
  *(_QWORD *)(v19 + 16) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 16), (int64_t)callback, v22, v23, v24, v25, v26, v27);
  phase = -1;
  questId = -1;
  routes = 0LL;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v28);
  if ( ScriptManager__GetSelectRouteArrayInCollection(&questId, &phase, &routes, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
    if ( !Instance )
      goto LABEL_19;
    if ( QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, questId, phase, 0LL) )
    {
      v32 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v29,
                                                     v30,
                                                     v31);
      NetworkManager_ResultCallbackFunc___ctor(
        v32,
        (Il2CppObject *)v19,
        Method_TerminalSceneComponent___c__DisplayClass258_0__CheckSaveRouteSelect_b__0__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v33);
      Instance = NetworkManager__getRequest_object_(
                   v32,
                   (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_BattleRouteSelectRequest___);
      if ( Instance )
      {
        BattleRouteSelectRequest__beginRequest((BattleRouteSelectRequest_o *)Instance, questId, phase, routes, 0LL);
        return;
      }
LABEL_19:
      sub_1BCAA3C(Instance, v21);
    }
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v29);
    ScriptManager__ClearSelectRouteArray(0LL);
    ScriptManager__ClearSelectRouteArrayInCollection(0LL);
  }
  ActionExtensions__Call(*(System_Action_o **)(v19 + 16), 0LL);
}


void __fastcall TerminalSceneComponent__CheckSpecialAscensionTutorial(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *v4; // x20
  struct ScrTerminalMap_o *mTerminalMap; // x8

  v4 = this;
  if ( (byte_4B182CA & 1) == 0 )
  {
    this = (TerminalSceneComponent_o *)sub_1BCA7E0(&CombineRootComponent_TypeInfo, callback, method);
    byte_4B182CA = 1;
  }
  if ( !v4->fields.isTutorialAfter )
  {
    mTerminalMap = v4->fields.mTerminalMap;
    if ( !mTerminalMap || (this = (TerminalSceneComponent_o *)mTerminalMap->fields.dispRoot) == 0LL )
      sub_1BCAA3C(this, callback);
    if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL) )
      goto LABEL_11;
  }
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo, callback);
  if ( CombineRootComponent__IsEnableSpecialAscension(0LL) )
  {
    v4->fields.isTutorialAfter = 0;
    EventTutorialMaster__CheckTutorial(0, 60, callback, 0, 0, 0, 0, 0LL);
  }
  else
  {
LABEL_11:
    ActionExtensions__Call(callback, 0LL);
  }
}


bool __fastcall TerminalSceneComponent__CheckTutorial(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  CommonUI_o *Instance; // x0
  __int64 v25; // x1
  __int64 v26; // x1
  bool v27; // w20
  TerminalPramsManager_c *v28; // x0
  __int64 v29; // x2
  int32_t FirstWarId; // w21
  TerminalPramsManager_c *v31; // x0
  Il2CppObject *v32; // x0
  clsQuestCheck_o *v33; // x21
  int32_t v34; // w0
  int32_t v35; // w0
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x2
  int32_t v40; // w0
  int32_t v41; // w0
  int32_t v42; // w8
  __int64 v43; // x2
  int32_t Value; // w21
  TerminalPramsManager_c *v45; // x0
  TerminalPramsManager_c *v47; // x0
  int32_t v48; // w1

  if ( (byte_4B182B3 & 1) == 0 )
  {
    sub_1BCA7E0(&OpeningMovieData_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v8, v9);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_13676/*"TUTORIAL_QUEST_ID1"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_13677/*"TUTORIAL_QUEST_ID2"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_13678/*"TUTORIAL_QUEST_ID3"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_13679/*"TUTORIAL_QUEST_ID4"*/, v20, v21);
    byte_4B182B3 = 1;
  }
  this->fields.mTutorialKind = 0;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method);
  if ( TutorialFlag__Get_38402052(102, 0LL) )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v22);
    if ( TutorialFlag__GetProgress(0LL) == 4 )
      return 0;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__CloseTutorialNotificationDialogArrow(Instance, 0LL);
      this->fields.isTutorialAfter = 1;
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v26);
      TutorialFlag__CompleteProgress(0LL);
      return 0;
    }
LABEL_83:
    sub_1BCAA3C(Instance, v25);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v22);
  if ( !byte_4B12DCF )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v22, v23);
    byte_4B12DCF = 1;
  }
  v28 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v22);
    v28 = TerminalPramsManager_TypeInfo;
  }
  this->fields.mIsStart_LoginBonusWhiteBg = !v28->static_fields->_IsAutoResume_k__BackingField;
  if ( !byte_4B11139 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v22, v23);
    v28 = TerminalPramsManager_TypeInfo;
    byte_4B11139 = 1;
  }
  if ( !v28->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v28, v22);
    v28 = TerminalPramsManager_TypeInfo;
  }
  v28->static_fields->_IsAutoResume_k__BackingField = 1;
  if ( !byte_4B12DC9 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v22, v23);
    v28 = TerminalPramsManager_TypeInfo;
    byte_4B12DC9 = 1;
  }
  if ( !v28->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v28, v22);
    v28 = TerminalPramsManager_TypeInfo;
  }
  v28->static_fields->_DispState_k__BackingField = 2;
  if ( !OpeningMovieData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OpeningMovieData_TypeInfo, v22);
  FirstWarId = OpeningMovieData__GetFirstWarId(0LL);
  if ( !byte_4B12DCD )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v25, v29);
    byte_4B12DCD = 1;
  }
  v31 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v25);
    v31 = TerminalPramsManager_TypeInfo;
  }
  v31->static_fields->_WarId_k__BackingField = FirstWarId;
  if ( !byte_4B12DCC )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v25, v29);
    v31 = TerminalPramsManager_TypeInfo;
    byte_4B12DCC = 1;
  }
  if ( !v31->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v31, v25);
    v31 = TerminalPramsManager_TypeInfo;
  }
  v31->static_fields->_SpotId_k__BackingField = -1;
  Instance = (CommonUI_o *)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_83;
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)Instance, 0, 0LL);
  MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
  Instance = (CommonUI_o *)this->fields.mPlayerStatus;
  if ( !Instance )
    goto LABEL_83;
  ScrPlayerStatus__DisableAllBtn((ScrPlayerStatus_o *)Instance, 0LL);
  v32 = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  this->fields.mTutorialKind = 5;
  v33 = (clsQuestCheck_o *)v32;
  Instance = (CommonUI_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_13676/*"TUTORIAL_QUEST_ID1"*/, 0LL);
  if ( !v33 )
    goto LABEL_83;
  if ( !clsQuestCheck__IsQuestClear(v33, (int32_t)Instance, 0, 0LL) )
  {
    Value = ConstantMaster__getValue((System_String_o *)StringLiteral_13676/*"TUTORIAL_QUEST_ID1"*/, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v25);
    if ( !byte_4B12DC7 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v25, v43);
      byte_4B12DC7 = 1;
    }
    v45 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v25);
      v45 = TerminalPramsManager_TypeInfo;
    }
    v45->static_fields->_QuestId_k__BackingField = Value;
    Instance = (CommonUI_o *)this->fields.mTerminalList;
    if ( Instance )
    {
      ScrTerminalListTop__SelectedQuest((ScrTerminalListTop_o *)Instance, 0LL);
      return 1;
    }
    goto LABEL_83;
  }
  v34 = ConstantMaster__getValue((System_String_o *)StringLiteral_13677/*"TUTORIAL_QUEST_ID2"*/, 0LL);
  if ( !clsQuestCheck__IsQuestClear(v33, v34, 0, 0LL) )
  {
    v27 = 0;
    v42 = 1;
    goto LABEL_70;
  }
  v35 = ConstantMaster__getValue((System_String_o *)StringLiteral_13678/*"TUTORIAL_QUEST_ID3"*/, 0LL);
  if ( !clsQuestCheck__IsQuestClear(v33, v35, 0, 0LL) )
  {
    v27 = 0;
    v42 = 2;
    goto LABEL_70;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v36);
  if ( !TutorialFlag__IsProgressDone(1, 0LL) )
  {
    v27 = 0;
    v42 = 3;
    goto LABEL_70;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v37);
  if ( !TutorialFlag__Get_38402052(101, 0LL) )
    goto LABEL_86;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v38);
  if ( !TutorialFlag__IsProgressDone(2, 0LL) )
  {
LABEL_86:
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v38);
    if ( !byte_4B1299C )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v38, v39);
      byte_4B1299C = 1;
    }
    v47 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v38);
      v47 = TerminalPramsManager_TypeInfo;
    }
    v47->static_fields->_SummonType_k__BackingField = 1;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_83;
    v48 = 20;
LABEL_80:
    v27 = 1;
    AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, v48, 1, 0LL, 0LL);
    return v27;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v38);
  if ( !TutorialFlag__IsProgressDone(3, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_83;
    v48 = 40;
    goto LABEL_80;
  }
  v40 = ConstantMaster__getValue((System_String_o *)StringLiteral_13679/*"TUTORIAL_QUEST_ID4"*/, 0LL);
  v27 = 0;
  if ( clsQuestCheck__IsQuestClear(v33, v40, 0, 0LL) )
    return v27;
  v41 = ConstantMaster__getValue((System_String_o *)StringLiteral_13679/*"TUTORIAL_QUEST_ID4"*/, 0LL);
  if ( clsQuestCheck__mfGetQuestPhaseByQuestID(v33, v41, 0LL) <= 0 )
  {
    v27 = 0;
    v42 = 4;
LABEL_70:
    this->fields.mTutorialKind = v42;
    return v27;
  }
  return 0;
}


void __fastcall TerminalSceneComponent__CheckTutorialOnTerminal(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  struct ScrTerminalMap_o *mTerminalMap; // x8
  _BOOL8 activeSelf; // x0
  const MethodInfo *v6; // x2

  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap || (this = (TerminalSceneComponent_o *)mTerminalMap->fields.dispRoot) == 0LL )
    sub_1BCAA3C(this, callback);
  activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
  if ( activeSelf )
  {
    ActionExtensions__Call(callback, 0LL);
  }
  else
  {
    TerminalSceneComponent__CheckConflictTutorialOnBlankEarth((TerminalSceneComponent_o *)activeSelf, 2, v6);
    EventTutorialMaster__CheckTutorial(0, 2, callback, 0, 0, 0, 0, 0LL);
  }
}


void __fastcall TerminalSceneComponent__CheckTutorialOnTerminalAfterFreeExchangeDialog(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  TerminalSceneComponent__CheckConflictTutorialOnBlankEarth(this, 80, method);
  EventTutorialMaster__CheckTutorial(0, 80, callback, 0, 0, 0, 0, 0LL);
}


void __fastcall TerminalSceneComponent__ClearTransitionInfo(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  TerminalTransitionInfo_o *v7; // x20
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B1828E & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    sub_1BCA7E0(&TerminalTransitionInfo_TypeInfo, v5, v6);
    byte_4B1828E = 1;
  }
  v7 = (TerminalTransitionInfo_o *)sub_1BCAA2C(TerminalTransitionInfo_TypeInfo, method, v2, v3);
  TerminalTransitionInfo___ctor(v7, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v8);
  TerminalPramsManager__TerminalTransitionInfoSave_SaveData(v7, 0LL);
  this->fields._TransitionInfo_k__BackingField = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._TransitionInfo_k__BackingField,
    0LL,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
}


System_Collections_IEnumerator_o *__fastcall TerminalSceneComponent__CoWaitBlankEarthActionEnd(
        TerminalSceneComponent_o *this,
        ActionChain_o *openCampaignDirectBonus,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B182C3 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__253_TypeInfo, openCampaignDirectBonus, method);
    byte_4B182C3 = 1;
  }
  v6 = sub_1BCAA2C(
         TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__253_TypeInfo,
         openCampaignDirectBonus,
         method,
         v3);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 32), (int64_t)this, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)(v6 + 40) = openCampaignDirectBonus;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 40), (int64_t)openCampaignDirectBonus, v13, v14, v15, v16, v17, v18);
  return (System_Collections_IEnumerator_o *)v6;
}


System_Collections_IEnumerator_o *__fastcall TerminalSceneComponent__CoWaitTerminalTopEffectEnd(
        TerminalSceneComponent_o *this,
        ActionChain_o *openCampaignDirectBonus,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B182C2 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__252_TypeInfo, openCampaignDirectBonus, method);
    byte_4B182C2 = 1;
  }
  v6 = sub_1BCAA2C(
         TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__252_TypeInfo,
         openCampaignDirectBonus,
         method,
         v3);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 32), (int64_t)this, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)(v6 + 40) = openCampaignDirectBonus;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 40), (int64_t)openCampaignDirectBonus, v13, v14, v15, v16, v17, v18);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall TerminalSceneComponent__CreateTransitionInfo(
        TerminalSceneComponent_o *this,
        TerminalTransitionInfo_o *info,
        const MethodInfo *method)
{
  __int64 v3; // x3
  TerminalTransitionInfo_o *v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  __int64 v13; // x1
  TerminalTransitionInfo_o *TransitionInfo_k__BackingField; // x0

  if ( (byte_4B1828D & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalTransitionInfo_TypeInfo, info, method);
    byte_4B1828D = 1;
  }
  v6 = (TerminalTransitionInfo_o *)sub_1BCAA2C(TerminalTransitionInfo_TypeInfo, info, method, v3);
  TerminalTransitionInfo___ctor(v6, 0LL);
  this->fields._TransitionInfo_k__BackingField = v6;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._TransitionInfo_k__BackingField,
    (int64_t)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  TransitionInfo_k__BackingField = this->fields._TransitionInfo_k__BackingField;
  if ( !TransitionInfo_k__BackingField )
    sub_1BCAA3C(0LL, v13);
  TerminalTransitionInfo__SetParameters(TransitionInfo_k__BackingField, info, 0LL);
}


void __fastcall TerminalSceneComponent__EndAuto(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0
  ScrPlayerStatus_o *mPlayerStatus; // x19
  TerminalPramsManager_c *v6; // x0
  __int64 v7; // x2

  if ( (byte_4B1829E & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B1829E = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_4B18382 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B18382 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = TerminalPramsManager_TypeInfo;
  }
  if ( v4->static_fields->mIsAutoOpenMasterMission )
  {
    mPlayerStatus = this->fields.mPlayerStatus;
    if ( !v4->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v4, method);
    if ( !byte_4B18383 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
      byte_4B18383 = 1;
    }
    v6 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
      v6 = TerminalPramsManager_TypeInfo;
    }
    if ( !mPlayerStatus )
      sub_1BCAA3C(v6, method);
    ScrPlayerStatus__OpenMasterMission(
      mPlayerStatus,
      0LL,
      v6->static_fields->_MasterMissionTargetType_k__BackingField,
      0LL);
    if ( !byte_4B10F86 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v7);
      byte_4B10F86 = 1;
    }
    v4 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
      v4 = TerminalPramsManager_TypeInfo;
    }
    v4->static_fields->_MasterMissionTargetType_k__BackingField = -1;
  }
  if ( !v4->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v4, method);
  TerminalPramsManager__AutoOff(0LL);
}


float __fastcall TerminalSceneComponent__FSMenuOffsetX(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B18281 & 1) == 0 )
  {
    sub_1BCA7E0(&FSUtility_TypeInfo, method, v2);
    byte_4B18281 = 1;
  }
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, method);
  return FSUtility__GetOffsetX(54.0, 0, 0LL);
}


float __fastcall TerminalSceneComponent__FSMenuOffsetY(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  return 33.0;
}


float __fastcall TerminalSceneComponent__FSRatioNormX(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  int32_t width; // w19
  float v3; // s0
  bool v4; // nf
  float result; // s0

  width = UnityEngine_Screen__get_width(0LL);
  v3 = (float)width / (float)UnityEngine_Screen__get_height(0LL);
  v4 = v3 < 2.1444;
  result = (float)(fminf(v3, 2.3333) + -2.1444) / 0.18889;
  if ( v4 )
    return 0.0;
  return result;
}


float __fastcall TerminalSceneComponent__FSRatioNormY(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  int32_t width; // w19
  float v3; // s0
  bool v4; // nf
  float result; // s0

  width = UnityEngine_Screen__get_width(0LL);
  v3 = (float)width / (float)UnityEngine_Screen__get_height(0LL);
  v4 = v3 < 1.8333;
  result = (float)(fminf(v3, 2.3333) + -1.8333) / 0.5;
  if ( v4 )
    return 0.0;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector2_o __fastcall TerminalSceneComponent__FSSpotArrowPosLerp(
        TerminalSceneComponent_o *this,
        UnityEngine_Vector2_o offset_21_9,
        const MethodInfo *method)
{
  float x; // s10
  float y; // s11
  float v5; // s8
  float v6; // s9
  TerminalSceneComponent_o *v7; // x0
  const MethodInfo *v8; // x1
  float v9; // s1
  float v10; // s0
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  x = this->fields.TUTORIAL_SPOT_ARROW_POS.fields.x;
  y = this->fields.TUTORIAL_SPOT_ARROW_POS.fields.y;
  v5 = offset_21_9.fields.y;
  v6 = x + (float)(offset_21_9.fields.x * TerminalSceneComponent__FSRatioNormX(this, method));
  v9 = y + (float)((float)(v5 + TerminalSceneComponent__FSRatioNormY(v7, v8)) + 75.0);
  v10 = v6;
  result.fields.y = v9;
  result.fields.x = v10;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Rect_o __fastcall TerminalSceneComponent__FSSpotArrowRectLerp(
        TerminalSceneComponent_o *this,
        UnityEngine_Vector2_o offset_21_9,
        const MethodInfo *method)
{
  float m_XMin; // s12
  float m_YMin; // s13
  float m_Width; // s9
  float m_Height; // s10
  float y; // s8
  float v8; // s11
  TerminalSceneComponent_o *v9; // x0
  const MethodInfo *v10; // x1
  float v11; // s1
  float v12; // s0
  float v13; // s2
  float v14; // s3
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  m_XMin = this->fields.TUTORIAL_SPOT_ARROW_RECT.fields.m_XMin;
  m_YMin = this->fields.TUTORIAL_SPOT_ARROW_RECT.fields.m_YMin;
  m_Width = this->fields.TUTORIAL_SPOT_ARROW_RECT.fields.m_Width;
  m_Height = this->fields.TUTORIAL_SPOT_ARROW_RECT.fields.m_Height;
  y = offset_21_9.fields.y;
  v8 = m_XMin + (float)(offset_21_9.fields.x * TerminalSceneComponent__FSRatioNormX(this, method));
  v11 = m_YMin + (float)((float)(y * TerminalSceneComponent__FSRatioNormY(v9, v10)) + -20.0);
  v12 = v8;
  v13 = m_Width;
  v14 = m_Height;
  result.fields.m_Height = v14;
  result.fields.m_Width = v13;
  result.fields.m_YMin = v11;
  result.fields.m_XMin = v12;
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalSceneComponent__FadeInAndTriggerEventEffects(
        TerminalSceneComponent_o *this,
        float fadeTime,
        int32_t eventId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x20
  AvalonSceneManager_o *Instance; // x0
  __int64 v33; // x1
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  const MethodInfo *v46; // x2
  const MethodInfo *v47; // x3
  struct ScrTerminalListTop_o *mTerminalList; // x8
  System_Action_o *v49; // x2
  _DWORD *monitor; // x8
  _DWORD *v51; // x8
  _DWORD *v52; // x8
  _QWORD *v53; // x8
  __int64 v54; // x21
  _BOOL8 IsNullOrEmpty; // x0
  int32_t v56; // w22
  int32_t v57; // w23
  SceneJumpInfo_o *v58; // x21
  TerminalPramsManager_c *v59; // x0
  __int64 v60; // x1
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  TerminalPramsManager_c *v67; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  __int64 v69; // x2
  ScrTerminalMap_o *mTerminalMap; // x22
  int32_t items_high; // w23
  __int64 v72; // x1
  __int64 v73; // x2
  System_String_o *MapModelEntryAnimationName; // x22
  TerminalPramsManager_c *v75; // x0
  Il2CppObject *v76; // x0
  float v77; // s8
  CommonUI_o *v78; // x19
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x3
  System_Action_o *v82; // x21
  Il2CppObject *v83; // x19
  __int64 v84; // x1
  __int64 v85; // x2
  __int64 v86; // x3
  System_Action_o *v87; // x21
  CommonUI_o *v88; // x21
  ScrTerminalMap_o *v89; // x19
  __int64 v90; // x1
  __int64 v91; // x2
  __int64 v92; // x3
  System_Action_o *v93; // x21

  if ( (byte_4B182A0 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&eventId, callback);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&SceneJumpInfo_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v17, v18);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__DisplayClass199_0__FadeInAndTriggerEventEffects_b__0__, v21, v22);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__DisplayClass199_0__FadeInAndTriggerEventEffects_b__1__, v23, v24);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__DisplayClass199_0__FadeInAndTriggerEventEffects_b__4__, v25, v26);
    sub_1BCA7E0(&TerminalSceneComponent___c__DisplayClass199_0_TypeInfo, v27, v28);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v29, v30);
    byte_4B182A0 = 1;
  }
  v31 = sub_1BCAA2C(TerminalSceneComponent___c__DisplayClass199_0_TypeInfo, *(_QWORD *)&eventId, callback, method);
  System_Object___ctor((Il2CppObject *)v31, 0LL);
  if ( !v31 )
    goto LABEL_99;
  *(float *)(v31 + 16) = fadeTime;
  *(_QWORD *)(v31 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v31 + 24), (int64_t)this, v34, v35, v36, v37, v38, v39);
  *(_QWORD *)(v31 + 40) = callback;
  *(_DWORD *)(v31 + 32) = eventId;
  sub_1BCA784((PartyOrganizationUtility_o *)(v31 + 40), (int64_t)callback, v40, v41, v42, v43, v44, v45);
  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_99;
  v33 = *(unsigned int *)(v31 + 32);
  if ( mTerminalList->fields.isBackFromBlankEarthMap )
  {
    v49 = *(System_Action_o **)(v31 + 40);
LABEL_7:
    TerminalSceneComponent__FadeInAndTriggerEventEffectsNext(this, v33, v49, v47);
    return;
  }
  if ( (int)v33 >= 1 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v33);
    if ( !byte_4B13821 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v33, v46);
      byte_4B13821 = 1;
    }
    Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v33);
      Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
    }
    if ( Instance[1].fields.m_listUnloadScenes[5].monitor )
    {
      if ( !LODWORD(Instance[2].fields.targetRoot) )
        j_il2cpp_runtime_class_init_0(Instance, v33);
      if ( !byte_4B13821 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v33, v46);
        byte_4B13821 = 1;
      }
      Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v33);
        Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
      }
      monitor = Instance[1].fields.m_listUnloadScenes[5].monitor;
      if ( !monitor )
        goto LABEL_99;
      if ( monitor[4] == *(_DWORD *)(v31 + 32) )
      {
        if ( !LODWORD(Instance[2].fields.targetRoot) )
          j_il2cpp_runtime_class_init_0(Instance, v33);
        if ( !byte_4B13821 )
        {
          sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v33, v46);
          byte_4B13821 = 1;
        }
        Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v33);
          Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
        }
        v51 = Instance[1].fields.m_listUnloadScenes[5].monitor;
        if ( !v51 )
          goto LABEL_99;
        if ( v51[5] )
        {
          if ( !LODWORD(Instance[2].fields.targetRoot) )
            j_il2cpp_runtime_class_init_0(Instance, v33);
          if ( !byte_4B13821 )
          {
            sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v33, v46);
            byte_4B13821 = 1;
          }
          Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v33);
            Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
          }
          v52 = Instance[1].fields.m_listUnloadScenes[5].monitor;
          if ( v52 )
          {
            if ( v52[5] == 1 )
            {
              if ( !LODWORD(Instance[2].fields.targetRoot) )
                j_il2cpp_runtime_class_init_0(Instance, v33);
              if ( !byte_4B13821 )
              {
                sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v33, v46);
                byte_4B13821 = 1;
              }
              Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v33);
                Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
              }
              v53 = Instance[1].fields.m_listUnloadScenes[5].monitor;
              if ( !v53 )
                goto LABEL_99;
              v54 = v53[3];
              if ( v54
                && *(int *)(v54 + 24) >= 1
                && !(IsNullOrEmpty = System_String__IsNullOrEmpty(*(System_String_o **)(v54 + 32), 0LL)) )
              {
                if ( !*(_DWORD *)(v54 + 24) )
                  sub_1BCAA44(IsNullOrEmpty, v33);
                v56 = System_Int32__Parse(*(System_String_o **)(v54 + 32), 0LL) + 1;
              }
              else
              {
                v56 = 0;
              }
              v57 = *(_DWORD *)(v31 + 32);
              v58 = (SceneJumpInfo_o *)sub_1BCAA2C(SceneJumpInfo_TypeInfo, v33, v46, v47);
              SceneJumpInfo___ctor_39380944(v58, (System_String_o *)StringLiteral_1/*""*/, v57, v56, 0LL);
              Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
              if ( !Instance )
                goto LABEL_99;
              AvalonSceneManager__transitionScene(Instance, 72, 1, (Il2CppObject *)v58, 0LL);
              Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
            }
            if ( !LODWORD(Instance[2].fields.targetRoot) )
              j_il2cpp_runtime_class_init_0(Instance, v33);
            if ( !byte_4B13821 )
            {
              sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v33, v46);
              byte_4B13821 = 1;
            }
            v59 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v33);
              v59 = TerminalPramsManager_TypeInfo;
            }
            Instance = (AvalonSceneManager_o *)v59->static_fields->_SpecifiedChangeSceneInfo_k__BackingField;
            if ( Instance )
            {
              SpecifiedSceneInfo__InitParameter((SpecifiedSceneInfo_o *)Instance, 0LL);
              if ( !byte_4B13801 )
              {
                sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v60, v61);
                byte_4B13801 = 1;
              }
              v67 = TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v60);
                v67 = TerminalPramsManager_TypeInfo;
              }
              static_fields = v67->static_fields;
              static_fields->_SpecifiedChangeSceneInfo_k__BackingField = 0LL;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)&static_fields->_SpecifiedChangeSceneInfo_k__BackingField,
                0LL,
                v61,
                v62,
                v63,
                v64,
                v65,
                v66);
              LODWORD(v33) = *(_DWORD *)(v31 + 32);
              v49 = *(System_Action_o **)(v31 + 40);
              goto LABEL_7;
            }
          }
LABEL_99:
          sub_1BCAA3C(Instance, v33);
        }
      }
    }
  }
  if ( TerminalSceneComponent__IsEnabledMapOnEvent((TerminalSceneComponent_o *)Instance, *(_DWORD *)(v31 + 32), v46) )
  {
    Instance = (AvalonSceneManager_o *)this->fields.mTerminalMap;
    if ( !Instance )
      goto LABEL_99;
    if ( !ScrTerminalMap__IsMapModel((ScrTerminalMap_o *)Instance, 0LL) )
      goto LABEL_88;
    mTerminalMap = this->fields.mTerminalMap;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v33);
    if ( !byte_4B12FA4 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v33, v69);
      byte_4B12FA4 = 1;
    }
    Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v33);
      Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
    }
    items_high = HIDWORD(Instance[1].fields.m_listUnloadScenes[3].fields._items);
    if ( !byte_4B12FA5 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v33, v69);
      Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
      byte_4B12FA5 = 1;
    }
    if ( !LODWORD(Instance[2].fields.targetRoot) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v33);
      Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
    }
    if ( !mTerminalMap )
      goto LABEL_99;
    MapModelEntryAnimationName = ScrTerminalMap__GetMapModelEntryAnimationName(
                                   mTerminalMap,
                                   items_high,
                                   Instance[1].fields.m_listUnloadScenes[3].fields._size,
                                   0LL);
    if ( !byte_4B13804 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v72, v73);
      byte_4B13804 = 1;
    }
    v75 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v72);
      v75 = TerminalPramsManager_TypeInfo;
    }
    v75->static_fields->_MapModelClearQuestId_k__BackingField = 0;
    if ( !byte_4B13805 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v72, v73);
      v75 = TerminalPramsManager_TypeInfo;
      byte_4B13805 = 1;
    }
    if ( !v75->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v75, v72);
      v75 = TerminalPramsManager_TypeInfo;
    }
    v75->static_fields->_MapModelClearPhaseCount_k__BackingField = 0;
    if ( !System_String__IsNullOrEmpty(MapModelEntryAnimationName, 0LL) )
    {
      Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v88 = (CommonUI_o *)Instance;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v33);
      if ( !v88 )
        goto LABEL_99;
      CommonUI__maskFadein(v88, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
      v89 = this->fields.mTerminalMap;
      v93 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v90, v91, v92);
      System_Action___ctor(
        v93,
        (Il2CppObject *)v31,
        Method_TerminalSceneComponent___c__DisplayClass199_0__FadeInAndTriggerEventEffects_b__4__,
        0LL);
      if ( !v89 )
        goto LABEL_99;
      ScrTerminalMap__PlayMapModelEntryAnimation(v89, MapModelEntryAnimationName, v93, 0LL);
    }
    else
    {
LABEL_88:
      v76 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v77 = *(float *)(v31 + 16);
      v78 = (CommonUI_o *)v76;
      v82 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v79, v80, v81);
      System_Action___ctor(
        v82,
        (Il2CppObject *)v31,
        Method_TerminalSceneComponent___c__DisplayClass199_0__FadeInAndTriggerEventEffects_b__1__,
        0LL);
      if ( !v78 )
        goto LABEL_99;
      CommonUI__maskFadein(v78, v77, v82, 0LL);
    }
  }
  else
  {
    v83 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    v87 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v84, v85, v86);
    System_Action___ctor(
      v87,
      (Il2CppObject *)v31,
      Method_TerminalSceneComponent___c__DisplayClass199_0__FadeInAndTriggerEventEffects_b__0__,
      0LL);
    if ( !v83 )
      goto LABEL_99;
    QuestAfterAction__LoadVoice((QuestAfterAction_o *)v83, v87, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalSceneComponent__FadeInAndTriggerEventEffectsNext(
        TerminalSceneComponent_o *this,
        int32_t eventId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x22
  DataManager_o *Instance; // x0
  __int64 v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  System_Action_o **v30; // x20
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  System_Action_o *v37; // x2
  Il2CppObject *v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  struct TitleInfoControl_o *mTitleInfo; // x19
  Il2CppObject *v42; // x20
  System_Action_o *v43; // x21
  __int64 v44; // x2
  __int64 v45; // x3
  struct TitleInfoControl_o *v46; // x23
  TerminalPramsManager_c *v47; // x0
  System_Action_o *v48; // x19
  System_Action_o *v49; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B182A3 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&eventId, callback);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDetailMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v13, v14);
    sub_1BCA7E0(
      &Method_TerminalSceneComponent___c__DisplayClass202_0__FadeInAndTriggerEventEffectsNext_b__0__,
      v15,
      v16);
    sub_1BCA7E0(
      &Method_TerminalSceneComponent___c__DisplayClass202_0__FadeInAndTriggerEventEffectsNext_b__1__,
      v17,
      v18);
    sub_1BCA7E0(&TerminalSceneComponent___c__DisplayClass202_0_TypeInfo, v19, v20);
    byte_4B182A3 = 1;
  }
  entity = 0LL;
  v21 = sub_1BCAA2C(TerminalSceneComponent___c__DisplayClass202_0_TypeInfo, *(_QWORD *)&eventId, callback, method);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  if ( !v21 )
    goto LABEL_68;
  *(_QWORD *)(v21 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 16), (int64_t)this, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v21 + 24) = callback;
  v30 = (System_Action_o **)(v21 + 24);
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 24), (int64_t)callback, v31, v32, v33, v34, v35, v36);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_68;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          eventId,
          (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    goto LABEL_64;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_68;
  if ( EventDetailEntity__IsTimeStatusRecord((EventDetailEntity_o *)entity, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.mTitleInfo;
    if ( !Instance )
      goto LABEL_68;
    TitleInfoControl__PlayEventTimeStateAnime((TitleInfoControl_o *)Instance, 0LL);
  }
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_68:
    sub_1BCAA3C(Instance, v23);
  if ( EventDetailEntity__isRaidDefeatCount((EventDetailEntity_o *)entity, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.mTitleInfo;
    if ( Instance )
    {
      TitleInfoControl__PlayEventRaidDefeatedEffect((TitleInfoControl_o *)Instance, eventId, 0, *v30, 0LL);
      return;
    }
    goto LABEL_68;
  }
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_68;
  if ( EventDetailEntity__IsSuperBoss((EventDetailEntity_o *)entity, 0LL) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_68;
    if ( !EventDetailEntity__isTower((EventDetailEntity_o *)entity, 0LL) )
    {
      Instance = (DataManager_o *)this->fields.mTitleInfo;
      if ( !Instance )
        goto LABEL_68;
      TitleInfoControl__CheckSuperBossHpAnim((TitleInfoControl_o *)Instance, *v30, 0LL);
      return;
    }
  }
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_68;
  if ( !EventDetailEntity__IsSuperBoss((EventDetailEntity_o *)entity, 0LL) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_68;
    if ( EventDetailEntity__isTower((EventDetailEntity_o *)entity, 0LL) )
    {
      Instance = (DataManager_o *)this->fields.mTitleInfo;
      if ( !Instance )
        goto LABEL_68;
      v37 = *v30;
      v38 = entity;
LABEL_31:
      TitleInfoControl__EventTowerStart((TitleInfoControl_o *)Instance, (EventDetailEntity_o *)v38, v37, 0LL);
      return;
    }
  }
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_68;
  if ( EventDetailEntity__IsSuperBoss((EventDetailEntity_o *)entity, 0LL) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_68;
    if ( EventDetailEntity__isTower((EventDetailEntity_o *)entity, 0LL) )
    {
      mTitleInfo = this->fields.mTitleInfo;
      v42 = entity;
      v43 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v23, v39, v40);
      System_Action___ctor(
        v43,
        (Il2CppObject *)v21,
        Method_TerminalSceneComponent___c__DisplayClass202_0__FadeInAndTriggerEventEffectsNext_b__0__,
        0LL);
      if ( !mTitleInfo )
        goto LABEL_68;
      Instance = (DataManager_o *)mTitleInfo;
      v38 = v42;
      v37 = v43;
      goto LABEL_31;
    }
  }
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_68;
  Instance = (DataManager_o *)EventDetailEntity__IsGroupPoint((EventDetailEntity_o *)entity, 0LL);
  v46 = this->fields.mTitleInfo;
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !v46 )
      goto LABEL_68;
    TitleInfoControl__CheckEventPointGroupReward(this->fields.mTitleInfo, eventId, *v30, 0LL);
    v47 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v23);
      v47 = TerminalPramsManager_TypeInfo;
    }
    if ( v47->static_fields->joinGroupId >= 1 )
    {
      Instance = (DataManager_o *)this->fields.mTitleInfo;
      if ( !Instance )
        goto LABEL_68;
      TitleInfoControl__vsGaugeEvent((TitleInfoControl_o *)Instance, eventId, 0LL);
    }
    return;
  }
  if ( !v46 )
    goto LABEL_68;
  if ( v46->fields.needPlayDailyPointItemEffect )
  {
    v48 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v23, v44, v45);
    System_Action___ctor(
      v48,
      (Il2CppObject *)v21,
      Method_TerminalSceneComponent___c__DisplayClass202_0__FadeInAndTriggerEventEffectsNext_b__1__,
      0LL);
    TitleInfoControl__UpdateDailyPointWithEffect(v46, v48, 0LL);
    return;
  }
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_68;
  if ( EventDetailEntity__IsEventActivityPoint((EventDetailEntity_o *)entity, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.mTitleInfo;
    if ( !Instance )
      goto LABEL_68;
    TitleInfoControl__CheckEventPointGaugeAnim((TitleInfoControl_o *)Instance, (EventDetailEntity_o *)entity, *v30, 0LL);
    return;
  }
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_68;
  if ( EventDetailEntity__IsEventPanel((EventDetailEntity_o *)entity, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.mTitleInfo;
    if ( !Instance )
      goto LABEL_68;
    TitleInfoControl__CheckEventSubmarineStatusAnim(
      (TitleInfoControl_o *)Instance,
      (EventDetailEntity_o *)entity,
      *v30,
      0LL);
    return;
  }
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_68;
  if ( EventDetailEntity__IsEventBoardGame((EventDetailEntity_o *)entity, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.mTerminalMap;
    if ( !Instance )
      goto LABEL_68;
    if ( Instance[2].fields.datalist )
    {
      ScrTerminalMap__UpdateEventBoardGame((ScrTerminalMap_o *)Instance, *v30, 0LL);
      return;
    }
    v49 = *v30;
    goto LABEL_65;
  }
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_68;
  if ( !EventDetailEntity__IsEventRiverProgress((EventDetailEntity_o *)entity, 0LL) )
    goto LABEL_64;
  Instance = (DataManager_o *)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_68;
  if ( !TitleInfoControl__IsPlayEventUIAnimation((TitleInfoControl_o *)Instance, 1, 0LL) )
  {
LABEL_64:
    v49 = *v30;
LABEL_65:
    ActionExtensions__Call(v49, 0LL);
    return;
  }
  Instance = (DataManager_o *)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_68;
  TitleInfoControl__StartEventUIAnimation((TitleInfoControl_o *)Instance, 1, *v30, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalSceneComponent__FadeinWorldDispNoneExecuteUnusedAssets(
        TerminalSceneComponent_o *this,
        bool isExecuteUnusedAssets,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  AvalonSceneManager_c *v7; // x0
  System_Collections_IEnumerator_o *v8; // x1

  if ( (byte_4B18297 & 1) == 0 )
  {
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, isExecuteUnusedAssets, endAct);
    byte_4B18297 = 1;
  }
  v7 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, isExecuteUnusedAssets);
    v7 = AvalonSceneManager_TypeInfo;
  }
  v8 = TerminalSceneComponent__coFadein_WorldDisp(
         this,
         v7->static_fields->DEFAULT_FADE_TIME,
         endAct,
         isExecuteUnusedAssets,
         method);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v8, 0LL);
}


void __fastcall TerminalSceneComponent__Fadein_MapDisp(
        TerminalSceneComponent_o *this,
        float fade_time,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v4; // x3
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x20
  __int64 v17; // x0
  __int64 v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  const MethodInfo *v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  Il2CppObject *Instance; // x19
  AvalonSceneManager_c *v36; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v38; // x21

  if ( (byte_4B1829B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, end_act, method);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__DisplayClass194_0__Fadein_MapDisp_b__0__, v12, v13);
    sub_1BCA7E0(&TerminalSceneComponent___c__DisplayClass194_0_TypeInfo, v14, v15);
    byte_4B1829B = 1;
  }
  v16 = sub_1BCAA2C(TerminalSceneComponent___c__DisplayClass194_0_TypeInfo, end_act, method, v4);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_10;
  *(_QWORD *)(v16 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v16 + 16), (int64_t)this, v19, v20, v21, v22, v23, v24);
  *(_QWORD *)(v16 + 24) = end_act;
  sub_1BCA784((PartyOrganizationUtility_o *)(v16 + 24), (int64_t)end_act, v25, v26, v27, v28, v29, v30);
  if ( this->fields._FirstFadeTime_k__BackingField > 0.0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v36 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v32);
      v36 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v36->static_fields->DEFAULT_FADE_TIME;
    v38 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v32, v33, v34);
    System_Action___ctor(
      v38,
      (Il2CppObject *)v16,
      Method_TerminalSceneComponent___c__DisplayClass194_0__Fadein_MapDisp_b__0__,
      0LL);
    if ( Instance )
    {
      CommonUI__maskFadeChangeColor((CommonUI_o *)Instance, 2, DEFAULT_FADE_TIME, v38, 0LL);
      return;
    }
LABEL_10:
    sub_1BCAA3C(v17, v18);
  }
  TerminalSceneComponent__Fadein_MapDisp_Load(this, fade_time, *(System_Action_o **)(v16 + 24), v31);
}


void __fastcall TerminalSceneComponent__Fadein_MapDisp_Load(
        TerminalSceneComponent_o *this,
        float fade_time,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v4; // x3
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x20
  void *mTerminalMap; // x0
  const MethodInfo *v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  __int64 v33; // x2
  TerminalPramsManager_c *v34; // x0
  __int64 v35; // x8
  __int64 v36; // x8
  WarEntity_o *v37; // x21
  __int64 v38; // x1
  __int64 v39; // x2
  TerminalPramsManager_c *v40; // x0
  _BOOL4 isInvisibleConnectAndLoad; // w22
  TitleInfoControl_o *mTitleInfo; // x19
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  System_Action_o *v46; // x22

  if ( (byte_4B1829C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, end_act, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__DisplayClass195_0__Fadein_MapDisp_Load_b__0__, v14, v15);
    sub_1BCA7E0(&TerminalSceneComponent___c__DisplayClass195_0_TypeInfo, v16, v17);
    byte_4B1829C = 1;
  }
  v18 = sub_1BCAA2C(TerminalSceneComponent___c__DisplayClass195_0_TypeInfo, end_act, method, v4);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_32;
  *(_QWORD *)(v18 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v18 + 16), (int64_t)this, v21, v22, v23, v24, v25, v26);
  *(_QWORD *)(v18 + 32) = end_act;
  *(float *)(v18 + 24) = fade_time;
  sub_1BCA784((PartyOrganizationUtility_o *)(v18 + 32), (int64_t)end_act, v27, v28, v29, v30, v31, v32);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v20);
  if ( !byte_4B12054 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v20, v33);
    byte_4B12054 = 1;
  }
  v34 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v20);
    v34 = TerminalPramsManager_TypeInfo;
  }
  if ( !v34->static_fields->_IsDispOnly_k__BackingField )
  {
    TerminalSceneComponent__EndAuto(this, v20);
    goto LABEL_22;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v20);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v20, v33);
    byte_4B10F83 = 1;
  }
  mTerminalMap = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v20);
    mTerminalMap = TerminalSceneComponent_TypeInfo;
  }
  v35 = **((_QWORD **)mTerminalMap + 23);
  if ( !v35 || (v36 = *(_QWORD *)(v35 + 264)) == 0 || (mTerminalMap = *(void **)(v36 + 552)) == 0LL )
LABEL_32:
    sub_1BCAA3C(mTerminalMap, v20);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mTerminalMap, 1, 0LL);
LABEL_22:
  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_32;
  v37 = (WarEntity_o *)*((_QWORD *)mTerminalMap + 45);
  ScrTerminalMap__SetDisp((ScrTerminalMap_o *)mTerminalMap, 1, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v38);
  if ( !byte_4B13445 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v38, v39);
    byte_4B13445 = 1;
  }
  v40 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v38);
    v40 = TerminalPramsManager_TypeInfo;
  }
  isInvisibleConnectAndLoad = v40->static_fields->isInvisibleConnectAndLoad;
  mTerminalMap = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_32;
  CommonUI__SetLoadMode((CommonUI_o *)mTerminalMap, !isInvisibleConnectAndLoad, 0LL);
  mTitleInfo = this->fields.mTitleInfo;
  v46 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v43, v44, v45);
  System_Action___ctor(
    v46,
    (Il2CppObject *)v18,
    Method_TerminalSceneComponent___c__DisplayClass195_0__Fadein_MapDisp_Load_b__0__,
    0LL);
  if ( !mTitleInfo )
    goto LABEL_32;
  TitleInfoControl__SetActiveEventInfo(mTitleInfo, v37, 32, v46, 0LL);
}


void __fastcall TerminalSceneComponent__Fadein_MapDisp_Start(
        TerminalSceneComponent_o *this,
        float fade_time,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v4; // x3
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x1
  __int64 v59; // x2
  int64_t v60; // x20
  __int64 Instance; // x0
  _BOOL8 v62; // x1
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  int64_t *v69; // x21
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  struct ScrTerminalMap_o *mTerminalMap; // x8
  int64_t mWarEnt; // x1
  int64_t v84; // x22
  struct ScrTerminalMap_o *v85; // x8
  MapEntity_o *mMapEnt; // x23
  System_String_o *ActiveStateName; // x24
  __int64 v88; // x2
  __int64 v89; // x3
  System_String_o *PrioredBgmName; // x0
  const MethodInfo *v91; // x2
  TerminalPramsManager_c *v92; // x0
  struct ScrTerminalMap_o *v93; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  TerminalPramsManager_c *v95; // x0
  __int64 v96; // x21
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7
  Il2CppObject **v103; // x22
  __int64 v104; // x2
  __int64 v105; // x8
  __int64 v106; // x8
  __int64 v107; // x2
  __int64 v108; // x8
  __int64 v109; // x8
  __int64 v110; // x8
  __int64 v111; // x8
  __int64 v112; // x0
  Il2CppObject *v113; // x24
  __int64 v114; // x20
  __int64 v115; // x1
  __int64 v116; // x2
  __int64 v117; // x3
  System_Action_object__o *v118; // x23
  int64_t v119; // x2
  int32_t v120; // w3
  System_String_o *v121; // x4
  BattleSetupInfo_o *v122; // x5
  FollowerInfo_o *v123; // x6
  PartyListViewItem_o *v124; // x7
  Il2CppObject *v125; // x23
  __int64 v126; // x1
  __int64 v127; // x2
  __int64 v128; // x3
  System_Action_object__o *v129; // x22
  int64_t v130; // x2
  int32_t v131; // w3
  System_String_o *v132; // x4
  BattleSetupInfo_o *v133; // x5
  FollowerInfo_o *v134; // x6
  PartyListViewItem_o *v135; // x7
  int64_t v136; // x2
  __int64 v137; // x3
  System_String_o *v138; // x4
  BattleSetupInfo_o *v139; // x5
  FollowerInfo_o *v140; // x6
  PartyListViewItem_o *v141; // x7
  System_Action_object__o *v142; // x22
  Il2CppObject *v143; // x23
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int64_t v145; // x2
  int32_t v146; // w3
  System_String_o *v147; // x4
  BattleSetupInfo_o *v148; // x5
  FollowerInfo_o *v149; // x6
  PartyListViewItem_o *v150; // x7
  Il2CppObject *v151; // x24
  __int64 v152; // x1
  __int64 v153; // x2
  __int64 v154; // x3
  System_Action_object__o *v155; // x22
  int64_t v156; // x2
  int32_t v157; // w3
  System_String_o *v158; // x4
  BattleSetupInfo_o *v159; // x5
  FollowerInfo_o *v160; // x6
  PartyListViewItem_o *v161; // x7
  __int64 v162; // x1
  __int64 v163; // x2
  __int64 v164; // x3
  ActionChain_o *v165; // x22
  __int64 v166; // x20
  __int64 v167; // x1
  __int64 v168; // x2
  __int64 v169; // x3
  System_Action_o *v170; // x23
  int64_t v171; // x2
  int32_t v172; // w3
  System_String_o *v173; // x4
  BattleSetupInfo_o *v174; // x5
  FollowerInfo_o *v175; // x6
  PartyListViewItem_o *v176; // x7
  ChainableActionBase_o *v177; // x0
  System_Action_array *v178; // x1
  int32_t v179; // w21
  System_Action_o *v180; // x22
  const MethodInfo *v181; // x3
  __int64 v182; // x22
  Il2CppObject *v183; // x24
  __int64 v184; // x1
  __int64 v185; // x2
  __int64 v186; // x3
  System_Action_object__o *v187; // x23
  int64_t v188; // x2
  int32_t v189; // w3
  System_String_o *v190; // x4
  BattleSetupInfo_o *v191; // x5
  FollowerInfo_o *v192; // x6
  PartyListViewItem_o *v193; // x7
  int64_t v194; // x2
  __int64 v195; // x3
  System_String_o *v196; // x4
  BattleSetupInfo_o *v197; // x5
  FollowerInfo_o *v198; // x6
  PartyListViewItem_o *v199; // x7
  System_Action_object__o *v200; // x23
  Il2CppObject *v201; // x24
  struct TerminalSceneComponent___c_StaticFields *v202; // x0
  int64_t v203; // x2
  int32_t v204; // w3
  System_String_o *v205; // x4
  BattleSetupInfo_o *v206; // x5
  FollowerInfo_o *v207; // x6
  PartyListViewItem_o *v208; // x7
  int64_t v209; // x2
  __int64 v210; // x3
  System_String_o *v211; // x4
  BattleSetupInfo_o *v212; // x5
  FollowerInfo_o *v213; // x6
  PartyListViewItem_o *v214; // x7
  System_Action_object__o *v215; // x23
  Il2CppObject *v216; // x24
  struct TerminalSceneComponent___c_StaticFields *v217; // x0
  int64_t v218; // x2
  int32_t v219; // w3
  System_String_o *v220; // x4
  BattleSetupInfo_o *v221; // x5
  FollowerInfo_o *v222; // x6
  PartyListViewItem_o *v223; // x7
  __int64 v224; // x1
  __int64 v225; // x2
  __int64 v226; // x3
  System_Action_object__o *v227; // x23
  int64_t v228; // x2
  int32_t v229; // w3
  System_String_o *v230; // x4
  BattleSetupInfo_o *v231; // x5
  FollowerInfo_o *v232; // x6
  PartyListViewItem_o *v233; // x7
  __int64 v234; // x1
  __int64 v235; // x2
  __int64 v236; // x3
  ActionChain_o *v237; // x20
  int64_t v238; // x2
  int32_t v239; // w3
  System_String_o *v240; // x4
  BattleSetupInfo_o *v241; // x5
  FollowerInfo_o *v242; // x6
  PartyListViewItem_o *v243; // x7
  System_Action_array *v244; // x22
  int64_t v245; // x1

  if ( (byte_4B1829D & 1) == 0 )
  {
    sub_1BCA7E0(&ActionChain_TypeInfo, end_act, method);
    sub_1BCA7E0(&System_Action___TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Action_Action____TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Action_Action__TypeInfo, v12, v13);
    sub_1BCA7E0(&System_Action_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_CommonUI_StartLoginMessages__, v16, v17);
    sub_1BCA7E0(&Method_QuestAfterAction_Play__, v18, v19);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v20, v21);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v22, v23);
    sub_1BCA7E0(&SoundManager_TypeInfo, v24, v25);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v26, v27);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v28, v29);
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v30, v31);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__196_0__, v32, v33);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__196_1__, v34, v35);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__196_6__, v36, v37);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__DisplayClass196_0__Fadein_MapDisp_Start_b__2__, v38, v39);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__DisplayClass196_0__Fadein_MapDisp_Start_b__3__, v40, v41);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__DisplayClass196_0__Fadein_MapDisp_Start_b__4__, v42, v43);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__DisplayClass196_0__Fadein_MapDisp_Start_b__5__, v44, v45);
    sub_1BCA7E0(&TerminalSceneComponent___c__DisplayClass196_0_TypeInfo, v46, v47);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__DisplayClass196_1__Fadein_MapDisp_Start_b__7__, v48, v49);
    sub_1BCA7E0(&TerminalSceneComponent___c__DisplayClass196_1_TypeInfo, v50, v51);
    sub_1BCA7E0(&TerminalSceneComponent___c_TypeInfo, v52, v53);
    sub_1BCA7E0(&StringLiteral_3432/*"CAPTER INIT"*/, v54, v55);
    sub_1BCA7E0(&StringLiteral_3431/*"CAPTER CREATE"*/, v56, v57);
    sub_1BCA7E0(&StringLiteral_3433/*"CAPTER WAIT"*/, v58, v59);
    byte_4B1829D = 1;
  }
  v60 = sub_1BCAA2C(TerminalSceneComponent___c__DisplayClass196_0_TypeInfo, end_act, method, v4);
  System_Object___ctor((Il2CppObject *)v60, 0LL);
  if ( !v60 )
    goto LABEL_160;
  *(_QWORD *)(v60 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v60 + 16), (int64_t)this, v63, v64, v65, v66, v67, v68);
  *(_QWORD *)(v60 + 40) = end_act;
  v69 = (int64_t *)(v60 + 40);
  *(float *)(v60 + 32) = fade_time;
  sub_1BCA784((PartyOrganizationUtility_o *)(v60 + 40), (int64_t)end_act, v70, v71, v72, v73, v74, v75);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_160;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_160;
  mWarEnt = (int64_t)mTerminalMap->fields.mWarEnt;
  *(_QWORD *)(v60 + 24) = mWarEnt;
  v84 = v60 + 24;
  sub_1BCA784((PartyOrganizationUtility_o *)(v60 + 24), mWarEnt, v76, v77, v78, v79, v80, v81);
  v85 = this->fields.mTerminalMap;
  if ( !v85 )
    goto LABEL_160;
  Instance = (__int64)this->fields.mTerminalList;
  if ( !Instance )
    goto LABEL_160;
  mMapEnt = v85->fields.mMapEnt;
  Instance = (__int64)ScrTerminalListTop__mfGetMyFsmP((ScrTerminalListTop_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_160;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)Instance, 0LL);
  v62 = System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_3431/*"CAPTER CREATE"*/, 0LL)
     || System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_3432/*"CAPTER INIT"*/, 0LL)
     || System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_3433/*"CAPTER WAIT"*/, 0LL);
  Instance = (__int64)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_160;
  TitleInfoControl__setBackBtnSprite_37887988((TitleInfoControl_o *)Instance, v62, 0, 0, 0LL);
  Instance = (__int64)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_160;
  TitleInfoControl__FrameIn((TitleInfoControl_o *)Instance, 0, 0LL);
  MainMenuBar__FrameIn(0, 0LL);
  Instance = (__int64)this->fields.mPlayerStatus;
  if ( !Instance )
    goto LABEL_160;
  ScrPlayerStatus__FrameIn((ScrPlayerStatus_o *)Instance, 0, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    goto LABEL_160;
  if ( *(_BYTE *)(Instance + 193) )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v62);
    SoundManager__stopBgm(0LL);
  }
  else
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v62);
    if ( !byte_4B13383 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v62, v88);
      byte_4B13383 = 1;
    }
    Instance = (__int64)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v62);
      Instance = (__int64)TerminalPramsManager_TypeInfo;
    }
    if ( !*(_BYTE *)(*(_QWORD *)(Instance + 184) + 104LL) )
    {
      if ( !mMapEnt )
        goto LABEL_160;
      PrioredBgmName = MapEntity__GetPrioredBgmName(mMapEnt, 0LL);
      TerminalSceneComponent__playBgm(this, PrioredBgmName, v91);
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v62);
  if ( !byte_4B13383 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v62, v88);
    byte_4B13383 = 1;
  }
  v92 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v62);
    v92 = TerminalPramsManager_TypeInfo;
  }
  if ( v92->static_fields->_IsPlayScriptWithMap_k__BackingField )
  {
    Instance = (__int64)this->fields.mTerminalMap;
    if ( !Instance )
      goto LABEL_160;
    ScrTerminalMap__AllMaskStart((ScrTerminalMap_o *)Instance, 0, 1, 0LL);
    MainMenuBar__FrameOut(0, 0LL);
    Instance = (__int64)this->fields.mTitleInfo;
    if ( !Instance )
      goto LABEL_160;
    TitleInfoControl__FrameOut((TitleInfoControl_o *)Instance, 0, 0LL);
    Instance = (__int64)this->fields.mPlayerStatus;
    if ( !Instance )
      goto LABEL_160;
    ScrPlayerStatus__FrameOut((ScrPlayerStatus_o *)Instance, 1, 0LL);
    v92 = TerminalPramsManager_TypeInfo;
  }
  if ( !v92->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v92, v62);
  if ( !byte_4B12054 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v62, v88);
    byte_4B12054 = 1;
  }
  Instance = (__int64)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v62);
    Instance = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( *(_BYTE *)(*(_QWORD *)(Instance + 184) + 103LL) )
  {
    if ( !*(_DWORD *)(Instance + 224) )
      j_il2cpp_runtime_class_init_0(Instance, v62);
    if ( !byte_4B13370 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v62, v88);
      byte_4B13370 = 1;
    }
    Instance = (__int64)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v62);
      Instance = (__int64)TerminalPramsManager_TypeInfo;
    }
    if ( *(_BYTE *)(*(_QWORD *)(Instance + 184) + 106LL) )
    {
      v93 = this->fields.mTerminalMap;
      if ( !v93 )
        goto LABEL_160;
      Instance = (__int64)v93->fields.spotMaskObj;
      if ( !Instance )
        goto LABEL_160;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      MainMenuBar__FrameOut(0, 0LL);
      Instance = (__int64)this->fields.mTitleInfo;
      if ( !Instance )
        goto LABEL_160;
      TitleInfoControl__FrameOut((TitleInfoControl_o *)Instance, 0, 0LL);
      Instance = (__int64)this->fields.mPlayerStatus;
      if ( !Instance )
        goto LABEL_160;
      ScrPlayerStatus__FrameOut((ScrPlayerStatus_o *)Instance, 1, 0LL);
      mTerminalList = this->fields.mTerminalList;
      if ( !mTerminalList )
        goto LABEL_160;
      Instance = (__int64)mTerminalList->fields.mQuestBoardListViewManager;
      if ( !Instance )
        goto LABEL_160;
      QuestBoardListViewManager__SetMode((QuestBoardListViewManager_o *)Instance, 4, 0LL, 0, 0, 0LL);
      Instance = (__int64)TerminalPramsManager_TypeInfo;
    }
  }
  if ( !*(_DWORD *)(Instance + 224) )
    j_il2cpp_runtime_class_init_0(Instance, v62);
  if ( !byte_4B13370 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v62, v88);
    byte_4B13370 = 1;
  }
  v95 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v62);
    v95 = TerminalPramsManager_TypeInfo;
  }
  if ( v95->static_fields->_IsScriptDisp_k__BackingField )
    goto LABEL_136;
  if ( !v95->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v95, v62);
  if ( !byte_4B12054 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v62, v88);
    byte_4B12054 = 1;
  }
  Instance = (__int64)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v62);
    Instance = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( *(_BYTE *)(*(_QWORD *)(Instance + 184) + 103LL) )
  {
    v96 = sub_1BCAA2C(TerminalSceneComponent___c__DisplayClass196_1_TypeInfo, v62, v88, v89);
    System_Object___ctor((Il2CppObject *)v96, 0LL);
    if ( v96 )
    {
      *(_QWORD *)(v96 + 24) = v60;
      v103 = (Il2CppObject **)(v96 + 24);
      sub_1BCA784((PartyOrganizationUtility_o *)(v96 + 24), v60, v97, v98, v99, v100, v101, v102);
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v62);
      if ( !byte_4B10F83 )
      {
        sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v62, v104);
        byte_4B10F83 = 1;
      }
      Instance = (__int64)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v62);
        Instance = (__int64)TerminalSceneComponent_TypeInfo;
      }
      v105 = **(_QWORD **)(Instance + 184);
      if ( v105 )
      {
        v106 = *(_QWORD *)(v105 + 264);
        if ( v106 )
        {
          Instance = *(_QWORD *)(v106 + 552);
          if ( Instance )
          {
            *(_BYTE *)(v96 + 16) = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
            Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
            if ( Instance )
            {
              QuestAfterAction__Init((QuestAfterAction_o *)Instance, 0LL);
              Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
              if ( Instance )
              {
                QuestAfterAction__CreateCommandBuf((QuestAfterAction_o *)Instance, 1, 0LL);
                Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
                if ( Instance )
                {
                  if ( QuestAfterAction__IsActiveCommand((QuestAfterAction_o *)Instance, 0LL) )
                  {
                    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v62);
                    if ( !byte_4B10F83 )
                    {
                      sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v62, v107);
                      byte_4B10F83 = 1;
                    }
                    Instance = (__int64)TerminalSceneComponent_TypeInfo;
                    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v62);
                      Instance = (__int64)TerminalSceneComponent_TypeInfo;
                    }
                    v108 = **(_QWORD **)(Instance + 184);
                    if ( !v108 )
                      goto LABEL_160;
                    v109 = *(_QWORD *)(v108 + 264);
                    if ( !v109 )
                      goto LABEL_160;
                    Instance = *(_QWORD *)(v109 + 552);
                    if ( !Instance )
                      goto LABEL_160;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                  }
                  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v62);
                  if ( !byte_4B10F83 )
                  {
                    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v62, v107);
                    byte_4B10F83 = 1;
                  }
                  Instance = (__int64)TerminalSceneComponent_TypeInfo;
                  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v62);
                    Instance = (__int64)TerminalSceneComponent_TypeInfo;
                  }
                  v110 = **(_QWORD **)(Instance + 184);
                  if ( v110 )
                  {
                    v111 = *(_QWORD *)(v110 + 264);
                    if ( v111 )
                    {
                      Instance = *(_QWORD *)(v111 + 552);
                      if ( Instance )
                      {
                        if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
                        {
                          Instance = (__int64)this->fields.mTerminalMap;
                          if ( !Instance )
                            goto LABEL_160;
                          ScrTerminalMap__AllMaskStart((ScrTerminalMap_o *)Instance, 0, 1, 0LL);
                        }
                        v112 = sub_1BCA888(System_Action_Action____TypeInfo, 4LL);
                        v113 = *v103;
                        v114 = v112;
                        v118 = (System_Action_object__o *)sub_1BCAA2C(System_Action_Action__TypeInfo, v115, v116, v117);
                        System_Action_object____ctor(
                          v118,
                          v113,
                          Method_TerminalSceneComponent___c__DisplayClass196_0__Fadein_MapDisp_Start_b__4__,
                          0LL);
                        if ( v114 )
                        {
                          if ( *(_DWORD *)(v114 + 24) )
                          {
                            *(_QWORD *)(v114 + 32) = v118;
                            sub_1BCA784(
                              (PartyOrganizationUtility_o *)(v114 + 32),
                              (int64_t)v118,
                              v119,
                              v120,
                              v121,
                              v122,
                              v123,
                              v124);
                            v125 = *v103;
                            v129 = (System_Action_object__o *)sub_1BCAA2C(
                                                                System_Action_Action__TypeInfo,
                                                                v126,
                                                                v127,
                                                                v128);
                            System_Action_object____ctor(
                              v129,
                              v125,
                              Method_TerminalSceneComponent___c__DisplayClass196_0__Fadein_MapDisp_Start_b__5__,
                              0LL);
                            if ( *(_DWORD *)(v114 + 24) > 1u )
                            {
                              *(_QWORD *)(v114 + 40) = v129;
                              sub_1BCA784(
                                (PartyOrganizationUtility_o *)(v114 + 40),
                                (int64_t)v129,
                                v130,
                                v131,
                                v132,
                                v133,
                                v134,
                                v135);
                              Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
                              if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
                              {
                                j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo, v62);
                                Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
                              }
                              v142 = *(System_Action_object__o **)(*(_QWORD *)(Instance + 184) + 16LL);
                              if ( !v142 )
                              {
                                if ( !*(_DWORD *)(Instance + 224) )
                                {
                                  j_il2cpp_runtime_class_init_0(Instance, v62);
                                  Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
                                }
                                v143 = **(Il2CppObject ***)(Instance + 184);
                                v142 = (System_Action_object__o *)sub_1BCAA2C(
                                                                    System_Action_Action__TypeInfo,
                                                                    v62,
                                                                    v136,
                                                                    v137);
                                System_Action_object____ctor(
                                  v142,
                                  v143,
                                  Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__196_6__,
                                  0LL);
                                static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
                                static_fields->__9__196_6 = (struct System_Action_Action__o *)v142;
                                sub_1BCA784(
                                  (PartyOrganizationUtility_o *)&static_fields->__9__196_6,
                                  (int64_t)v142,
                                  v145,
                                  v146,
                                  v147,
                                  v148,
                                  v149,
                                  v150);
                              }
                              if ( *(_DWORD *)(v114 + 24) > 2u )
                              {
                                *(_QWORD *)(v114 + 48) = v142;
                                sub_1BCA784(
                                  (PartyOrganizationUtility_o *)(v114 + 48),
                                  (int64_t)v142,
                                  v136,
                                  v137,
                                  v138,
                                  v139,
                                  v140,
                                  v141);
                                v151 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
                                v155 = (System_Action_object__o *)sub_1BCAA2C(
                                                                    System_Action_Action__TypeInfo,
                                                                    v152,
                                                                    v153,
                                                                    v154);
                                System_Action_object____ctor(v155, v151, Method_QuestAfterAction_Play__, 0LL);
                                if ( *(_DWORD *)(v114 + 24) > 3u )
                                {
                                  *(_QWORD *)(v114 + 56) = v155;
                                  sub_1BCA784(
                                    (PartyOrganizationUtility_o *)(v114 + 56),
                                    (int64_t)v155,
                                    v156,
                                    v157,
                                    v158,
                                    v159,
                                    v160,
                                    v161);
                                  v165 = (ActionChain_o *)sub_1BCAA2C(ActionChain_TypeInfo, v162, v163, v164);
                                  ActionChain___ctor_47118216(v165, (System_Action_Action__array *)v114, 0LL);
                                  v166 = sub_1BCA888(System_Action___TypeInfo, 1LL);
                                  v170 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v167, v168, v169);
                                  System_Action___ctor(
                                    v170,
                                    (Il2CppObject *)v96,
                                    Method_TerminalSceneComponent___c__DisplayClass196_1__Fadein_MapDisp_Start_b__7__,
                                    0LL);
                                  if ( !v166 )
                                    goto LABEL_160;
                                  if ( *(_DWORD *)(v166 + 24) )
                                  {
                                    *(_QWORD *)(v166 + 32) = v170;
                                    sub_1BCA784(
                                      (PartyOrganizationUtility_o *)(v166 + 32),
                                      (int64_t)v170,
                                      v171,
                                      v172,
                                      v173,
                                      v174,
                                      v175,
                                      v176);
                                    if ( !v165 )
                                      goto LABEL_160;
                                    v177 = (ChainableActionBase_o *)v165;
                                    v178 = (System_Action_array *)v166;
                                    goto LABEL_127;
                                  }
                                }
                              }
                            }
                          }
LABEL_161:
                          sub_1BCAA44(Instance, v62);
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
LABEL_160:
    sub_1BCAA3C(Instance, v62);
  }
  if ( this->fields.mIsStart_LoginBonusWhiteBg )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v62);
    Instance = TutorialFlag__Get_38402052(102, 0LL);
    if ( (Instance & 1) != 0 && !this->fields.isTutorialAfter )
    {
      this->fields.mIsStart_LoginBonusWhiteBg = 0;
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__SetupLoginResultData((CommonUI_o *)Instance, 0LL, 0LL);
        v182 = sub_1BCA888(System_Action_Action____TypeInfo, 4LL);
        v183 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v187 = (System_Action_object__o *)sub_1BCAA2C(System_Action_Action__TypeInfo, v184, v185, v186);
        System_Action_object____ctor(v187, v183, Method_CommonUI_StartLoginMessages__, 0LL);
        if ( v182 )
        {
          if ( !*(_DWORD *)(v182 + 24) )
            goto LABEL_161;
          *(_QWORD *)(v182 + 32) = v187;
          sub_1BCA784((PartyOrganizationUtility_o *)(v182 + 32), (int64_t)v187, v188, v189, v190, v191, v192, v193);
          Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
          if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo, v62);
            Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
          }
          v200 = *(System_Action_object__o **)(*(_QWORD *)(Instance + 184) + 24LL);
          if ( !v200 )
          {
            if ( !*(_DWORD *)(Instance + 224) )
            {
              j_il2cpp_runtime_class_init_0(Instance, v62);
              Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
            }
            v201 = **(Il2CppObject ***)(Instance + 184);
            v200 = (System_Action_object__o *)sub_1BCAA2C(System_Action_Action__TypeInfo, v62, v194, v195);
            System_Action_object____ctor(
              v200,
              v201,
              Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__196_0__,
              0LL);
            v202 = TerminalSceneComponent___c_TypeInfo->static_fields;
            v202->__9__196_0 = (struct System_Action_Action__o *)v200;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&v202->__9__196_0,
              (int64_t)v200,
              v203,
              v204,
              v205,
              v206,
              v207,
              v208);
          }
          if ( *(_DWORD *)(v182 + 24) <= 1u )
            goto LABEL_161;
          *(_QWORD *)(v182 + 40) = v200;
          sub_1BCA784((PartyOrganizationUtility_o *)(v182 + 40), (int64_t)v200, v194, v195, v196, v197, v198, v199);
          Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
          if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo, v62);
            Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
          }
          v215 = *(System_Action_object__o **)(*(_QWORD *)(Instance + 184) + 32LL);
          if ( !v215 )
          {
            if ( !*(_DWORD *)(Instance + 224) )
            {
              j_il2cpp_runtime_class_init_0(Instance, v62);
              Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
            }
            v216 = **(Il2CppObject ***)(Instance + 184);
            v215 = (System_Action_object__o *)sub_1BCAA2C(System_Action_Action__TypeInfo, v62, v209, v210);
            System_Action_object____ctor(
              v215,
              v216,
              Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__196_1__,
              0LL);
            v217 = TerminalSceneComponent___c_TypeInfo->static_fields;
            v217->__9__196_1 = (struct System_Action_Action__o *)v215;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&v217->__9__196_1,
              (int64_t)v215,
              v218,
              v219,
              v220,
              v221,
              v222,
              v223);
          }
          if ( *(_DWORD *)(v182 + 24) <= 2u )
            goto LABEL_161;
          *(_QWORD *)(v182 + 48) = v215;
          sub_1BCA784((PartyOrganizationUtility_o *)(v182 + 48), (int64_t)v215, v209, v210, v211, v212, v213, v214);
          v227 = (System_Action_object__o *)sub_1BCAA2C(System_Action_Action__TypeInfo, v224, v225, v226);
          System_Action_object____ctor(
            v227,
            (Il2CppObject *)v60,
            Method_TerminalSceneComponent___c__DisplayClass196_0__Fadein_MapDisp_Start_b__2__,
            0LL);
          if ( *(_DWORD *)(v182 + 24) <= 3u )
            goto LABEL_161;
          *(_QWORD *)(v182 + 56) = v227;
          sub_1BCA784((PartyOrganizationUtility_o *)(v182 + 56), (int64_t)v227, v228, v229, v230, v231, v232, v233);
          v237 = (ActionChain_o *)sub_1BCAA2C(ActionChain_TypeInfo, v234, v235, v236);
          ActionChain___ctor_47118216(v237, (System_Action_Action__array *)v182, 0LL);
          Instance = sub_1BCA888(System_Action___TypeInfo, 1LL);
          if ( Instance )
          {
            v244 = (System_Action_array *)Instance;
            if ( !*(_DWORD *)(Instance + 24) )
              goto LABEL_161;
            v245 = *v69;
            *(_QWORD *)(Instance + 32) = *v69;
            sub_1BCA784((PartyOrganizationUtility_o *)(Instance + 32), v245, v238, v239, v240, v241, v242, v243);
            if ( v237 )
            {
              v177 = (ChainableActionBase_o *)v237;
              v178 = v244;
LABEL_127:
              Instance = (__int64)ChainableActionBase__Final(v177, v178, 0LL);
              if ( !Instance )
                goto LABEL_160;
              ChainableActionBase__Execute((ChainableActionBase_o *)Instance, 0LL);
              goto LABEL_136;
            }
          }
        }
      }
      goto LABEL_160;
    }
  }
  if ( !*(_QWORD *)v84 )
    goto LABEL_160;
  v179 = *(_DWORD *)(*(_QWORD *)v84 + 96LL);
  v180 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v62, v88, v89);
  System_Action___ctor(
    v180,
    (Il2CppObject *)v60,
    Method_TerminalSceneComponent___c__DisplayClass196_0__Fadein_MapDisp_Start_b__3__,
    0LL);
  TerminalSceneComponent__StartEventDailyPoint(this, v179, v180, v181);
LABEL_136:
  Instance = (__int64)this->fields.mTerminalMap;
  if ( !Instance )
    goto LABEL_160;
  ScrTerminalMap__Fadein_MapDisp_Start((ScrTerminalMap_o *)Instance, 0LL);
}


void __fastcall TerminalSceneComponent__Fadein_WorldDisp(
        TerminalSceneComponent_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  AvalonSceneManager_c *v6; // x0
  System_Collections_IEnumerator_o *v7; // x1

  if ( (byte_4B18298 & 1) == 0 )
  {
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, end_act, method);
    byte_4B18298 = 1;
  }
  v6 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, end_act);
    v6 = AvalonSceneManager_TypeInfo;
  }
  v7 = TerminalSceneComponent__coFadein_WorldDisp(this, v6->static_fields->DEFAULT_FADE_TIME, end_act, 1, v3);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
}


void __fastcall TerminalSceneComponent__Fadein_WorldDisp_42930316(
        TerminalSceneComponent_o *this,
        float fade_time,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x3
  System_Collections_IEnumerator_o *v6; // x1

  v6 = TerminalSceneComponent__coFadein_WorldDisp(this, fade_time, end_act, 1, v4);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v6, 0LL);
}


UserServantEntity_o *__fastcall TerminalSceneComponent__GetNextStandServant(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  struct UserServantEntity_array *mStandSvtDatas; // x11
  __int64 v3; // x9
  int v4; // w10
  int32_t mStandSvtIdx; // w8
  int32_t v6; // w8
  UserServantEntity_o *v7; // x8

  mStandSvtDatas = this->fields.mStandSvtDatas;
  if ( !mStandSvtDatas )
    sub_1BCAA3C(this, method);
  v3 = *(_QWORD *)&mStandSvtDatas->max_length;
  if ( (int)v3 < 1 )
  {
    v4 = 0;
LABEL_12:
    v7 = 0LL;
  }
  else
  {
    v4 = 0;
    while ( 1 )
    {
      mStandSvtIdx = this->fields.mStandSvtIdx;
      if ( mStandSvtIdx + 1 < (int)v3 )
        v6 = mStandSvtIdx + 1;
      else
        v6 = 0;
      this->fields.mStandSvtIdx = v6;
      if ( v6 >= (unsigned int)v3 )
        sub_1BCAA44(this, method);
      v7 = mStandSvtDatas->m_Items[v6];
      if ( v7 )
        break;
      v3 = *(_QWORD *)&mStandSvtDatas->max_length;
      if ( ++v4 >= (int)v3 )
        goto LABEL_12;
    }
  }
  if ( v4 == (_DWORD)v3 )
    this->fields.mStandSvtIdx = 0;
  return v7;
}


System_String_o *__fastcall TerminalSceneComponent__GetOverwriteCommonBg(int32_t skinType, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  TerminalSceneComponent_c *v6; // x0
  System_String_o *OVERWRITE_COMMON_BG_TYPE2_KEY; // x0
  TerminalSceneComponent_c *v8; // x0

  if ( (byte_4B182CE & 1) == 0 )
  {
    sub_1BCA7E0(&string_TypeInfo, method, v2);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v4, v5);
    byte_4B182CE = 1;
  }
  if ( skinType == 4 )
  {
    v8 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
      v8 = TerminalSceneComponent_TypeInfo;
    }
    OVERWRITE_COMMON_BG_TYPE2_KEY = v8->static_fields->OVERWRITE_COMMON_BG_TYPE2_KEY;
    return UnityEngine_PlayerPrefs__GetString_70112520(OVERWRITE_COMMON_BG_TYPE2_KEY, 0LL);
  }
  if ( skinType == 2 )
  {
    v6 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
      v6 = TerminalSceneComponent_TypeInfo;
    }
    OVERWRITE_COMMON_BG_TYPE2_KEY = v6->static_fields->OVERWRITE_COMMON_BG_TYPE1_KEY;
    return UnityEngine_PlayerPrefs__GetString_70112520(OVERWRITE_COMMON_BG_TYPE2_KEY, 0LL);
  }
  return string_TypeInfo->static_fields->Empty;
}


QuestEntity_o *__fastcall TerminalSceneComponent__GetPlayAutoExecuteQuestEntity(
        TerminalSceneComponent_o *this,
        QuestEntity_array *questEntList,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *Instance; // x0
  __int64 v15; // x1
  signed int max_length; // w8
  unsigned int v17; // w23
  QuestEntity_o *v18; // x21
  int32_t id; // w22
  __int64 v20; // x2
  int klass_high; // w22
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B182B9 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, questEntList, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_SpotMaster___, v4, v5);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v10, v11);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v12, v13);
    byte_4B182B9 = 1;
  }
  entity = 0LL;
  Instance = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  if ( !BYTE3(Instance[2].fields.seriazlier) )
  {
    if ( !questEntList )
      goto LABEL_28;
    max_length = questEntList->max_length;
    if ( max_length >= 1 )
    {
      v17 = 0;
      while ( 1 )
      {
        if ( v17 >= max_length )
          sub_1BCAA44(Instance, v15);
        v18 = questEntList->m_Items[v17];
        if ( !v18 )
          break;
        id = v18->fields.id;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v15);
        Instance = (DataMasterBase_TMaster__TEntity__PKType__o *)CondType__IsQuestClear_38310172(id, -1, 0, 0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v15);
          Instance = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SpotMaster___);
          if ( !Instance )
            break;
          Instance = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                     Instance,
                                                                     &entity,
                                                                     v18->fields.spotId,
                                                                     (const MethodInfo_31B2E94 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !entity )
              break;
            klass_high = HIDWORD(entity[1].klass);
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v15);
            if ( !byte_4B12DC6 )
            {
              sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v15, v20);
              byte_4B12DC6 = 1;
            }
            Instance = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v15);
              Instance = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
            }
            if ( klass_high == HIDWORD(Instance[2].fields._lookup->klass) )
              return v18;
          }
        }
        max_length = questEntList->max_length;
        if ( (int)++v17 >= max_length )
          return 0LL;
      }
LABEL_28:
      sub_1BCAA3C(Instance, v15);
    }
  }
  return 0LL;
}


int32_t __fastcall TerminalSceneComponent__GetState(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalSceneComponent_o *v3; // x19
  struct CStateManager_TerminalSceneComponent__o *mFSM; // x8

  v3 = this;
  if ( (byte_4B182BC & 1) == 0 )
  {
    this = (TerminalSceneComponent_o *)sub_1BCA7E0(&Method_CStateManager_TerminalSceneComponent__getState__, method, v2);
    byte_4B182BC = 1;
  }
  mFSM = v3->fields.mFSM;
  if ( !mFSM )
    sub_1BCAA3C(this, method);
  return mFSM->fields.m_state;
}


void __fastcall TerminalSceneComponent__InitLighting(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalSceneComponent_c *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4B182CC & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, method, v2);
    byte_4B182CC = 1;
  }
  v4 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
    v4 = TerminalSceneComponent_TypeInfo;
  }
  UnityEngine_RenderSettings__set_ambientLight(v4->static_fields->DEFAULT_AMBIENT_LIGHT_COLOR, 0LL);
  TerminalSceneComponent__SetDirectionalLightActive(this, 1, v5);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TerminalSceneComponent__IsEnabledMapOnEvent(
        TerminalSceneComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  MapEntity_array *Instance; // x0
  __int64 v9; // x1
  WarEntity_o *v10; // x0
  WarEntity_o *v11; // x19
  int max_length; // w8
  int v13; // w9
  int *v14; // x10

  if ( (byte_4B182A1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_MapMaster___, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_WarMaster___, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B182A1 = 1;
  }
  if ( !eventId )
    return 1;
  Instance = (MapEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (MapEntity_array *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_WarMaster___);
  if ( !Instance )
    goto LABEL_19;
  v10 = WarMaster__getByEventId((WarMaster_o *)Instance, eventId, 0LL);
  if ( !v10 )
    return 1;
  v11 = v10;
  Instance = (MapEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (MapEntity_array *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_MapMaster___);
  if ( !Instance )
    goto LABEL_19;
  Instance = MapMaster__getList((MapMaster_o *)Instance, v11->fields.id, 0LL);
  if ( !Instance )
    goto LABEL_19;
  max_length = Instance->max_length;
  if ( max_length >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      v14 = (int *)Instance->m_Items[v13];
      if ( !v14 )
        break;
      if ( v14[6] >= 1 && v14[7] >= 1 && v14[8] > 0 )
        return 1;
      if ( max_length == ++v13 )
        return 0;
    }
LABEL_19:
    sub_1BCAA3C(Instance, v9);
  }
  return 0;
}


bool __fastcall TerminalSceneComponent__IsMapActive(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  struct ScrTerminalMap_o *mTerminalMap; // x8

  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap || (this = (TerminalSceneComponent_o *)mTerminalMap->fields.dispRoot) == 0LL )
    sub_1BCAA3C(this, method);
  return UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
}


bool __fastcall TerminalSceneComponent__IsMapTouchEnabled(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  ScrTerminalMap_o *mTerminalMap; // x0
  struct ScrTerminalListTop_o *mTerminalList; // x8
  System_String_o *v12; // x20

  if ( (byte_4B182A5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v6, v7);
    sub_1BCA7E0(&StringLiteral_8979/*"Map Touch Enable"*/, v8, v9);
    byte_4B182A5 = 1;
  }
  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_56;
  mTerminalMap = (ScrTerminalMap_o *)ScrTerminalMap__mfGetMyFsmP(mTerminalMap, 0LL);
  if ( !mTerminalMap )
    goto LABEL_56;
  mTerminalMap = (ScrTerminalMap_o *)PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)mTerminalMap, 0LL);
  if ( !this->fields.mTutorialKind )
  {
    mTerminalList = this->fields.mTerminalList;
    if ( !mTerminalList )
      goto LABEL_56;
    v12 = (System_String_o *)mTerminalMap;
    mTerminalMap = (ScrTerminalMap_o *)mTerminalList->fields.mActionBgColl;
    if ( !mTerminalMap )
      goto LABEL_56;
    mTerminalMap = (ScrTerminalMap_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)mTerminalMap,
                                         0LL);
    if ( !mTerminalMap )
      goto LABEL_56;
    mTerminalMap = (ScrTerminalMap_o *)UnityEngine_GameObject__get_activeSelf(
                                         (UnityEngine_GameObject_o *)mTerminalMap,
                                         0LL);
    if ( ((unsigned __int8)mTerminalMap & 1) == 0 )
    {
      if ( !v12 )
        goto LABEL_56;
      if ( (System_String__IndexOf_62432796(v12, (System_String_o *)StringLiteral_8979/*"Map Touch Enable"*/, 0LL) & 0x80000000) != 0
        || MainMenuBar__get_IsEnableOutSideCollider(0LL) )
      {
        return 0;
      }
      mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !mTerminalMap )
        goto LABEL_56;
      if ( !CommonUI__IsActive_UserPresentBoxWindow((CommonUI_o *)mTerminalMap, 0LL) )
      {
        mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !mTerminalMap )
          goto LABEL_56;
        if ( !CommonUI__IsActive_ApRecvDlgComp((CommonUI_o *)mTerminalMap, 0LL) )
        {
          mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !mTerminalMap )
            goto LABEL_56;
          if ( !CommonUI__IsActive_EventItemSelectDlgComp((CommonUI_o *)mTerminalMap, 0LL) )
          {
            mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !mTerminalMap )
              goto LABEL_56;
            if ( !CommonUI__IsActive_CommonConfirmDialog((CommonUI_o *)mTerminalMap, 0LL) )
            {
              mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( !mTerminalMap )
                goto LABEL_56;
              if ( !CommonUI__IsActive_NotifiDialog((CommonUI_o *)mTerminalMap, 0LL) )
              {
                mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( !mTerminalMap )
                  goto LABEL_56;
                if ( !CommonUI__IsActive_TutorialBigDialog((CommonUI_o *)mTerminalMap, 0LL) )
                {
                  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  if ( !mTerminalMap )
                    goto LABEL_56;
                  if ( !CommonUI__IsActive_MasterMission((CommonUI_o *)mTerminalMap, 0LL) )
                  {
                    mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                    if ( !mTerminalMap )
                      goto LABEL_56;
                    if ( !CommonUI__IsActive_MasterProfile((CommonUI_o *)mTerminalMap, 0LL) )
                    {
                      mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                      if ( !mTerminalMap )
                        goto LABEL_56;
                      if ( !CommonUI__IsActive_MissionListDialog((CommonUI_o *)mTerminalMap, 0LL) )
                      {
                        mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                        if ( !mTerminalMap )
                          goto LABEL_56;
                        if ( !CommonUI__IsActive_AssistEffectConfirmDialog((CommonUI_o *)mTerminalMap, 0LL) )
                        {
                          mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                          if ( !mTerminalMap )
                            goto LABEL_56;
                          if ( !CommonUI__IsActive_CommandAssistConfirmDialog((CommonUI_o *)mTerminalMap, 0LL) )
                          {
                            mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                            if ( !mTerminalMap )
                              goto LABEL_56;
                            if ( !CommonUI__IsActive_AchievementExchangeConditionsDialog(
                                    (CommonUI_o *)mTerminalMap,
                                    0LL) )
                            {
                              mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                              if ( !mTerminalMap )
                                goto LABEL_56;
                              if ( !CommonUI__IsActive_SvtFrameShortDialog((CommonUI_o *)mTerminalMap, 0LL) )
                              {
                                mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                if ( !mTerminalMap )
                                  goto LABEL_56;
                                if ( !CommonUI__isBusyDialog((CommonUI_o *)mTerminalMap, 0LL) )
                                {
                                  mTerminalMap = (ScrTerminalMap_o *)this->fields.mPlayerStatus;
                                  if ( !mTerminalMap )
                                    goto LABEL_56;
                                  if ( LOBYTE(mTerminalMap[1].fields.PLAYER_ICON_POS.fields.y)
                                    || ScrPlayerStatus__IsCommandSpellActive((ScrPlayerStatus_o *)mTerminalMap, 0LL) )
                                  {
                                    return 0;
                                  }
                                  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
                                  if ( !mTerminalMap )
                                    goto LABEL_56;
                                  if ( !QuestAfterAction__IsPlaying((QuestAfterAction_o *)mTerminalMap, 0LL) )
                                  {
                                    mTerminalMap = (ScrTerminalMap_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
                                    if ( !mTerminalMap )
                                      goto LABEL_56;
                                    if ( !MissionNotifyManager__IsPress((MissionNotifyManager_o *)mTerminalMap, 0LL) )
                                    {
                                      mTerminalMap = (ScrTerminalMap_o *)this->fields.mTitleInfo;
                                      if ( !mTerminalMap )
                                        goto LABEL_56;
                                      if ( TitleInfoControl__IsTouchEnable((TitleInfoControl_o *)mTerminalMap, 0LL) )
                                      {
                                        mTerminalMap = (ScrTerminalMap_o *)this->fields.mTitleInfo;
                                        if ( mTerminalMap )
                                        {
                                          if ( TitleInfoControl__IsBusyOnEventUI(
                                                 (TitleInfoControl_o *)mTerminalMap,
                                                 0LL) )
                                          {
                                            return 0;
                                          }
                                          mTerminalMap = this->fields.mTerminalMap;
                                          if ( mTerminalMap )
                                            return !ScrTerminalMap__IsActive_SpotCooltimeRewardDialog(mTerminalMap, 0LL);
                                        }
LABEL_56:
                                        sub_1BCAA3C(mTerminalMap, method);
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
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}


bool __fastcall TerminalSceneComponent__IsNotDisplayCostume(
        TerminalSceneComponent_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  if ( !shopEntity )
    sub_1BCAA3C(this, 0LL);
  return shopEntity->fields.shopType == 11
      && shopEntity->fields.purchaseType == 14
      && !ShopEntity__IsEligibleForFreeFeaturesTheCostumeRelease(shopEntity, 0LL);
}


bool __fastcall TerminalSceneComponent__IsPlayChapterStart(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _BOOL4 IsWarStartAnim_k__BackingField; // w23
  _BOOL4 v9; // w24
  _BOOL4 IsWarStartActionSkip; // w19
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *Instance; // x20
  TerminalPramsManager_c *v14; // x0
  WarEntity_o *WarEntityByWarID; // x0
  WarEntity_o *v16; // x20
  __int64 v17; // x1
  int64_t targetId; // x19
  __int64 v19; // x1
  const MethodInfo *v20; // x2
  TerminalPramsManager_c *v21; // x0

  if ( (byte_4B182B5 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonTemplate_QuestTree__get_Instance__, v4, v5);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v6, v7);
    byte_4B182B5 = 1;
  }
  IsWarStartAnim_k__BackingField = this->fields._IsWarStartAnim_k__BackingField;
  v9 = this->fields.mTutorialKind == 1;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  IsWarStartActionSkip = TerminalPramsManager__get_Debug_IsWarStartActionSkip(0LL);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11);
  if ( !byte_4B12DC6 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v11, v12);
    byte_4B12DC6 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11);
    v14 = TerminalPramsManager_TypeInfo;
  }
  if ( !Instance )
    sub_1BCAA3C(v14, v11);
  WarEntityByWarID = QuestTree__mfGetWarEntityByWarID(
                       (QuestTree_o *)Instance,
                       v14->static_fields->_WarId_k__BackingField,
                       0LL);
  if ( !WarEntityByWarID )
    return 0;
  v16 = WarEntityByWarID;
  if ( WarEntity__IsMainInterlude(WarEntityByWarID, 0LL)
    && WarEntity__IsPurchasedByRarePrism(v16, 0LL)
    && WarEntity__IsStartTypeQuest(v16, 0LL) )
  {
    targetId = v16->fields.targetId;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v17);
    if ( CondType__IsQuestPhaseClear_38364228(targetId, 1, -1, 0, 0LL) )
      return 0;
  }
  else if ( !IsWarStartAnim_k__BackingField && !v9 || IsWarStartActionSkip )
  {
    return 0;
  }
  if ( !WarEntity__GetStartType(v16, 0LL) )
    return 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v19);
  if ( !byte_4B12DC6 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v19, v20);
    byte_4B12DC6 = 1;
  }
  v21 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v19);
    v21 = TerminalPramsManager_TypeInfo;
  }
  return TerminalSceneComponent__CheckPlayChapterStart(
           (TerminalSceneComponent_o *)v21,
           v21->static_fields->_WarId_k__BackingField,
           v20);
}


bool __fastcall TerminalSceneComponent__IsTerminalListAreaWait(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ScrTerminalListTop_o *mTerminalList; // x0

  if ( (byte_4B1827F & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_2153/*"AREA WAIT"*/, method, v2);
    byte_4B1827F = 1;
  }
  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList
    || (mTerminalList = (ScrTerminalListTop_o *)ScrTerminalListTop__mfGetMyFsmP(mTerminalList, 0LL)) == 0LL
    || (mTerminalList = (ScrTerminalListTop_o *)PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)mTerminalList, 0LL)) == 0LL )
  {
    sub_1BCAA3C(mTerminalList, method);
  }
  return System_String__IndexOf_62432796((System_String_o *)mTerminalList, (System_String_o *)StringLiteral_2153/*"AREA WAIT"*/, 0LL) >= 0;
}


System_Collections_IEnumerator_o *__fastcall TerminalSceneComponent__LoadAsync(
        TerminalSceneComponent_o *this,
        UserServantEntity_o *usd,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4B1828B & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalSceneComponent__LoadAsync_d__176_TypeInfo, usd, callback);
    byte_4B1828B = 1;
  }
  v7 = sub_1BCAA2C(TerminalSceneComponent__LoadAsync_d__176_TypeInfo, usd, callback, method);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = usd;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 40), (int64_t)usd, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v7 + 48) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 48), (int64_t)callback, v20, v21, v22, v23, v24, v25);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall TerminalSceneComponent__LocateDialogToUiRoot(
        TerminalSceneComponent_o *this,
        BaseDialog_o *dialog,
        System_Nullable_Vector3__o localScale,
        const MethodInfo *method)
{
  bool hasValue; // w20
  TerminalSceneComponent_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Component_o *uiRoot; // x8
  TerminalSceneComponent_o *v10; // x21
  __int64 v11; // x1
  const MethodInfo_36C2D44 *v12; // x2
  float x; // s8
  float y; // s9
  float z; // s10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  System_Nullable_Vector3__o v17; // [xsp+0h] [xbp-50h] BYREF
  System_Nullable_Vector3__o v18; // 0:x0.16
  UnityEngine_Vector3_o Value; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  hasValue = localScale.fields.hasValue;
  v6 = this;
  v17 = localScale;
  if ( (byte_4B182CB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Nullable_Vector3__get_HasValue__, dialog, *(_QWORD *)&localScale.fields.hasValue);
    this = (TerminalSceneComponent_o *)sub_1BCA7E0(&Method_System_Nullable_Vector3__get_Value__, v7, v8);
    byte_4B182CB = 1;
  }
  if ( !dialog )
    goto LABEL_13;
  this = (TerminalSceneComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)dialog, 0LL);
  uiRoot = (UnityEngine_Component_o *)v6->fields.uiRoot;
  if ( !uiRoot )
    goto LABEL_13;
  v10 = this;
  this = (TerminalSceneComponent_o *)UnityEngine_Component__get_transform(uiRoot, 0LL);
  if ( !v10 )
    goto LABEL_13;
  UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)v10, (UnityEngine_Transform_o *)this, 0LL);
  if ( hasValue )
  {
    *(_QWORD *)&v18.fields.hasValue = &v17;
    *(_QWORD *)&v18.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
    Value = System_Nullable_Vector3___get_Value(v18, v12);
    x = Value.fields.x;
    y = Value.fields.y;
    z = Value.fields.z;
  }
  else
  {
    if ( !byte_4B109C6 )
    {
      sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v11, v12);
      byte_4B109C6 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->oneVector.fields.x;
    y = static_fields->oneVector.fields.y;
    z = static_fields->oneVector.fields.z;
  }
  this = (TerminalSceneComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)dialog, 0LL);
  if ( !this )
LABEL_13:
    sub_1BCAA3C(this, dialog);
  v20.fields.x = x;
  v20.fields.y = y;
  v20.fields.z = z;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v20, 0LL);
}


void __fastcall TerminalSceneComponent__OnCorePress(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  struct BaseCore_o *mEarthCore; // x0

  mEarthCore = this->fields.mEarthCore;
  if ( !mEarthCore )
    sub_1BCAA3C(0LL, method);
  ((void (__fastcall *)(struct BaseCore_o *, Il2CppMethodPointer))mEarthCore->klass->vtable._7_OnPress.method)(
    mEarthCore,
    mEarthCore->klass->vtable._8_Setup.methodPtr);
}


void __fastcall TerminalSceneComponent__OnCoreRelease(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  BaseCore_o *mEarthCore; // x0

  mEarthCore = this->fields.mEarthCore;
  if ( !mEarthCore )
    sub_1BCAA3C(0LL, method);
  BaseCore__OnRelease(mEarthCore, 0LL);
}


void __fastcall TerminalSceneComponent__OnDestroy(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  TerminalSceneComponent_c *v10; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  TerminalSceneComponent_c *v19; // x0
  __int64 v20; // x1
  long double v21; // q0
  __int64 v22; // x0
  __int64 v23; // x0
  UnityEngine_Object_o *v24; // x20
  __int64 v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  System_String_o *loadEarthAssetName; // x20

  if ( (byte_4B18287 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AssetManager__getInstance__, v6, v7);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v8, v9);
    byte_4B18287 = 1;
  }
  v10 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
    v10 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v10->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(mInstance, (UnityEngine_Object_o *)this, 0LL) )
  {
    v19 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v12);
      v19 = TerminalSceneComponent_TypeInfo;
    }
    v19->static_fields->mInstance = 0LL;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)TerminalSceneComponent_TypeInfo->static_fields,
      0LL,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    v22 = *((_QWORD *)Method_SingletonMonoBehaviour_AssetManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v22 + 309) & 1) == 0 )
      v22 = sub_1C1C6BC(v21);
    v23 = *(_QWORD *)(*(_QWORD *)(v22 + 192) + 16LL);
    if ( (*(_BYTE *)(v23 + 309) & 1) == 0 )
      v23 = sub_1C1C6BC(v21);
    v24 = **(UnityEngine_Object_o ***)(v23 + 184);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
    if ( UnityEngine_Object__op_Implicit(v24, 0LL) )
    {
      loadEarthAssetName = this->fields.loadEarthAssetName;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v25);
      AssetManager__releaseAssetStorage(loadEarthAssetName, 0LL);
    }
    this->fields.loadEarthAssetName = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.loadEarthAssetName, 0LL, v26, v27, v28, v29, v30, v31);
    StandFigureManager__ReleaseCharaFigure(0LL);
  }
}


void __fastcall TerminalSceneComponent__OpenExchangeDialogue(
        TerminalSceneComponent_o *this,
        System_String_o *playerPrefsKey,
        System_String_o *localizationKeyForTitle,
        System_String_o *localizationKeyForDetail,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  System_String_o *String_70112520; // x0
  __int64 v56; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x24
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x3
  System_Func_object__int__o *v61; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v62; // x0
  System_Int32_array *v63; // x0
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x3
  TerminalSceneComponent___c_c *v67; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v68; // x24
  System_Func_T__TResult__o *_9__256_0; // x25
  Il2CppObject *v70; // x26
  PartyOrganizationUtility_o *static_fields; // x0
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v78; // x0
  System_Collections_Generic_List_TSource__o *v79; // x0
  __int64 v80; // x1
  __int64 v81; // x2
  __int64 v82; // x3
  TerminalSceneComponent___c_c *v83; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v84; // x24
  System_Func_object__bool__o *_9__256_1; // x25
  Il2CppObject *v86; // x26
  struct TerminalSceneComponent___c_StaticFields *v87; // x0
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v94; // x0
  __int64 v95; // x1
  __int64 v96; // x2
  __int64 v97; // x3
  TerminalSceneComponent___c_c *v98; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v99; // x24
  System_Func_object__bool__o *_9__256_2; // x25
  Il2CppObject *v101; // x26
  struct TerminalSceneComponent___c_StaticFields *v102; // x0
  int64_t v103; // x2
  int32_t v104; // w3
  System_String_o *v105; // x4
  BattleSetupInfo_o *v106; // x5
  FollowerInfo_o *v107; // x6
  PartyListViewItem_o *v108; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v109; // x24
  __int64 v110; // x1
  __int64 v111; // x2
  __int64 v112; // x3
  System_Func_object__bool__o *v113; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v114; // x0
  System_Collections_Generic_List_TSource__o *v115; // x0
  __int64 v116; // x1
  __int64 v117; // x2
  __int64 v118; // x3
  TerminalSceneComponent___c_c *v119; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v120; // x23
  System_Func_object__int__o *_9__256_4; // x24
  Il2CppObject *v122; // x25
  struct TerminalSceneComponent___c_StaticFields *v123; // x0
  int64_t v124; // x2
  int32_t v125; // w3
  System_String_o *v126; // x4
  BattleSetupInfo_o *v127; // x5
  FollowerInfo_o *v128; // x6
  PartyListViewItem_o *v129; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v130; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v131; // x23
  __int64 v132; // x1
  __int64 v133; // x2
  __int64 v134; // x3
  __int64 v135; // x1
  Il2CppObject *Instance; // x24
  System_String_o *v137; // x22
  TerminalSceneComponent___c_c *v138; // x0
  System_Func_T__TResult__o *_9__256_5; // x24
  Il2CppObject *v140; // x25
  struct TerminalSceneComponent___c_StaticFields *v141; // x0
  int64_t v142; // x2
  int32_t v143; // w3
  System_String_o *v144; // x4
  BattleSetupInfo_o *v145; // x5
  FollowerInfo_o *v146; // x6
  PartyListViewItem_o *v147; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v148; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v149; // x25
  __int64 v150; // x1
  System_String_o *v151; // x0
  __int64 v152; // x1
  __int64 v153; // x2
  __int64 v154; // x3
  TerminalSceneComponent___c_c *v155; // x8
  System_String_o *v156; // x21
  System_Func_object__int__o *_9__256_6; // x26
  Il2CppObject *v158; // x27
  struct TerminalSceneComponent___c_StaticFields *v159; // x0
  int64_t v160; // x2
  int32_t v161; // w3
  System_String_o *v162; // x4
  BattleSetupInfo_o *v163; // x5
  FollowerInfo_o *v164; // x6
  PartyListViewItem_o *v165; // x7
  Il2CppObject *v166; // x0
  int32_t v169; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4B182C6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_int__ShopEntity___, playerPrefsKey, localizationKeyForTitle);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_ShopEntity__int___, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_string__int___, v11, v12);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Sum_ShopEntity___, v13, v14);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v15, v16);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_ShopEntity___, v17, v18);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_ShopEntity___, v19, v20);
    sub_1BCA7E0(&System_Func_int__ShopEntity__TypeInfo, v21, v22);
    sub_1BCA7E0(&System_Func_ShopEntity__int__TypeInfo, v23, v24);
    sub_1BCA7E0(&System_Func_ShopEntity__bool__TypeInfo, v25, v26);
    sub_1BCA7E0(&System_Func_string__int__TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_System_Int32_Parse__, v29, v30);
    sub_1BCA7E0(&int_TypeInfo, v31, v32);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v33, v34);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v35, v36);
    sub_1BCA7E0(&Method_TerminalSceneComponent__OpenExchangeDialogue_b__256_3__, v37, v38);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__256_0__, v39, v40);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__256_1__, v41, v42);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__256_2__, v43, v44);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__256_4__, v45, v46);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__256_5__, v47, v48);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__256_6__, v49, v50);
    sub_1BCA7E0(&TerminalSceneComponent___c_TypeInfo, v51, v52);
    sub_1BCA7E0(&StringLiteral_19829/*"freeShopIds"*/, v53, v54);
    byte_4B182C6 = 1;
  }
  String_70112520 = UnityEngine_PlayerPrefs__GetString_70112520(playerPrefsKey, 0LL);
  if ( !String_70112520 )
    goto LABEL_34;
  v57 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String_70112520, 0x2Cu, 0, 0LL);
  v61 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_string__int__TypeInfo, v58, v59, v60);
  System_Func_object__int____ctor(v61, 0LL, Method_System_Int32_Parse__, 0LL);
  v62 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v57,
                                                               (System_Func_TSource__TResult__o *)v61,
                                                               (const MethodInfo_2F43194 *)Method_System_Linq_Enumerable_Select_string__int___);
  v63 = System_Linq_Enumerable__ToArray_int_(
          v62,
          (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
  v67 = TerminalSceneComponent___c_TypeInfo;
  v68 = (System_Collections_Generic_IEnumerable_TSource__o *)v63;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo, v64);
    v67 = TerminalSceneComponent___c_TypeInfo;
  }
  _9__256_0 = (System_Func_T__TResult__o *)v67->static_fields->__9__256_0;
  if ( !_9__256_0 )
  {
    if ( !v67->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v67, v64);
      v67 = TerminalSceneComponent___c_TypeInfo;
    }
    v70 = (Il2CppObject *)v67->static_fields->__9;
    _9__256_0 = (System_Func_T__TResult__o *)sub_1BCAA2C(System_Func_int__ShopEntity__TypeInfo, v64, v65, v66);
    System_Func_int__object____ctor(
      _9__256_0,
      v70,
      Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__256_0__,
      0LL);
    static_fields = (PartyOrganizationUtility_o *)TerminalSceneComponent___c_TypeInfo->static_fields;
    static_fields[1].klass = (PartyOrganizationUtility_c *)_9__256_0;
    sub_1BCA784(static_fields + 1, (int64_t)_9__256_0, v72, v73, v74, v75, v76, v77);
  }
  v78 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                               v68,
                                                               (System_Func_TSource__TResult__o *)_9__256_0,
                                                               (const MethodInfo_2F3F30C *)Method_System_Linq_Enumerable_Select_int__ShopEntity___);
  v79 = System_Linq_Enumerable__ToList_object_(
          v78,
          (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_ShopEntity___);
  v83 = TerminalSceneComponent___c_TypeInfo;
  v84 = (System_Collections_Generic_IEnumerable_TSource__o *)v79;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo, v80);
    v83 = TerminalSceneComponent___c_TypeInfo;
  }
  _9__256_1 = (System_Func_object__bool__o *)v83->static_fields->__9__256_1;
  if ( !_9__256_1 )
  {
    if ( !v83->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v83, v80);
      v83 = TerminalSceneComponent___c_TypeInfo;
    }
    v86 = (Il2CppObject *)v83->static_fields->__9;
    _9__256_1 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_ShopEntity__bool__TypeInfo, v80, v81, v82);
    System_Func_object__bool____ctor(
      _9__256_1,
      v86,
      Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__256_1__,
      0LL);
    v87 = TerminalSceneComponent___c_TypeInfo->static_fields;
    v87->__9__256_1 = (struct System_Func_ShopEntity__bool__o *)_9__256_1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v87->__9__256_1, (int64_t)_9__256_1, v88, v89, v90, v91, v92, v93);
  }
  v94 = System_Linq_Enumerable__Where_object_(
          v84,
          (System_Func_TSource__bool__o *)_9__256_1,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_ShopEntity___);
  v98 = TerminalSceneComponent___c_TypeInfo;
  v99 = v94;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo, v95);
    v98 = TerminalSceneComponent___c_TypeInfo;
  }
  _9__256_2 = (System_Func_object__bool__o *)v98->static_fields->__9__256_2;
  if ( !_9__256_2 )
  {
    if ( !v98->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v98, v95);
      v98 = TerminalSceneComponent___c_TypeInfo;
    }
    v101 = (Il2CppObject *)v98->static_fields->__9;
    _9__256_2 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_ShopEntity__bool__TypeInfo, v95, v96, v97);
    System_Func_object__bool____ctor(
      _9__256_2,
      v101,
      Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__256_2__,
      0LL);
    v102 = TerminalSceneComponent___c_TypeInfo->static_fields;
    v102->__9__256_2 = (struct System_Func_ShopEntity__bool__o *)_9__256_2;
    sub_1BCA784((PartyOrganizationUtility_o *)&v102->__9__256_2, (int64_t)_9__256_2, v103, v104, v105, v106, v107, v108);
  }
  v109 = System_Linq_Enumerable__Where_object_(
           v99,
           (System_Func_TSource__bool__o *)_9__256_2,
           (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_ShopEntity___);
  v113 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_ShopEntity__bool__TypeInfo, v110, v111, v112);
  System_Func_object__bool____ctor(
    v113,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent__OpenExchangeDialogue_b__256_3__,
    0LL);
  v114 = System_Linq_Enumerable__Where_object_(
           v109,
           (System_Func_TSource__bool__o *)v113,
           (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_ShopEntity___);
  v115 = System_Linq_Enumerable__ToList_object_(
           v114,
           (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_ShopEntity___);
  v119 = TerminalSceneComponent___c_TypeInfo;
  v120 = (System_Collections_Generic_IEnumerable_TSource__o *)v115;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo, v116);
    v119 = TerminalSceneComponent___c_TypeInfo;
  }
  _9__256_4 = (System_Func_object__int__o *)v119->static_fields->__9__256_4;
  if ( !_9__256_4 )
  {
    if ( !v119->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v119, v116);
      v119 = TerminalSceneComponent___c_TypeInfo;
    }
    v122 = (Il2CppObject *)v119->static_fields->__9;
    _9__256_4 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_ShopEntity__int__TypeInfo, v116, v117, v118);
    System_Func_object__int____ctor(
      _9__256_4,
      v122,
      Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__256_4__,
      0LL);
    v123 = TerminalSceneComponent___c_TypeInfo->static_fields;
    v123->__9__256_4 = (struct System_Func_ShopEntity__int__o *)_9__256_4;
    sub_1BCA784((PartyOrganizationUtility_o *)&v123->__9__256_4, (int64_t)_9__256_4, v124, v125, v126, v127, v128, v129);
  }
  v130 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                v120,
                                                                (System_Func_TSource__TResult__o *)_9__256_4,
                                                                (const MethodInfo_2F43194 *)Method_System_Linq_Enumerable_Select_ShopEntity__int___);
  String_70112520 = (System_String_o *)System_Linq_Enumerable__ToArray_int_(
                                         v130,
                                         (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !String_70112520 )
    goto LABEL_34;
  v131 = (System_Collections_Generic_IEnumerable_TSource__o *)String_70112520;
  if ( String_70112520[1].klass )
  {
    if ( System_String__op_Equality(playerPrefsKey, (System_String_o *)StringLiteral_19829/*"freeShopIds"*/, 0LL) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v135);
      v137 = LocalizationManager__Get(localizationKeyForTitle, 0LL);
      String_70112520 = LocalizationManager__Get(localizationKeyForDetail, 0LL);
      if ( !Instance )
        goto LABEL_34;
      goto LABEL_51;
    }
    v138 = TerminalSceneComponent___c_TypeInfo;
    if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo, v132);
      v138 = TerminalSceneComponent___c_TypeInfo;
    }
    _9__256_5 = (System_Func_T__TResult__o *)v138->static_fields->__9__256_5;
    if ( !_9__256_5 )
    {
      if ( !v138->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v138, v132);
        v138 = TerminalSceneComponent___c_TypeInfo;
      }
      v140 = (Il2CppObject *)v138->static_fields->__9;
      _9__256_5 = (System_Func_T__TResult__o *)sub_1BCAA2C(System_Func_int__ShopEntity__TypeInfo, v132, v133, v134);
      System_Func_int__object____ctor(
        _9__256_5,
        v140,
        Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__256_5__,
        0LL);
      v141 = TerminalSceneComponent___c_TypeInfo->static_fields;
      v141->__9__256_5 = (struct System_Func_int__ShopEntity__o *)_9__256_5;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v141->__9__256_5,
        (int64_t)_9__256_5,
        v142,
        v143,
        v144,
        v145,
        v146,
        v147);
    }
    v148 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                                  v131,
                                                                  (System_Func_TSource__TResult__o *)_9__256_5,
                                                                  (const MethodInfo_2F3F30C *)Method_System_Linq_Enumerable_Select_int__ShopEntity___);
    v149 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                  v148,
                                                                  (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_ShopEntity___);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v150);
    v137 = LocalizationManager__Get(localizationKeyForTitle, 0LL);
    v151 = LocalizationManager__Get(localizationKeyForDetail, 0LL);
    v155 = TerminalSceneComponent___c_TypeInfo;
    v156 = v151;
    if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo, v152);
      v155 = TerminalSceneComponent___c_TypeInfo;
    }
    _9__256_6 = (System_Func_object__int__o *)v155->static_fields->__9__256_6;
    if ( !_9__256_6 )
    {
      if ( !v155->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v155, v152);
        v155 = TerminalSceneComponent___c_TypeInfo;
      }
      v158 = (Il2CppObject *)v155->static_fields->__9;
      _9__256_6 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_ShopEntity__int__TypeInfo, v152, v153, v154);
      System_Func_object__int____ctor(
        _9__256_6,
        v158,
        Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__256_6__,
        0LL);
      v159 = TerminalSceneComponent___c_TypeInfo->static_fields;
      v159->__9__256_6 = (struct System_Func_ShopEntity__int__o *)_9__256_6;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v159->__9__256_6,
        (int64_t)_9__256_6,
        v160,
        v161,
        v162,
        v163,
        v164,
        v165);
    }
    v169 = System_Linq_Enumerable__Sum_object_(
             v149,
             (System_Func_TSource__int__o *)_9__256_6,
             (const MethodInfo_2F4A588 *)Method_System_Linq_Enumerable_Sum_ShopEntity___);
    v166 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v169);
    String_70112520 = System_String__Format(v156, v166, 0LL);
    if ( Instance )
    {
LABEL_51:
      CommonUI__OpenAchievementExchangeConditionsDialog(
        (CommonUI_o *)Instance,
        (System_Int32_array *)v131,
        v137,
        String_70112520,
        action,
        0LL);
      goto LABEL_52;
    }
LABEL_34:
    sub_1BCAA3C(String_70112520, v56);
  }
  ActionExtensions__Call(action, 0LL);
LABEL_52:
  UnityEngine_PlayerPrefs__DeleteKey(playerPrefsKey, 0LL);
}


void __fastcall TerminalSceneComponent__PlayAutoExecuteQuest(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  QuestMaster_o *Master_object; // x0
  __int64 v25; // x1
  TerminalSceneComponent_o *QuestEntityListByType; // x0
  const MethodInfo *v27; // x2
  QuestEntity_o *PlayAutoExecuteQuestEntity; // x0
  QuestEntity_o *v29; // x21
  __int64 v30; // x2
  QuestMaster_o *v31; // x22
  int32_t id; // w23
  TerminalPramsManager_c *v33; // x0
  int32_t lookup_high; // w22
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  ScrTerminalListTop_o *v38; // x21
  TerminalPramsManager_c *v39; // x0
  int32_t v40; // w22
  int32_t v41; // w23
  System_Action_o *v42; // x20
  bool HasFlag; // w0
  __int64 v44; // x2
  __int64 v45; // x3
  ScrTerminalListTop_o *mTerminalList; // x21
  bool v47; // w22
  TerminalPramsManager_c *v48; // x0
  int32_t QuestId_k__BackingField; // w22
  int32_t PhaseCnt_k__BackingField; // w23
  System_Action_o *v51; // x20
  __int64 v52; // x2
  __int64 v53; // x3
  clsQuestCheck_o *v54; // x19
  TerminalSceneComponent___c_c *v55; // x8
  System_Action_o *_9__226_1; // x20
  Il2CppObject *v57; // x21
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  int32_t klass_high; // w22
  int32_t buckets_high; // w23

  if ( (byte_4B182B8 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestMaster___, v4, v5);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v8, v9);
    sub_1BCA7E0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v10, v11);
    sub_1BCA7E0(&Method_SingletonTemplate_QuestTree__get_Instance__, v12, v13);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_TerminalSceneComponent__PlayAutoExecuteQuest_b__226_0__, v16, v17);
    sub_1BCA7E0(&Method_TerminalSceneComponent__PlayAutoExecuteQuest_b__226_2__, v18, v19);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__PlayAutoExecuteQuest_b__226_1__, v20, v21);
    sub_1BCA7E0(&TerminalSceneComponent___c_TypeInfo, v22, v23);
    byte_4B182B8 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Master_object )
    goto LABEL_73;
  QuestEntityListByType = (TerminalSceneComponent_o *)QuestMaster__GetQuestEntityListByType(Master_object, 8, 0LL);
  if ( !QuestEntityListByType )
    return;
  PlayAutoExecuteQuestEntity = TerminalSceneComponent__GetPlayAutoExecuteQuestEntity(
                                 QuestEntityListByType,
                                 (QuestEntity_array *)QuestEntityListByType,
                                 v27);
  if ( !PlayAutoExecuteQuestEntity )
    return;
  v29 = PlayAutoExecuteQuestEntity;
  Master_object = (QuestMaster_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Master_object )
    goto LABEL_73;
  Master_object = (QuestMaster_o *)QuestTree__GetQuestInfo((QuestTree_o *)Master_object, v29->fields.id, 0LL);
  if ( !Master_object )
    goto LABEL_73;
  v31 = Master_object;
  if ( LODWORD(Master_object->fields.list) != 1 )
    return;
  id = v29->fields.id;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v25);
  if ( !byte_4B12DC7 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v25, v30);
    byte_4B12DC7 = 1;
  }
  v33 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v25);
    v33 = TerminalPramsManager_TypeInfo;
  }
  v33->static_fields->_QuestId_k__BackingField = id;
  lookup_high = HIDWORD(v31->fields._lookup);
  if ( !byte_4B12DCB )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v25, v30);
    v33 = TerminalPramsManager_TypeInfo;
    byte_4B12DCB = 1;
  }
  if ( !v33->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v33, v25);
    v33 = TerminalPramsManager_TypeInfo;
  }
  v33->static_fields->_PhaseCnt_k__BackingField = lookup_high;
  if ( !QuestEntity__HasFlag(v29, 2LL, 0LL) )
  {
    HasFlag = QuestEntity__HasFlag(v29, 0x400000LL, 0LL);
    mTerminalList = this->fields.mTerminalList;
    v47 = HasFlag;
    if ( TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      if ( HasFlag )
      {
LABEL_39:
        if ( !byte_4B12DC3 )
        {
          sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v25, v44);
          byte_4B12DC3 = 1;
        }
        v48 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v25);
          v48 = TerminalPramsManager_TypeInfo;
        }
        QuestId_k__BackingField = v48->static_fields->_QuestId_k__BackingField;
        if ( !byte_4B12DCE )
        {
          sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v25, v44);
          v48 = TerminalPramsManager_TypeInfo;
          byte_4B12DCE = 1;
        }
        if ( !v48->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v48, v25);
          v48 = TerminalPramsManager_TypeInfo;
        }
        PhaseCnt_k__BackingField = v48->static_fields->_PhaseCnt_k__BackingField;
        v51 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v25, v44, v45);
        System_Action___ctor(
          v51,
          (Il2CppObject *)this,
          Method_TerminalSceneComponent__PlayAutoExecuteQuest_b__226_2__,
          0LL);
        if ( !mTerminalList )
          goto LABEL_73;
        ScrTerminalListTop__StartQuestBeforeAction(
          mTerminalList,
          QuestId_k__BackingField,
          PhaseCnt_k__BackingField + 1,
          v51,
          0LL);
        return;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v25);
      if ( v47 )
        goto LABEL_39;
    }
    if ( !byte_4B12DC6 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v25, v44);
      byte_4B12DC6 = 1;
    }
    Master_object = (QuestMaster_o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v25);
      Master_object = (QuestMaster_o *)TerminalPramsManager_TypeInfo;
    }
    klass_high = HIDWORD(Master_object[2].fields._lookup->klass);
    if ( !byte_4B12DC3 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v25, v44);
      Master_object = (QuestMaster_o *)TerminalPramsManager_TypeInfo;
      byte_4B12DC3 = 1;
    }
    if ( !LODWORD(Master_object[3].monitor) )
    {
      j_il2cpp_runtime_class_init_0(Master_object, v25);
      Master_object = (QuestMaster_o *)TerminalPramsManager_TypeInfo;
    }
    buckets_high = HIDWORD(Master_object[2].fields._lookup->fields._buckets);
    if ( !byte_4B12DCE )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v25, v44);
      Master_object = (QuestMaster_o *)TerminalPramsManager_TypeInfo;
      byte_4B12DCE = 1;
    }
    if ( !LODWORD(Master_object[3].monitor) )
    {
      j_il2cpp_runtime_class_init_0(Master_object, v25);
      Master_object = (QuestMaster_o *)TerminalPramsManager_TypeInfo;
    }
    if ( !mTerminalList )
      goto LABEL_73;
    ScrTerminalListTop__SetBattleSetupInfo(
      mTerminalList,
      klass_high,
      buckets_high,
      LODWORD(Master_object[2].fields._lookup->fields._entries) + 1,
      0,
      0,
      0,
      0LL);
    Master_object = (QuestMaster_o *)this->fields.mTerminalList;
    if ( !Master_object )
      goto LABEL_73;
    ScrTerminalListTop__StartFollower((ScrTerminalListTop_o *)Master_object, 0LL);
    return;
  }
  Master_object = (QuestMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Master_object )
    goto LABEL_73;
  BYTE3(Master_object[2].fields.seriazlier) = 1;
  if ( QuestEntity__HasFlag(v29, 0x800000000000LL, 0LL) )
  {
    v38 = this->fields.mTerminalList;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v35);
    if ( !byte_4B12DC3 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v35, v36);
      byte_4B12DC3 = 1;
    }
    v39 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v35);
      v39 = TerminalPramsManager_TypeInfo;
    }
    v40 = v39->static_fields->_QuestId_k__BackingField;
    if ( !byte_4B12DCE )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v35, v36);
      v39 = TerminalPramsManager_TypeInfo;
      byte_4B12DCE = 1;
    }
    if ( !v39->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v39, v35);
      v39 = TerminalPramsManager_TypeInfo;
    }
    v41 = v39->static_fields->_PhaseCnt_k__BackingField;
    v42 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v35, v36, v37);
    System_Action___ctor(v42, (Il2CppObject *)this, Method_TerminalSceneComponent__PlayAutoExecuteQuest_b__226_0__, 0LL);
    if ( v38 )
    {
      ScrTerminalListTop__StartWindowMessage_35017112(v38, v40, v41 + 1, 2, v42, 1, 0LL);
      return;
    }
LABEL_73:
    sub_1BCAA3C(Master_object, v25);
  }
  Master_object = (QuestMaster_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v54 = (clsQuestCheck_o *)Master_object;
  v55 = TerminalSceneComponent___c_TypeInfo;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo, v25);
    v55 = TerminalSceneComponent___c_TypeInfo;
  }
  _9__226_1 = v55->static_fields->__9__226_1;
  if ( !_9__226_1 )
  {
    if ( !v55->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v55, v25);
      v55 = TerminalSceneComponent___c_TypeInfo;
    }
    v57 = (Il2CppObject *)v55->static_fields->__9;
    _9__226_1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v25, v52, v53);
    System_Action___ctor(_9__226_1, v57, Method_TerminalSceneComponent___c__PlayAutoExecuteQuest_b__226_1__, 0LL);
    static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    static_fields->__9__226_1 = _9__226_1;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__226_1,
      (int64_t)_9__226_1,
      v59,
      v60,
      v61,
      v62,
      v63,
      v64);
  }
  if ( !v54 )
    goto LABEL_73;
  clsQuestCheck__PlayQuestStartAction(v54, _9__226_1, 0LL);
}


void __fastcall TerminalSceneComponent__PlayChapterStart(
        TerminalSceneComponent_o *this,
        TerminalSceneComponent_PlayChapterStartCallback_o *end_act,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  WarEntity_o *IsPlayChapterStart; // x0
  __int64 v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  __int64 v25; // x2
  Il2CppObject *Instance; // x20
  WarEntity_o *v27; // x20
  int32_t StartType; // w0
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  BattleScriptRootComponent_TalkScriptInfo_o *v32; // x21
  TerminalPramsManager_c *v33; // x0
  int32_t v34; // w22
  TerminalPramsManager_c *v35; // x0
  int32_t targetId; // w22
  int32_t WarId_k__BackingField; // w23
  TerminalPramsManager_c *v38; // x0
  BalanceConfig_c *v39; // x8
  int32_t v40; // w22
  TerminalSceneComponent_c *v41; // x0
  __int64 v42; // x1
  __int64 v43; // x2
  int64_t v44; // x22
  TerminalPramsManager_c *v45; // x0
  int32_t v46; // w22
  TerminalPramsManager_c *v47; // x0

  if ( (byte_4B182B7 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, end_act, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5, v6);
    sub_1BCA7E0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v7, v8);
    sub_1BCA7E0(&Method_SingletonTemplate_QuestTree__get_Instance__, v9, v10);
    sub_1BCA7E0(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo, v11, v12);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v15, v16);
    byte_4B182B7 = 1;
  }
  IsPlayChapterStart = (WarEntity_o *)TerminalSceneComponent__IsPlayChapterStart(this, (const MethodInfo *)end_act);
  if ( ((unsigned __int8)IsPlayChapterStart & 1) == 0 )
  {
    if ( end_act )
    {
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))end_act->fields.m_target)(
        end_act->fields.original_method_info,
        0LL,
        *(_QWORD *)&end_act->fields.extra_arg);
      return;
    }
    goto LABEL_64;
  }
  this->fields.OnResumeFromChapterStart = end_act;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.OnResumeFromChapterStart,
    (int64_t)end_act,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v18);
  if ( !byte_4B12DC6 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v18, v25);
    byte_4B12DC6 = 1;
  }
  IsPlayChapterStart = (WarEntity_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v18);
    IsPlayChapterStart = (WarEntity_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !Instance )
    goto LABEL_64;
  IsPlayChapterStart = QuestTree__mfGetWarEntityByWarID(
                         (QuestTree_o *)Instance,
                         *(_DWORD *)(*(_QWORD *)&IsPlayChapterStart[1].fields.parentWarId + 4LL),
                         0LL);
  if ( !IsPlayChapterStart )
    goto LABEL_64;
  v27 = IsPlayChapterStart;
  StartType = WarEntity__GetStartType(IsPlayChapterStart, 0LL);
  if ( StartType == 2 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v29);
    if ( !byte_4B12DC6 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v29, v30);
      byte_4B12DC6 = 1;
    }
    v35 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v29);
      v35 = TerminalPramsManager_TypeInfo;
    }
    targetId = v27->fields.targetId;
    WarId_k__BackingField = v35->static_fields->_WarId_k__BackingField;
    v32 = (BattleScriptRootComponent_TalkScriptInfo_o *)sub_1BCAA2C(
                                                          BattleScriptRootComponent_TalkScriptInfo_TypeInfo,
                                                          v29,
                                                          v30,
                                                          v31);
    BattleScriptRootComponent_TalkScriptInfo___ctor_45173136(v32, WarId_k__BackingField, targetId, 0, 1, 0, 0, 0, 0LL);
  }
  else
  {
    v32 = 0LL;
    if ( StartType == 1 )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v29);
      if ( !byte_4B12DC6 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v29, v30);
        byte_4B12DC6 = 1;
      }
      v33 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v29);
        v33 = TerminalPramsManager_TypeInfo;
      }
      v34 = v33->static_fields->_WarId_k__BackingField;
      v32 = (BattleScriptRootComponent_TalkScriptInfo_o *)sub_1BCAA2C(
                                                            BattleScriptRootComponent_TalkScriptInfo_TypeInfo,
                                                            v29,
                                                            v30,
                                                            v31);
      BattleScriptRootComponent_TalkScriptInfo___ctor_45173136(v32, v34, 0, 0, 1, 0, 0, 0, 0LL);
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v29);
  if ( !byte_4B12DC6 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v29, v30);
    byte_4B12DC6 = 1;
  }
  v38 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v29);
    v38 = TerminalPramsManager_TypeInfo;
  }
  v39 = BalanceConfig_TypeInfo;
  v40 = v38->static_fields->_WarId_k__BackingField;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v29);
    v39 = BalanceConfig_TypeInfo;
  }
  if ( v40 == v39->static_fields->OrdealCallWarId )
  {
    v41 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v29);
      v41 = TerminalSceneComponent_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v41->static_fields->ORDEAL_CALL_CHAPTER_PLAY_STATE_KEY, 1, 0LL);
  }
  if ( WarEntity__HasFlag(v27, 0x8000, 0LL) )
  {
    v44 = v27->fields.targetId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v42);
    if ( !byte_4B12DC7 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v42, v43);
      byte_4B12DC7 = 1;
    }
    v45 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v42);
      v45 = TerminalPramsManager_TypeInfo;
    }
    v45->static_fields->_QuestId_k__BackingField = v44;
    v46 = v27->fields.targetId;
    if ( !byte_4B13022 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v42, v43);
      v45 = TerminalPramsManager_TypeInfo;
      byte_4B13022 = 1;
    }
    if ( !v45->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v45, v42);
      v45 = TerminalPramsManager_TypeInfo;
    }
    v45->static_fields->_LastPlayedQuestId_k__BackingField = v46;
    TerminalPramsManager__CheckClearSelectedStoryQuestId(v27->fields.targetId, 0LL);
    TerminalPramsManager__PlayQuestSave_SaveData(0LL);
    IsPlayChapterStart = (WarEntity_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( IsPlayChapterStart )
    {
      MissionNotifyManager__StartPause((MissionNotifyManager_o *)IsPlayChapterStart, 0LL);
      IsPlayChapterStart = (WarEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( IsPlayChapterStart )
      {
        AvalonSceneManager__changeScene((AvalonSceneManager_o *)IsPlayChapterStart, 38, 2, (Il2CppObject *)v32, 0LL);
        return;
      }
    }
LABEL_64:
    sub_1BCAA3C(IsPlayChapterStart, v18);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v42);
  if ( !byte_4B1301D )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v42, v43);
    byte_4B1301D = 1;
  }
  v47 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v42);
    v47 = TerminalPramsManager_TypeInfo;
  }
  v47->static_fields->meSceneStatus = 3;
  IsPlayChapterStart = (WarEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !IsPlayChapterStart )
    goto LABEL_64;
  AvalonSceneManager__pushScene((AvalonSceneManager_o *)IsPlayChapterStart, 38, 2, (Il2CppObject *)v32, 0LL);
}


void __fastcall TerminalSceneComponent__PlayEventTutorial(
        TerminalSceneComponent_o *this,
        System_Action_o *callbackAfter,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x20
  UnityEngine_Component_o *EventID; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  __int64 v27; // x1
  __int64 v28; // x2
  TerminalPramsManager_c *v29; // x0
  struct ScrTerminalListTop_o *mTerminalList; // x8
  int32_t v31; // w21
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  System_Action_o *v35; // x22
  struct ScrTerminalMap_o *mTerminalMap; // x8
  struct MapControl_MapInfo_o *mMapInfo; // x8

  if ( (byte_4B182BA & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callbackAfter, method);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__DisplayClass231_0__PlayEventTutorial_b__0__, v8, v9);
    sub_1BCA7E0(&TerminalSceneComponent___c__DisplayClass231_0_TypeInfo, v10, v11);
    byte_4B182BA = 1;
  }
  v12 = sub_1BCAA2C(TerminalSceneComponent___c__DisplayClass231_0_TypeInfo, callbackAfter, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_16;
  *(_QWORD *)(v12 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v12 + 24) = callbackAfter;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 24), (int64_t)callbackAfter, v21, v22, v23, v24, v25, v26);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v27);
  if ( !byte_4B12DC6 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v27, v28);
    byte_4B12DC6 = 1;
  }
  v29 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v27);
    v29 = TerminalPramsManager_TypeInfo;
  }
  EventID = (UnityEngine_Component_o *)WarMaster__getEventID(v29->static_fields->_WarId_k__BackingField, 0LL);
  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_16;
  v31 = (int)EventID;
  EventID = (UnityEngine_Component_o *)mTerminalList->fields.mActionBgColl;
  if ( !EventID
    || (EventID = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(EventID, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)EventID, 1, 0LL),
        v35 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v32, v33, v34),
        System_Action___ctor(
          v35,
          (Il2CppObject *)v12,
          Method_TerminalSceneComponent___c__DisplayClass231_0__PlayEventTutorial_b__0__,
          0LL),
        (mTerminalMap = this->fields.mTerminalMap) == 0LL)
    || (mMapInfo = mTerminalMap->fields.mMapInfo) == 0LL )
  {
LABEL_16:
    sub_1BCAA3C(EventID, v14);
  }
  EventTutorialMaster__CheckTutorial(v31, 1, v35, mMapInfo->fields.mapId, 0, 0, 0, 0LL);
}


void __fastcall TerminalSceneComponent__PlayEventTutorialWithoutAfterAction(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x2
  TerminalPramsManager_c *v11; // x0
  struct ScrTerminalMap_o *mTerminalMap; // x8
  struct MapControl_MapInfo_o *mMapInfo; // x8

  if ( (byte_4B182BB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, callback, method);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v5, v6);
    byte_4B182BB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  if ( QuestAfterAction__IsPlaying((QuestAfterAction_o *)Instance, 0LL) )
  {
    ActionExtensions__Call(callback, 0LL);
    return;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v9);
  if ( !byte_4B12DC6 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v9, v10);
    byte_4B12DC6 = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v9);
    v11 = TerminalPramsManager_TypeInfo;
  }
  Instance = (Il2CppObject *)WarMaster__getEventID(v11->static_fields->_WarId_k__BackingField, 0LL);
  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap || (mMapInfo = mTerminalMap->fields.mMapInfo) == 0LL )
LABEL_15:
    sub_1BCAA3C(Instance, v8);
  EventTutorialMaster__CheckTutorial((int32_t)Instance, 90, callback, mMapInfo->fields.mapId, 0, 0, 0, 0LL);
}


void __fastcall TerminalSceneComponent__PlayRaidTutorial(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall TerminalSceneComponent__PlayTutorial(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  unsigned int v3; // w8

  v3 = this->fields.mTutorialKind - 1;
  if ( v3 <= 4 )
    TerminalSceneComponent__SetState(this, (2 * v3) | 1, v2);
}


bool __fastcall TerminalSceneComponent__QuestInfoBusy(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  QuestInformationComponent_o *mQuestInformation; // x0

  mQuestInformation = this->fields.mQuestInformation;
  if ( !mQuestInformation )
    goto LABEL_6;
  if ( QuestInformationComponent__isMoving(mQuestInformation, 0LL) )
    return 1;
  mQuestInformation = this->fields.mQuestInformation;
  if ( !mQuestInformation )
LABEL_6:
    sub_1BCAA3C(mQuestInformation, method);
  return QuestInformationComponent__isListBuilding(mQuestInformation, 0LL);
}


int32_t __fastcall TerminalSceneComponent__QuestInfoShowing(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  struct QuestInformationComponent_o *mQuestInformation; // x8

  mQuestInformation = this->fields.mQuestInformation;
  if ( !mQuestInformation )
    sub_1BCAA3C(this, method);
  return mQuestInformation->fields.settedQuestId;
}


void __fastcall TerminalSceneComponent__RebootToNetworkError(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  Il2CppObject *Instance; // x19
  System_String_o *v17; // x20
  System_String_o *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  TerminalSceneComponent___c_c *v22; // x8
  System_String_o *v23; // x21
  ErrorDialog_ClickDelegate_o *_9__213_0; // x22
  Il2CppObject *v25; // x23
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7

  if ( (byte_4B182AE & 1) == 0 )
  {
    sub_1BCA7E0(&ErrorDialog_ClickDelegate_TypeInfo, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v3, v4);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__RebootToNetworkError_b__213_0__, v7, v8);
    sub_1BCA7E0(&TerminalSceneComponent___c_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_13443/*"TERMINAL_NETWORK_ERROR_DIALOG_TITLE"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_13442/*"TERMINAL_NETWORK_ERROR_DIALOG_MESSAGE"*/, v13, v14);
    byte_4B182AE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_13443/*"TERMINAL_NETWORK_ERROR_DIALOG_TITLE"*/, 0LL);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_13442/*"TERMINAL_NETWORK_ERROR_DIALOG_MESSAGE"*/, 0LL);
  v22 = TerminalSceneComponent___c_TypeInfo;
  v23 = v18;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo, v19);
    v22 = TerminalSceneComponent___c_TypeInfo;
  }
  _9__213_0 = v22->static_fields->__9__213_0;
  if ( !_9__213_0 )
  {
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22, v19);
      v22 = TerminalSceneComponent___c_TypeInfo;
    }
    v25 = (Il2CppObject *)v22->static_fields->__9;
    _9__213_0 = (ErrorDialog_ClickDelegate_o *)sub_1BCAA2C(ErrorDialog_ClickDelegate_TypeInfo, v19, v20, v21);
    ErrorDialog_ClickDelegate___ctor(
      _9__213_0,
      v25,
      Method_TerminalSceneComponent___c__RebootToNetworkError_b__213_0__,
      0LL);
    static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    static_fields->__9__213_0 = _9__213_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__213_0,
      (int64_t)_9__213_0,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  if ( !Instance )
    sub_1BCAA3C(v18, v19);
  CommonUI__OpenErrorDialog((CommonUI_o *)Instance, v17, v23, _9__213_0, 1, 0LL);
}


void __fastcall TerminalSceneComponent__SaveCommonUICampaignDirectBonus(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  CommonUI_CampaignDirectBonusData_array *CampaignDirectBonus; // x19
  TerminalPramsManager_c *v15; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_4B182C0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v3, v4);
    byte_4B182C0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  if ( !CommonUI__get_CampaignDirectBonus((CommonUI_o *)Instance, 0LL) )
    return;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
LABEL_14:
    sub_1BCAA3C(Instance, v6);
  CampaignDirectBonus = CommonUI__get_CampaignDirectBonus((CommonUI_o *)Instance, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7);
  if ( !byte_4B13809 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v7, v8);
    byte_4B13809 = 1;
  }
  v15 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7);
    v15 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v15->static_fields;
  static_fields->_CampaignDirectBonus_k__BackingField = CampaignDirectBonus;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->_CampaignDirectBonus_k__BackingField,
    (int64_t)CampaignDirectBonus,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  TerminalPramsManager__CampaignDirectBonus_SaveData(0LL);
}


void __fastcall TerminalSceneComponent__SendMessageStartUpAndResume(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  CommonUI_o *v8; // x20
  struct TerminalSceneComponent_PlayChapterStartCallback_o *v9; // x8
  PartyOrganizationUtility_o *p_OnResumeFromChapterStart; // x19
  struct TerminalSceneComponent_PlayChapterStartCallback_o *OnResumeFromChapterStart; // t1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4B1828C & 1) == 0 )
  {
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    byte_4B1828C = 1;
  }
  SceneRootComponent__sendMessageStartUp((SceneRootComponent_o *)this, 0LL);
  if ( this->fields.isFadeInAfterResumeLoad )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v7);
    if ( !v8 )
      sub_1BCAA3C(Instance, v7);
    CommonUI__maskFadein(v8, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
    this->fields.isFadeInAfterResumeLoad = 0;
  }
  OnResumeFromChapterStart = this->fields.OnResumeFromChapterStart;
  p_OnResumeFromChapterStart = (PartyOrganizationUtility_o *)&this->fields.OnResumeFromChapterStart;
  v9 = OnResumeFromChapterStart;
  if ( OnResumeFromChapterStart )
  {
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      1LL,
      *(_QWORD *)&v9->fields.extra_arg);
    p_OnResumeFromChapterStart->klass = 0LL;
    sub_1BCA784(p_OnResumeFromChapterStart, 0LL, v12, v13, v14, v15, v16, v17);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalSceneComponent__SetActionBGColl(
        TerminalSceneComponent_o *this,
        bool isEnable,
        System_Action_o *callback,
        const MethodInfo *method)
{
  struct ScrTerminalListTop_o *mTerminalList; // x8

  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList
    || (this = (TerminalSceneComponent_o *)mTerminalList->fields.mActionBgColl) == 0LL
    || (this = (TerminalSceneComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL )
  {
    sub_1BCAA3C(this, isEnable);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, isEnable, 0LL);
  ActionExtensions__Call(callback, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalSceneComponent__SetDirectionalLightActive(
        TerminalSceneComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  UnityEngine_Object_o *GameObjectWithLog; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1

  if ( (byte_4B182CD & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, isActive, method);
    sub_1BCA7E0(&StringLiteral_5391/*"Directional light"*/, v5, v6);
    byte_4B182CD = 1;
  }
  GameObjectWithLog = (UnityEngine_Object_o *)GameObjectExtensions__FindGameObjectWithLog(
                                                this->fields.mEarthCoreObj,
                                                (System_String_o *)StringLiteral_5391/*"Directional light"*/,
                                                0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  v9 = UnityEngine_Object__op_Equality(GameObjectWithLog, 0LL, 0LL);
  if ( !v9 )
  {
    if ( !GameObjectWithLog )
      sub_1BCAA3C(v9, v10);
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)GameObjectWithLog, isActive, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalSceneComponent__SetDispStandServant(
        TerminalSceneComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  UnityEngine_Component_o *mTerminalServant; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  long double v7; // q0

  if ( (byte_4B18296 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, isDisp, method);
    byte_4B18296 = 1;
  }
  mTerminalServant = (UnityEngine_Component_o *)this->fields.mTerminalServant;
  if ( !mTerminalServant
    || (gameObject = UnityEngine_Component__get_gameObject(mTerminalServant, 0LL),
        (mTerminalServant = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(gameObject, 0LL)) == 0LL)
    || (mTerminalServant = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mTerminalServant, 0LL)) == 0LL
    || (mTerminalServant = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                        (UnityEngine_GameObject_o *)mTerminalServant,
                                                        (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___)) == 0LL )
  {
    sub_1BCAA3C(mTerminalServant, isDisp);
  }
  LODWORD(v7) = 0;
  if ( isDisp )
    *(float *)&v7 = 1.0;
  ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, long double))mTerminalServant->klass[1]._1.castClass)(
    mTerminalServant,
    mTerminalServant->klass[1]._1.declaringType,
    v7);
}


void __fastcall TerminalSceneComponent__SetEarthView(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x20
  UnityEngine_Camera_o *mEarthEffCamera; // x0
  __int64 v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  __int64 v35; // x1
  UnityEngine_Object_o *mEarthCore; // x21
  __int64 v37; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v39; // x0
  __int64 v40; // x1
  TerminalSceneComponent_c *v41; // x0
  int *v42; // x1
  System_String_o *EARTH_ASSET_NAME; // x21
  System_Int32_c *v44; // x0
  UnityEngine_GameObject_o *v45; // x0
  UnityEngine_GameObject_o *v46; // x0
  __int64 v47; // x1
  TerminalSceneComponent_c *v48; // x0
  Il2CppObject *v49; // x0
  struct System_String_o *v50; // x0
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  Il2CppObject *Instance; // x0
  System_String_o *loadEarthAssetName; // x19
  AssetManager_o *v59; // x21
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  AssetLoader_LoadEndDataHandler_o *v63; // x22
  int v64; // [xsp+8h] [xbp-38h] BYREF
  int v65; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B18289 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, callback, method);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    sub_1BCA7E0(&ServantCommentManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v12, v13);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__DisplayClass173_0__SetEarthView_b__0__, v16, v17);
    sub_1BCA7E0(&TerminalSceneComponent___c__DisplayClass173_0_TypeInfo, v18, v19);
    byte_4B18289 = 1;
  }
  v20 = sub_1BCAA2C(TerminalSceneComponent___c__DisplayClass173_0_TypeInfo, callback, method, v3);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !v20 )
    goto LABEL_30;
  *(_QWORD *)(v20 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v20 + 16), (int64_t)this, v23, v24, v25, v26, v27, v28);
  *(_QWORD *)(v20 + 24) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v20 + 24), (int64_t)callback, v29, v30, v31, v32, v33, v34);
  mEarthCore = (UnityEngine_Object_o *)this->fields.mEarthCore;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v35);
  if ( UnityEngine_Object__op_Inequality(mEarthCore, 0LL, 0LL) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v20 + 24), 0LL);
    return;
  }
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v37);
  mEarthEffCamera = (UnityEngine_Camera_o *)ServantCommentManager__GetUiChangeType(0LL);
  if ( !this->fields.mEarthCamera )
    goto LABEL_30;
  if ( (_DWORD)mEarthEffCamera == 1 )
  {
    UnityEngine_Camera__set_orthographic(this->fields.mEarthCamera, 0, 0LL);
    mEarthEffCamera = this->fields.mEarthEffCamera;
    if ( mEarthEffCamera )
    {
      UnityEngine_Camera__set_orthographic(mEarthEffCamera, 0, 0LL);
      mEarthEffCamera = this->fields.mEarthCamera;
      if ( mEarthEffCamera )
      {
        UnityEngine_Camera__set_fieldOfView(mEarthEffCamera, 32.269, 0LL);
        mEarthEffCamera = this->fields.mEarthEffCamera;
        if ( mEarthEffCamera )
        {
          UnityEngine_Camera__set_fieldOfView(mEarthEffCamera, 32.269, 0LL);
          mEarthEffCamera = this->fields.mEarthCamera;
          if ( mEarthEffCamera )
          {
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mEarthEffCamera, 0LL);
            GameObjectExtensions__SetLocalPositionZ(gameObject, -792.87, 0LL);
            mEarthEffCamera = this->fields.mEarthEffCamera;
            if ( mEarthEffCamera )
            {
              v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mEarthEffCamera, 0LL);
              GameObjectExtensions__SetLocalPositionZ(v39, -792.87, 0LL);
              v41 = TerminalSceneComponent_TypeInfo;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v40);
                v41 = TerminalSceneComponent_TypeInfo;
              }
              v42 = &v65;
              EARTH_ASSET_NAME = v41->static_fields->EARTH_ASSET_NAME;
              v44 = int_TypeInfo;
              v65 = 2;
              goto LABEL_28;
            }
          }
        }
      }
    }
LABEL_30:
    sub_1BCAA3C(mEarthEffCamera, v22);
  }
  UnityEngine_Camera__set_orthographic(this->fields.mEarthCamera, 1, 0LL);
  mEarthEffCamera = this->fields.mEarthEffCamera;
  if ( !mEarthEffCamera )
    goto LABEL_30;
  UnityEngine_Camera__set_orthographic(mEarthEffCamera, 1, 0LL);
  mEarthEffCamera = this->fields.mEarthCamera;
  if ( !mEarthEffCamera )
    goto LABEL_30;
  UnityEngine_Camera__set_orthographicSize(mEarthEffCamera, 1.0, 0LL);
  mEarthEffCamera = this->fields.mEarthEffCamera;
  if ( !mEarthEffCamera )
    goto LABEL_30;
  UnityEngine_Camera__set_orthographicSize(mEarthEffCamera, 1.0, 0LL);
  mEarthEffCamera = this->fields.mEarthCamera;
  if ( !mEarthEffCamera )
    goto LABEL_30;
  v45 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mEarthEffCamera, 0LL);
  GameObjectExtensions__SetLocalPositionZ(v45, -50000.0, 0LL);
  mEarthEffCamera = this->fields.mEarthEffCamera;
  if ( !mEarthEffCamera )
    goto LABEL_30;
  v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mEarthEffCamera, 0LL);
  GameObjectExtensions__SetLocalPositionZ(v46, -50000.0, 0LL);
  v48 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v47);
    v48 = TerminalSceneComponent_TypeInfo;
  }
  v42 = &v64;
  EARTH_ASSET_NAME = v48->static_fields->EARTH_ASSET_NAME;
  v44 = int_TypeInfo;
  v64 = 1;
LABEL_28:
  v49 = (Il2CppObject *)j_il2cpp_value_box_0(v44, v42);
  v50 = System_String__Format(EARTH_ASSET_NAME, v49, 0LL);
  this->fields.loadEarthAssetName = v50;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.loadEarthAssetName,
    (int64_t)v50,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  loadEarthAssetName = this->fields.loadEarthAssetName;
  v59 = (AssetManager_o *)Instance;
  v63 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v60, v61, v62);
  AssetLoader_LoadEndDataHandler___ctor(
    v63,
    (Il2CppObject *)v20,
    Method_TerminalSceneComponent___c__DisplayClass173_0__SetEarthView_b__0__,
    0LL);
  if ( !v59 )
    goto LABEL_30;
  AssetManager__LoadAssetStorage(v59, loadEarthAssetName, v63, 1, 0LL);
}


void __fastcall TerminalSceneComponent__SetQuestBoardInfoOff(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  struct ScrTerminalListTop_o *mTerminalList; // x0
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x8

  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList || (mQuestBoardListViewManager = mTerminalList->fields.mQuestBoardListViewManager) == 0LL )
    sub_1BCAA3C(mTerminalList, method);
  mQuestBoardListViewManager->fields._IsShowingInfo_k__BackingField = 0;
  ScrTerminalListTop__ShowingInfoAllOff(mTerminalList, 0LL);
}


void __fastcall TerminalSceneComponent__SetQuestInfoResetReady(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  QuestInformationComponent_o *mQuestInformation; // x0

  mQuestInformation = this->fields.mQuestInformation;
  if ( !mQuestInformation )
    sub_1BCAA3C(0LL, method);
  QuestInformationComponent__SetResetReady(mQuestInformation, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalSceneComponent__SetState(
        TerminalSceneComponent_o *this,
        int32_t state,
        const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4B182BD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_TerminalSceneComponent__setState__, *(_QWORD *)&state, method);
    byte_4B182BD = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1BCAA3C(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_313FCF8 *)Method_CStateManager_TerminalSceneComponent__setState__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalSceneComponent__SetupStandServant(
        TerminalSceneComponent_o *this,
        UserServantEntity_o *usd,
        bool isSlideIn,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  StandFigureSlideComponent_o *mTerminalServant; // x22
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  System_Action_o *v34; // x23
  struct StandFigureSlideComponent_o *v35; // x19
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  System_Action_o *v39; // x20
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7

  if ( (byte_4B18295 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, usd, isSlideIn);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__DisplayClass187_0__SetupStandServant_b__0__, v9, v10);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__DisplayClass187_0__SetupStandServant_b__1__, v11, v12);
    sub_1BCA7E0(&TerminalSceneComponent___c__DisplayClass187_0_TypeInfo, v13, v14);
    byte_4B18295 = 1;
  }
  v15 = sub_1BCAA2C(TerminalSceneComponent___c__DisplayClass187_0_TypeInfo, usd, isSlideIn, endAction);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_7;
  *(_BYTE *)(v15 + 16) = isSlideIn;
  *(_QWORD *)(v15 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 24), (int64_t)this, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v15 + 32) = endAction;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 32), (int64_t)endAction, v24, v25, v26, v27, v28, v29);
  mTerminalServant = this->fields.mTerminalServant;
  v34 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v31, v32, v33);
  System_Action___ctor(
    v34,
    (Il2CppObject *)v15,
    Method_TerminalSceneComponent___c__DisplayClass187_0__SetupStandServant_b__0__,
    0LL);
  if ( !mTerminalServant
    || (StandFigureSlideComponent__Setup(mTerminalServant, usd, 0, v34, 0LL),
        v35 = this->fields.mTerminalServant,
        v39 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v36, v37, v38),
        System_Action___ctor(
          v39,
          (Il2CppObject *)v15,
          Method_TerminalSceneComponent___c__DisplayClass187_0__SetupStandServant_b__1__,
          0LL),
        !v35) )
  {
LABEL_7:
    sub_1BCAA3C(v16, v17);
  }
  v35->fields.mBtnAct = v39;
  sub_1BCA784((PartyOrganizationUtility_o *)&v35->fields.mBtnAct, (int64_t)v39, v40, v41, v42, v43, v44, v45);
}


void __fastcall TerminalSceneComponent__StartEventDailyPoint(
        TerminalSceneComponent_o *this,
        int32_t eventId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  const MethodInfo *v13; // x2

  if ( TerminalSceneComponent__CheckEventDailyPoint(this, eventId, (const MethodInfo *)callback) )
  {
    this->fields.afterEventDailyPoint = callback;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.afterEventDailyPoint,
      (int64_t)callback,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    TerminalSceneComponent__requestEventDailyPoint(this, eventId, v13);
  }
  else
  {
    ActionExtensions__Call(callback, 0LL);
  }
}


void __fastcall TerminalSceneComponent__StartWindowMessage(
        TerminalSceneComponent_o *this,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  TerminalPramsManager_c *v23; // x0
  TerminalPramsManager_c *v24; // x0
  void *v25; // x0
  __int64 v26; // x8
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x19
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  System_Action_object__o *v33; // x21
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t v40; // x2
  __int64 v41; // x3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  System_Action_object__o *v46; // x20
  Il2CppObject *v47; // x21
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  int64_t v55; // x2
  __int64 v56; // x3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  System_Action_object__o *v61; // x20
  Il2CppObject *v62; // x21
  struct TerminalSceneComponent___c_StaticFields *v63; // x0
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  int64_t v70; // x2
  __int64 v71; // x3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  System_Action_object__o *v76; // x20
  Il2CppObject *v77; // x21
  struct TerminalSceneComponent___c_StaticFields *v78; // x0
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x3
  ActionChain_o *v88; // x20

  if ( (byte_4B1829F & 1) == 0 )
  {
    sub_1BCA7E0(&ActionChain_TypeInfo, callbackFunc, method);
    sub_1BCA7E0(&System_Action_Action____TypeInfo, v5, v6);
    sub_1BCA7E0(&System_Action_Action__TypeInfo, v7, v8);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_TerminalSceneComponent__StartWindowMessage_b__198_0__, v11, v12);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__StartWindowMessage_b__198_1__, v15, v16);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__StartWindowMessage_b__198_2__, v17, v18);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__StartWindowMessage_b__198_3__, v19, v20);
    sub_1BCA7E0(&TerminalSceneComponent___c_TypeInfo, v21, v22);
    byte_4B1829F = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, callbackFunc);
  if ( !byte_4B12054 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, callbackFunc, method);
    byte_4B12054 = 1;
  }
  v23 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, callbackFunc);
    v23 = TerminalPramsManager_TypeInfo;
  }
  if ( v23->static_fields->_IsDispOnly_k__BackingField )
  {
    if ( !v23->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v23, callbackFunc);
    if ( !byte_4B18384 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, callbackFunc, method);
      byte_4B18384 = 1;
    }
    v24 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, callbackFunc);
      v24 = TerminalPramsManager_TypeInfo;
    }
    if ( !System_String__IsNullOrEmpty(v24->static_fields->_QuestWindowMessage_k__BackingField, 0LL) )
    {
      v29 = sub_1BCA888(System_Action_Action____TypeInfo, 4LL);
      v33 = (System_Action_object__o *)sub_1BCAA2C(System_Action_Action__TypeInfo, v30, v31, v32);
      System_Action_object____ctor(
        v33,
        (Il2CppObject *)this,
        Method_TerminalSceneComponent__StartWindowMessage_b__198_0__,
        0LL);
      if ( v29 )
      {
        if ( !*(_DWORD *)(v29 + 24) )
          goto LABEL_55;
        *(_QWORD *)(v29 + 32) = v33;
        sub_1BCA784((PartyOrganizationUtility_o *)(v29 + 32), (int64_t)v33, v34, v35, v36, v37, v38, v39);
        v25 = TerminalSceneComponent___c_TypeInfo;
        if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo, callbackFunc);
          v25 = TerminalSceneComponent___c_TypeInfo;
        }
        v46 = *(System_Action_object__o **)(*((_QWORD *)v25 + 23) + 40LL);
        if ( !v46 )
        {
          if ( !*((_DWORD *)v25 + 56) )
          {
            j_il2cpp_runtime_class_init_0(v25, callbackFunc);
            v25 = TerminalSceneComponent___c_TypeInfo;
          }
          v47 = (Il2CppObject *)**((_QWORD **)v25 + 23);
          v46 = (System_Action_object__o *)sub_1BCAA2C(System_Action_Action__TypeInfo, callbackFunc, v40, v41);
          System_Action_object____ctor(v46, v47, Method_TerminalSceneComponent___c__StartWindowMessage_b__198_1__, 0LL);
          static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
          static_fields->__9__198_1 = (struct System_Action_Action__o *)v46;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&static_fields->__9__198_1,
            (int64_t)v46,
            v49,
            v50,
            v51,
            v52,
            v53,
            v54);
        }
        if ( *(_DWORD *)(v29 + 24) <= 1u )
          goto LABEL_55;
        *(_QWORD *)(v29 + 40) = v46;
        sub_1BCA784((PartyOrganizationUtility_o *)(v29 + 40), (int64_t)v46, v40, v41, v42, v43, v44, v45);
        v25 = TerminalSceneComponent___c_TypeInfo;
        if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo, callbackFunc);
          v25 = TerminalSceneComponent___c_TypeInfo;
        }
        v61 = *(System_Action_object__o **)(*((_QWORD *)v25 + 23) + 48LL);
        if ( !v61 )
        {
          if ( !*((_DWORD *)v25 + 56) )
          {
            j_il2cpp_runtime_class_init_0(v25, callbackFunc);
            v25 = TerminalSceneComponent___c_TypeInfo;
          }
          v62 = (Il2CppObject *)**((_QWORD **)v25 + 23);
          v61 = (System_Action_object__o *)sub_1BCAA2C(System_Action_Action__TypeInfo, callbackFunc, v55, v56);
          System_Action_object____ctor(v61, v62, Method_TerminalSceneComponent___c__StartWindowMessage_b__198_2__, 0LL);
          v63 = TerminalSceneComponent___c_TypeInfo->static_fields;
          v63->__9__198_2 = (struct System_Action_Action__o *)v61;
          sub_1BCA784((PartyOrganizationUtility_o *)&v63->__9__198_2, (int64_t)v61, v64, v65, v66, v67, v68, v69);
        }
        if ( *(_DWORD *)(v29 + 24) <= 2u )
          goto LABEL_55;
        *(_QWORD *)(v29 + 48) = v61;
        sub_1BCA784((PartyOrganizationUtility_o *)(v29 + 48), (int64_t)v61, v55, v56, v57, v58, v59, v60);
        v25 = TerminalSceneComponent___c_TypeInfo;
        if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo, callbackFunc);
          v25 = TerminalSceneComponent___c_TypeInfo;
        }
        v76 = *(System_Action_object__o **)(*((_QWORD *)v25 + 23) + 56LL);
        if ( !v76 )
        {
          if ( !*((_DWORD *)v25 + 56) )
          {
            j_il2cpp_runtime_class_init_0(v25, callbackFunc);
            v25 = TerminalSceneComponent___c_TypeInfo;
          }
          v77 = (Il2CppObject *)**((_QWORD **)v25 + 23);
          v76 = (System_Action_object__o *)sub_1BCAA2C(System_Action_Action__TypeInfo, callbackFunc, v70, v71);
          System_Action_object____ctor(v76, v77, Method_TerminalSceneComponent___c__StartWindowMessage_b__198_3__, 0LL);
          v78 = TerminalSceneComponent___c_TypeInfo->static_fields;
          v78->__9__198_3 = (struct System_Action_Action__o *)v76;
          sub_1BCA784((PartyOrganizationUtility_o *)&v78->__9__198_3, (int64_t)v76, v79, v80, v81, v82, v83, v84);
        }
        if ( *(_DWORD *)(v29 + 24) <= 3u )
LABEL_55:
          sub_1BCAA44(v25, callbackFunc);
        *(_QWORD *)(v29 + 56) = v76;
        sub_1BCA784((PartyOrganizationUtility_o *)(v29 + 56), (int64_t)v76, v70, v71, v72, v73, v74, v75);
        v88 = (ActionChain_o *)sub_1BCAA2C(ActionChain_TypeInfo, v85, v86, v87);
        ActionChain___ctor_47118216(v88, (System_Action_Action__array *)v29, 0LL);
        if ( v88 )
        {
          ChainableActionBase__Execute((ChainableActionBase_o *)v88, 0LL);
          return;
        }
      }
LABEL_54:
      sub_1BCAA3C(v25, callbackFunc);
    }
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, callbackFunc);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, callbackFunc, method);
    byte_4B10F83 = 1;
  }
  v25 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, callbackFunc);
    v25 = TerminalSceneComponent_TypeInfo;
  }
  v26 = **((_QWORD **)v25 + 23);
  if ( !v26 )
    goto LABEL_54;
  v27 = *(_QWORD *)(v26 + 264);
  if ( !v27 )
    goto LABEL_54;
  v25 = *(void **)(v27 + 552);
  if ( !v25 )
    goto LABEL_54;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v25, 0, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v28);
  TerminalPramsManager__InitMessageWindowData(0LL);
  ActionExtensions__Call(callbackFunc, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalSceneComponent__TriggerEventEffectsNext(
        TerminalSceneComponent_o *this,
        int32_t eventId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B182A2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&eventId, callback);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B182A2 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_15;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          eventId,
          (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_15;
  if ( EventDetailEntity__isTower((EventDetailEntity_o *)entity, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.mTitleInfo;
    if ( !Instance )
      goto LABEL_15;
    TitleInfoControl__EventTowerStart((TitleInfoControl_o *)Instance, (EventDetailEntity_o *)entity, callback, 0LL);
  }
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_15;
  if ( !EventDetailEntity__IsSuperBoss((EventDetailEntity_o *)entity, 0LL) )
    return;
  Instance = (DataManager_o *)this->fields.mTitleInfo;
  if ( !Instance )
LABEL_15:
    sub_1BCAA3C(Instance, v12);
  TitleInfoControl__CheckSuperBossHpAnim((TitleInfoControl_o *)Instance, callback, 0LL);
}


void __fastcall TerminalSceneComponent__Update(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  const MethodInfo *v6; // x1
  CStateManager_T__o *mFSM; // x0
  ScrTerminalMap_o *mTerminalMap; // x20
  _BOOL8 IsMapTouchEnabled; // x0
  __int64 v10; // x1

  if ( (byte_4B182A4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_TerminalSceneComponent__update__, method, v2);
    sub_1BCA7E0(&CTouch_TypeInfo, v4, v5);
    byte_4B182A4 = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, method);
  CTouch__process(0LL);
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_313FCD4 *)Method_CStateManager_TerminalSceneComponent__update__);
  mTerminalMap = this->fields.mTerminalMap;
  IsMapTouchEnabled = TerminalSceneComponent__IsMapTouchEnabled(this, v6);
  if ( !mTerminalMap )
    sub_1BCAA3C(IsMapTouchEnabled, v10);
  ScrTerminalMap__ProcessMapCamera(mTerminalMap, IsMapTouchEnabled, 0LL);
}


void __fastcall TerminalSceneComponent__UpdateCompleteMissionIconUI(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  ScrPlayerStatus_o *mPlayerStatus; // x0

  mPlayerStatus = this->fields.mPlayerStatus;
  if ( !mPlayerStatus )
    sub_1BCAA3C(0LL, method);
  ScrPlayerStatus__UpdateCompleteMissionIconUI(mPlayerStatus, 0LL);
}


void __fastcall TerminalSceneComponent__UpdateQuestBoardList(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  struct ScrTerminalListTop_o *mTerminalList; // x8

  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList || (this = (TerminalSceneComponent_o *)mTerminalList->fields.mQuestBoardListViewManager) == 0LL )
    sub_1BCAA3C(this, method);
  QuestBoardListViewManager__SetupDisp((QuestBoardListViewManager_o *)this, 0LL);
}


void __fastcall TerminalSceneComponent__UpdateTitleEventInfo(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *mTitleInfo; // x0

  mTitleInfo = this->fields.mTitleInfo;
  if ( !mTitleInfo )
    sub_1BCAA3C(0LL, method);
  TitleInfoControl__UpdateEventItemInfo(mTitleInfo, 0LL);
}


System_Collections_IEnumerator_o *__fastcall TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x19

  if ( (byte_4B18299 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__192_TypeInfo, method, v2);
    byte_4B18299 = 1;
  }
  v4 = sub_1BCAA2C(TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__192_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = 0;
  return (System_Collections_IEnumerator_o *)v4;
}


bool __fastcall TerminalSceneComponent___CoWaitBlankEarthActionEnd_b__253_0(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  CommonUI_o *mTerminalList; // x0

  if ( (byte_4B182D9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B182D9 = 1;
  }
  mTerminalList = (CommonUI_o *)this->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_9;
  if ( !ScrTerminalListTop__IsBlankEarthAction((ScrTerminalListTop_o *)mTerminalList, 0LL) )
  {
    mTerminalList = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( mTerminalList )
      return !CommonUI__IsActive_NotifiDialog(mTerminalList, 0LL);
LABEL_9:
    sub_1BCAA3C(mTerminalList, method);
  }
  return 0;
}


bool __fastcall TerminalSceneComponent___CoWaitTerminalTopEffectEnd_b__252_0(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  CommonUI_o *mTerminalList; // x0

  if ( (byte_4B182D8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B182D8 = 1;
  }
  mTerminalList = (CommonUI_o *)this->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_9;
  if ( ScrTerminalListTop__CheckTerminalTopEffect((ScrTerminalListTop_o *)mTerminalList, 0LL) <= 0 )
  {
    mTerminalList = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( mTerminalList )
      return !CommonUI__IsActive_NotifiDialog(mTerminalList, 0LL);
LABEL_9:
    sub_1BCAA3C(mTerminalList, method);
  }
  return 0;
}


bool __fastcall TerminalSceneComponent___OpenExchangeDialogue_b__256_3(
        TerminalSceneComponent_o *this,
        ShopEntity_o *x,
        const MethodInfo *method)
{
  return !TerminalSceneComponent__IsNotDisplayCostume(this, x, method);
}


void __fastcall TerminalSceneComponent___PlayAutoExecuteQuest_b__226_0(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ScrTerminalMap_o *mTerminalMap; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  TerminalPramsManager_c *v7; // x0
  int32_t QuestId_k__BackingField; // w21
  __int64 v9; // x1
  __int64 v10; // x2
  TerminalPramsManager_c *v11; // x0
  bool HasFlag; // w0
  __int64 v13; // x1
  __int64 v14; // x2
  TerminalPramsManager_c *v15; // x8
  TerminalPramsManager_c *v16; // x0
  __int64 v17; // x2
  int32_t SpotId; // w21
  __int64 v19; // x2
  bool Effect; // w21
  ScrTerminalListTop_o *mTerminalList; // x20
  int32_t v22; // w21

  if ( (byte_4B182D5 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B182D5 = 1;
  }
  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_55;
  if ( ScrTerminalMap__IsAllMaskActive(mTerminalMap, 0LL) )
  {
    mTerminalMap = this->fields.mTerminalMap;
    if ( !mTerminalMap )
      goto LABEL_55;
    ScrTerminalMap__AllMaskEnd(mTerminalMap, 0LL);
  }
  mTerminalMap = (ScrTerminalMap_o *)this->fields.mTerminalList;
  if ( !mTerminalMap )
    goto LABEL_55;
  ScrTerminalListTop__IsAllTouchEnable((ScrTerminalListTop_o *)mTerminalMap, 0, 0LL, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5);
  if ( !byte_4B12DC3 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v5, v6);
    byte_4B12DC3 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5);
    v7 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v7->static_fields->_QuestId_k__BackingField;
  if ( !byte_4B13022 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v5, v6);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4B13022 = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7, v5);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_LastPlayedQuestId_k__BackingField = QuestId_k__BackingField;
  if ( !byte_4B12DC3 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v5, v6);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4B12DC3 = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7, v5);
    v7 = TerminalPramsManager_TypeInfo;
  }
  TerminalPramsManager__CheckClearSelectedStoryQuestId(v7->static_fields->_QuestId_k__BackingField, 0LL);
  if ( !byte_4B12DC3 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v9, v10);
    byte_4B12DC3 = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v9);
    v11 = TerminalPramsManager_TypeInfo;
  }
  HasFlag = QuestMaster__HasFlag(v11->static_fields->_QuestId_k__BackingField, 0x8000000000LL, 0LL);
  v15 = TerminalPramsManager_TypeInfo;
  if ( HasFlag )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v13);
    if ( !byte_4B12DC3 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v13, v14);
      byte_4B12DC3 = 1;
    }
    v16 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v13);
      v16 = TerminalPramsManager_TypeInfo;
    }
    SpotId = QuestMaster__GetSpotId(v16->static_fields->_QuestId_k__BackingField, 0LL);
    if ( !byte_4B13023 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v13, v17);
      byte_4B13023 = 1;
    }
    v15 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v13);
      v15 = TerminalPramsManager_TypeInfo;
    }
    v15->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = SpotId;
  }
  if ( !v15->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v15, v13);
  TerminalPramsManager__PlayQuestSave_SaveData(0LL);
  TerminalPramsManager__Save_SaveData(0LL);
  mTerminalMap = (ScrTerminalMap_o *)this->fields.mTerminalList;
  if ( !mTerminalMap )
    goto LABEL_55;
  Effect = ScrTerminalListTop__IsDisplayGetEffect((ScrTerminalListTop_o *)mTerminalMap, 0LL);
  if ( !byte_4B13024 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v19);
    byte_4B13024 = 1;
  }
  mTerminalMap = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    mTerminalMap = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
  }
  BYTE2(mTerminalMap->fields.subRootGimmickP[7].klass) = Effect;
  mTerminalList = this->fields.mTerminalList;
  if ( !byte_4B12DC3 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v19);
    mTerminalMap = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
    byte_4B12DC3 = 1;
  }
  if ( !LODWORD(mTerminalMap->fields.pfbBaseP) )
  {
    j_il2cpp_runtime_class_init_0(mTerminalMap, method);
    mTerminalMap = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
  }
  v22 = *((_DWORD *)&mTerminalMap->fields.subRootGimmickP->fields + 1);
  if ( !byte_4B12DCE )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v19);
    mTerminalMap = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
    byte_4B12DCE = 1;
  }
  if ( !LODWORD(mTerminalMap->fields.pfbBaseP) )
  {
    j_il2cpp_runtime_class_init_0(mTerminalMap, method);
    mTerminalMap = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !mTerminalList )
LABEL_55:
    sub_1BCAA3C(mTerminalMap, method);
  ScrTerminalListTop__RequestBattleSecnario(
    mTerminalList,
    v22,
    LODWORD(mTerminalMap->fields.subRootGimmickP[1].klass) + 1,
    0LL);
}


void __fastcall TerminalSceneComponent___PlayAutoExecuteQuest_b__226_2(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  ScrTerminalListTop_o *mTerminalList; // x20
  TerminalPramsManager_c *v10; // x0
  int32_t QuestId_k__BackingField; // w22
  int32_t PhaseCnt_k__BackingField; // w24
  System_Action_o *v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1

  if ( (byte_4B182D6 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_TerminalSceneComponent__PlayAutoExecuteQuest_b__226_5__, v7, v8);
    byte_4B182D6 = 1;
  }
  mTerminalList = this->fields.mTerminalList;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_4B12DC3 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B12DC3 = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v10 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v10->static_fields->_QuestId_k__BackingField;
  if ( !byte_4B12DCE )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4B12DCE = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10, method);
    v10 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v10->static_fields->_PhaseCnt_k__BackingField;
  v13 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_TerminalSceneComponent__PlayAutoExecuteQuest_b__226_5__, 0LL);
  if ( !mTerminalList )
    sub_1BCAA3C(v14, v15);
  ScrTerminalListTop__StartWindowMessage_35017112(
    mTerminalList,
    QuestId_k__BackingField,
    PhaseCnt_k__BackingField + 1,
    2,
    v13,
    0,
    0LL);
}


void __fastcall TerminalSceneComponent___PlayAutoExecuteQuest_b__226_5(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ScrTerminalListTop_o *mTerminalList; // x20
  ScrTerminalListTop_o *v5; // x0
  int32_t klass_high; // w22
  int32_t v7; // w23

  if ( (byte_4B182D7 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B182D7 = 1;
  }
  mTerminalList = this->fields.mTerminalList;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_4B12DC6 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B12DC6 = 1;
  }
  v5 = (ScrTerminalListTop_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v5 = (ScrTerminalListTop_o *)TerminalPramsManager_TypeInfo;
  }
  klass_high = HIDWORD(v5->fields.boardGameTokenAction->klass);
  if ( !byte_4B12DC3 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    v5 = (ScrTerminalListTop_o *)TerminalPramsManager_TypeInfo;
    byte_4B12DC3 = 1;
  }
  if ( !LODWORD(v5->fields.incomingAction) )
  {
    j_il2cpp_runtime_class_init_0(v5, method);
    v5 = (ScrTerminalListTop_o *)TerminalPramsManager_TypeInfo;
  }
  v7 = *((_DWORD *)&v5->fields.boardGameTokenAction->fields.UnityEngine_Behaviour_Fields + 1);
  if ( !byte_4B12DCE )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    v5 = (ScrTerminalListTop_o *)TerminalPramsManager_TypeInfo;
    byte_4B12DCE = 1;
  }
  if ( !LODWORD(v5->fields.incomingAction) )
  {
    j_il2cpp_runtime_class_init_0(v5, method);
    v5 = (ScrTerminalListTop_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !mTerminalList
    || (ScrTerminalListTop__SetBattleSetupInfo(
          mTerminalList,
          klass_high,
          v7,
          LODWORD(v5->fields.boardGameTokenAction->fields.m_CancellationTokenSource) + 1,
          1,
          0,
          0,
          0LL),
        (v5 = this->fields.mTerminalList) == 0LL) )
  {
    sub_1BCAA3C(v5, method);
  }
  ScrTerminalListTop__StartQuestBeforeFollower(v5, 0LL);
}


void __fastcall TerminalSceneComponent___StartWindowMessage_b__198_0(
        TerminalSceneComponent_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  struct ScrTerminalMap_o *mTerminalMap; // x8
  TerminalSceneComponent_o *v4; // x20
  struct ScrTerminalListTop_o *mTerminalList; // x8

  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap
    || (v4 = this, (this = (TerminalSceneComponent_o *)mTerminalMap->fields.spotMaskObj) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL),
        (mTerminalList = v4->fields.mTerminalList) == 0LL)
    || (this = (TerminalSceneComponent_o *)mTerminalList->fields.mQuestBoardListViewManager) == 0LL )
  {
    sub_1BCAA3C(this, action);
  }
  QuestBoardListViewManager__SetMode((QuestBoardListViewManager_o *)this, 4, action, 0, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TerminalSceneComponent___beginInitialize_b__172_0(
        TerminalSceneComponent_o *this,
        bool gotNewServant,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  TerminalPramsManager_c *v17; // x0
  struct ScrTerminalMap_o *mTerminalMap; // x8
  struct ScrTerminalMap_o *v19; // x8
  struct ScrTerminalMap_o *v20; // x8
  struct WarEntity_o *mWarEnt; // x8
  __int64 v22; // x2
  __int64 v23; // x3
  ScrTerminalMap_o *v24; // x21
  System_Action_o *v25; // x22
  TitleInfoControl_o *mTitleInfo; // x21
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  System_Action_o *v30; // x22

  v4 = this;
  if ( (byte_4B182D1 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, gotNewServant, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventRaidMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v9, v10);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_TerminalSceneComponent__beginInitialize_b__172_3__, v13, v14);
    this = (TerminalSceneComponent_o *)sub_1BCA7E0(&Method_TerminalSceneComponent__beginInitialize_b__172_4__, v15, v16);
    byte_4B182D1 = 1;
  }
  v4->fields._onClosePresentBoxFlag_k__BackingField = 1;
  if ( !gotNewServant )
  {
    mTerminalMap = v4->fields.mTerminalMap;
    if ( !mTerminalMap )
      goto LABEL_30;
    this = (TerminalSceneComponent_o *)mTerminalMap->fields.dispRoot;
    if ( !this )
      goto LABEL_30;
    this = (TerminalSceneComponent_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_25;
    v19 = v4->fields.mTerminalMap;
    if ( !v19 )
      goto LABEL_30;
    if ( !v19->fields.isRaidMap )
      goto LABEL_25;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, gotNewServant);
    this = (TerminalSceneComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventRaidMaster___);
    v20 = v4->fields.mTerminalMap;
    if ( !v20 )
      goto LABEL_30;
    mWarEnt = v20->fields.mWarEnt;
    if ( !mWarEnt || !this )
      goto LABEL_30;
    if ( EventRaidMaster__GetRaidGorupMax((EventRaidMaster_o *)this, mWarEnt->fields.eventId, 0LL) >= 1 )
    {
      v24 = v4->fields.mTerminalMap;
      v25 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, gotNewServant, v22, v23);
      System_Action___ctor(v25, (Il2CppObject *)v4, Method_TerminalSceneComponent__beginInitialize_b__172_3__, 0LL);
      if ( v24 )
      {
        ScrTerminalMap__BeginRaidUpdateRequest(v24, v25, 0LL);
        return !gotNewServant;
      }
    }
    else
    {
LABEL_25:
      this = (TerminalSceneComponent_o *)v4->fields.mTitleInfo;
      if ( this )
      {
        TitleInfoControl__InitEventAlphaAnim((TitleInfoControl_o *)this, 0LL);
        mTitleInfo = v4->fields.mTitleInfo;
        v30 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v27, v28, v29);
        System_Action___ctor(v30, (Il2CppObject *)v4, Method_TerminalSceneComponent__beginInitialize_b__172_4__, 0LL);
        if ( mTitleInfo )
        {
          TitleInfoControl__UpdateEventInfo(mTitleInfo, v30, 0LL);
          this = (TerminalSceneComponent_o *)v4->fields.mTitleInfo;
          if ( this )
          {
            TitleInfoControl__FrameIn((TitleInfoControl_o *)this, 0, 0LL);
            return !gotNewServant;
          }
        }
      }
    }
LABEL_30:
    sub_1BCAA3C(this, gotNewServant);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, gotNewServant);
  if ( !byte_4B11139 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, gotNewServant, method);
    byte_4B11139 = 1;
  }
  v17 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, gotNewServant);
    v17 = TerminalPramsManager_TypeInfo;
  }
  v17->static_fields->_IsAutoResume_k__BackingField = 1;
  this = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
    goto LABEL_30;
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)this, 34, 1, 0LL, 0LL);
  return !gotNewServant;
}


void __fastcall TerminalSceneComponent___beginInitialize_b__172_1(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  ScrPlayerStatus_o *mPlayerStatus; // x0
  struct ScrTerminalListTop_o *mTerminalList; // x8

  mPlayerStatus = this->fields.mPlayerStatus;
  if ( !mPlayerStatus
    || (ScrPlayerStatus__mfInitUserData(mPlayerStatus, 0LL), (mTerminalList = this->fields.mTerminalList) == 0LL)
    || (mPlayerStatus = (ScrPlayerStatus_o *)mTerminalList->fields.mQuestBoardListViewManager) == 0LL )
  {
    sub_1BCAA3C(mPlayerStatus, method);
  }
  QuestBoardListViewManager__SetupDisp((QuestBoardListViewManager_o *)mPlayerStatus, 0LL);
}


void __fastcall TerminalSceneComponent___beginInitialize_b__172_2(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  AvalonSceneManager_o *Instance; // x0
  __int64 v5; // x1
  ScrTerminalMap_o *mTerminalMap; // x19

  if ( (byte_4B182D3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method, v2);
    byte_4B182D3 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (AvalonSceneManager__endInitialize(Instance, (SceneRootComponent_o *)this, 0LL),
        (Instance = (AvalonSceneManager_o *)this->fields.mEarthCore) == 0LL)
    || (mTerminalMap = this->fields.mTerminalMap,
        Instance = (AvalonSceneManager_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)Instance,
                                             0LL),
        !mTerminalMap) )
  {
    sub_1BCAA3C(Instance, v5);
  }
  ScrTerminalMap__SetCore(mTerminalMap, (UnityEngine_GameObject_o *)Instance, 0LL);
}


void __fastcall TerminalSceneComponent___beginInitialize_b__172_3(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  Il2CppObject *Instance; // x20
  TerminalPramsManager_c *v14; // x0
  int32_t WarId_k__BackingField; // w21
  System_Action_o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  System_Collections_IEnumerator_o *v19; // x1

  if ( (byte_4B182D2 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonTemplate_QuestTree__get_Instance__, v4, v5);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_TerminalSceneComponent__beginInitialize_b__172_5__, v8, v9);
    byte_4B182D2 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10);
  if ( !byte_4B12DC6 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v10, v11);
    byte_4B12DC6 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10);
    v14 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v14->static_fields->_WarId_k__BackingField;
  v16 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_TerminalSceneComponent__beginInitialize_b__172_5__, 0LL);
  if ( !Instance )
    sub_1BCAA3C(v17, v18);
  v19 = QuestTree__mfBaseTreeUpdateWithOpenCheck((QuestTree_o *)Instance, WarId_k__BackingField, v16, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v19, 0LL);
}


void __fastcall TerminalSceneComponent___beginInitialize_b__172_4(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  struct ScrTerminalMap_o *mTerminalMap; // x8
  TerminalSceneComponent_o *v3; // x19
  const MethodInfo *v4; // x3
  struct ScrTerminalMap_o *v5; // x8
  struct WarEntity_o *mWarEnt; // x8

  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_8;
  v3 = this;
  this = (TerminalSceneComponent_o *)mTerminalMap->fields.dispRoot;
  if ( !this )
    goto LABEL_8;
  this = (TerminalSceneComponent_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = v3->fields.mTerminalMap;
    if ( v5 )
    {
      mWarEnt = v5->fields.mWarEnt;
      if ( mWarEnt )
      {
        TerminalSceneComponent__FadeInAndTriggerEventEffectsNext(v3, mWarEnt->fields.eventId, 0LL, v4);
        return;
      }
    }
LABEL_8:
    sub_1BCAA3C(this, method);
  }
}


void __fastcall TerminalSceneComponent___beginInitialize_b__172_5(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  ScrTerminalListTop_o *mTerminalList; // x0

  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList
    || (ScrTerminalListTop__UpdateList(mTerminalList, 0LL),
        (mTerminalList = (ScrTerminalListTop_o *)this->fields.mTerminalMap) == 0LL)
    || (ScrTerminalMap__UpdateAllSpotGameObject((ScrTerminalMap_o *)mTerminalList, 0LL),
        (mTerminalList = (ScrTerminalListTop_o *)this->fields.mTerminalMap) == 0LL)
    || (ScrTerminalMap__UpdateAllMapGimmickComponent((ScrTerminalMap_o *)mTerminalList, 0LL),
        (mTerminalList = (ScrTerminalListTop_o *)this->fields.mTerminalMap) == 0LL) )
  {
    sub_1BCAA3C(mTerminalList, method);
  }
  ScrTerminalMap__UpdateEventRaidUI((ScrTerminalMap_o *)mTerminalList, 0LL);
}


void __fastcall TerminalSceneComponent___callbackEventDailyPoint_b__218_0(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.afterEventDailyPoint, 0LL);
}


void __fastcall TerminalSceneComponent___mfsmfInitTable_b__215_0(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalSceneComponent_o *v3; // x19
  __int64 v4; // x1
  PlayMakerFSM_o *myFSM; // x0

  v3 = this;
  if ( (byte_4B182D4 & 1) == 0 )
  {
    this = (TerminalSceneComponent_o *)sub_1BCA7E0(&StringLiteral_5605/*"EVENTLISTUP_END"*/, method, v2);
    byte_4B182D4 = 1;
  }
  TerminalSceneComponent__deleteQuestMovie(this, method);
  myFSM = v3->fields.myFSM;
  if ( !myFSM )
    sub_1BCAA3C(0LL, v4);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_5605/*"EVENTLISTUP_END"*/, 0LL);
}


void __fastcall TerminalSceneComponent__beginFinish(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  int32_t quitType; // w8

  quitType = this->fields.quitType;
  if ( !quitType )
    quitType = 2;
  this->fields.quitType = quitType;
  TerminalSceneComponent__quit(this, method);
}


void __fastcall TerminalSceneComponent__beginInitialize(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x1
  __int64 v57; // x1
  __int64 v58; // x2
  TerminalPramsManager_c *v59; // x0
  TerminalPramsManager_c *v60; // x0
  __int64 v61; // x1
  __int64 v62; // x2
  TerminalPramsManager_c *v63; // x0
  QuestAfterAction_o *Instance; // x0
  __int64 v65; // x1
  CommonUI_o *v66; // x21
  __int64 v67; // x1
  __int64 v68; // x2
  TerminalPramsManager_c *v69; // x0
  BalanceConfig_c *v70; // x0
  int32_t OrdealCallWarId; // w21
  TerminalPramsManager_c *v72; // x0
  __int64 v73; // x1
  __int64 v74; // x1
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  struct UnityEngine_Camera_o *mUICamera; // x20
  CTouch_c *v82; // x0
  struct CTouch_StaticFields *static_fields; // x0
  __int64 v84; // x2
  __int64 v85; // x3
  struct CStateManager_TerminalSceneComponent__o **p_mFSM; // x20
  CStateManager_T__o *v87; // x21
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  CStateManager_T__o *mFSM; // x21
  __int64 v95; // x1
  __int64 v96; // x2
  __int64 v97; // x3
  Il2CppObject *v98; // x22
  CStateManager_T__o *v99; // x21
  __int64 v100; // x1
  __int64 v101; // x2
  __int64 v102; // x3
  Il2CppObject *v103; // x22
  CStateManager_T__o *v104; // x21
  __int64 v105; // x1
  __int64 v106; // x2
  __int64 v107; // x3
  Il2CppObject *v108; // x22
  CStateManager_T__o *v109; // x21
  __int64 v110; // x1
  __int64 v111; // x2
  __int64 v112; // x3
  Il2CppObject *v113; // x22
  CStateManager_T__o *v114; // x21
  __int64 v115; // x1
  __int64 v116; // x2
  __int64 v117; // x3
  Il2CppObject *v118; // x22
  CStateManager_T__o *v119; // x21
  __int64 v120; // x1
  __int64 v121; // x2
  __int64 v122; // x3
  Il2CppObject *v123; // x22
  CStateManager_T__o *v124; // x21
  __int64 v125; // x1
  __int64 v126; // x2
  __int64 v127; // x3
  Il2CppObject *v128; // x22
  CStateManager_T__o *v129; // x21
  __int64 v130; // x1
  __int64 v131; // x2
  __int64 v132; // x3
  Il2CppObject *v133; // x22
  CStateManager_T__o *v134; // x21
  __int64 v135; // x1
  __int64 v136; // x2
  __int64 v137; // x3
  Il2CppObject *v138; // x22
  CStateManager_T__o *v139; // x21
  __int64 v140; // x1
  __int64 v141; // x2
  __int64 v142; // x3
  Il2CppObject *v143; // x22
  CStateManager_T__o *v144; // x20
  __int64 v145; // x1
  __int64 v146; // x2
  __int64 v147; // x3
  Il2CppObject *v148; // x21
  const MethodInfo *v149; // x2
  ScrPlayerStatus_o *mPlayerStatus; // x20
  __int64 v151; // x1
  __int64 v152; // x2
  __int64 v153; // x3
  System_Func_bool__bool__o *v154; // x21
  struct ScrPlayerStatus_o *v155; // x21
  __int64 v156; // x1
  __int64 v157; // x2
  __int64 v158; // x3
  System_Action_o *v159; // x20
  int64_t v160; // x2
  int32_t v161; // w3
  System_String_o *v162; // x4
  BattleSetupInfo_o *v163; // x5
  FollowerInfo_o *v164; // x6
  PartyListViewItem_o *v165; // x7
  struct ScrTerminalMap_o *mTerminalMap; // x8
  __int64 v167; // x1
  __int64 v168; // x2
  __int64 v169; // x3
  System_Action_o *v170; // x20
  const MethodInfo *v171; // x2
  __int64 v172; // x1

  if ( (byte_4B18288 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AndroidUtil_TypeInfo, v4, v5);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_CStateManager_TerminalSceneComponent___ctor__, v8, v9);
    sub_1BCA7E0(&Method_CStateManager_TerminalSceneComponent__add__, v10, v11);
    sub_1BCA7E0(&CStateManager_TerminalSceneComponent__TypeInfo, v12, v13);
    sub_1BCA7E0(&CTouch_TypeInfo, v14, v15);
    sub_1BCA7E0(&System_Func_bool__bool__TypeInfo, v16, v17);
    sub_1BCA7E0(&ServantProfileEventJoinManager_TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v20, v21);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v22, v23);
    sub_1BCA7E0(&TerminalSceneComponent_StateNormal_TypeInfo, v24, v25);
    sub_1BCA7E0(&TerminalSceneComponent_StateTutorial1_QuestArrow_TypeInfo, v26, v27);
    sub_1BCA7E0(&TerminalSceneComponent_StateTutorial1_SpotArrow_TypeInfo, v28, v29);
    sub_1BCA7E0(&TerminalSceneComponent_StateTutorial2_QuestArrow_TypeInfo, v30, v31);
    sub_1BCA7E0(&TerminalSceneComponent_StateTutorial2_SpotArrow_TypeInfo, v32, v33);
    sub_1BCA7E0(&TerminalSceneComponent_StateTutorial3_GachaArrow_TypeInfo, v34, v35);
    sub_1BCA7E0(&TerminalSceneComponent_StateTutorial3_MenuArrow_TypeInfo, v36, v37);
    sub_1BCA7E0(&TerminalSceneComponent_StateTutorial4_QuestArrow_TypeInfo, v38, v39);
    sub_1BCA7E0(&TerminalSceneComponent_StateTutorial4_SpotArrow_TypeInfo, v40, v41);
    sub_1BCA7E0(&TerminalSceneComponent_StateTutorial5_CombineArrow_TypeInfo, v42, v43);
    sub_1BCA7E0(&TerminalSceneComponent_StateTutorial5_MenuArrow_TypeInfo, v44, v45);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v46, v47);
    sub_1BCA7E0(&Method_TerminalSceneComponent__beginInitialize_b__172_0__, v48, v49);
    sub_1BCA7E0(&Method_TerminalSceneComponent__beginInitialize_b__172_1__, v50, v51);
    sub_1BCA7E0(&Method_TerminalSceneComponent__beginInitialize_b__172_2__, v52, v53);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v54, v55);
    byte_4B18288 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, method);
  AndroidUtil__DeleteOldSaveData(0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v56);
  TerminalPramsManager__Load_SaveData(0LL);
  if ( !byte_4B12DCF )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v57, v58);
    byte_4B12DCF = 1;
  }
  v59 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v57);
    v59 = TerminalPramsManager_TypeInfo;
  }
  if ( !v59->static_fields->_IsAutoResume_k__BackingField )
  {
    if ( !v59->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v59, v57);
    if ( !byte_4B12DC9 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v57, v58);
      byte_4B12DC9 = 1;
    }
    v60 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v57);
      v60 = TerminalPramsManager_TypeInfo;
    }
    v60->static_fields->_DispState_k__BackingField = 0;
    if ( !byte_4B1312E )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v57, v58);
      v60 = TerminalPramsManager_TypeInfo;
      byte_4B1312E = 1;
    }
    if ( !v60->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v60, v57);
      v60 = TerminalPramsManager_TypeInfo;
    }
    v60->static_fields->_SelectedStoryQuestId_k__BackingField = 0;
    TerminalPramsManager__TerminalSelectedStoryQuestId_SaveData(0LL);
    if ( !byte_4B12270 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v61, v62);
      byte_4B12270 = 1;
    }
    v63 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v61);
      v63 = TerminalPramsManager_TypeInfo;
    }
    v63->static_fields->_SelectedRecollectionWarId_k__BackingField = 0;
    TerminalPramsManager__TerminalSelectedRecollectionWarId_SaveData(0LL);
  }
  Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v66 = (CommonUI_o *)Instance;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v65);
  if ( !v66 )
    goto LABEL_88;
  CommonUI__CheckChangeOtherConnectMarkFromEventId(
    v66,
    TerminalPramsManager_TypeInfo->static_fields->ConnectMarkEventId,
    1,
    0LL);
  Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    goto LABEL_88;
  if ( QuestAfterAction__CheckChangeBlankEarth(Instance, 0LL) )
    goto LABEL_39;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v67);
  if ( !byte_4B1837D )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v67, v68);
    byte_4B1837D = 1;
  }
  v69 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v67);
    v69 = TerminalPramsManager_TypeInfo;
  }
  if ( v69->static_fields->_IsTransOrdealCall_k__BackingField )
  {
LABEL_39:
    v70 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v67);
      v70 = BalanceConfig_TypeInfo;
    }
    OrdealCallWarId = v70->static_fields->OrdealCallWarId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v67);
    TerminalPramsManager__SetAutoResumeByWarId(OrdealCallWarId, 0LL);
    if ( !byte_4B13021 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v67, v68);
      byte_4B13021 = 1;
    }
    v69 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v67);
      v69 = TerminalPramsManager_TypeInfo;
    }
    v69->static_fields->_IsTransOrdealCall_k__BackingField = 0;
  }
  if ( !v69->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v69, v67);
  if ( !byte_4B1301D )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v67, v68);
    byte_4B1301D = 1;
  }
  v72 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v67);
    v72 = TerminalPramsManager_TypeInfo;
  }
  v72->static_fields->meSceneStatus = 1;
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  this->fields._IsReq_InitEarthRotateY_k__BackingField = 1;
  this->fields._onClosePresentBoxFlag_k__BackingField = 0;
  this->fields._FirstFadeTime_k__BackingField = 0.0;
  SkillLvMaster__AssertionSkillOverwriteByNowTime(0LL);
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v73);
  CTouch__init(0LL);
  mUICamera = this->fields.mUICamera;
  if ( !byte_4B14050 )
  {
    sub_1BCA7E0(&CTouch_TypeInfo, v74, v75);
    byte_4B14050 = 1;
  }
  v82 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v74);
    v82 = CTouch_TypeInfo;
  }
  static_fields = v82->static_fields;
  static_fields->mScreenCam = mUICamera;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->mScreenCam,
    (int64_t)mUICamera,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80);
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v87 = (CStateManager_T__o *)sub_1BCAA2C(CStateManager_TerminalSceneComponent__TypeInfo, v65, v84, v85);
    CStateManager_object____ctor(
      v87,
      (Il2CppObject *)this,
      11,
      (const MethodInfo_313FBC4 *)Method_CStateManager_TerminalSceneComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_TerminalSceneComponent__o *)v87;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mFSM, (int64_t)v87, v88, v89, v90, v91, v92, v93);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v98 = (Il2CppObject *)sub_1BCAA2C(TerminalSceneComponent_StateNormal_TypeInfo, v95, v96, v97);
    System_Object___ctor(v98, 0LL);
    if ( mFSM )
    {
      CStateManager_object___add(
        mFSM,
        0,
        (IState_T__o *)v98,
        (const MethodInfo_313FC6C *)Method_CStateManager_TerminalSceneComponent__add__);
      v99 = (CStateManager_T__o *)*p_mFSM;
      v103 = (Il2CppObject *)sub_1BCAA2C(TerminalSceneComponent_StateTutorial1_SpotArrow_TypeInfo, v100, v101, v102);
      System_Object___ctor(v103, 0LL);
      if ( v99 )
      {
        CStateManager_object___add(
          v99,
          1,
          (IState_T__o *)v103,
          (const MethodInfo_313FC6C *)Method_CStateManager_TerminalSceneComponent__add__);
        v104 = (CStateManager_T__o *)*p_mFSM;
        v108 = (Il2CppObject *)sub_1BCAA2C(TerminalSceneComponent_StateTutorial1_QuestArrow_TypeInfo, v105, v106, v107);
        System_Object___ctor(v108, 0LL);
        if ( v104 )
        {
          CStateManager_object___add(
            v104,
            2,
            (IState_T__o *)v108,
            (const MethodInfo_313FC6C *)Method_CStateManager_TerminalSceneComponent__add__);
          v109 = (CStateManager_T__o *)*p_mFSM;
          v113 = (Il2CppObject *)sub_1BCAA2C(TerminalSceneComponent_StateTutorial2_SpotArrow_TypeInfo, v110, v111, v112);
          System_Object___ctor(v113, 0LL);
          if ( v109 )
          {
            CStateManager_object___add(
              v109,
              3,
              (IState_T__o *)v113,
              (const MethodInfo_313FC6C *)Method_CStateManager_TerminalSceneComponent__add__);
            v114 = (CStateManager_T__o *)*p_mFSM;
            v118 = (Il2CppObject *)sub_1BCAA2C(
                                     TerminalSceneComponent_StateTutorial2_QuestArrow_TypeInfo,
                                     v115,
                                     v116,
                                     v117);
            System_Object___ctor(v118, 0LL);
            if ( v114 )
            {
              CStateManager_object___add(
                v114,
                4,
                (IState_T__o *)v118,
                (const MethodInfo_313FC6C *)Method_CStateManager_TerminalSceneComponent__add__);
              v119 = (CStateManager_T__o *)*p_mFSM;
              v123 = (Il2CppObject *)sub_1BCAA2C(
                                       TerminalSceneComponent_StateTutorial3_MenuArrow_TypeInfo,
                                       v120,
                                       v121,
                                       v122);
              System_Object___ctor(v123, 0LL);
              if ( v119 )
              {
                CStateManager_object___add(
                  v119,
                  5,
                  (IState_T__o *)v123,
                  (const MethodInfo_313FC6C *)Method_CStateManager_TerminalSceneComponent__add__);
                v124 = (CStateManager_T__o *)*p_mFSM;
                v128 = (Il2CppObject *)sub_1BCAA2C(
                                         TerminalSceneComponent_StateTutorial3_GachaArrow_TypeInfo,
                                         v125,
                                         v126,
                                         v127);
                System_Object___ctor(v128, 0LL);
                if ( v124 )
                {
                  CStateManager_object___add(
                    v124,
                    6,
                    (IState_T__o *)v128,
                    (const MethodInfo_313FC6C *)Method_CStateManager_TerminalSceneComponent__add__);
                  v129 = (CStateManager_T__o *)*p_mFSM;
                  v133 = (Il2CppObject *)sub_1BCAA2C(
                                           TerminalSceneComponent_StateTutorial4_SpotArrow_TypeInfo,
                                           v130,
                                           v131,
                                           v132);
                  System_Object___ctor(v133, 0LL);
                  if ( v129 )
                  {
                    CStateManager_object___add(
                      v129,
                      7,
                      (IState_T__o *)v133,
                      (const MethodInfo_313FC6C *)Method_CStateManager_TerminalSceneComponent__add__);
                    v134 = (CStateManager_T__o *)*p_mFSM;
                    v138 = (Il2CppObject *)sub_1BCAA2C(
                                             TerminalSceneComponent_StateTutorial4_QuestArrow_TypeInfo,
                                             v135,
                                             v136,
                                             v137);
                    System_Object___ctor(v138, 0LL);
                    if ( v134 )
                    {
                      CStateManager_object___add(
                        v134,
                        8,
                        (IState_T__o *)v138,
                        (const MethodInfo_313FC6C *)Method_CStateManager_TerminalSceneComponent__add__);
                      v139 = (CStateManager_T__o *)*p_mFSM;
                      v143 = (Il2CppObject *)sub_1BCAA2C(
                                               TerminalSceneComponent_StateTutorial5_MenuArrow_TypeInfo,
                                               v140,
                                               v141,
                                               v142);
                      System_Object___ctor(v143, 0LL);
                      if ( v139 )
                      {
                        CStateManager_object___add(
                          v139,
                          9,
                          (IState_T__o *)v143,
                          (const MethodInfo_313FC6C *)Method_CStateManager_TerminalSceneComponent__add__);
                        v144 = (CStateManager_T__o *)*p_mFSM;
                        v148 = (Il2CppObject *)sub_1BCAA2C(
                                                 TerminalSceneComponent_StateTutorial5_CombineArrow_TypeInfo,
                                                 v145,
                                                 v146,
                                                 v147);
                        System_Object___ctor(v148, 0LL);
                        if ( v144 )
                        {
                          CStateManager_object___add(
                            v144,
                            10,
                            (IState_T__o *)v148,
                            (const MethodInfo_313FC6C *)Method_CStateManager_TerminalSceneComponent__add__);
                          TerminalSceneComponent__SetState(this, 0, v149);
                          goto LABEL_73;
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
LABEL_88:
    sub_1BCAA3C(Instance, v65);
  }
LABEL_73:
  Instance = (QuestAfterAction_o *)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_88;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)Instance, 0LL, 1, (System_String_o *)StringLiteral_1/*""*/, 1, 0LL);
  Instance = (QuestAfterAction_o *)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_88;
  TitleInfoControl__changeTitleInfo_37891656((TitleInfoControl_o *)Instance, 1, 1, 0, 0LL);
  Instance = (QuestAfterAction_o *)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_88;
  TitleInfoControl__setBackBtn_Terminal((TitleInfoControl_o *)Instance, 0, 0LL);
  Instance = (QuestAfterAction_o *)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_88;
  TitleInfoControl__SetBackStoryButtonEnable((TitleInfoControl_o *)Instance, 0, 0LL);
  Instance = (QuestAfterAction_o *)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_88;
  TitleInfoControl__SetBackRecollectionButtonEnable((TitleInfoControl_o *)Instance, 0, 0LL);
  Instance = (QuestAfterAction_o *)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_88;
  TitleInfoControl__setBackBtnDepth((TitleInfoControl_o *)Instance, 24, 0LL);
  Instance = (QuestAfterAction_o *)this->fields.mTerminalMap;
  if ( !Instance )
    goto LABEL_88;
  ScrTerminalMap__InitMapCamera((ScrTerminalMap_o *)Instance, 0LL);
  mPlayerStatus = this->fields.mPlayerStatus;
  v154 = (System_Func_bool__bool__o *)sub_1BCAA2C(System_Func_bool__bool__TypeInfo, v151, v152, v153);
  System_Func_bool__bool____ctor(
    v154,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent__beginInitialize_b__172_0__,
    0LL);
  if ( !mPlayerStatus )
    goto LABEL_88;
  ScrPlayerStatus__SetCloseGiftAct(mPlayerStatus, v154, 0LL);
  v155 = this->fields.mPlayerStatus;
  v159 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v156, v157, v158);
  System_Action___ctor(v159, (Il2CppObject *)this, Method_TerminalSceneComponent__beginInitialize_b__172_1__, 0LL);
  if ( !v155 )
    goto LABEL_88;
  v155->fields.mRecoverAct = v159;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v155->fields.mRecoverAct,
    (int64_t)v159,
    v160,
    v161,
    v162,
    v163,
    v164,
    v165);
  Instance = (QuestAfterAction_o *)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_88;
  TitleInfoControl__setHeaderBgImg((TitleInfoControl_o *)Instance, 0, 0LL);
  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_88;
  Instance = (QuestAfterAction_o *)mTerminalMap->fields.spotMaskObj;
  if ( !Instance )
    goto LABEL_88;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  v170 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v167, v168, v169);
  System_Action___ctor(v170, (Il2CppObject *)this, Method_TerminalSceneComponent__beginInitialize_b__172_2__, 0LL);
  TerminalSceneComponent__SetEarthView(this, v170, v171);
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo, v172);
  ServantProfileEventJoinManager__UpdateProfileServantEventJoin(0LL);
}


void __fastcall TerminalSceneComponent__beginPause(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x1

  if ( (byte_4B18293 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method, v2);
    byte_4B18293 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  this->fields.quitType = 3;
  TerminalSceneComponent__quit(this, v6);
}


void __fastcall TerminalSceneComponent__beginResume(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  struct ScrTerminalListTop_o *mTerminalList; // x8
  const MethodInfo *v15; // x2
  struct ScrTerminalMap_o *mTerminalMap; // x8
  struct WarEntity_o *mWarEnt; // x8
  int32_t eventId; // w20
  TerminalPramsManager_c *v19; // x0
  bool IsEventPeriod; // w20
  TerminalPramsManager_c *v21; // x0
  TerminalPramsManager_c *v22; // x0
  struct ScrTerminalMap_o *v23; // x8
  const MethodInfo *v24; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B18292 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v8, v9);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v10, v11);
    byte_4B18292 = 1;
  }
  entity = 0LL;
  this->fields.isFadeInAfterResumeLoad = 0;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
  mTerminalList = this->fields.mTerminalList;
  this->fields._IsReq_InitEarthRotateY_k__BackingField = 0;
  if ( !mTerminalList )
    goto LABEL_43;
  Instance = (Il2CppObject *)mTerminalList->fields.mQuestBoardListViewManager;
  if ( !Instance )
    goto LABEL_43;
  ListViewManager__DestroyList((ListViewManager_o *)Instance, 0LL);
  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_43;
  mWarEnt = mTerminalMap->fields.mWarEnt;
  if ( mWarEnt )
    eventId = mWarEnt->fields.eventId;
  else
    eventId = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v13);
  if ( !byte_4B1336E )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v13, v15);
    byte_4B1336E = 1;
  }
  v19 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v13);
    v19 = TerminalPramsManager_TypeInfo;
  }
  if ( v19->static_fields->meSceneStatus != 3 )
  {
    if ( eventId )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_43;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !Instance )
        goto LABEL_43;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             &entity,
             eventId,
             (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
      {
        Instance = entity;
        if ( entity )
        {
          IsEventPeriod = EventEntity__IsEventPeriod((EventEntity_o *)entity, 0LL, 0LL);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v13);
          if ( IsEventPeriod )
          {
            if ( byte_4B1301D )
            {
LABEL_32:
              v21 = TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v13);
                v21 = TerminalPramsManager_TypeInfo;
              }
              v21->static_fields->meSceneStatus = 2;
              this->fields.isFadeInAfterResumeLoad = 1;
              goto LABEL_35;
            }
LABEL_31:
            sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v13, v15);
            byte_4B1301D = 1;
            goto LABEL_32;
          }
          if ( !byte_4B1301D )
          {
            sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v13, v15);
            byte_4B1301D = 1;
          }
          v22 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v13);
            v22 = TerminalPramsManager_TypeInfo;
          }
          v22->static_fields->meSceneStatus = 1;
          TerminalSceneComponent__CallQuestInformationCloseAtAll(this, 0, v15);
          v23 = this->fields.mTerminalMap;
          if ( v23 )
          {
            Instance = (Il2CppObject *)v23->fields.spotMaskObj;
            if ( Instance )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
              TerminalSceneComponent__SetQuestBoardInfoOff(this, v24);
              goto LABEL_35;
            }
          }
        }
LABEL_43:
        sub_1BCAA3C(Instance, v13);
      }
      v19 = TerminalPramsManager_TypeInfo;
    }
    if ( !v19->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v19, v13);
    if ( byte_4B1301D )
      goto LABEL_32;
    goto LABEL_31;
  }
LABEL_35:
  this->fields.quitType = 1;
  SceneRootComponent__beginResume_39383112((SceneRootComponent_o *)this, 0LL);
}


void __fastcall TerminalSceneComponent__beginStartUp(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(TerminalSceneComponent_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._5_beginStartUp.method)(
    this,
    0LL,
    this->klass->vtable._6_beginStartUp.methodPtr);
}


void __fastcall TerminalSceneComponent__beginStartUp_42925304(
        TerminalSceneComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 methodPtr_low; // x10
  Il2CppObject *v29; // x1
  __int64 v30; // x1
  TerminalSceneComponent_c *v31; // x0
  const MethodInfo *v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  TerminalPramsManager_c *v35; // x0
  TerminalPramsManager_c *v36; // x0
  Il2CppObject *Instance; // x0
  const MethodInfo *v38; // x1
  __int64 v39; // x1
  Il2CppObject *MasterData_object; // x20
  struct UserServantEntity_array *UserServantListFromDeckIsTerminal; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  struct UserServantEntity_array *mStandSvtDatas; // x8
  __int64 mStandSvtIdx; // x9
  UserServantEntity_o *NextStandServant; // x20
  bool isSavedMemoryMode; // w22
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  System_Action_o *v55; // x0
  System_Action_o *v56; // x21
  const MethodInfo *v57; // x4
  const MethodInfo *v58; // x3
  System_Collections_IEnumerator_o *Async; // x1

  if ( (byte_4B1828A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, data, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserDeckMaster___, v10, v11);
    sub_1BCA7E0(&OptionManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_TerminalSceneComponent_SendMessageStartUpAndResume__, v18, v19);
    sub_1BCA7E0(&Method_TerminalSceneComponent__beginStartUp_b__175_0__, v20, v21);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v22, v23);
    sub_1BCA7E0(&TerminalTransitionInfo_TypeInfo, v24, v25);
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v26, v27);
    byte_4B1828A = 1;
  }
  if ( data
    && (methodPtr_low = LOBYTE(TerminalTransitionInfo_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (TerminalTransitionInfo_c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] == TerminalTransitionInfo_TypeInfo )
      v29 = data;
    else
      v29 = 0LL;
  }
  else
  {
    v29 = 0LL;
  }
  this->fields._TransitionInfo_k__BackingField = (struct TerminalTransitionInfo_o *)v29;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._TransitionInfo_k__BackingField,
    (int64_t)v29,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v31 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v30);
    v31 = TerminalSceneComponent_TypeInfo;
  }
  UnityEngine_RenderSettings__set_ambientLight(v31->static_fields->DEFAULT_AMBIENT_LIGHT_COLOR, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 1, 32, 0LL);
  MainMenuBar__setMenuActive(1, this->fields.mUICamera, 0LL);
  TerminalSceneComponent__SetDispStandServant(this, 1, v32);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v33);
  if ( !byte_4B1837E )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v33, v34);
    byte_4B1837E = 1;
  }
  v35 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v33);
    v35 = TerminalPramsManager_TypeInfo;
  }
  if ( !v35->static_fields->_IsDispDone_UIStandFigure_k__BackingField )
  {
    if ( !v35->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v35, v33);
    if ( !byte_4B1837F )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v33, v34);
      byte_4B1837F = 1;
    }
    v36 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v33);
      v36 = TerminalPramsManager_TypeInfo;
    }
    v36->static_fields->_IsDispDone_UIStandFigure_k__BackingField = 1;
    if ( !byte_4B18380 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v33, v34);
      v36 = TerminalPramsManager_TypeInfo;
      byte_4B18380 = 1;
    }
    if ( !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36, v33);
      v36 = TerminalPramsManager_TypeInfo;
    }
    v36->static_fields->_IsDispUIStandFigure_k__BackingField = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v39);
  Instance = (Il2CppObject *)TutorialFlag__Get_38402052(126, 0LL);
  if ( !MasterData_object
    || (((unsigned __int8)Instance & 1) == 0
      ? (UserServantListFromDeckIsTerminal = UserDeckMaster__GetUserServantListFromDeckIsTerminal(
                                               (UserDeckMaster_o *)MasterData_object,
                                               0LL))
      : (UserServantListFromDeckIsTerminal = UserDeckMaster__GetUserServantListFromDeckReaveHeroine(
                                               (UserDeckMaster_o *)MasterData_object,
                                               0LL)),
        this->fields.mStandSvtDatas = UserServantListFromDeckIsTerminal,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.mStandSvtDatas,
          (int64_t)UserServantListFromDeckIsTerminal,
          v42,
          v43,
          v44,
          v45,
          v46,
          v47),
        (mStandSvtDatas = this->fields.mStandSvtDatas) == 0LL) )
  {
LABEL_45:
    sub_1BCAA3C(Instance, v38);
  }
  mStandSvtIdx = this->fields.mStandSvtIdx;
  if ( (unsigned int)mStandSvtIdx >= mStandSvtDatas->max_length )
    sub_1BCAA44(Instance, v38);
  NextStandServant = mStandSvtDatas->m_Items[mStandSvtIdx];
  if ( !NextStandServant )
    NextStandServant = TerminalSceneComponent__GetNextStandServant(this, v38);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v38);
  isSavedMemoryMode = OptionManager__isSavedMemoryMode(0LL);
  v55 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v52, v53, v54);
  v56 = v55;
  if ( isSavedMemoryMode )
  {
    System_Action___ctor(v55, (Il2CppObject *)this, Method_TerminalSceneComponent__beginStartUp_b__175_0__, 0LL);
    TerminalSceneComponent__SetupStandServant(this, NextStandServant, 0, v56, v57);
  }
  else
  {
    System_Action___ctor(v55, (Il2CppObject *)this, Method_TerminalSceneComponent_SendMessageStartUpAndResume__, 0LL);
    Async = TerminalSceneComponent__LoadAsync(this, NextStandServant, v56, v58);
    UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, Async, 0LL);
  }
}


void __fastcall TerminalSceneComponent__callbackEventDailyPoint(
        TerminalSceneComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  struct ScrTerminalMap_o *mTerminalMap; // x8
  struct WarEntity_o *mWarEnt; // x22
  __int64 v31; // x1
  __int64 v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  Il2CppObject *v39; // x21
  TerminalPramsManager_c *v40; // x0
  PartyOrganizationUtility_o *p_eventDailyPoint_k__BackingField; // x0
  __int64 v42; // x2
  int32_t monitor_high; // w21
  TerminalPramsManager_c *v44; // x0
  __int64 v45; // x1
  __int64 v46; // x2
  int64_t Time_39269384; // x21
  TerminalPramsManager_c *v48; // x0
  int32_t eventId; // w21
  struct ScrTerminalListTop_o *mTerminalList; // x8
  __int64 v51; // x2
  __int64 v52; // x3
  struct ScrTerminalListTop_o *v53; // x8
  UnityEngine_GameObject_o *mActionPanel; // x21
  TitleInfoControl_o *mTitleInfo; // x20
  System_Action_o *v56; // x22
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  System_DateTime_o v58; // 0:x0.8

  v4 = this;
  if ( (byte_4B182B2 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, result, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDetailMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v7, v8);
    sub_1BCA7E0(&Method_JsonManager_Deserialize_EventDailyPoint___, v9, v10);
    sub_1BCA7E0(&JsonManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    sub_1BCA7E0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v17, v18);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_TerminalSceneComponent__callbackEventDailyPoint_b__218_0__, v21, v22);
    sub_1BCA7E0(&StringLiteral_11195/*"REQUEST_NG"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v25, v26);
    this = (TerminalSceneComponent_o *)sub_1BCA7E0(&StringLiteral_25396/*"{}"*/, v27, v28);
    byte_4B182B2 = 1;
  }
  entity = 0LL;
  if ( !result )
    goto LABEL_46;
  if ( System_String__Equals_62409536(result, (System_String_o *)StringLiteral_22292/*"ng"*/, 0LL) )
  {
    this = (TerminalSceneComponent_o *)v4->fields.myFSM;
    if ( this )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11195/*"REQUEST_NG"*/, 0LL);
      return;
    }
LABEL_46:
    sub_1BCAA3C(this, result);
  }
  this = (TerminalSceneComponent_o *)System_String__Equals_62409536(result, (System_String_o *)StringLiteral_25396/*"{}"*/, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_43;
  mTerminalMap = v4->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_46;
  mWarEnt = mTerminalMap->fields.mWarEnt;
  this = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_46;
  this = (TerminalSceneComponent_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !mWarEnt || !this )
    goto LABEL_46;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &entity,
          mWarEnt->fields.eventId,
          (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
LABEL_43:
    this = (TerminalSceneComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !this )
      goto LABEL_46;
    MissionNotifyManager__EndPause((MissionNotifyManager_o *)this, 0LL);
    ActionExtensions__Call(v4->fields.afterEventDailyPoint, 0LL);
  }
  else
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v31);
    v39 = JsonManager__Deserialize_object_(
            (Il2CppObject *)result,
            (const MethodInfo_2F79634 *)Method_JsonManager_Deserialize_EventDailyPoint___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v32);
    if ( !byte_4B14EB9 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v32, v33);
      byte_4B14EB9 = 1;
    }
    v40 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v32);
      v40 = TerminalPramsManager_TypeInfo;
    }
    p_eventDailyPoint_k__BackingField = (PartyOrganizationUtility_o *)&v40->static_fields->_eventDailyPoint_k__BackingField;
    p_eventDailyPoint_k__BackingField->klass = (PartyOrganizationUtility_c *)v39;
    sub_1BCA784(p_eventDailyPoint_k__BackingField, (int64_t)v39, v33, v34, v35, v36, v37, v38);
    if ( !entity )
      goto LABEL_46;
    monitor_high = HIDWORD(entity[2].monitor);
    if ( !byte_4B18385 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, result, v42);
      byte_4B18385 = 1;
    }
    v44 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, result);
      v44 = TerminalPramsManager_TypeInfo;
    }
    v44->static_fields->_EventDailyPointItem_k__BackingField = monitor_high;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, result);
    v58.fields._dateData = NetworkManager__getServerDateTime(0LL).fields._dateData;
    Time_39269384 = NetworkManager__getTime_39269384(v58, 0LL);
    if ( !byte_4B137FE )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v45, v46);
      byte_4B137FE = 1;
    }
    v48 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v45);
      v48 = TerminalPramsManager_TypeInfo;
    }
    v48->static_fields->_BeforeTimeEventDailyPoint_k__BackingField = Time_39269384;
    eventId = mWarEnt->fields.eventId;
    if ( !byte_4B137FD )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v45, v46);
      v48 = TerminalPramsManager_TypeInfo;
      byte_4B137FD = 1;
    }
    if ( !v48->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v48, v45);
      v48 = TerminalPramsManager_TypeInfo;
    }
    v48->static_fields->_EventDailyPointEventId_k__BackingField = eventId;
    TerminalPramsManager__EventDailyPointSave_SaveData(0LL);
    mTerminalList = v4->fields.mTerminalList;
    if ( !mTerminalList )
      goto LABEL_46;
    this = (TerminalSceneComponent_o *)mTerminalList->fields.mActionBgColl;
    if ( !this )
      goto LABEL_46;
    this = (TerminalSceneComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_46;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (TerminalSceneComponent_o *)v4->fields.mTitleInfo;
    if ( !this )
      goto LABEL_46;
    TitleInfoControl__UpdateEventInfo((TitleInfoControl_o *)this, 0LL, 0LL);
    v53 = v4->fields.mTerminalList;
    if ( !v53 )
      goto LABEL_46;
    mActionPanel = v53->fields.mActionPanel;
    mTitleInfo = v4->fields.mTitleInfo;
    v56 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, result, v51, v52);
    System_Action___ctor(
      v56,
      (Il2CppObject *)v4,
      Method_TerminalSceneComponent__callbackEventDailyPoint_b__218_0__,
      0LL);
    if ( !mTitleInfo )
      goto LABEL_46;
    TitleInfoControl__EventDailyPointOpen(mTitleInfo, mActionPanel, v56, 0LL);
  }
}


void __fastcall TerminalSceneComponent__callbackTopHome(
        TerminalSceneComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  void *myFSM; // x0
  System_Action_o *afterTopLogin; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B182AD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_JsonManager_Deserialize_TopHomeInfo___, result, method);
    sub_1BCA7E0(&JsonManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_11197/*"REQUEST_OK"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_11195/*"REQUEST_NG"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v11, v12);
    byte_4B182AD = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_22292/*"ng"*/, 0LL) )
  {
    myFSM = this->fields.myFSM;
    if ( myFSM )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)StringLiteral_11195/*"REQUEST_NG"*/, 0LL);
      return;
    }
LABEL_11:
    sub_1BCAA3C(myFSM, v13);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v13);
  myFSM = JsonManager__Deserialize_object_(
            (Il2CppObject *)result,
            (const MethodInfo_2F79634 *)Method_JsonManager_Deserialize_TopHomeInfo___);
  if ( !myFSM )
    goto LABEL_11;
  TopHomeRequest__setRecentRefreshTime(*((_QWORD *)myFSM + 2), 0LL);
  MainMenuBar__UpdateNoticeNumber(0LL);
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    goto LABEL_11;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)StringLiteral_11197/*"REQUEST_OK"*/, 0LL);
  afterTopLogin = this->fields.afterTopLogin;
  this->fields.isTopLoginBusy = 0;
  ActionExtensions__Call(afterTopLogin, 0LL);
  this->fields.afterTopLogin = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.afterTopLogin, 0LL, v16, v17, v18, v19, v20, v21);
}


void __fastcall TerminalSceneComponent__callbackTopLogin(
        TerminalSceneComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  NetworkManager_ResultCallbackFunc_o *v40; // x21
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x2
  Il2CppObject *Request_object; // x21
  PlayMakerFSM_o *myFSM; // x0
  __int64 v46; // x1
  __int64 v47; // x1
  PlayMakerFSM_o *v48; // x19
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x0
  __int64 v50; // x2
  __int64 v51; // x3
  System_Collections_Generic_List_int__o *v52; // x20
  TerminalSceneComponent___c_c *v53; // x8
  System_Converter_TInput__TOutput__o *_9__211_0; // x21
  Il2CppObject *v55; // x22
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  System_String_array *v63; // x0
  System_String_o *v64; // x0
  System_Collections_Generic_IEnumerable_TSource__o *klass; // x0
  __int64 v66; // x2
  __int64 v67; // x3
  System_Collections_Generic_List_int__o *v68; // x19
  TerminalSceneComponent___c_c *v69; // x8
  System_Converter_TInput__TOutput__o *_9__211_1; // x20
  Il2CppObject *v71; // x21
  struct TerminalSceneComponent___c_StaticFields *v72; // x0
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  System_String_array *v79; // x0
  System_String_o *v80; // x0

  if ( (byte_4B182AC & 1) == 0 )
  {
    sub_1BCA7E0(&System_Converter_int__string__TypeInfo, result, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_int___, v6, v7);
    sub_1BCA7E0(&Method_JsonManager_Deserialize_CommonUI_LoginResultData___, v8, v9);
    sub_1BCA7E0(&JsonManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ConvertAll_string___, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__ToArray__, v14, v15);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_TopHomeRequest___, v16, v17);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v18, v19);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v20, v21);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_TerminalSceneComponent_callbackTopHome__, v24, v25);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__callbackTopLogin_b__211_0__, v26, v27);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__callbackTopLogin_b__211_1__, v28, v29);
    sub_1BCA7E0(&TerminalSceneComponent___c_TypeInfo, v30, v31);
    sub_1BCA7E0(&StringLiteral_19829/*"freeShopIds"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_11197/*"REQUEST_OK"*/, v34, v35);
    sub_1BCA7E0(&StringLiteral_23165/*"returnRarePriShopIds"*/, v36, v37);
    sub_1BCA7E0(&StringLiteral_863/*","*/, v38, v39);
    byte_4B182AC = 1;
  }
  v40 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                 NetworkManager_ResultCallbackFunc_TypeInfo,
                                                 result,
                                                 method,
                                                 v3);
  NetworkManager_ResultCallbackFunc___ctor(
    v40,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent_callbackTopHome__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v41);
  Request_object = NetworkManager__getRequest_object_(
                     v40,
                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_TopHomeRequest___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v42);
  if ( !byte_4B13445 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v42, v43);
    byte_4B13445 = 1;
  }
  myFSM = (PlayMakerFSM_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v42);
    myFSM = (PlayMakerFSM_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !Request_object )
    goto LABEL_45;
  TopHomeRequest__setBackgroundRequest(
    (TopHomeRequest_o *)Request_object,
    myFSM[2].fields.addEventHandlers[6].fields.method_ptr,
    0LL);
  if ( (((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Request_object->klass->vtable[7].method)(
          Request_object,
          Request_object->klass->vtable[8].methodPtr) & 1) == 0 )
    goto LABEL_19;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v46);
  if ( !TerminalPramsManager__IsAutoForTimeProgressEvents(0LL) || TopHomeRequest__IsExpirationDateUpdateEventMap(0LL) )
  {
    myFSM = this->fields.myFSM;
    if ( !myFSM )
      goto LABEL_45;
    PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11197/*"REQUEST_OK"*/, 0LL);
    this->fields.isTopLoginBusy = 0;
  }
  else
  {
LABEL_19:
    RequestBase__beginRequest((RequestBase_o *)Request_object, 0LL);
  }
  if ( System_String__IsNullOrEmpty(result, 0LL) )
    return;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v47);
  myFSM = (PlayMakerFSM_o *)JsonManager__Deserialize_object_(
                              (Il2CppObject *)result,
                              (const MethodInfo_2F79634 *)Method_JsonManager_Deserialize_CommonUI_LoginResultData___);
  if ( !myFSM )
LABEL_45:
    sub_1BCAA3C(myFSM, v42);
  v48 = myFSM;
  monitor = (System_Collections_Generic_IEnumerable_TSource__o *)myFSM[2].monitor;
  if ( monitor )
  {
    myFSM = (PlayMakerFSM_o *)System_Linq_Enumerable__ToList_int_(
                                monitor,
                                (const MethodInfo_2F4F4F8 *)Method_System_Linq_Enumerable_ToList_int___);
    v52 = (System_Collections_Generic_List_int__o *)myFSM;
    v53 = TerminalSceneComponent___c_TypeInfo;
    if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo, v42);
      v53 = TerminalSceneComponent___c_TypeInfo;
    }
    _9__211_0 = (System_Converter_TInput__TOutput__o *)v53->static_fields->__9__211_0;
    if ( !_9__211_0 )
    {
      if ( !v53->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v53, v42);
        v53 = TerminalSceneComponent___c_TypeInfo;
      }
      v55 = (Il2CppObject *)v53->static_fields->__9;
      _9__211_0 = (System_Converter_TInput__TOutput__o *)sub_1BCAA2C(
                                                           System_Converter_int__string__TypeInfo,
                                                           v42,
                                                           v50,
                                                           v51);
      System_Converter_int__object____ctor(
        _9__211_0,
        v55,
        Method_TerminalSceneComponent___c__callbackTopLogin_b__211_0__,
        0LL);
      static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
      static_fields->__9__211_0 = (struct System_Converter_int__string__o *)_9__211_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__211_0,
        (int64_t)_9__211_0,
        v57,
        v58,
        v59,
        v60,
        v61,
        v62);
    }
    if ( !v52 )
      goto LABEL_45;
    myFSM = (PlayMakerFSM_o *)System_Collections_Generic_List_int___ConvertAll_object_(
                                v52,
                                (System_Converter_T__TOutput__o *)_9__211_0,
                                (const MethodInfo_2E42A40 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    if ( !myFSM )
      goto LABEL_45;
    v63 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                   (System_Collections_Generic_List_object__o *)myFSM,
                                   (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_string__ToArray__);
    v64 = System_String__Join((System_String_o *)StringLiteral_863/*","*/, v63, 0LL);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_19829/*"freeShopIds"*/, v64, 0LL);
  }
  klass = (System_Collections_Generic_IEnumerable_TSource__o *)v48[2].klass;
  if ( klass )
  {
    myFSM = (PlayMakerFSM_o *)System_Linq_Enumerable__ToList_int_(
                                klass,
                                (const MethodInfo_2F4F4F8 *)Method_System_Linq_Enumerable_ToList_int___);
    v68 = (System_Collections_Generic_List_int__o *)myFSM;
    v69 = TerminalSceneComponent___c_TypeInfo;
    if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo, v42);
      v69 = TerminalSceneComponent___c_TypeInfo;
    }
    _9__211_1 = (System_Converter_TInput__TOutput__o *)v69->static_fields->__9__211_1;
    if ( !_9__211_1 )
    {
      if ( !v69->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v69, v42);
        v69 = TerminalSceneComponent___c_TypeInfo;
      }
      v71 = (Il2CppObject *)v69->static_fields->__9;
      _9__211_1 = (System_Converter_TInput__TOutput__o *)sub_1BCAA2C(
                                                           System_Converter_int__string__TypeInfo,
                                                           v42,
                                                           v66,
                                                           v67);
      System_Converter_int__object____ctor(
        _9__211_1,
        v71,
        Method_TerminalSceneComponent___c__callbackTopLogin_b__211_1__,
        0LL);
      v72 = TerminalSceneComponent___c_TypeInfo->static_fields;
      v72->__9__211_1 = (struct System_Converter_int__string__o *)_9__211_1;
      sub_1BCA784((PartyOrganizationUtility_o *)&v72->__9__211_1, (int64_t)_9__211_1, v73, v74, v75, v76, v77, v78);
    }
    if ( v68 )
    {
      myFSM = (PlayMakerFSM_o *)System_Collections_Generic_List_int___ConvertAll_object_(
                                  v68,
                                  (System_Converter_T__TOutput__o *)_9__211_1,
                                  (const MethodInfo_2E42A40 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
      if ( myFSM )
      {
        v79 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                       (System_Collections_Generic_List_object__o *)myFSM,
                                       (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_string__ToArray__);
        v80 = System_String__Join((System_String_o *)StringLiteral_863/*","*/, v79, 0LL);
        UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_23165/*"returnRarePriShopIds"*/, v80, 0LL);
        goto LABEL_44;
      }
    }
    goto LABEL_45;
  }
LABEL_44:
  UnityEngine_PlayerPrefs__Save(0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall TerminalSceneComponent__coFadein_WorldDisp(
        TerminalSceneComponent_o *this,
        float fadeTime,
        System_Action_o *endAct,
        bool isExecuteUnusedAssets,
        const MethodInfo *method)
{
  bool v9; // w22
  __int64 v10; // x21
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  if ( (byte_4B1829A & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalSceneComponent__coFadein_WorldDisp_d__193_TypeInfo, endAct, isExecuteUnusedAssets);
    byte_4B1829A = 1;
  }
  v9 = isExecuteUnusedAssets;
  v10 = sub_1BCAA2C(TerminalSceneComponent__coFadein_WorldDisp_d__193_TypeInfo, endAct, isExecuteUnusedAssets, method);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  *(_DWORD *)(v10 + 16) = 0;
  *(_QWORD *)(v10 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v10 + 32), (int64_t)this, v11, v12, v13, v14, v15, v16);
  *(float *)(v10 + 64) = fadeTime;
  *(_QWORD *)(v10 + 40) = endAct;
  sub_1BCA784((PartyOrganizationUtility_o *)(v10 + 40), (int64_t)endAct, v17, v18, v19, v20, v21, v22);
  *(_BYTE *)(v10 + 48) = v9;
  return (System_Collections_IEnumerator_o *)v10;
}


void __fastcall TerminalSceneComponent__deleteQuestMovie(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  int64_t Time; // x20
  Il2CppObject *Instance; // x0
  __int64 v25; // x1
  System_Collections_ObjectModel_Collection_T__o *EntityList_object; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *v27; // x21
  __int64 v28; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v31; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  __int64 v35; // x9
  int32_t *v36; // x10
  __int64 v37; // x0
  __int64 v38; // x0
  QuestPhaseEntity_c *v39; // x1
  QuestPhaseEntity_o *v40; // x22
  __int64 methodPtr_low; // x9
  QuestPhaseMaster_c *v42; // x0
  System_String_o *ScriptStr; // x0
  __int64 v44; // x1
  System_String_o *v45; // x23
  Il2CppObject *Entity; // x0
  System_Collections_Generic_IEnumerator_T__c *v47; // x8
  __int64 v48; // x9
  int32_t *v49; // x10
  __int64 v50; // x0

  if ( (byte_4B182B0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestMaster___, v3, v4);
    sub_1BCA7E0(&Method_DataManager_getEntityList_QuestPhaseMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v7, v8);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v13, v14);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&QuestPhaseEntity_TypeInfo, v17, v18);
    sub_1BCA7E0(&QuestPhaseMaster_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22);
    byte_4B182B0 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  Time = NetworkManager__getTime(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (EntityList_object = (System_Collections_ObjectModel_Collection_T__o *)DataManager__getEntityList_object_(
                                                                                (DataManager_o *)Instance,
                                                                                (const MethodInfo_2F12E8C *)Method_DataManager_getEntityList_QuestPhaseMaster___),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___),
        !EntityList_object) )
  {
    sub_1BCAA3C(Instance, v25);
  }
  v27 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 EntityList_object,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v28);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v31 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v31;
        p_offset += 4;
        if ( !v31 )
          goto LABEL_13;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_13:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v34 = Enumerator->klass;
    v35 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v36 = &v34->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v36 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v35;
        v36 += 4;
        if ( !v35 )
          goto LABEL_20;
      }
      v37 = (__int64)&v34->vtable[*v36].method;
    }
    else
    {
LABEL_20:
      v37 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v38 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(
            Enumerator,
            *(_QWORD *)(v37 + 8));
    v40 = (QuestPhaseEntity_o *)v38;
    if ( v38 )
    {
      v39 = QuestPhaseEntity_TypeInfo;
      methodPtr_low = LOBYTE(QuestPhaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v38 + 304LL) < (unsigned int)methodPtr_low
        || *(QuestPhaseEntity_c **)(*(_QWORD *)(*(_QWORD *)v38 + 200LL) + 8 * methodPtr_low - 8) != QuestPhaseEntity_TypeInfo )
      {
        sub_1BCACFC(v38);
LABEL_41:
        sub_1BCAA3C(v42, v39);
      }
    }
    v42 = QuestPhaseMaster_TypeInfo;
    if ( !QuestPhaseMaster_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestPhaseMaster_TypeInfo, v39);
    if ( !v40 )
      goto LABEL_41;
    ScriptStr = QuestPhaseEntity__getScriptStr(
                  v40,
                  QuestPhaseMaster_TypeInfo->static_fields->MOVIE_QUEST_SCRIPT_STR,
                  0LL,
                  0LL);
    v45 = ScriptStr;
    if ( ScriptStr )
    {
      if ( !v27 )
        sub_1BCAA3C(ScriptStr, v44);
      Entity = DataMasterBase_object__object__int___GetEntity(
                 v27,
                 v40->fields.questId,
                 (const MethodInfo_31B2E40 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
      if ( Entity )
      {
        if ( Time >= QuestEntity__getClosedAt((QuestEntity_o *)Entity, 0LL) )
          MovieFileMerge__Delete(v45, 0LL);
      }
    }
  }
  v47 = Enumerator->klass;
  v48 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v49 = &v47->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v49 - 1) != System_IDisposable_TypeInfo )
    {
      --v48;
      v49 += 4;
      if ( !v48 )
        goto LABEL_37;
    }
    v50 = (__int64)&v47->vtable[*v49].method;
  }
  else
  {
LABEL_37:
    v50 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v50)(Enumerator, *(_QWORD *)(v50 + 8));
}


void __fastcall TerminalSceneComponent__fadeoutBgm(
        TerminalSceneComponent_o *this,
        float fadeoutTime,
        const MethodInfo *method)
{
  __int64 v3; // x2

  if ( (byte_4B182A9 & 1) == 0 )
  {
    sub_1BCA7E0(&SoundManager_TypeInfo, method, v3);
    byte_4B182A9 = 1;
  }
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method);
  SoundManager__fadeoutBgm(fadeoutTime, 0LL);
}


BaseCore_o *__fastcall TerminalSceneComponent__get_EarthCore(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  return this->fields.mEarthCore;
}


UnityEngine_GameObject_o *__fastcall TerminalSceneComponent__get_EarthCoreObj(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.mEarthCoreObj;
}


UnityEngine_Camera_o *__fastcall TerminalSceneComponent__get_EarthEffectCamera(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.mEarthEffCamera;
}


UnityEngine_GameObject_o *__fastcall TerminalSceneComponent__get_EffectMask(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.mEffectMask;
}


UnityEngine_GameObject_o *__fastcall TerminalSceneComponent__get_EffectPanel(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.mEffectPanel;
}


float __fastcall TerminalSceneComponent__get_FirstFadeTime(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  return this->fields._FirstFadeTime_k__BackingField;
}


TerminalSceneComponent_o *__fastcall TerminalSceneComponent__get_Instance(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalSceneComponent_c *v3; // x0

  if ( (byte_4B18280 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v1, v2);
    byte_4B18280 = 1;
  }
  v3 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v1);
    v3 = TerminalSceneComponent_TypeInfo;
  }
  return v3->static_fields->mInstance;
}


bool __fastcall TerminalSceneComponent__get_IsPassCylinderCore(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._IsPassCylinderCore_k__BackingField;
}


bool __fastcall TerminalSceneComponent__get_IsPassEarthCore(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  return this->fields._IsPassEarthCore_k__BackingField;
}


bool __fastcall TerminalSceneComponent__get_IsPlayingCampaignDirectBonus(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._IsPlayingCampaignDirectBonus_k__BackingField;
}


bool __fastcall TerminalSceneComponent__get_IsReq_InitEarthRotateY(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._IsReq_InitEarthRotateY_k__BackingField;
}


bool __fastcall TerminalSceneComponent__get_IsTutorialActive(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  return this->fields.mTutorialKind != 0;
}


bool __fastcall TerminalSceneComponent__get_IsWarStartAnim(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  return this->fields._IsWarStartAnim_k__BackingField;
}


System_String_o *__fastcall TerminalSceneComponent__get_PlayBgmName(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.mPlayBgmName;
}


ScrPlayerStatus_o *__fastcall TerminalSceneComponent__get_PlayerStatus(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.mPlayerStatus;
}


UnityEngine_Vector2_o __fastcall TerminalSceneComponent__get_TUTORIAL_COMBINE_ARROW_POS_FS(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  float x; // s0
  float v3; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  x = this->fields.TUTORIAL_COMBINE_ARROW_POS.fields.x;
  v3 = this->fields.TUTORIAL_COMBINE_ARROW_POS.fields.y + 33.0;
  result.fields.y = v3;
  result.fields.x = x;
  return result;
}


UnityEngine_Rect_o __fastcall TerminalSceneComponent__get_TUTORIAL_COMBINE_ARROW_RECT_FS(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  float m_XMin; // s0
  float m_Width; // s2
  float v4; // s1
  float v5; // s3
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  m_XMin = this->fields.TUTORIAL_COMBINE_ARROW_RECT.fields.m_XMin;
  m_Width = this->fields.TUTORIAL_COMBINE_ARROW_RECT.fields.m_Width;
  v4 = this->fields.TUTORIAL_COMBINE_ARROW_RECT.fields.m_YMin + 53.0;
  v5 = 135.0;
  result.fields.m_Height = v5;
  result.fields.m_Width = m_Width;
  result.fields.m_YMin = v4;
  result.fields.m_XMin = m_XMin;
  return result;
}


UnityEngine_Vector2_o __fastcall TerminalSceneComponent__get_TUTORIAL_GACHA_ARROW_POS_FS(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  float x; // s0
  float v3; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  x = this->fields.TUTORIAL_GACHA_ARROW_POS.fields.x;
  v3 = this->fields.TUTORIAL_GACHA_ARROW_POS.fields.y + 33.0;
  result.fields.y = v3;
  result.fields.x = x;
  return result;
}


UnityEngine_Rect_o __fastcall TerminalSceneComponent__get_TUTORIAL_GACHA_ARROW_RECT_FS(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  float m_XMin; // s0
  float m_Width; // s2
  float v4; // s1
  float v5; // s3
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  m_XMin = this->fields.TUTORIAL_GACHA_ARROW_RECT.fields.m_XMin;
  m_Width = this->fields.TUTORIAL_GACHA_ARROW_RECT.fields.m_Width;
  v4 = this->fields.TUTORIAL_GACHA_ARROW_RECT.fields.m_YMin + 53.0;
  v5 = 135.0;
  result.fields.m_Height = v5;
  result.fields.m_Width = m_Width;
  result.fields.m_YMin = v4;
  result.fields.m_XMin = m_XMin;
  return result;
}


UnityEngine_Vector2_o __fastcall TerminalSceneComponent__get_TUTORIAL_MENU_ARROW_POS2_FS(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  float y; // s8
  float x; // s9
  float v6; // s0
  float v7; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4B18283 & 1) == 0 )
  {
    sub_1BCA7E0(&FSUtility_TypeInfo, method, v2);
    byte_4B18283 = 1;
  }
  x = this->fields.TUTORIAL_MENU_ARROW_POS2.fields.x;
  y = this->fields.TUTORIAL_MENU_ARROW_POS2.fields.y;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, method);
  v6 = x + (float)(FSUtility__GetOffsetX(68.0, 0, 0LL) + -2.0);
  v7 = y + 33.0;
  result.fields.y = v7;
  result.fields.x = v6;
  return result;
}


UnityEngine_Vector2_o __fastcall TerminalSceneComponent__get_TUTORIAL_MENU_ARROW_POS_FS(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  float y; // s8
  float x; // s9
  float v6; // s0
  float v7; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4B18282 & 1) == 0 )
  {
    sub_1BCA7E0(&FSUtility_TypeInfo, method, v2);
    byte_4B18282 = 1;
  }
  x = this->fields.TUTORIAL_MENU_ARROW_POS.fields.x;
  y = this->fields.TUTORIAL_MENU_ARROW_POS.fields.y;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, method);
  v6 = x + (float)(FSUtility__GetOffsetX(68.0, 0, 0LL) + -14.0);
  v7 = y + 33.0;
  result.fields.y = v7;
  result.fields.x = v6;
  return result;
}


UnityEngine_Rect_o __fastcall TerminalSceneComponent__get_TUTORIAL_MENU_ARROW_RECT_FS(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  float m_XMin; // s9
  float m_YMin; // s10
  float m_Width; // s8
  float m_Height; // s11
  float v6; // s0
  float v7; // s1
  float v8; // s3
  float v9; // s2
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  m_XMin = this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_XMin;
  m_YMin = this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_YMin;
  m_Width = this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Width;
  m_Height = this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Height;
  v6 = m_XMin + TerminalSceneComponent__FSMenuOffsetX(this, method);
  v7 = m_YMin + 33.0;
  v8 = m_Height + 33.0;
  v9 = m_Width;
  result.fields.m_Height = v8;
  result.fields.m_Width = v9;
  result.fields.m_YMin = v7;
  result.fields.m_XMin = v6;
  return result;
}


UnityEngine_Vector2_o __fastcall TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_POS_FS(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  float y; // s8
  float x; // s9
  float v6; // s0
  float v7; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4B18284 & 1) == 0 )
  {
    sub_1BCA7E0(&FSUtility_TypeInfo, method, v2);
    byte_4B18284 = 1;
  }
  x = this->fields.TUTORIAL_QUEST_ARROW_POS.fields.x;
  y = this->fields.TUTORIAL_QUEST_ARROW_POS.fields.y;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, method);
  v6 = x + FSUtility__GetOffsetX(64.0, 0, 0LL);
  v7 = y;
  result.fields.y = v7;
  result.fields.x = v6;
  return result;
}


UnityEngine_Rect_o __fastcall TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_RECT_FS(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  float m_YMin; // s10
  float m_XMin; // s11
  float m_Height; // s8
  float m_Width; // s9
  float OffsetX; // s0
  float v9; // s2
  float v10; // s3
  float v11; // s0
  float v12; // s1
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B18285 & 1) == 0 )
  {
    sub_1BCA7E0(&FSUtility_TypeInfo, method, v2);
    byte_4B18285 = 1;
  }
  m_XMin = this->fields.TUTORIAL_QUEST_ARROW_RECT.fields.m_XMin;
  m_YMin = this->fields.TUTORIAL_QUEST_ARROW_RECT.fields.m_YMin;
  m_Width = this->fields.TUTORIAL_QUEST_ARROW_RECT.fields.m_Width;
  m_Height = this->fields.TUTORIAL_QUEST_ARROW_RECT.fields.m_Height;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, method);
  OffsetX = FSUtility__GetOffsetX(64.0, 0, 0LL);
  v9 = m_Width;
  v10 = m_Height;
  v11 = m_XMin + OffsetX;
  v12 = m_YMin;
  result.fields.m_Height = v10;
  result.fields.m_Width = v9;
  result.fields.m_YMin = v12;
  result.fields.m_XMin = v11;
  return result;
}


UnityEngine_Vector2_o __fastcall TerminalSceneComponent__get_TUTORIAL_SPOT_ARROW_POS1_FS(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o v4; // kr00_8
  UnityEngine_Vector2_o v5; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  v5.fields.x = -55.0;
  v5.fields.y = -97.0;
  v4 = TerminalSceneComponent__FSSpotArrowPosLerp(this, v5, method);
  y = v4.fields.y;
  x = v4.fields.x;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


UnityEngine_Vector2_o __fastcall TerminalSceneComponent__get_TUTORIAL_SPOT_ARROW_POS2_FS(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o v4; // kr00_8
  UnityEngine_Vector2_o v5; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  v5.fields.x = 0.0;
  v5.fields.y = -113.0;
  v4 = TerminalSceneComponent__FSSpotArrowPosLerp(this, v5, method);
  y = v4.fields.y;
  x = v4.fields.x;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


UnityEngine_Vector2_o __fastcall TerminalSceneComponent__get_TUTORIAL_SPOT_ARROW_POS4_FS(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o v4; // kr00_8
  UnityEngine_Vector2_o v5; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  v5.fields.x = 0.0;
  v5.fields.y = -113.0;
  v4 = TerminalSceneComponent__FSSpotArrowPosLerp(this, v5, method);
  y = v4.fields.y;
  x = v4.fields.x;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Rect_o __fastcall TerminalSceneComponent__get_TUTORIAL_SPOT_ARROW_RECT1_FS(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  float v2; // s0
  float v3; // s1
  float v4; // s2
  float v5; // s3
  UnityEngine_Vector2_o v6; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v6.fields.y = 0.0;
  v6.fields.x = -55.0;
  *(UnityEngine_Rect_o *)&v2 = TerminalSceneComponent__FSSpotArrowRectLerp(this, v6, method);
  result.fields.m_Height = v5;
  result.fields.m_Width = v4;
  result.fields.m_YMin = v3;
  result.fields.m_XMin = v2;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Rect_o __fastcall TerminalSceneComponent__get_TUTORIAL_SPOT_ARROW_RECT2_FS(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  float v2; // s0
  float v3; // s1
  float v4; // s2
  float v5; // s3
  UnityEngine_Vector2_o v6; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v6.fields.x = 0.0;
  v6.fields.y = 0.0;
  *(UnityEngine_Rect_o *)&v2 = TerminalSceneComponent__FSSpotArrowRectLerp(this, v6, method);
  result.fields.m_Height = v5;
  result.fields.m_Width = v4;
  result.fields.m_YMin = v3;
  result.fields.m_XMin = v2;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Rect_o __fastcall TerminalSceneComponent__get_TUTORIAL_SPOT_ARROW_RECT4_FS(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  float v2; // s0
  float v3; // s1
  float v4; // s2
  float v5; // s3
  UnityEngine_Vector2_o v6; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v6.fields.x = 0.0;
  v6.fields.y = 0.0;
  *(UnityEngine_Rect_o *)&v2 = TerminalSceneComponent__FSSpotArrowRectLerp(this, v6, method);
  result.fields.m_Height = v5;
  result.fields.m_Width = v4;
  result.fields.m_YMin = v3;
  result.fields.m_XMin = v2;
  return result;
}


UIAtlas_o *__fastcall TerminalSceneComponent__get_TerminalAtlas(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.mTerminalAtlas;
}


ScrTerminalListTop_o *__fastcall TerminalSceneComponent__get_TerminalList(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.mTerminalList;
}


ScrTerminalMap_o *__fastcall TerminalSceneComponent__get_TerminalMap(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.mTerminalMap;
}


StandFigureSlideComponent_o *__fastcall TerminalSceneComponent__get_TerminalServant(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.mTerminalServant;
}


TitleInfoControl_o *__fastcall TerminalSceneComponent__get_TitleInfo(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.mTitleInfo;
}


TerminalTransitionInfo_o *__fastcall TerminalSceneComponent__get_TransitionInfo(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._TransitionInfo_k__BackingField;
}


bool __fastcall TerminalSceneComponent__get_onClosePresentBoxFlag(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._onClosePresentBoxFlag_k__BackingField;
}


void __fastcall TerminalSceneComponent__loadCommonBG(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Action_o *v15; // x20
  __int64 v16; // x1

  if ( (byte_4B1828F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_TerminalSceneComponent__loadCommonBG_b__180_0__, v8, v9);
    byte_4B1828F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v11);
  if ( AtlasManager__isLoadedSkinData((AtlasManager_o *)Instance, 4, 0LL) )
  {
    TerminalSceneComponent__loadOutGameAtlas(this, v12);
  }
  else
  {
    v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
    System_Action___ctor(v15, (Il2CppObject *)this, Method_TerminalSceneComponent__loadCommonBG_b__180_0__, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v16);
    AtlasManager__LoadUISkin(v15, 4, 1, 0LL);
  }
}


void __fastcall TerminalSceneComponent__loadOutGameAtlas(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_o *v9; // x20
  __int64 v10; // x1

  if ( (byte_4B18290 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_TerminalSceneComponent__loadOutGameAtlas_b__181_0__, v7, v8);
    byte_4B18290 = 1;
  }
  v9 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_TerminalSceneComponent__loadOutGameAtlas_b__181_0__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v10);
  AtlasManager__LoadOutGameAtlas(v9, 0LL);
}


void __fastcall TerminalSceneComponent__loadVoice(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct TerminalTransitionInfo_o *TransitionInfo_k__BackingField; // x8
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  struct TerminalTransitionInfo_o *v13; // x8
  System_String_o *voiceAssetName; // x21
  SoundManager_o *v15; // x20
  System_Action_o *v16; // x22

  if ( (byte_4B18291 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_TerminalSceneComponent_SendMessageStartUpAndResume__, v6, v7);
    byte_4B18291 = 1;
  }
  TransitionInfo_k__BackingField = this->fields._TransitionInfo_k__BackingField;
  if ( TransitionInfo_k__BackingField
    && !System_String__IsNullOrEmpty(TransitionInfo_k__BackingField->fields.voiceAssetName, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    v13 = this->fields._TransitionInfo_k__BackingField;
    if ( !v13
      || (voiceAssetName = v13->fields.voiceAssetName,
          v15 = (SoundManager_o *)Instance,
          v16 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12),
          System_Action___ctor(
            v16,
            (Il2CppObject *)this,
            Method_TerminalSceneComponent_SendMessageStartUpAndResume__,
            0LL),
          !v15) )
    {
      sub_1BCAA3C(Instance, v10);
    }
    SoundManager__LoadAudioAssetStorage(v15, voiceAssetName, v16, 1, 0LL);
  }
  else
  {
    TerminalSceneComponent__SendMessageStartUpAndResume(this, method);
  }
}


void __fastcall TerminalSceneComponent__mcbfCheckSceneStatus(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  TerminalPramsManager_c *v8; // x0
  int32_t meSceneStatus; // w8
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v11; // x8

  if ( (byte_4B182BE & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_5826/*"EV_SCENE_STATUS_INIT"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_5827/*"EV_SCENE_STATUS_RESUME"*/, v6, v7);
    byte_4B182BE = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_4B1336E )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B1336E = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v8 = TerminalPramsManager_TypeInfo;
  }
  meSceneStatus = v8->static_fields->meSceneStatus;
  if ( meSceneStatus != 3 && meSceneStatus != 2 )
  {
    myFSM = this->fields.myFSM;
    if ( myFSM )
    {
      v11 = &StringLiteral_5826/*"EV_SCENE_STATUS_INIT"*/;
      goto LABEL_15;
    }
LABEL_16:
    sub_1BCAA3C(myFSM, method);
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    goto LABEL_16;
  v11 = &StringLiteral_5827/*"EV_SCENE_STATUS_RESUME"*/;
LABEL_15:
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v11, 0LL);
}


void __fastcall TerminalSceneComponent__mfCallFsmEvent(
        TerminalSceneComponent_o *this,
        System_String_o *sEventStr,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1BCAA3C(0LL, sEventStr);
  PlayMakerFSM__SendEvent(myFSM, sEventStr, 0LL);
}


void __fastcall TerminalSceneComponent__mfsmfInitTable(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  ScrTerminalMap_o *mTerminalMap; // x0
  struct ScrTerminalListTop_o *mTerminalList; // x8
  Il2CppObject *Instance; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  System_Action_o *v14; // x21
  System_Collections_IEnumerator_o *v15; // x1

  if ( (byte_4B182AF & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonTemplate_QuestTree__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_TerminalSceneComponent__mfsmfInitTable_b__215_0__, v6, v7);
    byte_4B182AF = 1;
  }
  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap
    || (ScrTerminalMap__ReleaseMap(mTerminalMap, 0, 0LL), (mTerminalList = this->fields.mTerminalList) == 0LL)
    || (mTerminalMap = (ScrTerminalMap_o *)mTerminalList->fields.mQuestBoardListViewManager) == 0LL
    || (ListViewManager__DestroyList((ListViewManager_o *)mTerminalMap, 0LL),
        Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__),
        v14 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13),
        System_Action___ctor(v14, (Il2CppObject *)this, Method_TerminalSceneComponent__mfsmfInitTable_b__215_0__, 0LL),
        !Instance) )
  {
    sub_1BCAA3C(mTerminalMap, method);
  }
  v15 = QuestTree__Init((QuestTree_o *)Instance, v14, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v15, 0LL);
}


void __fastcall TerminalSceneComponent__playBgm(
        TerminalSceneComponent_o *this,
        System_String_o *bgmName,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  __int64 v12; // x1
  System_String_o *mPlayBgmName; // x19

  if ( (byte_4B182A6 & 1) == 0 )
  {
    sub_1BCA7E0(&SoundManager_TypeInfo, bgmName, method);
    byte_4B182A6 = 1;
  }
  if ( System_String__IsNullOrEmpty(bgmName, 0LL) )
  {
    TerminalSceneComponent__playDefaultBgm(this, v5);
  }
  else
  {
    this->fields.mPlayBgmName = bgmName;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mPlayBgmName, (int64_t)bgmName, v6, v7, v8, v9, v10, v11);
    mPlayBgmName = this->fields.mPlayBgmName;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v12);
    SoundManager__playBgm(mPlayBgmName, 0LL);
  }
}


void __fastcall TerminalSceneComponent__playBgm_42940932(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *mPlayBgmName; // x19

  if ( (byte_4B182A8 & 1) == 0 )
  {
    sub_1BCA7E0(&SoundManager_TypeInfo, method, v2);
    byte_4B182A8 = 1;
  }
  mPlayBgmName = this->fields.mPlayBgmName;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method);
  SoundManager__playBgm(mPlayBgmName, 0LL);
}


void __fastcall TerminalSceneComponent__playDefaultBgm(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *MainBgmName; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4B182A7 & 1) == 0 )
  {
    sub_1BCA7E0(&BgmManager_TypeInfo, method, v2);
    byte_4B182A7 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
  MainBgmName = BgmManager__GetMainBgmName(0LL);
  TerminalSceneComponent__playBgm(this, MainBgmName, v5);
}


void __fastcall TerminalSceneComponent__quit(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  void *Instance; // x0
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x2
  TerminalPramsManager_c *v24; // x0
  TerminalPramsManager_c *v25; // x0
  struct TerminalTransitionInfo_o *TransitionInfo_k__BackingField; // x8
  struct TerminalTransitionInfo_o *v27; // x8
  System_String_o *voiceAssetName; // x20
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  Il2CppObject *MasterData_object; // x0
  __int64 v36; // x1
  TerminalOverwriteMaster_o *v37; // x20
  bool OverwriteSkinName; // w0
  __int64 v39; // x1
  TerminalSceneComponent_c *v40; // x8
  bool v41; // w22
  System_String_o *OVERWRITE_COMMON_BG_TYPE1_KEY; // x21
  System_String_o *Empty; // x1
  bool v44; // w0
  __int64 v45; // x1
  TerminalSceneComponent_c *v46; // x8
  bool v47; // w21
  System_String_o *OVERWRITE_COMMON_BG_TYPE2_KEY; // x20
  System_String_o *v49; // x1
  System_String_o *str1; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *skinName; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4B18294 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TerminalOverwriteMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v8, v9);
    sub_1BCA7E0(&SoundManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&string_TypeInfo, v12, v13);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v16, v17);
    sub_1BCA7E0(&StringLiteral_14938/*"UISkin/"*/, v18, v19);
    byte_4B18294 = 1;
  }
  skinName = 0LL;
  str1 = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  AutomatedAction__TerminateMissionAction((AutomatedAction_o *)Instance, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v22);
  if ( !byte_4B18381 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v22, v23);
    byte_4B18381 = 1;
  }
  v24 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v22);
    v24 = TerminalPramsManager_TypeInfo;
  }
  if ( v24->static_fields->_isWarBoardPlay_k__BackingField )
  {
    if ( !v24->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v24, v22);
    if ( !byte_4B13622 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v22, v23);
      byte_4B13622 = 1;
    }
    v25 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v22);
      v25 = TerminalPramsManager_TypeInfo;
    }
    v25->static_fields->_isWarBoardPlay_k__BackingField = 0;
  }
  else
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v22);
    SoundManager__stopSe(0.0, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  QuestAfterAction__releaseVoice((QuestAfterAction_o *)Instance, 0LL);
  TransitionInfo_k__BackingField = this->fields._TransitionInfo_k__BackingField;
  if ( TransitionInfo_k__BackingField )
  {
    Instance = (void *)System_String__IsNullOrEmpty(TransitionInfo_k__BackingField->fields.voiceAssetName, 0LL);
    if ( ((unsigned __int8)Instance & 1) == 0 )
    {
      v27 = this->fields._TransitionInfo_k__BackingField;
      if ( !v27 )
        goto LABEL_50;
      voiceAssetName = v27->fields.voiceAssetName;
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v21);
      SoundManager__releaseAudioAssetStorage(voiceAssetName, 0LL);
      Instance = this->fields._TransitionInfo_k__BackingField;
      if ( !Instance )
        goto LABEL_50;
      *((_QWORD *)Instance + 5) = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)((char *)Instance + 40), 0LL, v29, v30, v31, v32, v33, v34);
    }
  }
  Instance = this->fields.mTerminalMap;
  if ( !Instance )
    goto LABEL_50;
  ScrTerminalMap__Quit((ScrTerminalMap_o *)Instance, this->fields.quitType, 0LL);
  if ( this->fields.quitType == 2 )
  {
    Instance = this->fields.mTitleInfo;
    if ( Instance )
    {
      TitleInfoControl__releaseAssetData((TitleInfoControl_o *)Instance, 0LL);
      Instance = this->fields.mTerminalList;
      if ( Instance )
      {
        ScrTerminalListTop__ReleaseAsset((ScrTerminalListTop_o *)Instance, 0LL);
        goto LABEL_34;
      }
    }
LABEL_50:
    sub_1BCAA3C(Instance, v21);
  }
LABEL_34:
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TerminalOverwriteMaster___);
  if ( MasterData_object )
  {
    v37 = (TerminalOverwriteMaster_o *)MasterData_object;
    OverwriteSkinName = TerminalOverwriteMaster__TryGetOverwriteSkinName(
                          (TerminalOverwriteMaster_o *)MasterData_object,
                          2,
                          &skinName,
                          0LL);
    v40 = TerminalSceneComponent_TypeInfo;
    v41 = OverwriteSkinName;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v39);
      v40 = TerminalSceneComponent_TypeInfo;
    }
    OVERWRITE_COMMON_BG_TYPE1_KEY = v40->static_fields->OVERWRITE_COMMON_BG_TYPE1_KEY;
    if ( v41 )
      Empty = System_String__Concat_62401220((System_String_o *)StringLiteral_14938/*"UISkin/"*/, skinName, 0LL);
    else
      Empty = string_TypeInfo->static_fields->Empty;
    UnityEngine_PlayerPrefs__SetString(OVERWRITE_COMMON_BG_TYPE1_KEY, Empty, 0LL);
    v44 = TerminalOverwriteMaster__TryGetOverwriteSkinName(v37, 4, &str1, 0LL);
    v46 = TerminalSceneComponent_TypeInfo;
    v47 = v44;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v45);
      v46 = TerminalSceneComponent_TypeInfo;
    }
    OVERWRITE_COMMON_BG_TYPE2_KEY = v46->static_fields->OVERWRITE_COMMON_BG_TYPE2_KEY;
    if ( v47 )
      v49 = System_String__Concat_62401220((System_String_o *)StringLiteral_14938/*"UISkin/"*/, str1, 0LL);
    else
      v49 = string_TypeInfo->static_fields->Empty;
    UnityEngine_PlayerPrefs__SetString(OVERWRITE_COMMON_BG_TYPE2_KEY, v49, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v36);
  TerminalPramsManager__Save_SaveData(0LL);
  this->fields.quitType = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalSceneComponent__requestEventDailyPoint(
        TerminalSceneComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  NetworkManager_ResultCallbackFunc_o *v18; // x21
  __int64 v19; // x1

  if ( (byte_4B182B1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_NetworkManager_getRequest_EventDailyPointRequest___, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v9, v10);
    sub_1BCA7E0(&Method_TerminalSceneComponent_callbackEventDailyPoint__, v11, v12);
    byte_4B182B1 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  v18 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v15, v16, v17);
  NetworkManager_ResultCallbackFunc___ctor(
    v18,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent_callbackEventDailyPoint__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v19);
  Instance = NetworkManager__getRequest_object_(
               v18,
               (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_EventDailyPointRequest___);
  if ( !Instance )
LABEL_8:
    sub_1BCAA3C(Instance, v14);
  EventDailyPointRequest__beginRequest((EventDailyPointRequest_o *)Instance, eventId, 0LL);
}


void __fastcall TerminalSceneComponent__requestTopHome(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  TerminalPramsManager_c *v16; // x0
  PlayMakerFSM_o *myFSM; // x0
  Il2CppObject *Instance; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  NetworkManager_LoginCallbackFunc_o *v22; // x21

  if ( (byte_4B182AB & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_LoginCallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v4, v5);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_TerminalSceneComponent_callbackTopLogin__, v8, v9);
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_11197/*"REQUEST_OK"*/, v12, v13);
    byte_4B182AB = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method);
  if ( !TutorialFlag__Get_38402052(102, 0LL) )
    goto LABEL_13;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v14);
  if ( !byte_4B13383 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v14, v15);
    byte_4B13383 = 1;
  }
  v16 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v14);
    v16 = TerminalPramsManager_TypeInfo;
  }
  if ( v16->static_fields->_IsPlayScriptWithMap_k__BackingField )
  {
LABEL_13:
    myFSM = this->fields.myFSM;
    if ( myFSM )
    {
      PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11197/*"REQUEST_OK"*/, 0LL);
      this->fields.isTopLoginBusy = 0;
      return;
    }
LABEL_17:
    sub_1BCAA3C(myFSM, v14);
  }
  this->fields.isTopLoginBusy = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  v22 = (NetworkManager_LoginCallbackFunc_o *)sub_1BCAA2C(NetworkManager_LoginCallbackFunc_TypeInfo, v19, v20, v21);
  NetworkManager_LoginCallbackFunc___ctor(
    v22,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent_callbackTopLogin__,
    0LL);
  if ( !Instance )
    goto LABEL_17;
  NetworkManager__RequestLogin((NetworkManager_o *)Instance, v22, 0, 0LL);
}


void __fastcall TerminalSceneComponent__set_FirstFadeTime(
        TerminalSceneComponent_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._FirstFadeTime_k__BackingField = value;
}


void __fastcall TerminalSceneComponent__set_IsPassCylinderCore(
        TerminalSceneComponent_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsPassCylinderCore_k__BackingField = value;
}


void __fastcall TerminalSceneComponent__set_IsPassEarthCore(
        TerminalSceneComponent_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsPassEarthCore_k__BackingField = value;
}


void __fastcall TerminalSceneComponent__set_IsPlayingCampaignDirectBonus(
        TerminalSceneComponent_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsPlayingCampaignDirectBonus_k__BackingField = value;
}


void __fastcall TerminalSceneComponent__set_IsReq_InitEarthRotateY(
        TerminalSceneComponent_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsReq_InitEarthRotateY_k__BackingField = value;
}


void __fastcall TerminalSceneComponent__set_IsTutorialActive(
        TerminalSceneComponent_o *this,
        bool value,
        const MethodInfo *method)
{
  ;
}


void __fastcall TerminalSceneComponent__set_IsWarStartAnim(
        TerminalSceneComponent_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsWarStartAnim_k__BackingField = value;
}


void __fastcall TerminalSceneComponent__set_TransitionInfo(
        TerminalSceneComponent_o *this,
        TerminalTransitionInfo_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._TransitionInfo_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._TransitionInfo_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall TerminalSceneComponent__set_onClosePresentBoxFlag(
        TerminalSceneComponent_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._onClosePresentBoxFlag_k__BackingField = value;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalSceneComponent_PlayChapterStartCallback___ctor(
        TerminalSceneComponent_PlayChapterStartCallback_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A0F0F8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0F0B0;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall TerminalSceneComponent_PlayChapterStartCallback__BeginInvoke(
        TerminalSceneComponent_PlayChapterStartCallback_o *this,
        bool isPlay,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isPlay;
  if ( (byte_4B182DA & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, isPlay, callback);
    byte_4B182DA = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall TerminalSceneComponent_PlayChapterStartCallback__EndInvoke(
        TerminalSceneComponent_PlayChapterStartCallback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall TerminalSceneComponent_PlayChapterStartCallback__Invoke(
        TerminalSceneComponent_PlayChapterStartCallback_o *this,
        bool isPlay,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isPlay,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall TerminalSceneComponent_StateNormal___ctor(
        TerminalSceneComponent_StateNormal_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent_StateNormal__begin(
        TerminalSceneComponent_StateNormal_o *this,
        TerminalSceneComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall TerminalSceneComponent_StateNormal__end(
        TerminalSceneComponent_StateNormal_o *this,
        TerminalSceneComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall TerminalSceneComponent_StateNormal__update(
        TerminalSceneComponent_StateNormal_o *this,
        TerminalSceneComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall TerminalSceneComponent_StateTutorial1_QuestArrow___ctor(
        TerminalSceneComponent_StateTutorial1_QuestArrow_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalSceneComponent_StateTutorial1_QuestArrow__begin(
        TerminalSceneComponent_StateTutorial1_QuestArrow_o *this,
        TerminalSceneComponent_o *that,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x19
  TerminalSceneComponent_o *mFG; // x0
  const MethodInfo *v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  TerminalSceneComponent_o **v28; // x20
  QuestBoardListViewObject_o *FocusQuest; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 v36; // x1
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x8
  struct UIScrollView_o *scrollView; // x8
  struct UIProgressBar_o *verticalScrollBar; // x23
  System_String_o *v41; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v43; // x0
  CommonUI_o *v44; // x22
  UnityEngine_Vector2_o TUTORIAL_QUEST_ARROW_POS_FS; // kr00_8
  __int64 v46; // x2
  __int64 v47; // x3
  float v48; // s0
  float v49; // s1
  float v50; // s2
  float v51; // s3
  TerminalSceneComponent_o *v52; // x8
  float x; // s14
  float y; // s15
  float v55; // s10
  float v56; // s11
  float v57; // s12
  float v58; // s13
  System_Action_o *v59; // x23
  __int64 v60; // x2
  __int64 v61; // x3
  struct ScrTerminalListTop_o *v62; // x21
  System_Action_o *v63; // x20
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  UnityEngine_Rect_o v70; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4B182DD & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, that, method);
    sub_1BCA7E0(&Method_GameObjectExtensions_RemoveComponent_Collider___, v5, v6);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10);
    sub_1BCA7E0(&Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__0__, v11, v12);
    sub_1BCA7E0(&Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__1__, v13, v14);
    sub_1BCA7E0(&TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_13671/*"TUTORIAL_MESSAGE_TERMINAL_QUEST1"*/, v17, v18);
    byte_4B182DD = 1;
  }
  v19 = sub_1BCAA2C(TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_TypeInfo, that, method, v3);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    goto LABEL_22;
  *(_QWORD *)(v19 + 16) = that;
  v28 = (TerminalSceneComponent_o **)(v19 + 16);
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 16), (int64_t)that, v22, v23, v24, v25, v26, v27);
  if ( !*(_QWORD *)(v19 + 16) )
    goto LABEL_22;
  mFG = *(TerminalSceneComponent_o **)(*(_QWORD *)(v19 + 16) + 256LL);
  if ( !mFG )
    goto LABEL_22;
  FocusQuest = ScrTerminalListTop__GetFocusQuest((ScrTerminalListTop_o *)mFG, 0LL);
  *(_QWORD *)(v19 + 24) = FocusQuest;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 24), (int64_t)FocusQuest, v30, v31, v32, v33, v34, v35);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v36);
  mFG = (TerminalSceneComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13671/*"TUTORIAL_MESSAGE_TERMINAL_QUEST1"*/, 0LL);
  if ( !*v28 )
    goto LABEL_22;
  mTerminalList = (*v28)->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_22;
  mQuestBoardListViewManager = mTerminalList->fields.mQuestBoardListViewManager;
  if ( !mQuestBoardListViewManager )
    goto LABEL_22;
  scrollView = mQuestBoardListViewManager->fields.scrollView;
  if ( !scrollView )
    goto LABEL_22;
  verticalScrollBar = scrollView->fields.verticalScrollBar;
  if ( !verticalScrollBar )
    goto LABEL_22;
  v41 = (System_String_o *)mFG;
  mFG = (TerminalSceneComponent_o *)verticalScrollBar->fields.mFG;
  if ( !mFG )
    goto LABEL_22;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mFG, 0LL);
  GameObjectExtensions__RemoveComponent_object_(
    gameObject,
    (const MethodInfo_2F64074 *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mFG = (TerminalSceneComponent_o *)verticalScrollBar->fields.mBG;
  if ( !mFG )
    goto LABEL_22;
  v43 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mFG, 0LL);
  GameObjectExtensions__RemoveComponent_object_(
    v43,
    (const MethodInfo_2F64074 *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mFG = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*v28 )
    goto LABEL_22;
  v44 = (CommonUI_o *)mFG;
  TUTORIAL_QUEST_ARROW_POS_FS = TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_POS_FS(*v28, v21);
  mFG = *v28;
  if ( !*v28 )
    goto LABEL_22;
  *(UnityEngine_Rect_o *)&v48 = TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_RECT_FS(mFG, v21);
  v52 = *v28;
  if ( !*v28 )
    goto LABEL_22;
  x = v52->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.x;
  y = v52->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.y;
  v55 = v48;
  v56 = v49;
  v57 = v50;
  v58 = v51;
  v59 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v21, v46, v47);
  System_Action___ctor(
    v59,
    (Il2CppObject *)v19,
    Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__0__,
    0LL);
  if ( !v44 )
    goto LABEL_22;
  v70.fields.m_XMin = v55;
  v70.fields.m_YMin = v56;
  v70.fields.m_Width = v57;
  v70.fields.m_Height = v58;
  CommonUI__OpenTutorialNotificationDialogArrow(
    v44,
    v41,
    TUTORIAL_QUEST_ARROW_POS_FS,
    v70,
    90.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    v59,
    0LL);
  if ( !*v28
    || (v62 = (*v28)->fields.mTerminalList,
        v63 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v21, v60, v61),
        System_Action___ctor(
          v63,
          (Il2CppObject *)v19,
          Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__1__,
          0LL),
        !v62) )
  {
LABEL_22:
    sub_1BCAA3C(mFG, v21);
  }
  v62->fields.mQuestClickAct = v63;
  sub_1BCA784((PartyOrganizationUtility_o *)&v62->fields.mQuestClickAct, (int64_t)v63, v64, v65, v66, v67, v68, v69);
}


void __fastcall TerminalSceneComponent_StateTutorial1_QuestArrow__end(
        TerminalSceneComponent_StateTutorial1_QuestArrow_o *this,
        TerminalSceneComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall TerminalSceneComponent_StateTutorial1_QuestArrow__update(
        TerminalSceneComponent_StateTutorial1_QuestArrow_o *this,
        TerminalSceneComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0___ctor(
        TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0___begin_b__0(
        TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *v3; // x19
  struct TerminalSceneComponent_o *that; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x8

  v3 = this;
  if ( (byte_4B182DE & 1) == 0 )
  {
    this = (TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *)sub_1BCA7E0(
                                                                                        &Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___,
                                                                                        method,
                                                                                        v2);
    byte_4B182DE = 1;
  }
  that = v3->fields.that;
  if ( !that )
    goto LABEL_12;
  mTerminalList = that->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_12;
  mQuestBoardListViewManager = mTerminalList->fields.mQuestBoardListViewManager;
  if ( !mQuestBoardListViewManager
    || (this = (TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *)mQuestBoardListViewManager->fields.scrollView) == 0LL
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL),
        (this = (TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *)v3->fields.focus_quest) == 0LL)
    || (((void (__fastcall *)(TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *, __int64, void *))this->klass[1]._1.parent)(
          this,
          1LL,
          this->klass[1]._1.generic_class),
        (this = (TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *)v3->fields.focus_quest) == 0LL)
    || (this = (TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *)UnityEngine_Component__get_gameObject(
                                                                                            (UnityEngine_Component_o *)this,
                                                                                            0LL)) == 0LL
    || (this = (TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                                            (UnityEngine_GameObject_o *)this,
                                                                                            (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___)) == 0LL )
  {
LABEL_12:
    sub_1BCAA3C(this, method);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0___begin_b__1(
        TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Action_o *_9__2; // x22
  CommonUI_o *v13; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B182DF & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__2__, v6, v7);
    byte_4B182DF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v13 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v9, v10, v11);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v14, v15, v16, v17, v18, v19);
  }
  if ( !v13 )
    sub_1BCAA3C(Instance, v9);
  CommonUI__CloseTutorialNotificationDialogArrow_30791892(v13, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1BCAA3C(0LL, method);
  TerminalSceneComponent__SetState(that, 0, v2);
}


void __fastcall TerminalSceneComponent_StateTutorial1_SpotArrow___ctor(
        TerminalSceneComponent_StateTutorial1_SpotArrow_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial1_SpotArrow__begin(
        TerminalSceneComponent_StateTutorial1_SpotArrow_o *this,
        TerminalSceneComponent_o *that,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x20
  ScrTerminalMap_o *mTerminalMap; // x0
  __int64 v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  SrcSpotBasePrefab_o *FocusSpot; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 v34; // x1
  System_String_o *v35; // x21
  Il2CppObject *Instance; // x22
  const MethodInfo *v37; // x1
  UnityEngine_Vector2_o v38; // kr00_8
  const MethodInfo *v39; // x1
  float x; // s14
  float y; // s15
  float m_XMin; // s10
  float m_YMin; // s11
  float m_Width; // s12
  float m_Height; // s13
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  System_Action_o *v49; // x23
  struct ScrTerminalMap_o *v50; // x21
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  System_Action_o *v54; // x19
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  UnityEngine_Vector2_o v61; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v62; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v63; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v64; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4B182DB & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, that, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    sub_1BCA7E0(&Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__0__, v10, v11);
    sub_1BCA7E0(&Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__1__, v12, v13);
    sub_1BCA7E0(&TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0_TypeInfo, v14, v15);
    sub_1BCA7E0(&StringLiteral_13674/*"TUTORIAL_MESSAGE_TERMINAL_SPOT1"*/, v16, v17);
    byte_4B182DB = 1;
  }
  v18 = sub_1BCAA2C(TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0_TypeInfo, that, method, v3);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_12;
  *(_QWORD *)(v18 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v18 + 24), (int64_t)this, v21, v22, v23, v24, v25, v26);
  this->fields.mIsGoNext = 0;
  if ( !that )
    goto LABEL_12;
  mTerminalMap = that->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_12;
  FocusSpot = ScrTerminalMap__GetFocusSpot(mTerminalMap, 0LL);
  *(_QWORD *)(v18 + 16) = FocusSpot;
  sub_1BCA784((PartyOrganizationUtility_o *)(v18 + 16), (int64_t)FocusSpot, v28, v29, v30, v31, v32, v33);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v34);
  v35 = LocalizationManager__Get((System_String_o *)StringLiteral_13674/*"TUTORIAL_MESSAGE_TERMINAL_SPOT1"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v61.fields.y = -97.0;
  v61.fields.x = -55.0;
  v38 = TerminalSceneComponent__FSSpotArrowPosLerp(that, v61, v37);
  v62.fields.y = 0.0;
  v62.fields.x = -55.0;
  v63 = TerminalSceneComponent__FSSpotArrowRectLerp(that, v62, v39);
  x = that->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.x;
  y = that->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.y;
  m_XMin = v63.fields.m_XMin;
  m_YMin = v63.fields.m_YMin;
  m_Width = v63.fields.m_Width;
  m_Height = v63.fields.m_Height;
  v49 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v46, v47, v48);
  System_Action___ctor(
    v49,
    (Il2CppObject *)v18,
    Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__0__,
    0LL);
  if ( !Instance )
    goto LABEL_12;
  v64.fields.m_XMin = m_XMin;
  v64.fields.m_YMin = m_YMin;
  v64.fields.m_Width = m_Width;
  v64.fields.m_Height = m_Height;
  CommonUI__OpenTutorialNotificationDialogArrow(
    (CommonUI_o *)Instance,
    v35,
    v38,
    v64,
    90.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    v49,
    0LL);
  mTerminalMap = that->fields.mTerminalMap;
  if ( !mTerminalMap
    || (ScrTerminalMap__SetMapCamera_TutorialFocusSpot(mTerminalMap, *(SrcSpotBasePrefab_o **)(v18 + 16), 0.5, 0LL),
        v50 = that->fields.mTerminalMap,
        v54 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v51, v52, v53),
        System_Action___ctor(
          v54,
          (Il2CppObject *)v18,
          Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__1__,
          0LL),
        !v50) )
  {
LABEL_12:
    sub_1BCAA3C(mTerminalMap, v20);
  }
  v50->fields.mSpotClickAct = v54;
  sub_1BCA784((PartyOrganizationUtility_o *)&v50->fields.mSpotClickAct, (int64_t)v54, v55, v56, v57, v58, v59, v60);
}


void __fastcall TerminalSceneComponent_StateTutorial1_SpotArrow__end(
        TerminalSceneComponent_StateTutorial1_SpotArrow_o *this,
        TerminalSceneComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall TerminalSceneComponent_StateTutorial1_SpotArrow__update(
        TerminalSceneComponent_StateTutorial1_SpotArrow_o *this,
        TerminalSceneComponent_o *that,
        const MethodInfo *method)
{
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x8

  if ( this->fields.mIsGoNext )
  {
    if ( !that
      || (mTerminalList = that->fields.mTerminalList) == 0LL
      || (mQuestBoardListViewManager = mTerminalList->fields.mQuestBoardListViewManager) == 0LL )
    {
      sub_1BCAA3C(that, that);
    }
    if ( mQuestBoardListViewManager->fields.initMode == 1 )
      TerminalSceneComponent__SetState(that, 2, method);
  }
}


void __fastcall TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0___ctor(
        TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0___begin_b__0(
        TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  SrcSpotBasePrefab_o *focus_spot; // x0

  focus_spot = this->fields.focus_spot;
  if ( !focus_spot )
    sub_1BCAA3C(0LL, method);
  SrcSpotBasePrefab__SetBtnColliderEnable(focus_spot, 1, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0___begin_b__1(
        TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Action_o *_9__2; // x22
  CommonUI_o *v13; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B182DC & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__2__, v6, v7);
    byte_4B182DC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v13 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v9, v10, v11);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v14, v15, v16, v17, v18, v19);
  }
  if ( !v13 )
    sub_1BCAA3C(Instance, v9);
  CommonUI__CloseTutorialNotificationDialogArrow_30791892(v13, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0___begin_b__2(
        TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_StateTutorial1_SpotArrow_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(this, method);
  _4__this->fields.mIsGoNext = 1;
}


void __fastcall TerminalSceneComponent_StateTutorial2_QuestArrow___ctor(
        TerminalSceneComponent_StateTutorial2_QuestArrow_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalSceneComponent_StateTutorial2_QuestArrow__begin(
        TerminalSceneComponent_StateTutorial2_QuestArrow_o *this,
        TerminalSceneComponent_o *that,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x19
  TerminalSceneComponent_o *mFG; // x0
  const MethodInfo *v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  TerminalSceneComponent_o **v28; // x20
  QuestBoardListViewObject_o *FocusQuest; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 v36; // x1
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x8
  struct UIScrollView_o *scrollView; // x8
  struct UIProgressBar_o *verticalScrollBar; // x23
  System_String_o *v41; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v43; // x0
  CommonUI_o *v44; // x22
  UnityEngine_Vector2_o TUTORIAL_QUEST_ARROW_POS_FS; // kr00_8
  __int64 v46; // x2
  __int64 v47; // x3
  float v48; // s0
  float v49; // s1
  float v50; // s2
  float v51; // s3
  TerminalSceneComponent_o *v52; // x8
  float x; // s14
  float y; // s15
  float v55; // s10
  float v56; // s11
  float v57; // s12
  float v58; // s13
  System_Action_o *v59; // x23
  __int64 v60; // x2
  __int64 v61; // x3
  struct ScrTerminalListTop_o *v62; // x21
  System_Action_o *v63; // x20
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  UnityEngine_Rect_o v70; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4B182E2 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, that, method);
    sub_1BCA7E0(&Method_GameObjectExtensions_RemoveComponent_Collider___, v5, v6);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10);
    sub_1BCA7E0(&Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__0__, v11, v12);
    sub_1BCA7E0(&Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__1__, v13, v14);
    sub_1BCA7E0(&TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_13672/*"TUTORIAL_MESSAGE_TERMINAL_QUEST2"*/, v17, v18);
    byte_4B182E2 = 1;
  }
  v19 = sub_1BCAA2C(TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_TypeInfo, that, method, v3);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    goto LABEL_22;
  *(_QWORD *)(v19 + 16) = that;
  v28 = (TerminalSceneComponent_o **)(v19 + 16);
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 16), (int64_t)that, v22, v23, v24, v25, v26, v27);
  if ( !*(_QWORD *)(v19 + 16) )
    goto LABEL_22;
  mFG = *(TerminalSceneComponent_o **)(*(_QWORD *)(v19 + 16) + 256LL);
  if ( !mFG )
    goto LABEL_22;
  FocusQuest = ScrTerminalListTop__GetFocusQuest((ScrTerminalListTop_o *)mFG, 0LL);
  *(_QWORD *)(v19 + 24) = FocusQuest;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 24), (int64_t)FocusQuest, v30, v31, v32, v33, v34, v35);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v36);
  mFG = (TerminalSceneComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13672/*"TUTORIAL_MESSAGE_TERMINAL_QUEST2"*/, 0LL);
  if ( !*v28 )
    goto LABEL_22;
  mTerminalList = (*v28)->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_22;
  mQuestBoardListViewManager = mTerminalList->fields.mQuestBoardListViewManager;
  if ( !mQuestBoardListViewManager )
    goto LABEL_22;
  scrollView = mQuestBoardListViewManager->fields.scrollView;
  if ( !scrollView )
    goto LABEL_22;
  verticalScrollBar = scrollView->fields.verticalScrollBar;
  if ( !verticalScrollBar )
    goto LABEL_22;
  v41 = (System_String_o *)mFG;
  mFG = (TerminalSceneComponent_o *)verticalScrollBar->fields.mFG;
  if ( !mFG )
    goto LABEL_22;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mFG, 0LL);
  GameObjectExtensions__RemoveComponent_object_(
    gameObject,
    (const MethodInfo_2F64074 *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mFG = (TerminalSceneComponent_o *)verticalScrollBar->fields.mBG;
  if ( !mFG )
    goto LABEL_22;
  v43 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mFG, 0LL);
  GameObjectExtensions__RemoveComponent_object_(
    v43,
    (const MethodInfo_2F64074 *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mFG = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*v28 )
    goto LABEL_22;
  v44 = (CommonUI_o *)mFG;
  TUTORIAL_QUEST_ARROW_POS_FS = TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_POS_FS(*v28, v21);
  mFG = *v28;
  if ( !*v28 )
    goto LABEL_22;
  *(UnityEngine_Rect_o *)&v48 = TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_RECT_FS(mFG, v21);
  v52 = *v28;
  if ( !*v28 )
    goto LABEL_22;
  x = v52->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.x;
  y = v52->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.y;
  v55 = v48;
  v56 = v49;
  v57 = v50;
  v58 = v51;
  v59 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v21, v46, v47);
  System_Action___ctor(
    v59,
    (Il2CppObject *)v19,
    Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__0__,
    0LL);
  if ( !v44 )
    goto LABEL_22;
  v70.fields.m_XMin = v55;
  v70.fields.m_YMin = v56;
  v70.fields.m_Width = v57;
  v70.fields.m_Height = v58;
  CommonUI__OpenTutorialNotificationDialogArrow(
    v44,
    v41,
    TUTORIAL_QUEST_ARROW_POS_FS,
    v70,
    90.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    v59,
    0LL);
  if ( !*v28
    || (v62 = (*v28)->fields.mTerminalList,
        v63 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v21, v60, v61),
        System_Action___ctor(
          v63,
          (Il2CppObject *)v19,
          Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__1__,
          0LL),
        !v62) )
  {
LABEL_22:
    sub_1BCAA3C(mFG, v21);
  }
  v62->fields.mQuestClickAct = v63;
  sub_1BCA784((PartyOrganizationUtility_o *)&v62->fields.mQuestClickAct, (int64_t)v63, v64, v65, v66, v67, v68, v69);
}


void __fastcall TerminalSceneComponent_StateTutorial2_QuestArrow__end(
        TerminalSceneComponent_StateTutorial2_QuestArrow_o *this,
        TerminalSceneComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall TerminalSceneComponent_StateTutorial2_QuestArrow__update(
        TerminalSceneComponent_StateTutorial2_QuestArrow_o *this,
        TerminalSceneComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0___ctor(
        TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0___begin_b__0(
        TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *v3; // x19
  struct TerminalSceneComponent_o *that; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x8

  v3 = this;
  if ( (byte_4B182E3 & 1) == 0 )
  {
    this = (TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *)sub_1BCA7E0(
                                                                                        &Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___,
                                                                                        method,
                                                                                        v2);
    byte_4B182E3 = 1;
  }
  that = v3->fields.that;
  if ( !that )
    goto LABEL_12;
  mTerminalList = that->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_12;
  mQuestBoardListViewManager = mTerminalList->fields.mQuestBoardListViewManager;
  if ( !mQuestBoardListViewManager
    || (this = (TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *)mQuestBoardListViewManager->fields.scrollView) == 0LL
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL),
        (this = (TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *)v3->fields.focus_quest) == 0LL)
    || (((void (__fastcall *)(TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *, __int64, void *))this->klass[1]._1.parent)(
          this,
          1LL,
          this->klass[1]._1.generic_class),
        (this = (TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *)v3->fields.focus_quest) == 0LL)
    || (this = (TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *)UnityEngine_Component__get_gameObject(
                                                                                            (UnityEngine_Component_o *)this,
                                                                                            0LL)) == 0LL
    || (this = (TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                                            (UnityEngine_GameObject_o *)this,
                                                                                            (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___)) == 0LL )
  {
LABEL_12:
    sub_1BCAA3C(this, method);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0___begin_b__1(
        TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Action_o *_9__2; // x22
  CommonUI_o *v13; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B182E4 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__2__, v6, v7);
    byte_4B182E4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v13 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v9, v10, v11);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v14, v15, v16, v17, v18, v19);
  }
  if ( !v13 )
    sub_1BCAA3C(Instance, v9);
  CommonUI__CloseTutorialNotificationDialogArrow_30791892(v13, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1BCAA3C(0LL, method);
  TerminalSceneComponent__SetState(that, 0, v2);
}


void __fastcall TerminalSceneComponent_StateTutorial2_SpotArrow___ctor(
        TerminalSceneComponent_StateTutorial2_SpotArrow_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial2_SpotArrow__begin(
        TerminalSceneComponent_StateTutorial2_SpotArrow_o *this,
        TerminalSceneComponent_o *that,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x20
  ScrTerminalMap_o *mTerminalMap; // x0
  __int64 v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  SrcSpotBasePrefab_o *FocusSpot; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 v34; // x1
  System_String_o *v35; // x21
  Il2CppObject *Instance; // x22
  const MethodInfo *v37; // x1
  UnityEngine_Vector2_o v38; // kr00_8
  const MethodInfo *v39; // x1
  float x; // s14
  float y; // s15
  float m_XMin; // s10
  float m_YMin; // s11
  float m_Width; // s12
  float m_Height; // s13
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  System_Action_o *v49; // x23
  struct ScrTerminalMap_o *v50; // x21
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  System_Action_o *v54; // x19
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  UnityEngine_Vector2_o v61; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v62; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v63; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v64; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4B182E0 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, that, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    sub_1BCA7E0(&Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__0__, v10, v11);
    sub_1BCA7E0(&Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__1__, v12, v13);
    sub_1BCA7E0(&TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0_TypeInfo, v14, v15);
    sub_1BCA7E0(&StringLiteral_13675/*"TUTORIAL_MESSAGE_TERMINAL_SPOT2"*/, v16, v17);
    byte_4B182E0 = 1;
  }
  v18 = sub_1BCAA2C(TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0_TypeInfo, that, method, v3);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_12;
  *(_QWORD *)(v18 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v18 + 24), (int64_t)this, v21, v22, v23, v24, v25, v26);
  this->fields.mIsGoNext = 0;
  if ( !that )
    goto LABEL_12;
  mTerminalMap = that->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_12;
  FocusSpot = ScrTerminalMap__GetFocusSpot(mTerminalMap, 0LL);
  *(_QWORD *)(v18 + 16) = FocusSpot;
  sub_1BCA784((PartyOrganizationUtility_o *)(v18 + 16), (int64_t)FocusSpot, v28, v29, v30, v31, v32, v33);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v34);
  v35 = LocalizationManager__Get((System_String_o *)StringLiteral_13675/*"TUTORIAL_MESSAGE_TERMINAL_SPOT2"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v61.fields.x = 0.0;
  v61.fields.y = -113.0;
  v38 = TerminalSceneComponent__FSSpotArrowPosLerp(that, v61, v37);
  v62.fields.x = 0.0;
  v62.fields.y = 0.0;
  v63 = TerminalSceneComponent__FSSpotArrowRectLerp(that, v62, v39);
  x = that->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.x;
  y = that->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.y;
  m_XMin = v63.fields.m_XMin;
  m_YMin = v63.fields.m_YMin;
  m_Width = v63.fields.m_Width;
  m_Height = v63.fields.m_Height;
  v49 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v46, v47, v48);
  System_Action___ctor(
    v49,
    (Il2CppObject *)v18,
    Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__0__,
    0LL);
  if ( !Instance )
    goto LABEL_12;
  v64.fields.m_XMin = m_XMin;
  v64.fields.m_YMin = m_YMin;
  v64.fields.m_Width = m_Width;
  v64.fields.m_Height = m_Height;
  CommonUI__OpenTutorialNotificationDialogArrow(
    (CommonUI_o *)Instance,
    v35,
    v38,
    v64,
    90.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    v49,
    0LL);
  mTerminalMap = that->fields.mTerminalMap;
  if ( !mTerminalMap
    || (ScrTerminalMap__SetMapCamera_TutorialFocusSpot(mTerminalMap, *(SrcSpotBasePrefab_o **)(v18 + 16), 0.5, 0LL),
        v50 = that->fields.mTerminalMap,
        v54 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v51, v52, v53),
        System_Action___ctor(
          v54,
          (Il2CppObject *)v18,
          Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__1__,
          0LL),
        !v50) )
  {
LABEL_12:
    sub_1BCAA3C(mTerminalMap, v20);
  }
  v50->fields.mSpotClickAct = v54;
  sub_1BCA784((PartyOrganizationUtility_o *)&v50->fields.mSpotClickAct, (int64_t)v54, v55, v56, v57, v58, v59, v60);
}


void __fastcall TerminalSceneComponent_StateTutorial2_SpotArrow__end(
        TerminalSceneComponent_StateTutorial2_SpotArrow_o *this,
        TerminalSceneComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall TerminalSceneComponent_StateTutorial2_SpotArrow__update(
        TerminalSceneComponent_StateTutorial2_SpotArrow_o *this,
        TerminalSceneComponent_o *that,
        const MethodInfo *method)
{
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x8

  if ( this->fields.mIsGoNext )
  {
    if ( !that
      || (mTerminalList = that->fields.mTerminalList) == 0LL
      || (mQuestBoardListViewManager = mTerminalList->fields.mQuestBoardListViewManager) == 0LL )
    {
      sub_1BCAA3C(that, that);
    }
    if ( mQuestBoardListViewManager->fields.initMode == 1 )
      TerminalSceneComponent__SetState(that, 4, method);
  }
}


void __fastcall TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0___ctor(
        TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0___begin_b__0(
        TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  SrcSpotBasePrefab_o *focus_spot; // x0

  focus_spot = this->fields.focus_spot;
  if ( !focus_spot )
    sub_1BCAA3C(0LL, method);
  SrcSpotBasePrefab__SetBtnColliderEnable(focus_spot, 1, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0___begin_b__1(
        TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Action_o *_9__2; // x22
  CommonUI_o *v13; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B182E1 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__2__, v6, v7);
    byte_4B182E1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v13 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v9, v10, v11);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v14, v15, v16, v17, v18, v19);
  }
  if ( !v13 )
    sub_1BCAA3C(Instance, v9);
  CommonUI__CloseTutorialNotificationDialogArrow_30791892(v13, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0___begin_b__2(
        TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_StateTutorial2_SpotArrow_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(this, method);
  _4__this->fields.mIsGoNext = 1;
}


void __fastcall TerminalSceneComponent_StateTutorial3_GachaArrow___ctor(
        TerminalSceneComponent_StateTutorial3_GachaArrow_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial3_GachaArrow__begin(
        TerminalSceneComponent_StateTutorial3_GachaArrow_o *this,
        TerminalSceneComponent_o *that,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x19
  void *Instance; // x0
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 *v28; // x21
  __int64 v29; // x1
  System_String_o *v30; // x20
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x8
  CommonUI_o *v34; // x21
  float v35; // s8
  float v36; // s13
  float v37; // s9
  float v38; // s14
  float v39; // s10
  unsigned int v40; // s11
  unsigned int v41; // s12
  System_Action_o *v42; // x22
  Il2CppObject *v43; // x23
  struct TerminalSceneComponent_StateTutorial3_GachaArrow___c_StaticFields *static_fields; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  System_Action_o *v54; // x20
  UnityEngine_Vector2_o v55; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v56; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4B182E8 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, that, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8);
    sub_1BCA7E0(&Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__begin_b__0_0__, v9, v10);
    sub_1BCA7E0(&Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0__begin_b__1__, v11, v12);
    sub_1BCA7E0(&TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0_TypeInfo, v13, v14);
    sub_1BCA7E0(&TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_13669/*"TUTORIAL_MESSAGE_TERMINAL_GACHA"*/, v17, v18);
    byte_4B182E8 = 1;
  }
  v19 = sub_1BCAA2C(TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0_TypeInfo, that, method, v3);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    goto LABEL_15;
  *(_QWORD *)(v19 + 16) = that;
  v28 = (__int64 *)(v19 + 16);
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 16), (int64_t)that, v22, v23, v24, v25, v26, v27);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v29);
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_13669/*"TUTORIAL_MESSAGE_TERMINAL_GACHA"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v33 = *v28;
  if ( !*v28 )
    goto LABEL_15;
  v34 = (CommonUI_o *)Instance;
  v35 = *(float *)(v33 + 160);
  v36 = *(float *)(v33 + 164);
  v37 = *(float *)(v33 + 168);
  v38 = *(float *)(v33 + 172);
  Instance = TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo;
  v39 = *(float *)(v33 + 176);
  v40 = *(_DWORD *)(v33 + 152);
  v41 = *(_DWORD *)(v33 + 156);
  if ( !TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo, v21);
    Instance = TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo;
  }
  v42 = *(System_Action_o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v42 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v21);
      Instance = TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo;
    }
    v43 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v42 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v21, v31, v32);
    System_Action___ctor(v42, v43, Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__begin_b__0_0__, 0LL);
    static_fields = TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = v42;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__0_0, (int64_t)v42, v45, v46, v47, v48, v49, v50);
  }
  if ( !v34 )
LABEL_15:
    sub_1BCAA3C(Instance, v21);
  v56.fields.m_YMin = v38 + 53.0;
  v55.fields.y = v36 + 33.0;
  v56.fields.m_Height = 135.0;
  v55.fields.x = v35;
  v56.fields.m_XMin = v37;
  v56.fields.m_Width = v39;
  CommonUI__OpenTutorialNotificationDialogArrow(
    v34,
    v30,
    v55,
    v56,
    0.0,
    (UnityEngine_Vector2_o)__PAIR64__(v41, v40),
    -1,
    v42,
    0LL);
  v54 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v51, v52, v53);
  System_Action___ctor(
    v54,
    (Il2CppObject *)v19,
    Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0__begin_b__1__,
    0LL);
  MainMenuBar__SetDispBtnAct(2, v54, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial3_GachaArrow__end(
        TerminalSceneComponent_StateTutorial3_GachaArrow_o *this,
        TerminalSceneComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall TerminalSceneComponent_StateTutorial3_GachaArrow__update(
        TerminalSceneComponent_StateTutorial3_GachaArrow_o *this,
        TerminalSceneComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall TerminalSceneComponent_StateTutorial3_GachaArrow___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B182E9 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo, v1, v2);
    byte_4B182E9 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo->static_fields->__9 = (struct TerminalSceneComponent_StateTutorial3_GachaArrow___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall TerminalSceneComponent_StateTutorial3_GachaArrow___c___ctor(
        TerminalSceneComponent_StateTutorial3_GachaArrow___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial3_GachaArrow___c___begin_b__0_0(
        TerminalSceneComponent_StateTutorial3_GachaArrow___c_o *this,
        const MethodInfo *method)
{
  MainMenuBar__SetDispBtnColliderEnable(1, 2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0___ctor(
        TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0___begin_b__1(
        TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Action_o *_9__2; // x22
  CommonUI_o *v16; // x20
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  if ( (byte_4B182EA & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0__begin_b__2__, v8, v9);
    byte_4B182EA = 1;
  }
  MainMenuBar__SetDispBtnColliderEnable(0, 8, 0LL);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v10);
  TutorialFlag__SetProgress(1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v16 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v17, v18, v19, v20, v21, v22);
  }
  if ( !v16 )
    sub_1BCAA3C(Instance, v12);
  CommonUI__CloseTutorialNotificationDialogArrow_30791892(v16, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1BCAA3C(0LL, method);
  TerminalSceneComponent__SetState(that, 0, v2);
}


void __fastcall TerminalSceneComponent_StateTutorial3_MenuArrow___ctor(
        TerminalSceneComponent_StateTutorial3_MenuArrow_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial3_MenuArrow__begin(
        TerminalSceneComponent_StateTutorial3_MenuArrow_o *this,
        TerminalSceneComponent_o *that,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x19
  void *Instance; // x0
  const MethodInfo *v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  TerminalSceneComponent_o **v28; // x22
  __int64 v29; // x1
  System_String_o *v30; // x20
  CommonUI_o *v31; // x21
  UnityEngine_Vector2_o TUTORIAL_MENU_ARROW_POS_FS; // kr00_8
  TerminalSceneComponent_o *v33; // x8
  float m_XMin; // s12
  float m_YMin; // s14
  float m_Height; // s8
  float m_Width; // s10
  __int64 v38; // x2
  __int64 v39; // x3
  float v40; // s0
  TerminalSceneComponent_o *v41; // x8
  float x; // s13
  float y; // s15
  float v44; // s11
  System_Action_o *v45; // x22
  Il2CppObject *v46; // x23
  struct TerminalSceneComponent_StateTutorial3_MenuArrow___c_StaticFields *static_fields; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  System_Action_o *v57; // x20
  UnityEngine_Rect_o v58; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4B182E5 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, that, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8);
    sub_1BCA7E0(&Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__begin_b__0_0__, v9, v10);
    sub_1BCA7E0(&Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0__begin_b__1__, v11, v12);
    sub_1BCA7E0(&TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0_TypeInfo, v13, v14);
    sub_1BCA7E0(&TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_13670/*"TUTORIAL_MESSAGE_TERMINAL_MENU"*/, v17, v18);
    byte_4B182E5 = 1;
  }
  v19 = sub_1BCAA2C(TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0_TypeInfo, that, method, v3);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    goto LABEL_17;
  *(_QWORD *)(v19 + 16) = that;
  v28 = (TerminalSceneComponent_o **)(v19 + 16);
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 16), (int64_t)that, v22, v23, v24, v25, v26, v27);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v29);
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_13670/*"TUTORIAL_MESSAGE_TERMINAL_MENU"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*v28 )
    goto LABEL_17;
  v31 = (CommonUI_o *)Instance;
  TUTORIAL_MENU_ARROW_POS_FS = TerminalSceneComponent__get_TUTORIAL_MENU_ARROW_POS_FS(*v28, v21);
  v33 = *v28;
  if ( !*v28 )
    goto LABEL_17;
  m_XMin = v33->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_XMin;
  m_YMin = v33->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_YMin;
  m_Width = v33->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Width;
  m_Height = v33->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Height;
  v40 = TerminalSceneComponent__FSMenuOffsetX((TerminalSceneComponent_o *)Instance, v21);
  v41 = *v28;
  if ( !*v28 )
    goto LABEL_17;
  x = v41->fields.TUTORIAL_MENU_MESSAGE_POS.fields.x;
  y = v41->fields.TUTORIAL_MENU_MESSAGE_POS.fields.y;
  v44 = v40;
  Instance = TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo;
  if ( !TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo, v21);
    Instance = TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo;
  }
  v45 = *(System_Action_o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v45 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v21);
      Instance = TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo;
    }
    v46 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v45 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v21, v38, v39);
    System_Action___ctor(v45, v46, Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__begin_b__0_0__, 0LL);
    static_fields = TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = v45;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__0_0, (int64_t)v45, v48, v49, v50, v51, v52, v53);
  }
  if ( !v31 )
LABEL_17:
    sub_1BCAA3C(Instance, v21);
  v58.fields.m_Height = m_Height + 33.0;
  v58.fields.m_YMin = m_YMin + 33.0;
  v58.fields.m_XMin = m_XMin + v44;
  v58.fields.m_Width = m_Width;
  CommonUI__OpenTutorialNotificationDialogArrow(
    v31,
    v30,
    TUTORIAL_MENU_ARROW_POS_FS,
    v58,
    0.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    v45,
    0LL);
  v57 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v54, v55, v56);
  System_Action___ctor(
    v57,
    (Il2CppObject *)v19,
    Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0__begin_b__1__,
    0LL);
  MainMenuBar__SetMenuBtnAct(v57, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial3_MenuArrow__end(
        TerminalSceneComponent_StateTutorial3_MenuArrow_o *this,
        TerminalSceneComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall TerminalSceneComponent_StateTutorial3_MenuArrow__update(
        TerminalSceneComponent_StateTutorial3_MenuArrow_o *this,
        TerminalSceneComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall TerminalSceneComponent_StateTutorial3_MenuArrow___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B182E6 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo, v1, v2);
    byte_4B182E6 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo->static_fields->__9 = (struct TerminalSceneComponent_StateTutorial3_MenuArrow___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall TerminalSceneComponent_StateTutorial3_MenuArrow___c___ctor(
        TerminalSceneComponent_StateTutorial3_MenuArrow___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial3_MenuArrow___c___begin_b__0_0(
        TerminalSceneComponent_StateTutorial3_MenuArrow___c_o *this,
        const MethodInfo *method)
{
  MainMenuBar__SetMenuBtnColliderEnable(1, 0, 0LL);
  MainMenuBar__SetDispBtnColliderEnable(0, 8, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0___ctor(
        TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0___begin_b__1(
        TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Action_o *_9__2; // x22
  CommonUI_o *v13; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B182E7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0__begin_b__2__, v6, v7);
    byte_4B182E7 = 1;
  }
  MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v13 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v9, v10, v11);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v14, v15, v16, v17, v18, v19);
  }
  if ( !v13 )
    sub_1BCAA3C(Instance, v9);
  CommonUI__CloseTutorialNotificationDialogArrow_30791892(v13, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1BCAA3C(0LL, method);
  TerminalSceneComponent__SetState(that, 6, v2);
}


void __fastcall TerminalSceneComponent_StateTutorial4_QuestArrow___ctor(
        TerminalSceneComponent_StateTutorial4_QuestArrow_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalSceneComponent_StateTutorial4_QuestArrow__begin(
        TerminalSceneComponent_StateTutorial4_QuestArrow_o *this,
        TerminalSceneComponent_o *that,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x19
  TerminalSceneComponent_o *mFG; // x0
  const MethodInfo *v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  TerminalSceneComponent_o **v28; // x20
  QuestBoardListViewObject_o *FocusQuest; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 v36; // x1
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x8
  struct UIScrollView_o *scrollView; // x8
  struct UIProgressBar_o *verticalScrollBar; // x23
  System_String_o *v41; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v43; // x0
  CommonUI_o *v44; // x22
  UnityEngine_Vector2_o TUTORIAL_QUEST_ARROW_POS_FS; // kr00_8
  __int64 v46; // x2
  __int64 v47; // x3
  float v48; // s0
  float v49; // s1
  float v50; // s2
  float v51; // s3
  TerminalSceneComponent_o *v52; // x8
  float x; // s14
  float y; // s15
  float v55; // s10
  float v56; // s11
  float v57; // s12
  float v58; // s13
  System_Action_o *v59; // x23
  __int64 v60; // x2
  __int64 v61; // x3
  struct ScrTerminalListTop_o *v62; // x21
  System_Action_o *v63; // x20
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  UnityEngine_Rect_o v70; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4B182ED & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, that, method);
    sub_1BCA7E0(&Method_GameObjectExtensions_RemoveComponent_Collider___, v5, v6);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10);
    sub_1BCA7E0(&Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__0__, v11, v12);
    sub_1BCA7E0(&Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__1__, v13, v14);
    sub_1BCA7E0(&TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_13673/*"TUTORIAL_MESSAGE_TERMINAL_QUEST3"*/, v17, v18);
    byte_4B182ED = 1;
  }
  v19 = sub_1BCAA2C(TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_TypeInfo, that, method, v3);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    goto LABEL_22;
  *(_QWORD *)(v19 + 16) = that;
  v28 = (TerminalSceneComponent_o **)(v19 + 16);
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 16), (int64_t)that, v22, v23, v24, v25, v26, v27);
  if ( !*(_QWORD *)(v19 + 16) )
    goto LABEL_22;
  mFG = *(TerminalSceneComponent_o **)(*(_QWORD *)(v19 + 16) + 256LL);
  if ( !mFG )
    goto LABEL_22;
  FocusQuest = ScrTerminalListTop__GetFocusQuest((ScrTerminalListTop_o *)mFG, 0LL);
  *(_QWORD *)(v19 + 24) = FocusQuest;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 24), (int64_t)FocusQuest, v30, v31, v32, v33, v34, v35);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v36);
  mFG = (TerminalSceneComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13673/*"TUTORIAL_MESSAGE_TERMINAL_QUEST3"*/, 0LL);
  if ( !*v28 )
    goto LABEL_22;
  mTerminalList = (*v28)->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_22;
  mQuestBoardListViewManager = mTerminalList->fields.mQuestBoardListViewManager;
  if ( !mQuestBoardListViewManager )
    goto LABEL_22;
  scrollView = mQuestBoardListViewManager->fields.scrollView;
  if ( !scrollView )
    goto LABEL_22;
  verticalScrollBar = scrollView->fields.verticalScrollBar;
  if ( !verticalScrollBar )
    goto LABEL_22;
  v41 = (System_String_o *)mFG;
  mFG = (TerminalSceneComponent_o *)verticalScrollBar->fields.mFG;
  if ( !mFG )
    goto LABEL_22;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mFG, 0LL);
  GameObjectExtensions__RemoveComponent_object_(
    gameObject,
    (const MethodInfo_2F64074 *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mFG = (TerminalSceneComponent_o *)verticalScrollBar->fields.mBG;
  if ( !mFG )
    goto LABEL_22;
  v43 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mFG, 0LL);
  GameObjectExtensions__RemoveComponent_object_(
    v43,
    (const MethodInfo_2F64074 *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mFG = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*v28 )
    goto LABEL_22;
  v44 = (CommonUI_o *)mFG;
  TUTORIAL_QUEST_ARROW_POS_FS = TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_POS_FS(*v28, v21);
  mFG = *v28;
  if ( !*v28 )
    goto LABEL_22;
  *(UnityEngine_Rect_o *)&v48 = TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_RECT_FS(mFG, v21);
  v52 = *v28;
  if ( !*v28 )
    goto LABEL_22;
  x = v52->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.x;
  y = v52->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.y;
  v55 = v48;
  v56 = v49;
  v57 = v50;
  v58 = v51;
  v59 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v21, v46, v47);
  System_Action___ctor(
    v59,
    (Il2CppObject *)v19,
    Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__0__,
    0LL);
  if ( !v44 )
    goto LABEL_22;
  v70.fields.m_XMin = v55;
  v70.fields.m_YMin = v56;
  v70.fields.m_Width = v57;
  v70.fields.m_Height = v58;
  CommonUI__OpenTutorialNotificationDialogArrow(
    v44,
    v41,
    TUTORIAL_QUEST_ARROW_POS_FS,
    v70,
    90.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    v59,
    0LL);
  if ( !*v28
    || (v62 = (*v28)->fields.mTerminalList,
        v63 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v21, v60, v61),
        System_Action___ctor(
          v63,
          (Il2CppObject *)v19,
          Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__1__,
          0LL),
        !v62) )
  {
LABEL_22:
    sub_1BCAA3C(mFG, v21);
  }
  v62->fields.mQuestClickAct = v63;
  sub_1BCA784((PartyOrganizationUtility_o *)&v62->fields.mQuestClickAct, (int64_t)v63, v64, v65, v66, v67, v68, v69);
}


void __fastcall TerminalSceneComponent_StateTutorial4_QuestArrow__end(
        TerminalSceneComponent_StateTutorial4_QuestArrow_o *this,
        TerminalSceneComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall TerminalSceneComponent_StateTutorial4_QuestArrow__update(
        TerminalSceneComponent_StateTutorial4_QuestArrow_o *this,
        TerminalSceneComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0___ctor(
        TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0___begin_b__0(
        TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *v3; // x19
  struct TerminalSceneComponent_o *that; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x8

  v3 = this;
  if ( (byte_4B182EE & 1) == 0 )
  {
    this = (TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *)sub_1BCA7E0(
                                                                                        &Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___,
                                                                                        method,
                                                                                        v2);
    byte_4B182EE = 1;
  }
  that = v3->fields.that;
  if ( !that )
    goto LABEL_12;
  mTerminalList = that->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_12;
  mQuestBoardListViewManager = mTerminalList->fields.mQuestBoardListViewManager;
  if ( !mQuestBoardListViewManager
    || (this = (TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *)mQuestBoardListViewManager->fields.scrollView) == 0LL
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL),
        (this = (TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *)v3->fields.focus_quest) == 0LL)
    || (((void (__fastcall *)(TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *, __int64, void *))this->klass[1]._1.parent)(
          this,
          1LL,
          this->klass[1]._1.generic_class),
        (this = (TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *)v3->fields.focus_quest) == 0LL)
    || (this = (TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *)UnityEngine_Component__get_gameObject(
                                                                                            (UnityEngine_Component_o *)this,
                                                                                            0LL)) == 0LL
    || (this = (TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                                            (UnityEngine_GameObject_o *)this,
                                                                                            (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___)) == 0LL )
  {
LABEL_12:
    sub_1BCAA3C(this, method);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0___begin_b__1(
        TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Action_o *_9__2; // x22
  CommonUI_o *v13; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B182EF & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__2__, v6, v7);
    byte_4B182EF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v13 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v9, v10, v11);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v14, v15, v16, v17, v18, v19);
  }
  if ( !v13 )
    sub_1BCAA3C(Instance, v9);
  CommonUI__CloseTutorialNotificationDialogArrow_30791892(v13, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1BCAA3C(0LL, method);
  TerminalSceneComponent__SetState(that, 0, v2);
}


void __fastcall TerminalSceneComponent_StateTutorial4_SpotArrow___ctor(
        TerminalSceneComponent_StateTutorial4_SpotArrow_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial4_SpotArrow__begin(
        TerminalSceneComponent_StateTutorial4_SpotArrow_o *this,
        TerminalSceneComponent_o *that,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x20
  ScrTerminalMap_o *mTerminalMap; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  SrcSpotBasePrefab_o *FocusSpot; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  Il2CppObject *Instance; // x21
  const MethodInfo *v31; // x1
  UnityEngine_Vector2_o v32; // kr00_8
  const MethodInfo *v33; // x1
  float m_XMin; // s10
  float m_YMin; // s11
  float m_Width; // s12
  float m_Height; // s13
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  System_Action_o *v41; // x22
  struct ScrTerminalMap_o *v42; // x21
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  System_Action_o *v46; // x19
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  UnityEngine_Vector2_o v53; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v54; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v55; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v56; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4B182EB & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, that, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__0__, v8, v9);
    sub_1BCA7E0(&Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__1__, v10, v11);
    sub_1BCA7E0(&TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0_TypeInfo, v12, v13);
    byte_4B182EB = 1;
  }
  v14 = sub_1BCAA2C(TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0_TypeInfo, that, method, v3);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_10;
  *(_QWORD *)(v14 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 24), (int64_t)this, v17, v18, v19, v20, v21, v22);
  this->fields.mIsGoNext = 0;
  if ( !that )
    goto LABEL_10;
  mTerminalMap = that->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_10;
  FocusSpot = ScrTerminalMap__GetFocusSpot(mTerminalMap, 0LL);
  *(_QWORD *)(v14 + 16) = FocusSpot;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)FocusSpot, v24, v25, v26, v27, v28, v29);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v53.fields.x = 0.0;
  v53.fields.y = -113.0;
  v32 = TerminalSceneComponent__FSSpotArrowPosLerp(that, v53, v31);
  v54.fields.x = 0.0;
  v54.fields.y = 0.0;
  v55 = TerminalSceneComponent__FSSpotArrowRectLerp(that, v54, v33);
  m_XMin = v55.fields.m_XMin;
  m_YMin = v55.fields.m_YMin;
  m_Width = v55.fields.m_Width;
  m_Height = v55.fields.m_Height;
  v41 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v38, v39, v40);
  System_Action___ctor(
    v41,
    (Il2CppObject *)v14,
    Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__0__,
    0LL);
  if ( !Instance )
    goto LABEL_10;
  v56.fields.m_XMin = m_XMin;
  v56.fields.m_YMin = m_YMin;
  v56.fields.m_Width = m_Width;
  v56.fields.m_Height = m_Height;
  CommonUI__OpenTutorialArrowMark((CommonUI_o *)Instance, v32, 90.0, v56, v41, 0LL);
  mTerminalMap = that->fields.mTerminalMap;
  if ( !mTerminalMap
    || (ScrTerminalMap__SetMapCamera_TutorialFocusSpot(mTerminalMap, *(SrcSpotBasePrefab_o **)(v14 + 16), 0.5, 0LL),
        v42 = that->fields.mTerminalMap,
        v46 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v43, v44, v45),
        System_Action___ctor(
          v46,
          (Il2CppObject *)v14,
          Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__1__,
          0LL),
        !v42) )
  {
LABEL_10:
    sub_1BCAA3C(mTerminalMap, v16);
  }
  v42->fields.mSpotClickAct = v46;
  sub_1BCA784((PartyOrganizationUtility_o *)&v42->fields.mSpotClickAct, (int64_t)v46, v47, v48, v49, v50, v51, v52);
}


void __fastcall TerminalSceneComponent_StateTutorial4_SpotArrow__end(
        TerminalSceneComponent_StateTutorial4_SpotArrow_o *this,
        TerminalSceneComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall TerminalSceneComponent_StateTutorial4_SpotArrow__update(
        TerminalSceneComponent_StateTutorial4_SpotArrow_o *this,
        TerminalSceneComponent_o *that,
        const MethodInfo *method)
{
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x8

  if ( this->fields.mIsGoNext )
  {
    if ( !that
      || (mTerminalList = that->fields.mTerminalList) == 0LL
      || (mQuestBoardListViewManager = mTerminalList->fields.mQuestBoardListViewManager) == 0LL )
    {
      sub_1BCAA3C(that, that);
    }
    if ( mQuestBoardListViewManager->fields.initMode == 1 )
      TerminalSceneComponent__SetState(that, 8, method);
  }
}


void __fastcall TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0___ctor(
        TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0___begin_b__0(
        TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  SrcSpotBasePrefab_o *focus_spot; // x0

  focus_spot = this->fields.focus_spot;
  if ( !focus_spot )
    sub_1BCAA3C(0LL, method);
  SrcSpotBasePrefab__SetBtnColliderEnable(focus_spot, 1, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0___begin_b__1(
        TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Action_o *_9__2; // x22
  CommonUI_o *v13; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B182EC & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__2__, v6, v7);
    byte_4B182EC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v13 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v9, v10, v11);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v14, v15, v16, v17, v18, v19);
  }
  if ( !v13 )
    sub_1BCAA3C(Instance, v9);
  CommonUI__CloseTutorialArrowMark(v13, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0___begin_b__2(
        TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_StateTutorial4_SpotArrow_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(this, method);
  _4__this->fields.mIsGoNext = 1;
}


void __fastcall TerminalSceneComponent_StateTutorial5_CombineArrow___ctor(
        TerminalSceneComponent_StateTutorial5_CombineArrow_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial5_CombineArrow__begin(
        TerminalSceneComponent_StateTutorial5_CombineArrow_o *this,
        TerminalSceneComponent_o *that,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x19
  void *Instance; // x0
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x2
  __int64 v25; // x3
  float *v26; // x8
  CommonUI_o *v27; // x20
  float v28; // s9
  float v29; // s11
  float v30; // s8
  float v31; // s12
  float v32; // s10
  System_Action_o *v33; // x21
  Il2CppObject *v34; // x22
  struct TerminalSceneComponent_StateTutorial5_CombineArrow___c_StaticFields *static_fields; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  System_Action_o *v45; // x20
  UnityEngine_Vector2_o v46; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v47; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4B182F3 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, that, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6);
    sub_1BCA7E0(&Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__begin_b__0_0__, v7, v8);
    sub_1BCA7E0(&Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0__begin_b__1__, v9, v10);
    sub_1BCA7E0(&TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0_TypeInfo, v11, v12);
    sub_1BCA7E0(&TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo, v13, v14);
    byte_4B182F3 = 1;
  }
  v15 = sub_1BCAA2C(TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0_TypeInfo, that, method, v3);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_13;
  *(_QWORD *)(v15 + 16) = that;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 16), (int64_t)that, v18, v19, v20, v21, v22, v23);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v26 = *(float **)(v15 + 16);
  if ( !v26 )
    goto LABEL_13;
  v27 = (CommonUI_o *)Instance;
  v28 = v26[52];
  v29 = v26[53];
  v30 = v26[48];
  v31 = v26[49];
  Instance = TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo;
  v32 = v26[50];
  if ( !TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo, v17);
    Instance = TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo;
  }
  v33 = *(System_Action_o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v33 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v17);
      Instance = TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo;
    }
    v34 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v33 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v17, v24, v25);
    System_Action___ctor(v33, v34, Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__begin_b__0_0__, 0LL);
    static_fields = TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = v33;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__0_0, (int64_t)v33, v36, v37, v38, v39, v40, v41);
  }
  if ( !v27 )
LABEL_13:
    sub_1BCAA3C(Instance, v17);
  v47.fields.m_YMin = v31 + 53.0;
  v46.fields.y = v29 + 33.0;
  v47.fields.m_Height = 135.0;
  v46.fields.x = v28;
  v47.fields.m_XMin = v30;
  v47.fields.m_Width = v32;
  CommonUI__OpenTutorialArrowMark(v27, v46, 0.0, v47, v33, 0LL);
  v45 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v42, v43, v44);
  System_Action___ctor(
    v45,
    (Il2CppObject *)v15,
    Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0__begin_b__1__,
    0LL);
  MainMenuBar__SetDispBtnAct(3, v45, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial5_CombineArrow__end(
        TerminalSceneComponent_StateTutorial5_CombineArrow_o *this,
        TerminalSceneComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall TerminalSceneComponent_StateTutorial5_CombineArrow__update(
        TerminalSceneComponent_StateTutorial5_CombineArrow_o *this,
        TerminalSceneComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall TerminalSceneComponent_StateTutorial5_CombineArrow___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B182F4 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo, v1, v2);
    byte_4B182F4 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo->static_fields->__9 = (struct TerminalSceneComponent_StateTutorial5_CombineArrow___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall TerminalSceneComponent_StateTutorial5_CombineArrow___c___ctor(
        TerminalSceneComponent_StateTutorial5_CombineArrow___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial5_CombineArrow___c___begin_b__0_0(
        TerminalSceneComponent_StateTutorial5_CombineArrow___c_o *this,
        const MethodInfo *method)
{
  MainMenuBar__SetDispBtnColliderEnable(1, 3, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0___ctor(
        TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0___begin_b__1(
        TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Action_o *_9__2; // x22
  CommonUI_o *v13; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B182F5 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0__begin_b__2__, v6, v7);
    byte_4B182F5 = 1;
  }
  MainMenuBar__SetDispBtnColliderEnable(0, 8, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v13 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v9, v10, v11);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v14, v15, v16, v17, v18, v19);
  }
  if ( !v13 )
    sub_1BCAA3C(Instance, v9);
  CommonUI__CloseTutorialArrowMark(v13, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalSceneComponent_o *that; // x0
  struct TerminalSceneComponent_o *v5; // x8
  struct TerminalSceneComponent_o *v6; // x8

  that = this->fields.that;
  if ( !that
    || (TerminalSceneComponent__SetState(that, 0, v2), (v5 = this->fields.that) == 0LL)
    || (that = (TerminalSceneComponent_o *)v5->fields.mTitleInfo) == 0LL
    || (TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)that, 1, 0LL), (v6 = this->fields.that) == 0LL)
    || (that = (TerminalSceneComponent_o *)v6->fields.mPlayerStatus) == 0LL )
  {
    sub_1BCAA3C(that, method);
  }
  ScrPlayerStatus__EnableAllBtn((ScrPlayerStatus_o *)that, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial5_MenuArrow___ctor(
        TerminalSceneComponent_StateTutorial5_MenuArrow_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial5_MenuArrow__begin(
        TerminalSceneComponent_StateTutorial5_MenuArrow_o *this,
        TerminalSceneComponent_o *that,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x19
  void *v20; // x0
  const MethodInfo *v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  TerminalSceneComponent_o **v28; // x22
  __int64 v29; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v31; // x21
  UnityEngine_Vector2_o TUTORIAL_MENU_ARROW_POS2_FS; // kr00_8
  TerminalSceneComponent_o *v33; // x8
  float m_XMin; // s12
  float m_YMin; // s13
  float m_Width; // s10
  float m_Height; // s14
  __int64 v38; // x2
  __int64 v39; // x3
  float v40; // s0
  float v41; // s11
  System_Action_o *v42; // x22
  Il2CppObject *v43; // x23
  struct TerminalSceneComponent_StateTutorial5_MenuArrow___c_StaticFields *static_fields; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  System_Action_o *v54; // x20
  UnityEngine_Rect_o v55; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4B182F0 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, that, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8);
    sub_1BCA7E0(&Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__begin_b__0_0__, v9, v10);
    sub_1BCA7E0(&Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0__begin_b__1__, v11, v12);
    sub_1BCA7E0(&TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0_TypeInfo, v13, v14);
    sub_1BCA7E0(&TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_13651/*"TUTORIAL_MESSAGE_COMBINE1"*/, v17, v18);
    byte_4B182F0 = 1;
  }
  v19 = sub_1BCAA2C(TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0_TypeInfo, that, method, v3);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    goto LABEL_16;
  *(_QWORD *)(v19 + 16) = that;
  v28 = (TerminalSceneComponent_o **)(v19 + 16);
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 16), (int64_t)that, v22, v23, v24, v25, v26, v27);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v29);
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_13651/*"TUTORIAL_MESSAGE_COMBINE1"*/, 0LL);
  if ( !*v28 )
    goto LABEL_16;
  v31 = (System_String_o *)v20;
  TUTORIAL_MENU_ARROW_POS2_FS = TerminalSceneComponent__get_TUTORIAL_MENU_ARROW_POS2_FS(*v28, v21);
  v33 = *v28;
  if ( !*v28 )
    goto LABEL_16;
  m_XMin = v33->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_XMin;
  m_YMin = v33->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_YMin;
  m_Width = v33->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Width;
  m_Height = v33->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Height;
  v40 = TerminalSceneComponent__FSMenuOffsetX((TerminalSceneComponent_o *)v20, v21);
  v20 = TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo;
  v41 = v40;
  if ( !TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo, v21);
    v20 = TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo;
  }
  v42 = *(System_Action_o **)(*((_QWORD *)v20 + 23) + 8LL);
  if ( !v42 )
  {
    if ( !*((_DWORD *)v20 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v20, v21);
      v20 = TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo;
    }
    v43 = (Il2CppObject *)**((_QWORD **)v20 + 23);
    v42 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v21, v38, v39);
    System_Action___ctor(v42, v43, Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__begin_b__0_0__, 0LL);
    static_fields = TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = v42;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__0_0, (int64_t)v42, v45, v46, v47, v48, v49, v50);
  }
  if ( !Instance )
LABEL_16:
    sub_1BCAA3C(v20, v21);
  v55.fields.m_Height = m_Height + 33.0;
  v55.fields.m_YMin = m_YMin + 33.0;
  v55.fields.m_XMin = m_XMin + v41;
  v55.fields.m_Width = m_Width;
  CommonUI__OpenTutorialNotificationDialogArrow(
    (CommonUI_o *)Instance,
    v31,
    TUTORIAL_MENU_ARROW_POS2_FS,
    v55,
    0.0,
    (UnityEngine_Vector2_o)0xC224000000000000LL,
    -1,
    v42,
    0LL);
  v54 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v51, v52, v53);
  System_Action___ctor(
    v54,
    (Il2CppObject *)v19,
    Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0__begin_b__1__,
    0LL);
  MainMenuBar__SetMenuBtnAct(v54, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial5_MenuArrow__end(
        TerminalSceneComponent_StateTutorial5_MenuArrow_o *this,
        TerminalSceneComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall TerminalSceneComponent_StateTutorial5_MenuArrow__update(
        TerminalSceneComponent_StateTutorial5_MenuArrow_o *this,
        TerminalSceneComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall TerminalSceneComponent_StateTutorial5_MenuArrow___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B182F1 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo, v1, v2);
    byte_4B182F1 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo->static_fields->__9 = (struct TerminalSceneComponent_StateTutorial5_MenuArrow___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall TerminalSceneComponent_StateTutorial5_MenuArrow___c___ctor(
        TerminalSceneComponent_StateTutorial5_MenuArrow___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial5_MenuArrow___c___begin_b__0_0(
        TerminalSceneComponent_StateTutorial5_MenuArrow___c_o *this,
        const MethodInfo *method)
{
  MainMenuBar__SetMenuBtnColliderEnable(1, 0, 0LL);
  MainMenuBar__SetDispBtnColliderEnable(0, 8, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0___ctor(
        TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0___begin_b__1(
        TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Action_o *_9__2; // x22
  CommonUI_o *v13; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B182F2 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0__begin_b__2__, v6, v7);
    byte_4B182F2 = 1;
  }
  MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
  MainMenuBar__SetDispBtnColliderEnable(0, 8, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v13 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v9, v10, v11);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v14, v15, v16, v17, v18, v19);
  }
  if ( !v13 )
    sub_1BCAA3C(Instance, v9);
  CommonUI__CloseTutorialNotificationDialogArrow_30791892(v13, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1BCAA3C(0LL, method);
  TerminalSceneComponent__SetState(that, 10, v2);
}


void __fastcall TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__253___ctor(
        TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__253_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__253__MoveNext(
        TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__253_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x20
  System_Func_bool__o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  UnityEngine_WaitUntil_o *v15; // x20
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  bool result; // w0
  ChainableActionBase_o *openCampaignDirectBonus; // x0

  if ( (byte_4B1831B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Func_bool__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_TerminalSceneComponent__CoWaitBlankEarthActionEnd_b__253_0__, v5, v6);
    sub_1BCA7E0(&UnityEngine_WaitUntil_TypeInfo, v7, v8);
    byte_4B1831B = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    openCampaignDirectBonus = (ChainableActionBase_o *)this->fields.openCampaignDirectBonus;
    this->fields.__1__state = -1;
    if ( !openCampaignDirectBonus )
      sub_1BCAA3C(0LL, method);
    ChainableActionBase__Execute(openCampaignDirectBonus, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    _4__this = (Il2CppObject *)this->fields.__4__this;
    v11 = (System_Func_bool__o *)sub_1BCAA2C(System_Func_bool__TypeInfo, method, v2, v3);
    System_Func_bool____ctor(v11, _4__this, Method_TerminalSceneComponent__CoWaitBlankEarthActionEnd_b__253_0__, 0LL);
    v15 = (UnityEngine_WaitUntil_o *)sub_1BCAA2C(UnityEngine_WaitUntil_TypeInfo, v12, v13, v14);
    UnityEngine_WaitUntil___ctor(v15, v11, 0LL);
    this->fields.__2__current = (Il2CppObject *)v15;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__2__current, (int64_t)v15, v16, v17, v18, v19, v20, v21);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__253__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__253_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__253__System_Collections_IEnumerator_Reset(
        TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__253_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__253_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__253__System_Collections_IEnumerator_get_Current(
        TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__253_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__253__System_IDisposable_Dispose(
        TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__253_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__252___ctor(
        TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__252_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__252__MoveNext(
        TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__252_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x20
  System_Func_bool__o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  UnityEngine_WaitUntil_o *v15; // x20
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  bool result; // w0
  ChainableActionBase_o *openCampaignDirectBonus; // x0

  if ( (byte_4B1831C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Func_bool__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_TerminalSceneComponent__CoWaitTerminalTopEffectEnd_b__252_0__, v5, v6);
    sub_1BCA7E0(&UnityEngine_WaitUntil_TypeInfo, v7, v8);
    byte_4B1831C = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    openCampaignDirectBonus = (ChainableActionBase_o *)this->fields.openCampaignDirectBonus;
    this->fields.__1__state = -1;
    if ( !openCampaignDirectBonus )
      sub_1BCAA3C(0LL, method);
    ChainableActionBase__Execute(openCampaignDirectBonus, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    _4__this = (Il2CppObject *)this->fields.__4__this;
    v11 = (System_Func_bool__o *)sub_1BCAA2C(System_Func_bool__TypeInfo, method, v2, v3);
    System_Func_bool____ctor(v11, _4__this, Method_TerminalSceneComponent__CoWaitTerminalTopEffectEnd_b__252_0__, 0LL);
    v15 = (UnityEngine_WaitUntil_o *)sub_1BCAA2C(UnityEngine_WaitUntil_TypeInfo, v12, v13, v14);
    UnityEngine_WaitUntil___ctor(v15, v11, 0LL);
    this->fields.__2__current = (Il2CppObject *)v15;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__2__current, (int64_t)v15, v16, v17, v18, v19, v20, v21);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__252__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__252_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__252__System_Collections_IEnumerator_Reset(
        TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__252_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__252_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__252__System_Collections_IEnumerator_get_Current(
        TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__252_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__252__System_IDisposable_Dispose(
        TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__252_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall TerminalSceneComponent__LoadAsync_d__176___ctor(
        TerminalSceneComponent__LoadAsync_d__176_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall TerminalSceneComponent__LoadAsync_d__176__MoveNext(
        TerminalSceneComponent__LoadAsync_d__176_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  TerminalSceneComponent__LoadAsync_d__176_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  int32_t _1__state; // w8
  TerminalSceneComponent_o *_4__this; // x21
  __int64 v47; // x20
  __int64 v48; // x2
  __int64 v49; // x3
  UserServantEntity_o *usd; // x22
  System_Action_o *v51; // x23
  const MethodInfo *v52; // x4
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  System_Action_o *v56; // x22
  __int64 v57; // x1
  struct TerminalTransitionInfo_o *TransitionInfo_k__BackingField; // x8
  __int64 v59; // x2
  __int64 v60; // x3
  struct TerminalTransitionInfo_o *v61; // x8
  SoundManager_o *v62; // x21
  System_String_o *voiceAssetName; // x22
  System_Action_o *v64; // x23
  System_Action_o *v65; // x21
  __int64 v66; // x1
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x3
  System_Action_o *v70; // x21
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x3
  System_Action_o *v74; // x21
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x3
  System_Action_o *v78; // x21
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x3
  System_Action_o *v82; // x21
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x3
  System_Action_o *v86; // x21
  __int64 v87; // x1
  __int64 v88; // x2
  __int64 v89; // x3
  System_Action_o *v90; // x21
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x3
  System_Action_o *v94; // x21
  __int64 v95; // x1
  __int64 v96; // x2
  __int64 v97; // x3
  System_Action_o *v98; // x21
  __int64 v99; // x1
  __int64 v100; // x2
  __int64 v101; // x3
  System_Action_o *v102; // x21
  __int64 v103; // x1
  __int64 v104; // x2
  __int64 v105; // x3
  System_Func_bool__o *v106; // x21
  __int64 v107; // x1
  __int64 v108; // x2
  __int64 v109; // x3
  UnityEngine_WaitUntil_o *v110; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v112; // x2
  int32_t v113; // w3
  System_String_o *v114; // x4
  BattleSetupInfo_o *v115; // x5
  FollowerInfo_o *v116; // x6
  PartyListViewItem_o *v117; // x7
  bool result; // w0
  struct System_Action_o *callback; // x8

  v4 = this;
  if ( (byte_4B1831D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&System_Func_bool__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v11, v12);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__0__, v13, v14);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__10__, v15, v16);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__11__, v17, v18);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__12__, v19, v20);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__13__, v21, v22);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__1__, v23, v24);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__2__, v25, v26);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__3__, v27, v28);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__4__, v29, v30);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__5__, v31, v32);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__6__, v33, v34);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__7__, v35, v36);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__8__, v37, v38);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__9__, v39, v40);
    sub_1BCA7E0(&TerminalSceneComponent___c__DisplayClass176_0_TypeInfo, v41, v42);
    this = (TerminalSceneComponent__LoadAsync_d__176_o *)sub_1BCA7E0(&UnityEngine_WaitUntil_TypeInfo, v43, v44);
    byte_4B1831D = 1;
  }
  _1__state = v4->fields.__1__state;
  if ( _1__state == 1 )
  {
    callback = v4->fields.callback;
    v4->fields.__1__state = -1;
    if ( !callback )
      goto LABEL_23;
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      *(_QWORD *)&callback->fields.extra_arg);
    return 0;
  }
  if ( _1__state )
    return 0;
  v4->fields.__1__state = -1;
  _4__this = v4->fields.__4__this;
  v47 = sub_1BCAA2C(TerminalSceneComponent___c__DisplayClass176_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v47, 0LL);
  if ( !v47 )
    goto LABEL_23;
  *(_DWORD *)(v47 + 19) = 0;
  *(_BYTE *)(v47 + 23) = 0;
  *(_DWORD *)(v47 + 24) = 0;
  *(_WORD *)(v47 + 16) = 256;
  *(_BYTE *)(v47 + 18) = 1;
  *(_BYTE *)(v47 + 28) = 1;
  usd = v4->fields.usd;
  v51 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v48, v49);
  System_Action___ctor(
    v51,
    (Il2CppObject *)v47,
    Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__0__,
    0LL);
  if ( !_4__this )
    goto LABEL_23;
  TerminalSceneComponent__SetupStandServant(_4__this, usd, 0, v51, v52);
  this = (TerminalSceneComponent__LoadAsync_d__176_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !this )
    goto LABEL_23;
  if ( !AtlasManager__isLoadedSkinData((AtlasManager_o *)this, 4, 0LL) )
  {
    *(_BYTE *)(v47 + 17) = 0;
    v56 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v53, v54, v55);
    System_Action___ctor(
      v56,
      (Il2CppObject *)v47,
      Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__1__,
      0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v57);
    AtlasManager__LoadUISkin(v56, 4, 11, 0LL);
  }
  TransitionInfo_k__BackingField = _4__this->fields._TransitionInfo_k__BackingField;
  if ( !TransitionInfo_k__BackingField
    || System_String__IsNullOrEmpty(TransitionInfo_k__BackingField->fields.voiceAssetName, 0LL) )
  {
    goto LABEL_17;
  }
  *(_BYTE *)(v47 + 18) = 0;
  this = (TerminalSceneComponent__LoadAsync_d__176_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v61 = _4__this->fields._TransitionInfo_k__BackingField;
  if ( !v61
    || (v62 = (SoundManager_o *)this,
        voiceAssetName = v61->fields.voiceAssetName,
        v64 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v59, v60),
        System_Action___ctor(
          v64,
          (Il2CppObject *)v47,
          Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__2__,
          0LL),
        !v62) )
  {
LABEL_23:
    sub_1BCAA3C(this, method);
  }
  SoundManager__LoadAudioAssetStorage(v62, voiceAssetName, v64, 1, 0LL);
LABEL_17:
  v65 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v53, v54, v55);
  System_Action___ctor(
    v65,
    (Il2CppObject *)v47,
    Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__3__,
    0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v66);
  AtlasManager__LoadBanner(v65, 11, 0LL);
  v70 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v67, v68, v69);
  System_Action___ctor(
    v70,
    (Il2CppObject *)v47,
    Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__4__,
    0LL);
  AtlasManager__LoadFaceAtlas(v70, 11, 0LL);
  v74 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v71, v72, v73);
  System_Action___ctor(
    v74,
    (Il2CppObject *)v47,
    Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__5__,
    0LL);
  AtlasManager__LoadEquipFace(v74, 11, 0LL);
  v78 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v75, v76, v77);
  System_Action___ctor(
    v78,
    (Il2CppObject *)v47,
    Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__6__,
    0LL);
  AtlasManager__LoadFriendshipExceed(v78, 11, 0LL);
  v82 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v79, v80, v81);
  System_Action___ctor(
    v82,
    (Il2CppObject *)v47,
    Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__7__,
    0LL);
  AtlasManager__LoadCommandCode(v82, 11, 0LL);
  v86 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v83, v84, v85);
  System_Action___ctor(
    v86,
    (Il2CppObject *)v47,
    Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__8__,
    0LL);
  AtlasManager__LoadCommandCodeMini(v86, 11, 0LL);
  v90 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v87, v88, v89);
  System_Action___ctor(
    v90,
    (Il2CppObject *)v47,
    Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__9__,
    0LL);
  AtlasManager__LoadEventAtlas(v90, 11, 0LL);
  v94 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v91, v92, v93);
  System_Action___ctor(
    v94,
    (Il2CppObject *)v47,
    Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__10__,
    0LL);
  AtlasManager__LoadEventUI(v94, 11, 0LL);
  v98 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v95, v96, v97);
  System_Action___ctor(
    v98,
    (Il2CppObject *)v47,
    Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__11__,
    0LL);
  AtlasManager__LoadCharaGraphOptionAtlas(v98, 11, 0LL);
  v102 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v99, v100, v101);
  System_Action___ctor(
    v102,
    (Il2CppObject *)v47,
    Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__12__,
    0LL);
  AtlasManager__LoadPartyOrganizationAtlas(v102, 11, 0LL);
  v106 = (System_Func_bool__o *)sub_1BCAA2C(System_Func_bool__TypeInfo, v103, v104, v105);
  System_Func_bool____ctor(
    v106,
    (Il2CppObject *)v47,
    Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__13__,
    0LL);
  v110 = (UnityEngine_WaitUntil_o *)sub_1BCAA2C(UnityEngine_WaitUntil_TypeInfo, v107, v108, v109);
  UnityEngine_WaitUntil___ctor(v110, v106, 0LL);
  v4->fields.__2__current = (Il2CppObject *)v110;
  p__2__current = (PartyOrganizationUtility_o *)&v4->fields.__2__current;
  sub_1BCA784(p__2__current, (int64_t)v110, v112, v113, v114, v115, v116, v117);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
  return result;
}


Il2CppObject *__fastcall TerminalSceneComponent__LoadAsync_d__176__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TerminalSceneComponent__LoadAsync_d__176_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn TerminalSceneComponent__LoadAsync_d__176__System_Collections_IEnumerator_Reset(
        TerminalSceneComponent__LoadAsync_d__176_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_TerminalSceneComponent__LoadAsync_d__176_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall TerminalSceneComponent__LoadAsync_d__176__System_Collections_IEnumerator_get_Current(
        TerminalSceneComponent__LoadAsync_d__176_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall TerminalSceneComponent__LoadAsync_d__176__System_IDisposable_Dispose(
        TerminalSceneComponent__LoadAsync_d__176_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__192___ctor(
        TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__192_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__192__MoveNext(
        TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__192_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  int32_t _1__state; // w8
  TerminalSceneComponent___c_c *v14; // x0
  System_Func_bool__o *_9__192_0; // x20
  Il2CppObject *v16; // x21
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  UnityEngine_WaitWhile_o *v24; // x21
  Il2CppObject **p__2__current; // x19
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  bool result; // w0

  if ( (byte_4B1831E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Func_bool__TypeInfo, method, v2);
    sub_1BCA7E0(&SoundManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__WaitStopSEQuestPhaseRewardEffect_b__192_0__, v7, v8);
    sub_1BCA7E0(&TerminalSceneComponent___c_TypeInfo, v9, v10);
    sub_1BCA7E0(&UnityEngine_WaitWhile_TypeInfo, v11, v12);
    byte_4B1831E = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method);
    SoundManager__stopSe(0.0, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  v14 = TerminalSceneComponent___c_TypeInfo;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo, method);
    v14 = TerminalSceneComponent___c_TypeInfo;
  }
  _9__192_0 = v14->static_fields->__9__192_0;
  if ( !_9__192_0 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14, method);
      v14 = TerminalSceneComponent___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v14->static_fields->__9;
    _9__192_0 = (System_Func_bool__o *)sub_1BCAA2C(System_Func_bool__TypeInfo, method, v2, v3);
    System_Func_bool____ctor(
      _9__192_0,
      v16,
      Method_TerminalSceneComponent___c__WaitStopSEQuestPhaseRewardEffect_b__192_0__,
      0LL);
    static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    static_fields->__9__192_0 = _9__192_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__192_0,
      (int64_t)_9__192_0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  v24 = (UnityEngine_WaitWhile_o *)sub_1BCAA2C(UnityEngine_WaitWhile_TypeInfo, method, v2, v3);
  UnityEngine_WaitWhile___ctor(v24, _9__192_0, 0LL);
  this->fields.__2__current = (Il2CppObject *)v24;
  p__2__current = &this->fields.__2__current;
  sub_1BCA784((PartyOrganizationUtility_o *)p__2__current, (int64_t)v24, v26, v27, v28, v29, v30, v31);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *__fastcall TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__192__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__192_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__192__System_Collections_IEnumerator_Reset(
        TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__192_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__192_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__192__System_Collections_IEnumerator_get_Current(
        TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__192_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__192__System_IDisposable_Dispose(
        TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__192_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall TerminalSceneComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B182F6 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalSceneComponent___c_TypeInfo, v1, v2);
    byte_4B182F6 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(TerminalSceneComponent___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  TerminalSceneComponent___c_TypeInfo->static_fields->__9 = (struct TerminalSceneComponent___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)TerminalSceneComponent___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall TerminalSceneComponent___c___ctor(TerminalSceneComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c___CheckOpenCampaignDirectBonus_b__251_0(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x20
  TerminalPramsManager_c *v9; // x0

  if ( (byte_4B18304 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, action, method);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v4, v5);
    byte_4B18304 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6);
  if ( !byte_4B13813 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v6, v7);
    byte_4B13813 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6);
    v9 = TerminalPramsManager_TypeInfo;
  }
  if ( !Instance )
    sub_1BCAA3C(v9, v6);
  CommonUI__OpenCampaignDirectBonus(
    (CommonUI_o *)Instance,
    v9->static_fields->_CampaignDirectBonus_k__BackingField,
    action,
    0LL);
}


void __fastcall TerminalSceneComponent___c___CheckOpenCampaignDirectBonus_b__251_1(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x20
  TerminalPramsManager_c *v9; // x0

  if ( (byte_4B18305 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, action, method);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v4, v5);
    byte_4B18305 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6);
  if ( !byte_4B13813 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v6, v7);
    byte_4B13813 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6);
    v9 = TerminalPramsManager_TypeInfo;
  }
  if ( !Instance )
    sub_1BCAA3C(v9, v6);
  CommonUI__OpenCampaignDirectBonusWithTransitionDialog(
    (CommonUI_o *)Instance,
    v9->static_fields->_CampaignDirectBonus_k__BackingField,
    action,
    0LL);
}


void __fastcall TerminalSceneComponent___c___CheckRewardPopupChain_b__249_2(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B18302 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, action, method);
    byte_4B18302 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
  CommonUI__StartFriendPointNotification((CommonUI_o *)Instance, action, 0LL);
}


void __fastcall TerminalSceneComponent___c___CheckRewardPopupChain_b__249_6(
        TerminalSceneComponent___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B18303 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B18303 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ClearLoginResultData((CommonUI_o *)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (CommonUI__ReleaseFortuneBonusAssetData((CommonUI_o *)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (CommonUI__ReleaseSelectBonusDialogAsset((CommonUI_o *)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1BCAA3C(Instance, v4);
  }
  CommonUI__ReleaseLoginBonusWithTransitionDialogAssetData((CommonUI_o *)Instance, 0LL);
}


void __fastcall TerminalSceneComponent___c___Fadein_MapDisp_Start_b__196_0(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B182F9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, action, method);
    byte_4B182F9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
  CommonUI__StartLoginAndCampaignBonus((CommonUI_o *)Instance, action, 0LL, 201, 0LL);
}


void __fastcall TerminalSceneComponent___c___Fadein_MapDisp_Start_b__196_1(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  CommonUI_o *v8; // x20

  if ( (byte_4B182FA & 1) == 0 )
  {
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, action, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    byte_4B182FA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v7);
  if ( !v8
    || (CommonUI__maskFadein(v8, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, action, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (CommonUI__ClearLoginResultData((CommonUI_o *)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (CommonUI__ReleaseFortuneBonusAssetData((CommonUI_o *)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1BCAA3C(Instance, v7);
  }
  CommonUI__ReleaseLoginBonusWithTransitionDialogAssetData((CommonUI_o *)Instance, 0LL);
}


void __fastcall TerminalSceneComponent___c___Fadein_MapDisp_Start_b__196_6(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  CommonUI_o *v8; // x20

  if ( (byte_4B182F8 & 1) == 0 )
  {
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, action, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    byte_4B182F8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v7);
  if ( !v8 )
    sub_1BCAA3C(Instance, v7);
  CommonUI__maskFadein(v8, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, action, 0LL);
}


// local variable allocation has failed, the output may be wrong!
ShopEntity_o *__fastcall TerminalSceneComponent___c___OpenExchangeDialogue_b__256_0(
        TerminalSceneComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1

  if ( (byte_4B18306 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopMaster___, *(_QWORD *)&x, method);
    sub_1BCA7E0(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B18306 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v9);
  }
  return (ShopEntity_o *)DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                           x,
                           (const MethodInfo_31B2E40 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
}


bool __fastcall TerminalSceneComponent___c___OpenExchangeDialogue_b__256_1(
        TerminalSceneComponent___c_o *this,
        ShopEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return ShopEntity__IsAfterTheFreeShopReleaseDate(x, 0LL);
}


bool __fastcall TerminalSceneComponent___c___OpenExchangeDialogue_b__256_2(
        TerminalSceneComponent___c_o *this,
        ShopEntity_o *x,
        const MethodInfo *method)
{
  bool isQuestNotClearItemClosed; // w8
  bool result; // w0

  if ( !x )
    sub_1BCAA3C(this, 0LL);
  if ( !ShopEntity__isQuestNotClearItemClosed(x, 0, 0LL) )
    return 1;
  isQuestNotClearItemClosed = ShopEntity__isQuestNotClearItemClosed(x, 0, 0LL);
  result = 0;
  if ( isQuestNotClearItemClosed )
    return ShopEntity__IsSoldOut(x, 0LL);
  return result;
}


int32_t __fastcall TerminalSceneComponent___c___OpenExchangeDialogue_b__256_4(
        TerminalSceneComponent___c_o *this,
        ShopEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.id;
}


// local variable allocation has failed, the output may be wrong!
ShopEntity_o *__fastcall TerminalSceneComponent___c___OpenExchangeDialogue_b__256_5(
        TerminalSceneComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1

  if ( (byte_4B18307 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopMaster___, *(_QWORD *)&x, method);
    sub_1BCA7E0(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B18307 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v9);
  }
  return (ShopEntity_o *)DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                           x,
                           (const MethodInfo_31B2E40 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
}


int32_t __fastcall TerminalSceneComponent___c___OpenExchangeDialogue_b__256_6(
        TerminalSceneComponent___c_o *this,
        ShopEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return ShopEntity__GetPrice(x, 0LL);
}


void __fastcall TerminalSceneComponent___c___PlayAutoExecuteQuest_b__226_1(
        TerminalSceneComponent___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  TerminalPramsManager_c *v12; // x0
  int32_t WarId_k__BackingField; // w19
  int32_t QuestId_k__BackingField; // w20
  TerminalSceneComponent___c_c *v15; // x8
  int32_t PhaseCnt_k__BackingField; // w23
  ScriptManager_CallbackFunc_o *_9__226_3; // x21
  Il2CppObject *v18; // x22
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4B182FF & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptManager_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&ScriptManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__PlayAutoExecuteQuest_b__226_3__, v8, v9);
    sub_1BCA7E0(&TerminalSceneComponent___c_TypeInfo, v10, v11);
    byte_4B182FF = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_4B12DC6 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B12DC6 = 1;
  }
  v12 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v12 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v12->static_fields->_WarId_k__BackingField;
  if ( !byte_4B12DC3 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    v12 = TerminalPramsManager_TypeInfo;
    byte_4B12DC3 = 1;
  }
  if ( !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12, method);
    v12 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v12->static_fields->_QuestId_k__BackingField;
  if ( !byte_4B12DCE )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    v12 = TerminalPramsManager_TypeInfo;
    byte_4B12DCE = 1;
  }
  if ( !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12, method);
    v12 = TerminalPramsManager_TypeInfo;
  }
  v15 = TerminalSceneComponent___c_TypeInfo;
  PhaseCnt_k__BackingField = v12->static_fields->_PhaseCnt_k__BackingField;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo, method);
    v15 = TerminalSceneComponent___c_TypeInfo;
  }
  _9__226_3 = v15->static_fields->__9__226_3;
  if ( !_9__226_3 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15, method);
      v15 = TerminalSceneComponent___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v15->static_fields->__9;
    _9__226_3 = (ScriptManager_CallbackFunc_o *)sub_1BCAA2C(ScriptManager_CallbackFunc_TypeInfo, method, v2, v3);
    ScriptManager_CallbackFunc___ctor(
      _9__226_3,
      v18,
      Method_TerminalSceneComponent___c__PlayAutoExecuteQuest_b__226_3__,
      0LL);
    static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    static_fields->__9__226_3 = _9__226_3;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__226_3,
      (int64_t)_9__226_3,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, method);
  ScriptManager__PlayBattleStart(
    WarId_k__BackingField,
    QuestId_k__BackingField,
    PhaseCnt_k__BackingField + 1,
    _9__226_3,
    0,
    0LL,
    -1,
    0,
    0,
    0LL,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalSceneComponent___c___PlayAutoExecuteQuest_b__226_3(
        TerminalSceneComponent___c_o *this,
        bool isExit,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  TerminalSceneComponent___c_c *v16; // x0
  NetworkManager_ResultCallbackFunc_o *_9__226_4; // x19
  Il2CppObject *v18; // x20
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  __int64 v26; // x1
  __int64 v27; // x2
  Il2CppObject *Request_object; // x19
  TerminalPramsManager_c *v29; // x0
  int32_t QuestId_k__BackingField; // w21
  int32_t PhaseCnt_k__BackingField; // w20
  System_Int32_array *SelectRouteArray; // x0
  __int64 v33; // x1

  if ( (byte_4B18300 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_NetworkManager_getRequest_BattleScenarioRequest___, isExit, method);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v6, v7);
    sub_1BCA7E0(&ScriptManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__PlayAutoExecuteQuest_b__226_4__, v12, v13);
    sub_1BCA7E0(&TerminalSceneComponent___c_TypeInfo, v14, v15);
    byte_4B18300 = 1;
  }
  v16 = TerminalSceneComponent___c_TypeInfo;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo, isExit);
    v16 = TerminalSceneComponent___c_TypeInfo;
  }
  _9__226_4 = v16->static_fields->__9__226_4;
  if ( !_9__226_4 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16, isExit);
      v16 = TerminalSceneComponent___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v16->static_fields->__9;
    _9__226_4 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                         NetworkManager_ResultCallbackFunc_TypeInfo,
                                                         isExit,
                                                         method,
                                                         v3);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__226_4,
      v18,
      Method_TerminalSceneComponent___c__PlayAutoExecuteQuest_b__226_4__,
      0LL);
    static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    static_fields->__9__226_4 = _9__226_4;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__226_4,
      (int64_t)_9__226_4,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, isExit);
  Request_object = NetworkManager__getRequest_object_(
                     _9__226_4,
                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_BattleScenarioRequest___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v26);
  if ( !byte_4B12DC3 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v26, v27);
    byte_4B12DC3 = 1;
  }
  v29 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v26);
    v29 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v29->static_fields->_QuestId_k__BackingField;
  if ( !byte_4B12DCE )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v26, v27);
    v29 = TerminalPramsManager_TypeInfo;
    byte_4B12DCE = 1;
  }
  if ( !v29->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v29, v26);
    v29 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v29->static_fields->_PhaseCnt_k__BackingField;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v26);
  SelectRouteArray = ScriptManager__GetSelectRouteArray(0LL);
  if ( !Request_object )
    sub_1BCAA3C(SelectRouteArray, v33);
  BattleScenarioRequest__beginRequest(
    (BattleScenarioRequest_o *)Request_object,
    QuestId_k__BackingField,
    PhaseCnt_k__BackingField + 1,
    SelectRouteArray,
    0LL);
}


void __fastcall TerminalSceneComponent___c___PlayAutoExecuteQuest_b__226_4(
        TerminalSceneComponent___c_o *this,
        System_String_o *jsonStr,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  Il2CppObject *v17; // x19
  __int64 v18; // x1
  System_Object_array *v19; // x19
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x2
  TerminalPramsManager_c *v23; // x0
  Il2CppObject *Instance; // x0
  __int64 v25; // x1

  if ( (byte_4B18301 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___, jsonStr, method);
    sub_1BCA7E0(&JsonManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&ScriptManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v8, v9);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_15978/*"["*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_16236/*"]"*/, v14, v15);
    byte_4B18301 = 1;
  }
  v17 = (Il2CppObject *)System_String__Concat_62412480(
                          (System_String_o *)StringLiteral_15978/*"["*/,
                          jsonStr,
                          (System_String_o *)StringLiteral_16236/*"]"*/,
                          0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v16);
  v19 = JsonManager__DeserializeArray_object_(
          v17,
          (const MethodInfo_2F79784 *)Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v18);
  ScriptManager__ClearSelectRouteArray(0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v20);
  TerminalPramsManager__ReceiveQuestEndResultInfo((BattleResultComponent_resultData_array *)v19, 1, 0LL);
  if ( !byte_4B11139 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v21, v22);
    byte_4B11139 = 1;
  }
  v23 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v21);
    v23 = TerminalPramsManager_TypeInfo;
  }
  v23->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v25);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalSceneComponent___c___RebootToNetworkError_b__213_0(
        TerminalSceneComponent___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B182FE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, isDecide, method);
    byte_4B182FE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, 0LL);
}


void __fastcall TerminalSceneComponent___c___StartWindowMessage_b__198_1(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  CommonUI_o *v8; // x20

  if ( (byte_4B182FB & 1) == 0 )
  {
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, action, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    byte_4B182FB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v7);
  if ( !v8 )
    sub_1BCAA3C(Instance, v7);
  CommonUI__maskFadein(v8, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, action, 0LL);
}


void __fastcall TerminalSceneComponent___c___StartWindowMessage_b__198_2(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  TerminalPramsManager_c *v6; // x0
  System_String_o *QuestWindowMessage_k__BackingField; // x20

  if ( (byte_4B182FC & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptManager_TypeInfo, action, method);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v4, v5);
    byte_4B182FC = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, action);
  if ( !byte_4B18384 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, action, method);
    byte_4B18384 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, action);
    v6 = TerminalPramsManager_TypeInfo;
  }
  QuestWindowMessage_k__BackingField = v6->static_fields->_QuestWindowMessage_k__BackingField;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, action);
  ScriptManager__PlayMessage(QuestWindowMessage_k__BackingField, action, 0, 0LL, -1, 0LL);
}


void __fastcall TerminalSceneComponent___c___StartWindowMessage_b__198_3(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  TerminalPramsManager_c *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *v9; // x20
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_4B182FD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, action, method);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v4, v5);
    byte_4B182FD = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, action);
  if ( !byte_4B12055 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, action, method);
    byte_4B12055 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, action);
    v6 = TerminalPramsManager_TypeInfo;
  }
  if ( v6->static_fields->_MessageDispType_k__BackingField != 2 )
  {
    if ( !v6->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v6, action);
    TerminalPramsManager__InitMessageWindowData(0LL);
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( Instance )
    {
      AvalonSceneManager__transitionSceneRefresh(Instance, 34, 1, 0LL, 0, 0LL);
      goto LABEL_22;
    }
LABEL_23:
    sub_1BCAA3C(Instance, v7);
  }
  v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7);
  if ( !byte_4B18386 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v7, v8);
    byte_4B18386 = 1;
  }
  Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7);
    Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v9 )
    goto LABEL_23;
  AvalonSceneManager__transitionScene(
    (AvalonSceneManager_o *)v9,
    40,
    1,
    (Il2CppObject *)Instance[1].fields.m_listUnloadScenes[3].klass,
    0LL);
LABEL_22:
  ActionExtensions__Call(action, 0LL);
}


bool __fastcall TerminalSceneComponent___c___WaitStopSEQuestPhaseRewardEffect_b__192_0(
        TerminalSceneComponent___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4B182F7 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B182F7 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_4B10F84 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B10F84 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_isPlayingQuestPhaseRewardEffect_k__BackingField;
}


System_String_o *__fastcall TerminalSceneComponent___c___callbackTopLogin_b__211_0(
        TerminalSceneComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  int32_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = x;
  return System_Int32__ToString((int32_t)&v4, 0LL);
}


System_String_o *__fastcall TerminalSceneComponent___c___callbackTopLogin_b__211_1(
        TerminalSceneComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  int32_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = x;
  return System_Int32__ToString((int32_t)&v4, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass173_0___ctor(
        TerminalSceneComponent___c__DisplayClass173_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass173_0___SetEarthView_b__0(
        TerminalSceneComponent___c__DisplayClass173_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass173_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  struct TerminalSceneComponent_o *_4__this; // x21
  __int64 v14; // x1
  Il2CppObject *Object_object__49237568; // x20
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct TerminalSceneComponent_o *v22; // x8
  struct TerminalSceneComponent_o *v23; // x20
  Il2CppObject *ComponentInChildren_object; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7

  v4 = this;
  if ( (byte_4B18308 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, data, method);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentInChildren_BaseCore___, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    this = (TerminalSceneComponent___c__DisplayClass173_0_o *)sub_1BCA7E0(&StringLiteral_4831/*"CorePrefab"*/, v11, v12);
    byte_4B18308 = 1;
  }
  if ( !data )
    goto LABEL_11;
  _4__this = v4->fields.__4__this;
  Object_object__49237568 = AssetData__GetObject_object__49237568(
                              data,
                              (System_String_o *)StringLiteral_4831/*"CorePrefab"*/,
                              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
  this = (TerminalSceneComponent___c__DisplayClass173_0_o *)UnityEngine_Object__Instantiate_object_(
                                                              Object_object__49237568,
                                                              (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !_4__this
    || (_4__this->fields.mEarthCoreObj = (struct UnityEngine_GameObject_o *)this,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&_4__this->fields.mEarthCoreObj,
          (int64_t)this,
          v16,
          v17,
          v18,
          v19,
          v20,
          v21),
        (v22 = v4->fields.__4__this) == 0LL)
    || (GameObjectExtensions__SafeSetParent_34336992(v22->fields.mEarthCoreObj, v22->fields.mUiRoot, 0LL),
        (v23 = v4->fields.__4__this) == 0LL)
    || (this = (TerminalSceneComponent___c__DisplayClass173_0_o *)v23->fields.mEarthCoreObj) == 0LL )
  {
LABEL_11:
    sub_1BCAA3C(this, data);
  }
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 (UnityEngine_GameObject_o *)this,
                                 (const MethodInfo_2F62934 *)Method_UnityEngine_GameObject_GetComponentInChildren_BaseCore___);
  v23->fields.mEarthCore = (struct BaseCore_o *)ComponentInChildren_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v23->fields.mEarthCore,
    (int64_t)ComponentInChildren_object,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  ActionExtensions__Call(v4->fields.callback, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass176_0___ctor(
        TerminalSceneComponent___c__DisplayClass176_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass176_0___LoadAsync_b__0(
        TerminalSceneComponent___c__DisplayClass176_0_o *this,
        const MethodInfo *method)
{
  this->fields.isSetupStandServant = 1;
}


void __fastcall TerminalSceneComponent___c__DisplayClass176_0___LoadAsync_b__1(
        TerminalSceneComponent___c__DisplayClass176_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadUISkin = 1;
}


void __fastcall TerminalSceneComponent___c__DisplayClass176_0___LoadAsync_b__10(
        TerminalSceneComponent___c__DisplayClass176_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadEventUI = 1;
}


void __fastcall TerminalSceneComponent___c__DisplayClass176_0___LoadAsync_b__11(
        TerminalSceneComponent___c__DisplayClass176_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadCharaGraphOptionAtlas = 1;
}


void __fastcall TerminalSceneComponent___c__DisplayClass176_0___LoadAsync_b__12(
        TerminalSceneComponent___c__DisplayClass176_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadPartyOrganizationAtlas = 1;
}


bool __fastcall TerminalSceneComponent___c__DisplayClass176_0___LoadAsync_b__13(
        TerminalSceneComponent___c__DisplayClass176_0_o *this,
        const MethodInfo *method)
{
  return this->fields.isLoadUISkin
      && this->fields.isSetupStandServant
      && this->fields.isLoadAudioAssetStorage
      && this->fields.isLoadBanner
      && this->fields.isLoadEquipFace
      && this->fields.isLoadCommandCode
      && this->fields.isLoadFriendshipExceed
      && this->fields.isLoadEventAtlas
      && this->fields.isLoadCommandCodeMini
      && this->fields.isLoadEventUI
      && this->fields.isLoadFaceAtlas
      && this->fields.isLoadCharaGraphOptionAtlas
      && this->fields.isLoadPartyOrganizationAtlas;
}


void __fastcall TerminalSceneComponent___c__DisplayClass176_0___LoadAsync_b__2(
        TerminalSceneComponent___c__DisplayClass176_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadAudioAssetStorage = 1;
}


void __fastcall TerminalSceneComponent___c__DisplayClass176_0___LoadAsync_b__3(
        TerminalSceneComponent___c__DisplayClass176_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadBanner = 1;
}


void __fastcall TerminalSceneComponent___c__DisplayClass176_0___LoadAsync_b__4(
        TerminalSceneComponent___c__DisplayClass176_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadFaceAtlas = 1;
}


void __fastcall TerminalSceneComponent___c__DisplayClass176_0___LoadAsync_b__5(
        TerminalSceneComponent___c__DisplayClass176_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadEquipFace = 1;
}


void __fastcall TerminalSceneComponent___c__DisplayClass176_0___LoadAsync_b__6(
        TerminalSceneComponent___c__DisplayClass176_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadFriendshipExceed = 1;
}


void __fastcall TerminalSceneComponent___c__DisplayClass176_0___LoadAsync_b__7(
        TerminalSceneComponent___c__DisplayClass176_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadCommandCode = 1;
}


void __fastcall TerminalSceneComponent___c__DisplayClass176_0___LoadAsync_b__8(
        TerminalSceneComponent___c__DisplayClass176_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadCommandCodeMini = 1;
}


void __fastcall TerminalSceneComponent___c__DisplayClass176_0___LoadAsync_b__9(
        TerminalSceneComponent___c__DisplayClass176_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadEventAtlas = 1;
}


void __fastcall TerminalSceneComponent___c__DisplayClass187_0___ctor(
        TerminalSceneComponent___c__DisplayClass187_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass187_0___SetupStandServant_b__0(
        TerminalSceneComponent___c__DisplayClass187_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass187_0_o *v2; // x19
  struct TerminalSceneComponent_o *_4__this; // x8

  v2 = this;
  if ( this->fields.isSlideIn )
  {
    _4__this = this->fields.__4__this;
    if ( !_4__this
      || (this = (TerminalSceneComponent___c__DisplayClass187_0_o *)_4__this->fields.mTerminalServant) == 0LL )
    {
      sub_1BCAA3C(this, method);
    }
    StandFigureSlideComponent__SlideIn((StandFigureSlideComponent_o *)this, 0LL, 0LL);
  }
  ActionExtensions__Call(v2->fields.endAction, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass187_0___SetupStandServant_b__1(
        TerminalSceneComponent___c__DisplayClass187_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalSceneComponent___c__DisplayClass187_0_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct TerminalSceneComponent_o *_4__this; // x8
  struct TerminalSceneComponent_o *v11; // x8
  __int64 v12; // x2
  __int64 v13; // x3
  long double v14; // q0
  struct TerminalSceneComponent_o *v15; // x8
  struct StandFigureSlideComponent_o *mTerminalServant; // x9
  struct BaseCore_o *mEarthCore; // x8
  __int64 v18; // x20
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  UserServantEntity_o *NextStandServant; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  __int64 v32; // x2
  long double inited; // q0
  struct TerminalSceneComponent_o *v34; // x8
  int32_t mStandSvtIdx; // w22
  struct TerminalSceneComponent_o *v36; // x8
  struct BaseCore_o *v37; // x22
  __int64 v38; // x2
  __int64 v39; // x3
  struct TerminalSceneComponent_o *v40; // x8
  StandFigureSlideComponent_o *v41; // x19
  System_Action_o *v42; // x21
  struct TerminalSceneComponent_o *v43; // x8
  struct BaseCore_o *v44; // x21
  struct TerminalSceneComponent_o *v45; // x8

  v3 = this;
  if ( (byte_4B18309 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__DisplayClass187_1__SetupStandServant_b__2__, v6, v7);
    this = (TerminalSceneComponent___c__DisplayClass187_0_o *)sub_1BCA7E0(
                                                                &TerminalSceneComponent___c__DisplayClass187_1_TypeInfo,
                                                                v8,
                                                                v9);
    byte_4B18309 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_54;
  this = (TerminalSceneComponent___c__DisplayClass187_0_o *)_4__this->fields.mTerminalServant;
  if ( !this )
    goto LABEL_54;
  if ( !BYTE1(this[1].fields.__4__this) )
  {
    this = (TerminalSceneComponent___c__DisplayClass187_0_o *)StandFigureSlideComponent__IsMoving(
                                                                (StandFigureSlideComponent_o *)this,
                                                                0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v11 = v3->fields.__4__this;
      if ( !v11 )
        goto LABEL_54;
      this = (TerminalSceneComponent___c__DisplayClass187_0_o *)v11->fields.mEarthCore;
      if ( !this )
        goto LABEL_54;
      if ( !BYTE1(this[3].fields.__4__this) )
      {
        *(float *)&v14 = ((float (__fastcall *)(TerminalSceneComponent___c__DisplayClass187_0_o *, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
                           this,
                           this->klass[1]._1.interfaceOffsets);
        if ( *(float *)&v14 >= 0.0 && *(float *)&v14 <= 0.0 )
        {
          v15 = v3->fields.__4__this;
          if ( !v15 )
            goto LABEL_54;
          mTerminalServant = v15->fields.mTerminalServant;
          if ( !mTerminalServant )
            goto LABEL_54;
          mEarthCore = v15->fields.mEarthCore;
          if ( mTerminalServant->fields.mIsFrameIn )
          {
            if ( !mEarthCore )
              goto LABEL_54;
            if ( !mEarthCore->fields.mIsFocusIn )
            {
              v18 = sub_1BCAA2C(TerminalSceneComponent___c__DisplayClass187_1_TypeInfo, method, v12, v13);
              System_Object___ctor((Il2CppObject *)v18, 0LL);
              if ( v18 )
              {
                *(_QWORD *)(v18 + 24) = v3;
                sub_1BCA784((PartyOrganizationUtility_o *)(v18 + 24), (int64_t)v3, v19, v20, v21, v22, v23, v24);
                this = (TerminalSceneComponent___c__DisplayClass187_0_o *)v3->fields.__4__this;
                if ( this )
                {
                  NextStandServant = TerminalSceneComponent__GetNextStandServant(
                                       (TerminalSceneComponent_o *)this,
                                       method);
                  *(_QWORD *)(v18 + 16) = NextStandServant;
                  sub_1BCA784(
                    (PartyOrganizationUtility_o *)(v18 + 16),
                    (int64_t)NextStandServant,
                    v26,
                    v27,
                    v28,
                    v29,
                    v30,
                    v31);
                  v34 = v3->fields.__4__this;
                  if ( v34 )
                  {
                    mStandSvtIdx = v34->fields.mStandSvtIdx;
                    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                      inited = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
                    if ( !byte_4B18380 )
                    {
                      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v32);
                      byte_4B18380 = 1;
                    }
                    this = (TerminalSceneComponent___c__DisplayClass187_0_o *)TerminalPramsManager_TypeInfo;
                    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                    {
                      inited = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
                      this = (TerminalSceneComponent___c__DisplayClass187_0_o *)TerminalPramsManager_TypeInfo;
                    }
                    BYTE2(this[4].fields.__4__this->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.x) = mStandSvtIdx != 0;
                    v36 = v3->fields.__4__this;
                    if ( v36 )
                    {
                      v37 = v36->fields.mEarthCore;
                      if ( !byte_4B1336D )
                      {
                        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v32);
                        this = (TerminalSceneComponent___c__DisplayClass187_0_o *)TerminalPramsManager_TypeInfo;
                        byte_4B1336D = 1;
                      }
                      if ( !LODWORD(this[5].fields.__4__this) )
                      {
                        inited = j_il2cpp_runtime_class_init_0(this, method);
                        this = (TerminalSceneComponent___c__DisplayClass187_0_o *)TerminalPramsManager_TypeInfo;
                      }
                      if ( v37 )
                      {
                        this = (TerminalSceneComponent___c__DisplayClass187_0_o *)((__int64 (__fastcall *)(struct BaseCore_o *, bool, _QWORD, Il2CppMethodPointer, long double))v37->klass->vtable._4_FocusInOut.method)(
                                                                                    v37,
                                                                                    BYTE2(this[4].fields.__4__this->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.x) == 0,
                                                                                    0LL,
                                                                                    v37->klass->vtable._5_Awake.methodPtr,
                                                                                    inited);
                        v40 = v3->fields.__4__this;
                        if ( v40 )
                        {
                          v41 = v40->fields.mTerminalServant;
                          v42 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v38, v39);
                          System_Action___ctor(
                            v42,
                            (Il2CppObject *)v18,
                            Method_TerminalSceneComponent___c__DisplayClass187_1__SetupStandServant_b__2__,
                            0LL);
                          if ( v41 )
                          {
                            StandFigureSlideComponent__SlideOut(v41, v42, 0, 0LL);
LABEL_53:
                            TerminalPramsManager__PlaySystemSE(0, 0LL);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
              goto LABEL_54;
            }
          }
          else
          {
            if ( !mEarthCore )
              goto LABEL_54;
            if ( mEarthCore->fields.mIsFocusIn )
            {
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                v14 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
              if ( !byte_4B18380 )
              {
                sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v12);
                byte_4B18380 = 1;
              }
              this = (TerminalSceneComponent___c__DisplayClass187_0_o *)TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                v14 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
                this = (TerminalSceneComponent___c__DisplayClass187_0_o *)TerminalPramsManager_TypeInfo;
              }
              BYTE2(this[4].fields.__4__this->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.x) = 1;
              v43 = v3->fields.__4__this;
              if ( v43 )
              {
                v44 = v43->fields.mEarthCore;
                if ( !byte_4B1336D )
                {
                  sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v12);
                  this = (TerminalSceneComponent___c__DisplayClass187_0_o *)TerminalPramsManager_TypeInfo;
                  byte_4B1336D = 1;
                }
                if ( !LODWORD(this[5].fields.__4__this) )
                {
                  v14 = j_il2cpp_runtime_class_init_0(this, method);
                  this = (TerminalSceneComponent___c__DisplayClass187_0_o *)TerminalPramsManager_TypeInfo;
                }
                if ( v44 )
                {
                  this = (TerminalSceneComponent___c__DisplayClass187_0_o *)((__int64 (__fastcall *)(struct BaseCore_o *, bool, _QWORD, Il2CppMethodPointer, long double))v44->klass->vtable._4_FocusInOut.method)(
                                                                              v44,
                                                                              BYTE2(this[4].fields.__4__this->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.x) == 0,
                                                                              0LL,
                                                                              v44->klass->vtable._5_Awake.methodPtr,
                                                                              v14);
                  v45 = v3->fields.__4__this;
                  if ( v45 )
                  {
                    this = (TerminalSceneComponent___c__DisplayClass187_0_o *)v45->fields.mTerminalServant;
                    if ( this )
                    {
                      StandFigureSlideComponent__SlideIn((StandFigureSlideComponent_o *)this, 0LL, 0LL);
                      goto LABEL_53;
                    }
                  }
                }
              }
LABEL_54:
              sub_1BCAA3C(this, method);
            }
          }
        }
      }
    }
  }
}


void __fastcall TerminalSceneComponent___c__DisplayClass187_1___ctor(
        TerminalSceneComponent___c__DisplayClass187_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass187_1___SetupStandServant_b__2(
        TerminalSceneComponent___c__DisplayClass187_1_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x4
  TerminalSceneComponent___c__DisplayClass187_1_o *v4; // x20
  struct TerminalSceneComponent___c__DisplayClass187_0_o *CS___8__locals1; // x8
  TerminalSceneComponent_o *_4__this; // x19
  UserServantEntity_o *usd; // x20

  v4 = this;
  if ( (byte_4B1830A & 1) == 0 )
  {
    this = (TerminalSceneComponent___c__DisplayClass187_1_o *)sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B1830A = 1;
  }
  CS___8__locals1 = v4->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_12;
  _4__this = CS___8__locals1->fields.__4__this;
  usd = v4->fields._usd;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_4B1336D )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B1336D = 1;
  }
  this = (TerminalSceneComponent___c__DisplayClass187_1_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    this = (TerminalSceneComponent___c__DisplayClass187_1_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !_4__this )
LABEL_12:
    sub_1BCAA3C(this, method);
  TerminalSceneComponent__SetupStandServant(_4__this, usd, BYTE2(this[5].fields.CS___8__locals1[2].monitor), 0LL, v3);
}


void __fastcall TerminalSceneComponent___c__DisplayClass193_0___ctor(
        TerminalSceneComponent___c__DisplayClass193_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass193_0___coFadein_WorldDisp_b__0(
        TerminalSceneComponent___c__DisplayClass193_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalSceneComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(0LL, method);
  TerminalSceneComponent__StartWindowMessage(_4__this, 0LL, v2);
}


void __fastcall TerminalSceneComponent___c__DisplayClass193_0___coFadein_WorldDisp_b__1(
        TerminalSceneComponent___c__DisplayClass193_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.endAct, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass193_0___coFadein_WorldDisp_b__2(
        TerminalSceneComponent___c__DisplayClass193_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  TerminalSceneComponent___c__DisplayClass193_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *_9__3; // x22
  TerminalSceneComponent_o *_4__this; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  v4 = this;
  if ( (byte_4B1830B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    this = (TerminalSceneComponent___c__DisplayClass193_0_o *)sub_1BCA7E0(
                                                                &Method_TerminalSceneComponent___c__DisplayClass193_0__coFadein_WorldDisp_b__3__,
                                                                v5,
                                                                v6);
    byte_4B1830B = 1;
  }
  _9__3 = v4->fields.__9__3;
  _4__this = v4->fields.__4__this;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)v4,
      Method_TerminalSceneComponent___c__DisplayClass193_0__coFadein_WorldDisp_b__3__,
      0LL);
    v4->fields.__9__3 = _9__3;
    sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.__9__3, (int64_t)_9__3, v9, v10, v11, v12, v13, v14);
  }
  if ( !_4__this )
    sub_1BCAA3C(this, method);
  TerminalSceneComponent__StartWindowMessage(_4__this, _9__3, v2);
}


void __fastcall TerminalSceneComponent___c__DisplayClass193_0___coFadein_WorldDisp_b__3(
        TerminalSceneComponent___c__DisplayClass193_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.endAct, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass194_0___ctor(
        TerminalSceneComponent___c__DisplayClass194_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass194_0___Fadein_MapDisp_b__0(
        TerminalSceneComponent___c__DisplayClass194_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct TerminalSceneComponent_o *_4__this; // x0
  struct TerminalSceneComponent_o *v5; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (TerminalSceneComponent__Fadein_MapDisp_Load(
          _4__this,
          _4__this->fields._FirstFadeTime_k__BackingField,
          this->fields.end_act,
          v2),
        (v5 = this->fields.__4__this) == 0LL) )
  {
    sub_1BCAA3C(_4__this, method);
  }
  v5->fields._FirstFadeTime_k__BackingField = 0.0;
}


void __fastcall TerminalSceneComponent___c__DisplayClass195_0___ctor(
        TerminalSceneComponent___c__DisplayClass195_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass195_0___Fadein_MapDisp_Load_b__0(
        TerminalSceneComponent___c__DisplayClass195_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1BCAA3C(this, method);
  TerminalSceneComponent__Fadein_MapDisp_Start(this->fields.__4__this, this->fields.fade_time, this->fields.end_act, v2);
}


void __fastcall TerminalSceneComponent___c__DisplayClass196_0___ctor(
        TerminalSceneComponent___c__DisplayClass196_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass196_0___Fadein_MapDisp_Start_b__2(
        TerminalSceneComponent___c__DisplayClass196_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct WarEntity_o *war_dat; // x8

  war_dat = this->fields.war_dat;
  if ( !war_dat || (this = (TerminalSceneComponent___c__DisplayClass196_0_o *)this->fields.__4__this) == 0LL )
    sub_1BCAA3C(this, action);
  TerminalSceneComponent__StartEventDailyPoint((TerminalSceneComponent_o *)this, war_dat->fields.eventId, action, v3);
}


void __fastcall TerminalSceneComponent___c__DisplayClass196_0___Fadein_MapDisp_Start_b__3(
        TerminalSceneComponent___c__DisplayClass196_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  struct WarEntity_o *war_dat; // x9

  war_dat = this->fields.war_dat;
  if ( !war_dat || !this->fields.__4__this )
    sub_1BCAA3C(this, method);
  TerminalSceneComponent__FadeInAndTriggerEventEffects(
    this->fields.__4__this,
    this->fields.fade_time,
    war_dat->fields.eventId,
    this->fields.end_act,
    v2);
}


void __fastcall TerminalSceneComponent___c__DisplayClass196_0___Fadein_MapDisp_Start_b__4(
        TerminalSceneComponent___c__DisplayClass196_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_o *_4__this; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (mTerminalList = _4__this->fields.mTerminalList) == 0LL
    || (this = (TerminalSceneComponent___c__DisplayClass196_0_o *)mTerminalList->fields.mQuestBoardListViewManager) == 0LL )
  {
    sub_1BCAA3C(this, action);
  }
  QuestBoardListViewManager__SetMode((QuestBoardListViewManager_o *)this, 4, action, 0, 0, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass196_0___Fadein_MapDisp_Start_b__5(
        TerminalSceneComponent___c__DisplayClass196_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass196_0_o *v4; // x20
  struct TerminalSceneComponent_o *_4__this; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8

  v4 = this;
  if ( (byte_4B1830C & 1) == 0 )
  {
    this = (TerminalSceneComponent___c__DisplayClass196_0_o *)sub_1BCA7E0(
                                                                &Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__,
                                                                action,
                                                                method);
    byte_4B1830C = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this
    || (mTerminalMap = _4__this->fields.mTerminalMap) == 0LL
    || (this = (TerminalSceneComponent___c__DisplayClass196_0_o *)mTerminalMap->fields.spotMaskObj) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL),
        (this = (TerminalSceneComponent___c__DisplayClass196_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__)) == 0LL) )
  {
    sub_1BCAA3C(this, action);
  }
  QuestAfterAction__LoadVoice((QuestAfterAction_o *)this, action, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass196_1___ctor(
        TerminalSceneComponent___c__DisplayClass196_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass196_1___Fadein_MapDisp_Start_b__7(
        TerminalSceneComponent___c__DisplayClass196_1_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_GameObject_o *IsNullOrEmpty; // x0
  __int64 v9; // x8
  __int64 v10; // x8
  __int64 v11; // x1
  __int64 v12; // x2
  TerminalPramsManager_c *v13; // x0
  const MethodInfo *v14; // x2
  __int64 v15; // x2
  Il2CppObject *Instance; // x19
  struct TerminalSceneComponent___c__DisplayClass196_0_o *CS___8__locals1; // x8

  if ( (byte_4B1830D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method, v2);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v6, v7);
    byte_4B1830D = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, method, v2);
    byte_4B10F83 = 1;
  }
  IsNullOrEmpty = (UnityEngine_GameObject_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
    IsNullOrEmpty = (UnityEngine_GameObject_o *)TerminalSceneComponent_TypeInfo;
  }
  v9 = **(_QWORD **)&IsNullOrEmpty[7].fields.m_CachedPtr;
  if ( !v9 )
    goto LABEL_30;
  v10 = *(_QWORD *)(v9 + 264);
  if ( !v10 )
    goto LABEL_30;
  IsNullOrEmpty = *(UnityEngine_GameObject_o **)(v10 + 552);
  if ( !IsNullOrEmpty )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive(IsNullOrEmpty, this->fields.oldActive, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11);
  if ( !byte_4B18384 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v11, v12);
    byte_4B18384 = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11);
    v13 = TerminalPramsManager_TypeInfo;
  }
  IsNullOrEmpty = (UnityEngine_GameObject_o *)System_String__IsNullOrEmpty(
                                                v13->static_fields->_QuestWindowMessage_k__BackingField,
                                                0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    if ( !byte_4B18386 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v15);
      byte_4B18386 = 1;
    }
    IsNullOrEmpty = (UnityEngine_GameObject_o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
      IsNullOrEmpty = (UnityEngine_GameObject_o *)TerminalPramsManager_TypeInfo;
    }
    if ( Instance )
    {
      AvalonSceneManager__transitionScene(
        (AvalonSceneManager_o *)Instance,
        40,
        1,
        *(Il2CppObject **)(*(_QWORD *)&IsNullOrEmpty[7].fields.m_CachedPtr + 120LL),
        0LL);
      return;
    }
LABEL_30:
    sub_1BCAA3C(IsNullOrEmpty, method);
  }
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_30;
  IsNullOrEmpty = (UnityEngine_GameObject_o *)CS___8__locals1->fields.__4__this;
  if ( !IsNullOrEmpty )
    goto LABEL_30;
  TerminalSceneComponent__StartWindowMessage((TerminalSceneComponent_o *)IsNullOrEmpty, 0LL, v14);
}


void __fastcall TerminalSceneComponent___c__DisplayClass199_0___ctor(
        TerminalSceneComponent___c__DisplayClass199_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass199_0___FadeInAndTriggerEventEffects_b__0(
        TerminalSceneComponent___c__DisplayClass199_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Action_o *_9__2; // x21
  CommonUI_o *v13; // x20
  float fadeTime; // s8
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4B1830E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__DisplayClass199_0__FadeInAndTriggerEventEffects_b__2__, v6, v7);
    byte_4B1830E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v13 = (CommonUI_o *)Instance;
  fadeTime = this->fields.fadeTime;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v9, v10, v11);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent___c__DisplayClass199_0__FadeInAndTriggerEventEffects_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v15, v16, v17, v18, v19, v20);
  }
  if ( !v13 )
    sub_1BCAA3C(Instance, v9);
  CommonUI__maskFadein(v13, fadeTime, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass199_0___FadeInAndTriggerEventEffects_b__1(
        TerminalSceneComponent___c__DisplayClass199_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( !this->fields.__4__this )
    sub_1BCAA3C(this, method);
  TerminalSceneComponent__FadeInAndTriggerEventEffectsNext(
    this->fields.__4__this,
    this->fields.eventId,
    this->fields.callback,
    v2);
}


void __fastcall TerminalSceneComponent___c__DisplayClass199_0___FadeInAndTriggerEventEffects_b__2(
        TerminalSceneComponent___c__DisplayClass199_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Action_o *_9__3; // x22
  QuestAfterAction_o *v13; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B1830F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__DisplayClass199_0__FadeInAndTriggerEventEffects_b__3__, v6, v7);
    byte_4B1830F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  _9__3 = this->fields.__9__3;
  v13 = (QuestAfterAction_o *)Instance;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v9, v10, v11);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent___c__DisplayClass199_0__FadeInAndTriggerEventEffects_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__3, (int64_t)_9__3, v14, v15, v16, v17, v18, v19);
  }
  if ( !v13 )
    sub_1BCAA3C(Instance, v9);
  QuestAfterAction__Play(v13, _9__3, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass199_0___FadeInAndTriggerEventEffects_b__3(
        TerminalSceneComponent___c__DisplayClass199_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( !this->fields.__4__this )
    sub_1BCAA3C(this, method);
  TerminalSceneComponent__FadeInAndTriggerEventEffectsNext(
    this->fields.__4__this,
    this->fields.eventId,
    this->fields.callback,
    v2);
}


void __fastcall TerminalSceneComponent___c__DisplayClass199_0___FadeInAndTriggerEventEffects_b__4(
        TerminalSceneComponent___c__DisplayClass199_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( !this->fields.__4__this )
    sub_1BCAA3C(this, method);
  TerminalSceneComponent__FadeInAndTriggerEventEffectsNext(
    this->fields.__4__this,
    this->fields.eventId,
    this->fields.callback,
    v2);
}


void __fastcall TerminalSceneComponent___c__DisplayClass202_0___ctor(
        TerminalSceneComponent___c__DisplayClass202_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass202_0___FadeInAndTriggerEventEffectsNext_b__0(
        TerminalSceneComponent___c__DisplayClass202_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_o *_4__this; // x8
  TitleInfoControl_o *mTitleInfo; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (mTitleInfo = _4__this->fields.mTitleInfo) == 0LL )
    sub_1BCAA3C(this, method);
  TitleInfoControl__CheckSuperBossHpAnim(mTitleInfo, this->fields.callback, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass202_0___FadeInAndTriggerEventEffectsNext_b__1(
        TerminalSceneComponent___c__DisplayClass202_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  TerminalSceneComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(0LL, method);
  TerminalSceneComponent__SetActionBGColl(_4__this, 0, this->fields.callback, v2);
}


void __fastcall TerminalSceneComponent___c__DisplayClass231_0___ctor(
        TerminalSceneComponent___c__DisplayClass231_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass231_0___PlayEventTutorial_b__0(
        TerminalSceneComponent___c__DisplayClass231_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  TerminalSceneComponent___c__DisplayClass231_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *_9__1; // x22
  TerminalSceneComponent_o *_4__this; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  v4 = this;
  if ( (byte_4B18310 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    this = (TerminalSceneComponent___c__DisplayClass231_0_o *)sub_1BCA7E0(
                                                                &Method_TerminalSceneComponent___c__DisplayClass231_0__PlayEventTutorial_b__1__,
                                                                v5,
                                                                v6);
    byte_4B18310 = 1;
  }
  _9__1 = v4->fields.__9__1;
  _4__this = v4->fields.__4__this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_TerminalSceneComponent___c__DisplayClass231_0__PlayEventTutorial_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.__9__1, (int64_t)_9__1, v9, v10, v11, v12, v13, v14);
  }
  if ( !_4__this )
    sub_1BCAA3C(this, method);
  TerminalSceneComponent__PlayEventTutorialWithoutAfterAction(_4__this, _9__1, v2);
}


void __fastcall TerminalSceneComponent___c__DisplayClass231_0___PlayEventTutorial_b__1(
        TerminalSceneComponent___c__DisplayClass231_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_o *_4__this; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  TerminalSceneComponent___c__DisplayClass231_0_o *v4; // x19

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (mTerminalList = _4__this->fields.mTerminalList) == 0LL
    || (v4 = this, (this = (TerminalSceneComponent___c__DisplayClass231_0_o *)mTerminalList->fields.mActionBgColl) == 0LL)
    || (this = (TerminalSceneComponent___c__DisplayClass231_0_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)this,
                                                                    0LL)) == 0LL )
  {
    sub_1BCAA3C(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  ActionExtensions__Call(v4->fields.callbackAfter, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass249_0___ctor(
        TerminalSceneComponent___c__DisplayClass249_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass249_0___CheckRewardPopupChain_b__0(
        TerminalSceneComponent___c__DisplayClass249_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Int32_array *Instance; // x0
  const MethodInfo *v10; // x1
  struct TerminalSceneComponent_o *_4__this; // x8
  CommonUI_o *v12; // x21

  if ( (byte_4B18311 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_DialogMessageMaster___, action, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B18311 = 1;
  }
  Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v12 = (CommonUI_o *)Instance, (Instance = (System_Int32_array *)_4__this->fields.mTerminalList) == 0LL)
    || (Instance = ScrTerminalListTop__PopEventSvtGets((ScrTerminalListTop_o *)Instance, 0LL), !v12)
    || (CommonUI__SetupLoginResultData(v12, Instance, 0LL), !this->fields.__4__this)
    || (TerminalSceneComponent__SaveCommonUICampaignDirectBonus((TerminalSceneComponent_o *)Instance, v10),
        (Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (System_Int32_array *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_DialogMessageMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v10);
  }
  DialogMessageMaster__ShowAvailables((DialogMessageMaster_o *)Instance, 1, action, 0, 0, 0, 0, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass249_0___CheckRewardPopupChain_b__1(
        TerminalSceneComponent___c__DisplayClass249_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  System_Action_o *_9__5; // x22
  CommonUI_o *v14; // x21
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4B18312 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, action, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__DisplayClass249_0__CheckRewardPopupChain_b__5__, v7, v8);
    byte_4B18312 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__5 = this->fields.__9__5;
  v14 = (CommonUI_o *)Instance;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent___c__DisplayClass249_0__CheckRewardPopupChain_b__5__,
      0LL);
    this->fields.__9__5 = _9__5;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__5, (int64_t)_9__5, v15, v16, v17, v18, v19, v20);
  }
  if ( !v14 )
    sub_1BCAA3C(Instance, v10);
  CommonUI__StartLoginAndCampaignBonus(v14, action, _9__5, -1, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass249_0___CheckRewardPopupChain_b__3(
        TerminalSceneComponent___c__DisplayClass249_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (this = (TerminalSceneComponent___c__DisplayClass249_0_o *)_4__this->fields.mTerminalList) == 0LL )
    sub_1BCAA3C(this, action);
  ScrTerminalListTop__CheckLoginAfterTransitionDialog((ScrTerminalListTop_o *)this, action, 100, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass249_0___CheckRewardPopupChain_b__4(
        TerminalSceneComponent___c__DisplayClass249_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  TerminalPramsManager_c *v16; // x0
  TerminalPramsManager_c *v17; // x0
  int32_t EventID; // w20
  void *Master_object; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x2
  __int64 v22; // x3
  TerminalPramsManager_c *v23; // x0
  TerminalSceneComponent_o *_4__this; // x20
  System_Action_o *v25; // x21
  Il2CppObject *v26; // x22
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B18313 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventDetailMaster___, v4, v5);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v8, v9);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__CheckRewardPopupChain_b__249_6__, v12, v13);
    sub_1BCA7E0(&TerminalSceneComponent___c_TypeInfo, v14, v15);
    byte_4B18313 = 1;
  }
  entity = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_4B12DC6 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B12DC6 = 1;
  }
  v16 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v16 = TerminalPramsManager_TypeInfo;
  }
  if ( v16->static_fields->_WarId_k__BackingField < 1 )
  {
    EventID = -1;
  }
  else
  {
    if ( !v16->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v16, method);
    if ( !byte_4B12DC6 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
      byte_4B12DC6 = 1;
    }
    v17 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
      v17 = TerminalPramsManager_TypeInfo;
    }
    EventID = WarMaster__getEventID(v17->static_fields->_WarId_k__BackingField, 0LL);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !Master_object )
    goto LABEL_39;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
    &entity,
    EventID,
    (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v20);
  if ( !byte_4B12FA7 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v20, v21);
    byte_4B12FA7 = 1;
  }
  v23 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v20);
    v23 = TerminalPramsManager_TypeInfo;
  }
  if ( v23->static_fields->_SpotId_k__BackingField < 1
    || !entity
    || !EventDetailEntity__IsMakeFarm((EventDetailEntity_o *)entity, 0LL) )
  {
    _4__this = this->fields.__4__this;
    Master_object = TerminalSceneComponent___c_TypeInfo;
    if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo, v20);
      Master_object = TerminalSceneComponent___c_TypeInfo;
    }
    v25 = *(System_Action_o **)(*((_QWORD *)Master_object + 23) + 120LL);
    if ( !v25 )
    {
      if ( !*((_DWORD *)Master_object + 56) )
      {
        j_il2cpp_runtime_class_init_0(Master_object, v20);
        Master_object = TerminalSceneComponent___c_TypeInfo;
      }
      v26 = (Il2CppObject *)**((_QWORD **)Master_object + 23);
      v25 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v20, v21, v22);
      System_Action___ctor(v25, v26, Method_TerminalSceneComponent___c__CheckRewardPopupChain_b__249_6__, 0LL);
      static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
      static_fields->__9__249_6 = v25;
      sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__249_6, (int64_t)v25, v28, v29, v30, v31, v32, v33);
    }
    if ( _4__this )
    {
      TerminalSceneComponent__CheckOpenCampaignDirectBonus(_4__this, v25, v21);
      goto LABEL_38;
    }
LABEL_39:
    sub_1BCAA3C(Master_object, v20);
  }
LABEL_38:
  ActionExtensions__Call(this->fields.afterChain, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass249_0___CheckRewardPopupChain_b__5(
        TerminalSceneComponent___c__DisplayClass249_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (this = (TerminalSceneComponent___c__DisplayClass249_0_o *)_4__this->fields.mPlayerStatus) == 0LL )
    sub_1BCAA3C(this, method);
  ScrPlayerStatus__mfInitUserData((ScrPlayerStatus_o *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass251_0___ctor(
        TerminalSceneComponent___c__DisplayClass251_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass251_0___CheckOpenCampaignDirectBonus_b__2(
        TerminalSceneComponent___c__DisplayClass251_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  TerminalSceneComponent___c__DisplayClass251_0_o *v8; // x19
  struct TerminalSceneComponent_o *_4__this; // x8
  TerminalPramsManager_c *v10; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  v8 = this;
  if ( (byte_4B18314 & 1) == 0 )
  {
    this = (TerminalSceneComponent___c__DisplayClass251_0_o *)sub_1BCA7E0(
                                                                &TerminalPramsManager_TypeInfo,
                                                                action,
                                                                method);
    byte_4B18314 = 1;
  }
  _4__this = v8->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(this, action);
  _4__this->fields._IsPlayingCampaignDirectBonus_k__BackingField = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, action);
  if ( !byte_4B13809 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, action, method);
    byte_4B13809 = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, action);
    v10 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v10->static_fields;
  static_fields->_CampaignDirectBonus_k__BackingField = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->_CampaignDirectBonus_k__BackingField,
    0LL,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  TerminalPramsManager__CampaignDirectBonus_SaveData(0LL);
  ActionExtensions__Call(v8->fields.callback, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass258_0___ctor(
        TerminalSceneComponent___c__DisplayClass258_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass258_0___CheckSaveRouteSelect_b__0(
        TerminalSceneComponent___c__DisplayClass258_0_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  if ( (byte_4B18315 & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptManager_TypeInfo, str, method);
    byte_4B18315 = 1;
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, str);
  ScriptManager__ClearSelectRouteArray(0LL);
  ScriptManager__ClearSelectRouteArrayInCollection(0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass260_0___ctor(
        TerminalSceneComponent___c__DisplayClass260_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalSceneComponent___c__DisplayClass260_0___CheckMasterMissionReset_b__0(
        TerminalSceneComponent___c__DisplayClass260_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x20
  __int64 v15; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  __int64 v23; // x1
  TerminalSceneComponent_c *v24; // x0
  System_String_o *MASTER_MISSION_RESET_KEY; // x21
  System_String_o *v26; // x0
  Il2CppObject *Instance; // x19
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  System_Action_o *v31; // x21

  if ( (byte_4B18316 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__DisplayClass260_1__CheckMasterMissionReset_b__1__, v10, v11);
    sub_1BCA7E0(&TerminalSceneComponent___c__DisplayClass260_1_TypeInfo, v12, v13);
    byte_4B18316 = 1;
  }
  v14 = sub_1BCAA2C(TerminalSceneComponent___c__DisplayClass260_1_TypeInfo, isDecide, method, v3);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_8;
  *(_QWORD *)(v14 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 24), (int64_t)this, v17, v18, v19, v20, v21, v22);
  *(_BYTE *)(v14 + 16) = isDecide;
  v24 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v23);
    v24 = TerminalSceneComponent_TypeInfo;
  }
  MASTER_MISSION_RESET_KEY = v24->static_fields->MASTER_MISSION_RESET_KEY;
  v26 = System_Int64__ToString((int64_t)&this->fields, 0LL);
  UnityEngine_PlayerPrefs__SetString(MASTER_MISSION_RESET_KEY, v26, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v31 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v28, v29, v30);
  System_Action___ctor(
    v31,
    (Il2CppObject *)v14,
    Method_TerminalSceneComponent___c__DisplayClass260_1__CheckMasterMissionReset_b__1__,
    0LL);
  if ( !Instance )
LABEL_8:
    sub_1BCAA3C(v15, v16);
  CommonUI__CloseConfirmDialog_30766896((CommonUI_o *)Instance, v31, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass260_0___CheckMasterMissionReset_b__2(
        TerminalSceneComponent___c__DisplayClass260_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_o *_4__this; // x8
  ScrPlayerStatus_o *mPlayerStatus; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (mPlayerStatus = _4__this->fields.mPlayerStatus) == 0LL )
    sub_1BCAA3C(this, method);
  ScrPlayerStatus__OpenMasterMission(mPlayerStatus, this->fields.callback, -1, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass260_1___ctor(
        TerminalSceneComponent___c__DisplayClass260_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass260_1___CheckMasterMissionReset_b__1(
        TerminalSceneComponent___c__DisplayClass260_1_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalSceneComponent___c__DisplayClass260_1_o *v3; // x20
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x2
  __int64 v11; // x3
  AvalonSceneManager_c *v12; // x8
  CommonUI_o *v13; // x19
  struct TerminalSceneComponent___c__DisplayClass260_0_o *CS___8__locals1; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__2; // x21
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct TerminalSceneComponent___c__DisplayClass260_0_o *v23; // x8

  v3 = this;
  if ( (byte_4B18317 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    this = (TerminalSceneComponent___c__DisplayClass260_1_o *)sub_1BCA7E0(
                                                                &Method_TerminalSceneComponent___c__DisplayClass260_0__CheckMasterMissionReset_b__2__,
                                                                v8,
                                                                v9);
    byte_4B18317 = 1;
  }
  if ( v3->fields.isDecide )
  {
    this = (TerminalSceneComponent___c__DisplayClass260_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = AvalonSceneManager_TypeInfo;
    v13 = (CommonUI_o *)this;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, method);
      v12 = AvalonSceneManager_TypeInfo;
    }
    CS___8__locals1 = v3->fields.CS___8__locals1;
    if ( CS___8__locals1 )
    {
      DEFAULT_FADE_TIME = v12->static_fields->DEFAULT_FADE_TIME;
      _9__2 = CS___8__locals1->fields.__9__2;
      if ( !_9__2 )
      {
        _9__2 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v10, v11);
        System_Action___ctor(
          _9__2,
          (Il2CppObject *)CS___8__locals1,
          Method_TerminalSceneComponent___c__DisplayClass260_0__CheckMasterMissionReset_b__2__,
          0LL);
        CS___8__locals1->fields.__9__2 = _9__2;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&CS___8__locals1->fields.__9__2,
          (int64_t)_9__2,
          v17,
          v18,
          v19,
          v20,
          v21,
          v22);
      }
      if ( v13 )
      {
        CommonUI__maskFadeout(v13, 1, DEFAULT_FADE_TIME, _9__2, 0LL);
        return;
      }
    }
LABEL_13:
    sub_1BCAA3C(this, method);
  }
  v23 = v3->fields.CS___8__locals1;
  if ( !v23 )
    goto LABEL_13;
  ActionExtensions__Call(v23->fields.callback, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass261_0___ctor(
        TerminalSceneComponent___c__DisplayClass261_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass261_0___CheckNotificationDialog_b__0(
        TerminalSceneComponent___c__DisplayClass261_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleResultBondsComponent_c *v4; // x0

  if ( (byte_4B18318 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleResultBondsComponent_TypeInfo, method, v2);
    byte_4B18318 = 1;
  }
  v4 = BattleResultBondsComponent_TypeInfo;
  if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo, method);
    v4 = BattleResultBondsComponent_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v4->static_fields->GET_EXIST_SVT_KEY, 0LL);
  ActionExtensions__Call(this->fields.callBack, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass261_0___CheckNotificationDialog_b__2(
        TerminalSceneComponent___c__DisplayClass261_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleResultBondsComponent_c *v4; // x0

  if ( (byte_4B18319 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleResultBondsComponent_TypeInfo, method, v2);
    byte_4B18319 = 1;
  }
  v4 = BattleResultBondsComponent_TypeInfo;
  if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo, method);
    v4 = BattleResultBondsComponent_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v4->static_fields->GET_EXIST_SVT_KEY, 0LL);
  ActionExtensions__Call(this->fields.callBack, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass261_1___ctor(
        TerminalSceneComponent___c__DisplayClass261_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass261_1___CheckNotificationDialog_b__1(
        TerminalSceneComponent___c__DisplayClass261_1_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  struct TerminalSceneComponent___c__DisplayClass261_0_o *CS___8__locals1; // x21
  GetSvtCoin_array *coin; // x20
  System_Action_o *_9__2; // x22
  CommonUI_o *v15; // x19
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B1831A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__DisplayClass261_0__CheckNotificationDialog_b__2__, v6, v7);
    byte_4B1831A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  coin = this->fields.coin;
  _9__2 = CS___8__locals1->fields.__9__2;
  v15 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v9, v10, v11);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)CS___8__locals1,
      Method_TerminalSceneComponent___c__DisplayClass261_0__CheckNotificationDialog_b__2__,
      0LL);
    CS___8__locals1->fields.__9__2 = _9__2;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&CS___8__locals1->fields.__9__2,
      (int64_t)_9__2,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  if ( !v15 )
LABEL_8:
    sub_1BCAA3C(Instance, v9);
  CommonUI__CreateServantCoinConfirmDialog(v15, 1, coin, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent__coFadein_WorldDisp_d__193___ctor(
        TerminalSceneComponent__coFadein_WorldDisp_d__193_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall TerminalSceneComponent__coFadein_WorldDisp_d__193__MoveNext(
        TerminalSceneComponent__coFadein_WorldDisp_d__193_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  TerminalSceneComponent__coFadein_WorldDisp_d__193_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  int32_t _1__state; // w8
  struct TerminalSceneComponent_o *_4__this; // x20
  Il2CppObject *v35; // x22
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x1
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  Il2CppObject *endAct; // x1
  __int64 v56; // x2
  TerminalPramsManager_c *v57; // x0
  const MethodInfo *v58; // x1
  __int64 v59; // x2
  TerminalPramsManager_c *v60; // x0
  System_Collections_IEnumerator_o *v61; // x0
  System_Action_c *klass; // x8
  __int64 v63; // x8
  __int64 v64; // x2
  TerminalPramsManager_c *v65; // x0
  __int64 v66; // x1
  System_Collections_IEnumerator_o *v67; // x0
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  bool result; // w0
  __int64 v76; // x2
  Il2CppObject *Master_object; // x21
  System_String_o *ShowingFolderBGM; // x0
  const MethodInfo *v79; // x2
  __int64 v80; // x2
  const MethodInfo *v81; // x3
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x3
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v86; // x8
  Il2CppObject *v87; // x21
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v89; // x0
  __int64 *v90; // x8
  __int64 v91; // x2
  __int64 v92; // x3
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct ScrTerminalListTop_o *v94; // x8
  Il2CppObject *_8__1; // x19
  System_Action_o *v96; // x21
  const MethodInfo *v97; // x2
  __int64 v98; // x1
  __int64 v99; // x2
  __int64 v100; // x3
  AvalonSceneManager_c *v101; // x8
  System_Action_o *v102; // x19
  struct TerminalSceneComponent___c__DisplayClass193_0_o *v103; // x9
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_4B1831F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v11, v12);
    sub_1BCA7E0(&System_GC_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v17, v18);
    sub_1BCA7E0(&SoundManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__DisplayClass193_0__coFadein_WorldDisp_b__0__, v25, v26);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__DisplayClass193_0__coFadein_WorldDisp_b__1__, v27, v28);
    sub_1BCA7E0(&Method_TerminalSceneComponent___c__DisplayClass193_0__coFadein_WorldDisp_b__2__, v29, v30);
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__193_o *)sub_1BCA7E0(
                                                                    &TerminalSceneComponent___c__DisplayClass193_0_TypeInfo,
                                                                    v31,
                                                                    v32);
    byte_4B1831F = 1;
  }
  entity = 0LL;
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v4->fields.__1__state = -1;
    v35 = (Il2CppObject *)sub_1BCAA2C(TerminalSceneComponent___c__DisplayClass193_0_TypeInfo, method, v2, v3);
    System_Object___ctor(v35, 0LL);
    v4->fields.__8__1 = (struct TerminalSceneComponent___c__DisplayClass193_0_o *)v35;
    sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.__8__1, (int64_t)v35, v36, v37, v38, v39, v40, v41);
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__193_o *)v4->fields.__8__1;
    if ( !this )
      goto LABEL_111;
    v48 = (int64_t)v4->fields.__4__this;
    *(_QWORD *)&this->fields.__1__state = v48;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, v48, v42, v43, v44, v45, v46, v47);
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__193_o *)v4->fields.__8__1;
    if ( !this )
      goto LABEL_111;
    endAct = (Il2CppObject *)v4->fields.endAct;
    this->fields.__2__current = endAct;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__2__current, (int64_t)endAct, v49, v50, v51, v52, v53, v54);
    v4->fields._isAuto_5__2 = 0;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    if ( !byte_4B13388 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v56);
      byte_4B13388 = 1;
    }
    v57 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
      v57 = TerminalPramsManager_TypeInfo;
    }
    if ( !v57->static_fields->_IsMapReturnFolder_k__BackingField )
    {
      if ( !v57->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v57, method);
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__193_o *)TerminalPramsManager__IsAuto(0LL);
      v4->fields._isAuto_5__2 = (unsigned __int8)this & 1;
      if ( !_4__this )
        goto LABEL_111;
      TerminalSceneComponent__EndAuto(_4__this, method);
      if ( !byte_4B10F84 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v58, v59);
        byte_4B10F84 = 1;
      }
      v60 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v58);
        v60 = TerminalPramsManager_TypeInfo;
      }
      if ( v60->static_fields->_isPlayingQuestPhaseRewardEffect_k__BackingField )
      {
        v61 = TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect((TerminalSceneComponent_o *)v60, v58);
        UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)_4__this, v61, 0LL);
      }
      else
      {
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v58);
        SoundManager__stopSe(0.0, 0LL);
      }
    }
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    if ( !byte_4B12054 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v56);
      byte_4B12054 = 1;
    }
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__193_o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__193_o *)TerminalPramsManager_TypeInfo;
    }
    if ( HIBYTE(this[2].fields.endAct[1].klass) )
    {
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
      if ( !byte_4B10F83 )
      {
        sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, method, v56);
        byte_4B10F83 = 1;
      }
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__193_o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
        this = (TerminalSceneComponent__coFadein_WorldDisp_d__193_o *)TerminalSceneComponent_TypeInfo;
      }
      klass = this[2].fields.endAct->klass;
      if ( !klass )
        goto LABEL_111;
      v63 = *(_QWORD *)&klass->_2.thread_static_fields_offset;
      if ( !v63 )
        goto LABEL_111;
      this = *(TerminalSceneComponent__coFadein_WorldDisp_d__193_o **)(v63 + 552);
      if ( !this )
        goto LABEL_111;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    }
    if ( !_4__this )
      goto LABEL_111;
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__193_o *)_4__this->fields.mTerminalMap;
    if ( !this )
      goto LABEL_111;
    ScrTerminalMap__SetDisp((ScrTerminalMap_o *)this, 0, 0LL);
    if ( _4__this->fields._IsReq_InitEarthRotateY_k__BackingField )
    {
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__193_o *)_4__this->fields.mEarthCore;
      _4__this->fields._IsReq_InitEarthRotateY_k__BackingField = 0;
      if ( !this )
        goto LABEL_111;
      BaseCore__SetRotateY_PointInitAngle((BaseCore_o *)this, 0LL);
    }
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__193_o *)_4__this->fields.mTerminalList;
    if ( !this )
      goto LABEL_111;
    if ( !ScrTerminalListTop__isShowingFolder((ScrTerminalListTop_o *)this, 0LL) )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
      if ( !byte_4B12DC9 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v64);
        byte_4B12DC9 = 1;
      }
      v65 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
        v65 = TerminalPramsManager_TypeInfo;
      }
      v65->static_fields->_DispState_k__BackingField = 1;
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__193_o *)_4__this->fields.mTitleInfo;
      if ( !this )
        goto LABEL_111;
      TitleInfoControl__SetActiveEventInfo_37882680((TitleInfoControl_o *)this, 1, 16, 0, 0, 0LL, 0LL);
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__193_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_111;
      CommonUI__CheckChangeOtherConnectMarkFromEventId((CommonUI_o *)this, 0, 1, 0LL);
    }
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__193_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this )
      goto LABEL_111;
    CommonUI__SetBgCameraActive((CommonUI_o *)this, 1, 0LL);
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__193_o *)_4__this->fields.mTerminalMap;
    if ( !this )
      goto LABEL_111;
    ScrTerminalMap__ReleaseMap((ScrTerminalMap_o *)this, 1, 0LL);
    if ( !System_GC_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_GC_TypeInfo, v66);
    System_GC__Collect_63447616(0LL);
    if ( v4->fields.isExecuteUnusedAssets )
    {
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__193_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( this )
      {
        AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)this, 0LL, 0LL);
        this = (TerminalSceneComponent__coFadein_WorldDisp_d__193_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( this )
        {
          v67 = AssetManager__WaitForExecutionUnloadUnuseAssets((AssetManager_o *)this, 0LL);
          v4->fields.__2__current = (Il2CppObject *)v67;
          p__2__current = (PartyOrganizationUtility_o *)&v4->fields.__2__current;
          sub_1BCA784(p__2__current, (int64_t)v67, v69, v70, v71, v72, v73, v74);
          result = 1;
          *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
          return result;
        }
      }
      goto LABEL_111;
    }
  }
  if ( !v4->fields._isAuto_5__2 )
  {
    if ( !_4__this )
      goto LABEL_111;
    goto LABEL_94;
  }
  if ( !_4__this )
    goto LABEL_111;
  this = (TerminalSceneComponent__coFadein_WorldDisp_d__193_o *)_4__this->fields.mTerminalList;
  if ( !this )
    goto LABEL_111;
  if ( !ScrTerminalListTop__isShowingFolder((ScrTerminalListTop_o *)this, 0LL) )
    goto LABEL_94;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_4B12DC6 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v76);
    byte_4B12DC6 = 1;
  }
  this = (TerminalSceneComponent__coFadein_WorldDisp_d__193_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__193_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_111;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          HIDWORD(this[2].fields.endAct->klass),
          (const MethodInfo_31B2E94 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
  {
LABEL_94:
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__193_o *)_4__this->fields.mTerminalList;
    if ( !this )
      goto LABEL_111;
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__193_o *)ScrTerminalListTop__get_IsActiveBlankEarth(
                                                                    (ScrTerminalListTop_o *)this,
                                                                    0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      mTerminalList = _4__this->fields.mTerminalList;
      if ( !mTerminalList )
        goto LABEL_111;
      if ( !mTerminalList->fields.isBackFromBlankEarthMap )
        TerminalSceneComponent__playDefaultBgm(_4__this, method);
    }
    v94 = _4__this->fields.mTerminalList;
    if ( v94 )
    {
      if ( v94->fields.isBackFromBlankEarthMap )
      {
        _8__1 = (Il2CppObject *)v4->fields.__8__1;
        v96 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v91, v92);
        System_Action___ctor(
          v96,
          _8__1,
          Method_TerminalSceneComponent___c__DisplayClass193_0__coFadein_WorldDisp_b__1__,
          0LL);
        TerminalSceneComponent__StartWindowMessage(_4__this, v96, v97);
        return 0;
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v101 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v98);
        v101 = AvalonSceneManager_TypeInfo;
      }
      v87 = (Il2CppObject *)v4->fields.__8__1;
      DEFAULT_FADE_TIME = v101->static_fields->DEFAULT_FADE_TIME;
      v89 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v98, v99, v100);
      v90 = &Method_TerminalSceneComponent___c__DisplayClass193_0__coFadein_WorldDisp_b__2__;
      goto LABEL_105;
    }
LABEL_111:
    sub_1BCAA3C(this, method);
  }
  this = (TerminalSceneComponent__coFadein_WorldDisp_d__193_o *)_4__this->fields.mTerminalList;
  if ( !this )
    goto LABEL_111;
  ShowingFolderBGM = ScrTerminalListTop__GetShowingFolderBGM((ScrTerminalListTop_o *)this, 0LL);
  TerminalSceneComponent__playBgm(_4__this, ShowingFolderBGM, v79);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_4B12054 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v80);
    byte_4B12054 = 1;
  }
  this = (TerminalSceneComponent__coFadein_WorldDisp_d__193_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__193_o *)TerminalPramsManager_TypeInfo;
  }
  if ( HIBYTE(this[2].fields.endAct[1].klass) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v86 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v82);
      v86 = AvalonSceneManager_TypeInfo;
    }
    v87 = (Il2CppObject *)v4->fields.__8__1;
    DEFAULT_FADE_TIME = v86->static_fields->DEFAULT_FADE_TIME;
    v89 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v82, v83, v84);
    v90 = &Method_TerminalSceneComponent___c__DisplayClass193_0__coFadein_WorldDisp_b__0__;
LABEL_105:
    v102 = v89;
    System_Action___ctor(v89, v87, *v90, 0LL);
    if ( !Instance )
      goto LABEL_111;
    CommonUI__maskFadein((CommonUI_o *)Instance, DEFAULT_FADE_TIME, v102, 0LL);
    return 0;
  }
  if ( !entity )
    goto LABEL_111;
  v103 = v4->fields.__8__1;
  if ( !v103 )
    goto LABEL_111;
  TerminalSceneComponent__FadeInAndTriggerEventEffects(
    _4__this,
    v4->fields.fadeTime,
    (int32_t)entity[6].klass,
    v103->fields.endAct,
    v81);
  return 0;
}


Il2CppObject *__fastcall TerminalSceneComponent__coFadein_WorldDisp_d__193__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TerminalSceneComponent__coFadein_WorldDisp_d__193_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn TerminalSceneComponent__coFadein_WorldDisp_d__193__System_Collections_IEnumerator_Reset(
        TerminalSceneComponent__coFadein_WorldDisp_d__193_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_TerminalSceneComponent__coFadein_WorldDisp_d__193_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall TerminalSceneComponent__coFadein_WorldDisp_d__193__System_Collections_IEnumerator_get_Current(
        TerminalSceneComponent__coFadein_WorldDisp_d__193_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall TerminalSceneComponent__coFadein_WorldDisp_d__193__System_IDisposable_Dispose(
        TerminalSceneComponent__coFadein_WorldDisp_d__193_o *this,
        const MethodInfo *method)
{
  ;
}