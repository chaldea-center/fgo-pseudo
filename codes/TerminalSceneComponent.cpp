void __fastcall TerminalSceneComponent___cctor(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7
  TerminalSceneComponent_c *v7; // x8
  int64_t v8; // x1
  struct TerminalSceneComponent_StaticFields *static_fields; // x0
  int64_t v10; // x1
  struct TerminalSceneComponent_StaticFields *v11; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x1
  struct TerminalSceneComponent_StaticFields *v19; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x1
  struct TerminalSceneComponent_StaticFields *v27; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x1
  struct TerminalSceneComponent_StaticFields *v35; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7

  if ( (byte_4BDE6D9 & 1) == 0 )
  {
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    sub_1C21E38(&StringLiteral_10304/*"OverwriteCommonBG2"*/);
    sub_1C21E38(&StringLiteral_10303/*"OverwriteCommonBG1"*/);
    sub_1C21E38(&StringLiteral_21693/*"masterMissionResetKey"*/);
    sub_1C21E38(&StringLiteral_13845/*"Terminal/EarthCore/{0:D2}"*/);
    sub_1C21E38(&StringLiteral_10253/*"OrdealCallChapterPlayState"*/);
    byte_4BDE6D9 = 1;
  }
  v7 = TerminalSceneComponent_TypeInfo;
  TerminalSceneComponent_TypeInfo->static_fields->DEFAULT_AMBIENT_LIGHT_COLOR = (struct UnityEngine_Color_o)xmmword_BFF070;
  v8 = StringLiteral_21693/*"masterMissionResetKey"*/;
  static_fields = v7->static_fields;
  static_fields->MASTER_MISSION_RESET_KEY = (struct System_String_o *)StringLiteral_21693/*"masterMissionResetKey"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->MASTER_MISSION_RESET_KEY, v8, v1, v2, v3, v4, v5, v6);
  v10 = StringLiteral_13845/*"Terminal/EarthCore/{0:D2}"*/;
  v11 = TerminalSceneComponent_TypeInfo->static_fields;
  v11->EARTH_ASSET_NAME = (struct System_String_o *)StringLiteral_13845/*"Terminal/EarthCore/{0:D2}"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v11->EARTH_ASSET_NAME, v10, v12, v13, v14, v15, v16, v17);
  v18 = StringLiteral_10253/*"OrdealCallChapterPlayState"*/;
  v19 = TerminalSceneComponent_TypeInfo->static_fields;
  v19->ORDEAL_CALL_CHAPTER_PLAY_STATE_KEY = (struct System_String_o *)StringLiteral_10253/*"OrdealCallChapterPlayState"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v19->ORDEAL_CALL_CHAPTER_PLAY_STATE_KEY, v18, v20, v21, v22, v23, v24, v25);
  v26 = StringLiteral_10303/*"OverwriteCommonBG1"*/;
  v27 = TerminalSceneComponent_TypeInfo->static_fields;
  v27->OVERWRITE_COMMON_BG_TYPE1_KEY = (struct System_String_o *)StringLiteral_10303/*"OverwriteCommonBG1"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v27->OVERWRITE_COMMON_BG_TYPE1_KEY, v26, v28, v29, v30, v31, v32, v33);
  v34 = StringLiteral_10304/*"OverwriteCommonBG2"*/;
  v35 = TerminalSceneComponent_TypeInfo->static_fields;
  v35->OVERWRITE_COMMON_BG_TYPE2_KEY = (struct System_String_o *)StringLiteral_10304/*"OverwriteCommonBG2"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v35->OVERWRITE_COMMON_BG_TYPE2_KEY, v34, v36, v37, v38, v39, v40, v41);
  *(_WORD *)&TerminalSceneComponent_TypeInfo->static_fields->isTitleToTerminalTransition = 0;
}


void __fastcall TerminalSceneComponent___ctor(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  this->fields.TUTORIAL_SPOT_ARROW_POS = (struct UnityEngine_Vector2_o)3263954944LL;
  this->fields.TUTORIAL_SPOT_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_BFF4E0;
  *(_OWORD *)&this->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.x = xmmword_BFF260;
  this->fields.TUTORIAL_QUEST_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_BFE410;
  *(_OWORD *)&this->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.x = xmmword_BFF270;
  this->fields.TUTORIAL_MENU_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_BFF590;
  *(_OWORD *)&this->fields.TUTORIAL_MENU_MESSAGE_POS.fields.x = xmmword_BFDE40;
  this->fields.TUTORIAL_GACHA_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_BFE540;
  this->fields.TUTORIAL_MENU_ARROW_POS2 = (struct UnityEngine_Vector2_o)0xC366000043DB0000LL;
  this->fields.TUTORIAL_COMBINE_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_BFE860;
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
  TerminalSceneComponent_c *v9; // x0
  UnityEngine_GameObject_o *UiFlag; // x0
  __int64 v11; // x1
  bool v12; // w1

  if ( (byte_4BDE68E & 1) == 0 )
  {
    sub_1C21E38(&ServantCommentManager_TypeInfo);
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BDE68E = 1;
  }
  v9 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v9 = TerminalSceneComponent_TypeInfo;
  }
  v9->static_fields->mInstance = this;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)TerminalSceneComponent_TypeInfo->static_fields,
    (int64_t)this,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
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
        v12 = 1;
        goto LABEL_15;
      }
    }
LABEL_16:
    sub_1C22094(UiFlag, v11);
  }
  UnityEngine_GameObject__SetActive(this->fields.mBgText, 0, 0LL);
  UiFlag = this->fields.mBgGradLeft;
  if ( !UiFlag )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(UiFlag, 0, 0LL);
  UiFlag = this->fields.mBgGradRight;
  if ( !UiFlag )
    goto LABEL_16;
  v12 = 0;
LABEL_15:
  UnityEngine_GameObject__SetActive(UiFlag, v12, 0LL);
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
    sub_1C21DDC(
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
    sub_1C22094(0LL, item);
  ScrTerminalListTop__OpenQuestResetDialog(mTerminalList, item, 0LL);
}


bool __fastcall TerminalSceneComponent__CallQuestInfoAutoOpen(
        TerminalSceneComponent_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  QuestInformationComponent_o *mQuestInformation; // x0

  mQuestInformation = this->fields.mQuestInformation;
  if ( !mQuestInformation )
    sub_1C22094(0LL, questId);
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
    sub_1C22094(this, item);
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
    sub_1C22094(this, method);
  }
  QuestInformationComponent__Close((QuestInformationComponent_o *)this, 0LL);
}


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
    sub_1C22094(this, isPlaySe);
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


void __fastcall TerminalSceneComponent__CheckConflictTutorialOnBlankEarth(
        TerminalSceneComponent_o *this,
        int32_t openType,
        const MethodInfo *method)
{
  EventTutorialMaster_EventTutorialArgs_o *v4; // x20
  System_Collections_ICollection_o *IsNullOrEmpty; // x0
  __int64 v6; // x1
  __int64 v7; // x21
  EventTutorialEntity_array *AvailableTutorialArray; // x19
  int max_length; // w8
  System_Collections_ICollection_o *v10; // x20
  unsigned int v11; // w21
  EventTutorialEntity_o *v12; // x24
  struct EventTutorialEntity_TextTuto_array *textJson; // x8
  EventTutorialEntity_TextTuto_o *v14; // x8
  struct EventTutorialEntity_TextTuto_array *v15; // x8
  EventTutorialEntity_TextTuto_o *v16; // x8
  System_Collections_ICollection_o *v17; // x8
  int klass; // w25
  struct EventTutorialEntity_TextTuto_array *v19; // x8
  EventTutorialEntity_TextTuto_o *v20; // x8

  if ( (byte_4BDE6D8 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&EventTutorialMaster_EventTutorialArgs_TypeInfo);
    sub_1C21E38(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4BDE6D8 = 1;
  }
  v4 = (EventTutorialMaster_EventTutorialArgs_o *)sub_1C22084(EventTutorialMaster_EventTutorialArgs_TypeInfo);
  EventTutorialMaster_EventTutorialArgs___ctor(v4, 0LL);
  if ( !v4
    || (v4->fields.eventId = 0,
        v4->fields.openKind = openType,
        v7 = sub_1C22084(EventTutorialMaster_EventTutorialArgs_TypeInfo),
        EventTutorialMaster_EventTutorialArgs___ctor((EventTutorialMaster_EventTutorialArgs_o *)v7, 0LL),
        !v7)
    || (*(_QWORD *)(v7 + 16) = 0x5300000000LL,
        AvailableTutorialArray = EventTutorialMaster__GetAvailableTutorialArray(v4, 0LL),
        IsNullOrEmpty = (System_Collections_ICollection_o *)EventTutorialMaster__GetAvailableTutorialArray(
                                                              (EventTutorialMaster_EventTutorialArgs_o *)v7,
                                                              0LL),
        !AvailableTutorialArray) )
  {
LABEL_31:
    sub_1C22094(IsNullOrEmpty, v6);
  }
  max_length = AvailableTutorialArray->max_length;
  if ( max_length >= 1 )
  {
    v10 = IsNullOrEmpty;
    v11 = 0;
    while ( v11 < max_length )
    {
      v12 = AvailableTutorialArray->m_Items[v11];
      if ( !v12 )
        goto LABEL_31;
      IsNullOrEmpty = (System_Collections_ICollection_o *)BasicHelper__IsNullOrEmpty(
                                                            (System_Collections_ICollection_o *)v12->fields.textJson,
                                                            0LL);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        textJson = v12->fields.textJson;
        if ( !textJson )
          goto LABEL_31;
        if ( !textJson->max_length )
          break;
        v14 = textJson->m_Items[0];
        if ( !v14 )
          goto LABEL_31;
        if ( v14->fields.isQuestRelease )
        {
          IsNullOrEmpty = (System_Collections_ICollection_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_QuestTree__get_Instance__);
          if ( IsNullOrEmpty )
          {
            IsNullOrEmpty = (System_Collections_ICollection_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_QuestTree__get_Instance__);
            v15 = v12->fields.textJson;
            if ( !v15 )
              goto LABEL_31;
            if ( !v15->max_length )
              break;
            v16 = v15->m_Items[0];
            if ( !v16 || !IsNullOrEmpty )
              goto LABEL_31;
            IsNullOrEmpty = (System_Collections_ICollection_o *)QuestTree__GetQuestInfo(
                                                                  (QuestTree_o *)IsNullOrEmpty,
                                                                  v16->fields.questId,
                                                                  0LL);
            if ( IsNullOrEmpty )
            {
              v17 = IsNullOrEmpty;
              IsNullOrEmpty = (System_Collections_ICollection_o *)BalanceConfig_TypeInfo;
              klass = (int)v17[4].klass;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                IsNullOrEmpty = (System_Collections_ICollection_o *)BalanceConfig_TypeInfo;
              }
              if ( klass == *((_DWORD *)IsNullOrEmpty[11].monitor + 204) )
              {
                IsNullOrEmpty = (System_Collections_ICollection_o *)BasicHelper__IsNullOrEmpty(v10, 0LL);
                if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
                {
                  v19 = v12->fields.textJson;
                  if ( !v19 )
                    goto LABEL_31;
                  if ( !v19->max_length )
                    break;
                  v20 = v19->m_Items[0];
                  if ( !v20 )
                    goto LABEL_31;
                  v20->fields.isQuestRelease = 0;
                }
              }
            }
          }
        }
      }
      max_length = AvailableTutorialArray->max_length;
      if ( (int)++v11 >= max_length )
        return;
    }
    sub_1C2209C(IsNullOrEmpty, v6);
  }
}


bool __fastcall TerminalSceneComponent__CheckEventDailyPoint(
        TerminalSceneComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  TerminalPramsManager_c *v6; // x0
  int64_t BeforeTimeEventDailyPoint_k__BackingField; // x21
  uint64_t dateData; // x20
  TerminalPramsManager_c *v9; // x0
  int32_t Hour; // w19
  BalanceConfig_c *v11; // x8
  int32_t Year; // w19
  int32_t Month; // w21
  int32_t Day; // w0
  BalanceConfig_c *v15; // x8
  int32_t v16; // w22
  System_DateTime_o t2; // [xsp+0h] [xbp-50h] BYREF
  uint64_t v19; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF
  System_DateTime_o v21; // 0:x0.8
  System_DateTime_o v22; // 0:x0.8
  System_DateTime_o v23; // 0:x0.8
  System_DateTime_o v24; // 0:x0.8
  System_DateTime_o v25; // 0:x0.8
  System_DateTime_o v26; // 0:x0.8
  System_DateTime_o v27; // 0:x0.8
  System_DateTime_o v28; // 0:x1.8

  if ( (byte_4BDE6BD & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C21E38(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C21E38(&System_DateTime_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BDE6BD = 1;
  }
  entity = 0LL;
  t2.fields._dateData = 0LL;
  v19 = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_40;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          eventId,
          (const MethodInfo_325BE14 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Instance = entity;
  if ( !entity )
LABEL_40:
    sub_1C22094(Instance, v5);
  if ( EventDetailEntity__IsEventDailyPoint((EventDetailEntity_o *)entity, 0LL) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD9AF3 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD9AF3 = 1;
    }
    v6 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v6 = TerminalPramsManager_TypeInfo;
    }
    BeforeTimeEventDailyPoint_k__BackingField = v6->static_fields->_BeforeTimeEventDailyPoint_k__BackingField;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    dateData = NetworkManager__getDateTime_39807076(BeforeTimeEventDailyPoint_k__BackingField, 0LL).fields._dateData;
    if ( !byte_4BD9AF2 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD9AF2 = 1;
    }
    v9 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v9 = TerminalPramsManager_TypeInfo;
    }
    if ( BeforeTimeEventDailyPoint_k__BackingField < 1
      || v9->static_fields->_EventDailyPointEventId_k__BackingField != eventId )
    {
      return 1;
    }
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v19 = NetworkManager__getServerDateTime(0LL).fields._dateData;
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    v21.fields._dateData = (uint64_t)&v19;
    Hour = System_DateTime__get_Hour(v21, 0LL);
    v11 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v11 = BalanceConfig_TypeInfo;
    }
    if ( Hour < v11->static_fields->EventDailyPointResetAt )
    {
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      v22.fields._dateData = (uint64_t)&v19;
      v19 = System_DateTime__AddDays(v22, -1.0, 0LL).fields._dateData;
    }
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    v23.fields._dateData = (uint64_t)&v19;
    Year = System_DateTime__get_Year(v23, 0LL);
    v24.fields._dateData = (uint64_t)&v19;
    Month = System_DateTime__get_Month(v24, 0LL);
    v25.fields._dateData = (uint64_t)&v19;
    Day = System_DateTime__get_Day(v25, 0LL);
    v15 = BalanceConfig_TypeInfo;
    v16 = Day;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v15 = BalanceConfig_TypeInfo;
    }
    v26.fields._dateData = (uint64_t)&t2;
    System_DateTime___ctor_63794248(v26, Year, Month, v16, v15->static_fields->EventDailyPointResetAt, 0, 0, 0LL);
    v28.fields._dateData = t2.fields._dateData;
    v27.fields._dateData = dateData;
    if ( System_DateTime__op_LessThanOrEqual(v27, v28, 0LL) )
      return 1;
  }
  return 0;
}


void __fastcall TerminalSceneComponent__CheckExchangeDialogTheFree(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *String_70827888; // x0
  const MethodInfo *v6; // x5

  if ( (byte_4BDE6CD & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_2041/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_FREE_SHOP_TITLE"*/);
    sub_1C21E38(&StringLiteral_19961/*"freeShopIds"*/);
    sub_1C21E38(&StringLiteral_2040/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_FREE_SHOP_DETAIL"*/);
    byte_4BDE6CD = 1;
  }
  String_70827888 = UnityEngine_PlayerPrefs__GetString_70827888((System_String_o *)StringLiteral_19961/*"freeShopIds"*/, 0LL);
  if ( System_String__IsNullOrEmpty(String_70827888, 0LL) )
    ActionExtensions__Call(callback, 0LL);
  else
    TerminalSceneComponent__OpenExchangeDialogue(
      this,
      (System_String_o *)StringLiteral_19961/*"freeShopIds"*/,
      (System_String_o *)StringLiteral_2041/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_FREE_SHOP_TITLE"*/,
      (System_String_o *)StringLiteral_2040/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_FREE_SHOP_DETAIL"*/,
      callback,
      v6);
}


void __fastcall TerminalSceneComponent__CheckExchangeDialogTheReturn(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *String_70827888; // x0
  const MethodInfo *v6; // x5

  if ( (byte_4BDE6CE & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_2043/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_RETURN_RARE_PRI_SHOP_TITLE"*/);
    sub_1C21E38(&StringLiteral_23337/*"returnRarePriShopIds"*/);
    sub_1C21E38(&StringLiteral_2042/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_RETURN_RARE_PRI_SHOP_DETAIL"*/);
    byte_4BDE6CE = 1;
  }
  String_70827888 = UnityEngine_PlayerPrefs__GetString_70827888((System_String_o *)StringLiteral_23337/*"returnRarePriShopIds"*/, 0LL);
  if ( System_String__IsNullOrEmpty(String_70827888, 0LL) )
    ActionExtensions__Call(callback, 0LL);
  else
    TerminalSceneComponent__OpenExchangeDialogue(
      this,
      (System_String_o *)StringLiteral_23337/*"returnRarePriShopIds"*/,
      (System_String_o *)StringLiteral_2043/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_RETURN_RARE_PRI_SHOP_TITLE"*/,
      (System_String_o *)StringLiteral_2042/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_RETURN_RARE_PRI_SHOP_DETAIL"*/,
      callback,
      v6);
}


void __fastcall TerminalSceneComponent__CheckLastPlayBgm(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mTerminalList; // x20
  __int64 v4; // x1
  ScrTerminalListTop_o *v5; // x0

  if ( (byte_4BDE6B3 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDE6B3 = 1;
  }
  mTerminalList = (UnityEngine_Object_o *)this->fields.mTerminalList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mTerminalList, 0LL, 0LL) )
  {
    v5 = this->fields.mTerminalList;
    if ( !v5 )
      sub_1C22094(0LL, v4);
    ScrTerminalListTop__CheckLastPlayBgm(v5, 0LL);
  }
}


void __fastcall TerminalSceneComponent__CheckMasterMissionReset(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x19
  ScrPlayerStatus_o *mPlayerStatus; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  System_Action_o **v14; // x20
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  _QWORD *v21; // x21
  TerminalSceneComponent_c *v22; // x0
  System_String_o *String; // x0
  int64_t v24; // x0
  Il2CppObject *Instance; // x20
  System_String_o *v26; // x21
  System_String_o *v27; // x22
  System_String_o *v28; // x23
  CommonConfirmDialog_ClickDelegate_o *v29; // x24
  TerminalSceneComponent_c *v30; // x0
  struct TerminalSceneComponent_StaticFields *static_fields; // x8
  int64_t v32; // x0
  System_String_o *MASTER_MISSION_RESET_KEY; // x19
  System_String_o *v34; // x0

  if ( (byte_4BDE6D1 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    sub_1C21E38(&Method_TerminalSceneComponent___c__DisplayClass262_0__CheckMasterMissionReset_b__0__);
    sub_1C21E38(&TerminalSceneComponent___c__DisplayClass262_0_TypeInfo);
    sub_1C21E38(&StringLiteral_8959/*"MST_MISSION_CHANGE_MSG"*/);
    sub_1C21E38(&StringLiteral_8958/*"MST_MISSION_CHANGE_DECIDE"*/);
    sub_1C21E38(&StringLiteral_3811/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_1212/*"0"*/);
    byte_4BDE6D1 = 1;
  }
  v5 = sub_1C22084(TerminalSceneComponent___c__DisplayClass262_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_20;
  *(_QWORD *)(v5 + 24) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 24), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 32) = callback;
  v14 = (System_Action_o **)(v5 + 32);
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)callback, v15, v16, v17, v18, v19, v20);
  mPlayerStatus = this->fields.mPlayerStatus;
  if ( !mPlayerStatus )
    goto LABEL_20;
  *(_QWORD *)(v5 + 16) = ScrPlayerStatus__GetMstMissionStarts(mPlayerStatus, 0LL);
  v21 = (_QWORD *)(v5 + 16);
  v22 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v22 = TerminalSceneComponent_TypeInfo;
  }
  String = UnityEngine_PlayerPrefs__GetString(
             v22->static_fields->MASTER_MISSION_RESET_KEY,
             (System_String_o *)StringLiteral_1212/*"0"*/,
             0LL);
  v24 = System_Int64__Parse(String, 0LL);
  if ( *v21 )
  {
    if ( v24 )
    {
      if ( v24 != *v21 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v26 = LocalizationManager__Get((System_String_o *)StringLiteral_8959/*"MST_MISSION_CHANGE_MSG"*/, 0LL);
        v27 = LocalizationManager__Get((System_String_o *)StringLiteral_8958/*"MST_MISSION_CHANGE_DECIDE"*/, 0LL);
        v28 = LocalizationManager__Get((System_String_o *)StringLiteral_3811/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
        v29 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C22084(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          v29,
          (Il2CppObject *)v5,
          Method_TerminalSceneComponent___c__DisplayClass262_0__CheckMasterMissionReset_b__0__,
          0LL);
        mPlayerStatus = (ScrPlayerStatus_o *)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        if ( Instance )
        {
          CommonUI__OpenConfirmDecideDlg(
            (CommonUI_o *)Instance,
            (System_String_o *)StringLiteral_1/*""*/,
            v26,
            v27,
            v28,
            v29,
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
        sub_1C22094(mPlayerStatus, v7);
      }
    }
    else
    {
      v30 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v30 = TerminalSceneComponent_TypeInfo;
      }
      static_fields = v30->static_fields;
      v32 = v5 + 16;
      MASTER_MISSION_RESET_KEY = static_fields->MASTER_MISSION_RESET_KEY;
      v34 = System_Int64__ToString(v32, 0LL);
      UnityEngine_PlayerPrefs__SetString(MASTER_MISSION_RESET_KEY, v34, 0LL);
    }
  }
  ActionExtensions__Call(*v14, 0LL);
}


void __fastcall TerminalSceneComponent__CheckNotificationDialog(
        TerminalSceneComponent_o *this,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  int64_t v4; // x19
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  System_Action_o **v13; // x20
  BattleResultBondsComponent_c *v14; // x0
  BattleResultBondsComponent_c *v15; // x0
  Il2CppObject *String_70827888; // x21
  System_Object_array *v17; // x0
  System_Object_array *v18; // x22
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x23
  __int64 v21; // x25
  Il2CppObject *v22; // x8
  BattleResultBondsComponent_c *v23; // x0
  BattleResultBondsComponent_c *v24; // x0
  System_Action_o *v25; // x20
  EventServantEntity_o *v26; // x21
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  DataMasterBase_TMaster__TEntity__PKType__o *v33; // x22
  __int64 v34; // x22
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int64_t v41; // x19
  int64_t v42; // x20
  Il2CppObject *v43; // x8
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  System_String_o *v56; // x19
  Il2CppObject *v57; // x22
  __int64 v58; // x0
  Il2CppObject *v59; // [xsp+30h] [xbp-60h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_4BDE6D2 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&BattleResultBondsComponent_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_SvtCoinMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C21E38(&GetSvtCoin___TypeInfo);
    sub_1C21E38(&GetSvtCoin_TypeInfo);
    sub_1C21E38(&Method_JsonManager_DeserializeArray_GetSvts___);
    sub_1C21E38(&JsonManager_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_TerminalSceneComponent___c__DisplayClass263_0__CheckNotificationDialog_b__0__);
    sub_1C21E38(&TerminalSceneComponent___c__DisplayClass263_0_TypeInfo);
    sub_1C21E38(&Method_TerminalSceneComponent___c__DisplayClass263_1__CheckNotificationDialog_b__1__);
    sub_1C21E38(&TerminalSceneComponent___c__DisplayClass263_1_TypeInfo);
    sub_1C21E38(&StringLiteral_12584/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/);
    byte_4BDE6D2 = 1;
  }
  v59 = 0LL;
  entity = 0LL;
  v4 = sub_1C22084(TerminalSceneComponent___c__DisplayClass263_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4 )
    goto LABEL_54;
  *(_QWORD *)(v4 + 16) = callBack;
  v13 = (System_Action_o **)(v4 + 16);
  sub_1C21DDC((PartyOrganizationUtility_o *)(v4 + 16), (int64_t)callBack, v7, v8, v9, v10, v11, v12);
  v14 = BattleResultBondsComponent_TypeInfo;
  if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
    v14 = BattleResultBondsComponent_TypeInfo;
  }
  if ( UnityEngine_PlayerPrefs__HasKey(v14->static_fields->GET_EXIST_SVT_KEY, 0LL) )
  {
    v15 = BattleResultBondsComponent_TypeInfo;
    if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
      v15 = BattleResultBondsComponent_TypeInfo;
    }
    String_70827888 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_70827888(
                                        v15->static_fields->GET_EXIST_SVT_KEY,
                                        0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v17 = JsonManager__DeserializeArray_object_(
            String_70827888,
            (const MethodInfo_3017804 *)Method_JsonManager_DeserializeArray_GetSvts___);
    if ( v17 )
    {
      v18 = v17;
      if ( *(_QWORD *)&v17->max_length )
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_54;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantMaster___);
        max_length = v18->max_length;
        if ( max_length >= 1 )
        {
          v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
          v21 = 0LL;
          while ( 1 )
          {
            if ( (unsigned int)v21 >= max_length )
              goto LABEL_55;
            v22 = v18->m_Items[v21];
            if ( !v22 || !v20 )
              goto LABEL_54;
            Instance = (DataManager_o *)DataMasterBase_object__object__long___TryGetEntity(
                                          v20,
                                          &entity,
                                          (int64_t)v22[1].klass,
                                          (const MethodInfo_325E370 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
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
            if ( (_DWORD)v21 == v18->max_length - 1 )
            {
              v23 = BattleResultBondsComponent_TypeInfo;
              if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
                v23 = BattleResultBondsComponent_TypeInfo;
              }
              UnityEngine_PlayerPrefs__DeleteKey(v23->static_fields->GET_EXIST_SVT_KEY, 0LL);
              ActionExtensions__Call(*v13, 0LL);
            }
            max_length = v18->max_length;
            if ( (int)++v21 >= max_length )
              goto LABEL_29;
          }
          v25 = *(System_Action_o **)(v4 + 24);
          v26 = (EventServantEntity_o *)Instance;
          if ( !v25 )
          {
            v25 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
            System_Action___ctor(
              v25,
              (Il2CppObject *)v4,
              Method_TerminalSceneComponent___c__DisplayClass263_0__CheckNotificationDialog_b__0__,
              0LL);
            *(_QWORD *)(v4 + 24) = v25;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v4 + 24), (int64_t)v25, v27, v28, v29, v30, v31, v32);
          }
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_SvtCoinMaster___);
          if ( entity )
          {
            v33 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
            Instance = (DataManager_o *)UserServantEntity__getSvtId((UserServantEntity_o *)entity, 0LL);
            if ( v33 )
            {
              Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                            v33,
                                            &v59,
                                            (int32_t)Instance,
                                            (const MethodInfo_325BE14 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                if ( !v59 )
                  goto LABEL_54;
                if ( SHIDWORD(v59[1].klass) >= 1 )
                {
                  v34 = sub_1C22084(TerminalSceneComponent___c__DisplayClass263_1_TypeInfo);
                  System_Object___ctor((Il2CppObject *)v34, 0LL);
                  if ( !v34 )
                    goto LABEL_54;
                  *(_QWORD *)(v34 + 24) = v4;
                  sub_1C21DDC((PartyOrganizationUtility_o *)(v34 + 24), v4, v35, v36, v37, v38, v39, v40);
                  v41 = sub_1C21EE0(GetSvtCoin___TypeInfo, 1LL);
                  v42 = sub_1C22084(GetSvtCoin_TypeInfo);
                  GetSvtCoin___ctor((GetSvtCoin_o *)v42, 0LL);
                  v43 = v59;
                  if ( !v59 )
                    goto LABEL_54;
                  if ( !v42 )
                    goto LABEL_54;
                  *(_DWORD *)(v42 + 16) = v59[1].klass;
                  *(int32x2_t *)(v42 + 20) = vrev64_s32(*(int32x2_t *)((char *)&v43[1].klass + 4));
                  if ( !v41 )
                    goto LABEL_54;
                  Instance = (DataManager_o *)sub_1C21F74(v42, *(_QWORD *)(*(_QWORD *)v41 + 64LL));
                  if ( !Instance )
                  {
                    v58 = sub_1C220B8(0LL);
                    sub_1C21F60(v58, 0LL);
                  }
                  if ( !*(_DWORD *)(v41 + 24) )
LABEL_55:
                    sub_1C2209C(Instance, v6);
                  *(_QWORD *)(v41 + 32) = v42;
                  sub_1C21DDC((PartyOrganizationUtility_o *)(v41 + 32), v42, v44, v45, v46, v47, v48, v49);
                  *(_QWORD *)(v34 + 16) = v41;
                  sub_1C21DDC((PartyOrganizationUtility_o *)(v34 + 16), v41, v50, v51, v52, v53, v54, v55);
                  v25 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
                  System_Action___ctor(
                    v25,
                    (Il2CppObject *)v34,
                    Method_TerminalSceneComponent___c__DisplayClass263_1__CheckNotificationDialog_b__1__,
                    0LL);
                }
              }
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v56 = LocalizationManager__Get((System_String_o *)StringLiteral_12584/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/, 0LL);
              v57 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              Instance = (DataManager_o *)EventServantEntity__GetGetMessage(v26, 0LL);
              if ( v57 )
              {
                CommonUI__OpenNotificationDialog(
                  (CommonUI_o *)v57,
                  v56,
                  (System_String_o *)Instance,
                  v25,
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
          sub_1C22094(Instance, v6);
        }
      }
    }
LABEL_29:
    v24 = BattleResultBondsComponent_TypeInfo;
    if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
      v24 = BattleResultBondsComponent_TypeInfo;
    }
    UnityEngine_PlayerPrefs__DeleteKey(v24->static_fields->GET_EXIST_SVT_KEY, 0LL);
  }
  ActionExtensions__Call(*v13, 0LL);
}


void __fastcall TerminalSceneComponent__CheckOpenCampaignDirectBonus(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x22
  __int64 mTerminalList; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  System_Action_o **v14; // x20
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int v21; // w21
  __int64 v22; // x23
  bool IsBlankEarthAction; // w24
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  TerminalSceneComponent___c_c *v30; // x8
  __int64 v31; // x25
  System_Action_object__o *_9__253_0; // x26
  Il2CppObject *v33; // x27
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  System_Action_object__o *v47; // x26
  Il2CppObject *v48; // x27
  struct TerminalSceneComponent___c_StaticFields *v49; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  System_Action_object__o *v56; // x26
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  ActionChain_o *v63; // x22
  const MethodInfo *v64; // x2
  System_Collections_IEnumerator_o *v65; // x0

  if ( (byte_4BDE6CA & 1) == 0 )
  {
    sub_1C21E38(&ActionChain_TypeInfo);
    sub_1C21E38(&System_Action_Action____TypeInfo);
    sub_1C21E38(&System_Action_Action__TypeInfo);
    sub_1C21E38(&Method_TerminalSceneComponent___c__CheckOpenCampaignDirectBonus_b__253_0__);
    sub_1C21E38(&Method_TerminalSceneComponent___c__CheckOpenCampaignDirectBonus_b__253_1__);
    sub_1C21E38(&Method_TerminalSceneComponent___c__DisplayClass253_0__CheckOpenCampaignDirectBonus_b__2__);
    sub_1C21E38(&TerminalSceneComponent___c__DisplayClass253_0_TypeInfo);
    sub_1C21E38(&TerminalSceneComponent___c_TypeInfo);
    byte_4BDE6CA = 1;
  }
  v5 = sub_1C22084(TerminalSceneComponent___c__DisplayClass253_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_33;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  v14 = (System_Action_o **)(v5 + 24);
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 24), (int64_t)callback, v15, v16, v17, v18, v19, v20);
  mTerminalList = (__int64)this->fields.mTerminalList;
  this->fields._IsPlayingCampaignDirectBonus_k__BackingField = 1;
  if ( !mTerminalList )
    goto LABEL_33;
  mTerminalList = ScrTerminalListTop__CheckTerminalTopEffect((ScrTerminalListTop_o *)mTerminalList, 0LL);
  if ( !this->fields.mTerminalList )
    goto LABEL_33;
  v21 = mTerminalList;
  mTerminalList = (__int64)ScrTerminalListTop__GetCurrentLoginEntity(this->fields.mTerminalList, 0LL);
  if ( !this->fields.mTerminalList )
    goto LABEL_33;
  v22 = mTerminalList;
  IsBlankEarthAction = ScrTerminalListTop__IsBlankEarthAction(this->fields.mTerminalList, 0LL);
  mTerminalList = sub_1C21EE0(System_Action_Action____TypeInfo, 3LL);
  v30 = TerminalSceneComponent___c_TypeInfo;
  v31 = mTerminalList;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v30 = TerminalSceneComponent___c_TypeInfo;
  }
  _9__253_0 = (System_Action_object__o *)v30->static_fields->__9__253_0;
  if ( !_9__253_0 )
  {
    if ( !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      v30 = TerminalSceneComponent___c_TypeInfo;
    }
    v33 = (Il2CppObject *)v30->static_fields->__9;
    _9__253_0 = (System_Action_object__o *)sub_1C22084(System_Action_Action__TypeInfo);
    System_Action_object____ctor(
      _9__253_0,
      v33,
      Method_TerminalSceneComponent___c__CheckOpenCampaignDirectBonus_b__253_0__,
      0LL);
    static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    static_fields->__9__253_0 = (struct System_Action_Action__o *)_9__253_0;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__253_0,
      (int64_t)_9__253_0,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
  }
  if ( !v31 )
    goto LABEL_33;
  if ( !*(_DWORD *)(v31 + 24) )
    goto LABEL_34;
  *(_QWORD *)(v31 + 32) = _9__253_0;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v31 + 32), (int64_t)_9__253_0, v24, v25, v26, v27, v28, v29);
  mTerminalList = (__int64)TerminalSceneComponent___c_TypeInfo;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    mTerminalList = (__int64)TerminalSceneComponent___c_TypeInfo;
  }
  v47 = *(System_Action_object__o **)(*(_QWORD *)(mTerminalList + 184) + 136LL);
  if ( !v47 )
  {
    if ( !*(_DWORD *)(mTerminalList + 224) )
    {
      j_il2cpp_runtime_class_init_0(mTerminalList);
      mTerminalList = (__int64)TerminalSceneComponent___c_TypeInfo;
    }
    v48 = **(Il2CppObject ***)(mTerminalList + 184);
    v47 = (System_Action_object__o *)sub_1C22084(System_Action_Action__TypeInfo);
    System_Action_object____ctor(
      v47,
      v48,
      Method_TerminalSceneComponent___c__CheckOpenCampaignDirectBonus_b__253_1__,
      0LL);
    v49 = TerminalSceneComponent___c_TypeInfo->static_fields;
    v49->__9__253_1 = (struct System_Action_Action__o *)v47;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v49->__9__253_1, (int64_t)v47, v50, v51, v52, v53, v54, v55);
  }
  if ( *(_DWORD *)(v31 + 24) <= 1u
    || (*(_QWORD *)(v31 + 40) = v47,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v31 + 40), (int64_t)v47, v41, v42, v43, v44, v45, v46),
        v56 = (System_Action_object__o *)sub_1C22084(System_Action_Action__TypeInfo),
        System_Action_object____ctor(
          v56,
          (Il2CppObject *)v5,
          Method_TerminalSceneComponent___c__DisplayClass253_0__CheckOpenCampaignDirectBonus_b__2__,
          0LL),
        *(_DWORD *)(v31 + 24) <= 2u) )
  {
LABEL_34:
    sub_1C2209C(mTerminalList, v7);
  }
  *(_QWORD *)(v31 + 48) = v56;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v31 + 48), (int64_t)v56, v57, v58, v59, v60, v61, v62);
  v63 = (ActionChain_o *)sub_1C22084(ActionChain_TypeInfo);
  ActionChain___ctor_47730872(v63, (System_Action_Action__array *)v31, 0LL);
  if ( v21 <= 0 && v22 == 0 && !IsBlankEarthAction )
  {
    if ( v63 )
    {
      ChainableActionBase__Execute((ChainableActionBase_o *)v63, 0LL);
      return;
    }
LABEL_33:
    sub_1C22094(mTerminalList, v7);
  }
  if ( !v22 && v21 >= 1 )
  {
    v65 = TerminalSceneComponent__CoWaitTerminalTopEffectEnd(this, v63, v64);
LABEL_31:
    UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, v65, 0LL);
    return;
  }
  if ( IsBlankEarthAction )
  {
    v65 = TerminalSceneComponent__CoWaitBlankEarthActionEnd(this, v63, v64);
    goto LABEL_31;
  }
  this->fields._IsPlayingCampaignDirectBonus_k__BackingField = 0;
  ActionExtensions__Call(*v14, 0LL);
}


bool __fastcall TerminalSceneComponent__CheckPlayChapterStart(
        TerminalSceneComponent_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  WarEntity_o *WarEntityByWarID; // x0
  WarEntity_o *v7; // x20
  int32_t StartType; // w0
  int64_t targetId; // x19

  if ( (byte_4BDE6BF & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BDE6BF = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)Instance, warId, 0LL);
  if ( !WarEntityByWarID )
    return (char)WarEntityByWarID;
  v7 = WarEntityByWarID;
  StartType = WarEntity__GetStartType(WarEntityByWarID, 0LL);
  if ( StartType != 2 )
  {
    if ( StartType != 1 )
      goto LABEL_10;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( TerminalPramsManager__IsWarStartedId(warId, 0LL) )
      goto LABEL_10;
LABEL_13:
    LOBYTE(WarEntityByWarID) = 1;
    return (char)WarEntityByWarID;
  }
  targetId = v7->fields.targetId;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
LABEL_15:
    sub_1C22094(Instance, v5);
  if ( !clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, targetId, 0, 0LL) )
    goto LABEL_13;
LABEL_10:
  LOBYTE(WarEntityByWarID) = 0;
  return (char)WarEntityByWarID;
}


void __fastcall TerminalSceneComponent__CheckRewardPopupChain(
        TerminalSceneComponent_o *this,
        System_Action_o *afterChain,
        bool checkTutorialEnded,
        bool noExecuteCondition,
        const MethodInfo *method)
{
  __int64 v9; // x20
  void *Instance; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  TerminalSceneComponent_o *CampaignDirectBonus; // x0
  const MethodInfo *v25; // x2
  __int64 v26; // x0
  Il2CppObject *mTerminalList; // x23
  __int64 v28; // x21
  System_Action_object__o *v29; // x22
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  System_Action_object__o *v36; // x22
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  System_Action_object__o *v43; // x22
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  Il2CppObject *v50; // x24
  System_Action_object__o *v51; // x22
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  Il2CppObject *v58; // x24
  System_Action_object__o *v59; // x22
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  Il2CppObject *v66; // x24
  System_Action_object__o *v67; // x22
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  System_Action_object__o *v74; // x22
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  System_Action_object__o *v81; // x22
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  System_Action_object__o *v88; // x22
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  int64_t v95; // x2
  int32_t v96; // w3
  System_String_o *v97; // x4
  BattleSetupInfo_o *v98; // x5
  FollowerInfo_o *v99; // x6
  PartyListViewItem_o *v100; // x7
  System_Action_object__o *v101; // x22
  Il2CppObject *v102; // x23
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int64_t v104; // x2
  int32_t v105; // w3
  System_String_o *v106; // x4
  BattleSetupInfo_o *v107; // x5
  FollowerInfo_o *v108; // x6
  PartyListViewItem_o *v109; // x7
  System_Action_object__o *v110; // x22
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7
  System_Action_object__o *v117; // x22
  int64_t v118; // x2
  int32_t v119; // w3
  System_String_o *v120; // x4
  BattleSetupInfo_o *v121; // x5
  FollowerInfo_o *v122; // x6
  PartyListViewItem_o *v123; // x7
  System_Action_object__o *v124; // x22
  int64_t v125; // x2
  int32_t v126; // w3
  System_String_o *v127; // x4
  BattleSetupInfo_o *v128; // x5
  FollowerInfo_o *v129; // x6
  PartyListViewItem_o *v130; // x7
  System_Action_object__o *v131; // x22
  int64_t v132; // x2
  int32_t v133; // w3
  System_String_o *v134; // x4
  BattleSetupInfo_o *v135; // x5
  FollowerInfo_o *v136; // x6
  PartyListViewItem_o *v137; // x7
  System_Action_object__o *v138; // x22
  int64_t v139; // x2
  int32_t v140; // w3
  System_String_o *v141; // x4
  BattleSetupInfo_o *v142; // x5
  FollowerInfo_o *v143; // x6
  PartyListViewItem_o *v144; // x7
  System_Action_object__o *v145; // x22
  int64_t v146; // x2
  int32_t v147; // w3
  System_String_o *v148; // x4
  BattleSetupInfo_o *v149; // x5
  FollowerInfo_o *v150; // x6
  PartyListViewItem_o *v151; // x7
  System_Action_object__o *v152; // x19
  int64_t v153; // x2
  int32_t v154; // w3
  System_String_o *v155; // x4
  BattleSetupInfo_o *v156; // x5
  FollowerInfo_o *v157; // x6
  PartyListViewItem_o *v158; // x7
  ActionChain_o *v159; // x19
  __int64 v160; // x21
  System_Action_o *v161; // x22
  int64_t v162; // x2
  int32_t v163; // w3
  System_String_o *v164; // x4
  BattleSetupInfo_o *v165; // x5
  FollowerInfo_o *v166; // x6
  PartyListViewItem_o *v167; // x7

  if ( (byte_4BDE6C8 & 1) == 0 )
  {
    sub_1C21E38(&ActionChain_TypeInfo);
    sub_1C21E38(&System_Action___TypeInfo);
    sub_1C21E38(&System_Action_Action____TypeInfo);
    sub_1C21E38(&System_Action_Action__TypeInfo);
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_CommonUI_StartLoginMessages__);
    sub_1C21E38(&Method_CommonUI_StartServantEventJoinLeaveNotification__);
    sub_1C21E38(&Method_ScrTerminalListTop_ShowTerminalMessagesDialogue__);
    sub_1C21E38(&Method_ScrTerminalListTop_StartShowWarClearReward__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&Method_TerminalSceneComponent_CheckAfterQuestClearDialog__);
    sub_1C21E38(&Method_TerminalSceneComponent_CheckExchangeDialogTheFree__);
    sub_1C21E38(&Method_TerminalSceneComponent_CheckExchangeDialogTheReturn__);
    sub_1C21E38(&Method_TerminalSceneComponent_CheckMasterMissionReset__);
    sub_1C21E38(&Method_TerminalSceneComponent_CheckNotificationDialog__);
    sub_1C21E38(&Method_TerminalSceneComponent_CheckSaveRouteSelect__);
    sub_1C21E38(&Method_TerminalSceneComponent_CheckSpecialAscensionTutorial__);
    sub_1C21E38(&Method_TerminalSceneComponent_CheckTutorialOnTerminalAfterFreeExchangeDialog__);
    sub_1C21E38(&Method_TerminalSceneComponent_CheckTutorialOnTerminal__);
    sub_1C21E38(&TutorialFlag_TypeInfo);
    sub_1C21E38(&Method_TerminalSceneComponent___c__CheckRewardPopupChain_b__251_2__);
    sub_1C21E38(&Method_TerminalSceneComponent___c__DisplayClass251_0__CheckRewardPopupChain_b__0__);
    sub_1C21E38(&Method_TerminalSceneComponent___c__DisplayClass251_0__CheckRewardPopupChain_b__1__);
    sub_1C21E38(&Method_TerminalSceneComponent___c__DisplayClass251_0__CheckRewardPopupChain_b__3__);
    sub_1C21E38(&Method_TerminalSceneComponent___c__DisplayClass251_0__CheckRewardPopupChain_b__4__);
    sub_1C21E38(&TerminalSceneComponent___c__DisplayClass251_0_TypeInfo);
    sub_1C21E38(&TerminalSceneComponent___c_TypeInfo);
    byte_4BDE6C8 = 1;
  }
  v9 = sub_1C22084(TerminalSceneComponent___c__DisplayClass251_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_44;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = afterChain;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 24), (int64_t)afterChain, v18, v19, v20, v21, v22, v23);
  if ( !checkTutorialEnded )
    goto LABEL_8;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_38930984(102, 0LL) )
  {
LABEL_8:
    if ( !noExecuteCondition )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CampaignDirectBonus = (TerminalSceneComponent_o *)CommonUI__get_CampaignDirectBonus((CommonUI_o *)Instance, 0LL);
        TerminalSceneComponent__SaveCampaignDirectBonusData(
          CampaignDirectBonus,
          (CommonUI_CampaignDirectBonusData_array *)CampaignDirectBonus,
          v25);
        v26 = sub_1C21EE0(System_Action_Action____TypeInfo, 17LL);
        mTerminalList = (Il2CppObject *)this->fields.mTerminalList;
        v28 = v26;
        v29 = (System_Action_object__o *)sub_1C22084(System_Action_Action__TypeInfo);
        System_Action_object____ctor(v29, mTerminalList, Method_ScrTerminalListTop_StartShowWarClearReward__, 0LL);
        if ( v28 )
        {
          if ( !*(_DWORD *)(v28 + 24) )
            goto LABEL_43;
          *(_QWORD *)(v28 + 32) = v29;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v28 + 32), (int64_t)v29, v30, v31, v32, v33, v34, v35);
          v36 = (System_Action_object__o *)sub_1C22084(System_Action_Action__TypeInfo);
          System_Action_object____ctor(
            v36,
            (Il2CppObject *)this,
            Method_TerminalSceneComponent_CheckAfterQuestClearDialog__,
            0LL);
          if ( *(_DWORD *)(v28 + 24) <= 1u )
            goto LABEL_43;
          *(_QWORD *)(v28 + 40) = v36;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v28 + 40), (int64_t)v36, v37, v38, v39, v40, v41, v42);
          v43 = (System_Action_object__o *)sub_1C22084(System_Action_Action__TypeInfo);
          System_Action_object____ctor(
            v43,
            (Il2CppObject *)v9,
            Method_TerminalSceneComponent___c__DisplayClass251_0__CheckRewardPopupChain_b__0__,
            0LL);
          if ( *(_DWORD *)(v28 + 24) <= 2u )
            goto LABEL_43;
          *(_QWORD *)(v28 + 48) = v43;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v28 + 48), (int64_t)v43, v44, v45, v46, v47, v48, v49);
          v50 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v51 = (System_Action_object__o *)sub_1C22084(System_Action_Action__TypeInfo);
          System_Action_object____ctor(v51, v50, Method_CommonUI_StartServantEventJoinLeaveNotification__, 0LL);
          if ( *(_DWORD *)(v28 + 24) <= 3u )
            goto LABEL_43;
          *(_QWORD *)(v28 + 56) = v51;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v28 + 56), (int64_t)v51, v52, v53, v54, v55, v56, v57);
          v58 = (Il2CppObject *)this->fields.mTerminalList;
          v59 = (System_Action_object__o *)sub_1C22084(System_Action_Action__TypeInfo);
          System_Action_object____ctor(v59, v58, Method_ScrTerminalListTop_ShowTerminalMessagesDialogue__, 0LL);
          if ( *(_DWORD *)(v28 + 24) <= 4u )
            goto LABEL_43;
          *(_QWORD *)(v28 + 64) = v59;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v28 + 64), (int64_t)v59, v60, v61, v62, v63, v64, v65);
          v66 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v67 = (System_Action_object__o *)sub_1C22084(System_Action_Action__TypeInfo);
          System_Action_object____ctor(v67, v66, Method_CommonUI_StartLoginMessages__, 0LL);
          if ( *(_DWORD *)(v28 + 24) <= 5u )
            goto LABEL_43;
          *(_QWORD *)(v28 + 72) = v67;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v28 + 72), (int64_t)v67, v68, v69, v70, v71, v72, v73);
          v74 = (System_Action_object__o *)sub_1C22084(System_Action_Action__TypeInfo);
          System_Action_object____ctor(
            v74,
            (Il2CppObject *)v9,
            Method_TerminalSceneComponent___c__DisplayClass251_0__CheckRewardPopupChain_b__1__,
            0LL);
          if ( *(_DWORD *)(v28 + 24) <= 6u )
            goto LABEL_43;
          *(_QWORD *)(v28 + 80) = v74;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v28 + 80), (int64_t)v74, v75, v76, v77, v78, v79, v80);
          v81 = (System_Action_object__o *)sub_1C22084(System_Action_Action__TypeInfo);
          System_Action_object____ctor(
            v81,
            (Il2CppObject *)this,
            Method_TerminalSceneComponent_CheckSpecialAscensionTutorial__,
            0LL);
          if ( *(_DWORD *)(v28 + 24) <= 7u )
            goto LABEL_43;
          *(_QWORD *)(v28 + 88) = v81;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v28 + 88), (int64_t)v81, v82, v83, v84, v85, v86, v87);
          v88 = (System_Action_object__o *)sub_1C22084(System_Action_Action__TypeInfo);
          System_Action_object____ctor(
            v88,
            (Il2CppObject *)this,
            Method_TerminalSceneComponent_CheckTutorialOnTerminal__,
            0LL);
          if ( *(_DWORD *)(v28 + 24) <= 8u )
            goto LABEL_43;
          *(_QWORD *)(v28 + 96) = v88;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v28 + 96), (int64_t)v88, v89, v90, v91, v92, v93, v94);
          Instance = TerminalSceneComponent___c_TypeInfo;
          if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
            Instance = TerminalSceneComponent___c_TypeInfo;
          }
          v101 = *(System_Action_object__o **)(*((_QWORD *)Instance + 23) + 112LL);
          if ( !v101 )
          {
            if ( !*((_DWORD *)Instance + 56) )
            {
              j_il2cpp_runtime_class_init_0(Instance);
              Instance = TerminalSceneComponent___c_TypeInfo;
            }
            v102 = (Il2CppObject *)**((_QWORD **)Instance + 23);
            v101 = (System_Action_object__o *)sub_1C22084(System_Action_Action__TypeInfo);
            System_Action_object____ctor(
              v101,
              v102,
              Method_TerminalSceneComponent___c__CheckRewardPopupChain_b__251_2__,
              0LL);
            static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
            static_fields->__9__251_2 = (struct System_Action_Action__o *)v101;
            sub_1C21DDC(
              (PartyOrganizationUtility_o *)&static_fields->__9__251_2,
              (int64_t)v101,
              v104,
              v105,
              v106,
              v107,
              v108,
              v109);
          }
          if ( *(_DWORD *)(v28 + 24) <= 9u )
            goto LABEL_43;
          *(_QWORD *)(v28 + 104) = v101;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v28 + 104), (int64_t)v101, v95, v96, v97, v98, v99, v100);
          v110 = (System_Action_object__o *)sub_1C22084(System_Action_Action__TypeInfo);
          System_Action_object____ctor(
            v110,
            (Il2CppObject *)this,
            Method_TerminalSceneComponent_CheckNotificationDialog__,
            0LL);
          if ( *(_DWORD *)(v28 + 24) <= 0xAu )
            goto LABEL_43;
          *(_QWORD *)(v28 + 112) = v110;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v28 + 112), (int64_t)v110, v111, v112, v113, v114, v115, v116);
          v117 = (System_Action_object__o *)sub_1C22084(System_Action_Action__TypeInfo);
          System_Action_object____ctor(
            v117,
            (Il2CppObject *)this,
            Method_TerminalSceneComponent_CheckMasterMissionReset__,
            0LL);
          if ( *(_DWORD *)(v28 + 24) <= 0xBu )
            goto LABEL_43;
          *(_QWORD *)(v28 + 120) = v117;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v28 + 120), (int64_t)v117, v118, v119, v120, v121, v122, v123);
          v124 = (System_Action_object__o *)sub_1C22084(System_Action_Action__TypeInfo);
          System_Action_object____ctor(
            v124,
            (Il2CppObject *)this,
            Method_TerminalSceneComponent_CheckSaveRouteSelect__,
            0LL);
          if ( *(_DWORD *)(v28 + 24) <= 0xCu )
            goto LABEL_43;
          *(_QWORD *)(v28 + 128) = v124;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v28 + 128), (int64_t)v124, v125, v126, v127, v128, v129, v130);
          v131 = (System_Action_object__o *)sub_1C22084(System_Action_Action__TypeInfo);
          System_Action_object____ctor(
            v131,
            (Il2CppObject *)this,
            Method_TerminalSceneComponent_CheckExchangeDialogTheFree__,
            0LL);
          if ( *(_DWORD *)(v28 + 24) <= 0xDu )
            goto LABEL_43;
          *(_QWORD *)(v28 + 136) = v131;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v28 + 136), (int64_t)v131, v132, v133, v134, v135, v136, v137);
          v138 = (System_Action_object__o *)sub_1C22084(System_Action_Action__TypeInfo);
          System_Action_object____ctor(
            v138,
            (Il2CppObject *)this,
            Method_TerminalSceneComponent_CheckExchangeDialogTheReturn__,
            0LL);
          if ( *(_DWORD *)(v28 + 24) <= 0xEu )
            goto LABEL_43;
          *(_QWORD *)(v28 + 144) = v138;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v28 + 144), (int64_t)v138, v139, v140, v141, v142, v143, v144);
          v145 = (System_Action_object__o *)sub_1C22084(System_Action_Action__TypeInfo);
          System_Action_object____ctor(
            v145,
            (Il2CppObject *)this,
            Method_TerminalSceneComponent_CheckTutorialOnTerminalAfterFreeExchangeDialog__,
            0LL);
          if ( *(_DWORD *)(v28 + 24) <= 0xFu )
            goto LABEL_43;
          *(_QWORD *)(v28 + 152) = v145;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v28 + 152), (int64_t)v145, v146, v147, v148, v149, v150, v151);
          v152 = (System_Action_object__o *)sub_1C22084(System_Action_Action__TypeInfo);
          System_Action_object____ctor(
            v152,
            (Il2CppObject *)v9,
            Method_TerminalSceneComponent___c__DisplayClass251_0__CheckRewardPopupChain_b__3__,
            0LL);
          if ( *(_DWORD *)(v28 + 24) <= 0x10u )
            goto LABEL_43;
          *(_QWORD *)(v28 + 160) = v152;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v28 + 160), (int64_t)v152, v153, v154, v155, v156, v157, v158);
          v159 = (ActionChain_o *)sub_1C22084(ActionChain_TypeInfo);
          ActionChain___ctor_47730872(v159, (System_Action_Action__array *)v28, 0LL);
          v160 = sub_1C21EE0(System_Action___TypeInfo, 1LL);
          v161 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
          System_Action___ctor(
            v161,
            (Il2CppObject *)v9,
            Method_TerminalSceneComponent___c__DisplayClass251_0__CheckRewardPopupChain_b__4__,
            0LL);
          if ( !v160 )
            goto LABEL_44;
          if ( !*(_DWORD *)(v160 + 24) )
LABEL_43:
            sub_1C2209C(Instance, v11);
          *(_QWORD *)(v160 + 32) = v161;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v160 + 32), (int64_t)v161, v162, v163, v164, v165, v166, v167);
          if ( v159 )
          {
            Instance = ChainableActionBase__Final((ChainableActionBase_o *)v159, (System_Action_array *)v160, 0LL);
            if ( Instance )
            {
              ChainableActionBase__Execute((ChainableActionBase_o *)Instance, 0LL);
              goto LABEL_40;
            }
          }
        }
      }
LABEL_44:
      sub_1C22094(Instance, v11);
    }
  }
  ActionExtensions__Call(*(System_Action_o **)(v9 + 24), 0LL);
LABEL_40:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__DeleteClearDatas(0LL);
}


void __fastcall TerminalSceneComponent__CheckSaveRouteSelect(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v4; // x19
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  NetworkManager_ResultCallbackFunc_o *v13; // x20
  System_Int32_array *routes; // [xsp+8h] [xbp-38h] BYREF
  int32_t phase; // [xsp+18h] [xbp-28h] BYREF
  int32_t questId; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4BDE6D0 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C21E38(&Method_NetworkManager_getRequest_BattleRouteSelectRequest___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C21E38(&ScriptManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_TerminalSceneComponent___c__DisplayClass260_0__CheckSaveRouteSelect_b__0__);
    sub_1C21E38(&TerminalSceneComponent___c__DisplayClass260_0_TypeInfo);
    byte_4BDE6D0 = 1;
  }
  v4 = sub_1C22084(TerminalSceneComponent___c__DisplayClass260_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4 )
    goto LABEL_19;
  *(_QWORD *)(v4 + 16) = callback;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v4 + 16), (int64_t)callback, v7, v8, v9, v10, v11, v12);
  phase = -1;
  questId = -1;
  routes = 0LL;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  if ( ScriptManager__GetSelectRouteArrayInCollection(&questId, &phase, &routes, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
    if ( !Instance )
      goto LABEL_19;
    if ( QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, questId, phase, 0LL) )
    {
      v13 = (NetworkManager_ResultCallbackFunc_o *)sub_1C22084(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v13,
        (Il2CppObject *)v4,
        Method_TerminalSceneComponent___c__DisplayClass260_0__CheckSaveRouteSelect_b__0__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager__getRequest_object_(
                   v13,
                   (const MethodInfo_30345EC *)Method_NetworkManager_getRequest_BattleRouteSelectRequest___);
      if ( Instance )
      {
        BattleRouteSelectRequest__beginRequest((BattleRouteSelectRequest_o *)Instance, questId, phase, routes, 0LL);
        return;
      }
LABEL_19:
      sub_1C22094(Instance, v6);
    }
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    ScriptManager__ClearSelectRouteArray(0LL);
    ScriptManager__ClearSelectRouteArrayInCollection(0LL);
  }
  ActionExtensions__Call(*(System_Action_o **)(v4 + 16), 0LL);
}


void __fastcall TerminalSceneComponent__CheckSpecialAscensionTutorial(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *v4; // x20
  struct ScrTerminalMap_o *mTerminalMap; // x8

  v4 = this;
  if ( (byte_4BDE6D3 & 1) == 0 )
  {
    this = (TerminalSceneComponent_o *)sub_1C21E38(&CombineRootComponent_TypeInfo);
    byte_4BDE6D3 = 1;
  }
  if ( !v4->fields.isTutorialAfter )
  {
    mTerminalMap = v4->fields.mTerminalMap;
    if ( !mTerminalMap || (this = (TerminalSceneComponent_o *)mTerminalMap->fields.dispRoot) == 0LL )
      sub_1C22094(this, callback);
    if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL) )
      goto LABEL_11;
  }
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
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
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  bool v5; // w20
  TerminalPramsManager_c *v6; // x0
  int32_t FirstWarId; // w21
  TerminalPramsManager_c *v8; // x0
  Il2CppObject *v9; // x0
  clsQuestCheck_o *v10; // x21
  int32_t v11; // w0
  int32_t v12; // w0
  int32_t v13; // w0
  int32_t v14; // w0
  int32_t v15; // w8
  int32_t Value; // w21
  TerminalPramsManager_c *v17; // x0
  TerminalPramsManager_c *v19; // x0
  int32_t v20; // w1

  if ( (byte_4BDE6BC & 1) == 0 )
  {
    sub_1C21E38(&OpeningMovieData_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&TutorialFlag_TypeInfo);
    sub_1C21E38(&StringLiteral_13769/*"TUTORIAL_QUEST_ID1"*/);
    sub_1C21E38(&StringLiteral_13770/*"TUTORIAL_QUEST_ID2"*/);
    sub_1C21E38(&StringLiteral_13771/*"TUTORIAL_QUEST_ID3"*/);
    sub_1C21E38(&StringLiteral_13772/*"TUTORIAL_QUEST_ID4"*/);
    byte_4BDE6BC = 1;
  }
  this->fields.mTutorialKind = 0;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_38930984(102, 0LL) )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( TutorialFlag__GetProgress(0LL) == 4 )
      return 0;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__CloseTutorialNotificationDialogArrow(Instance, 0LL);
      this->fields.isTutorialAfter = 1;
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      TutorialFlag__CompleteProgress(0LL);
      return 0;
    }
LABEL_83:
    sub_1C22094(Instance, v4);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD90A1 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD90A1 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  this->fields.mIsStart_LoginBonusWhiteBg = !v6->static_fields->_IsAutoResume_k__BackingField;
  if ( !byte_4BD736A )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
    byte_4BD736A = 1;
  }
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v6->static_fields->_IsAutoResume_k__BackingField = 1;
  if ( !byte_4BD909C )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
    byte_4BD909C = 1;
  }
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v6->static_fields->_DispState_k__BackingField = 2;
  if ( !OpeningMovieData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OpeningMovieData_TypeInfo);
  FirstWarId = OpeningMovieData__GetFirstWarId(0LL);
  if ( !byte_4BD90A0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD90A0 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v8->static_fields->_WarId_k__BackingField = FirstWarId;
  if ( !byte_4BD909F )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
    byte_4BD909F = 1;
  }
  if ( !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v8->static_fields->_SpotId_k__BackingField = -1;
  Instance = (CommonUI_o *)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_83;
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)Instance, 0, 0LL);
  MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
  Instance = (CommonUI_o *)this->fields.mPlayerStatus;
  if ( !Instance )
    goto LABEL_83;
  ScrPlayerStatus__DisableAllBtn((ScrPlayerStatus_o *)Instance, 0LL);
  v9 = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  this->fields.mTutorialKind = 5;
  v10 = (clsQuestCheck_o *)v9;
  Instance = (CommonUI_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_13769/*"TUTORIAL_QUEST_ID1"*/, 0LL);
  if ( !v10 )
    goto LABEL_83;
  if ( !clsQuestCheck__IsQuestClear(v10, (int32_t)Instance, 0, 0LL) )
  {
    Value = ConstantMaster__getValue((System_String_o *)StringLiteral_13769/*"TUTORIAL_QUEST_ID1"*/, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD909A )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD909A = 1;
    }
    v17 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v17 = TerminalPramsManager_TypeInfo;
    }
    v17->static_fields->_QuestId_k__BackingField = Value;
    Instance = (CommonUI_o *)this->fields.mTerminalList;
    if ( Instance )
    {
      ScrTerminalListTop__SelectedQuest((ScrTerminalListTop_o *)Instance, 0LL);
      return 1;
    }
    goto LABEL_83;
  }
  v11 = ConstantMaster__getValue((System_String_o *)StringLiteral_13770/*"TUTORIAL_QUEST_ID2"*/, 0LL);
  if ( !clsQuestCheck__IsQuestClear(v10, v11, 0, 0LL) )
  {
    v5 = 0;
    v15 = 1;
    goto LABEL_70;
  }
  v12 = ConstantMaster__getValue((System_String_o *)StringLiteral_13771/*"TUTORIAL_QUEST_ID3"*/, 0LL);
  if ( !clsQuestCheck__IsQuestClear(v10, v12, 0, 0LL) )
  {
    v5 = 0;
    v15 = 2;
    goto LABEL_70;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__IsProgressDone(1, 0LL) )
  {
    v5 = 0;
    v15 = 3;
    goto LABEL_70;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_38930984(101, 0LL) )
    goto LABEL_86;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__IsProgressDone(2, 0LL) )
  {
LABEL_86:
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD8C41 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD8C41 = 1;
    }
    v19 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v19 = TerminalPramsManager_TypeInfo;
    }
    v19->static_fields->_SummonType_k__BackingField = 1;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_83;
    v20 = 20;
LABEL_80:
    v5 = 1;
    AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, v20, 1, 0LL, 0LL);
    return v5;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__IsProgressDone(3, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_83;
    v20 = 40;
    goto LABEL_80;
  }
  v13 = ConstantMaster__getValue((System_String_o *)StringLiteral_13772/*"TUTORIAL_QUEST_ID4"*/, 0LL);
  v5 = 0;
  if ( clsQuestCheck__IsQuestClear(v10, v13, 0, 0LL) )
    return v5;
  v14 = ConstantMaster__getValue((System_String_o *)StringLiteral_13772/*"TUTORIAL_QUEST_ID4"*/, 0LL);
  if ( clsQuestCheck__mfGetQuestPhaseByQuestID(v10, v14, 0LL) <= 0 )
  {
    v5 = 0;
    v15 = 4;
LABEL_70:
    this->fields.mTutorialKind = v15;
    return v5;
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
    sub_1C22094(this, callback);
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
  TerminalTransitionInfo_o *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BDE696 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&TerminalTransitionInfo_TypeInfo);
    byte_4BDE696 = 1;
  }
  v3 = (TerminalTransitionInfo_o *)sub_1C22084(TerminalTransitionInfo_TypeInfo);
  TerminalTransitionInfo___ctor(v3, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__TerminalTransitionInfoSave_SaveData(v3, 0LL);
  this->fields._TransitionInfo_k__BackingField = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields._TransitionInfo_k__BackingField, 0LL, v4, v5, v6, v7, v8, v9);
}


System_Collections_IEnumerator_o *__fastcall TerminalSceneComponent__CoWaitBlankEarthActionEnd(
        TerminalSceneComponent_o *this,
        ActionChain_o *openCampaignDirectBonus,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4BDE6CC & 1) == 0 )
  {
    sub_1C21E38(&TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__255_TypeInfo);
    byte_4BDE6CC = 1;
  }
  v5 = sub_1C22084(TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__255_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = openCampaignDirectBonus;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)openCampaignDirectBonus, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall TerminalSceneComponent__CoWaitTerminalTopEffectEnd(
        TerminalSceneComponent_o *this,
        ActionChain_o *openCampaignDirectBonus,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4BDE6CB & 1) == 0 )
  {
    sub_1C21E38(&TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__254_TypeInfo);
    byte_4BDE6CB = 1;
  }
  v5 = sub_1C22084(TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__254_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = openCampaignDirectBonus;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)openCampaignDirectBonus, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall TerminalSceneComponent__CreateTransitionInfo(
        TerminalSceneComponent_o *this,
        TerminalTransitionInfo_o *info,
        const MethodInfo *method)
{
  TerminalTransitionInfo_o *v5; // x21
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  __int64 v12; // x1
  TerminalTransitionInfo_o *TransitionInfo_k__BackingField; // x0

  if ( (byte_4BDE695 & 1) == 0 )
  {
    sub_1C21E38(&TerminalTransitionInfo_TypeInfo);
    byte_4BDE695 = 1;
  }
  v5 = (TerminalTransitionInfo_o *)sub_1C22084(TerminalTransitionInfo_TypeInfo);
  TerminalTransitionInfo___ctor(v5, 0LL);
  this->fields._TransitionInfo_k__BackingField = v5;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._TransitionInfo_k__BackingField,
    (int64_t)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  TransitionInfo_k__BackingField = this->fields._TransitionInfo_k__BackingField;
  if ( !TransitionInfo_k__BackingField )
    sub_1C22094(0LL, v12);
  TerminalTransitionInfo__SetParameters(TransitionInfo_k__BackingField, info, 0LL);
}


void __fastcall TerminalSceneComponent__EndAuto(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  ScrPlayerStatus_o *mPlayerStatus; // x19
  QuestAfterAction_o *Instance; // x0

  if ( (byte_4BDE6A7 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BDE6A7 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BDE78C )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BDE78C = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  if ( v3->static_fields->mIsAutoOpenMasterMission )
  {
    mPlayerStatus = this->fields.mPlayerStatus;
    if ( !v3->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v3);
    if ( !byte_4BDE78D )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BDE78D = 1;
    }
    Instance = (QuestAfterAction_o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Instance = (QuestAfterAction_o *)TerminalPramsManager_TypeInfo;
    }
    if ( !mPlayerStatus )
      goto LABEL_29;
    ScrPlayerStatus__OpenMasterMission(
      mPlayerStatus,
      0LL,
      HIDWORD(Instance->fields.lastDispSpot[2].fields._MapModelCamera_k__BackingField),
      0LL);
    if ( !byte_4BD7185 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD7185 = 1;
    }
    v3 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v3 = TerminalPramsManager_TypeInfo;
    }
    v3->static_fields->_MasterMissionTargetType_k__BackingField = -1;
  }
  if ( !v3->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v3);
  TerminalPramsManager__AutoOff(0LL);
  Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  if ( QuestAfterAction__IsExistTerminalTransition(Instance, 0LL) )
  {
    Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( Instance )
    {
      QuestAfterAction__Clear(Instance, 0LL);
      return;
    }
LABEL_29:
    sub_1C22094(Instance, method);
  }
}


float __fastcall TerminalSceneComponent__FSMenuOffsetX(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4BDE689 & 1) == 0 )
  {
    sub_1C21E38(&FSUtility_TypeInfo);
    byte_4BDE689 = 1;
  }
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
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


void __fastcall TerminalSceneComponent__FadeInAndTriggerEventEffects(
        TerminalSceneComponent_o *this,
        float fadeTime,
        int32_t eventId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x20
  AvalonSceneManager_o *Instance; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x3
  struct ScrTerminalListTop_o *mTerminalList; // x8
  System_Action_o *v27; // x2
  __int64 v28; // x8
  __int64 v29; // x8
  __int64 v30; // x8
  __int64 v31; // x8
  __int64 v32; // x21
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v34; // x1
  int32_t v35; // w22
  int32_t v36; // w23
  SceneJumpInfo_o *v37; // x21
  TerminalPramsManager_c *v38; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  TerminalPramsManager_c *v45; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  ScrTerminalMap_o *mTerminalMap; // x22
  int32_t v48; // w23
  System_String_o *MapModelEntryAnimationName; // x22
  TerminalPramsManager_c *v50; // x0
  Il2CppObject *v51; // x0
  float v52; // s8
  CommonUI_o *v53; // x19
  System_Action_o *v54; // x21
  Il2CppObject *v55; // x19
  System_Action_o *v56; // x21
  CommonUI_o *v57; // x21
  ScrTerminalMap_o *v58; // x19
  System_Action_o *v59; // x21

  if ( (byte_4BDE6A9 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&SceneJumpInfo_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&Method_TerminalSceneComponent___c__DisplayClass201_0__FadeInAndTriggerEventEffects_b__0__);
    sub_1C21E38(&Method_TerminalSceneComponent___c__DisplayClass201_0__FadeInAndTriggerEventEffects_b__1__);
    sub_1C21E38(&Method_TerminalSceneComponent___c__DisplayClass201_0__FadeInAndTriggerEventEffects_b__4__);
    sub_1C21E38(&TerminalSceneComponent___c__DisplayClass201_0_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDE6A9 = 1;
  }
  v9 = sub_1C22084(TerminalSceneComponent___c__DisplayClass201_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_99;
  *(float *)(v9 + 16) = fadeTime;
  *(_QWORD *)(v9 + 24) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 24), (int64_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 40) = callback;
  *(_DWORD *)(v9 + 32) = eventId;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 40), (int64_t)callback, v18, v19, v20, v21, v22, v23);
  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_99;
  v11 = *(unsigned int *)(v9 + 32);
  if ( mTerminalList->fields.isBackFromBlankEarthMap )
  {
    v27 = *(System_Action_o **)(v9 + 40);
LABEL_7:
    TerminalSceneComponent__FadeInAndTriggerEventEffectsNext(this, v11, v27, v25);
    return;
  }
  if ( (int)v11 >= 1 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD9B05 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD9B05 = 1;
    }
    Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
    }
    if ( *(_QWORD *)(*(_QWORD *)&Instance[1].fields.fadeType + 208LL) )
    {
      if ( !Instance[2].fields.m_CachedPtr )
        j_il2cpp_runtime_class_init_0(Instance);
      if ( !byte_4BD9B05 )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD9B05 = 1;
      }
      Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
      }
      v28 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields.fadeType + 208LL);
      if ( !v28 )
        goto LABEL_99;
      if ( *(_DWORD *)(v28 + 16) == *(_DWORD *)(v9 + 32) )
      {
        if ( !Instance[2].fields.m_CachedPtr )
          j_il2cpp_runtime_class_init_0(Instance);
        if ( !byte_4BD9B05 )
        {
          sub_1C21E38(&TerminalPramsManager_TypeInfo);
          byte_4BD9B05 = 1;
        }
        Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
        }
        v29 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields.fadeType + 208LL);
        if ( !v29 )
          goto LABEL_99;
        if ( *(_DWORD *)(v29 + 20) )
        {
          if ( !Instance[2].fields.m_CachedPtr )
            j_il2cpp_runtime_class_init_0(Instance);
          if ( !byte_4BD9B05 )
          {
            sub_1C21E38(&TerminalPramsManager_TypeInfo);
            byte_4BD9B05 = 1;
          }
          Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
          }
          v30 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields.fadeType + 208LL);
          if ( v30 )
          {
            if ( *(_DWORD *)(v30 + 20) == 1 )
            {
              if ( !Instance[2].fields.m_CachedPtr )
                j_il2cpp_runtime_class_init_0(Instance);
              if ( !byte_4BD9B05 )
              {
                sub_1C21E38(&TerminalPramsManager_TypeInfo);
                byte_4BD9B05 = 1;
              }
              Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
              }
              v31 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields.fadeType + 208LL);
              if ( !v31 )
                goto LABEL_99;
              v32 = *(_QWORD *)(v31 + 24);
              if ( v32
                && *(int *)(v32 + 24) >= 1
                && !(IsNullOrEmpty = System_String__IsNullOrEmpty(*(System_String_o **)(v32 + 32), 0LL)) )
              {
                if ( !*(_DWORD *)(v32 + 24) )
                  sub_1C2209C(IsNullOrEmpty, v34);
                v35 = System_Int32__Parse(*(System_String_o **)(v32 + 32), 0LL) + 1;
              }
              else
              {
                v35 = 0;
              }
              v36 = *(_DWORD *)(v9 + 32);
              v37 = (SceneJumpInfo_o *)sub_1C22084(SceneJumpInfo_TypeInfo);
              SceneJumpInfo___ctor_39918404(v37, (System_String_o *)StringLiteral_1/*""*/, v36, v35, 0LL);
              Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
              if ( !Instance )
                goto LABEL_99;
              AvalonSceneManager__transitionScene(Instance, 72, 1, (Il2CppObject *)v37, 0LL);
              Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
            }
            if ( !Instance[2].fields.m_CachedPtr )
              j_il2cpp_runtime_class_init_0(Instance);
            if ( !byte_4BD9B05 )
            {
              sub_1C21E38(&TerminalPramsManager_TypeInfo);
              byte_4BD9B05 = 1;
            }
            v38 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v38 = TerminalPramsManager_TypeInfo;
            }
            Instance = (AvalonSceneManager_o *)v38->static_fields->_SpecifiedChangeSceneInfo_k__BackingField;
            if ( Instance )
            {
              SpecifiedSceneInfo__InitParameter((SpecifiedSceneInfo_o *)Instance, 0LL);
              if ( !byte_4BD9AE6 )
              {
                sub_1C21E38(&TerminalPramsManager_TypeInfo);
                byte_4BD9AE6 = 1;
              }
              v45 = TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v45 = TerminalPramsManager_TypeInfo;
              }
              static_fields = v45->static_fields;
              static_fields->_SpecifiedChangeSceneInfo_k__BackingField = 0LL;
              sub_1C21DDC(
                (PartyOrganizationUtility_o *)&static_fields->_SpecifiedChangeSceneInfo_k__BackingField,
                0LL,
                v39,
                v40,
                v41,
                v42,
                v43,
                v44);
              LODWORD(v11) = *(_DWORD *)(v9 + 32);
              v27 = *(System_Action_o **)(v9 + 40);
              goto LABEL_7;
            }
          }
LABEL_99:
          sub_1C22094(Instance, v11);
        }
      }
    }
  }
  if ( TerminalSceneComponent__IsEnabledMapOnEvent((TerminalSceneComponent_o *)Instance, *(_DWORD *)(v9 + 32), v24) )
  {
    Instance = (AvalonSceneManager_o *)this->fields.mTerminalMap;
    if ( !Instance )
      goto LABEL_99;
    if ( !ScrTerminalMap__IsMapModel((ScrTerminalMap_o *)Instance, 0LL) )
      goto LABEL_88;
    mTerminalMap = this->fields.mTerminalMap;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD9276 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD9276 = 1;
    }
    Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
    }
    v48 = *(_DWORD *)(*(_QWORD *)&Instance[1].fields.fadeType + 140LL);
    if ( !byte_4BD9277 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
      byte_4BD9277 = 1;
    }
    if ( !Instance[2].fields.m_CachedPtr )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
    }
    if ( !mTerminalMap )
      goto LABEL_99;
    MapModelEntryAnimationName = ScrTerminalMap__GetMapModelEntryAnimationName(
                                   mTerminalMap,
                                   v48,
                                   *(_DWORD *)(*(_QWORD *)&Instance[1].fields.fadeType + 144LL),
                                   0LL);
    if ( !byte_4BD9AE9 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD9AE9 = 1;
    }
    v50 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v50 = TerminalPramsManager_TypeInfo;
    }
    v50->static_fields->_MapModelClearQuestId_k__BackingField = 0;
    if ( !byte_4BD9AEA )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      v50 = TerminalPramsManager_TypeInfo;
      byte_4BD9AEA = 1;
    }
    if ( !v50->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v50);
      v50 = TerminalPramsManager_TypeInfo;
    }
    v50->static_fields->_MapModelClearPhaseCount_k__BackingField = 0;
    if ( !System_String__IsNullOrEmpty(MapModelEntryAnimationName, 0LL) )
    {
      Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v57 = (CommonUI_o *)Instance;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      if ( !v57 )
        goto LABEL_99;
      CommonUI__maskFadein(v57, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
      v58 = this->fields.mTerminalMap;
      v59 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(
        v59,
        (Il2CppObject *)v9,
        Method_TerminalSceneComponent___c__DisplayClass201_0__FadeInAndTriggerEventEffects_b__4__,
        0LL);
      if ( !v58 )
        goto LABEL_99;
      ScrTerminalMap__PlayMapModelEntryAnimation(v58, MapModelEntryAnimationName, v59, 0LL);
    }
    else
    {
LABEL_88:
      v51 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v52 = *(float *)(v9 + 16);
      v53 = (CommonUI_o *)v51;
      v54 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(
        v54,
        (Il2CppObject *)v9,
        Method_TerminalSceneComponent___c__DisplayClass201_0__FadeInAndTriggerEventEffects_b__1__,
        0LL);
      if ( !v53 )
        goto LABEL_99;
      CommonUI__maskFadein(v53, v52, v54, 0LL);
    }
  }
  else
  {
    v55 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    v56 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      v56,
      (Il2CppObject *)v9,
      Method_TerminalSceneComponent___c__DisplayClass201_0__FadeInAndTriggerEventEffects_b__0__,
      0LL);
    if ( !v55 )
      goto LABEL_99;
    QuestAfterAction__LoadVoice((QuestAfterAction_o *)v55, v56, 0LL);
  }
}


void __fastcall TerminalSceneComponent__FadeInAndTriggerEventEffectsNext(
        TerminalSceneComponent_o *this,
        int32_t eventId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  System_Action_o **v16; // x20
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  System_Action_o *v23; // x2
  Il2CppObject *v24; // x1
  struct TitleInfoControl_o *mTitleInfo; // x19
  Il2CppObject *v26; // x20
  System_Action_o *v27; // x21
  struct TitleInfoControl_o *v28; // x23
  TerminalPramsManager_c *v29; // x0
  System_Action_o *v30; // x19
  System_Action_o *v31; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BDE6AC & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C21E38(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&Method_TerminalSceneComponent___c__DisplayClass204_0__FadeInAndTriggerEventEffectsNext_b__0__);
    sub_1C21E38(&Method_TerminalSceneComponent___c__DisplayClass204_0__FadeInAndTriggerEventEffectsNext_b__1__);
    sub_1C21E38(&TerminalSceneComponent___c__DisplayClass204_0_TypeInfo);
    byte_4BDE6AC = 1;
  }
  entity = 0LL;
  v7 = sub_1C22084(TerminalSceneComponent___c__DisplayClass204_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_68;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 16), (int64_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = callback;
  v16 = (System_Action_o **)(v7 + 24);
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 24), (int64_t)callback, v17, v18, v19, v20, v21, v22);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_68;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          eventId,
          (const MethodInfo_325BE14 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
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
    sub_1C22094(Instance, v9);
  if ( EventDetailEntity__isRaidDefeatCount((EventDetailEntity_o *)entity, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.mTitleInfo;
    if ( Instance )
    {
      TitleInfoControl__PlayEventRaidDefeatedEffect((TitleInfoControl_o *)Instance, eventId, 0, *v16, 0LL);
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
      TitleInfoControl__CheckSuperBossHpAnim((TitleInfoControl_o *)Instance, *v16, 0LL);
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
      v23 = *v16;
      v24 = entity;
LABEL_31:
      TitleInfoControl__EventTowerStart((TitleInfoControl_o *)Instance, (EventDetailEntity_o *)v24, v23, 0LL);
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
      v26 = entity;
      v27 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(
        v27,
        (Il2CppObject *)v7,
        Method_TerminalSceneComponent___c__DisplayClass204_0__FadeInAndTriggerEventEffectsNext_b__0__,
        0LL);
      if ( !mTitleInfo )
        goto LABEL_68;
      Instance = (DataManager_o *)mTitleInfo;
      v24 = v26;
      v23 = v27;
      goto LABEL_31;
    }
  }
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_68;
  Instance = (DataManager_o *)EventDetailEntity__IsGroupPoint((EventDetailEntity_o *)entity, 0LL);
  v28 = this->fields.mTitleInfo;
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !v28 )
      goto LABEL_68;
    TitleInfoControl__CheckEventPointGroupReward(this->fields.mTitleInfo, eventId, *v16, 0LL);
    v29 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v29 = TerminalPramsManager_TypeInfo;
    }
    if ( v29->static_fields->joinGroupId >= 1 )
    {
      Instance = (DataManager_o *)this->fields.mTitleInfo;
      if ( !Instance )
        goto LABEL_68;
      TitleInfoControl__vsGaugeEvent((TitleInfoControl_o *)Instance, eventId, 0LL);
    }
    return;
  }
  if ( !v28 )
    goto LABEL_68;
  if ( v28->fields.needPlayDailyPointItemEffect )
  {
    v30 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      v30,
      (Il2CppObject *)v7,
      Method_TerminalSceneComponent___c__DisplayClass204_0__FadeInAndTriggerEventEffectsNext_b__1__,
      0LL);
    TitleInfoControl__UpdateDailyPointWithEffect(v28, v30, 0LL);
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
    TitleInfoControl__CheckEventPointGaugeAnim((TitleInfoControl_o *)Instance, (EventDetailEntity_o *)entity, *v16, 0LL);
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
      *v16,
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
      ScrTerminalMap__UpdateEventBoardGame((ScrTerminalMap_o *)Instance, *v16, 0LL);
      return;
    }
    v31 = *v16;
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
    v31 = *v16;
LABEL_65:
    ActionExtensions__Call(v31, 0LL);
    return;
  }
  Instance = (DataManager_o *)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_68;
  TitleInfoControl__StartEventUIAnimation((TitleInfoControl_o *)Instance, 1, *v16, 0LL);
}


void __fastcall TerminalSceneComponent__FadeinWorldDispNoneExecuteUnusedAssets(
        TerminalSceneComponent_o *this,
        bool isExecuteUnusedAssets,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  AvalonSceneManager_c *v7; // x0
  System_Collections_IEnumerator_o *v8; // x1

  if ( (byte_4BDE6A0 & 1) == 0 )
  {
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    byte_4BDE6A0 = 1;
  }
  v7 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v7 = AvalonSceneManager_TypeInfo;
  }
  v8 = TerminalSceneComponent__coFadein_WorldDisp(
         this,
         v7->static_fields->DEFAULT_FADE_TIME,
         endAct,
         isExecuteUnusedAssets,
         method);
  UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, v8, 0LL);
}


void __fastcall TerminalSceneComponent__Fadein_MapDisp(
        TerminalSceneComponent_o *this,
        float fade_time,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  const MethodInfo *v22; // x2
  Il2CppObject *Instance; // x19
  AvalonSceneManager_c *v24; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v26; // x21

  if ( (byte_4BDE6A4 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_TerminalSceneComponent___c__DisplayClass196_0__Fadein_MapDisp_b__0__);
    sub_1C21E38(&TerminalSceneComponent___c__DisplayClass196_0_TypeInfo);
    byte_4BDE6A4 = 1;
  }
  v7 = sub_1C22084(TerminalSceneComponent___c__DisplayClass196_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_10;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 16), (int64_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = end_act;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 24), (int64_t)end_act, v16, v17, v18, v19, v20, v21);
  if ( this->fields._FirstFadeTime_k__BackingField > 0.0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v24 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v24 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v24->static_fields->DEFAULT_FADE_TIME;
    v26 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      v26,
      (Il2CppObject *)v7,
      Method_TerminalSceneComponent___c__DisplayClass196_0__Fadein_MapDisp_b__0__,
      0LL);
    if ( Instance )
    {
      CommonUI__maskFadeChangeColor((CommonUI_o *)Instance, 2, DEFAULT_FADE_TIME, v26, 0LL);
      return;
    }
LABEL_10:
    sub_1C22094(v8, v9);
  }
  TerminalSceneComponent__Fadein_MapDisp_Load(this, fade_time, *(System_Action_o **)(v7 + 24), v22);
}


void __fastcall TerminalSceneComponent__Fadein_MapDisp_Load(
        TerminalSceneComponent_o *this,
        float fade_time,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v7; // x20
  void *mTerminalMap; // x0
  const MethodInfo *v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  TerminalPramsManager_c *v22; // x0
  __int64 v23; // x8
  __int64 v24; // x8
  WarEntity_o *v25; // x21
  TerminalPramsManager_c *v26; // x0
  _BOOL4 isInvisibleConnectAndLoad; // w22
  TitleInfoControl_o *mTitleInfo; // x19
  System_Action_o *v29; // x22

  if ( (byte_4BDE6A5 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    sub_1C21E38(&Method_TerminalSceneComponent___c__DisplayClass197_0__Fadein_MapDisp_Load_b__0__);
    sub_1C21E38(&TerminalSceneComponent___c__DisplayClass197_0_TypeInfo);
    byte_4BDE6A5 = 1;
  }
  v7 = sub_1C22084(TerminalSceneComponent___c__DisplayClass197_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_32;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 16), (int64_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 32) = end_act;
  *(float *)(v7 + 24) = fade_time;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)end_act, v16, v17, v18, v19, v20, v21);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD82DB )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD82DB = 1;
  }
  v22 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v22 = TerminalPramsManager_TypeInfo;
  }
  if ( !v22->static_fields->_IsDispOnly_k__BackingField )
  {
    TerminalSceneComponent__EndAuto(this, v9);
    goto LABEL_22;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BD7183 )
  {
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BD7183 = 1;
  }
  mTerminalMap = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    mTerminalMap = TerminalSceneComponent_TypeInfo;
  }
  v23 = **((_QWORD **)mTerminalMap + 23);
  if ( !v23 || (v24 = *(_QWORD *)(v23 + 264)) == 0 || (mTerminalMap = *(void **)(v24 + 552)) == 0LL )
LABEL_32:
    sub_1C22094(mTerminalMap, v9);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mTerminalMap, 1, 0LL);
LABEL_22:
  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_32;
  v25 = (WarEntity_o *)*((_QWORD *)mTerminalMap + 45);
  ScrTerminalMap__SetDisp((ScrTerminalMap_o *)mTerminalMap, 1, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9723 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9723 = 1;
  }
  v26 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v26 = TerminalPramsManager_TypeInfo;
  }
  isInvisibleConnectAndLoad = v26->static_fields->isInvisibleConnectAndLoad;
  mTerminalMap = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_32;
  CommonUI__SetLoadMode((CommonUI_o *)mTerminalMap, !isInvisibleConnectAndLoad, 0LL);
  mTitleInfo = this->fields.mTitleInfo;
  v29 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v29,
    (Il2CppObject *)v7,
    Method_TerminalSceneComponent___c__DisplayClass197_0__Fadein_MapDisp_Load_b__0__,
    0LL);
  if ( !mTitleInfo )
    goto LABEL_32;
  TitleInfoControl__SetActiveEventInfo(mTitleInfo, v25, 32, v29, 0LL);
}


void __fastcall TerminalSceneComponent__Fadein_MapDisp_Start(
        TerminalSceneComponent_o *this,
        float fade_time,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  int64_t v7; // x20
  __int64 Instance; // x0
  _BOOL8 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t *v16; // x21
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct ScrTerminalMap_o *mTerminalMap; // x8
  int64_t mWarEnt; // x1
  int64_t v31; // x22
  struct ScrTerminalMap_o *v32; // x8
  MapEntity_o *mMapEnt; // x23
  System_String_o *ActiveStateName; // x24
  System_String_o *PrioredBgmName; // x0
  const MethodInfo *v36; // x2
  TerminalPramsManager_c *v37; // x0
  struct ScrTerminalMap_o *v38; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  TerminalPramsManager_c *v40; // x0
  __int64 v41; // x21
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  Il2CppObject **v48; // x22
  __int64 v49; // x8
  __int64 v50; // x8
  __int64 v51; // x8
  __int64 v52; // x8
  __int64 v53; // x8
  __int64 v54; // x8
  __int64 v55; // x0
  Il2CppObject *v56; // x24
  __int64 v57; // x20
  System_Action_object__o *v58; // x23
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  Il2CppObject *v65; // x23
  System_Action_object__o *v66; // x22
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  System_Action_object__o *v79; // x22
  Il2CppObject *v80; // x23
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  Il2CppObject *v88; // x24
  System_Action_object__o *v89; // x22
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  ActionChain_o *v96; // x22
  __int64 v97; // x20
  System_Action_o *v98; // x23
  int64_t v99; // x2
  int32_t v100; // w3
  System_String_o *v101; // x4
  BattleSetupInfo_o *v102; // x5
  FollowerInfo_o *v103; // x6
  PartyListViewItem_o *v104; // x7
  ChainableActionBase_o *v105; // x0
  System_Action_array *v106; // x1
  int32_t v107; // w21
  System_Action_o *v108; // x22
  const MethodInfo *v109; // x3
  __int64 v110; // x22
  Il2CppObject *v111; // x24
  System_Action_object__o *v112; // x23
  int64_t v113; // x2
  int32_t v114; // w3
  System_String_o *v115; // x4
  BattleSetupInfo_o *v116; // x5
  FollowerInfo_o *v117; // x6
  PartyListViewItem_o *v118; // x7
  int64_t v119; // x2
  int32_t v120; // w3
  System_String_o *v121; // x4
  BattleSetupInfo_o *v122; // x5
  FollowerInfo_o *v123; // x6
  PartyListViewItem_o *v124; // x7
  System_Action_object__o *v125; // x23
  Il2CppObject *v126; // x24
  struct TerminalSceneComponent___c_StaticFields *v127; // x0
  int64_t v128; // x2
  int32_t v129; // w3
  System_String_o *v130; // x4
  BattleSetupInfo_o *v131; // x5
  FollowerInfo_o *v132; // x6
  PartyListViewItem_o *v133; // x7
  int64_t v134; // x2
  int32_t v135; // w3
  System_String_o *v136; // x4
  BattleSetupInfo_o *v137; // x5
  FollowerInfo_o *v138; // x6
  PartyListViewItem_o *v139; // x7
  System_Action_object__o *v140; // x23
  Il2CppObject *v141; // x24
  struct TerminalSceneComponent___c_StaticFields *v142; // x0
  int64_t v143; // x2
  int32_t v144; // w3
  System_String_o *v145; // x4
  BattleSetupInfo_o *v146; // x5
  FollowerInfo_o *v147; // x6
  PartyListViewItem_o *v148; // x7
  System_Action_object__o *v149; // x23
  int64_t v150; // x2
  int32_t v151; // w3
  System_String_o *v152; // x4
  BattleSetupInfo_o *v153; // x5
  FollowerInfo_o *v154; // x6
  PartyListViewItem_o *v155; // x7
  ActionChain_o *v156; // x20
  int64_t v157; // x2
  int32_t v158; // w3
  System_String_o *v159; // x4
  BattleSetupInfo_o *v160; // x5
  FollowerInfo_o *v161; // x6
  PartyListViewItem_o *v162; // x7
  System_Action_array *v163; // x22
  int64_t v164; // x1

  if ( (byte_4BDE6A6 & 1) == 0 )
  {
    sub_1C21E38(&ActionChain_TypeInfo);
    sub_1C21E38(&System_Action___TypeInfo);
    sub_1C21E38(&System_Action_Action____TypeInfo);
    sub_1C21E38(&System_Action_Action__TypeInfo);
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_CommonUI_StartLoginMessages__);
    sub_1C21E38(&Method_QuestAfterAction_Play__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1C21E38(&SoundManager_TypeInfo);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    sub_1C21E38(&TutorialFlag_TypeInfo);
    sub_1C21E38(&Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__198_0__);
    sub_1C21E38(&Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__198_1__);
    sub_1C21E38(&Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__198_6__);
    sub_1C21E38(&Method_TerminalSceneComponent___c__DisplayClass198_0__Fadein_MapDisp_Start_b__2__);
    sub_1C21E38(&Method_TerminalSceneComponent___c__DisplayClass198_0__Fadein_MapDisp_Start_b__3__);
    sub_1C21E38(&Method_TerminalSceneComponent___c__DisplayClass198_0__Fadein_MapDisp_Start_b__4__);
    sub_1C21E38(&Method_TerminalSceneComponent___c__DisplayClass198_0__Fadein_MapDisp_Start_b__5__);
    sub_1C21E38(&TerminalSceneComponent___c__DisplayClass198_0_TypeInfo);
    sub_1C21E38(&Method_TerminalSceneComponent___c__DisplayClass198_1__Fadein_MapDisp_Start_b__7__);
    sub_1C21E38(&TerminalSceneComponent___c__DisplayClass198_1_TypeInfo);
    sub_1C21E38(&TerminalSceneComponent___c_TypeInfo);
    sub_1C21E38(&StringLiteral_3455/*"CAPTER INIT"*/);
    sub_1C21E38(&StringLiteral_3454/*"CAPTER CREATE"*/);
    sub_1C21E38(&StringLiteral_3456/*"CAPTER WAIT"*/);
    byte_4BDE6A6 = 1;
  }
  v7 = sub_1C22084(TerminalSceneComponent___c__DisplayClass198_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_160;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 16), (int64_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 40) = end_act;
  v16 = (int64_t *)(v7 + 40);
  *(float *)(v7 + 32) = fade_time;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 40), (int64_t)end_act, v17, v18, v19, v20, v21, v22);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_160;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_160;
  mWarEnt = (int64_t)mTerminalMap->fields.mWarEnt;
  *(_QWORD *)(v7 + 24) = mWarEnt;
  v31 = v7 + 24;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 24), mWarEnt, v23, v24, v25, v26, v27, v28);
  v32 = this->fields.mTerminalMap;
  if ( !v32 )
    goto LABEL_160;
  Instance = (__int64)this->fields.mTerminalList;
  if ( !Instance )
    goto LABEL_160;
  mMapEnt = v32->fields.mMapEnt;
  Instance = (__int64)ScrTerminalListTop__mfGetMyFsmP((ScrTerminalListTop_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_160;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)Instance, 0LL);
  v9 = System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_3454/*"CAPTER CREATE"*/, 0LL)
    || System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_3455/*"CAPTER INIT"*/, 0LL)
    || System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_3456/*"CAPTER WAIT"*/, 0LL);
  Instance = (__int64)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_160;
  TitleInfoControl__setBackBtnSprite_38384144((TitleInfoControl_o *)Instance, v9, 0, 0, 0LL);
  Instance = (__int64)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_160;
  TitleInfoControl__FrameIn((TitleInfoControl_o *)Instance, 0, 0LL);
  MainMenuBar__FrameIn(0, 0LL);
  Instance = (__int64)this->fields.mPlayerStatus;
  if ( !Instance )
    goto LABEL_160;
  ScrPlayerStatus__FrameIn((ScrPlayerStatus_o *)Instance, 0, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    goto LABEL_160;
  if ( *(_BYTE *)(Instance + 193) )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__stopBgm(0LL);
  }
  else
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD9665 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD9665 = 1;
    }
    Instance = (__int64)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Instance = (__int64)TerminalPramsManager_TypeInfo;
    }
    if ( !*(_BYTE *)(*(_QWORD *)(Instance + 184) + 104LL) )
    {
      if ( !mMapEnt )
        goto LABEL_160;
      PrioredBgmName = MapEntity__GetPrioredBgmName(mMapEnt, 0LL);
      TerminalSceneComponent__playBgm(this, PrioredBgmName, v36);
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9665 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9665 = 1;
  }
  v37 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v37 = TerminalPramsManager_TypeInfo;
  }
  if ( v37->static_fields->_IsPlayScriptWithMap_k__BackingField )
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
    v37 = TerminalPramsManager_TypeInfo;
  }
  if ( !v37->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v37);
  if ( !byte_4BD82DB )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD82DB = 1;
  }
  Instance = (__int64)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( *(_BYTE *)(*(_QWORD *)(Instance + 184) + 103LL) )
  {
    if ( !*(_DWORD *)(Instance + 224) )
      j_il2cpp_runtime_class_init_0(Instance);
    if ( !byte_4BD9652 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD9652 = 1;
    }
    Instance = (__int64)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Instance = (__int64)TerminalPramsManager_TypeInfo;
    }
    if ( *(_BYTE *)(*(_QWORD *)(Instance + 184) + 106LL) )
    {
      v38 = this->fields.mTerminalMap;
      if ( !v38 )
        goto LABEL_160;
      Instance = (__int64)v38->fields.spotMaskObj;
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
    j_il2cpp_runtime_class_init_0(Instance);
  if ( !byte_4BD9652 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9652 = 1;
  }
  v40 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v40 = TerminalPramsManager_TypeInfo;
  }
  if ( v40->static_fields->_IsScriptDisp_k__BackingField )
    goto LABEL_136;
  if ( !v40->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v40);
  if ( !byte_4BD82DB )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD82DB = 1;
  }
  Instance = (__int64)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( *(_BYTE *)(*(_QWORD *)(Instance + 184) + 103LL) )
  {
    v41 = sub_1C22084(TerminalSceneComponent___c__DisplayClass198_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v41, 0LL);
    if ( v41 )
    {
      *(_QWORD *)(v41 + 24) = v7;
      v48 = (Il2CppObject **)(v41 + 24);
      sub_1C21DDC((PartyOrganizationUtility_o *)(v41 + 24), v7, v42, v43, v44, v45, v46, v47);
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4BD7183 )
      {
        sub_1C21E38(&TerminalSceneComponent_TypeInfo);
        byte_4BD7183 = 1;
      }
      Instance = (__int64)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        Instance = (__int64)TerminalSceneComponent_TypeInfo;
      }
      v49 = **(_QWORD **)(Instance + 184);
      if ( v49 )
      {
        v50 = *(_QWORD *)(v49 + 264);
        if ( v50 )
        {
          Instance = *(_QWORD *)(v50 + 552);
          if ( Instance )
          {
            *(_BYTE *)(v41 + 16) = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
            Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
            if ( Instance )
            {
              QuestAfterAction__Init((QuestAfterAction_o *)Instance, 0LL);
              Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
              if ( Instance )
              {
                QuestAfterAction__CreateCommandBuf((QuestAfterAction_o *)Instance, 1, 0LL);
                Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
                if ( Instance )
                {
                  if ( QuestAfterAction__IsActiveCommand((QuestAfterAction_o *)Instance, 0LL) )
                  {
                    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                    if ( !byte_4BD7183 )
                    {
                      sub_1C21E38(&TerminalSceneComponent_TypeInfo);
                      byte_4BD7183 = 1;
                    }
                    Instance = (__int64)TerminalSceneComponent_TypeInfo;
                    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                      Instance = (__int64)TerminalSceneComponent_TypeInfo;
                    }
                    v51 = **(_QWORD **)(Instance + 184);
                    if ( !v51 )
                      goto LABEL_160;
                    v52 = *(_QWORD *)(v51 + 264);
                    if ( !v52 )
                      goto LABEL_160;
                    Instance = *(_QWORD *)(v52 + 552);
                    if ( !Instance )
                      goto LABEL_160;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                  }
                  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  if ( !byte_4BD7183 )
                  {
                    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
                    byte_4BD7183 = 1;
                  }
                  Instance = (__int64)TerminalSceneComponent_TypeInfo;
                  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                    Instance = (__int64)TerminalSceneComponent_TypeInfo;
                  }
                  v53 = **(_QWORD **)(Instance + 184);
                  if ( v53 )
                  {
                    v54 = *(_QWORD *)(v53 + 264);
                    if ( v54 )
                    {
                      Instance = *(_QWORD *)(v54 + 552);
                      if ( Instance )
                      {
                        if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
                        {
                          Instance = (__int64)this->fields.mTerminalMap;
                          if ( !Instance )
                            goto LABEL_160;
                          ScrTerminalMap__AllMaskStart((ScrTerminalMap_o *)Instance, 0, 1, 0LL);
                        }
                        v55 = sub_1C21EE0(System_Action_Action____TypeInfo, 4LL);
                        v56 = *v48;
                        v57 = v55;
                        v58 = (System_Action_object__o *)sub_1C22084(System_Action_Action__TypeInfo);
                        System_Action_object____ctor(
                          v58,
                          v56,
                          Method_TerminalSceneComponent___c__DisplayClass198_0__Fadein_MapDisp_Start_b__4__,
                          0LL);
                        if ( v57 )
                        {
                          if ( *(_DWORD *)(v57 + 24) )
                          {
                            *(_QWORD *)(v57 + 32) = v58;
                            sub_1C21DDC(
                              (PartyOrganizationUtility_o *)(v57 + 32),
                              (int64_t)v58,
                              v59,
                              v60,
                              v61,
                              v62,
                              v63,
                              v64);
                            v65 = *v48;
                            v66 = (System_Action_object__o *)sub_1C22084(System_Action_Action__TypeInfo);
                            System_Action_object____ctor(
                              v66,
                              v65,
                              Method_TerminalSceneComponent___c__DisplayClass198_0__Fadein_MapDisp_Start_b__5__,
                              0LL);
                            if ( *(_DWORD *)(v57 + 24) > 1u )
                            {
                              *(_QWORD *)(v57 + 40) = v66;
                              sub_1C21DDC(
                                (PartyOrganizationUtility_o *)(v57 + 40),
                                (int64_t)v66,
                                v67,
                                v68,
                                v69,
                                v70,
                                v71,
                                v72);
                              Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
                              if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
                              {
                                j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
                                Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
                              }
                              v79 = *(System_Action_object__o **)(*(_QWORD *)(Instance + 184) + 16LL);
                              if ( !v79 )
                              {
                                if ( !*(_DWORD *)(Instance + 224) )
                                {
                                  j_il2cpp_runtime_class_init_0(Instance);
                                  Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
                                }
                                v80 = **(Il2CppObject ***)(Instance + 184);
                                v79 = (System_Action_object__o *)sub_1C22084(System_Action_Action__TypeInfo);
                                System_Action_object____ctor(
                                  v79,
                                  v80,
                                  Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__198_6__,
                                  0LL);
                                static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
                                static_fields->__9__198_6 = (struct System_Action_Action__o *)v79;
                                sub_1C21DDC(
                                  (PartyOrganizationUtility_o *)&static_fields->__9__198_6,
                                  (int64_t)v79,
                                  v82,
                                  v83,
                                  v84,
                                  v85,
                                  v86,
                                  v87);
                              }
                              if ( *(_DWORD *)(v57 + 24) > 2u )
                              {
                                *(_QWORD *)(v57 + 48) = v79;
                                sub_1C21DDC(
                                  (PartyOrganizationUtility_o *)(v57 + 48),
                                  (int64_t)v79,
                                  v73,
                                  v74,
                                  v75,
                                  v76,
                                  v77,
                                  v78);
                                v88 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
                                v89 = (System_Action_object__o *)sub_1C22084(System_Action_Action__TypeInfo);
                                System_Action_object____ctor(v89, v88, Method_QuestAfterAction_Play__, 0LL);
                                if ( *(_DWORD *)(v57 + 24) > 3u )
                                {
                                  *(_QWORD *)(v57 + 56) = v89;
                                  sub_1C21DDC(
                                    (PartyOrganizationUtility_o *)(v57 + 56),
                                    (int64_t)v89,
                                    v90,
                                    v91,
                                    v92,
                                    v93,
                                    v94,
                                    v95);
                                  v96 = (ActionChain_o *)sub_1C22084(ActionChain_TypeInfo);
                                  ActionChain___ctor_47730872(v96, (System_Action_Action__array *)v57, 0LL);
                                  v97 = sub_1C21EE0(System_Action___TypeInfo, 1LL);
                                  v98 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
                                  System_Action___ctor(
                                    v98,
                                    (Il2CppObject *)v41,
                                    Method_TerminalSceneComponent___c__DisplayClass198_1__Fadein_MapDisp_Start_b__7__,
                                    0LL);
                                  if ( !v97 )
                                    goto LABEL_160;
                                  if ( *(_DWORD *)(v97 + 24) )
                                  {
                                    *(_QWORD *)(v97 + 32) = v98;
                                    sub_1C21DDC(
                                      (PartyOrganizationUtility_o *)(v97 + 32),
                                      (int64_t)v98,
                                      v99,
                                      v100,
                                      v101,
                                      v102,
                                      v103,
                                      v104);
                                    if ( !v96 )
                                      goto LABEL_160;
                                    v105 = (ChainableActionBase_o *)v96;
                                    v106 = (System_Action_array *)v97;
                                    goto LABEL_127;
                                  }
                                }
                              }
                            }
                          }
LABEL_161:
                          sub_1C2209C(Instance, v9);
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
    sub_1C22094(Instance, v9);
  }
  if ( this->fields.mIsStart_LoginBonusWhiteBg )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    Instance = TutorialFlag__Get_38930984(102, 0LL);
    if ( (Instance & 1) != 0 && !this->fields.isTutorialAfter )
    {
      this->fields.mIsStart_LoginBonusWhiteBg = 0;
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__SetupLoginResultData((CommonUI_o *)Instance, 0LL, 0LL);
        v110 = sub_1C21EE0(System_Action_Action____TypeInfo, 4LL);
        v111 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v112 = (System_Action_object__o *)sub_1C22084(System_Action_Action__TypeInfo);
        System_Action_object____ctor(v112, v111, Method_CommonUI_StartLoginMessages__, 0LL);
        if ( v110 )
        {
          if ( !*(_DWORD *)(v110 + 24) )
            goto LABEL_161;
          *(_QWORD *)(v110 + 32) = v112;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v110 + 32), (int64_t)v112, v113, v114, v115, v116, v117, v118);
          Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
          if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
            Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
          }
          v125 = *(System_Action_object__o **)(*(_QWORD *)(Instance + 184) + 24LL);
          if ( !v125 )
          {
            if ( !*(_DWORD *)(Instance + 224) )
            {
              j_il2cpp_runtime_class_init_0(Instance);
              Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
            }
            v126 = **(Il2CppObject ***)(Instance + 184);
            v125 = (System_Action_object__o *)sub_1C22084(System_Action_Action__TypeInfo);
            System_Action_object____ctor(
              v125,
              v126,
              Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__198_0__,
              0LL);
            v127 = TerminalSceneComponent___c_TypeInfo->static_fields;
            v127->__9__198_0 = (struct System_Action_Action__o *)v125;
            sub_1C21DDC(
              (PartyOrganizationUtility_o *)&v127->__9__198_0,
              (int64_t)v125,
              v128,
              v129,
              v130,
              v131,
              v132,
              v133);
          }
          if ( *(_DWORD *)(v110 + 24) <= 1u )
            goto LABEL_161;
          *(_QWORD *)(v110 + 40) = v125;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v110 + 40), (int64_t)v125, v119, v120, v121, v122, v123, v124);
          Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
          if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
            Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
          }
          v140 = *(System_Action_object__o **)(*(_QWORD *)(Instance + 184) + 32LL);
          if ( !v140 )
          {
            if ( !*(_DWORD *)(Instance + 224) )
            {
              j_il2cpp_runtime_class_init_0(Instance);
              Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
            }
            v141 = **(Il2CppObject ***)(Instance + 184);
            v140 = (System_Action_object__o *)sub_1C22084(System_Action_Action__TypeInfo);
            System_Action_object____ctor(
              v140,
              v141,
              Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__198_1__,
              0LL);
            v142 = TerminalSceneComponent___c_TypeInfo->static_fields;
            v142->__9__198_1 = (struct System_Action_Action__o *)v140;
            sub_1C21DDC(
              (PartyOrganizationUtility_o *)&v142->__9__198_1,
              (int64_t)v140,
              v143,
              v144,
              v145,
              v146,
              v147,
              v148);
          }
          if ( *(_DWORD *)(v110 + 24) <= 2u )
            goto LABEL_161;
          *(_QWORD *)(v110 + 48) = v140;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v110 + 48), (int64_t)v140, v134, v135, v136, v137, v138, v139);
          v149 = (System_Action_object__o *)sub_1C22084(System_Action_Action__TypeInfo);
          System_Action_object____ctor(
            v149,
            (Il2CppObject *)v7,
            Method_TerminalSceneComponent___c__DisplayClass198_0__Fadein_MapDisp_Start_b__2__,
            0LL);
          if ( *(_DWORD *)(v110 + 24) <= 3u )
            goto LABEL_161;
          *(_QWORD *)(v110 + 56) = v149;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v110 + 56), (int64_t)v149, v150, v151, v152, v153, v154, v155);
          v156 = (ActionChain_o *)sub_1C22084(ActionChain_TypeInfo);
          ActionChain___ctor_47730872(v156, (System_Action_Action__array *)v110, 0LL);
          Instance = sub_1C21EE0(System_Action___TypeInfo, 1LL);
          if ( Instance )
          {
            v163 = (System_Action_array *)Instance;
            if ( !*(_DWORD *)(Instance + 24) )
              goto LABEL_161;
            v164 = *v16;
            *(_QWORD *)(Instance + 32) = *v16;
            sub_1C21DDC((PartyOrganizationUtility_o *)(Instance + 32), v164, v157, v158, v159, v160, v161, v162);
            if ( v156 )
            {
              v105 = (ChainableActionBase_o *)v156;
              v106 = v163;
LABEL_127:
              Instance = (__int64)ChainableActionBase__Final(v105, v106, 0LL);
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
  if ( !*(_QWORD *)v31 )
    goto LABEL_160;
  v107 = *(_DWORD *)(*(_QWORD *)v31 + 96LL);
  v108 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v108,
    (Il2CppObject *)v7,
    Method_TerminalSceneComponent___c__DisplayClass198_0__Fadein_MapDisp_Start_b__3__,
    0LL);
  TerminalSceneComponent__StartEventDailyPoint(this, v107, v108, v109);
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

  if ( (byte_4BDE6A1 & 1) == 0 )
  {
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    byte_4BDE6A1 = 1;
  }
  v6 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v6 = AvalonSceneManager_TypeInfo;
  }
  v7 = TerminalSceneComponent__coFadein_WorldDisp(this, v6->static_fields->DEFAULT_FADE_TIME, end_act, 1, v3);
  UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
}


void __fastcall TerminalSceneComponent__Fadein_WorldDisp_43501064(
        TerminalSceneComponent_o *this,
        float fade_time,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x3
  System_Collections_IEnumerator_o *v6; // x1

  v6 = TerminalSceneComponent__coFadein_WorldDisp(this, fade_time, end_act, 1, v4);
  UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, v6, 0LL);
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
    sub_1C22094(this, method);
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
        sub_1C2209C(this, method);
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
  TerminalSceneComponent_c *v3; // x0
  System_String_o *OVERWRITE_COMMON_BG_TYPE2_KEY; // x0
  TerminalSceneComponent_c *v5; // x0

  if ( (byte_4BDE6D7 & 1) == 0 )
  {
    sub_1C21E38(&string_TypeInfo);
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BDE6D7 = 1;
  }
  if ( skinType == 4 )
  {
    v5 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v5 = TerminalSceneComponent_TypeInfo;
    }
    OVERWRITE_COMMON_BG_TYPE2_KEY = v5->static_fields->OVERWRITE_COMMON_BG_TYPE2_KEY;
    return UnityEngine_PlayerPrefs__GetString_70827888(OVERWRITE_COMMON_BG_TYPE2_KEY, 0LL);
  }
  if ( skinType == 2 )
  {
    v3 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v3 = TerminalSceneComponent_TypeInfo;
    }
    OVERWRITE_COMMON_BG_TYPE2_KEY = v3->static_fields->OVERWRITE_COMMON_BG_TYPE1_KEY;
    return UnityEngine_PlayerPrefs__GetString_70827888(OVERWRITE_COMMON_BG_TYPE2_KEY, 0LL);
  }
  return string_TypeInfo->static_fields->Empty;
}


QuestEntity_o *__fastcall TerminalSceneComponent__GetPlayAutoExecuteQuestEntity(
        TerminalSceneComponent_o *this,
        QuestEntity_array *questEntList,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *Instance; // x0
  __int64 v5; // x1
  signed int max_length; // w8
  unsigned int v7; // w23
  QuestEntity_o *v8; // x21
  int32_t id; // w22
  int klass_high; // w22
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4BDE6C2 & 1) == 0 )
  {
    sub_1C21E38(&CondType_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_SpotMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BDE6C2 = 1;
  }
  entity = 0LL;
  Instance = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  if ( !BYTE3(Instance[2].fields._lookup) )
  {
    if ( !questEntList )
      goto LABEL_28;
    max_length = questEntList->max_length;
    if ( max_length >= 1 )
    {
      v7 = 0;
      while ( 1 )
      {
        if ( v7 >= max_length )
          sub_1C2209C(Instance, v5);
        v8 = questEntList->m_Items[v7];
        if ( !v8 )
          break;
        id = v8->fields.id;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        Instance = (DataMasterBase_TMaster__TEntity__PKType__o *)CondType__IsQuestClear_38834244(id, -1, 0, 0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Instance = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_SpotMaster___);
          if ( !Instance )
            break;
          Instance = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                     Instance,
                                                                     &entity,
                                                                     v8->fields.spotId,
                                                                     (const MethodInfo_325BE14 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !entity )
              break;
            klass_high = HIDWORD(entity[1].klass);
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4BD9099 )
            {
              sub_1C21E38(&TerminalPramsManager_TypeInfo);
              byte_4BD9099 = 1;
            }
            Instance = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              Instance = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
            }
            if ( klass_high == HIDWORD(Instance[2].fields.list->klass) )
              return v8;
          }
        }
        max_length = questEntList->max_length;
        if ( (int)++v7 >= max_length )
          return 0LL;
      }
LABEL_28:
      sub_1C22094(Instance, v5);
    }
  }
  return 0LL;
}


int32_t __fastcall TerminalSceneComponent__GetState(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  TerminalSceneComponent_o *v2; // x19
  struct CStateManager_TerminalSceneComponent__o *mFSM; // x8

  v2 = this;
  if ( (byte_4BDE6C5 & 1) == 0 )
  {
    this = (TerminalSceneComponent_o *)sub_1C21E38(&Method_CStateManager_TerminalSceneComponent__getState__);
    byte_4BDE6C5 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1C22094(this, method);
  return mFSM->fields.m_state;
}


void __fastcall TerminalSceneComponent__InitLighting(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  TerminalSceneComponent_c *v3; // x0
  const MethodInfo *v4; // x2

  if ( (byte_4BDE6D5 & 1) == 0 )
  {
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BDE6D5 = 1;
  }
  v3 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v3 = TerminalSceneComponent_TypeInfo;
  }
  UnityEngine_RenderSettings__set_ambientLight(v3->static_fields->DEFAULT_AMBIENT_LIGHT_COLOR, 0LL);
  TerminalSceneComponent__SetDirectionalLightActive(this, 1, v4);
}


bool __fastcall TerminalSceneComponent__IsEnabledMapOnEvent(
        TerminalSceneComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  MapEntity_array *Instance; // x0
  __int64 v5; // x1
  WarEntity_o *v6; // x0
  WarEntity_o *v7; // x19
  int max_length; // w8
  int v9; // w9
  int *v10; // x10

  if ( (byte_4BDE6AA & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_MapMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDE6AA = 1;
  }
  if ( !eventId )
    return 1;
  Instance = (MapEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (MapEntity_array *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_WarMaster___);
  if ( !Instance )
    goto LABEL_19;
  v6 = WarMaster__getByEventId((WarMaster_o *)Instance, eventId, 0LL);
  if ( !v6 )
    return 1;
  v7 = v6;
  Instance = (MapEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (MapEntity_array *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_MapMaster___);
  if ( !Instance )
    goto LABEL_19;
  Instance = MapMaster__getList((MapMaster_o *)Instance, v7->fields.id, 0LL);
  if ( !Instance )
    goto LABEL_19;
  max_length = Instance->max_length;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      v10 = (int *)Instance->m_Items[v9];
      if ( !v10 )
        break;
      if ( v10[6] >= 1 && v10[7] >= 1 && v10[8] > 0 )
        return 1;
      if ( max_length == ++v9 )
        return 0;
    }
LABEL_19:
    sub_1C22094(Instance, v5);
  }
  return 0;
}


bool __fastcall TerminalSceneComponent__IsMapActive(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  struct ScrTerminalMap_o *mTerminalMap; // x8

  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap || (this = (TerminalSceneComponent_o *)mTerminalMap->fields.dispRoot) == 0LL )
    sub_1C22094(this, method);
  return UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
}


bool __fastcall TerminalSceneComponent__IsMapTouchEnabled(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  ScrTerminalMap_o *mTerminalMap; // x0
  struct ScrTerminalListTop_o *mTerminalList; // x8
  System_String_o *v5; // x20

  if ( (byte_4BDE6AE & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C21E38(&StringLiteral_9040/*"Map Touch Enable"*/);
    byte_4BDE6AE = 1;
  }
  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_60;
  mTerminalMap = (ScrTerminalMap_o *)ScrTerminalMap__mfGetMyFsmP(mTerminalMap, 0LL);
  if ( !mTerminalMap )
    goto LABEL_60;
  mTerminalMap = (ScrTerminalMap_o *)PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)mTerminalMap, 0LL);
  if ( !this->fields.mTutorialKind )
  {
    mTerminalList = this->fields.mTerminalList;
    if ( !mTerminalList )
      goto LABEL_60;
    v5 = (System_String_o *)mTerminalMap;
    mTerminalMap = (ScrTerminalMap_o *)mTerminalList->fields.mActionBgColl;
    if ( !mTerminalMap )
      goto LABEL_60;
    mTerminalMap = (ScrTerminalMap_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)mTerminalMap,
                                         0LL);
    if ( !mTerminalMap )
      goto LABEL_60;
    mTerminalMap = (ScrTerminalMap_o *)UnityEngine_GameObject__get_activeSelf(
                                         (UnityEngine_GameObject_o *)mTerminalMap,
                                         0LL);
    if ( ((unsigned __int8)mTerminalMap & 1) == 0 )
    {
      if ( !v5 )
        goto LABEL_60;
      if ( (System_String__IndexOf_63147052(v5, (System_String_o *)StringLiteral_9040/*"Map Touch Enable"*/, 0LL) & 0x80000000) != 0
        || MainMenuBar__get_IsEnableOutSideCollider(0LL) )
      {
        return 0;
      }
      mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !mTerminalMap )
        goto LABEL_60;
      if ( !CommonUI__IsActive_UserPresentBoxWindow((CommonUI_o *)mTerminalMap, 0LL) )
      {
        mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !mTerminalMap )
          goto LABEL_60;
        if ( !CommonUI__IsActive_ApRecvDlgComp((CommonUI_o *)mTerminalMap, 0LL) )
        {
          mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !mTerminalMap )
            goto LABEL_60;
          if ( !CommonUI__IsActive_EventItemSelectDlgComp((CommonUI_o *)mTerminalMap, 0LL) )
          {
            mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !mTerminalMap )
              goto LABEL_60;
            if ( !CommonUI__IsActive_CommonConfirmDialog((CommonUI_o *)mTerminalMap, 0LL) )
            {
              mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( !mTerminalMap )
                goto LABEL_60;
              if ( !CommonUI__IsActive_NotifiDialog((CommonUI_o *)mTerminalMap, 0LL) )
              {
                mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( !mTerminalMap )
                  goto LABEL_60;
                if ( !CommonUI__IsActive_TutorialBigDialog((CommonUI_o *)mTerminalMap, 0LL) )
                {
                  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  if ( !mTerminalMap )
                    goto LABEL_60;
                  if ( !CommonUI__IsActive_MasterMission((CommonUI_o *)mTerminalMap, 0LL) )
                  {
                    mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                    if ( !mTerminalMap )
                      goto LABEL_60;
                    if ( !CommonUI__IsActive_MasterProfile((CommonUI_o *)mTerminalMap, 0LL) )
                    {
                      mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                      if ( !mTerminalMap )
                        goto LABEL_60;
                      if ( !CommonUI__IsActive_MissionListDialog((CommonUI_o *)mTerminalMap, 0LL) )
                      {
                        mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                        if ( !mTerminalMap )
                          goto LABEL_60;
                        if ( !CommonUI__IsActive_AssistEffectConfirmDialog((CommonUI_o *)mTerminalMap, 0LL) )
                        {
                          mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                          if ( !mTerminalMap )
                            goto LABEL_60;
                          if ( !CommonUI__IsActive_CommandAssistConfirmDialog((CommonUI_o *)mTerminalMap, 0LL) )
                          {
                            mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                            if ( !mTerminalMap )
                              goto LABEL_60;
                            if ( !CommonUI__IsActive_AchievementExchangeConditionsDialog(
                                    (CommonUI_o *)mTerminalMap,
                                    0LL) )
                            {
                              mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                              if ( !mTerminalMap )
                                goto LABEL_60;
                              if ( !CommonUI__IsActive_SvtFrameShortDialog((CommonUI_o *)mTerminalMap, 0LL) )
                              {
                                mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                if ( !mTerminalMap )
                                  goto LABEL_60;
                                if ( !CommonUI__isBusyDialog((CommonUI_o *)mTerminalMap, 0LL) )
                                {
                                  mTerminalMap = (ScrTerminalMap_o *)this->fields.mPlayerStatus;
                                  if ( !mTerminalMap )
                                    goto LABEL_60;
                                  if ( BYTE4(mTerminalMap[1].fields.m_CancellationTokenSource)
                                    || ScrPlayerStatus__IsCommandSpellActive((ScrPlayerStatus_o *)mTerminalMap, 0LL) )
                                  {
                                    return 0;
                                  }
                                  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
                                  if ( !mTerminalMap )
                                    goto LABEL_60;
                                  if ( !QuestAfterAction__IsPlaying((QuestAfterAction_o *)mTerminalMap, 0LL) )
                                  {
                                    mTerminalMap = (ScrTerminalMap_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
                                    if ( !mTerminalMap )
                                      goto LABEL_60;
                                    if ( !MissionNotifyManager__IsPress((MissionNotifyManager_o *)mTerminalMap, 0LL) )
                                    {
                                      mTerminalMap = (ScrTerminalMap_o *)this->fields.mTitleInfo;
                                      if ( !mTerminalMap )
                                        goto LABEL_60;
                                      if ( TitleInfoControl__IsTouchEnable((TitleInfoControl_o *)mTerminalMap, 0LL) )
                                      {
                                        mTerminalMap = (ScrTerminalMap_o *)this->fields.mTitleInfo;
                                        if ( !mTerminalMap )
                                          goto LABEL_60;
                                        if ( !TitleInfoControl__IsBusyOnEventUI((TitleInfoControl_o *)mTerminalMap, 0LL) )
                                        {
                                          mTerminalMap = this->fields.mTerminalMap;
                                          if ( !mTerminalMap )
                                            goto LABEL_60;
                                          if ( !ScrTerminalMap__IsActive_SpotCooltimeRewardDialog(mTerminalMap, 0LL) )
                                          {
                                            mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
                                            if ( mTerminalMap )
                                            {
                                              if ( BYTE3(mTerminalMap->fields.rootEffectP) )
                                                return 0;
                                              mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                              if ( mTerminalMap )
                                                return !CommonUI__IsActive_MessageAndScrollDetailConfirmDialog(
                                                          (CommonUI_o *)mTerminalMap,
                                                          0LL);
                                            }
LABEL_60:
                                            sub_1C22094(mTerminalMap, method);
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
    sub_1C22094(this, 0LL);
  return shopEntity->fields.shopType == 11
      && shopEntity->fields.purchaseType == 14
      && !ShopEntity__IsEligibleForFreeFeaturesTheCostumeRelease(shopEntity, 0LL);
}


bool __fastcall TerminalSceneComponent__IsPlayChapterStart(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  _BOOL4 IsWarStartAnim_k__BackingField; // w23
  _BOOL4 v4; // w24
  _BOOL4 IsWarStartActionSkip; // w19
  __int64 v6; // x1
  Il2CppObject *Instance; // x20
  TerminalPramsManager_c *v8; // x0
  WarEntity_o *WarEntityByWarID; // x0
  WarEntity_o *v10; // x20
  int64_t targetId; // x19
  const MethodInfo *v12; // x2
  TerminalPramsManager_c *v13; // x0

  if ( (byte_4BDE6BE & 1) == 0 )
  {
    sub_1C21E38(&CondType_TypeInfo);
    sub_1C21E38(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BDE6BE = 1;
  }
  IsWarStartAnim_k__BackingField = this->fields._IsWarStartAnim_k__BackingField;
  v4 = this->fields.mTutorialKind == 1;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  IsWarStartActionSkip = TerminalPramsManager__get_Debug_IsWarStartActionSkip(0LL);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9099 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9099 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  if ( !Instance )
    sub_1C22094(v8, v6);
  WarEntityByWarID = QuestTree__mfGetWarEntityByWarID(
                       (QuestTree_o *)Instance,
                       v8->static_fields->_WarId_k__BackingField,
                       0LL);
  if ( !WarEntityByWarID )
    return 0;
  v10 = WarEntityByWarID;
  if ( WarEntity__IsMainInterlude(WarEntityByWarID, 0LL)
    && WarEntity__IsPurchasedByRarePrism(v10, 0LL)
    && WarEntity__IsStartTypeQuest(v10, 0LL) )
  {
    targetId = v10->fields.targetId;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsQuestPhaseClear_38891984(targetId, 1, -1, 0, 0LL) )
      return 0;
  }
  else if ( !IsWarStartAnim_k__BackingField && !v4 || IsWarStartActionSkip )
  {
    return 0;
  }
  if ( !WarEntity__GetStartType(v10, 0LL) )
    return 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9099 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9099 = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v13 = TerminalPramsManager_TypeInfo;
  }
  return TerminalSceneComponent__CheckPlayChapterStart(
           (TerminalSceneComponent_o *)v13,
           v13->static_fields->_WarId_k__BackingField,
           v12);
}


bool __fastcall TerminalSceneComponent__IsTerminalListAreaWait(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  ScrTerminalListTop_o *mTerminalList; // x0

  if ( (byte_4BDE687 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_2171/*"AREA WAIT"*/);
    byte_4BDE687 = 1;
  }
  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList
    || (mTerminalList = (ScrTerminalListTop_o *)ScrTerminalListTop__mfGetMyFsmP(mTerminalList, 0LL)) == 0LL
    || (mTerminalList = (ScrTerminalListTop_o *)PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)mTerminalList, 0LL)) == 0LL )
  {
    sub_1C22094(mTerminalList, method);
  }
  return System_String__IndexOf_63147052((System_String_o *)mTerminalList, (System_String_o *)StringLiteral_2171/*"AREA WAIT"*/, 0LL) >= 0;
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

  if ( (byte_4BDE693 & 1) == 0 )
  {
    sub_1C21E38(&TerminalSceneComponent__LoadAsync_d__176_TypeInfo);
    byte_4BDE693 = 1;
  }
  v7 = sub_1C22084(TerminalSceneComponent__LoadAsync_d__176_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = usd;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 40), (int64_t)usd, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v7 + 48) = callback;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 48), (int64_t)callback, v20, v21, v22, v23, v24, v25);
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
  UnityEngine_Component_o *uiRoot; // x8
  TerminalSceneComponent_o *v8; // x21
  const MethodInfo_376FA44 *v9; // x2
  float x; // s8
  float y; // s9
  float z; // s10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  System_Nullable_Vector3__o v14; // [xsp+0h] [xbp-50h] BYREF
  System_Nullable_Vector3__o v15; // 0:x0.16
  UnityEngine_Vector3_o Value; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  hasValue = localScale.fields.hasValue;
  v6 = this;
  v14 = localScale;
  if ( (byte_4BDE6D4 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Nullable_Vector3__get_HasValue__);
    this = (TerminalSceneComponent_o *)sub_1C21E38(&Method_System_Nullable_Vector3__get_Value__);
    byte_4BDE6D4 = 1;
  }
  if ( !dialog )
    goto LABEL_13;
  this = (TerminalSceneComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)dialog, 0LL);
  uiRoot = (UnityEngine_Component_o *)v6->fields.uiRoot;
  if ( !uiRoot )
    goto LABEL_13;
  v8 = this;
  this = (TerminalSceneComponent_o *)UnityEngine_Component__get_transform(uiRoot, 0LL);
  if ( !v8 )
    goto LABEL_13;
  UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)v8, (UnityEngine_Transform_o *)this, 0LL);
  if ( hasValue )
  {
    *(_QWORD *)&v15.fields.hasValue = &v14;
    *(_QWORD *)&v15.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
    Value = System_Nullable_Vector3___get_Value(v15, v9);
    x = Value.fields.x;
    y = Value.fields.y;
    z = Value.fields.z;
  }
  else
  {
    if ( !byte_4BD6BB6 )
    {
      sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
      byte_4BD6BB6 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->oneVector.fields.x;
    y = static_fields->oneVector.fields.y;
    z = static_fields->oneVector.fields.z;
  }
  this = (TerminalSceneComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)dialog, 0LL);
  if ( !this )
LABEL_13:
    sub_1C22094(this, dialog);
  v17.fields.x = x;
  v17.fields.y = y;
  v17.fields.z = z;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v17, 0LL);
}


void __fastcall TerminalSceneComponent__OnCorePress(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  struct BaseCore_o *mEarthCore; // x0

  mEarthCore = this->fields.mEarthCore;
  if ( !mEarthCore )
    sub_1C22094(0LL, method);
  ((void (__fastcall *)(struct BaseCore_o *, Il2CppMethodPointer))mEarthCore->klass->vtable._7_OnPress.method)(
    mEarthCore,
    mEarthCore->klass->vtable._8_Setup.methodPtr);
}


void __fastcall TerminalSceneComponent__OnCoreRelease(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  BaseCore_o *mEarthCore; // x0

  mEarthCore = this->fields.mEarthCore;
  if ( !mEarthCore )
    sub_1C22094(0LL, method);
  BaseCore__OnRelease(mEarthCore, 0LL);
}


void __fastcall TerminalSceneComponent__OnDestroy(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  TerminalSceneComponent_c *v3; // x0
  UnityEngine_Object_o *mInstance; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  TerminalSceneComponent_c *v11; // x0
  long double v12; // q0
  __int64 v13; // x0
  __int64 v14; // x0
  UnityEngine_Object_o *v15; // x20
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  System_String_o *loadEarthAssetName; // x20
  const MethodInfo *v23; // x1

  if ( (byte_4BDE68F & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AssetManager__getInstance__);
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BDE68F = 1;
  }
  v3 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v3 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v3->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mInstance, (UnityEngine_Object_o *)this, 0LL) )
  {
    v11 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v11 = TerminalSceneComponent_TypeInfo;
    }
    v11->static_fields->mInstance = 0LL;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)TerminalSceneComponent_TypeInfo->static_fields,
      0LL,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
    v13 = *((_QWORD *)Method_SingletonMonoBehaviour_AssetManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
      v13 = sub_1C73D14(v12);
    v14 = *(_QWORD *)(*(_QWORD *)(v13 + 192) + 16LL);
    if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
      v14 = sub_1C73D14(v12);
    v15 = **(UnityEngine_Object_o ***)(v14 + 184);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Implicit(v15, 0LL) )
    {
      loadEarthAssetName = this->fields.loadEarthAssetName;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAssetStorage(loadEarthAssetName, 0LL);
    }
    this->fields.loadEarthAssetName = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.loadEarthAssetName, 0LL, v16, v17, v18, v19, v20, v21);
    StandFigureManager__ReleaseCharaFigure(0LL);
    TerminalSceneComponent__ReleaseAssetToResume(this, v23);
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
  System_String_o *String_70827888; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x24
  System_Func_object__int__o *v12; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0
  System_Int32_array *v14; // x0
  TerminalSceneComponent___c_c *v15; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x24
  System_Func_T__TResult__o *_9__258_0; // x25
  Il2CppObject *v18; // x26
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  System_Collections_Generic_List_TSource__o *v27; // x0
  TerminalSceneComponent___c_c *v28; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x24
  System_Func_object__bool__o *_9__258_1; // x25
  Il2CppObject *v31; // x26
  struct TerminalSceneComponent___c_StaticFields *v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  TerminalSceneComponent___c_c *v40; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x24
  System_Func_object__bool__o *_9__258_2; // x25
  Il2CppObject *v43; // x26
  struct TerminalSceneComponent___c_StaticFields *v44; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x24
  System_Func_object__bool__o *v52; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x0
  System_Collections_Generic_List_TSource__o *v54; // x0
  TerminalSceneComponent___c_c *v55; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x23
  System_Func_object__int__o *_9__258_4; // x24
  Il2CppObject *v58; // x25
  PartyOrganizationUtility_o *v59; // x0
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v66; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v67; // x23
  Il2CppObject *Instance; // x24
  System_String_o *v69; // x22
  TerminalSceneComponent___c_c *v70; // x0
  System_Func_T__TResult__o *_9__258_5; // x24
  Il2CppObject *v72; // x25
  struct TerminalSceneComponent___c_StaticFields *v73; // x0
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v80; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v81; // x25
  System_String_o *v82; // x0
  TerminalSceneComponent___c_c *v83; // x8
  System_String_o *v84; // x21
  System_Func_object__int__o *_9__258_6; // x26
  Il2CppObject *v86; // x27
  struct TerminalSceneComponent___c_StaticFields *v87; // x0
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  __int64 v94; // x2
  __int64 v95; // x3
  __int64 v96; // x4
  Il2CppObject *v97; // x0
  int32_t v100; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4BDE6CF & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_int__ShopEntity___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_ShopEntity__int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Sum_ShopEntity___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToList_ShopEntity___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_ShopEntity___);
    sub_1C21E38(&System_Func_int__ShopEntity__TypeInfo);
    sub_1C21E38(&System_Func_ShopEntity__int__TypeInfo);
    sub_1C21E38(&System_Func_ShopEntity__bool__TypeInfo);
    sub_1C21E38(&System_Func_string__int__TypeInfo);
    sub_1C21E38(&Method_System_Int32_Parse__);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_TerminalSceneComponent__OpenExchangeDialogue_b__258_3__);
    sub_1C21E38(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__258_0__);
    sub_1C21E38(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__258_1__);
    sub_1C21E38(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__258_2__);
    sub_1C21E38(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__258_4__);
    sub_1C21E38(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__258_5__);
    sub_1C21E38(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__258_6__);
    sub_1C21E38(&TerminalSceneComponent___c_TypeInfo);
    sub_1C21E38(&StringLiteral_19961/*"freeShopIds"*/);
    byte_4BDE6CF = 1;
  }
  String_70827888 = UnityEngine_PlayerPrefs__GetString_70827888(playerPrefsKey, 0LL);
  if ( !String_70827888 )
    goto LABEL_34;
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String_70827888, 0x2Cu, 0, 0LL);
  v12 = (System_Func_object__int__o *)sub_1C22084(System_Func_string__int__TypeInfo);
  System_Func_object__int____ctor(v12, 0LL, Method_System_Int32_Parse__, 0LL);
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v11,
                                                               (System_Func_TSource__TResult__o *)v12,
                                                               (const MethodInfo_2FE0CDC *)Method_System_Linq_Enumerable_Select_string__int___);
  v14 = System_Linq_Enumerable__ToArray_int_(
          v13,
          (const MethodInfo_2FE964C *)Method_System_Linq_Enumerable_ToArray_int___);
  v15 = TerminalSceneComponent___c_TypeInfo;
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)v14;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v15 = TerminalSceneComponent___c_TypeInfo;
  }
  _9__258_0 = (System_Func_T__TResult__o *)v15->static_fields->__9__258_0;
  if ( !_9__258_0 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = TerminalSceneComponent___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v15->static_fields->__9;
    _9__258_0 = (System_Func_T__TResult__o *)sub_1C22084(System_Func_int__ShopEntity__TypeInfo);
    System_Func_int__object____ctor(
      _9__258_0,
      v18,
      Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__258_0__,
      0LL);
    static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    static_fields->__9__258_0 = (struct System_Func_int__ShopEntity__o *)_9__258_0;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__258_0,
      (int64_t)_9__258_0,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                               v16,
                                                               (System_Func_TSource__TResult__o *)_9__258_0,
                                                               (const MethodInfo_2FDEEE4 *)Method_System_Linq_Enumerable_Select_int__ShopEntity___);
  v27 = System_Linq_Enumerable__ToList_object_(
          v26,
          (const MethodInfo_2FED5C8 *)Method_System_Linq_Enumerable_ToList_ShopEntity___);
  v28 = TerminalSceneComponent___c_TypeInfo;
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)v27;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v28 = TerminalSceneComponent___c_TypeInfo;
  }
  _9__258_1 = (System_Func_object__bool__o *)v28->static_fields->__9__258_1;
  if ( !_9__258_1 )
  {
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      v28 = TerminalSceneComponent___c_TypeInfo;
    }
    v31 = (Il2CppObject *)v28->static_fields->__9;
    _9__258_1 = (System_Func_object__bool__o *)sub_1C22084(System_Func_ShopEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__258_1,
      v31,
      Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__258_1__,
      0LL);
    v32 = TerminalSceneComponent___c_TypeInfo->static_fields;
    v32->__9__258_1 = (struct System_Func_ShopEntity__bool__o *)_9__258_1;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v32->__9__258_1, (int64_t)_9__258_1, v33, v34, v35, v36, v37, v38);
  }
  v39 = System_Linq_Enumerable__Where_object_(
          v29,
          (System_Func_TSource__bool__o *)_9__258_1,
          (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_ShopEntity___);
  v40 = TerminalSceneComponent___c_TypeInfo;
  v41 = v39;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v40 = TerminalSceneComponent___c_TypeInfo;
  }
  _9__258_2 = (System_Func_object__bool__o *)v40->static_fields->__9__258_2;
  if ( !_9__258_2 )
  {
    if ( !v40->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v40);
      v40 = TerminalSceneComponent___c_TypeInfo;
    }
    v43 = (Il2CppObject *)v40->static_fields->__9;
    _9__258_2 = (System_Func_object__bool__o *)sub_1C22084(System_Func_ShopEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__258_2,
      v43,
      Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__258_2__,
      0LL);
    v44 = TerminalSceneComponent___c_TypeInfo->static_fields;
    v44->__9__258_2 = (struct System_Func_ShopEntity__bool__o *)_9__258_2;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v44->__9__258_2, (int64_t)_9__258_2, v45, v46, v47, v48, v49, v50);
  }
  v51 = System_Linq_Enumerable__Where_object_(
          v41,
          (System_Func_TSource__bool__o *)_9__258_2,
          (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_ShopEntity___);
  v52 = (System_Func_object__bool__o *)sub_1C22084(System_Func_ShopEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v52,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent__OpenExchangeDialogue_b__258_3__,
    0LL);
  v53 = System_Linq_Enumerable__Where_object_(
          v51,
          (System_Func_TSource__bool__o *)v52,
          (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_ShopEntity___);
  v54 = System_Linq_Enumerable__ToList_object_(
          v53,
          (const MethodInfo_2FED5C8 *)Method_System_Linq_Enumerable_ToList_ShopEntity___);
  v55 = TerminalSceneComponent___c_TypeInfo;
  v56 = (System_Collections_Generic_IEnumerable_TSource__o *)v54;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v55 = TerminalSceneComponent___c_TypeInfo;
  }
  _9__258_4 = (System_Func_object__int__o *)v55->static_fields->__9__258_4;
  if ( !_9__258_4 )
  {
    if ( !v55->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v55);
      v55 = TerminalSceneComponent___c_TypeInfo;
    }
    v58 = (Il2CppObject *)v55->static_fields->__9;
    _9__258_4 = (System_Func_object__int__o *)sub_1C22084(System_Func_ShopEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__258_4,
      v58,
      Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__258_4__,
      0LL);
    v59 = (PartyOrganizationUtility_o *)TerminalSceneComponent___c_TypeInfo->static_fields;
    v59[1].klass = (PartyOrganizationUtility_c *)_9__258_4;
    sub_1C21DDC(v59 + 1, (int64_t)_9__258_4, v60, v61, v62, v63, v64, v65);
  }
  v66 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v56,
                                                               (System_Func_TSource__TResult__o *)_9__258_4,
                                                               (const MethodInfo_2FE0CDC *)Method_System_Linq_Enumerable_Select_ShopEntity__int___);
  String_70827888 = (System_String_o *)System_Linq_Enumerable__ToArray_int_(
                                         v66,
                                         (const MethodInfo_2FE964C *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !String_70827888 )
    goto LABEL_34;
  v67 = (System_Collections_Generic_IEnumerable_TSource__o *)String_70827888;
  if ( String_70827888[1].klass )
  {
    if ( System_String__op_Equality(playerPrefsKey, (System_String_o *)StringLiteral_19961/*"freeShopIds"*/, 0LL) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v69 = LocalizationManager__Get(localizationKeyForTitle, 0LL);
      String_70827888 = LocalizationManager__Get(localizationKeyForDetail, 0LL);
      if ( !Instance )
        goto LABEL_34;
      goto LABEL_51;
    }
    v70 = TerminalSceneComponent___c_TypeInfo;
    if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
      v70 = TerminalSceneComponent___c_TypeInfo;
    }
    _9__258_5 = (System_Func_T__TResult__o *)v70->static_fields->__9__258_5;
    if ( !_9__258_5 )
    {
      if ( !v70->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v70);
        v70 = TerminalSceneComponent___c_TypeInfo;
      }
      v72 = (Il2CppObject *)v70->static_fields->__9;
      _9__258_5 = (System_Func_T__TResult__o *)sub_1C22084(System_Func_int__ShopEntity__TypeInfo);
      System_Func_int__object____ctor(
        _9__258_5,
        v72,
        Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__258_5__,
        0LL);
      v73 = TerminalSceneComponent___c_TypeInfo->static_fields;
      v73->__9__258_5 = (struct System_Func_int__ShopEntity__o *)_9__258_5;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v73->__9__258_5, (int64_t)_9__258_5, v74, v75, v76, v77, v78, v79);
    }
    v80 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                                 v67,
                                                                 (System_Func_TSource__TResult__o *)_9__258_5,
                                                                 (const MethodInfo_2FDEEE4 *)Method_System_Linq_Enumerable_Select_int__ShopEntity___);
    v81 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                 v80,
                                                                 (const MethodInfo_2FED5C8 *)Method_System_Linq_Enumerable_ToList_ShopEntity___);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v69 = LocalizationManager__Get(localizationKeyForTitle, 0LL);
    v82 = LocalizationManager__Get(localizationKeyForDetail, 0LL);
    v83 = TerminalSceneComponent___c_TypeInfo;
    v84 = v82;
    if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
      v83 = TerminalSceneComponent___c_TypeInfo;
    }
    _9__258_6 = (System_Func_object__int__o *)v83->static_fields->__9__258_6;
    if ( !_9__258_6 )
    {
      if ( !v83->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v83);
        v83 = TerminalSceneComponent___c_TypeInfo;
      }
      v86 = (Il2CppObject *)v83->static_fields->__9;
      _9__258_6 = (System_Func_object__int__o *)sub_1C22084(System_Func_ShopEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__258_6,
        v86,
        Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__258_6__,
        0LL);
      v87 = TerminalSceneComponent___c_TypeInfo->static_fields;
      v87->__9__258_6 = (struct System_Func_ShopEntity__int__o *)_9__258_6;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v87->__9__258_6, (int64_t)_9__258_6, v88, v89, v90, v91, v92, v93);
    }
    v100 = System_Linq_Enumerable__Sum_object_(
             v81,
             (System_Func_TSource__int__o *)_9__258_6,
             (const MethodInfo_2FE8364 *)Method_System_Linq_Enumerable_Sum_ShopEntity___);
    v97 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v100, v94, v95, v96);
    String_70827888 = System_String__Format(v84, v97, 0LL);
    if ( Instance )
    {
LABEL_51:
      CommonUI__OpenAchievementExchangeConditionsDialog(
        (CommonUI_o *)Instance,
        (System_Int32_array *)v67,
        v69,
        String_70827888,
        action,
        0LL);
      goto LABEL_52;
    }
LABEL_34:
    sub_1C22094(String_70827888, v10);
  }
  ActionExtensions__Call(action, 0LL);
LABEL_52:
  UnityEngine_PlayerPrefs__DeleteKey(playerPrefsKey, 0LL);
}


void __fastcall TerminalSceneComponent__PlayAutoExecuteQuest(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x21
  QuestMaster_o *Master_object; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  __int64 v12; // x22
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  TerminalSceneComponent_o *QuestEntityListByType; // x0
  const MethodInfo *v20; // x2
  QuestEntity_o *PlayAutoExecuteQuestEntity; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  QuestMaster_o *v28; // x23
  int32_t v29; // w24
  TerminalPramsManager_c *v30; // x0
  int32_t list_high; // w23
  NetworkManager_ResultCallbackFunc_o *v32; // x19
  Il2CppObject *Request_object; // x19
  int32_t items_high; // w21
  bool HasFlag; // w0
  ScrTerminalListTop_o *mTerminalList; // x22
  bool v37; // w23
  TerminalPramsManager_c *v38; // x0
  int32_t QuestId_k__BackingField; // w19
  int32_t PhaseCnt_k__BackingField; // w23
  System_Action_o *v41; // x20
  int32_t klass_high; // w21
  int32_t v43; // w23

  if ( (byte_4BDE6C1 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_NetworkManager_getRequest_BattleSetupScenarioRequest___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&Method_TerminalSceneComponent___c__DisplayClass228_0__PlayAutoExecuteQuest_b__0__);
    sub_1C21E38(&Method_TerminalSceneComponent___c__DisplayClass228_0__PlayAutoExecuteQuest_b__1__);
    sub_1C21E38(&TerminalSceneComponent___c__DisplayClass228_0_TypeInfo);
    byte_4BDE6C1 = 1;
  }
  v3 = sub_1C22084(TerminalSceneComponent___c__DisplayClass228_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    goto LABEL_71;
  *(_QWORD *)(v3 + 24) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 24), (int64_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v3 + 16) = 0LL;
  v12 = v3 + 16;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 16), 0LL, v13, v14, v15, v16, v17, v18);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Master_object )
    goto LABEL_71;
  QuestEntityListByType = (TerminalSceneComponent_o *)QuestMaster__GetQuestEntityListByType(Master_object, 8, 0LL);
  if ( QuestEntityListByType )
  {
    PlayAutoExecuteQuestEntity = TerminalSceneComponent__GetPlayAutoExecuteQuestEntity(
                                   QuestEntityListByType,
                                   (QuestEntity_array *)QuestEntityListByType,
                                   v20);
    *(_QWORD *)v12 = PlayAutoExecuteQuestEntity;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)(v3 + 16),
      (int64_t)PlayAutoExecuteQuestEntity,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    if ( *(_QWORD *)v12 )
    {
      Master_object = (QuestMaster_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !*(_QWORD *)v12 )
        goto LABEL_71;
      if ( !Master_object )
        goto LABEL_71;
      Master_object = (QuestMaster_o *)QuestTree__GetQuestInfo(
                                         (QuestTree_o *)Master_object,
                                         *(_DWORD *)(*(_QWORD *)v12 + 16LL),
                                         0LL);
      if ( !Master_object )
        goto LABEL_71;
      v28 = Master_object;
      if ( Master_object->fields.revision == 1 )
      {
        if ( !*(_QWORD *)v12 )
          goto LABEL_71;
        v29 = *(_DWORD *)(*(_QWORD *)v12 + 16LL);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4BD909A )
        {
          sub_1C21E38(&TerminalPramsManager_TypeInfo);
          byte_4BD909A = 1;
        }
        v30 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v30 = TerminalPramsManager_TypeInfo;
        }
        v30->static_fields->_QuestId_k__BackingField = v29;
        list_high = HIDWORD(v28->fields.list);
        if ( !byte_4BD909E )
        {
          sub_1C21E38(&TerminalPramsManager_TypeInfo);
          v30 = TerminalPramsManager_TypeInfo;
          byte_4BD909E = 1;
        }
        if ( !v30->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v30);
          v30 = TerminalPramsManager_TypeInfo;
        }
        v30->static_fields->_PhaseCnt_k__BackingField = list_high;
        Master_object = *(QuestMaster_o **)v12;
        if ( !*(_QWORD *)v12 )
          goto LABEL_71;
        if ( QuestEntity__HasFlag((QuestEntity_o *)Master_object, 2LL, 0LL) )
        {
          Master_object = (QuestMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
          if ( Master_object )
          {
            BYTE3(Master_object[2].fields._lookup) = 1;
            v32 = (NetworkManager_ResultCallbackFunc_o *)sub_1C22084(NetworkManager_ResultCallbackFunc_TypeInfo);
            NetworkManager_ResultCallbackFunc___ctor(
              v32,
              (Il2CppObject *)v3,
              Method_TerminalSceneComponent___c__DisplayClass228_0__PlayAutoExecuteQuest_b__1__,
              0LL);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            Request_object = NetworkManager__getRequest_object_(
                               v32,
                               (const MethodInfo_30345EC *)Method_NetworkManager_getRequest_BattleSetupScenarioRequest___);
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4BD7264 )
            {
              sub_1C21E38(&TerminalPramsManager_TypeInfo);
              byte_4BD7264 = 1;
            }
            Master_object = (QuestMaster_o *)TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              Master_object = (QuestMaster_o *)TerminalPramsManager_TypeInfo;
            }
            items_high = HIDWORD(Master_object[2].fields.list->fields.items);
            if ( !byte_4BD7263 )
            {
              sub_1C21E38(&TerminalPramsManager_TypeInfo);
              Master_object = (QuestMaster_o *)TerminalPramsManager_TypeInfo;
              byte_4BD7263 = 1;
            }
            if ( !LODWORD(Master_object[3].monitor) )
            {
              j_il2cpp_runtime_class_init_0(Master_object);
              Master_object = (QuestMaster_o *)TerminalPramsManager_TypeInfo;
            }
            if ( Request_object )
            {
              BattleSetupScenarioRequest__beginRequest(
                (BattleSetupScenarioRequest_o *)Request_object,
                items_high,
                LODWORD(Master_object[2].fields.list->fields._monitor) + 1,
                0LL);
              return;
            }
          }
LABEL_71:
          sub_1C22094(Master_object, v5);
        }
        Master_object = *(QuestMaster_o **)v12;
        if ( !*(_QWORD *)v12 )
          goto LABEL_71;
        HasFlag = QuestEntity__HasFlag((QuestEntity_o *)Master_object, 0x400000LL, 0LL);
        mTerminalList = this->fields.mTerminalList;
        v37 = HasFlag;
        if ( TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          if ( HasFlag )
          {
LABEL_45:
            if ( !byte_4BD7264 )
            {
              sub_1C21E38(&TerminalPramsManager_TypeInfo);
              byte_4BD7264 = 1;
            }
            v38 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v38 = TerminalPramsManager_TypeInfo;
            }
            QuestId_k__BackingField = v38->static_fields->_QuestId_k__BackingField;
            if ( !byte_4BD7263 )
            {
              sub_1C21E38(&TerminalPramsManager_TypeInfo);
              v38 = TerminalPramsManager_TypeInfo;
              byte_4BD7263 = 1;
            }
            if ( !v38->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v38);
              v38 = TerminalPramsManager_TypeInfo;
            }
            PhaseCnt_k__BackingField = v38->static_fields->_PhaseCnt_k__BackingField;
            v41 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
            System_Action___ctor(
              v41,
              (Il2CppObject *)v3,
              Method_TerminalSceneComponent___c__DisplayClass228_0__PlayAutoExecuteQuest_b__0__,
              0LL);
            if ( !mTerminalList )
              goto LABEL_71;
            ScrTerminalListTop__StartQuestBeforeAction(
              mTerminalList,
              QuestId_k__BackingField,
              PhaseCnt_k__BackingField + 1,
              v41,
              0LL);
            return;
          }
        }
        else
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( v37 )
            goto LABEL_45;
        }
        if ( !byte_4BD9099 )
        {
          sub_1C21E38(&TerminalPramsManager_TypeInfo);
          byte_4BD9099 = 1;
        }
        Master_object = (QuestMaster_o *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          Master_object = (QuestMaster_o *)TerminalPramsManager_TypeInfo;
        }
        klass_high = HIDWORD(Master_object[2].fields.list->klass);
        if ( !byte_4BD7264 )
        {
          sub_1C21E38(&TerminalPramsManager_TypeInfo);
          Master_object = (QuestMaster_o *)TerminalPramsManager_TypeInfo;
          byte_4BD7264 = 1;
        }
        if ( !LODWORD(Master_object[3].monitor) )
        {
          j_il2cpp_runtime_class_init_0(Master_object);
          Master_object = (QuestMaster_o *)TerminalPramsManager_TypeInfo;
        }
        v43 = HIDWORD(Master_object[2].fields.list->fields.items);
        if ( !byte_4BD7263 )
        {
          sub_1C21E38(&TerminalPramsManager_TypeInfo);
          Master_object = (QuestMaster_o *)TerminalPramsManager_TypeInfo;
          byte_4BD7263 = 1;
        }
        if ( !LODWORD(Master_object[3].monitor) )
        {
          j_il2cpp_runtime_class_init_0(Master_object);
          Master_object = (QuestMaster_o *)TerminalPramsManager_TypeInfo;
        }
        if ( !mTerminalList )
          goto LABEL_71;
        ScrTerminalListTop__SetBattleSetupInfo(
          mTerminalList,
          klass_high,
          v43,
          LODWORD(Master_object[2].fields.list->fields._monitor) + 1,
          0,
          0,
          0,
          0LL);
        Master_object = (QuestMaster_o *)this->fields.mTerminalList;
        if ( !Master_object )
          goto LABEL_71;
        ScrTerminalListTop__StartFollower((ScrTerminalListTop_o *)Master_object, 0LL);
      }
    }
  }
}


void __fastcall TerminalSceneComponent__PlayChapterStart(
        TerminalSceneComponent_o *this,
        TerminalSceneComponent_PlayChapterStartCallback_o *end_act,
        const MethodInfo *method)
{
  WarEntity_o *IsPlayChapterStart; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  Il2CppObject *Instance; // x20
  WarEntity_o *v14; // x20
  int32_t StartType; // w0
  BattleScriptRootComponent_TalkScriptInfo_o *v16; // x21
  TerminalPramsManager_c *v17; // x0
  int32_t v18; // w22
  TerminalPramsManager_c *v19; // x0
  int32_t targetId; // w22
  int32_t WarId_k__BackingField; // w23
  TerminalPramsManager_c *v22; // x0
  BalanceConfig_c *v23; // x8
  int32_t v24; // w22
  TerminalSceneComponent_c *v25; // x0
  int64_t v26; // x22
  TerminalPramsManager_c *v27; // x0
  int32_t v28; // w22
  TerminalPramsManager_c *v29; // x0

  if ( (byte_4BDE6C0 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C21E38(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BDE6C0 = 1;
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
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.OnResumeFromChapterStart,
    (int64_t)end_act,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9099 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9099 = 1;
  }
  IsPlayChapterStart = (WarEntity_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
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
  v14 = IsPlayChapterStart;
  StartType = WarEntity__GetStartType(IsPlayChapterStart, 0LL);
  if ( StartType == 2 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD9099 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD9099 = 1;
    }
    v19 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v19 = TerminalPramsManager_TypeInfo;
    }
    targetId = v14->fields.targetId;
    WarId_k__BackingField = v19->static_fields->_WarId_k__BackingField;
    v16 = (BattleScriptRootComponent_TalkScriptInfo_o *)sub_1C22084(BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
    BattleScriptRootComponent_TalkScriptInfo___ctor_45771480(v16, WarId_k__BackingField, targetId, 0, 1, 0, 0, 0, 0LL);
  }
  else
  {
    v16 = 0LL;
    if ( StartType == 1 )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BD9099 )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD9099 = 1;
      }
      v17 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v17 = TerminalPramsManager_TypeInfo;
      }
      v18 = v17->static_fields->_WarId_k__BackingField;
      v16 = (BattleScriptRootComponent_TalkScriptInfo_o *)sub_1C22084(BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
      BattleScriptRootComponent_TalkScriptInfo___ctor_45771480(v16, v18, 0, 0, 1, 0, 0, 0, 0LL);
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9099 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9099 = 1;
  }
  v22 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v22 = TerminalPramsManager_TypeInfo;
  }
  v23 = BalanceConfig_TypeInfo;
  v24 = v22->static_fields->_WarId_k__BackingField;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v23 = BalanceConfig_TypeInfo;
  }
  if ( v24 == v23->static_fields->OrdealCallWarId )
  {
    v25 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v25 = TerminalSceneComponent_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v25->static_fields->ORDEAL_CALL_CHAPTER_PLAY_STATE_KEY, 1, 0LL);
  }
  if ( WarEntity__HasFlag(v14, 0x8000, 0LL) )
  {
    v26 = v14->fields.targetId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD909A )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD909A = 1;
    }
    v27 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v27 = TerminalPramsManager_TypeInfo;
    }
    v27->static_fields->_QuestId_k__BackingField = v26;
    v28 = v14->fields.targetId;
    if ( !byte_4BD92EA )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      v27 = TerminalPramsManager_TypeInfo;
      byte_4BD92EA = 1;
    }
    if ( !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      v27 = TerminalPramsManager_TypeInfo;
    }
    v27->static_fields->_LastPlayedQuestId_k__BackingField = v28;
    TerminalPramsManager__CheckClearSelectedStoryQuestId(v14->fields.targetId, 0LL);
    TerminalPramsManager__PlayQuestSave_SaveData(0LL);
    IsPlayChapterStart = (WarEntity_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( IsPlayChapterStart )
    {
      MissionNotifyManager__StartPause((MissionNotifyManager_o *)IsPlayChapterStart, 0LL);
      IsPlayChapterStart = (WarEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( IsPlayChapterStart )
      {
        AvalonSceneManager__changeScene((AvalonSceneManager_o *)IsPlayChapterStart, 38, 2, (Il2CppObject *)v16, 0LL);
        return;
      }
    }
LABEL_64:
    sub_1C22094(IsPlayChapterStart, v6);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD92E4 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD92E4 = 1;
  }
  v29 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v29 = TerminalPramsManager_TypeInfo;
  }
  v29->static_fields->meSceneStatus = 3;
  IsPlayChapterStart = (WarEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !IsPlayChapterStart )
    goto LABEL_64;
  AvalonSceneManager__pushScene((AvalonSceneManager_o *)IsPlayChapterStart, 38, 2, (Il2CppObject *)v16, 0LL);
}


void __fastcall TerminalSceneComponent__PlayEventTutorial(
        TerminalSceneComponent_o *this,
        System_Action_o *callbackAfter,
        const MethodInfo *method)
{
  __int64 v5; // x20
  UnityEngine_Component_o *EventID; // x0
  __int64 v7; // x1
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
  TerminalPramsManager_c *v20; // x0
  struct ScrTerminalListTop_o *mTerminalList; // x8
  int32_t v22; // w21
  System_Action_o *v23; // x22
  struct ScrTerminalMap_o *mTerminalMap; // x8
  struct MapControl_MapInfo_o *mMapInfo; // x8

  if ( (byte_4BDE6C3 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&Method_TerminalSceneComponent___c__DisplayClass233_0__PlayEventTutorial_b__0__);
    sub_1C21E38(&TerminalSceneComponent___c__DisplayClass233_0_TypeInfo);
    byte_4BDE6C3 = 1;
  }
  v5 = sub_1C22084(TerminalSceneComponent___c__DisplayClass233_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_16;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callbackAfter;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 24), (int64_t)callbackAfter, v14, v15, v16, v17, v18, v19);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9099 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9099 = 1;
  }
  v20 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v20 = TerminalPramsManager_TypeInfo;
  }
  EventID = (UnityEngine_Component_o *)WarMaster__getEventID(v20->static_fields->_WarId_k__BackingField, 0LL);
  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_16;
  v22 = (int)EventID;
  EventID = (UnityEngine_Component_o *)mTerminalList->fields.mActionBgColl;
  if ( !EventID
    || (EventID = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(EventID, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)EventID, 1, 0LL),
        v23 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo),
        System_Action___ctor(
          v23,
          (Il2CppObject *)v5,
          Method_TerminalSceneComponent___c__DisplayClass233_0__PlayEventTutorial_b__0__,
          0LL),
        (mTerminalMap = this->fields.mTerminalMap) == 0LL)
    || (mMapInfo = mTerminalMap->fields.mMapInfo) == 0LL )
  {
LABEL_16:
    sub_1C22094(EventID, v7);
  }
  EventTutorialMaster__CheckTutorial(v22, 1, v23, mMapInfo->fields.mapId, 0, 0, 0, 0LL);
}


void __fastcall TerminalSceneComponent__PlayEventTutorialWithoutAfterAction(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  TerminalPramsManager_c *v7; // x0
  struct ScrTerminalMap_o *mTerminalMap; // x8
  struct MapControl_MapInfo_o *mMapInfo; // x8

  if ( (byte_4BDE6C4 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BDE6C4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  if ( QuestAfterAction__IsPlaying((QuestAfterAction_o *)Instance, 0LL) )
  {
    ActionExtensions__Call(callback, 0LL);
    return;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9099 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9099 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  Instance = (Il2CppObject *)WarMaster__getEventID(v7->static_fields->_WarId_k__BackingField, 0LL);
  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap || (mMapInfo = mTerminalMap->fields.mMapInfo) == 0LL )
LABEL_15:
    sub_1C22094(Instance, v6);
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
    sub_1C22094(mQuestInformation, method);
  return QuestInformationComponent__isListBuilding(mQuestInformation, 0LL);
}


int32_t __fastcall TerminalSceneComponent__QuestInfoShowing(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  struct QuestInformationComponent_o *mQuestInformation; // x8

  mQuestInformation = this->fields.mQuestInformation;
  if ( !mQuestInformation )
    sub_1C22094(this, method);
  return mQuestInformation->fields.settedQuestId;
}


void __fastcall TerminalSceneComponent__RebootToNetworkError(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  System_String_o *v3; // x20
  System_String_o *v4; // x0
  __int64 v5; // x1
  TerminalSceneComponent___c_c *v6; // x8
  System_String_o *v7; // x21
  ErrorDialog_ClickDelegate_o *_9__215_0; // x22
  Il2CppObject *v9; // x23
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4BDE6B7 & 1) == 0 )
  {
    sub_1C21E38(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_TerminalSceneComponent___c__RebootToNetworkError_b__215_0__);
    sub_1C21E38(&TerminalSceneComponent___c_TypeInfo);
    sub_1C21E38(&StringLiteral_13536/*"TERMINAL_NETWORK_ERROR_DIALOG_TITLE"*/);
    sub_1C21E38(&StringLiteral_13535/*"TERMINAL_NETWORK_ERROR_DIALOG_MESSAGE"*/);
    byte_4BDE6B7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_13536/*"TERMINAL_NETWORK_ERROR_DIALOG_TITLE"*/, 0LL);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_13535/*"TERMINAL_NETWORK_ERROR_DIALOG_MESSAGE"*/, 0LL);
  v6 = TerminalSceneComponent___c_TypeInfo;
  v7 = v4;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v6 = TerminalSceneComponent___c_TypeInfo;
  }
  _9__215_0 = v6->static_fields->__9__215_0;
  if ( !_9__215_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = TerminalSceneComponent___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__215_0 = (ErrorDialog_ClickDelegate_o *)sub_1C22084(ErrorDialog_ClickDelegate_TypeInfo);
    ErrorDialog_ClickDelegate___ctor(
      _9__215_0,
      v9,
      Method_TerminalSceneComponent___c__RebootToNetworkError_b__215_0__,
      0LL);
    static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    static_fields->__9__215_0 = _9__215_0;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__215_0,
      (int64_t)_9__215_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  if ( !Instance )
    sub_1C22094(v4, v5);
  CommonUI__OpenErrorDialog((CommonUI_o *)Instance, v3, v7, _9__215_0, 1, 0LL);
}


void __fastcall TerminalSceneComponent__ReleaseAssetToResume(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mTerminalList; // x20
  TitleInfoControl_o *v4; // x0
  __int64 v5; // x1
  struct ScrTerminalListTop_o *v6; // x8
  UnityEngine_Object_o *mQuestBoardListViewManager; // x20
  UnityEngine_Object_o *mTitleInfo; // x20

  if ( (byte_4BDE69A & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDE69A = 1;
  }
  mTerminalList = (UnityEngine_Object_o *)this->fields.mTerminalList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = (TitleInfoControl_o *)UnityEngine_Object__op_Inequality(0LL, mTerminalList, 0LL);
  if ( ((unsigned __int8)v4 & 1) != 0 )
  {
    v6 = this->fields.mTerminalList;
    if ( !v6 )
      goto LABEL_18;
    mQuestBoardListViewManager = (UnityEngine_Object_o *)v6->fields.mQuestBoardListViewManager;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v4 = (TitleInfoControl_o *)UnityEngine_Object__op_Inequality(0LL, mQuestBoardListViewManager, 0LL);
    if ( ((unsigned __int8)v4 & 1) != 0 )
    {
      if ( !mQuestBoardListViewManager )
        goto LABEL_18;
      QuestBoardListViewManager__ReleaseTerminalAsset((QuestBoardListViewManager_o *)mQuestBoardListViewManager, 0LL);
    }
  }
  mTitleInfo = (UnityEngine_Object_o *)this->fields.mTitleInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(0LL, mTitleInfo, 0LL) )
  {
    v4 = this->fields.mTitleInfo;
    if ( v4 )
    {
      TitleInfoControl__ReleaseTitleInfoAsset(v4, 0LL);
      return;
    }
LABEL_18:
    sub_1C22094(v4, v5);
  }
}


void __fastcall TerminalSceneComponent__SaveCampaignDirectBonusData(
        TerminalSceneComponent_o *this,
        CommonUI_CampaignDirectBonusData_array *campaignDirectBonus,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_4BDE6C9 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BDE6C9 = 1;
  }
  if ( campaignDirectBonus )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD9AEE )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD9AEE = 1;
    }
    v9 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v9 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v9->static_fields;
    static_fields->_CampaignDirectBonus_k__BackingField = campaignDirectBonus;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->_CampaignDirectBonus_k__BackingField,
      (int64_t)campaignDirectBonus,
      (int64_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    TerminalPramsManager__CampaignDirectBonus_SaveData(0LL);
  }
}


void __fastcall TerminalSceneComponent__SendMessageStartUpAndResume(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  CommonUI_o *v5; // x20
  struct TerminalSceneComponent_PlayChapterStartCallback_o *v6; // x8
  PartyOrganizationUtility_o *p_OnResumeFromChapterStart; // x19
  struct TerminalSceneComponent_PlayChapterStartCallback_o *OnResumeFromChapterStart; // t1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4BDE694 & 1) == 0 )
  {
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BDE694 = 1;
  }
  SceneRootComponent__sendMessageStartUp((SceneRootComponent_o *)this, 0LL);
  if ( this->fields.isFadeInAfterResumeLoad )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v5 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    if ( !v5 )
      sub_1C22094(Instance, v4);
    CommonUI__maskFadein(v5, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
    this->fields.isFadeInAfterResumeLoad = 0;
  }
  OnResumeFromChapterStart = this->fields.OnResumeFromChapterStart;
  p_OnResumeFromChapterStart = (PartyOrganizationUtility_o *)&this->fields.OnResumeFromChapterStart;
  v6 = OnResumeFromChapterStart;
  if ( OnResumeFromChapterStart )
  {
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      1LL,
      *(_QWORD *)&v6->fields.extra_arg);
    p_OnResumeFromChapterStart->klass = 0LL;
    sub_1C21DDC(p_OnResumeFromChapterStart, 0LL, v9, v10, v11, v12, v13, v14);
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
    sub_1C22094(this, isEnable);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, isEnable, 0LL);
  ActionExtensions__Call(callback, 0LL);
}


void __fastcall TerminalSceneComponent__SetDirectionalLightActive(
        TerminalSceneComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Object_o *GameObjectWithLog; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4BDE6D6 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_5429/*"Directional light"*/);
    byte_4BDE6D6 = 1;
  }
  GameObjectWithLog = (UnityEngine_Object_o *)GameObjectExtensions__FindGameObjectWithLog(
                                                this->fields.mEarthCoreObj,
                                                (System_String_o *)StringLiteral_5429/*"Directional light"*/,
                                                0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality(GameObjectWithLog, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !GameObjectWithLog )
      sub_1C22094(v6, v7);
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

  if ( (byte_4BDE69F & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    byte_4BDE69F = 1;
  }
  mTerminalServant = (UnityEngine_Component_o *)this->fields.mTerminalServant;
  if ( !mTerminalServant
    || (gameObject = UnityEngine_Component__get_gameObject(mTerminalServant, 0LL),
        (mTerminalServant = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(gameObject, 0LL)) == 0LL)
    || (mTerminalServant = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mTerminalServant, 0LL)) == 0LL
    || (mTerminalServant = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                        (UnityEngine_GameObject_o *)mTerminalServant,
                                                        (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___)) == 0LL )
  {
    sub_1C22094(mTerminalServant, isDisp);
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
  __int64 v5; // x20
  UnityEngine_Camera_o *mEarthEffCamera; // x0
  __int64 v7; // x1
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
  UnityEngine_Object_o *mEarthCore; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v22; // x0
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  TerminalSceneComponent_c *v26; // x0
  int *v27; // x1
  System_String_o *EARTH_ASSET_NAME; // x21
  System_Int32_c *v29; // x0
  UnityEngine_GameObject_o *v30; // x0
  UnityEngine_GameObject_o *v31; // x0
  TerminalSceneComponent_c *v32; // x0
  Il2CppObject *v33; // x0
  struct System_String_o *v34; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  Il2CppObject *Instance; // x0
  System_String_o *loadEarthAssetName; // x19
  AssetManager_o *v43; // x21
  AssetLoader_LoadEndDataHandler_o *v44; // x22
  int v45; // [xsp+8h] [xbp-38h] BYREF
  int v46; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BDE691 & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&ServantCommentManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    sub_1C21E38(&Method_TerminalSceneComponent___c__DisplayClass173_0__SetEarthView_b__0__);
    sub_1C21E38(&TerminalSceneComponent___c__DisplayClass173_0_TypeInfo);
    byte_4BDE691 = 1;
  }
  v5 = sub_1C22084(TerminalSceneComponent___c__DisplayClass173_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_30;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 24), (int64_t)callback, v14, v15, v16, v17, v18, v19);
  mEarthCore = (UnityEngine_Object_o *)this->fields.mEarthCore;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mEarthCore, 0LL, 0LL) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v5 + 24), 0LL);
    return;
  }
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
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
              v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mEarthEffCamera, 0LL);
              GameObjectExtensions__SetLocalPositionZ(v22, -792.87, 0LL);
              v26 = TerminalSceneComponent_TypeInfo;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                v26 = TerminalSceneComponent_TypeInfo;
              }
              v27 = &v46;
              EARTH_ASSET_NAME = v26->static_fields->EARTH_ASSET_NAME;
              v29 = int_TypeInfo;
              v46 = 2;
              goto LABEL_28;
            }
          }
        }
      }
    }
LABEL_30:
    sub_1C22094(mEarthEffCamera, v7);
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
  v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mEarthEffCamera, 0LL);
  GameObjectExtensions__SetLocalPositionZ(v30, -50000.0, 0LL);
  mEarthEffCamera = this->fields.mEarthEffCamera;
  if ( !mEarthEffCamera )
    goto LABEL_30;
  v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mEarthEffCamera, 0LL);
  GameObjectExtensions__SetLocalPositionZ(v31, -50000.0, 0LL);
  v32 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v32 = TerminalSceneComponent_TypeInfo;
  }
  v27 = &v45;
  EARTH_ASSET_NAME = v32->static_fields->EARTH_ASSET_NAME;
  v29 = int_TypeInfo;
  v45 = 1;
LABEL_28:
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(v29, v27, v23, v24, v25);
  v34 = System_String__Format(EARTH_ASSET_NAME, v33, 0LL);
  this->fields.loadEarthAssetName = v34;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.loadEarthAssetName,
    (int64_t)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  loadEarthAssetName = this->fields.loadEarthAssetName;
  v43 = (AssetManager_o *)Instance;
  v44 = (AssetLoader_LoadEndDataHandler_o *)sub_1C22084(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v44,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass173_0__SetEarthView_b__0__,
    0LL);
  if ( !v43 )
    goto LABEL_30;
  AssetManager__LoadAssetStorage(v43, loadEarthAssetName, v44, 1, 0LL);
}


void __fastcall TerminalSceneComponent__SetQuestBoardInfoOff(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  struct ScrTerminalListTop_o *mTerminalList; // x0
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x8

  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList || (mQuestBoardListViewManager = mTerminalList->fields.mQuestBoardListViewManager) == 0LL )
    sub_1C22094(mTerminalList, method);
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
    sub_1C22094(0LL, method);
  QuestInformationComponent__SetResetReady(mQuestInformation, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalSceneComponent__SetState(
        TerminalSceneComponent_o *this,
        int32_t state,
        const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4BDE6C6 & 1) == 0 )
  {
    sub_1C21E38(&Method_CStateManager_TerminalSceneComponent__setState__);
    byte_4BDE6C6 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1C22094(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_31E6B54 *)Method_CStateManager_TerminalSceneComponent__setState__);
}


void __fastcall TerminalSceneComponent__SetupStandServant(
        TerminalSceneComponent_o *this,
        UserServantEntity_o *usd,
        bool isSlideIn,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  StandFigureSlideComponent_o *mTerminalServant; // x22
  System_Action_o *v25; // x23
  struct StandFigureSlideComponent_o *v26; // x19
  System_Action_o *v27; // x20
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7

  if ( (byte_4BDE69E & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_TerminalSceneComponent___c__DisplayClass189_0__SetupStandServant_b__0__);
    sub_1C21E38(&Method_TerminalSceneComponent___c__DisplayClass189_0__SetupStandServant_b__1__);
    sub_1C21E38(&TerminalSceneComponent___c__DisplayClass189_0_TypeInfo);
    byte_4BDE69E = 1;
  }
  v9 = sub_1C22084(TerminalSceneComponent___c__DisplayClass189_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_7;
  *(_BYTE *)(v9 + 16) = isSlideIn;
  *(_QWORD *)(v9 + 24) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 24), (int64_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 32) = endAction;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 32), (int64_t)endAction, v18, v19, v20, v21, v22, v23);
  mTerminalServant = this->fields.mTerminalServant;
  v25 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v25,
    (Il2CppObject *)v9,
    Method_TerminalSceneComponent___c__DisplayClass189_0__SetupStandServant_b__0__,
    0LL);
  if ( !mTerminalServant
    || (StandFigureSlideComponent__Setup(mTerminalServant, usd, 0, v25, 0LL),
        v26 = this->fields.mTerminalServant,
        v27 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo),
        System_Action___ctor(
          v27,
          (Il2CppObject *)v9,
          Method_TerminalSceneComponent___c__DisplayClass189_0__SetupStandServant_b__1__,
          0LL),
        !v26) )
  {
LABEL_7:
    sub_1C22094(v10, v11);
  }
  v26->fields.mBtnAct = v27;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v26->fields.mBtnAct, (int64_t)v27, v28, v29, v30, v31, v32, v33);
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
    sub_1C21DDC(
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
  TerminalPramsManager_c *v5; // x0
  TerminalPramsManager_c *v6; // x0
  void *v7; // x0
  __int64 v8; // x8
  __int64 v9; // x8
  __int64 v10; // x19
  System_Action_object__o *v11; // x21
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Action_object__o *v24; // x20
  Il2CppObject *v25; // x21
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  System_Action_object__o *v39; // x20
  Il2CppObject *v40; // x21
  struct TerminalSceneComponent___c_StaticFields *v41; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  System_Action_object__o *v54; // x20
  Il2CppObject *v55; // x21
  struct TerminalSceneComponent___c_StaticFields *v56; // x0
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  ActionChain_o *v63; // x20

  if ( (byte_4BDE6A8 & 1) == 0 )
  {
    sub_1C21E38(&ActionChain_TypeInfo);
    sub_1C21E38(&System_Action_Action____TypeInfo);
    sub_1C21E38(&System_Action_Action__TypeInfo);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&Method_TerminalSceneComponent__StartWindowMessage_b__200_0__);
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    sub_1C21E38(&Method_TerminalSceneComponent___c__StartWindowMessage_b__200_1__);
    sub_1C21E38(&Method_TerminalSceneComponent___c__StartWindowMessage_b__200_2__);
    sub_1C21E38(&Method_TerminalSceneComponent___c__StartWindowMessage_b__200_3__);
    sub_1C21E38(&TerminalSceneComponent___c_TypeInfo);
    byte_4BDE6A8 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD82DB )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD82DB = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  if ( v5->static_fields->_IsDispOnly_k__BackingField )
  {
    if ( !v5->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v5);
    if ( !byte_4BDE78E )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BDE78E = 1;
    }
    v6 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v6 = TerminalPramsManager_TypeInfo;
    }
    if ( !System_String__IsNullOrEmpty(v6->static_fields->_QuestWindowMessage_k__BackingField, 0LL) )
    {
      v10 = sub_1C21EE0(System_Action_Action____TypeInfo, 4LL);
      v11 = (System_Action_object__o *)sub_1C22084(System_Action_Action__TypeInfo);
      System_Action_object____ctor(
        v11,
        (Il2CppObject *)this,
        Method_TerminalSceneComponent__StartWindowMessage_b__200_0__,
        0LL);
      if ( v10 )
      {
        if ( !*(_DWORD *)(v10 + 24) )
          goto LABEL_55;
        *(_QWORD *)(v10 + 32) = v11;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v10 + 32), (int64_t)v11, v12, v13, v14, v15, v16, v17);
        v7 = TerminalSceneComponent___c_TypeInfo;
        if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
          v7 = TerminalSceneComponent___c_TypeInfo;
        }
        v24 = *(System_Action_object__o **)(*((_QWORD *)v7 + 23) + 40LL);
        if ( !v24 )
        {
          if ( !*((_DWORD *)v7 + 56) )
          {
            j_il2cpp_runtime_class_init_0(v7);
            v7 = TerminalSceneComponent___c_TypeInfo;
          }
          v25 = (Il2CppObject *)**((_QWORD **)v7 + 23);
          v24 = (System_Action_object__o *)sub_1C22084(System_Action_Action__TypeInfo);
          System_Action_object____ctor(v24, v25, Method_TerminalSceneComponent___c__StartWindowMessage_b__200_1__, 0LL);
          static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
          static_fields->__9__200_1 = (struct System_Action_Action__o *)v24;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&static_fields->__9__200_1,
            (int64_t)v24,
            v27,
            v28,
            v29,
            v30,
            v31,
            v32);
        }
        if ( *(_DWORD *)(v10 + 24) <= 1u )
          goto LABEL_55;
        *(_QWORD *)(v10 + 40) = v24;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v10 + 40), (int64_t)v24, v18, v19, v20, v21, v22, v23);
        v7 = TerminalSceneComponent___c_TypeInfo;
        if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
          v7 = TerminalSceneComponent___c_TypeInfo;
        }
        v39 = *(System_Action_object__o **)(*((_QWORD *)v7 + 23) + 48LL);
        if ( !v39 )
        {
          if ( !*((_DWORD *)v7 + 56) )
          {
            j_il2cpp_runtime_class_init_0(v7);
            v7 = TerminalSceneComponent___c_TypeInfo;
          }
          v40 = (Il2CppObject *)**((_QWORD **)v7 + 23);
          v39 = (System_Action_object__o *)sub_1C22084(System_Action_Action__TypeInfo);
          System_Action_object____ctor(v39, v40, Method_TerminalSceneComponent___c__StartWindowMessage_b__200_2__, 0LL);
          v41 = TerminalSceneComponent___c_TypeInfo->static_fields;
          v41->__9__200_2 = (struct System_Action_Action__o *)v39;
          sub_1C21DDC((PartyOrganizationUtility_o *)&v41->__9__200_2, (int64_t)v39, v42, v43, v44, v45, v46, v47);
        }
        if ( *(_DWORD *)(v10 + 24) <= 2u )
          goto LABEL_55;
        *(_QWORD *)(v10 + 48) = v39;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v10 + 48), (int64_t)v39, v33, v34, v35, v36, v37, v38);
        v7 = TerminalSceneComponent___c_TypeInfo;
        if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
          v7 = TerminalSceneComponent___c_TypeInfo;
        }
        v54 = *(System_Action_object__o **)(*((_QWORD *)v7 + 23) + 56LL);
        if ( !v54 )
        {
          if ( !*((_DWORD *)v7 + 56) )
          {
            j_il2cpp_runtime_class_init_0(v7);
            v7 = TerminalSceneComponent___c_TypeInfo;
          }
          v55 = (Il2CppObject *)**((_QWORD **)v7 + 23);
          v54 = (System_Action_object__o *)sub_1C22084(System_Action_Action__TypeInfo);
          System_Action_object____ctor(v54, v55, Method_TerminalSceneComponent___c__StartWindowMessage_b__200_3__, 0LL);
          v56 = TerminalSceneComponent___c_TypeInfo->static_fields;
          v56->__9__200_3 = (struct System_Action_Action__o *)v54;
          sub_1C21DDC((PartyOrganizationUtility_o *)&v56->__9__200_3, (int64_t)v54, v57, v58, v59, v60, v61, v62);
        }
        if ( *(_DWORD *)(v10 + 24) <= 3u )
LABEL_55:
          sub_1C2209C(v7, callbackFunc);
        *(_QWORD *)(v10 + 56) = v54;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v10 + 56), (int64_t)v54, v48, v49, v50, v51, v52, v53);
        v63 = (ActionChain_o *)sub_1C22084(ActionChain_TypeInfo);
        ActionChain___ctor_47730872(v63, (System_Action_Action__array *)v10, 0LL);
        if ( v63 )
        {
          ChainableActionBase__Execute((ChainableActionBase_o *)v63, 0LL);
          return;
        }
      }
LABEL_54:
      sub_1C22094(v7, callbackFunc);
    }
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BD7183 )
  {
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BD7183 = 1;
  }
  v7 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v7 = TerminalSceneComponent_TypeInfo;
  }
  v8 = **((_QWORD **)v7 + 23);
  if ( !v8 )
    goto LABEL_54;
  v9 = *(_QWORD *)(v8 + 264);
  if ( !v9 )
    goto LABEL_54;
  v7 = *(void **)(v9 + 552);
  if ( !v7 )
    goto LABEL_54;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v7, 0, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__InitMessageWindowData(0LL);
  ActionExtensions__Call(callbackFunc, 0LL);
}


void __fastcall TerminalSceneComponent__TriggerEventEffectsNext(
        TerminalSceneComponent_o *this,
        int32_t eventId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BDE6AB & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C21E38(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDE6AB = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_15;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          eventId,
          (const MethodInfo_325BE14 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
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
    sub_1C22094(Instance, v8);
  TitleInfoControl__CheckSuperBossHpAnim((TitleInfoControl_o *)Instance, callback, 0LL);
}


void __fastcall TerminalSceneComponent__Update(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  CStateManager_T__o *mFSM; // x0
  ScrTerminalMap_o *mTerminalMap; // x20
  _BOOL8 IsMapTouchEnabled; // x0
  __int64 v7; // x1

  if ( (byte_4BDE6AD & 1) == 0 )
  {
    sub_1C21E38(&Method_CStateManager_TerminalSceneComponent__update__);
    sub_1C21E38(&CTouch_TypeInfo);
    byte_4BDE6AD = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__process(0LL);
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_31E6B30 *)Method_CStateManager_TerminalSceneComponent__update__);
  mTerminalMap = this->fields.mTerminalMap;
  IsMapTouchEnabled = TerminalSceneComponent__IsMapTouchEnabled(this, v3);
  if ( !mTerminalMap )
    sub_1C22094(IsMapTouchEnabled, v7);
  ScrTerminalMap__ProcessMapCamera(mTerminalMap, IsMapTouchEnabled, 0LL);
}


void __fastcall TerminalSceneComponent__UpdateCompleteMissionIconUI(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  ScrPlayerStatus_o *mPlayerStatus; // x0

  mPlayerStatus = this->fields.mPlayerStatus;
  if ( !mPlayerStatus )
    sub_1C22094(0LL, method);
  ScrPlayerStatus__UpdateCompleteMissionIconUI(mPlayerStatus, 0LL);
}


void __fastcall TerminalSceneComponent__UpdateQuestBoardList(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  struct ScrTerminalListTop_o *mTerminalList; // x8

  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList || (this = (TerminalSceneComponent_o *)mTerminalList->fields.mQuestBoardListViewManager) == 0LL )
    sub_1C22094(this, method);
  QuestBoardListViewManager__SetupDisp((QuestBoardListViewManager_o *)this, 0LL);
}


void __fastcall TerminalSceneComponent__UpdateTitleEventInfo(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *mTitleInfo; // x0

  mTitleInfo = this->fields.mTitleInfo;
  if ( !mTitleInfo )
    sub_1C22094(0LL, method);
  TitleInfoControl__UpdateEventItemInfo(mTitleInfo, 0LL);
}


System_Collections_IEnumerator_o *__fastcall TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x19

  if ( (byte_4BDE6A2 & 1) == 0 )
  {
    sub_1C21E38(&TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__194_TypeInfo);
    byte_4BDE6A2 = 1;
  }
  v2 = sub_1C22084(TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__194_TypeInfo);
  System_Object___ctor((Il2CppObject *)v2, 0LL);
  *(_DWORD *)(v2 + 16) = 0;
  return (System_Collections_IEnumerator_o *)v2;
}


bool __fastcall TerminalSceneComponent___CoWaitBlankEarthActionEnd_b__255_0(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *mTerminalList; // x0

  if ( (byte_4BDE6DF & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BDE6DF = 1;
  }
  mTerminalList = (CommonUI_o *)this->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_9;
  if ( !ScrTerminalListTop__IsBlankEarthAction((ScrTerminalListTop_o *)mTerminalList, 0LL) )
  {
    mTerminalList = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( mTerminalList )
      return !CommonUI__IsActive_NotifiDialog(mTerminalList, 0LL);
LABEL_9:
    sub_1C22094(mTerminalList, method);
  }
  return 0;
}


bool __fastcall TerminalSceneComponent___CoWaitTerminalTopEffectEnd_b__254_0(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *mTerminalList; // x0

  if ( (byte_4BDE6DE & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BDE6DE = 1;
  }
  mTerminalList = (CommonUI_o *)this->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_9;
  if ( ScrTerminalListTop__CheckTerminalTopEffect((ScrTerminalListTop_o *)mTerminalList, 0LL) <= 0 )
  {
    mTerminalList = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( mTerminalList )
      return !CommonUI__IsActive_NotifiDialog(mTerminalList, 0LL);
LABEL_9:
    sub_1C22094(mTerminalList, method);
  }
  return 0;
}


bool __fastcall TerminalSceneComponent___OpenExchangeDialogue_b__258_3(
        TerminalSceneComponent_o *this,
        ShopEntity_o *x,
        const MethodInfo *method)
{
  return !TerminalSceneComponent__IsNotDisplayCostume(this, x, method);
}


void __fastcall TerminalSceneComponent___StartWindowMessage_b__200_0(
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
    sub_1C22094(this, action);
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
  TerminalPramsManager_c *v5; // x0
  struct ScrTerminalMap_o *mTerminalMap; // x8
  struct ScrTerminalMap_o *v7; // x8
  struct ScrTerminalMap_o *v8; // x8
  struct WarEntity_o *mWarEnt; // x8
  ScrTerminalMap_o *v10; // x21
  System_Action_o *v11; // x22
  TitleInfoControl_o *mTitleInfo; // x21
  System_Action_o *v13; // x22

  v4 = this;
  if ( (byte_4BDE6DA & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_EventRaidMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&Method_TerminalSceneComponent__beginInitialize_b__172_3__);
    this = (TerminalSceneComponent_o *)sub_1C21E38(&Method_TerminalSceneComponent__beginInitialize_b__172_4__);
    byte_4BDE6DA = 1;
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
    v7 = v4->fields.mTerminalMap;
    if ( !v7 )
      goto LABEL_30;
    if ( !v7->fields.isRaidMap )
      goto LABEL_25;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (TerminalSceneComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventRaidMaster___);
    v8 = v4->fields.mTerminalMap;
    if ( !v8 )
      goto LABEL_30;
    mWarEnt = v8->fields.mWarEnt;
    if ( !mWarEnt || !this )
      goto LABEL_30;
    if ( EventRaidMaster__GetRaidGorupMax((EventRaidMaster_o *)this, mWarEnt->fields.eventId, 0LL) >= 1 )
    {
      v10 = v4->fields.mTerminalMap;
      v11 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)v4, Method_TerminalSceneComponent__beginInitialize_b__172_3__, 0LL);
      if ( v10 )
      {
        ScrTerminalMap__BeginRaidUpdateRequest(v10, v11, 0LL);
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
        v13 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
        System_Action___ctor(v13, (Il2CppObject *)v4, Method_TerminalSceneComponent__beginInitialize_b__172_4__, 0LL);
        if ( mTitleInfo )
        {
          TitleInfoControl__UpdateEventInfo(mTitleInfo, v13, 0LL);
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
    sub_1C22094(this, gotNewServant);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD736A )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD736A = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsAutoResume_k__BackingField = 1;
  this = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
    sub_1C22094(mPlayerStatus, method);
  }
  QuestBoardListViewManager__SetupDisp((QuestBoardListViewManager_o *)mPlayerStatus, 0LL);
}


void __fastcall TerminalSceneComponent___beginInitialize_b__172_2(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v4; // x1
  ScrTerminalMap_o *mTerminalMap; // x19

  if ( (byte_4BDE6DC & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4BDE6DC = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (AvalonSceneManager__endInitialize(Instance, (SceneRootComponent_o *)this, 0LL),
        (Instance = (AvalonSceneManager_o *)this->fields.mEarthCore) == 0LL)
    || (mTerminalMap = this->fields.mTerminalMap,
        Instance = (AvalonSceneManager_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)Instance,
                                             0LL),
        !mTerminalMap) )
  {
    sub_1C22094(Instance, v4);
  }
  ScrTerminalMap__SetCore(mTerminalMap, (UnityEngine_GameObject_o *)Instance, 0LL);
}


void __fastcall TerminalSceneComponent___beginInitialize_b__172_3(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  TerminalPramsManager_c *v4; // x0
  int32_t WarId_k__BackingField; // w21
  System_Action_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1
  System_Collections_IEnumerator_o *v9; // x1

  if ( (byte_4BDE6DB & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&Method_TerminalSceneComponent__beginInitialize_b__172_5__);
    byte_4BDE6DB = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9099 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9099 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v4->static_fields->_WarId_k__BackingField;
  v6 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_TerminalSceneComponent__beginInitialize_b__172_5__, 0LL);
  if ( !Instance )
    sub_1C22094(v7, v8);
  v9 = QuestTree__mfBaseTreeUpdateWithOpenCheck((QuestTree_o *)Instance, WarId_k__BackingField, v6, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, v9, 0LL);
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
    sub_1C22094(this, method);
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
    sub_1C22094(mTerminalList, method);
  }
  ScrTerminalMap__UpdateEventRaidUI((ScrTerminalMap_o *)mTerminalList, 0LL);
}


void __fastcall TerminalSceneComponent___callbackEventDailyPoint_b__220_0(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.afterEventDailyPoint, 0LL);
}


void __fastcall TerminalSceneComponent___mfsmfInitTable_b__217_0(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *v2; // x19
  __int64 v3; // x1
  PlayMakerFSM_o *myFSM; // x0

  v2 = this;
  if ( (byte_4BDE6DD & 1) == 0 )
  {
    this = (TerminalSceneComponent_o *)sub_1C21E38(&StringLiteral_5644/*"EVENTLISTUP_END"*/);
    byte_4BDE6DD = 1;
  }
  TerminalSceneComponent__deleteQuestMovie(this, method);
  myFSM = v2->fields.myFSM;
  if ( !myFSM )
    sub_1C22094(0LL, v3);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_5644/*"EVENTLISTUP_END"*/, 0LL);
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
  TerminalPramsManager_c *v3; // x0
  TerminalPramsManager_c *v4; // x0
  TerminalPramsManager_c *v5; // x0
  QuestAfterAction_o *Instance; // x0
  __int64 v7; // x1
  CommonUI_o *v8; // x21
  TerminalPramsManager_c *v9; // x0
  BalanceConfig_c *v10; // x0
  int32_t OrdealCallWarId; // w21
  TerminalPramsManager_c *v12; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct UnityEngine_Camera_o *mUICamera; // x20
  CTouch_c *v20; // x0
  struct CTouch_StaticFields *static_fields; // x0
  struct CStateManager_TerminalSceneComponent__o **p_mFSM; // x20
  CStateManager_T__o *v23; // x21
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  CStateManager_T__o *mFSM; // x21
  Il2CppObject *v31; // x22
  CStateManager_T__o *v32; // x21
  Il2CppObject *v33; // x22
  CStateManager_T__o *v34; // x21
  Il2CppObject *v35; // x22
  CStateManager_T__o *v36; // x21
  Il2CppObject *v37; // x22
  CStateManager_T__o *v38; // x21
  Il2CppObject *v39; // x22
  CStateManager_T__o *v40; // x21
  Il2CppObject *v41; // x22
  CStateManager_T__o *v42; // x21
  Il2CppObject *v43; // x22
  CStateManager_T__o *v44; // x21
  Il2CppObject *v45; // x22
  CStateManager_T__o *v46; // x21
  Il2CppObject *v47; // x22
  CStateManager_T__o *v48; // x21
  Il2CppObject *v49; // x22
  CStateManager_T__o *v50; // x20
  Il2CppObject *v51; // x21
  const MethodInfo *v52; // x2
  ScrPlayerStatus_o *mPlayerStatus; // x20
  System_Func_bool__bool__o *v54; // x21
  struct ScrPlayerStatus_o *v55; // x21
  System_Action_o *v56; // x20
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  struct ScrTerminalMap_o *mTerminalMap; // x8
  System_Action_o *v64; // x20
  const MethodInfo *v65; // x2

  if ( (byte_4BDE690 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AndroidUtil_TypeInfo);
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_CStateManager_TerminalSceneComponent___ctor__);
    sub_1C21E38(&Method_CStateManager_TerminalSceneComponent__add__);
    sub_1C21E38(&CStateManager_TerminalSceneComponent__TypeInfo);
    sub_1C21E38(&CTouch_TypeInfo);
    sub_1C21E38(&System_Func_bool__bool__TypeInfo);
    sub_1C21E38(&ServantProfileEventJoinManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1C21E38(&TerminalSceneComponent_StateNormal_TypeInfo);
    sub_1C21E38(&TerminalSceneComponent_StateTutorial1_QuestArrow_TypeInfo);
    sub_1C21E38(&TerminalSceneComponent_StateTutorial1_SpotArrow_TypeInfo);
    sub_1C21E38(&TerminalSceneComponent_StateTutorial2_QuestArrow_TypeInfo);
    sub_1C21E38(&TerminalSceneComponent_StateTutorial2_SpotArrow_TypeInfo);
    sub_1C21E38(&TerminalSceneComponent_StateTutorial3_GachaArrow_TypeInfo);
    sub_1C21E38(&TerminalSceneComponent_StateTutorial3_MenuArrow_TypeInfo);
    sub_1C21E38(&TerminalSceneComponent_StateTutorial4_QuestArrow_TypeInfo);
    sub_1C21E38(&TerminalSceneComponent_StateTutorial4_SpotArrow_TypeInfo);
    sub_1C21E38(&TerminalSceneComponent_StateTutorial5_CombineArrow_TypeInfo);
    sub_1C21E38(&TerminalSceneComponent_StateTutorial5_MenuArrow_TypeInfo);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&Method_TerminalSceneComponent__beginInitialize_b__172_0__);
    sub_1C21E38(&Method_TerminalSceneComponent__beginInitialize_b__172_1__);
    sub_1C21E38(&Method_TerminalSceneComponent__beginInitialize_b__172_2__);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDE690 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  AndroidUtil__DeleteOldSaveData(0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__Load_SaveData(0LL);
  if ( !byte_4BD90A1 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD90A1 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  if ( !v3->static_fields->_IsAutoResume_k__BackingField )
  {
    if ( !v3->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v3);
    if ( !byte_4BD909C )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD909C = 1;
    }
    v4 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v4 = TerminalPramsManager_TypeInfo;
    }
    v4->static_fields->_DispState_k__BackingField = 0;
    if ( !byte_4BD9405 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      v4 = TerminalPramsManager_TypeInfo;
      byte_4BD9405 = 1;
    }
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = TerminalPramsManager_TypeInfo;
    }
    v4->static_fields->_SelectedStoryQuestId_k__BackingField = 0;
    TerminalPramsManager__TerminalSelectedStoryQuestId_SaveData(0LL);
    if ( !byte_4BD84F7 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD84F7 = 1;
    }
    v5 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v5 = TerminalPramsManager_TypeInfo;
    }
    v5->static_fields->_SelectedRecollectionWarId_k__BackingField = 0;
    TerminalPramsManager__TerminalSelectedRecollectionWarId_SaveData(0LL);
  }
  Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (CommonUI_o *)Instance;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !v8 )
    goto LABEL_88;
  CommonUI__CheckChangeOtherConnectMarkFromEventId(
    v8,
    TerminalPramsManager_TypeInfo->static_fields->ConnectMarkEventId,
    1,
    0LL);
  Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    goto LABEL_88;
  if ( QuestAfterAction__CheckChangeBlankEarth(Instance, 0LL) )
    goto LABEL_39;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BDE787 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BDE787 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  if ( v9->static_fields->_IsTransOrdealCall_k__BackingField )
  {
LABEL_39:
    v10 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v10 = BalanceConfig_TypeInfo;
    }
    OrdealCallWarId = v10->static_fields->OrdealCallWarId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    TerminalPramsManager__SetAutoResumeByWarId(OrdealCallWarId, 0LL);
    if ( !byte_4BD92E8 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD92E8 = 1;
    }
    v9 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v9 = TerminalPramsManager_TypeInfo;
    }
    v9->static_fields->_IsTransOrdealCall_k__BackingField = 0;
  }
  if ( !v9->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v9);
  if ( !byte_4BD92E4 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD92E4 = 1;
  }
  v12 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
  }
  v12->static_fields->meSceneStatus = 1;
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  this->fields._IsReq_InitEarthRotateY_k__BackingField = 1;
  this->fields._onClosePresentBoxFlag_k__BackingField = 0;
  this->fields._FirstFadeTime_k__BackingField = 0.0;
  SkillLvMaster__AssertionSkillOverwriteByNowTime(0LL);
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__init(0LL);
  mUICamera = this->fields.mUICamera;
  if ( !byte_4BDA342 )
  {
    sub_1C21E38(&CTouch_TypeInfo);
    byte_4BDA342 = 1;
  }
  v20 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v20 = CTouch_TypeInfo;
  }
  static_fields = v20->static_fields;
  static_fields->mScreenCam = mUICamera;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&static_fields->mScreenCam,
    (int64_t)mUICamera,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v23 = (CStateManager_T__o *)sub_1C22084(CStateManager_TerminalSceneComponent__TypeInfo);
    CStateManager_object____ctor(
      v23,
      (Il2CppObject *)this,
      11,
      (const MethodInfo_31E6A20 *)Method_CStateManager_TerminalSceneComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_TerminalSceneComponent__o *)v23;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.mFSM, (int64_t)v23, v24, v25, v26, v27, v28, v29);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v31 = (Il2CppObject *)sub_1C22084(TerminalSceneComponent_StateNormal_TypeInfo);
    System_Object___ctor(v31, 0LL);
    if ( mFSM )
    {
      CStateManager_object___add(
        mFSM,
        0,
        (IState_T__o *)v31,
        (const MethodInfo_31E6AC8 *)Method_CStateManager_TerminalSceneComponent__add__);
      v32 = (CStateManager_T__o *)*p_mFSM;
      v33 = (Il2CppObject *)sub_1C22084(TerminalSceneComponent_StateTutorial1_SpotArrow_TypeInfo);
      System_Object___ctor(v33, 0LL);
      if ( v32 )
      {
        CStateManager_object___add(
          v32,
          1,
          (IState_T__o *)v33,
          (const MethodInfo_31E6AC8 *)Method_CStateManager_TerminalSceneComponent__add__);
        v34 = (CStateManager_T__o *)*p_mFSM;
        v35 = (Il2CppObject *)sub_1C22084(TerminalSceneComponent_StateTutorial1_QuestArrow_TypeInfo);
        System_Object___ctor(v35, 0LL);
        if ( v34 )
        {
          CStateManager_object___add(
            v34,
            2,
            (IState_T__o *)v35,
            (const MethodInfo_31E6AC8 *)Method_CStateManager_TerminalSceneComponent__add__);
          v36 = (CStateManager_T__o *)*p_mFSM;
          v37 = (Il2CppObject *)sub_1C22084(TerminalSceneComponent_StateTutorial2_SpotArrow_TypeInfo);
          System_Object___ctor(v37, 0LL);
          if ( v36 )
          {
            CStateManager_object___add(
              v36,
              3,
              (IState_T__o *)v37,
              (const MethodInfo_31E6AC8 *)Method_CStateManager_TerminalSceneComponent__add__);
            v38 = (CStateManager_T__o *)*p_mFSM;
            v39 = (Il2CppObject *)sub_1C22084(TerminalSceneComponent_StateTutorial2_QuestArrow_TypeInfo);
            System_Object___ctor(v39, 0LL);
            if ( v38 )
            {
              CStateManager_object___add(
                v38,
                4,
                (IState_T__o *)v39,
                (const MethodInfo_31E6AC8 *)Method_CStateManager_TerminalSceneComponent__add__);
              v40 = (CStateManager_T__o *)*p_mFSM;
              v41 = (Il2CppObject *)sub_1C22084(TerminalSceneComponent_StateTutorial3_MenuArrow_TypeInfo);
              System_Object___ctor(v41, 0LL);
              if ( v40 )
              {
                CStateManager_object___add(
                  v40,
                  5,
                  (IState_T__o *)v41,
                  (const MethodInfo_31E6AC8 *)Method_CStateManager_TerminalSceneComponent__add__);
                v42 = (CStateManager_T__o *)*p_mFSM;
                v43 = (Il2CppObject *)sub_1C22084(TerminalSceneComponent_StateTutorial3_GachaArrow_TypeInfo);
                System_Object___ctor(v43, 0LL);
                if ( v42 )
                {
                  CStateManager_object___add(
                    v42,
                    6,
                    (IState_T__o *)v43,
                    (const MethodInfo_31E6AC8 *)Method_CStateManager_TerminalSceneComponent__add__);
                  v44 = (CStateManager_T__o *)*p_mFSM;
                  v45 = (Il2CppObject *)sub_1C22084(TerminalSceneComponent_StateTutorial4_SpotArrow_TypeInfo);
                  System_Object___ctor(v45, 0LL);
                  if ( v44 )
                  {
                    CStateManager_object___add(
                      v44,
                      7,
                      (IState_T__o *)v45,
                      (const MethodInfo_31E6AC8 *)Method_CStateManager_TerminalSceneComponent__add__);
                    v46 = (CStateManager_T__o *)*p_mFSM;
                    v47 = (Il2CppObject *)sub_1C22084(TerminalSceneComponent_StateTutorial4_QuestArrow_TypeInfo);
                    System_Object___ctor(v47, 0LL);
                    if ( v46 )
                    {
                      CStateManager_object___add(
                        v46,
                        8,
                        (IState_T__o *)v47,
                        (const MethodInfo_31E6AC8 *)Method_CStateManager_TerminalSceneComponent__add__);
                      v48 = (CStateManager_T__o *)*p_mFSM;
                      v49 = (Il2CppObject *)sub_1C22084(TerminalSceneComponent_StateTutorial5_MenuArrow_TypeInfo);
                      System_Object___ctor(v49, 0LL);
                      if ( v48 )
                      {
                        CStateManager_object___add(
                          v48,
                          9,
                          (IState_T__o *)v49,
                          (const MethodInfo_31E6AC8 *)Method_CStateManager_TerminalSceneComponent__add__);
                        v50 = (CStateManager_T__o *)*p_mFSM;
                        v51 = (Il2CppObject *)sub_1C22084(TerminalSceneComponent_StateTutorial5_CombineArrow_TypeInfo);
                        System_Object___ctor(v51, 0LL);
                        if ( v50 )
                        {
                          CStateManager_object___add(
                            v50,
                            10,
                            (IState_T__o *)v51,
                            (const MethodInfo_31E6AC8 *)Method_CStateManager_TerminalSceneComponent__add__);
                          TerminalSceneComponent__SetState(this, 0, v52);
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
    sub_1C22094(Instance, v7);
  }
LABEL_73:
  Instance = (QuestAfterAction_o *)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_88;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)Instance, 0LL, 1, (System_String_o *)StringLiteral_1/*""*/, 1, 0LL);
  Instance = (QuestAfterAction_o *)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_88;
  TitleInfoControl__changeTitleInfo_38387828((TitleInfoControl_o *)Instance, 1, 1, 0, 0LL);
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
  v54 = (System_Func_bool__bool__o *)sub_1C22084(System_Func_bool__bool__TypeInfo);
  System_Func_bool__bool____ctor(
    v54,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent__beginInitialize_b__172_0__,
    0LL);
  if ( !mPlayerStatus )
    goto LABEL_88;
  ScrPlayerStatus__SetCloseGiftAct(mPlayerStatus, v54, 0LL);
  v55 = this->fields.mPlayerStatus;
  v56 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v56, (Il2CppObject *)this, Method_TerminalSceneComponent__beginInitialize_b__172_1__, 0LL);
  if ( !v55 )
    goto LABEL_88;
  v55->fields.mRecoverAct = v56;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v55->fields.mRecoverAct, (int64_t)v56, v57, v58, v59, v60, v61, v62);
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
  v64 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v64, (Il2CppObject *)this, Method_TerminalSceneComponent__beginInitialize_b__172_2__, 0LL);
  TerminalSceneComponent__SetEarthView(this, v64, v65);
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
  ServantProfileEventJoinManager__UpdateProfileServantEventJoin(0LL);
}


void __fastcall TerminalSceneComponent__beginPause(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  if ( (byte_4BDE69C & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4BDE69C = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v4);
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  this->fields.quitType = 3;
  TerminalSceneComponent__quit(this, v5);
}


void __fastcall TerminalSceneComponent__beginResume(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8
  struct WarEntity_o *mWarEnt; // x8
  int32_t eventId; // w20
  TerminalPramsManager_c *v9; // x0
  const MethodInfo *v10; // x2
  bool IsEventPeriod; // w20
  TerminalPramsManager_c *v12; // x0
  TerminalPramsManager_c *v13; // x0
  struct ScrTerminalMap_o *v14; // x8
  const MethodInfo *v15; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BDE69B & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C21E38(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BDE69B = 1;
  }
  entity = 0LL;
  this->fields.isFadeInAfterResumeLoad = 0;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9650 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9650 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  if ( v9->static_fields->meSceneStatus != 3 )
  {
    if ( eventId )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_43;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !Instance )
        goto LABEL_43;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             &entity,
             eventId,
             (const MethodInfo_325BE14 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
      {
        Instance = entity;
        if ( entity )
        {
          IsEventPeriod = EventEntity__IsEventPeriod((EventEntity_o *)entity, 0LL, 0LL);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( IsEventPeriod )
          {
            if ( byte_4BD92E4 )
            {
LABEL_32:
              v12 = TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v12 = TerminalPramsManager_TypeInfo;
              }
              v12->static_fields->meSceneStatus = 2;
              this->fields.isFadeInAfterResumeLoad = 1;
              goto LABEL_35;
            }
LABEL_31:
            sub_1C21E38(&TerminalPramsManager_TypeInfo);
            byte_4BD92E4 = 1;
            goto LABEL_32;
          }
          if ( !byte_4BD92E4 )
          {
            sub_1C21E38(&TerminalPramsManager_TypeInfo);
            byte_4BD92E4 = 1;
          }
          v13 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v13 = TerminalPramsManager_TypeInfo;
          }
          v13->static_fields->meSceneStatus = 1;
          TerminalSceneComponent__CallQuestInformationCloseAtAll(this, 0, v10);
          v14 = this->fields.mTerminalMap;
          if ( v14 )
          {
            Instance = (Il2CppObject *)v14->fields.spotMaskObj;
            if ( Instance )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
              TerminalSceneComponent__SetQuestBoardInfoOff(this, v15);
              goto LABEL_35;
            }
          }
        }
LABEL_43:
        sub_1C22094(Instance, v4);
      }
      v9 = TerminalPramsManager_TypeInfo;
    }
    if ( !v9->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v9);
    if ( byte_4BD92E4 )
      goto LABEL_32;
    goto LABEL_31;
  }
LABEL_35:
  this->fields.quitType = 1;
  SceneRootComponent__beginResume_39920572((SceneRootComponent_o *)this, 0LL);
}


void __fastcall TerminalSceneComponent__beginStartUp(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(TerminalSceneComponent_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._5_beginStartUp.method)(
    this,
    0LL,
    this->klass->vtable._6_beginStartUp.methodPtr);
}


void __fastcall TerminalSceneComponent__beginStartUp_43496036(
        TerminalSceneComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 methodPtr_low; // x10
  Il2CppObject *v11; // x1
  TerminalSceneComponent_c *v12; // x0
  const MethodInfo *v13; // x2
  TerminalPramsManager_c *v14; // x0
  TerminalPramsManager_c *v15; // x0
  Il2CppObject *Instance; // x0
  const MethodInfo *v17; // x1
  Il2CppObject *MasterData_object; // x20
  struct UserServantEntity_array *UserServantListFromDeckIsTerminal; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct UserServantEntity_array *mStandSvtDatas; // x8
  __int64 mStandSvtIdx; // x9
  UserServantEntity_o *NextStandServant; // x20
  bool isSavedMemoryMode; // w22
  System_Action_o *v30; // x0
  System_Action_o *v31; // x21
  const MethodInfo *v32; // x4
  const MethodInfo *v33; // x3
  System_Collections_IEnumerator_o *Async; // x1

  if ( (byte_4BDE692 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_1C21E38(&OptionManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&Method_TerminalSceneComponent_SendMessageStartUpAndResume__);
    sub_1C21E38(&Method_TerminalSceneComponent__beginStartUp_b__175_0__);
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    sub_1C21E38(&TerminalTransitionInfo_TypeInfo);
    sub_1C21E38(&TutorialFlag_TypeInfo);
    byte_4BDE692 = 1;
  }
  if ( data
    && (methodPtr_low = LOBYTE(TerminalTransitionInfo_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (TerminalTransitionInfo_c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] == TerminalTransitionInfo_TypeInfo )
      v11 = data;
    else
      v11 = 0LL;
  }
  else
  {
    v11 = 0LL;
  }
  this->fields._TransitionInfo_k__BackingField = (struct TerminalTransitionInfo_o *)v11;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._TransitionInfo_k__BackingField,
    (int64_t)v11,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v12 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v12 = TerminalSceneComponent_TypeInfo;
  }
  UnityEngine_RenderSettings__set_ambientLight(v12->static_fields->DEFAULT_AMBIENT_LIGHT_COLOR, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 1, 32, 0LL);
  MainMenuBar__setMenuActive(1, this->fields.mUICamera, 0LL);
  TerminalSceneComponent__SetDispStandServant(this, 1, v13);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BDE788 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BDE788 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  if ( !v14->static_fields->_IsDispDone_UIStandFigure_k__BackingField )
  {
    if ( !v14->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v14);
    if ( !byte_4BDE789 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BDE789 = 1;
    }
    v15 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v15 = TerminalPramsManager_TypeInfo;
    }
    v15->static_fields->_IsDispDone_UIStandFigure_k__BackingField = 1;
    if ( !byte_4BDE78A )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      v15 = TerminalPramsManager_TypeInfo;
      byte_4BDE78A = 1;
    }
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = TerminalPramsManager_TypeInfo;
    }
    v15->static_fields->_IsDispUIStandFigure_k__BackingField = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  Instance = (Il2CppObject *)TutorialFlag__Get_38930984(126, 0LL);
  if ( !MasterData_object
    || (((unsigned __int8)Instance & 1) == 0
      ? (UserServantListFromDeckIsTerminal = UserDeckMaster__GetUserServantListFromDeckIsTerminal(
                                               (UserDeckMaster_o *)MasterData_object,
                                               0LL))
      : (UserServantListFromDeckIsTerminal = UserDeckMaster__GetUserServantListFromDeckReaveHeroine(
                                               (UserDeckMaster_o *)MasterData_object,
                                               0LL)),
        this->fields.mStandSvtDatas = UserServantListFromDeckIsTerminal,
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&this->fields.mStandSvtDatas,
          (int64_t)UserServantListFromDeckIsTerminal,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25),
        (mStandSvtDatas = this->fields.mStandSvtDatas) == 0LL) )
  {
LABEL_45:
    sub_1C22094(Instance, v17);
  }
  mStandSvtIdx = this->fields.mStandSvtIdx;
  if ( (unsigned int)mStandSvtIdx >= mStandSvtDatas->max_length )
    sub_1C2209C(Instance, v17);
  NextStandServant = mStandSvtDatas->m_Items[mStandSvtIdx];
  if ( !NextStandServant )
    NextStandServant = TerminalSceneComponent__GetNextStandServant(this, v17);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  isSavedMemoryMode = OptionManager__isSavedMemoryMode(0LL);
  v30 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  v31 = v30;
  if ( isSavedMemoryMode )
  {
    System_Action___ctor(v30, (Il2CppObject *)this, Method_TerminalSceneComponent__beginStartUp_b__175_0__, 0LL);
    TerminalSceneComponent__SetupStandServant(this, NextStandServant, 0, v31, v32);
  }
  else
  {
    System_Action___ctor(v30, (Il2CppObject *)this, Method_TerminalSceneComponent_SendMessageStartUpAndResume__, 0LL);
    Async = TerminalSceneComponent__LoadAsync(this, NextStandServant, v31, v33);
    UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, Async, 0LL);
  }
}


void __fastcall TerminalSceneComponent__callbackEventDailyPoint(
        TerminalSceneComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *v4; // x19
  struct ScrTerminalMap_o *mTerminalMap; // x8
  struct WarEntity_o *mWarEnt; // x22
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  Il2CppObject *v13; // x21
  TerminalPramsManager_c *v14; // x0
  PartyOrganizationUtility_o *p_eventDailyPoint_k__BackingField; // x0
  int32_t monitor_high; // w21
  TerminalPramsManager_c *v17; // x0
  int64_t Time_39806296; // x21
  TerminalPramsManager_c *v19; // x0
  int32_t eventId; // w21
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct ScrTerminalListTop_o *v22; // x8
  UnityEngine_GameObject_o *mActionPanel; // x21
  TitleInfoControl_o *mTitleInfo; // x20
  System_Action_o *v25; // x22
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  System_DateTime_o v27; // 0:x0.8

  v4 = this;
  if ( (byte_4BDE6BB & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C21E38(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_JsonManager_Deserialize_EventDailyPoint___);
    sub_1C21E38(&JsonManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&Method_TerminalSceneComponent__callbackEventDailyPoint_b__220_0__);
    sub_1C21E38(&StringLiteral_11272/*"REQUEST_NG"*/);
    sub_1C21E38(&StringLiteral_22456/*"ng"*/);
    this = (TerminalSceneComponent_o *)sub_1C21E38(&StringLiteral_25590/*"{}"*/);
    byte_4BDE6BB = 1;
  }
  entity = 0LL;
  if ( !result )
    goto LABEL_46;
  if ( System_String__Equals_63123792(result, (System_String_o *)StringLiteral_22456/*"ng"*/, 0LL) )
  {
    this = (TerminalSceneComponent_o *)v4->fields.myFSM;
    if ( this )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11272/*"REQUEST_NG"*/, 0LL);
      return;
    }
LABEL_46:
    sub_1C22094(this, result);
  }
  this = (TerminalSceneComponent_o *)System_String__Equals_63123792(result, (System_String_o *)StringLiteral_25590/*"{}"*/, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_43;
  mTerminalMap = v4->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_46;
  mWarEnt = mTerminalMap->fields.mWarEnt;
  this = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_46;
  this = (TerminalSceneComponent_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !mWarEnt || !this )
    goto LABEL_46;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &entity,
          mWarEnt->fields.eventId,
          (const MethodInfo_325BE14 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
LABEL_43:
    this = (TerminalSceneComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !this )
      goto LABEL_46;
    MissionNotifyManager__EndPause((MissionNotifyManager_o *)this, 0LL);
    ActionExtensions__Call(v4->fields.afterEventDailyPoint, 0LL);
  }
  else
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v13 = JsonManager__Deserialize_object_(
            (Il2CppObject *)result,
            (const MethodInfo_30176B4 *)Method_JsonManager_Deserialize_EventDailyPoint___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BDB1BB )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BDB1BB = 1;
    }
    v14 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v14 = TerminalPramsManager_TypeInfo;
    }
    p_eventDailyPoint_k__BackingField = (PartyOrganizationUtility_o *)&v14->static_fields->_eventDailyPoint_k__BackingField;
    p_eventDailyPoint_k__BackingField->klass = (PartyOrganizationUtility_c *)v13;
    sub_1C21DDC(p_eventDailyPoint_k__BackingField, (int64_t)v13, v7, v8, v9, v10, v11, v12);
    if ( !entity )
      goto LABEL_46;
    monitor_high = HIDWORD(entity[2].monitor);
    if ( !byte_4BDE78F )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BDE78F = 1;
    }
    v17 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v17 = TerminalPramsManager_TypeInfo;
    }
    v17->static_fields->_EventDailyPointItem_k__BackingField = monitor_high;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v27.fields._dateData = NetworkManager__getServerDateTime(0LL).fields._dateData;
    Time_39806296 = NetworkManager__getTime_39806296(v27, 0LL);
    if ( !byte_4BD9AE3 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD9AE3 = 1;
    }
    v19 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v19 = TerminalPramsManager_TypeInfo;
    }
    v19->static_fields->_BeforeTimeEventDailyPoint_k__BackingField = Time_39806296;
    eventId = mWarEnt->fields.eventId;
    if ( !byte_4BD9AE2 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      v19 = TerminalPramsManager_TypeInfo;
      byte_4BD9AE2 = 1;
    }
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = TerminalPramsManager_TypeInfo;
    }
    v19->static_fields->_EventDailyPointEventId_k__BackingField = eventId;
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
    v22 = v4->fields.mTerminalList;
    if ( !v22 )
      goto LABEL_46;
    mActionPanel = v22->fields.mActionPanel;
    mTitleInfo = v4->fields.mTitleInfo;
    v25 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      v25,
      (Il2CppObject *)v4,
      Method_TerminalSceneComponent__callbackEventDailyPoint_b__220_0__,
      0LL);
    if ( !mTitleInfo )
      goto LABEL_46;
    TitleInfoControl__EventDailyPointOpen(mTitleInfo, mActionPanel, v25, 0LL);
  }
}


void __fastcall TerminalSceneComponent__callbackTopHome(
        TerminalSceneComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  void *myFSM; // x0
  System_Action_o *afterTopLogin; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4BDE6B6 & 1) == 0 )
  {
    sub_1C21E38(&Method_JsonManager_Deserialize_TopHomeInfo___);
    sub_1C21E38(&JsonManager_TypeInfo);
    sub_1C21E38(&StringLiteral_11274/*"REQUEST_OK"*/);
    sub_1C21E38(&StringLiteral_11272/*"REQUEST_NG"*/);
    sub_1C21E38(&StringLiteral_22456/*"ng"*/);
    byte_4BDE6B6 = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_22456/*"ng"*/, 0LL) )
  {
    myFSM = this->fields.myFSM;
    if ( myFSM )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)StringLiteral_11272/*"REQUEST_NG"*/, 0LL);
      return;
    }
LABEL_11:
    sub_1C22094(myFSM, v5);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  myFSM = JsonManager__Deserialize_object_(
            (Il2CppObject *)result,
            (const MethodInfo_30176B4 *)Method_JsonManager_Deserialize_TopHomeInfo___);
  if ( !myFSM )
    goto LABEL_11;
  TopHomeRequest__setRecentRefreshTime(*((_QWORD *)myFSM + 2), 0LL);
  MainMenuBar__UpdateNoticeNumber(0LL);
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    goto LABEL_11;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)StringLiteral_11274/*"REQUEST_OK"*/, 0LL);
  afterTopLogin = this->fields.afterTopLogin;
  this->fields.isTopLoginBusy = 0;
  ActionExtensions__Call(afterTopLogin, 0LL);
  this->fields.afterTopLogin = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.afterTopLogin, 0LL, v8, v9, v10, v11, v12, v13);
}


void __fastcall TerminalSceneComponent__callbackTopLogin(
        TerminalSceneComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v5; // x21
  __int64 v6; // x1
  Il2CppObject *Request_object; // x21
  PlayMakerFSM_o *myFSM; // x0
  PlayMakerFSM_o *v9; // x19
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x0
  System_Collections_Generic_List_int__o *v11; // x20
  TerminalSceneComponent___c_c *v12; // x8
  System_Converter_TInput__TOutput__o *_9__213_0; // x21
  Il2CppObject *v14; // x22
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  System_String_array *v22; // x0
  System_String_o *v23; // x0
  System_Collections_Generic_IEnumerable_TSource__o *klass; // x0
  System_Collections_Generic_List_int__o *v25; // x19
  TerminalSceneComponent___c_c *v26; // x8
  System_Converter_TInput__TOutput__o *_9__213_1; // x20
  Il2CppObject *v28; // x21
  struct TerminalSceneComponent___c_StaticFields *v29; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  System_String_array *v36; // x0
  System_String_o *v37; // x0

  if ( (byte_4BDE6B5 & 1) == 0 )
  {
    sub_1C21E38(&System_Converter_int__string__TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C21E38(&Method_JsonManager_Deserialize_CommonUI_LoginResultData___);
    sub_1C21E38(&JsonManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__ConvertAll_string___);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C21E38(&Method_NetworkManager_getRequest_TopHomeRequest___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&Method_TerminalSceneComponent_callbackTopHome__);
    sub_1C21E38(&Method_TerminalSceneComponent___c__callbackTopLogin_b__213_0__);
    sub_1C21E38(&Method_TerminalSceneComponent___c__callbackTopLogin_b__213_1__);
    sub_1C21E38(&TerminalSceneComponent___c_TypeInfo);
    sub_1C21E38(&StringLiteral_19961/*"freeShopIds"*/);
    sub_1C21E38(&StringLiteral_11274/*"REQUEST_OK"*/);
    sub_1C21E38(&StringLiteral_23337/*"returnRarePriShopIds"*/);
    sub_1C21E38(&StringLiteral_866/*","*/);
    byte_4BDE6B5 = 1;
  }
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_1C22084(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent_callbackTopHome__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v5,
                     (const MethodInfo_30345EC *)Method_NetworkManager_getRequest_TopHomeRequest___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9723 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9723 = 1;
  }
  myFSM = (PlayMakerFSM_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
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
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !TerminalPramsManager__IsAutoForTimeProgressEvents(0LL) || TopHomeRequest__IsExpirationDateUpdateEventMap(0LL) )
  {
    myFSM = this->fields.myFSM;
    if ( !myFSM )
      goto LABEL_45;
    PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11274/*"REQUEST_OK"*/, 0LL);
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
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  myFSM = (PlayMakerFSM_o *)JsonManager__Deserialize_object_(
                              (Il2CppObject *)result,
                              (const MethodInfo_30176B4 *)Method_JsonManager_Deserialize_CommonUI_LoginResultData___);
  if ( !myFSM )
LABEL_45:
    sub_1C22094(myFSM, v6);
  v9 = myFSM;
  monitor = (System_Collections_Generic_IEnumerable_TSource__o *)myFSM[2].monitor;
  if ( monitor )
  {
    myFSM = (PlayMakerFSM_o *)System_Linq_Enumerable__ToList_int_(
                                monitor,
                                (const MethodInfo_2FED35C *)Method_System_Linq_Enumerable_ToList_int___);
    v11 = (System_Collections_Generic_List_int__o *)myFSM;
    v12 = TerminalSceneComponent___c_TypeInfo;
    if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
      v12 = TerminalSceneComponent___c_TypeInfo;
    }
    _9__213_0 = (System_Converter_TInput__TOutput__o *)v12->static_fields->__9__213_0;
    if ( !_9__213_0 )
    {
      if ( !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        v12 = TerminalSceneComponent___c_TypeInfo;
      }
      v14 = (Il2CppObject *)v12->static_fields->__9;
      _9__213_0 = (System_Converter_TInput__TOutput__o *)sub_1C22084(System_Converter_int__string__TypeInfo);
      System_Converter_int__object____ctor(
        _9__213_0,
        v14,
        Method_TerminalSceneComponent___c__callbackTopLogin_b__213_0__,
        0LL);
      static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
      static_fields->__9__213_0 = (struct System_Converter_int__string__o *)_9__213_0;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&static_fields->__9__213_0,
        (int64_t)_9__213_0,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
    }
    if ( !v11 )
      goto LABEL_45;
    myFSM = (PlayMakerFSM_o *)System_Collections_Generic_List_int___ConvertAll_object_(
                                v11,
                                (System_Converter_T__TOutput__o *)_9__213_0,
                                (const MethodInfo_2EDFAC8 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    if ( !myFSM )
      goto LABEL_45;
    v22 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                   (System_Collections_Generic_List_object__o *)myFSM,
                                   (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_string__ToArray__);
    v23 = System_String__Join((System_String_o *)StringLiteral_866/*","*/, v22, 0LL);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_19961/*"freeShopIds"*/, v23, 0LL);
  }
  klass = (System_Collections_Generic_IEnumerable_TSource__o *)v9[2].klass;
  if ( klass )
  {
    myFSM = (PlayMakerFSM_o *)System_Linq_Enumerable__ToList_int_(
                                klass,
                                (const MethodInfo_2FED35C *)Method_System_Linq_Enumerable_ToList_int___);
    v25 = (System_Collections_Generic_List_int__o *)myFSM;
    v26 = TerminalSceneComponent___c_TypeInfo;
    if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
      v26 = TerminalSceneComponent___c_TypeInfo;
    }
    _9__213_1 = (System_Converter_TInput__TOutput__o *)v26->static_fields->__9__213_1;
    if ( !_9__213_1 )
    {
      if ( !v26->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v26);
        v26 = TerminalSceneComponent___c_TypeInfo;
      }
      v28 = (Il2CppObject *)v26->static_fields->__9;
      _9__213_1 = (System_Converter_TInput__TOutput__o *)sub_1C22084(System_Converter_int__string__TypeInfo);
      System_Converter_int__object____ctor(
        _9__213_1,
        v28,
        Method_TerminalSceneComponent___c__callbackTopLogin_b__213_1__,
        0LL);
      v29 = TerminalSceneComponent___c_TypeInfo->static_fields;
      v29->__9__213_1 = (struct System_Converter_int__string__o *)_9__213_1;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v29->__9__213_1, (int64_t)_9__213_1, v30, v31, v32, v33, v34, v35);
    }
    if ( v25 )
    {
      myFSM = (PlayMakerFSM_o *)System_Collections_Generic_List_int___ConvertAll_object_(
                                  v25,
                                  (System_Converter_T__TOutput__o *)_9__213_1,
                                  (const MethodInfo_2EDFAC8 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
      if ( myFSM )
      {
        v36 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                       (System_Collections_Generic_List_object__o *)myFSM,
                                       (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_string__ToArray__);
        v37 = System_String__Join((System_String_o *)StringLiteral_866/*","*/, v36, 0LL);
        UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_23337/*"returnRarePriShopIds"*/, v37, 0LL);
        goto LABEL_44;
      }
    }
    goto LABEL_45;
  }
LABEL_44:
  UnityEngine_PlayerPrefs__Save(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalSceneComponent__changeScene(
        TerminalSceneComponent_o *this,
        int32_t type,
        const MethodInfo *method)
{
  if ( type == 91 )
    TerminalSceneComponent__ReleaseAssetToResume(this, *(const MethodInfo **)&type);
}


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

  if ( (byte_4BDE6A3 & 1) == 0 )
  {
    sub_1C21E38(&TerminalSceneComponent__coFadein_WorldDisp_d__195_TypeInfo);
    byte_4BDE6A3 = 1;
  }
  v9 = isExecuteUnusedAssets;
  v10 = sub_1C22084(TerminalSceneComponent__coFadein_WorldDisp_d__195_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  *(_DWORD *)(v10 + 16) = 0;
  *(_QWORD *)(v10 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v10 + 32), (int64_t)this, v11, v12, v13, v14, v15, v16);
  *(float *)(v10 + 64) = fadeTime;
  *(_QWORD *)(v10 + 40) = endAct;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v10 + 40), (int64_t)endAct, v17, v18, v19, v20, v21, v22);
  *(_BYTE *)(v10 + 48) = v9;
  return (System_Collections_IEnumerator_o *)v10;
}


void __fastcall TerminalSceneComponent__deleteQuestMovie(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  int64_t Time; // x20
  DataManager_o *Master_object; // x0
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_T__o *datalist; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *v6; // x21
  __int64 v7; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  __int64 v14; // x9
  int32_t *v15; // x10
  __int64 v16; // x0
  __int64 v17; // x1
  QuestPhaseEntity_o *v18; // x23
  QuestPhaseMaster_c *v19; // x0
  System_String_o *ScriptStr; // x0
  __int64 v21; // x1
  System_String_o *v22; // x22
  Il2CppObject *Entity; // x0
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  __int64 v25; // x9
  int32_t *v26; // x10
  __int64 v27; // x0

  if ( (byte_4BDE6B9 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_QuestPhaseEntity__GetEnumerator__);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C21E38(&Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string__getEntityList__);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerator_QuestPhaseEntity__TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&QuestPhaseMaster_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDE6B9 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object
    || (datalist = (System_Collections_ObjectModel_Collection_T__o *)Master_object->fields.datalist,
        (Master_object = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Master_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                           Master_object,
                                           (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestMaster___),
        !datalist) )
  {
    sub_1C22094(Master_object, v4);
  }
  v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 datalist,
                 (const MethodInfo_31F66A4 *)Method_System_Collections_ObjectModel_Collection_QuestPhaseEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C22094(0LL, v7);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v10 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_15;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_15:
      p_method = sub_1C73E18(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    v14 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestPhaseEntity__c **)v15 - 1) != System_Collections_Generic_IEnumerator_QuestPhaseEntity__TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_22;
      }
      v16 = (__int64)&v13->vtable[*v15].method;
    }
    else
    {
LABEL_22:
      v16 = sub_1C73E18(Enumerator, System_Collections_Generic_IEnumerator_QuestPhaseEntity__TypeInfo, 0LL);
    }
    v18 = (QuestPhaseEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
                                  Enumerator,
                                  *(_QWORD *)(v16 + 8));
    v19 = QuestPhaseMaster_TypeInfo;
    if ( !QuestPhaseMaster_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestPhaseMaster_TypeInfo);
    if ( !v18 )
      sub_1C22094(v19, v17);
    ScriptStr = QuestPhaseEntity__getScriptStr(
                  v18,
                  QuestPhaseMaster_TypeInfo->static_fields->MOVIE_QUEST_SCRIPT_STR,
                  0LL,
                  0LL);
    v22 = ScriptStr;
    if ( ScriptStr )
    {
      if ( !v6 )
        sub_1C22094(ScriptStr, v21);
      Entity = DataMasterBase_object__object__int___GetEntity(
                 v6,
                 v18->fields.questId,
                 (const MethodInfo_325BDC8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
      if ( Entity )
      {
        if ( Time >= QuestEntity__getClosedAt((QuestEntity_o *)Entity, 0LL) )
          MovieFileMerge__Delete(v22, 0LL);
      }
    }
  }
  v24 = Enumerator->klass;
  v25 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v26 = &v24->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
    {
      --v25;
      v26 += 4;
      if ( !v25 )
        goto LABEL_36;
    }
    v27 = (__int64)&v24->vtable[*v26].method;
  }
  else
  {
LABEL_36:
    v27 = sub_1C73E18(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(Enumerator, *(_QWORD *)(v27 + 8));
}


void __fastcall TerminalSceneComponent__fadeoutBgm(
        TerminalSceneComponent_o *this,
        float fadeoutTime,
        const MethodInfo *method)
{
  if ( (byte_4BDE6B2 & 1) == 0 )
  {
    sub_1C21E38(&SoundManager_TypeInfo);
    byte_4BDE6B2 = 1;
  }
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
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
  TerminalSceneComponent_c *v1; // x0

  if ( (byte_4BDE688 & 1) == 0 )
  {
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BDE688 = 1;
  }
  v1 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v1 = TerminalSceneComponent_TypeInfo;
  }
  return v1->static_fields->mInstance;
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
  float y; // s8
  float x; // s9
  float v5; // s0
  float v6; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4BDE68B & 1) == 0 )
  {
    sub_1C21E38(&FSUtility_TypeInfo);
    byte_4BDE68B = 1;
  }
  x = this->fields.TUTORIAL_MENU_ARROW_POS2.fields.x;
  y = this->fields.TUTORIAL_MENU_ARROW_POS2.fields.y;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  v5 = x + (float)(FSUtility__GetOffsetX(68.0, 0, 0LL) + -2.0);
  v6 = y + 33.0;
  result.fields.y = v6;
  result.fields.x = v5;
  return result;
}


UnityEngine_Vector2_o __fastcall TerminalSceneComponent__get_TUTORIAL_MENU_ARROW_POS_FS(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  float v5; // s0
  float v6; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4BDE68A & 1) == 0 )
  {
    sub_1C21E38(&FSUtility_TypeInfo);
    byte_4BDE68A = 1;
  }
  x = this->fields.TUTORIAL_MENU_ARROW_POS.fields.x;
  y = this->fields.TUTORIAL_MENU_ARROW_POS.fields.y;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  v5 = x + (float)(FSUtility__GetOffsetX(68.0, 0, 0LL) + -14.0);
  v6 = y + 33.0;
  result.fields.y = v6;
  result.fields.x = v5;
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
  float y; // s8
  float x; // s9
  float v5; // s0
  float v6; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4BDE68C & 1) == 0 )
  {
    sub_1C21E38(&FSUtility_TypeInfo);
    byte_4BDE68C = 1;
  }
  x = this->fields.TUTORIAL_QUEST_ARROW_POS.fields.x;
  y = this->fields.TUTORIAL_QUEST_ARROW_POS.fields.y;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  v5 = x + FSUtility__GetOffsetX(64.0, 0, 0LL);
  v6 = y;
  result.fields.y = v6;
  result.fields.x = v5;
  return result;
}


UnityEngine_Rect_o __fastcall TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_RECT_FS(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  float m_YMin; // s10
  float m_XMin; // s11
  float m_Height; // s8
  float m_Width; // s9
  float OffsetX; // s0
  float v8; // s2
  float v9; // s3
  float v10; // s0
  float v11; // s1
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BDE68D & 1) == 0 )
  {
    sub_1C21E38(&FSUtility_TypeInfo);
    byte_4BDE68D = 1;
  }
  m_XMin = this->fields.TUTORIAL_QUEST_ARROW_RECT.fields.m_XMin;
  m_YMin = this->fields.TUTORIAL_QUEST_ARROW_RECT.fields.m_YMin;
  m_Width = this->fields.TUTORIAL_QUEST_ARROW_RECT.fields.m_Width;
  m_Height = this->fields.TUTORIAL_QUEST_ARROW_RECT.fields.m_Height;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  OffsetX = FSUtility__GetOffsetX(64.0, 0, 0LL);
  v8 = m_Width;
  v9 = m_Height;
  v10 = m_XMin + OffsetX;
  v11 = m_YMin;
  result.fields.m_Height = v9;
  result.fields.m_Width = v8;
  result.fields.m_YMin = v11;
  result.fields.m_XMin = v10;
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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  System_Action_o *v6; // x20

  if ( (byte_4BDE697 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    sub_1C21E38(&Method_TerminalSceneComponent__loadCommonBG_b__180_0__);
    byte_4BDE697 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v4);
  if ( AtlasManager__isLoadedSkinData((AtlasManager_o *)Instance, 4, 0LL) )
  {
    TerminalSceneComponent__loadOutGameAtlas(this, v5);
  }
  else
  {
    v6 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_TerminalSceneComponent__loadCommonBG_b__180_0__, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__LoadUISkin(v6, 4, 1, 0LL);
  }
}


void __fastcall TerminalSceneComponent__loadOutGameAtlas(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4BDE698 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&Method_TerminalSceneComponent__loadOutGameAtlas_b__181_0__);
    byte_4BDE698 = 1;
  }
  v3 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_TerminalSceneComponent__loadOutGameAtlas_b__181_0__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameAtlas(v3, 0LL);
}


void __fastcall TerminalSceneComponent__loadVoice(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  struct TerminalTransitionInfo_o *TransitionInfo_k__BackingField; // x8
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  struct TerminalTransitionInfo_o *v6; // x8
  System_String_o *voiceAssetName; // x21
  SoundManager_o *v8; // x20
  System_Action_o *v9; // x22

  if ( (byte_4BDE699 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C21E38(&Method_TerminalSceneComponent_SendMessageStartUpAndResume__);
    byte_4BDE699 = 1;
  }
  TransitionInfo_k__BackingField = this->fields._TransitionInfo_k__BackingField;
  if ( TransitionInfo_k__BackingField
    && !System_String__IsNullOrEmpty(TransitionInfo_k__BackingField->fields.voiceAssetName, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    v6 = this->fields._TransitionInfo_k__BackingField;
    if ( !v6
      || (voiceAssetName = v6->fields.voiceAssetName,
          v8 = (SoundManager_o *)Instance,
          v9 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo),
          System_Action___ctor(
            v9,
            (Il2CppObject *)this,
            Method_TerminalSceneComponent_SendMessageStartUpAndResume__,
            0LL),
          !v8) )
    {
      sub_1C22094(Instance, v5);
    }
    SoundManager__LoadAudioAssetStorage(v8, voiceAssetName, v9, 1, 0LL);
  }
  else
  {
    TerminalSceneComponent__SendMessageStartUpAndResume(this, method);
  }
}


void __fastcall TerminalSceneComponent__mcbfCheckSceneStatus(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  int32_t meSceneStatus; // w8
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v6; // x8

  if ( (byte_4BDE6C7 & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&StringLiteral_5869/*"EV_SCENE_STATUS_INIT"*/);
    sub_1C21E38(&StringLiteral_5870/*"EV_SCENE_STATUS_RESUME"*/);
    byte_4BDE6C7 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9650 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9650 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  meSceneStatus = v3->static_fields->meSceneStatus;
  if ( meSceneStatus != 3 && meSceneStatus != 2 )
  {
    myFSM = this->fields.myFSM;
    if ( myFSM )
    {
      v6 = &StringLiteral_5869/*"EV_SCENE_STATUS_INIT"*/;
      goto LABEL_15;
    }
LABEL_16:
    sub_1C22094(myFSM, method);
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    goto LABEL_16;
  v6 = &StringLiteral_5870/*"EV_SCENE_STATUS_RESUME"*/;
LABEL_15:
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v6, 0LL);
}


void __fastcall TerminalSceneComponent__mfCallFsmEvent(
        TerminalSceneComponent_o *this,
        System_String_o *sEventStr,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C22094(0LL, sEventStr);
  PlayMakerFSM__SendEvent(myFSM, sEventStr, 0LL);
}


void __fastcall TerminalSceneComponent__mfsmfInitTable(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  ScrTerminalMap_o *mTerminalMap; // x0
  struct ScrTerminalListTop_o *mTerminalList; // x8
  Il2CppObject *Instance; // x20
  System_Action_o *v6; // x21
  System_Collections_IEnumerator_o *v7; // x1

  if ( (byte_4BDE6B8 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C21E38(&Method_TerminalSceneComponent__mfsmfInitTable_b__217_0__);
    byte_4BDE6B8 = 1;
  }
  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap
    || (ScrTerminalMap__ReleaseMap(mTerminalMap, 0, 0LL), (mTerminalList = this->fields.mTerminalList) == 0LL)
    || (mTerminalMap = (ScrTerminalMap_o *)mTerminalList->fields.mQuestBoardListViewManager) == 0LL
    || (ListViewManager__DestroyList((ListViewManager_o *)mTerminalMap, 0LL),
        Instance = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_QuestTree__get_Instance__),
        v6 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo),
        System_Action___ctor(v6, (Il2CppObject *)this, Method_TerminalSceneComponent__mfsmfInitTable_b__217_0__, 0LL),
        !Instance) )
  {
    sub_1C22094(mTerminalMap, method);
  }
  v7 = QuestTree__Init((QuestTree_o *)Instance, v6, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
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
  System_String_o *mPlayBgmName; // x19

  if ( (byte_4BDE6AF & 1) == 0 )
  {
    sub_1C21E38(&SoundManager_TypeInfo);
    byte_4BDE6AF = 1;
  }
  if ( System_String__IsNullOrEmpty(bgmName, 0LL) )
  {
    TerminalSceneComponent__playDefaultBgm(this, v5);
  }
  else
  {
    this->fields.mPlayBgmName = bgmName;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.mPlayBgmName, (int64_t)bgmName, v6, v7, v8, v9, v10, v11);
    mPlayBgmName = this->fields.mPlayBgmName;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__playBgm(mPlayBgmName, 0LL);
  }
}


void __fastcall TerminalSceneComponent__playBgm_43511800(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  System_String_o *mPlayBgmName; // x19

  if ( (byte_4BDE6B1 & 1) == 0 )
  {
    sub_1C21E38(&SoundManager_TypeInfo);
    byte_4BDE6B1 = 1;
  }
  mPlayBgmName = this->fields.mPlayBgmName;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(mPlayBgmName, 0LL);
}


void __fastcall TerminalSceneComponent__playDefaultBgm(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  System_String_o *MainBgmName; // x1
  const MethodInfo *v4; // x2

  if ( (byte_4BDE6B0 & 1) == 0 )
  {
    sub_1C21E38(&BgmManager_TypeInfo);
    byte_4BDE6B0 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  MainBgmName = BgmManager__GetMainBgmName(0LL);
  TerminalSceneComponent__playBgm(this, MainBgmName, v4);
}


void __fastcall TerminalSceneComponent__quit(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  TerminalPramsManager_c *v5; // x0
  TerminalPramsManager_c *v6; // x0
  struct TerminalTransitionInfo_o *TransitionInfo_k__BackingField; // x8
  struct TerminalTransitionInfo_o *v8; // x8
  System_String_o *voiceAssetName; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  Il2CppObject *MasterData_object; // x0
  TerminalOverwriteMaster_o *v17; // x20
  bool OverwriteSkinName; // w0
  TerminalSceneComponent_c *v19; // x8
  bool v20; // w22
  System_String_o *OVERWRITE_COMMON_BG_TYPE1_KEY; // x21
  System_String_o *Empty; // x1
  bool v23; // w0
  TerminalSceneComponent_c *v24; // x8
  bool v25; // w21
  System_String_o *OVERWRITE_COMMON_BG_TYPE2_KEY; // x20
  System_String_o *v27; // x1
  System_String_o *str1; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *skinName; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4BDE69D & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_TerminalOverwriteMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    sub_1C21E38(&SoundManager_TypeInfo);
    sub_1C21E38(&string_TypeInfo);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    sub_1C21E38(&StringLiteral_15034/*"UISkin/"*/);
    byte_4BDE69D = 1;
  }
  skinName = 0LL;
  str1 = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  AutomatedAction__TerminateMissionAction((AutomatedAction_o *)Instance, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BDE78B )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BDE78B = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  if ( v5->static_fields->_isWarBoardPlay_k__BackingField )
  {
    if ( !v5->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v5);
    if ( !byte_4BD9906 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD9906 = 1;
    }
    v6 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v6 = TerminalPramsManager_TypeInfo;
    }
    v6->static_fields->_isWarBoardPlay_k__BackingField = 0;
  }
  else
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__stopSe(0.0, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  QuestAfterAction__releaseVoice((QuestAfterAction_o *)Instance, 0LL);
  TransitionInfo_k__BackingField = this->fields._TransitionInfo_k__BackingField;
  if ( TransitionInfo_k__BackingField )
  {
    Instance = (void *)System_String__IsNullOrEmpty(TransitionInfo_k__BackingField->fields.voiceAssetName, 0LL);
    if ( ((unsigned __int8)Instance & 1) == 0 )
    {
      v8 = this->fields._TransitionInfo_k__BackingField;
      if ( !v8 )
        goto LABEL_50;
      voiceAssetName = v8->fields.voiceAssetName;
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__releaseAudioAssetStorage(voiceAssetName, 0LL);
      Instance = this->fields._TransitionInfo_k__BackingField;
      if ( !Instance )
        goto LABEL_50;
      *((_QWORD *)Instance + 5) = 0LL;
      sub_1C21DDC((PartyOrganizationUtility_o *)((char *)Instance + 40), 0LL, v10, v11, v12, v13, v14, v15);
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
    sub_1C22094(Instance, v4);
  }
LABEL_34:
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_TerminalOverwriteMaster___);
  if ( MasterData_object )
  {
    v17 = (TerminalOverwriteMaster_o *)MasterData_object;
    OverwriteSkinName = TerminalOverwriteMaster__TryGetOverwriteSkinName(
                          (TerminalOverwriteMaster_o *)MasterData_object,
                          2,
                          &skinName,
                          0LL);
    v19 = TerminalSceneComponent_TypeInfo;
    v20 = OverwriteSkinName;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v19 = TerminalSceneComponent_TypeInfo;
    }
    OVERWRITE_COMMON_BG_TYPE1_KEY = v19->static_fields->OVERWRITE_COMMON_BG_TYPE1_KEY;
    if ( v20 )
      Empty = System_String__Concat_63115476((System_String_o *)StringLiteral_15034/*"UISkin/"*/, skinName, 0LL);
    else
      Empty = string_TypeInfo->static_fields->Empty;
    UnityEngine_PlayerPrefs__SetString(OVERWRITE_COMMON_BG_TYPE1_KEY, Empty, 0LL);
    v23 = TerminalOverwriteMaster__TryGetOverwriteSkinName(v17, 4, &str1, 0LL);
    v24 = TerminalSceneComponent_TypeInfo;
    v25 = v23;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v24 = TerminalSceneComponent_TypeInfo;
    }
    OVERWRITE_COMMON_BG_TYPE2_KEY = v24->static_fields->OVERWRITE_COMMON_BG_TYPE2_KEY;
    if ( v25 )
      v27 = System_String__Concat_63115476((System_String_o *)StringLiteral_15034/*"UISkin/"*/, str1, 0LL);
    else
      v27 = string_TypeInfo->static_fields->Empty;
    UnityEngine_PlayerPrefs__SetString(OVERWRITE_COMMON_BG_TYPE2_KEY, v27, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__Save_SaveData(0LL);
  this->fields.quitType = 0;
}


void __fastcall TerminalSceneComponent__requestEventDailyPoint(
        TerminalSceneComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  NetworkManager_ResultCallbackFunc_o *v7; // x21

  if ( (byte_4BDE6BA & 1) == 0 )
  {
    sub_1C21E38(&Method_NetworkManager_getRequest_EventDailyPointRequest___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C21E38(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C21E38(&Method_TerminalSceneComponent_callbackEventDailyPoint__);
    byte_4BDE6BA = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1C22084(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent_callbackEventDailyPoint__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getRequest_object_(
               v7,
               (const MethodInfo_30345EC *)Method_NetworkManager_getRequest_EventDailyPointRequest___);
  if ( !Instance )
LABEL_8:
    sub_1C22094(Instance, v6);
  EventDailyPointRequest__beginRequest((EventDailyPointRequest_o *)Instance, eventId, 0LL);
}


void __fastcall TerminalSceneComponent__requestTopHome(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  TerminalPramsManager_c *v4; // x0
  PlayMakerFSM_o *myFSM; // x0
  Il2CppObject *Instance; // x20
  NetworkManager_LoginCallbackFunc_o *v7; // x21

  if ( (byte_4BDE6B4 & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_LoginCallbackFunc_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&Method_TerminalSceneComponent_callbackTopLogin__);
    sub_1C21E38(&TutorialFlag_TypeInfo);
    sub_1C21E38(&StringLiteral_11274/*"REQUEST_OK"*/);
    byte_4BDE6B4 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_38930984(102, 0LL) )
    goto LABEL_13;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9665 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9665 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  if ( v4->static_fields->_IsPlayScriptWithMap_k__BackingField )
  {
LABEL_13:
    myFSM = this->fields.myFSM;
    if ( myFSM )
    {
      PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11274/*"REQUEST_OK"*/, 0LL);
      this->fields.isTopLoginBusy = 0;
      return;
    }
LABEL_17:
    sub_1C22094(myFSM, v3);
  }
  this->fields.isTopLoginBusy = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  v7 = (NetworkManager_LoginCallbackFunc_o *)sub_1C22084(NetworkManager_LoginCallbackFunc_TypeInfo);
  NetworkManager_LoginCallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent_callbackTopLogin__,
    0LL);
  if ( !Instance )
    goto LABEL_17;
  NetworkManager__RequestLogin((NetworkManager_o *)Instance, v7, 0, 0LL);
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
  sub_1C21DDC(
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
  sub_1C21DDC(
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
  if ( (sub_1C21EF8(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C220B0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C21F60(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A654B4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A6546C;
}


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
  if ( (byte_4BDE6E0 & 1) == 0 )
  {
    sub_1C21E38(&bool_TypeInfo);
    byte_4BDE6E0 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C21DEC(this, v9, callback, object);
}


void __fastcall TerminalSceneComponent_PlayChapterStartCallback__EndInvoke(
        TerminalSceneComponent_PlayChapterStartCallback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C21DF0(result, 0LL, method);
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
  __int64 v4; // x19
  TerminalSceneComponent_o *mFG; // x0
  const MethodInfo *v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  TerminalSceneComponent_o **v13; // x20
  QuestBoardListViewObject_o *FocusQuest; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x8
  struct UIScrollView_o *scrollView; // x8
  struct UIProgressBar_o *verticalScrollBar; // x23
  System_String_o *v25; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v27; // x0
  CommonUI_o *v28; // x22
  UnityEngine_Vector2_o TUTORIAL_QUEST_ARROW_POS_FS; // kr00_8
  float v30; // s0
  float v31; // s1
  float v32; // s2
  float v33; // s3
  TerminalSceneComponent_o *v34; // x8
  float x; // s14
  float y; // s15
  float v37; // s10
  float v38; // s11
  float v39; // s12
  float v40; // s13
  System_Action_o *v41; // x23
  struct ScrTerminalListTop_o *v42; // x21
  System_Action_o *v43; // x20
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  UnityEngine_Rect_o v50; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4BDE6E3 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_GameObjectExtensions_RemoveComponent_Collider___);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__0__);
    sub_1C21E38(&Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__1__);
    sub_1C21E38(&TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_TypeInfo);
    sub_1C21E38(&StringLiteral_13764/*"TUTORIAL_MESSAGE_TERMINAL_QUEST1"*/);
    byte_4BDE6E3 = 1;
  }
  v4 = sub_1C22084(TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4 )
    goto LABEL_22;
  *(_QWORD *)(v4 + 16) = that;
  v13 = (TerminalSceneComponent_o **)(v4 + 16);
  sub_1C21DDC((PartyOrganizationUtility_o *)(v4 + 16), (int64_t)that, v7, v8, v9, v10, v11, v12);
  if ( !*(_QWORD *)(v4 + 16) )
    goto LABEL_22;
  mFG = *(TerminalSceneComponent_o **)(*(_QWORD *)(v4 + 16) + 256LL);
  if ( !mFG )
    goto LABEL_22;
  FocusQuest = ScrTerminalListTop__GetFocusQuest((ScrTerminalListTop_o *)mFG, 0LL);
  *(_QWORD *)(v4 + 24) = FocusQuest;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v4 + 24), (int64_t)FocusQuest, v15, v16, v17, v18, v19, v20);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  mFG = (TerminalSceneComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13764/*"TUTORIAL_MESSAGE_TERMINAL_QUEST1"*/, 0LL);
  if ( !*v13 )
    goto LABEL_22;
  mTerminalList = (*v13)->fields.mTerminalList;
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
  v25 = (System_String_o *)mFG;
  mFG = (TerminalSceneComponent_o *)verticalScrollBar->fields.mFG;
  if ( !mFG )
    goto LABEL_22;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mFG, 0LL);
  GameObjectExtensions__RemoveComponent_object_(
    gameObject,
    (const MethodInfo_3001ED8 *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mFG = (TerminalSceneComponent_o *)verticalScrollBar->fields.mBG;
  if ( !mFG )
    goto LABEL_22;
  v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mFG, 0LL);
  GameObjectExtensions__RemoveComponent_object_(
    v27,
    (const MethodInfo_3001ED8 *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mFG = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*v13 )
    goto LABEL_22;
  v28 = (CommonUI_o *)mFG;
  TUTORIAL_QUEST_ARROW_POS_FS = TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_POS_FS(*v13, v6);
  mFG = *v13;
  if ( !*v13 )
    goto LABEL_22;
  *(UnityEngine_Rect_o *)&v30 = TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_RECT_FS(mFG, v6);
  v34 = *v13;
  if ( !*v13 )
    goto LABEL_22;
  x = v34->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.x;
  y = v34->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.y;
  v37 = v30;
  v38 = v31;
  v39 = v32;
  v40 = v33;
  v41 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v41,
    (Il2CppObject *)v4,
    Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__0__,
    0LL);
  if ( !v28 )
    goto LABEL_22;
  v50.fields.m_XMin = v37;
  v50.fields.m_YMin = v38;
  v50.fields.m_Width = v39;
  v50.fields.m_Height = v40;
  CommonUI__OpenTutorialNotificationDialogArrow(
    v28,
    v25,
    TUTORIAL_QUEST_ARROW_POS_FS,
    v50,
    90.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    v41,
    0LL);
  if ( !*v13
    || (v42 = (*v13)->fields.mTerminalList,
        v43 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo),
        System_Action___ctor(
          v43,
          (Il2CppObject *)v4,
          Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__1__,
          0LL),
        !v42) )
  {
LABEL_22:
    sub_1C22094(mFG, v6);
  }
  v42->fields.mQuestClickAct = v43;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v42->fields.mQuestClickAct, (int64_t)v43, v44, v45, v46, v47, v48, v49);
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
  TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *v2; // x19
  struct TerminalSceneComponent_o *that; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x8

  v2 = this;
  if ( (byte_4BDE6E4 & 1) == 0 )
  {
    this = (TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *)sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___);
    byte_4BDE6E4 = 1;
  }
  that = v2->fields.that;
  if ( !that )
    goto LABEL_12;
  mTerminalList = that->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_12;
  mQuestBoardListViewManager = mTerminalList->fields.mQuestBoardListViewManager;
  if ( !mQuestBoardListViewManager
    || (this = (TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *)mQuestBoardListViewManager->fields.scrollView) == 0LL
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL),
        (this = (TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *)v2->fields.focus_quest) == 0LL)
    || (((void (__fastcall *)(TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *, __int64, void *))this->klass[1]._1.parent)(
          this,
          1LL,
          this->klass[1]._1.generic_class),
        (this = (TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *)v2->fields.focus_quest) == 0LL)
    || (this = (TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *)UnityEngine_Component__get_gameObject(
                                                                                            (UnityEngine_Component_o *)this,
                                                                                            0LL)) == 0LL
    || (this = (TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                                            (UnityEngine_GameObject_o *)this,
                                                                                            (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___)) == 0LL )
  {
LABEL_12:
    sub_1C22094(this, method);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0___begin_b__1(
        TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v6; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4BDE6E5 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__2__);
    byte_4BDE6E5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v6 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v7, v8, v9, v10, v11, v12);
  }
  if ( !v6 )
    sub_1C22094(Instance, v4);
  CommonUI__CloseTutorialNotificationDialogArrow_31153776(v6, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1C22094(0LL, method);
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
  __int64 v5; // x20
  ScrTerminalMap_o *mTerminalMap; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  SrcSpotBasePrefab_o *FocusSpot; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  System_String_o *v21; // x21
  Il2CppObject *Instance; // x22
  const MethodInfo *v23; // x1
  UnityEngine_Vector2_o v24; // kr00_8
  const MethodInfo *v25; // x1
  float x; // s14
  float y; // s15
  float m_XMin; // s10
  float m_YMin; // s11
  float m_Width; // s12
  float m_Height; // s13
  System_Action_o *v32; // x23
  struct ScrTerminalMap_o *v33; // x21
  System_Action_o *v34; // x19
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  UnityEngine_Vector2_o v41; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v42; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v43; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v44; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4BDE6E1 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__0__);
    sub_1C21E38(&Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__1__);
    sub_1C21E38(&TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0_TypeInfo);
    sub_1C21E38(&StringLiteral_13767/*"TUTORIAL_MESSAGE_TERMINAL_SPOT1"*/);
    byte_4BDE6E1 = 1;
  }
  v5 = sub_1C22084(TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_12;
  *(_QWORD *)(v5 + 24) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 24), (int64_t)this, v8, v9, v10, v11, v12, v13);
  this->fields.mIsGoNext = 0;
  if ( !that )
    goto LABEL_12;
  mTerminalMap = that->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_12;
  FocusSpot = ScrTerminalMap__GetFocusSpot(mTerminalMap, 0LL);
  *(_QWORD *)(v5 + 16) = FocusSpot;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)FocusSpot, v15, v16, v17, v18, v19, v20);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_13767/*"TUTORIAL_MESSAGE_TERMINAL_SPOT1"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v41.fields.y = -97.0;
  v41.fields.x = -55.0;
  v24 = TerminalSceneComponent__FSSpotArrowPosLerp(that, v41, v23);
  v42.fields.y = 0.0;
  v42.fields.x = -55.0;
  v43 = TerminalSceneComponent__FSSpotArrowRectLerp(that, v42, v25);
  x = that->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.x;
  y = that->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.y;
  m_XMin = v43.fields.m_XMin;
  m_YMin = v43.fields.m_YMin;
  m_Width = v43.fields.m_Width;
  m_Height = v43.fields.m_Height;
  v32 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v32,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__0__,
    0LL);
  if ( !Instance )
    goto LABEL_12;
  v44.fields.m_XMin = m_XMin;
  v44.fields.m_YMin = m_YMin;
  v44.fields.m_Width = m_Width;
  v44.fields.m_Height = m_Height;
  CommonUI__OpenTutorialNotificationDialogArrow(
    (CommonUI_o *)Instance,
    v21,
    v24,
    v44,
    90.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    v32,
    0LL);
  mTerminalMap = that->fields.mTerminalMap;
  if ( !mTerminalMap
    || (ScrTerminalMap__SetMapCamera_TutorialFocusSpot(mTerminalMap, *(SrcSpotBasePrefab_o **)(v5 + 16), 0.5, 0LL),
        v33 = that->fields.mTerminalMap,
        v34 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo),
        System_Action___ctor(
          v34,
          (Il2CppObject *)v5,
          Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__1__,
          0LL),
        !v33) )
  {
LABEL_12:
    sub_1C22094(mTerminalMap, v7);
  }
  v33->fields.mSpotClickAct = v34;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v33->fields.mSpotClickAct, (int64_t)v34, v35, v36, v37, v38, v39, v40);
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
      sub_1C22094(that, that);
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
    sub_1C22094(0LL, method);
  SrcSpotBasePrefab__SetBtnColliderEnable(focus_spot, 1, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0___begin_b__1(
        TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v6; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4BDE6E2 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__2__);
    byte_4BDE6E2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v6 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v7, v8, v9, v10, v11, v12);
  }
  if ( !v6 )
    sub_1C22094(Instance, v4);
  CommonUI__CloseTutorialNotificationDialogArrow_31153776(v6, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0___begin_b__2(
        TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_StateTutorial1_SpotArrow_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C22094(this, method);
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
  __int64 v4; // x19
  TerminalSceneComponent_o *mFG; // x0
  const MethodInfo *v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  TerminalSceneComponent_o **v13; // x20
  QuestBoardListViewObject_o *FocusQuest; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x8
  struct UIScrollView_o *scrollView; // x8
  struct UIProgressBar_o *verticalScrollBar; // x23
  System_String_o *v25; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v27; // x0
  CommonUI_o *v28; // x22
  UnityEngine_Vector2_o TUTORIAL_QUEST_ARROW_POS_FS; // kr00_8
  float v30; // s0
  float v31; // s1
  float v32; // s2
  float v33; // s3
  TerminalSceneComponent_o *v34; // x8
  float x; // s14
  float y; // s15
  float v37; // s10
  float v38; // s11
  float v39; // s12
  float v40; // s13
  System_Action_o *v41; // x23
  struct ScrTerminalListTop_o *v42; // x21
  System_Action_o *v43; // x20
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  UnityEngine_Rect_o v50; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4BDE6E8 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_GameObjectExtensions_RemoveComponent_Collider___);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__0__);
    sub_1C21E38(&Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__1__);
    sub_1C21E38(&TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_TypeInfo);
    sub_1C21E38(&StringLiteral_13765/*"TUTORIAL_MESSAGE_TERMINAL_QUEST2"*/);
    byte_4BDE6E8 = 1;
  }
  v4 = sub_1C22084(TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4 )
    goto LABEL_22;
  *(_QWORD *)(v4 + 16) = that;
  v13 = (TerminalSceneComponent_o **)(v4 + 16);
  sub_1C21DDC((PartyOrganizationUtility_o *)(v4 + 16), (int64_t)that, v7, v8, v9, v10, v11, v12);
  if ( !*(_QWORD *)(v4 + 16) )
    goto LABEL_22;
  mFG = *(TerminalSceneComponent_o **)(*(_QWORD *)(v4 + 16) + 256LL);
  if ( !mFG )
    goto LABEL_22;
  FocusQuest = ScrTerminalListTop__GetFocusQuest((ScrTerminalListTop_o *)mFG, 0LL);
  *(_QWORD *)(v4 + 24) = FocusQuest;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v4 + 24), (int64_t)FocusQuest, v15, v16, v17, v18, v19, v20);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  mFG = (TerminalSceneComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13765/*"TUTORIAL_MESSAGE_TERMINAL_QUEST2"*/, 0LL);
  if ( !*v13 )
    goto LABEL_22;
  mTerminalList = (*v13)->fields.mTerminalList;
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
  v25 = (System_String_o *)mFG;
  mFG = (TerminalSceneComponent_o *)verticalScrollBar->fields.mFG;
  if ( !mFG )
    goto LABEL_22;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mFG, 0LL);
  GameObjectExtensions__RemoveComponent_object_(
    gameObject,
    (const MethodInfo_3001ED8 *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mFG = (TerminalSceneComponent_o *)verticalScrollBar->fields.mBG;
  if ( !mFG )
    goto LABEL_22;
  v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mFG, 0LL);
  GameObjectExtensions__RemoveComponent_object_(
    v27,
    (const MethodInfo_3001ED8 *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mFG = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*v13 )
    goto LABEL_22;
  v28 = (CommonUI_o *)mFG;
  TUTORIAL_QUEST_ARROW_POS_FS = TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_POS_FS(*v13, v6);
  mFG = *v13;
  if ( !*v13 )
    goto LABEL_22;
  *(UnityEngine_Rect_o *)&v30 = TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_RECT_FS(mFG, v6);
  v34 = *v13;
  if ( !*v13 )
    goto LABEL_22;
  x = v34->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.x;
  y = v34->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.y;
  v37 = v30;
  v38 = v31;
  v39 = v32;
  v40 = v33;
  v41 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v41,
    (Il2CppObject *)v4,
    Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__0__,
    0LL);
  if ( !v28 )
    goto LABEL_22;
  v50.fields.m_XMin = v37;
  v50.fields.m_YMin = v38;
  v50.fields.m_Width = v39;
  v50.fields.m_Height = v40;
  CommonUI__OpenTutorialNotificationDialogArrow(
    v28,
    v25,
    TUTORIAL_QUEST_ARROW_POS_FS,
    v50,
    90.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    v41,
    0LL);
  if ( !*v13
    || (v42 = (*v13)->fields.mTerminalList,
        v43 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo),
        System_Action___ctor(
          v43,
          (Il2CppObject *)v4,
          Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__1__,
          0LL),
        !v42) )
  {
LABEL_22:
    sub_1C22094(mFG, v6);
  }
  v42->fields.mQuestClickAct = v43;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v42->fields.mQuestClickAct, (int64_t)v43, v44, v45, v46, v47, v48, v49);
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
  TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *v2; // x19
  struct TerminalSceneComponent_o *that; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x8

  v2 = this;
  if ( (byte_4BDE6E9 & 1) == 0 )
  {
    this = (TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *)sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___);
    byte_4BDE6E9 = 1;
  }
  that = v2->fields.that;
  if ( !that )
    goto LABEL_12;
  mTerminalList = that->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_12;
  mQuestBoardListViewManager = mTerminalList->fields.mQuestBoardListViewManager;
  if ( !mQuestBoardListViewManager
    || (this = (TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *)mQuestBoardListViewManager->fields.scrollView) == 0LL
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL),
        (this = (TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *)v2->fields.focus_quest) == 0LL)
    || (((void (__fastcall *)(TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *, __int64, void *))this->klass[1]._1.parent)(
          this,
          1LL,
          this->klass[1]._1.generic_class),
        (this = (TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *)v2->fields.focus_quest) == 0LL)
    || (this = (TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *)UnityEngine_Component__get_gameObject(
                                                                                            (UnityEngine_Component_o *)this,
                                                                                            0LL)) == 0LL
    || (this = (TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                                            (UnityEngine_GameObject_o *)this,
                                                                                            (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___)) == 0LL )
  {
LABEL_12:
    sub_1C22094(this, method);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0___begin_b__1(
        TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v6; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4BDE6EA & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__2__);
    byte_4BDE6EA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v6 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v7, v8, v9, v10, v11, v12);
  }
  if ( !v6 )
    sub_1C22094(Instance, v4);
  CommonUI__CloseTutorialNotificationDialogArrow_31153776(v6, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1C22094(0LL, method);
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
  __int64 v5; // x20
  ScrTerminalMap_o *mTerminalMap; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  SrcSpotBasePrefab_o *FocusSpot; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  System_String_o *v21; // x21
  Il2CppObject *Instance; // x22
  const MethodInfo *v23; // x1
  UnityEngine_Vector2_o v24; // kr00_8
  const MethodInfo *v25; // x1
  float x; // s14
  float y; // s15
  float m_XMin; // s10
  float m_YMin; // s11
  float m_Width; // s12
  float m_Height; // s13
  System_Action_o *v32; // x23
  struct ScrTerminalMap_o *v33; // x21
  System_Action_o *v34; // x19
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  UnityEngine_Vector2_o v41; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v42; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v43; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v44; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4BDE6E6 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__0__);
    sub_1C21E38(&Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__1__);
    sub_1C21E38(&TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0_TypeInfo);
    sub_1C21E38(&StringLiteral_13768/*"TUTORIAL_MESSAGE_TERMINAL_SPOT2"*/);
    byte_4BDE6E6 = 1;
  }
  v5 = sub_1C22084(TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_12;
  *(_QWORD *)(v5 + 24) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 24), (int64_t)this, v8, v9, v10, v11, v12, v13);
  this->fields.mIsGoNext = 0;
  if ( !that )
    goto LABEL_12;
  mTerminalMap = that->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_12;
  FocusSpot = ScrTerminalMap__GetFocusSpot(mTerminalMap, 0LL);
  *(_QWORD *)(v5 + 16) = FocusSpot;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)FocusSpot, v15, v16, v17, v18, v19, v20);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_13768/*"TUTORIAL_MESSAGE_TERMINAL_SPOT2"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v41.fields.x = 0.0;
  v41.fields.y = -113.0;
  v24 = TerminalSceneComponent__FSSpotArrowPosLerp(that, v41, v23);
  v42.fields.x = 0.0;
  v42.fields.y = 0.0;
  v43 = TerminalSceneComponent__FSSpotArrowRectLerp(that, v42, v25);
  x = that->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.x;
  y = that->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.y;
  m_XMin = v43.fields.m_XMin;
  m_YMin = v43.fields.m_YMin;
  m_Width = v43.fields.m_Width;
  m_Height = v43.fields.m_Height;
  v32 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v32,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__0__,
    0LL);
  if ( !Instance )
    goto LABEL_12;
  v44.fields.m_XMin = m_XMin;
  v44.fields.m_YMin = m_YMin;
  v44.fields.m_Width = m_Width;
  v44.fields.m_Height = m_Height;
  CommonUI__OpenTutorialNotificationDialogArrow(
    (CommonUI_o *)Instance,
    v21,
    v24,
    v44,
    90.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    v32,
    0LL);
  mTerminalMap = that->fields.mTerminalMap;
  if ( !mTerminalMap
    || (ScrTerminalMap__SetMapCamera_TutorialFocusSpot(mTerminalMap, *(SrcSpotBasePrefab_o **)(v5 + 16), 0.5, 0LL),
        v33 = that->fields.mTerminalMap,
        v34 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo),
        System_Action___ctor(
          v34,
          (Il2CppObject *)v5,
          Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__1__,
          0LL),
        !v33) )
  {
LABEL_12:
    sub_1C22094(mTerminalMap, v7);
  }
  v33->fields.mSpotClickAct = v34;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v33->fields.mSpotClickAct, (int64_t)v34, v35, v36, v37, v38, v39, v40);
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
      sub_1C22094(that, that);
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
    sub_1C22094(0LL, method);
  SrcSpotBasePrefab__SetBtnColliderEnable(focus_spot, 1, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0___begin_b__1(
        TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v6; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4BDE6E7 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__2__);
    byte_4BDE6E7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v6 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v7, v8, v9, v10, v11, v12);
  }
  if ( !v6 )
    sub_1C22094(Instance, v4);
  CommonUI__CloseTutorialNotificationDialogArrow_31153776(v6, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0___begin_b__2(
        TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_StateTutorial2_SpotArrow_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C22094(this, method);
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
  __int64 v4; // x19
  void *Instance; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  __int64 *v13; // x21
  System_String_o *v14; // x20
  __int64 v15; // x8
  CommonUI_o *v16; // x21
  float v17; // s8
  float v18; // s13
  float v19; // s9
  float v20; // s14
  float v21; // s10
  unsigned int v22; // s11
  unsigned int v23; // s12
  System_Action_o *v24; // x22
  Il2CppObject *v25; // x23
  struct TerminalSceneComponent_StateTutorial3_GachaArrow___c_StaticFields *static_fields; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  System_Action_o *v33; // x20
  UnityEngine_Vector2_o v34; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v35; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4BDE6EE & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__begin_b__0_0__);
    sub_1C21E38(&Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0__begin_b__1__);
    sub_1C21E38(&TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0_TypeInfo);
    sub_1C21E38(&TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo);
    sub_1C21E38(&StringLiteral_13762/*"TUTORIAL_MESSAGE_TERMINAL_GACHA"*/);
    byte_4BDE6EE = 1;
  }
  v4 = sub_1C22084(TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4 )
    goto LABEL_15;
  *(_QWORD *)(v4 + 16) = that;
  v13 = (__int64 *)(v4 + 16);
  sub_1C21DDC((PartyOrganizationUtility_o *)(v4 + 16), (int64_t)that, v7, v8, v9, v10, v11, v12);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_13762/*"TUTORIAL_MESSAGE_TERMINAL_GACHA"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = *v13;
  if ( !*v13 )
    goto LABEL_15;
  v16 = (CommonUI_o *)Instance;
  v17 = *(float *)(v15 + 160);
  v18 = *(float *)(v15 + 164);
  v19 = *(float *)(v15 + 168);
  v20 = *(float *)(v15 + 172);
  Instance = TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo;
  v21 = *(float *)(v15 + 176);
  v22 = *(_DWORD *)(v15 + 152);
  v23 = *(_DWORD *)(v15 + 156);
  if ( !TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo);
    Instance = TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo;
  }
  v24 = *(System_Action_o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v24 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo;
    }
    v25 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v24 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v24, v25, Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__begin_b__0_0__, 0LL);
    static_fields = TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = v24;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__0_0, (int64_t)v24, v27, v28, v29, v30, v31, v32);
  }
  if ( !v16 )
LABEL_15:
    sub_1C22094(Instance, v6);
  v35.fields.m_YMin = v20 + 53.0;
  v34.fields.y = v18 + 33.0;
  v35.fields.m_Height = 135.0;
  v34.fields.x = v17;
  v35.fields.m_XMin = v19;
  v35.fields.m_Width = v21;
  CommonUI__OpenTutorialNotificationDialogArrow(
    v16,
    v14,
    v34,
    v35,
    0.0,
    (UnityEngine_Vector2_o)__PAIR64__(v23, v22),
    -1,
    v24,
    0LL);
  v33 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v33,
    (Il2CppObject *)v4,
    Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0__begin_b__1__,
    0LL);
  MainMenuBar__SetDispBtnAct(2, v33, 0LL);
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
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDE6EF & 1) == 0 )
  {
    sub_1C21E38(&TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo);
    byte_4BDE6EF = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo->static_fields->__9 = (struct TerminalSceneComponent_StateTutorial3_GachaArrow___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v6; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4BDE6F0 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&TutorialFlag_TypeInfo);
    sub_1C21E38(&Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0__begin_b__2__);
    byte_4BDE6F0 = 1;
  }
  MainMenuBar__SetDispBtnColliderEnable(0, 8, 0LL);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  TutorialFlag__SetProgress(1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v6 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v7, v8, v9, v10, v11, v12);
  }
  if ( !v6 )
    sub_1C22094(Instance, v4);
  CommonUI__CloseTutorialNotificationDialogArrow_31153776(v6, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1C22094(0LL, method);
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
  __int64 v4; // x19
  void *Instance; // x0
  const MethodInfo *v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  TerminalSceneComponent_o **v13; // x22
  System_String_o *v14; // x20
  CommonUI_o *v15; // x21
  UnityEngine_Vector2_o TUTORIAL_MENU_ARROW_POS_FS; // kr00_8
  TerminalSceneComponent_o *v17; // x8
  float m_XMin; // s12
  float m_YMin; // s14
  float m_Height; // s8
  float m_Width; // s10
  float v22; // s0
  TerminalSceneComponent_o *v23; // x8
  float x; // s13
  float y; // s15
  float v26; // s11
  System_Action_o *v27; // x22
  Il2CppObject *v28; // x23
  struct TerminalSceneComponent_StateTutorial3_MenuArrow___c_StaticFields *static_fields; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  System_Action_o *v36; // x20
  UnityEngine_Rect_o v37; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4BDE6EB & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__begin_b__0_0__);
    sub_1C21E38(&Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0__begin_b__1__);
    sub_1C21E38(&TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0_TypeInfo);
    sub_1C21E38(&TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo);
    sub_1C21E38(&StringLiteral_13763/*"TUTORIAL_MESSAGE_TERMINAL_MENU"*/);
    byte_4BDE6EB = 1;
  }
  v4 = sub_1C22084(TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4 )
    goto LABEL_17;
  *(_QWORD *)(v4 + 16) = that;
  v13 = (TerminalSceneComponent_o **)(v4 + 16);
  sub_1C21DDC((PartyOrganizationUtility_o *)(v4 + 16), (int64_t)that, v7, v8, v9, v10, v11, v12);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_13763/*"TUTORIAL_MESSAGE_TERMINAL_MENU"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*v13 )
    goto LABEL_17;
  v15 = (CommonUI_o *)Instance;
  TUTORIAL_MENU_ARROW_POS_FS = TerminalSceneComponent__get_TUTORIAL_MENU_ARROW_POS_FS(*v13, v6);
  v17 = *v13;
  if ( !*v13 )
    goto LABEL_17;
  m_XMin = v17->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_XMin;
  m_YMin = v17->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_YMin;
  m_Width = v17->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Width;
  m_Height = v17->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Height;
  v22 = TerminalSceneComponent__FSMenuOffsetX((TerminalSceneComponent_o *)Instance, v6);
  v23 = *v13;
  if ( !*v13 )
    goto LABEL_17;
  x = v23->fields.TUTORIAL_MENU_MESSAGE_POS.fields.x;
  y = v23->fields.TUTORIAL_MENU_MESSAGE_POS.fields.y;
  v26 = v22;
  Instance = TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo;
  if ( !TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo);
    Instance = TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo;
  }
  v27 = *(System_Action_o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v27 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo;
    }
    v28 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v27 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v27, v28, Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__begin_b__0_0__, 0LL);
    static_fields = TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = v27;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__0_0, (int64_t)v27, v30, v31, v32, v33, v34, v35);
  }
  if ( !v15 )
LABEL_17:
    sub_1C22094(Instance, v6);
  v37.fields.m_Height = m_Height + 33.0;
  v37.fields.m_YMin = m_YMin + 33.0;
  v37.fields.m_XMin = m_XMin + v26;
  v37.fields.m_Width = m_Width;
  CommonUI__OpenTutorialNotificationDialogArrow(
    v15,
    v14,
    TUTORIAL_MENU_ARROW_POS_FS,
    v37,
    0.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    v27,
    0LL);
  v36 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v36,
    (Il2CppObject *)v4,
    Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0__begin_b__1__,
    0LL);
  MainMenuBar__SetMenuBtnAct(v36, 0LL);
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
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDE6EC & 1) == 0 )
  {
    sub_1C21E38(&TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo);
    byte_4BDE6EC = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo->static_fields->__9 = (struct TerminalSceneComponent_StateTutorial3_MenuArrow___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v6; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4BDE6ED & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0__begin_b__2__);
    byte_4BDE6ED = 1;
  }
  MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v6 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v7, v8, v9, v10, v11, v12);
  }
  if ( !v6 )
    sub_1C22094(Instance, v4);
  CommonUI__CloseTutorialNotificationDialogArrow_31153776(v6, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1C22094(0LL, method);
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
  __int64 v4; // x19
  TerminalSceneComponent_o *mFG; // x0
  const MethodInfo *v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  TerminalSceneComponent_o **v13; // x20
  QuestBoardListViewObject_o *FocusQuest; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x8
  struct UIScrollView_o *scrollView; // x8
  struct UIProgressBar_o *verticalScrollBar; // x23
  System_String_o *v25; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v27; // x0
  CommonUI_o *v28; // x22
  UnityEngine_Vector2_o TUTORIAL_QUEST_ARROW_POS_FS; // kr00_8
  float v30; // s0
  float v31; // s1
  float v32; // s2
  float v33; // s3
  TerminalSceneComponent_o *v34; // x8
  float x; // s14
  float y; // s15
  float v37; // s10
  float v38; // s11
  float v39; // s12
  float v40; // s13
  System_Action_o *v41; // x23
  struct ScrTerminalListTop_o *v42; // x21
  System_Action_o *v43; // x20
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  UnityEngine_Rect_o v50; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4BDE6F3 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_GameObjectExtensions_RemoveComponent_Collider___);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__0__);
    sub_1C21E38(&Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__1__);
    sub_1C21E38(&TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_TypeInfo);
    sub_1C21E38(&StringLiteral_13766/*"TUTORIAL_MESSAGE_TERMINAL_QUEST3"*/);
    byte_4BDE6F3 = 1;
  }
  v4 = sub_1C22084(TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4 )
    goto LABEL_22;
  *(_QWORD *)(v4 + 16) = that;
  v13 = (TerminalSceneComponent_o **)(v4 + 16);
  sub_1C21DDC((PartyOrganizationUtility_o *)(v4 + 16), (int64_t)that, v7, v8, v9, v10, v11, v12);
  if ( !*(_QWORD *)(v4 + 16) )
    goto LABEL_22;
  mFG = *(TerminalSceneComponent_o **)(*(_QWORD *)(v4 + 16) + 256LL);
  if ( !mFG )
    goto LABEL_22;
  FocusQuest = ScrTerminalListTop__GetFocusQuest((ScrTerminalListTop_o *)mFG, 0LL);
  *(_QWORD *)(v4 + 24) = FocusQuest;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v4 + 24), (int64_t)FocusQuest, v15, v16, v17, v18, v19, v20);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  mFG = (TerminalSceneComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13766/*"TUTORIAL_MESSAGE_TERMINAL_QUEST3"*/, 0LL);
  if ( !*v13 )
    goto LABEL_22;
  mTerminalList = (*v13)->fields.mTerminalList;
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
  v25 = (System_String_o *)mFG;
  mFG = (TerminalSceneComponent_o *)verticalScrollBar->fields.mFG;
  if ( !mFG )
    goto LABEL_22;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mFG, 0LL);
  GameObjectExtensions__RemoveComponent_object_(
    gameObject,
    (const MethodInfo_3001ED8 *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mFG = (TerminalSceneComponent_o *)verticalScrollBar->fields.mBG;
  if ( !mFG )
    goto LABEL_22;
  v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mFG, 0LL);
  GameObjectExtensions__RemoveComponent_object_(
    v27,
    (const MethodInfo_3001ED8 *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mFG = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*v13 )
    goto LABEL_22;
  v28 = (CommonUI_o *)mFG;
  TUTORIAL_QUEST_ARROW_POS_FS = TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_POS_FS(*v13, v6);
  mFG = *v13;
  if ( !*v13 )
    goto LABEL_22;
  *(UnityEngine_Rect_o *)&v30 = TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_RECT_FS(mFG, v6);
  v34 = *v13;
  if ( !*v13 )
    goto LABEL_22;
  x = v34->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.x;
  y = v34->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.y;
  v37 = v30;
  v38 = v31;
  v39 = v32;
  v40 = v33;
  v41 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v41,
    (Il2CppObject *)v4,
    Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__0__,
    0LL);
  if ( !v28 )
    goto LABEL_22;
  v50.fields.m_XMin = v37;
  v50.fields.m_YMin = v38;
  v50.fields.m_Width = v39;
  v50.fields.m_Height = v40;
  CommonUI__OpenTutorialNotificationDialogArrow(
    v28,
    v25,
    TUTORIAL_QUEST_ARROW_POS_FS,
    v50,
    90.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    v41,
    0LL);
  if ( !*v13
    || (v42 = (*v13)->fields.mTerminalList,
        v43 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo),
        System_Action___ctor(
          v43,
          (Il2CppObject *)v4,
          Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__1__,
          0LL),
        !v42) )
  {
LABEL_22:
    sub_1C22094(mFG, v6);
  }
  v42->fields.mQuestClickAct = v43;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v42->fields.mQuestClickAct, (int64_t)v43, v44, v45, v46, v47, v48, v49);
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
  TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *v2; // x19
  struct TerminalSceneComponent_o *that; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x8

  v2 = this;
  if ( (byte_4BDE6F4 & 1) == 0 )
  {
    this = (TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *)sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___);
    byte_4BDE6F4 = 1;
  }
  that = v2->fields.that;
  if ( !that )
    goto LABEL_12;
  mTerminalList = that->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_12;
  mQuestBoardListViewManager = mTerminalList->fields.mQuestBoardListViewManager;
  if ( !mQuestBoardListViewManager
    || (this = (TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *)mQuestBoardListViewManager->fields.scrollView) == 0LL
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL),
        (this = (TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *)v2->fields.focus_quest) == 0LL)
    || (((void (__fastcall *)(TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *, __int64, void *))this->klass[1]._1.parent)(
          this,
          1LL,
          this->klass[1]._1.generic_class),
        (this = (TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *)v2->fields.focus_quest) == 0LL)
    || (this = (TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *)UnityEngine_Component__get_gameObject(
                                                                                            (UnityEngine_Component_o *)this,
                                                                                            0LL)) == 0LL
    || (this = (TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                                            (UnityEngine_GameObject_o *)this,
                                                                                            (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___)) == 0LL )
  {
LABEL_12:
    sub_1C22094(this, method);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0___begin_b__1(
        TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v6; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4BDE6F5 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__2__);
    byte_4BDE6F5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v6 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v7, v8, v9, v10, v11, v12);
  }
  if ( !v6 )
    sub_1C22094(Instance, v4);
  CommonUI__CloseTutorialNotificationDialogArrow_31153776(v6, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1C22094(0LL, method);
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
  __int64 v5; // x20
  ScrTerminalMap_o *mTerminalMap; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  SrcSpotBasePrefab_o *FocusSpot; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  Il2CppObject *Instance; // x21
  const MethodInfo *v22; // x1
  UnityEngine_Vector2_o v23; // kr00_8
  const MethodInfo *v24; // x1
  float m_XMin; // s10
  float m_YMin; // s11
  float m_Width; // s12
  float m_Height; // s13
  System_Action_o *v29; // x22
  struct ScrTerminalMap_o *v30; // x21
  System_Action_o *v31; // x19
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  UnityEngine_Vector2_o v38; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v39; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v40; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v41; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4BDE6F1 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__0__);
    sub_1C21E38(&Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__1__);
    sub_1C21E38(&TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0_TypeInfo);
    byte_4BDE6F1 = 1;
  }
  v5 = sub_1C22084(TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_10;
  *(_QWORD *)(v5 + 24) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 24), (int64_t)this, v8, v9, v10, v11, v12, v13);
  this->fields.mIsGoNext = 0;
  if ( !that )
    goto LABEL_10;
  mTerminalMap = that->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_10;
  FocusSpot = ScrTerminalMap__GetFocusSpot(mTerminalMap, 0LL);
  *(_QWORD *)(v5 + 16) = FocusSpot;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)FocusSpot, v15, v16, v17, v18, v19, v20);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v38.fields.x = 0.0;
  v38.fields.y = -113.0;
  v23 = TerminalSceneComponent__FSSpotArrowPosLerp(that, v38, v22);
  v39.fields.x = 0.0;
  v39.fields.y = 0.0;
  v40 = TerminalSceneComponent__FSSpotArrowRectLerp(that, v39, v24);
  m_XMin = v40.fields.m_XMin;
  m_YMin = v40.fields.m_YMin;
  m_Width = v40.fields.m_Width;
  m_Height = v40.fields.m_Height;
  v29 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v29,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__0__,
    0LL);
  if ( !Instance )
    goto LABEL_10;
  v41.fields.m_XMin = m_XMin;
  v41.fields.m_YMin = m_YMin;
  v41.fields.m_Width = m_Width;
  v41.fields.m_Height = m_Height;
  CommonUI__OpenTutorialArrowMark((CommonUI_o *)Instance, v23, 90.0, v41, v29, 0LL);
  mTerminalMap = that->fields.mTerminalMap;
  if ( !mTerminalMap
    || (ScrTerminalMap__SetMapCamera_TutorialFocusSpot(mTerminalMap, *(SrcSpotBasePrefab_o **)(v5 + 16), 0.5, 0LL),
        v30 = that->fields.mTerminalMap,
        v31 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo),
        System_Action___ctor(
          v31,
          (Il2CppObject *)v5,
          Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__1__,
          0LL),
        !v30) )
  {
LABEL_10:
    sub_1C22094(mTerminalMap, v7);
  }
  v30->fields.mSpotClickAct = v31;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v30->fields.mSpotClickAct, (int64_t)v31, v32, v33, v34, v35, v36, v37);
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
      sub_1C22094(that, that);
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
    sub_1C22094(0LL, method);
  SrcSpotBasePrefab__SetBtnColliderEnable(focus_spot, 1, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0___begin_b__1(
        TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v6; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4BDE6F2 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__2__);
    byte_4BDE6F2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v6 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v7, v8, v9, v10, v11, v12);
  }
  if ( !v6 )
    sub_1C22094(Instance, v4);
  CommonUI__CloseTutorialArrowMark(v6, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0___begin_b__2(
        TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_StateTutorial4_SpotArrow_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C22094(this, method);
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
  __int64 v4; // x19
  void *Instance; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  float *v13; // x8
  CommonUI_o *v14; // x20
  float v15; // s9
  float v16; // s11
  float v17; // s8
  float v18; // s12
  float v19; // s10
  System_Action_o *v20; // x21
  Il2CppObject *v21; // x22
  struct TerminalSceneComponent_StateTutorial5_CombineArrow___c_StaticFields *static_fields; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  System_Action_o *v29; // x20
  UnityEngine_Vector2_o v30; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v31; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4BDE6F9 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__begin_b__0_0__);
    sub_1C21E38(&Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0__begin_b__1__);
    sub_1C21E38(&TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0_TypeInfo);
    sub_1C21E38(&TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo);
    byte_4BDE6F9 = 1;
  }
  v4 = sub_1C22084(TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4 )
    goto LABEL_13;
  *(_QWORD *)(v4 + 16) = that;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v4 + 16), (int64_t)that, v7, v8, v9, v10, v11, v12);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = *(float **)(v4 + 16);
  if ( !v13 )
    goto LABEL_13;
  v14 = (CommonUI_o *)Instance;
  v15 = v13[52];
  v16 = v13[53];
  v17 = v13[48];
  v18 = v13[49];
  Instance = TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo;
  v19 = v13[50];
  if ( !TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo);
    Instance = TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo;
  }
  v20 = *(System_Action_o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v20 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo;
    }
    v21 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v20 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v20, v21, Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__begin_b__0_0__, 0LL);
    static_fields = TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = v20;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__0_0, (int64_t)v20, v23, v24, v25, v26, v27, v28);
  }
  if ( !v14 )
LABEL_13:
    sub_1C22094(Instance, v6);
  v31.fields.m_YMin = v18 + 53.0;
  v30.fields.y = v16 + 33.0;
  v31.fields.m_Height = 135.0;
  v30.fields.x = v15;
  v31.fields.m_XMin = v17;
  v31.fields.m_Width = v19;
  CommonUI__OpenTutorialArrowMark(v14, v30, 0.0, v31, v20, 0LL);
  v29 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v29,
    (Il2CppObject *)v4,
    Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0__begin_b__1__,
    0LL);
  MainMenuBar__SetDispBtnAct(3, v29, 0LL);
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
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDE6FA & 1) == 0 )
  {
    sub_1C21E38(&TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo);
    byte_4BDE6FA = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo->static_fields->__9 = (struct TerminalSceneComponent_StateTutorial5_CombineArrow___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v6; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4BDE6FB & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0__begin_b__2__);
    byte_4BDE6FB = 1;
  }
  MainMenuBar__SetDispBtnColliderEnable(0, 8, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v6 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v7, v8, v9, v10, v11, v12);
  }
  if ( !v6 )
    sub_1C22094(Instance, v4);
  CommonUI__CloseTutorialArrowMark(v6, _9__2, 0LL);
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
    sub_1C22094(that, method);
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
  __int64 v4; // x19
  void *v5; // x0
  const MethodInfo *v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  TerminalSceneComponent_o **v13; // x22
  Il2CppObject *Instance; // x20
  System_String_o *v15; // x21
  UnityEngine_Vector2_o TUTORIAL_MENU_ARROW_POS2_FS; // kr00_8
  TerminalSceneComponent_o *v17; // x8
  float m_XMin; // s12
  float m_YMin; // s13
  float m_Width; // s10
  float m_Height; // s14
  float v22; // s0
  float v23; // s11
  System_Action_o *v24; // x22
  Il2CppObject *v25; // x23
  struct TerminalSceneComponent_StateTutorial5_MenuArrow___c_StaticFields *static_fields; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  System_Action_o *v33; // x20
  UnityEngine_Rect_o v34; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4BDE6F6 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__begin_b__0_0__);
    sub_1C21E38(&Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0__begin_b__1__);
    sub_1C21E38(&TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0_TypeInfo);
    sub_1C21E38(&TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo);
    sub_1C21E38(&StringLiteral_13744/*"TUTORIAL_MESSAGE_COMBINE1"*/);
    byte_4BDE6F6 = 1;
  }
  v4 = sub_1C22084(TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4 )
    goto LABEL_16;
  *(_QWORD *)(v4 + 16) = that;
  v13 = (TerminalSceneComponent_o **)(v4 + 16);
  sub_1C21DDC((PartyOrganizationUtility_o *)(v4 + 16), (int64_t)that, v7, v8, v9, v10, v11, v12);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_13744/*"TUTORIAL_MESSAGE_COMBINE1"*/, 0LL);
  if ( !*v13 )
    goto LABEL_16;
  v15 = (System_String_o *)v5;
  TUTORIAL_MENU_ARROW_POS2_FS = TerminalSceneComponent__get_TUTORIAL_MENU_ARROW_POS2_FS(*v13, v6);
  v17 = *v13;
  if ( !*v13 )
    goto LABEL_16;
  m_XMin = v17->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_XMin;
  m_YMin = v17->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_YMin;
  m_Width = v17->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Width;
  m_Height = v17->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Height;
  v22 = TerminalSceneComponent__FSMenuOffsetX((TerminalSceneComponent_o *)v5, v6);
  v5 = TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo;
  v23 = v22;
  if ( !TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo);
    v5 = TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo;
  }
  v24 = *(System_Action_o **)(*((_QWORD *)v5 + 23) + 8LL);
  if ( !v24 )
  {
    if ( !*((_DWORD *)v5 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo;
    }
    v25 = (Il2CppObject *)**((_QWORD **)v5 + 23);
    v24 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v24, v25, Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__begin_b__0_0__, 0LL);
    static_fields = TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = v24;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__0_0, (int64_t)v24, v27, v28, v29, v30, v31, v32);
  }
  if ( !Instance )
LABEL_16:
    sub_1C22094(v5, v6);
  v34.fields.m_Height = m_Height + 33.0;
  v34.fields.m_YMin = m_YMin + 33.0;
  v34.fields.m_XMin = m_XMin + v23;
  v34.fields.m_Width = m_Width;
  CommonUI__OpenTutorialNotificationDialogArrow(
    (CommonUI_o *)Instance,
    v15,
    TUTORIAL_MENU_ARROW_POS2_FS,
    v34,
    0.0,
    (UnityEngine_Vector2_o)0xC224000000000000LL,
    -1,
    v24,
    0LL);
  v33 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v33,
    (Il2CppObject *)v4,
    Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0__begin_b__1__,
    0LL);
  MainMenuBar__SetMenuBtnAct(v33, 0LL);
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
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDE6F7 & 1) == 0 )
  {
    sub_1C21E38(&TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo);
    byte_4BDE6F7 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo->static_fields->__9 = (struct TerminalSceneComponent_StateTutorial5_MenuArrow___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v6; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4BDE6F8 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0__begin_b__2__);
    byte_4BDE6F8 = 1;
  }
  MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
  MainMenuBar__SetDispBtnColliderEnable(0, 8, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v6 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v7, v8, v9, v10, v11, v12);
  }
  if ( !v6 )
    sub_1C22094(Instance, v4);
  CommonUI__CloseTutorialNotificationDialogArrow_31153776(v6, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1C22094(0LL, method);
  TerminalSceneComponent__SetState(that, 10, v2);
}


void __fastcall TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__255___ctor(
        TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__255_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__255__MoveNext(
        TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__255_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x20
  System_Func_bool__o *v5; // x21
  UnityEngine_WaitUntil_o *v6; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  bool result; // w0
  ChainableActionBase_o *openCampaignDirectBonus; // x0

  if ( (byte_4BDE725 & 1) == 0 )
  {
    sub_1C21E38(&System_Func_bool__TypeInfo);
    sub_1C21E38(&Method_TerminalSceneComponent__CoWaitBlankEarthActionEnd_b__255_0__);
    sub_1C21E38(&UnityEngine_WaitUntil_TypeInfo);
    byte_4BDE725 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    openCampaignDirectBonus = (ChainableActionBase_o *)this->fields.openCampaignDirectBonus;
    this->fields.__1__state = -1;
    if ( !openCampaignDirectBonus )
      sub_1C22094(0LL, method);
    ChainableActionBase__Execute(openCampaignDirectBonus, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    _4__this = (Il2CppObject *)this->fields.__4__this;
    v5 = (System_Func_bool__o *)sub_1C22084(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(v5, _4__this, Method_TerminalSceneComponent__CoWaitBlankEarthActionEnd_b__255_0__, 0LL);
    v6 = (UnityEngine_WaitUntil_o *)sub_1C22084(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v6, v5, 0LL);
    this->fields.__2__current = (Il2CppObject *)v6;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.__2__current, (int64_t)v6, v7, v8, v9, v10, v11, v12);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__255__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__255_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__255__System_Collections_IEnumerator_Reset(
        TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__255_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__255_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__255__System_Collections_IEnumerator_get_Current(
        TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__255_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__255__System_IDisposable_Dispose(
        TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__255_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__254___ctor(
        TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__254_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__254__MoveNext(
        TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__254_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x20
  System_Func_bool__o *v5; // x21
  UnityEngine_WaitUntil_o *v6; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  bool result; // w0
  ChainableActionBase_o *openCampaignDirectBonus; // x0

  if ( (byte_4BDE726 & 1) == 0 )
  {
    sub_1C21E38(&System_Func_bool__TypeInfo);
    sub_1C21E38(&Method_TerminalSceneComponent__CoWaitTerminalTopEffectEnd_b__254_0__);
    sub_1C21E38(&UnityEngine_WaitUntil_TypeInfo);
    byte_4BDE726 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    openCampaignDirectBonus = (ChainableActionBase_o *)this->fields.openCampaignDirectBonus;
    this->fields.__1__state = -1;
    if ( !openCampaignDirectBonus )
      sub_1C22094(0LL, method);
    ChainableActionBase__Execute(openCampaignDirectBonus, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    _4__this = (Il2CppObject *)this->fields.__4__this;
    v5 = (System_Func_bool__o *)sub_1C22084(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(v5, _4__this, Method_TerminalSceneComponent__CoWaitTerminalTopEffectEnd_b__254_0__, 0LL);
    v6 = (UnityEngine_WaitUntil_o *)sub_1C22084(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v6, v5, 0LL);
    this->fields.__2__current = (Il2CppObject *)v6;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.__2__current, (int64_t)v6, v7, v8, v9, v10, v11, v12);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__254__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__254_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__254__System_Collections_IEnumerator_Reset(
        TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__254_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__254_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__254__System_Collections_IEnumerator_get_Current(
        TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__254_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__254__System_IDisposable_Dispose(
        TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__254_o *this,
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
  TerminalSceneComponent__LoadAsync_d__176_o *v2; // x19
  int32_t _1__state; // w8
  TerminalSceneComponent_o *_4__this; // x21
  __int64 v5; // x20
  UserServantEntity_o *usd; // x22
  System_Action_o *v7; // x23
  const MethodInfo *v8; // x4
  System_Action_o *v9; // x22
  struct TerminalTransitionInfo_o *TransitionInfo_k__BackingField; // x8
  struct TerminalTransitionInfo_o *v11; // x8
  SoundManager_o *v12; // x21
  System_String_o *voiceAssetName; // x22
  System_Action_o *v14; // x23
  System_Action_o *v15; // x21
  System_Action_o *v16; // x21
  System_Action_o *v17; // x21
  System_Action_o *v18; // x21
  System_Action_o *v19; // x21
  System_Action_o *v20; // x21
  System_Action_o *v21; // x21
  System_Action_o *v22; // x21
  System_Action_o *v23; // x21
  System_Action_o *v24; // x21
  System_Func_bool__o *v25; // x21
  UnityEngine_WaitUntil_o *v26; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  bool result; // w0
  struct System_Action_o *callback; // x8

  v2 = this;
  if ( (byte_4BDE727 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&System_Func_bool__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    sub_1C21E38(&Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__0__);
    sub_1C21E38(&Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__10__);
    sub_1C21E38(&Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__11__);
    sub_1C21E38(&Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__12__);
    sub_1C21E38(&Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__13__);
    sub_1C21E38(&Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__1__);
    sub_1C21E38(&Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__2__);
    sub_1C21E38(&Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__3__);
    sub_1C21E38(&Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__4__);
    sub_1C21E38(&Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__5__);
    sub_1C21E38(&Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__6__);
    sub_1C21E38(&Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__7__);
    sub_1C21E38(&Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__8__);
    sub_1C21E38(&Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__9__);
    sub_1C21E38(&TerminalSceneComponent___c__DisplayClass176_0_TypeInfo);
    this = (TerminalSceneComponent__LoadAsync_d__176_o *)sub_1C21E38(&UnityEngine_WaitUntil_TypeInfo);
    byte_4BDE727 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    callback = v2->fields.callback;
    v2->fields.__1__state = -1;
    if ( !callback )
      goto LABEL_23;
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      *(_QWORD *)&callback->fields.extra_arg);
    return 0;
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  _4__this = v2->fields.__4__this;
  v5 = sub_1C22084(TerminalSceneComponent___c__DisplayClass176_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_23;
  *(_DWORD *)(v5 + 19) = 0;
  *(_BYTE *)(v5 + 23) = 0;
  *(_DWORD *)(v5 + 24) = 0;
  *(_WORD *)(v5 + 16) = 256;
  *(_BYTE *)(v5 + 18) = 1;
  *(_BYTE *)(v5 + 28) = 1;
  usd = v2->fields.usd;
  v7 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v7,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__0__,
    0LL);
  if ( !_4__this )
    goto LABEL_23;
  TerminalSceneComponent__SetupStandServant(_4__this, usd, 0, v7, v8);
  this = (TerminalSceneComponent__LoadAsync_d__176_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !this )
    goto LABEL_23;
  if ( !AtlasManager__isLoadedSkinData((AtlasManager_o *)this, 4, 0LL) )
  {
    *(_BYTE *)(v5 + 17) = 0;
    v9 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      v9,
      (Il2CppObject *)v5,
      Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__1__,
      0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__LoadUISkin(v9, 4, 11, 0LL);
  }
  TransitionInfo_k__BackingField = _4__this->fields._TransitionInfo_k__BackingField;
  if ( !TransitionInfo_k__BackingField
    || System_String__IsNullOrEmpty(TransitionInfo_k__BackingField->fields.voiceAssetName, 0LL) )
  {
    goto LABEL_17;
  }
  *(_BYTE *)(v5 + 18) = 0;
  this = (TerminalSceneComponent__LoadAsync_d__176_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v11 = _4__this->fields._TransitionInfo_k__BackingField;
  if ( !v11
    || (v12 = (SoundManager_o *)this,
        voiceAssetName = v11->fields.voiceAssetName,
        v14 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo),
        System_Action___ctor(
          v14,
          (Il2CppObject *)v5,
          Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__2__,
          0LL),
        !v12) )
  {
LABEL_23:
    sub_1C22094(this, method);
  }
  SoundManager__LoadAudioAssetStorage(v12, voiceAssetName, v14, 1, 0LL);
LABEL_17:
  v15 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v15,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__3__,
    0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadBanner(v15, 11, 0LL);
  v16 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v16,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__4__,
    0LL);
  AtlasManager__LoadFaceAtlas(v16, 11, 0LL);
  v17 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v17,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__5__,
    0LL);
  AtlasManager__LoadEquipFace(v17, 11, 0LL);
  v18 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__6__,
    0LL);
  AtlasManager__LoadFriendshipExceed(v18, 11, 0LL);
  v19 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v19,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__7__,
    0LL);
  AtlasManager__LoadCommandCode(v19, 11, 0LL);
  v20 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__8__,
    0LL);
  AtlasManager__LoadCommandCodeMini(v20, 11, 0LL);
  v21 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v21,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__9__,
    0LL);
  AtlasManager__LoadEventAtlas(v21, 11, 0LL);
  v22 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__10__,
    0LL);
  AtlasManager__LoadEventUI(v22, 11, 0LL);
  v23 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v23,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__11__,
    0LL);
  AtlasManager__LoadCharaGraphOptionAtlas(v23, 11, 0LL);
  v24 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v24,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__12__,
    0LL);
  AtlasManager__LoadPartyOrganizationAtlas(v24, 11, 0LL);
  v25 = (System_Func_bool__o *)sub_1C22084(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v25,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass176_0__LoadAsync_b__13__,
    0LL);
  v26 = (UnityEngine_WaitUntil_o *)sub_1C22084(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v26, v25, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v26;
  p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
  sub_1C21DDC(p__2__current, (int64_t)v26, v28, v29, v30, v31, v32, v33);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_TerminalSceneComponent__LoadAsync_d__176_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
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


void __fastcall TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__194___ctor(
        TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__194_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__194__MoveNext(
        TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__194_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  TerminalSceneComponent___c_c *v4; // x0
  System_Func_bool__o *_9__194_0; // x20
  Il2CppObject *v6; // x21
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  UnityEngine_WaitWhile_o *v14; // x21
  Il2CppObject **p__2__current; // x19
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  bool result; // w0

  if ( (byte_4BDE728 & 1) == 0 )
  {
    sub_1C21E38(&System_Func_bool__TypeInfo);
    sub_1C21E38(&SoundManager_TypeInfo);
    sub_1C21E38(&Method_TerminalSceneComponent___c__WaitStopSEQuestPhaseRewardEffect_b__194_0__);
    sub_1C21E38(&TerminalSceneComponent___c_TypeInfo);
    sub_1C21E38(&UnityEngine_WaitWhile_TypeInfo);
    byte_4BDE728 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__stopSe(0.0, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  v4 = TerminalSceneComponent___c_TypeInfo;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v4 = TerminalSceneComponent___c_TypeInfo;
  }
  _9__194_0 = v4->static_fields->__9__194_0;
  if ( !_9__194_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = TerminalSceneComponent___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v4->static_fields->__9;
    _9__194_0 = (System_Func_bool__o *)sub_1C22084(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      _9__194_0,
      v6,
      Method_TerminalSceneComponent___c__WaitStopSEQuestPhaseRewardEffect_b__194_0__,
      0LL);
    static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    static_fields->__9__194_0 = _9__194_0;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__194_0,
      (int64_t)_9__194_0,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  v14 = (UnityEngine_WaitWhile_o *)sub_1C22084(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v14, _9__194_0, 0LL);
  this->fields.__2__current = (Il2CppObject *)v14;
  p__2__current = &this->fields.__2__current;
  sub_1C21DDC((PartyOrganizationUtility_o *)p__2__current, (int64_t)v14, v16, v17, v18, v19, v20, v21);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *__fastcall TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__194__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__194_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__194__System_Collections_IEnumerator_Reset(
        TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__194_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__194_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__194__System_Collections_IEnumerator_get_Current(
        TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__194_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__194__System_IDisposable_Dispose(
        TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__194_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall TerminalSceneComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDE6FC & 1) == 0 )
  {
    sub_1C21E38(&TerminalSceneComponent___c_TypeInfo);
    byte_4BDE6FC = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(TerminalSceneComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  TerminalSceneComponent___c_TypeInfo->static_fields->__9 = (struct TerminalSceneComponent___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)TerminalSceneComponent___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall TerminalSceneComponent___c___ctor(TerminalSceneComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c___CheckOpenCampaignDirectBonus_b__253_0(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *Instance; // x20
  TerminalPramsManager_c *v6; // x0

  if ( (byte_4BDE70A & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BDE70A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD7184 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD7184 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  if ( !Instance )
    sub_1C22094(v6, v4);
  CommonUI__OpenCampaignDirectBonus(
    (CommonUI_o *)Instance,
    v6->static_fields->_CampaignDirectBonus_k__BackingField,
    action,
    0LL);
}


void __fastcall TerminalSceneComponent___c___CheckOpenCampaignDirectBonus_b__253_1(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *Instance; // x20
  TerminalPramsManager_c *v6; // x0

  if ( (byte_4BDE70B & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BDE70B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD7184 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD7184 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  if ( !Instance )
    sub_1C22094(v6, v4);
  CommonUI__OpenCampaignDirectBonusWithTransitionDialog(
    (CommonUI_o *)Instance,
    v6->static_fields->_CampaignDirectBonus_k__BackingField,
    action,
    0LL);
}


void __fastcall TerminalSceneComponent___c___CheckRewardPopupChain_b__251_2(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4BDE708 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BDE708 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v5);
  CommonUI__StartFriendPointNotification((CommonUI_o *)Instance, action, 0LL);
}


void __fastcall TerminalSceneComponent___c___CheckRewardPopupChain_b__251_6(
        TerminalSceneComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4BDE709 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BDE709 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ClearLoginResultData((CommonUI_o *)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (CommonUI__ReleaseFortuneBonusAssetData((CommonUI_o *)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (CommonUI__ReleaseSelectBonusDialogAsset((CommonUI_o *)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1C22094(Instance, v3);
  }
  CommonUI__ReleaseLoginBonusWithTransitionDialogAssetData((CommonUI_o *)Instance, 0LL);
}


void __fastcall TerminalSceneComponent___c___Fadein_MapDisp_Start_b__198_0(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4BDE6FF & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BDE6FF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v5);
  CommonUI__StartLoginAndCampaignBonus((CommonUI_o *)Instance, action, 0LL, 201, 0LL);
}


void __fastcall TerminalSceneComponent___c___Fadein_MapDisp_Start_b__198_1(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  CommonUI_o *v6; // x20

  if ( (byte_4BDE700 & 1) == 0 )
  {
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BDE700 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v6
    || (CommonUI__maskFadein(v6, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, action, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (CommonUI__ClearLoginResultData((CommonUI_o *)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (CommonUI__ReleaseFortuneBonusAssetData((CommonUI_o *)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1C22094(Instance, v5);
  }
  CommonUI__ReleaseLoginBonusWithTransitionDialogAssetData((CommonUI_o *)Instance, 0LL);
}


void __fastcall TerminalSceneComponent___c___Fadein_MapDisp_Start_b__198_6(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  CommonUI_o *v6; // x20

  if ( (byte_4BDE6FE & 1) == 0 )
  {
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BDE6FE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v6 )
    sub_1C22094(Instance, v5);
  CommonUI__maskFadein(v6, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, action, 0LL);
}


ShopEntity_o *__fastcall TerminalSceneComponent___c___OpenExchangeDialogue_b__258_0(
        TerminalSceneComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4BDE70C & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C21E38(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDE70C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL )
  {
    sub_1C22094(Instance, v5);
  }
  return (ShopEntity_o *)DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                           x,
                           (const MethodInfo_325BDC8 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
}


bool __fastcall TerminalSceneComponent___c___OpenExchangeDialogue_b__258_1(
        TerminalSceneComponent___c_o *this,
        ShopEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return ShopEntity__IsAfterTheFreeShopReleaseDate(x, 0LL);
}


bool __fastcall TerminalSceneComponent___c___OpenExchangeDialogue_b__258_2(
        TerminalSceneComponent___c_o *this,
        ShopEntity_o *x,
        const MethodInfo *method)
{
  bool isQuestNotClearItemClosed; // w8
  bool result; // w0

  if ( !x )
    sub_1C22094(this, 0LL);
  if ( !ShopEntity__isQuestNotClearItemClosed(x, 0, 0LL) )
    return 1;
  isQuestNotClearItemClosed = ShopEntity__isQuestNotClearItemClosed(x, 0, 0LL);
  result = 0;
  if ( isQuestNotClearItemClosed )
    return ShopEntity__IsSoldOut(x, 0LL);
  return result;
}


int32_t __fastcall TerminalSceneComponent___c___OpenExchangeDialogue_b__258_4(
        TerminalSceneComponent___c_o *this,
        ShopEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return x->fields.id;
}


ShopEntity_o *__fastcall TerminalSceneComponent___c___OpenExchangeDialogue_b__258_5(
        TerminalSceneComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4BDE70D & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C21E38(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDE70D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL )
  {
    sub_1C22094(Instance, v5);
  }
  return (ShopEntity_o *)DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                           x,
                           (const MethodInfo_325BDC8 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
}


int32_t __fastcall TerminalSceneComponent___c___OpenExchangeDialogue_b__258_6(
        TerminalSceneComponent___c_o *this,
        ShopEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return ShopEntity__GetPrice(x, 0LL);
}


void __fastcall TerminalSceneComponent___c___PlayAutoExecuteQuest_b__228_3(
        TerminalSceneComponent___c_o *this,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v2; // x0
  int32_t WarId_k__BackingField; // w19
  int32_t QuestId_k__BackingField; // w20
  TerminalSceneComponent___c_c *v5; // x8
  int32_t PhaseCnt_k__BackingField; // w23
  ScriptManager_CallbackFunc_o *_9__228_4; // x21
  Il2CppObject *v8; // x22
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4BDE705 & 1) == 0 )
  {
    sub_1C21E38(&ScriptManager_CallbackFunc_TypeInfo);
    sub_1C21E38(&ScriptManager_TypeInfo);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&Method_TerminalSceneComponent___c__PlayAutoExecuteQuest_b__228_4__);
    sub_1C21E38(&TerminalSceneComponent___c_TypeInfo);
    byte_4BDE705 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9099 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9099 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v2->static_fields->_WarId_k__BackingField;
  if ( !byte_4BD7264 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
    byte_4BD7264 = 1;
  }
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v2->static_fields->_QuestId_k__BackingField;
  if ( !byte_4BD7263 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
    byte_4BD7263 = 1;
  }
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v5 = TerminalSceneComponent___c_TypeInfo;
  PhaseCnt_k__BackingField = v2->static_fields->_PhaseCnt_k__BackingField;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v5 = TerminalSceneComponent___c_TypeInfo;
  }
  _9__228_4 = v5->static_fields->__9__228_4;
  if ( !_9__228_4 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = TerminalSceneComponent___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__228_4 = (ScriptManager_CallbackFunc_o *)sub_1C22084(ScriptManager_CallbackFunc_TypeInfo);
    ScriptManager_CallbackFunc___ctor(
      _9__228_4,
      v8,
      Method_TerminalSceneComponent___c__PlayAutoExecuteQuest_b__228_4__,
      0LL);
    static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    static_fields->__9__228_4 = _9__228_4;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__228_4,
      (int64_t)_9__228_4,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__PlayBattleStart(
    WarId_k__BackingField,
    QuestId_k__BackingField,
    PhaseCnt_k__BackingField + 1,
    _9__228_4,
    0,
    0LL,
    -1,
    0,
    0,
    0LL,
    0LL);
}


void __fastcall TerminalSceneComponent___c___PlayAutoExecuteQuest_b__228_4(
        TerminalSceneComponent___c_o *this,
        bool isExit,
        const MethodInfo *method)
{
  TerminalSceneComponent___c_c *v3; // x0
  NetworkManager_ResultCallbackFunc_o *_9__228_5; // x19
  Il2CppObject *v5; // x20
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  Il2CppObject *Request_object; // x19
  TerminalPramsManager_c *v14; // x0
  int32_t QuestId_k__BackingField; // w21
  int32_t PhaseCnt_k__BackingField; // w20
  System_Int32_array *SelectRouteArray; // x0
  __int64 v18; // x1

  if ( (byte_4BDE706 & 1) == 0 )
  {
    sub_1C21E38(&Method_NetworkManager_getRequest_BattleScenarioRequest___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C21E38(&ScriptManager_TypeInfo);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&Method_TerminalSceneComponent___c__PlayAutoExecuteQuest_b__228_5__);
    sub_1C21E38(&TerminalSceneComponent___c_TypeInfo);
    byte_4BDE706 = 1;
  }
  v3 = TerminalSceneComponent___c_TypeInfo;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v3 = TerminalSceneComponent___c_TypeInfo;
  }
  _9__228_5 = v3->static_fields->__9__228_5;
  if ( !_9__228_5 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = TerminalSceneComponent___c_TypeInfo;
    }
    v5 = (Il2CppObject *)v3->static_fields->__9;
    _9__228_5 = (NetworkManager_ResultCallbackFunc_o *)sub_1C22084(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__228_5,
      v5,
      Method_TerminalSceneComponent___c__PlayAutoExecuteQuest_b__228_5__,
      0LL);
    static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    static_fields->__9__228_5 = _9__228_5;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__228_5, (int64_t)_9__228_5, v7, v8, v9, v10, v11, v12);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     _9__228_5,
                     (const MethodInfo_30345EC *)Method_NetworkManager_getRequest_BattleScenarioRequest___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD7264 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD7264 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v14->static_fields->_QuestId_k__BackingField;
  if ( !byte_4BD7263 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
    byte_4BD7263 = 1;
  }
  if ( !v14->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v14);
    v14 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v14->static_fields->_PhaseCnt_k__BackingField;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  SelectRouteArray = ScriptManager__GetSelectRouteArray(0LL);
  if ( !Request_object )
    sub_1C22094(SelectRouteArray, v18);
  BattleScenarioRequest__beginRequest(
    (BattleScenarioRequest_o *)Request_object,
    QuestId_k__BackingField,
    PhaseCnt_k__BackingField + 1,
    SelectRouteArray,
    0LL);
}


void __fastcall TerminalSceneComponent___c___PlayAutoExecuteQuest_b__228_5(
        TerminalSceneComponent___c_o *this,
        System_String_o *jsonStr,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  System_Object_array *v5; // x19
  TerminalPramsManager_c *v6; // x0
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4BDE707 & 1) == 0 )
  {
    sub_1C21E38(&Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
    sub_1C21E38(&JsonManager_TypeInfo);
    sub_1C21E38(&ScriptManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&StringLiteral_16086/*"["*/);
    sub_1C21E38(&StringLiteral_16345/*"]"*/);
    byte_4BDE707 = 1;
  }
  v4 = (Il2CppObject *)System_String__Concat_63126736(
                         (System_String_o *)StringLiteral_16086/*"["*/,
                         jsonStr,
                         (System_String_o *)StringLiteral_16345/*"]"*/,
                         0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v5 = JsonManager__DeserializeArray_object_(
         v4,
         (const MethodInfo_3017804 *)Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__ClearSelectRouteArray(0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__ReceiveQuestEndResultInfo((BattleResultComponent_resultData_array *)v5, 1, 0LL);
  if ( !byte_4BD736A )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD736A = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v6->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v8);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
}


void __fastcall TerminalSceneComponent___c___RebootToNetworkError_b__215_0(
        TerminalSceneComponent___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4BDE704 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_4BDE704 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v4);
  ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, 0LL);
}


void __fastcall TerminalSceneComponent___c___StartWindowMessage_b__200_1(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  CommonUI_o *v6; // x20

  if ( (byte_4BDE701 & 1) == 0 )
  {
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BDE701 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v6 )
    sub_1C22094(Instance, v5);
  CommonUI__maskFadein(v6, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, action, 0LL);
}


void __fastcall TerminalSceneComponent___c___StartWindowMessage_b__200_2(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v4; // x0
  System_String_o *QuestWindowMessage_k__BackingField; // x20

  if ( (byte_4BDE702 & 1) == 0 )
  {
    sub_1C21E38(&ScriptManager_TypeInfo);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BDE702 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BDE78E )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BDE78E = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  QuestWindowMessage_k__BackingField = v4->static_fields->_QuestWindowMessage_k__BackingField;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__PlayMessage(QuestWindowMessage_k__BackingField, action, 0, 0LL, -1, 0LL);
}


void __fastcall TerminalSceneComponent___c___StartWindowMessage_b__200_3(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v4; // x0
  __int64 v5; // x1
  Il2CppObject *v6; // x20
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_4BDE703 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BDE703 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD82DC )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD82DC = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  if ( v4->static_fields->_MessageDispType_k__BackingField != 2 )
  {
    if ( !v4->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v4);
    TerminalPramsManager__InitMessageWindowData(0LL);
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( Instance )
    {
      AvalonSceneManager__transitionSceneRefresh(Instance, 34, 1, 0LL, 0, 0LL);
      goto LABEL_22;
    }
LABEL_23:
    sub_1C22094(Instance, v5);
  }
  v6 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BDE790 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BDE790 = 1;
  }
  Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v6 )
    goto LABEL_23;
  AvalonSceneManager__transitionScene(
    (AvalonSceneManager_o *)v6,
    40,
    1,
    *(Il2CppObject **)(*(_QWORD *)&Instance[1].fields.fadeType + 120LL),
    0LL);
LABEL_22:
  ActionExtensions__Call(action, 0LL);
}


bool __fastcall TerminalSceneComponent___c___WaitStopSEQuestPhaseRewardEffect_b__194_0(
        TerminalSceneComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4BDE6FD & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonTemplate_RewardMiniPopupExecutor__get_Instance__);
    byte_4BDE6FD = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_RewardMiniPopupExecutor__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v3);
  return RewardMiniPopupExecutor__IsBusy((RewardMiniPopupExecutor_o *)Instance, 0LL);
}


System_String_o *__fastcall TerminalSceneComponent___c___callbackTopLogin_b__213_0(
        TerminalSceneComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  int32_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = x;
  return System_Int32__ToString((int32_t)&v4, 0LL);
}


System_String_o *__fastcall TerminalSceneComponent___c___callbackTopLogin_b__213_1(
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
  struct TerminalSceneComponent_o *_4__this; // x21
  Il2CppObject *Object_object__49880776; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  struct TerminalSceneComponent_o *v13; // x8
  struct TerminalSceneComponent_o *v14; // x20
  Il2CppObject *ComponentInChildren_object; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  v4 = this;
  if ( (byte_4BDE70E & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetData_GetObject_GameObject____77626288);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentInChildren_BaseCore___);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    this = (TerminalSceneComponent___c__DisplayClass173_0_o *)sub_1C21E38(&StringLiteral_4858/*"CorePrefab"*/);
    byte_4BDE70E = 1;
  }
  if ( !data )
    goto LABEL_11;
  _4__this = v4->fields.__4__this;
  Object_object__49880776 = AssetData__GetObject_object__49880776(
                              data,
                              (System_String_o *)StringLiteral_4858/*"CorePrefab"*/,
                              (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (TerminalSceneComponent___c__DisplayClass173_0_o *)UnityEngine_Object__Instantiate_object_(
                                                              Object_object__49880776,
                                                              (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !_4__this
    || (_4__this->fields.mEarthCoreObj = (struct UnityEngine_GameObject_o *)this,
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&_4__this->fields.mEarthCoreObj,
          (int64_t)this,
          v7,
          v8,
          v9,
          v10,
          v11,
          v12),
        (v13 = v4->fields.__4__this) == 0LL)
    || (GameObjectExtensions__SafeSetParent_34803616(v13->fields.mEarthCoreObj, v13->fields.mUiRoot, 0LL),
        (v14 = v4->fields.__4__this) == 0LL)
    || (this = (TerminalSceneComponent___c__DisplayClass173_0_o *)v14->fields.mEarthCoreObj) == 0LL )
  {
LABEL_11:
    sub_1C22094(this, data);
  }
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 (UnityEngine_GameObject_o *)this,
                                 (const MethodInfo_3000798 *)Method_UnityEngine_GameObject_GetComponentInChildren_BaseCore___);
  v14->fields.mEarthCore = (struct BaseCore_o *)ComponentInChildren_object;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v14->fields.mEarthCore,
    (int64_t)ComponentInChildren_object,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
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


void __fastcall TerminalSceneComponent___c__DisplayClass189_0___ctor(
        TerminalSceneComponent___c__DisplayClass189_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass189_0___SetupStandServant_b__0(
        TerminalSceneComponent___c__DisplayClass189_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass189_0_o *v2; // x19
  struct TerminalSceneComponent_o *_4__this; // x8

  v2 = this;
  if ( this->fields.isSlideIn )
  {
    _4__this = this->fields.__4__this;
    if ( !_4__this
      || (this = (TerminalSceneComponent___c__DisplayClass189_0_o *)_4__this->fields.mTerminalServant) == 0LL )
    {
      sub_1C22094(this, method);
    }
    StandFigureSlideComponent__SlideIn((StandFigureSlideComponent_o *)this, 0LL, 0LL);
  }
  ActionExtensions__Call(v2->fields.endAction, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass189_0___SetupStandServant_b__1(
        TerminalSceneComponent___c__DisplayClass189_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass189_0_o *v2; // x19
  struct TerminalSceneComponent_o *_4__this; // x8
  struct TerminalSceneComponent_o *v4; // x8
  long double v5; // q0
  struct TerminalSceneComponent_o *v6; // x8
  struct StandFigureSlideComponent_o *mTerminalServant; // x9
  struct BaseCore_o *mEarthCore; // x8
  __int64 v9; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  UserServantEntity_o *NextStandServant; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  long double inited; // q0
  struct TerminalSceneComponent_o *v24; // x8
  int32_t mStandSvtIdx; // w22
  struct TerminalSceneComponent_o *v26; // x8
  struct BaseCore_o *v27; // x22
  struct TerminalSceneComponent_o *v28; // x8
  StandFigureSlideComponent_o *v29; // x19
  System_Action_o *v30; // x21
  struct TerminalSceneComponent_o *v31; // x8
  struct BaseCore_o *v32; // x21
  struct TerminalSceneComponent_o *v33; // x8

  v2 = this;
  if ( (byte_4BDE70F & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&Method_TerminalSceneComponent___c__DisplayClass189_1__SetupStandServant_b__2__);
    this = (TerminalSceneComponent___c__DisplayClass189_0_o *)sub_1C21E38(&TerminalSceneComponent___c__DisplayClass189_1_TypeInfo);
    byte_4BDE70F = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_54;
  this = (TerminalSceneComponent___c__DisplayClass189_0_o *)_4__this->fields.mTerminalServant;
  if ( !this )
    goto LABEL_54;
  if ( !BYTE1(this[1].fields.__4__this) )
  {
    this = (TerminalSceneComponent___c__DisplayClass189_0_o *)StandFigureSlideComponent__IsMoving(
                                                                (StandFigureSlideComponent_o *)this,
                                                                0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v4 = v2->fields.__4__this;
      if ( !v4 )
        goto LABEL_54;
      this = (TerminalSceneComponent___c__DisplayClass189_0_o *)v4->fields.mEarthCore;
      if ( !this )
        goto LABEL_54;
      if ( !BYTE1(this[3].fields.__4__this) )
      {
        *(float *)&v5 = ((float (__fastcall *)(TerminalSceneComponent___c__DisplayClass189_0_o *, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
                          this,
                          this->klass[1]._1.interfaceOffsets);
        if ( *(float *)&v5 >= 0.0 && *(float *)&v5 <= 0.0 )
        {
          v6 = v2->fields.__4__this;
          if ( !v6 )
            goto LABEL_54;
          mTerminalServant = v6->fields.mTerminalServant;
          if ( !mTerminalServant )
            goto LABEL_54;
          mEarthCore = v6->fields.mEarthCore;
          if ( mTerminalServant->fields.mIsFrameIn )
          {
            if ( !mEarthCore )
              goto LABEL_54;
            if ( !mEarthCore->fields.mIsFocusIn )
            {
              v9 = sub_1C22084(TerminalSceneComponent___c__DisplayClass189_1_TypeInfo);
              System_Object___ctor((Il2CppObject *)v9, 0LL);
              if ( v9 )
              {
                *(_QWORD *)(v9 + 24) = v2;
                sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 24), (int64_t)v2, v10, v11, v12, v13, v14, v15);
                this = (TerminalSceneComponent___c__DisplayClass189_0_o *)v2->fields.__4__this;
                if ( this )
                {
                  NextStandServant = TerminalSceneComponent__GetNextStandServant(
                                       (TerminalSceneComponent_o *)this,
                                       method);
                  *(_QWORD *)(v9 + 16) = NextStandServant;
                  sub_1C21DDC(
                    (PartyOrganizationUtility_o *)(v9 + 16),
                    (int64_t)NextStandServant,
                    v17,
                    v18,
                    v19,
                    v20,
                    v21,
                    v22);
                  v24 = v2->fields.__4__this;
                  if ( v24 )
                  {
                    mStandSvtIdx = v24->fields.mStandSvtIdx;
                    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                      inited = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                    if ( !byte_4BDE78A )
                    {
                      sub_1C21E38(&TerminalPramsManager_TypeInfo);
                      byte_4BDE78A = 1;
                    }
                    this = (TerminalSceneComponent___c__DisplayClass189_0_o *)TerminalPramsManager_TypeInfo;
                    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                    {
                      inited = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                      this = (TerminalSceneComponent___c__DisplayClass189_0_o *)TerminalPramsManager_TypeInfo;
                    }
                    BYTE2(this[4].fields.__4__this->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.x) = mStandSvtIdx != 0;
                    v26 = v2->fields.__4__this;
                    if ( v26 )
                    {
                      v27 = v26->fields.mEarthCore;
                      if ( !byte_4BD964F )
                      {
                        sub_1C21E38(&TerminalPramsManager_TypeInfo);
                        this = (TerminalSceneComponent___c__DisplayClass189_0_o *)TerminalPramsManager_TypeInfo;
                        byte_4BD964F = 1;
                      }
                      if ( !LODWORD(this[5].fields.__4__this) )
                      {
                        inited = j_il2cpp_runtime_class_init_0(this);
                        this = (TerminalSceneComponent___c__DisplayClass189_0_o *)TerminalPramsManager_TypeInfo;
                      }
                      if ( v27 )
                      {
                        this = (TerminalSceneComponent___c__DisplayClass189_0_o *)((__int64 (__fastcall *)(struct BaseCore_o *, bool, _QWORD, Il2CppMethodPointer, long double))v27->klass->vtable._4_FocusInOut.method)(
                                                                                    v27,
                                                                                    BYTE2(this[4].fields.__4__this->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.x) == 0,
                                                                                    0LL,
                                                                                    v27->klass->vtable._5_Awake.methodPtr,
                                                                                    inited);
                        v28 = v2->fields.__4__this;
                        if ( v28 )
                        {
                          v29 = v28->fields.mTerminalServant;
                          v30 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
                          System_Action___ctor(
                            v30,
                            (Il2CppObject *)v9,
                            Method_TerminalSceneComponent___c__DisplayClass189_1__SetupStandServant_b__2__,
                            0LL);
                          if ( v29 )
                          {
                            StandFigureSlideComponent__SlideOut(v29, v30, 0, 0LL);
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
                v5 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              if ( !byte_4BDE78A )
              {
                sub_1C21E38(&TerminalPramsManager_TypeInfo);
                byte_4BDE78A = 1;
              }
              this = (TerminalSceneComponent___c__DisplayClass189_0_o *)TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                v5 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                this = (TerminalSceneComponent___c__DisplayClass189_0_o *)TerminalPramsManager_TypeInfo;
              }
              BYTE2(this[4].fields.__4__this->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.x) = 1;
              v31 = v2->fields.__4__this;
              if ( v31 )
              {
                v32 = v31->fields.mEarthCore;
                if ( !byte_4BD964F )
                {
                  sub_1C21E38(&TerminalPramsManager_TypeInfo);
                  this = (TerminalSceneComponent___c__DisplayClass189_0_o *)TerminalPramsManager_TypeInfo;
                  byte_4BD964F = 1;
                }
                if ( !LODWORD(this[5].fields.__4__this) )
                {
                  v5 = j_il2cpp_runtime_class_init_0(this);
                  this = (TerminalSceneComponent___c__DisplayClass189_0_o *)TerminalPramsManager_TypeInfo;
                }
                if ( v32 )
                {
                  this = (TerminalSceneComponent___c__DisplayClass189_0_o *)((__int64 (__fastcall *)(struct BaseCore_o *, bool, _QWORD, Il2CppMethodPointer, long double))v32->klass->vtable._4_FocusInOut.method)(
                                                                              v32,
                                                                              BYTE2(this[4].fields.__4__this->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.x) == 0,
                                                                              0LL,
                                                                              v32->klass->vtable._5_Awake.methodPtr,
                                                                              v5);
                  v33 = v2->fields.__4__this;
                  if ( v33 )
                  {
                    this = (TerminalSceneComponent___c__DisplayClass189_0_o *)v33->fields.mTerminalServant;
                    if ( this )
                    {
                      StandFigureSlideComponent__SlideIn((StandFigureSlideComponent_o *)this, 0LL, 0LL);
                      goto LABEL_53;
                    }
                  }
                }
              }
LABEL_54:
              sub_1C22094(this, method);
            }
          }
        }
      }
    }
  }
}


void __fastcall TerminalSceneComponent___c__DisplayClass189_1___ctor(
        TerminalSceneComponent___c__DisplayClass189_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass189_1___SetupStandServant_b__2(
        TerminalSceneComponent___c__DisplayClass189_1_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  TerminalSceneComponent___c__DisplayClass189_1_o *v3; // x20
  struct TerminalSceneComponent___c__DisplayClass189_0_o *CS___8__locals1; // x8
  TerminalSceneComponent_o *_4__this; // x19
  UserServantEntity_o *usd; // x20

  v3 = this;
  if ( (byte_4BDE710 & 1) == 0 )
  {
    this = (TerminalSceneComponent___c__DisplayClass189_1_o *)sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BDE710 = 1;
  }
  CS___8__locals1 = v3->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_12;
  _4__this = CS___8__locals1->fields.__4__this;
  usd = v3->fields._usd;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD964F )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD964F = 1;
  }
  this = (TerminalSceneComponent___c__DisplayClass189_1_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (TerminalSceneComponent___c__DisplayClass189_1_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !_4__this )
LABEL_12:
    sub_1C22094(this, method);
  TerminalSceneComponent__SetupStandServant(_4__this, usd, BYTE2(this[5].fields.CS___8__locals1[2].monitor), 0LL, v2);
}


void __fastcall TerminalSceneComponent___c__DisplayClass195_0___ctor(
        TerminalSceneComponent___c__DisplayClass195_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass195_0___coFadein_WorldDisp_b__0(
        TerminalSceneComponent___c__DisplayClass195_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalSceneComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C22094(0LL, method);
  TerminalSceneComponent__StartWindowMessage(_4__this, 0LL, v2);
}


void __fastcall TerminalSceneComponent___c__DisplayClass195_0___coFadein_WorldDisp_b__1(
        TerminalSceneComponent___c__DisplayClass195_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.endAct, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass195_0___coFadein_WorldDisp_b__2(
        TerminalSceneComponent___c__DisplayClass195_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalSceneComponent___c__DisplayClass195_0_o *v3; // x19
  System_Action_o *_9__3; // x22
  TerminalSceneComponent_o *_4__this; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  v3 = this;
  if ( (byte_4BDE711 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    this = (TerminalSceneComponent___c__DisplayClass195_0_o *)sub_1C21E38(&Method_TerminalSceneComponent___c__DisplayClass195_0__coFadein_WorldDisp_b__3__);
    byte_4BDE711 = 1;
  }
  _9__3 = v3->fields.__9__3;
  _4__this = v3->fields.__4__this;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)v3,
      Method_TerminalSceneComponent___c__DisplayClass195_0__coFadein_WorldDisp_b__3__,
      0LL);
    v3->fields.__9__3 = _9__3;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v3->fields.__9__3, (int64_t)_9__3, v6, v7, v8, v9, v10, v11);
  }
  if ( !_4__this )
    sub_1C22094(this, method);
  TerminalSceneComponent__StartWindowMessage(_4__this, _9__3, v2);
}


void __fastcall TerminalSceneComponent___c__DisplayClass195_0___coFadein_WorldDisp_b__3(
        TerminalSceneComponent___c__DisplayClass195_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.endAct, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass196_0___ctor(
        TerminalSceneComponent___c__DisplayClass196_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass196_0___Fadein_MapDisp_b__0(
        TerminalSceneComponent___c__DisplayClass196_0_o *this,
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
    sub_1C22094(_4__this, method);
  }
  v5->fields._FirstFadeTime_k__BackingField = 0.0;
}


void __fastcall TerminalSceneComponent___c__DisplayClass197_0___ctor(
        TerminalSceneComponent___c__DisplayClass197_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass197_0___Fadein_MapDisp_Load_b__0(
        TerminalSceneComponent___c__DisplayClass197_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1C22094(this, method);
  TerminalSceneComponent__Fadein_MapDisp_Start(this->fields.__4__this, this->fields.fade_time, this->fields.end_act, v2);
}


void __fastcall TerminalSceneComponent___c__DisplayClass198_0___ctor(
        TerminalSceneComponent___c__DisplayClass198_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass198_0___Fadein_MapDisp_Start_b__2(
        TerminalSceneComponent___c__DisplayClass198_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct WarEntity_o *war_dat; // x8

  war_dat = this->fields.war_dat;
  if ( !war_dat || (this = (TerminalSceneComponent___c__DisplayClass198_0_o *)this->fields.__4__this) == 0LL )
    sub_1C22094(this, action);
  TerminalSceneComponent__StartEventDailyPoint((TerminalSceneComponent_o *)this, war_dat->fields.eventId, action, v3);
}


void __fastcall TerminalSceneComponent___c__DisplayClass198_0___Fadein_MapDisp_Start_b__3(
        TerminalSceneComponent___c__DisplayClass198_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  struct WarEntity_o *war_dat; // x9

  war_dat = this->fields.war_dat;
  if ( !war_dat || !this->fields.__4__this )
    sub_1C22094(this, method);
  TerminalSceneComponent__FadeInAndTriggerEventEffects(
    this->fields.__4__this,
    this->fields.fade_time,
    war_dat->fields.eventId,
    this->fields.end_act,
    v2);
}


void __fastcall TerminalSceneComponent___c__DisplayClass198_0___Fadein_MapDisp_Start_b__4(
        TerminalSceneComponent___c__DisplayClass198_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_o *_4__this; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (mTerminalList = _4__this->fields.mTerminalList) == 0LL
    || (this = (TerminalSceneComponent___c__DisplayClass198_0_o *)mTerminalList->fields.mQuestBoardListViewManager) == 0LL )
  {
    sub_1C22094(this, action);
  }
  QuestBoardListViewManager__SetMode((QuestBoardListViewManager_o *)this, 4, action, 0, 0, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass198_0___Fadein_MapDisp_Start_b__5(
        TerminalSceneComponent___c__DisplayClass198_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass198_0_o *v4; // x20
  struct TerminalSceneComponent_o *_4__this; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8

  v4 = this;
  if ( (byte_4BDE712 & 1) == 0 )
  {
    this = (TerminalSceneComponent___c__DisplayClass198_0_o *)sub_1C21E38(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    byte_4BDE712 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this
    || (mTerminalMap = _4__this->fields.mTerminalMap) == 0LL
    || (this = (TerminalSceneComponent___c__DisplayClass198_0_o *)mTerminalMap->fields.spotMaskObj) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL),
        (this = (TerminalSceneComponent___c__DisplayClass198_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__)) == 0LL) )
  {
    sub_1C22094(this, action);
  }
  QuestAfterAction__LoadVoice((QuestAfterAction_o *)this, action, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass198_1___ctor(
        TerminalSceneComponent___c__DisplayClass198_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass198_1___Fadein_MapDisp_Start_b__7(
        TerminalSceneComponent___c__DisplayClass198_1_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *IsNullOrEmpty; // x0
  __int64 v4; // x8
  __int64 v5; // x8
  TerminalPramsManager_c *v6; // x0
  const MethodInfo *v7; // x2
  Il2CppObject *Instance; // x19
  struct TerminalSceneComponent___c__DisplayClass198_0_o *CS___8__locals1; // x8

  if ( (byte_4BDE713 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BDE713 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BD7183 )
  {
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BD7183 = 1;
  }
  IsNullOrEmpty = (UnityEngine_GameObject_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    IsNullOrEmpty = (UnityEngine_GameObject_o *)TerminalSceneComponent_TypeInfo;
  }
  v4 = **(_QWORD **)&IsNullOrEmpty[7].fields.m_CachedPtr;
  if ( !v4 )
    goto LABEL_30;
  v5 = *(_QWORD *)(v4 + 264);
  if ( !v5 )
    goto LABEL_30;
  IsNullOrEmpty = *(UnityEngine_GameObject_o **)(v5 + 552);
  if ( !IsNullOrEmpty )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive(IsNullOrEmpty, this->fields.oldActive, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BDE78E )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BDE78E = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  IsNullOrEmpty = (UnityEngine_GameObject_o *)System_String__IsNullOrEmpty(
                                                v6->static_fields->_QuestWindowMessage_k__BackingField,
                                                0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BDE790 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BDE790 = 1;
    }
    IsNullOrEmpty = (UnityEngine_GameObject_o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
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
    sub_1C22094(IsNullOrEmpty, method);
  }
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_30;
  IsNullOrEmpty = (UnityEngine_GameObject_o *)CS___8__locals1->fields.__4__this;
  if ( !IsNullOrEmpty )
    goto LABEL_30;
  TerminalSceneComponent__StartWindowMessage((TerminalSceneComponent_o *)IsNullOrEmpty, 0LL, v7);
}


void __fastcall TerminalSceneComponent___c__DisplayClass201_0___ctor(
        TerminalSceneComponent___c__DisplayClass201_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass201_0___FadeInAndTriggerEventEffects_b__0(
        TerminalSceneComponent___c__DisplayClass201_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__2; // x21
  CommonUI_o *v6; // x20
  float fadeTime; // s8
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4BDE714 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_TerminalSceneComponent___c__DisplayClass201_0__FadeInAndTriggerEventEffects_b__2__);
    byte_4BDE714 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v6 = (CommonUI_o *)Instance;
  fadeTime = this->fields.fadeTime;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent___c__DisplayClass201_0__FadeInAndTriggerEventEffects_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v8, v9, v10, v11, v12, v13);
  }
  if ( !v6 )
    sub_1C22094(Instance, v4);
  CommonUI__maskFadein(v6, fadeTime, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass201_0___FadeInAndTriggerEventEffects_b__1(
        TerminalSceneComponent___c__DisplayClass201_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( !this->fields.__4__this )
    sub_1C22094(this, method);
  TerminalSceneComponent__FadeInAndTriggerEventEffectsNext(
    this->fields.__4__this,
    this->fields.eventId,
    this->fields.callback,
    v2);
}


void __fastcall TerminalSceneComponent___c__DisplayClass201_0___FadeInAndTriggerEventEffects_b__2(
        TerminalSceneComponent___c__DisplayClass201_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__3; // x22
  QuestAfterAction_o *v6; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4BDE715 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1C21E38(&Method_TerminalSceneComponent___c__DisplayClass201_0__FadeInAndTriggerEventEffects_b__3__);
    byte_4BDE715 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  _9__3 = this->fields.__9__3;
  v6 = (QuestAfterAction_o *)Instance;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent___c__DisplayClass201_0__FadeInAndTriggerEventEffects_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.__9__3, (int64_t)_9__3, v7, v8, v9, v10, v11, v12);
  }
  if ( !v6 )
    sub_1C22094(Instance, v4);
  QuestAfterAction__Play(v6, _9__3, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass201_0___FadeInAndTriggerEventEffects_b__3(
        TerminalSceneComponent___c__DisplayClass201_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( !this->fields.__4__this )
    sub_1C22094(this, method);
  TerminalSceneComponent__FadeInAndTriggerEventEffectsNext(
    this->fields.__4__this,
    this->fields.eventId,
    this->fields.callback,
    v2);
}


void __fastcall TerminalSceneComponent___c__DisplayClass201_0___FadeInAndTriggerEventEffects_b__4(
        TerminalSceneComponent___c__DisplayClass201_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( !this->fields.__4__this )
    sub_1C22094(this, method);
  TerminalSceneComponent__FadeInAndTriggerEventEffectsNext(
    this->fields.__4__this,
    this->fields.eventId,
    this->fields.callback,
    v2);
}


void __fastcall TerminalSceneComponent___c__DisplayClass204_0___ctor(
        TerminalSceneComponent___c__DisplayClass204_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass204_0___FadeInAndTriggerEventEffectsNext_b__0(
        TerminalSceneComponent___c__DisplayClass204_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_o *_4__this; // x8
  TitleInfoControl_o *mTitleInfo; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (mTitleInfo = _4__this->fields.mTitleInfo) == 0LL )
    sub_1C22094(this, method);
  TitleInfoControl__CheckSuperBossHpAnim(mTitleInfo, this->fields.callback, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass204_0___FadeInAndTriggerEventEffectsNext_b__1(
        TerminalSceneComponent___c__DisplayClass204_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  TerminalSceneComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C22094(0LL, method);
  TerminalSceneComponent__SetActionBGColl(_4__this, 0, this->fields.callback, v2);
}


void __fastcall TerminalSceneComponent___c__DisplayClass228_0___ctor(
        TerminalSceneComponent___c__DisplayClass228_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass228_0___PlayAutoExecuteQuest_b__0(
        TerminalSceneComponent___c__DisplayClass228_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass228_0_o *v2; // x19
  struct TerminalSceneComponent_o *_4__this; // x8
  ScrTerminalListTop_o *mTerminalList; // x20
  int32_t invoke_impl; // w21
  int m_target; // w24
  System_Action_o *_9__6; // x22
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  v2 = this;
  if ( (byte_4BDE718 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    this = (TerminalSceneComponent___c__DisplayClass228_0_o *)sub_1C21E38(&Method_TerminalSceneComponent___c__DisplayClass228_0__PlayAutoExecuteQuest_b__6__);
    byte_4BDE718 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_18;
  mTerminalList = _4__this->fields.mTerminalList;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD7264 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD7264 = 1;
  }
  this = (TerminalSceneComponent___c__DisplayClass228_0_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (TerminalSceneComponent___c__DisplayClass228_0_o *)TerminalPramsManager_TypeInfo;
  }
  invoke_impl = this[3].fields.__9__6->fields.invoke_impl;
  if ( !byte_4BD7263 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    this = (TerminalSceneComponent___c__DisplayClass228_0_o *)TerminalPramsManager_TypeInfo;
    byte_4BD7263 = 1;
  }
  if ( !LODWORD(this[4].fields.__9__2) )
  {
    j_il2cpp_runtime_class_init_0(this);
    this = (TerminalSceneComponent___c__DisplayClass228_0_o *)TerminalPramsManager_TypeInfo;
  }
  m_target = (int)this[3].fields.__9__6->fields.m_target;
  _9__6 = v2->fields.__9__6;
  if ( !_9__6 )
  {
    _9__6 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      _9__6,
      (Il2CppObject *)v2,
      Method_TerminalSceneComponent___c__DisplayClass228_0__PlayAutoExecuteQuest_b__6__,
      0LL);
    v2->fields.__9__6 = _9__6;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v2->fields.__9__6, (int64_t)_9__6, v8, v9, v10, v11, v12, v13);
  }
  if ( !mTerminalList )
LABEL_18:
    sub_1C22094(this, method);
  ScrTerminalListTop__StartWindowMessage_35492084(mTerminalList, invoke_impl, m_target + 1, 2, _9__6, 0, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass228_0___PlayAutoExecuteQuest_b__1(
        TerminalSceneComponent___c__DisplayClass228_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  QuestEntity_o *questEnt; // x0
  struct TerminalSceneComponent_o *_4__this; // x8
  ScrTerminalListTop_o *mTerminalList; // x20
  int32_t name_high; // w21
  int namespaze; // w24
  System_Action_o *_9__2; // x22
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  clsQuestCheck_o *v16; // x19
  TerminalSceneComponent___c_c *v17; // x8
  System_Action_o *_9__228_3; // x20
  Il2CppObject *v19; // x21
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7

  if ( (byte_4BDE716 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&Method_TerminalSceneComponent___c__PlayAutoExecuteQuest_b__228_3__);
    sub_1C21E38(&Method_TerminalSceneComponent___c__DisplayClass228_0__PlayAutoExecuteQuest_b__2__);
    sub_1C21E38(&TerminalSceneComponent___c_TypeInfo);
    byte_4BDE716 = 1;
  }
  questEnt = this->fields.questEnt;
  if ( !questEnt )
    goto LABEL_28;
  questEnt = (QuestEntity_o *)QuestEntity__HasFlag(questEnt, 0x800000000000LL, 0LL);
  if ( ((unsigned __int8)questEnt & 1) != 0 )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      mTerminalList = _4__this->fields.mTerminalList;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BD7264 )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD7264 = 1;
      }
      questEnt = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        questEnt = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
      }
      name_high = HIDWORD(questEnt[1].klass->_1.name);
      if ( !byte_4BD7263 )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        questEnt = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
        byte_4BD7263 = 1;
      }
      if ( !questEnt[1].fields.type )
      {
        j_il2cpp_runtime_class_init_0(questEnt);
        questEnt = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
      }
      namespaze = (int)questEnt[1].klass->_1.namespaze;
      _9__2 = this->fields.__9__2;
      if ( !_9__2 )
      {
        _9__2 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
        System_Action___ctor(
          _9__2,
          (Il2CppObject *)this,
          Method_TerminalSceneComponent___c__DisplayClass228_0__PlayAutoExecuteQuest_b__2__,
          0LL);
        this->fields.__9__2 = _9__2;
        sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v10, v11, v12, v13, v14, v15);
      }
      if ( mTerminalList )
      {
        ScrTerminalListTop__StartWindowMessage_35492084(mTerminalList, name_high, namespaze + 1, 2, _9__2, 1, 0LL);
        return;
      }
    }
LABEL_28:
    sub_1C22094(questEnt, result);
  }
  questEnt = (QuestEntity_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v16 = (clsQuestCheck_o *)questEnt;
  v17 = TerminalSceneComponent___c_TypeInfo;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v17 = TerminalSceneComponent___c_TypeInfo;
  }
  _9__228_3 = v17->static_fields->__9__228_3;
  if ( !_9__228_3 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = TerminalSceneComponent___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v17->static_fields->__9;
    _9__228_3 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(_9__228_3, v19, Method_TerminalSceneComponent___c__PlayAutoExecuteQuest_b__228_3__, 0LL);
    static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    static_fields->__9__228_3 = _9__228_3;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__228_3,
      (int64_t)_9__228_3,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  if ( !v16 )
    goto LABEL_28;
  clsQuestCheck__PlayQuestStartAction(v16, _9__228_3, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass228_0___PlayAutoExecuteQuest_b__2(
        TerminalSceneComponent___c__DisplayClass228_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass228_0_o *v2; // x20
  struct TerminalSceneComponent_o *_4__this; // x8
  struct TerminalSceneComponent_o *v4; // x8
  struct TerminalSceneComponent_o *v5; // x8
  TerminalPramsManager_c *v6; // x0
  int32_t QuestId_k__BackingField; // w21
  TerminalPramsManager_c *v8; // x0
  bool HasFlag; // w0
  TerminalPramsManager_c *v10; // x8
  TerminalPramsManager_c *v11; // x0
  int32_t SpotId; // w21
  struct TerminalSceneComponent_o *v13; // x8
  bool Effect; // w21
  struct TerminalSceneComponent_o *v15; // x8
  ScrTerminalListTop_o *mTerminalList; // x20
  int32_t invoke_impl; // w21

  v2 = this;
  if ( (byte_4BDE717 & 1) == 0 )
  {
    this = (TerminalSceneComponent___c__DisplayClass228_0_o *)sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BDE717 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_60;
  this = (TerminalSceneComponent___c__DisplayClass228_0_o *)_4__this->fields.mTerminalMap;
  if ( !this )
    goto LABEL_60;
  this = (TerminalSceneComponent___c__DisplayClass228_0_o *)ScrTerminalMap__IsAllMaskActive(
                                                              (ScrTerminalMap_o *)this,
                                                              0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v4 = v2->fields.__4__this;
    if ( !v4 )
      goto LABEL_60;
    this = (TerminalSceneComponent___c__DisplayClass228_0_o *)v4->fields.mTerminalMap;
    if ( !this )
      goto LABEL_60;
    ScrTerminalMap__AllMaskEnd((ScrTerminalMap_o *)this, 0LL);
  }
  v5 = v2->fields.__4__this;
  if ( !v5 )
    goto LABEL_60;
  this = (TerminalSceneComponent___c__DisplayClass228_0_o *)v5->fields.mTerminalList;
  if ( !this )
    goto LABEL_60;
  ScrTerminalListTop__IsAllTouchEnable((ScrTerminalListTop_o *)this, 0, 0LL, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD7264 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD7264 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v6->static_fields->_QuestId_k__BackingField;
  if ( !byte_4BD92EA )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
    byte_4BD92EA = 1;
  }
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v6->static_fields->_LastPlayedQuestId_k__BackingField = QuestId_k__BackingField;
  if ( !byte_4BD7264 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
    byte_4BD7264 = 1;
  }
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = TerminalPramsManager_TypeInfo;
  }
  TerminalPramsManager__CheckClearSelectedStoryQuestId(v6->static_fields->_QuestId_k__BackingField, 0LL);
  if ( !byte_4BD7264 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD7264 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  HasFlag = QuestMaster__HasFlag(v8->static_fields->_QuestId_k__BackingField, 0x8000000000LL, 0LL);
  v10 = TerminalPramsManager_TypeInfo;
  if ( HasFlag )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD7264 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD7264 = 1;
    }
    v11 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v11 = TerminalPramsManager_TypeInfo;
    }
    SpotId = QuestMaster__GetSpotId(v11->static_fields->_QuestId_k__BackingField, 0LL);
    if ( !byte_4BD92EB )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD92EB = 1;
    }
    v10 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v10 = TerminalPramsManager_TypeInfo;
    }
    v10->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = SpotId;
  }
  if ( !v10->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v10);
  TerminalPramsManager__PlayQuestSave_SaveData(0LL);
  TerminalPramsManager__Save_SaveData(0LL);
  v13 = v2->fields.__4__this;
  if ( !v13 )
    goto LABEL_60;
  this = (TerminalSceneComponent___c__DisplayClass228_0_o *)v13->fields.mTerminalList;
  if ( !this )
    goto LABEL_60;
  Effect = ScrTerminalListTop__IsDisplayGetEffect((ScrTerminalListTop_o *)this, 0LL);
  if ( !byte_4BD92EC )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD92EC = 1;
  }
  this = (TerminalSceneComponent___c__DisplayClass228_0_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (TerminalSceneComponent___c__DisplayClass228_0_o *)TerminalPramsManager_TypeInfo;
  }
  BYTE2(this[3].fields.__9__6[1].fields.data) = Effect;
  v15 = v2->fields.__4__this;
  if ( !v15 )
    goto LABEL_60;
  mTerminalList = v15->fields.mTerminalList;
  if ( !byte_4BD7264 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    this = (TerminalSceneComponent___c__DisplayClass228_0_o *)TerminalPramsManager_TypeInfo;
    byte_4BD7264 = 1;
  }
  if ( !LODWORD(this[4].fields.__9__2) )
  {
    j_il2cpp_runtime_class_init_0(this);
    this = (TerminalSceneComponent___c__DisplayClass228_0_o *)TerminalPramsManager_TypeInfo;
  }
  invoke_impl = this[3].fields.__9__6->fields.invoke_impl;
  if ( !byte_4BD7263 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    this = (TerminalSceneComponent___c__DisplayClass228_0_o *)TerminalPramsManager_TypeInfo;
    byte_4BD7263 = 1;
  }
  if ( !LODWORD(this[4].fields.__9__2) )
  {
    j_il2cpp_runtime_class_init_0(this);
    this = (TerminalSceneComponent___c__DisplayClass228_0_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !mTerminalList )
LABEL_60:
    sub_1C22094(this, method);
  ScrTerminalListTop__RequestBattleSecnario(
    mTerminalList,
    invoke_impl,
    LODWORD(this[3].fields.__9__6->fields.m_target) + 1,
    0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass228_0___PlayAutoExecuteQuest_b__6(
        TerminalSceneComponent___c__DisplayClass228_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass228_0_o *v2; // x19
  struct TerminalSceneComponent_o *_4__this; // x8
  ScrTerminalListTop_o *mTerminalList; // x20
  int32_t klass_high; // w22
  int32_t invoke_impl; // w23
  struct TerminalSceneComponent_o *v7; // x8

  v2 = this;
  if ( (byte_4BDE719 & 1) == 0 )
  {
    this = (TerminalSceneComponent___c__DisplayClass228_0_o *)sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BDE719 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_22;
  mTerminalList = _4__this->fields.mTerminalList;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9099 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9099 = 1;
  }
  this = (TerminalSceneComponent___c__DisplayClass228_0_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (TerminalSceneComponent___c__DisplayClass228_0_o *)TerminalPramsManager_TypeInfo;
  }
  klass_high = HIDWORD(this[3].fields.__9__6->klass);
  if ( !byte_4BD7264 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    this = (TerminalSceneComponent___c__DisplayClass228_0_o *)TerminalPramsManager_TypeInfo;
    byte_4BD7264 = 1;
  }
  if ( !LODWORD(this[4].fields.__9__2) )
  {
    j_il2cpp_runtime_class_init_0(this);
    this = (TerminalSceneComponent___c__DisplayClass228_0_o *)TerminalPramsManager_TypeInfo;
  }
  invoke_impl = this[3].fields.__9__6->fields.invoke_impl;
  if ( !byte_4BD7263 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    this = (TerminalSceneComponent___c__DisplayClass228_0_o *)TerminalPramsManager_TypeInfo;
    byte_4BD7263 = 1;
  }
  if ( !LODWORD(this[4].fields.__9__2) )
  {
    j_il2cpp_runtime_class_init_0(this);
    this = (TerminalSceneComponent___c__DisplayClass228_0_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !mTerminalList
    || (ScrTerminalListTop__SetBattleSetupInfo(
          mTerminalList,
          klass_high,
          invoke_impl,
          LODWORD(this[3].fields.__9__6->fields.m_target) + 1,
          1,
          0,
          0,
          0LL),
        (v7 = v2->fields.__4__this) == 0LL)
    || (this = (TerminalSceneComponent___c__DisplayClass228_0_o *)v7->fields.mTerminalList) == 0LL )
  {
LABEL_22:
    sub_1C22094(this, method);
  }
  ScrTerminalListTop__StartQuestBeforeFollower((ScrTerminalListTop_o *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass233_0___ctor(
        TerminalSceneComponent___c__DisplayClass233_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass233_0___PlayEventTutorial_b__0(
        TerminalSceneComponent___c__DisplayClass233_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalSceneComponent___c__DisplayClass233_0_o *v3; // x19
  System_Action_o *_9__1; // x22
  TerminalSceneComponent_o *_4__this; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  v3 = this;
  if ( (byte_4BDE71A & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    this = (TerminalSceneComponent___c__DisplayClass233_0_o *)sub_1C21E38(&Method_TerminalSceneComponent___c__DisplayClass233_0__PlayEventTutorial_b__1__);
    byte_4BDE71A = 1;
  }
  _9__1 = v3->fields.__9__1;
  _4__this = v3->fields.__4__this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_TerminalSceneComponent___c__DisplayClass233_0__PlayEventTutorial_b__1__,
      0LL);
    v3->fields.__9__1 = _9__1;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v3->fields.__9__1, (int64_t)_9__1, v6, v7, v8, v9, v10, v11);
  }
  if ( !_4__this )
    sub_1C22094(this, method);
  TerminalSceneComponent__PlayEventTutorialWithoutAfterAction(_4__this, _9__1, v2);
}


void __fastcall TerminalSceneComponent___c__DisplayClass233_0___PlayEventTutorial_b__1(
        TerminalSceneComponent___c__DisplayClass233_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_o *_4__this; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  TerminalSceneComponent___c__DisplayClass233_0_o *v4; // x19

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (mTerminalList = _4__this->fields.mTerminalList) == 0LL
    || (v4 = this, (this = (TerminalSceneComponent___c__DisplayClass233_0_o *)mTerminalList->fields.mActionBgColl) == 0LL)
    || (this = (TerminalSceneComponent___c__DisplayClass233_0_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)this,
                                                                    0LL)) == 0LL )
  {
    sub_1C22094(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  ActionExtensions__Call(v4->fields.callbackAfter, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass251_0___ctor(
        TerminalSceneComponent___c__DisplayClass251_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass251_0___CheckRewardPopupChain_b__0(
        TerminalSceneComponent___c__DisplayClass251_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  ScrTerminalListTop_o *Instance; // x0
  __int64 v6; // x1
  struct TerminalSceneComponent_o *_4__this; // x8
  CommonUI_o *v8; // x21
  struct TerminalSceneComponent_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_4BDE71B & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_DialogMessageMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDE71B = 1;
  }
  Instance = (ScrTerminalListTop_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  v8 = (CommonUI_o *)Instance;
  Instance = _4__this->fields.mTerminalList;
  if ( !Instance )
    goto LABEL_11;
  Instance = (ScrTerminalListTop_o *)ScrTerminalListTop__PopEventSvtGets(Instance, 0LL);
  if ( !v8
    || (CommonUI__SetupLoginResultData(v8, (System_Int32_array *)Instance, 0LL),
        v9 = this->fields.__4__this,
        (Instance = (ScrTerminalListTop_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (Instance = (ScrTerminalListTop_o *)CommonUI__get_CampaignDirectBonus((CommonUI_o *)Instance, 0LL), !v9)
    || (TerminalSceneComponent__SaveCampaignDirectBonusData(
          (TerminalSceneComponent_o *)Instance,
          (CommonUI_CampaignDirectBonusData_array *)Instance,
          v10),
        (Instance = (ScrTerminalListTop_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (ScrTerminalListTop_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_DialogMessageMaster___)) == 0LL )
  {
LABEL_11:
    sub_1C22094(Instance, v6);
  }
  DialogMessageMaster__ShowAvailables((DialogMessageMaster_o *)Instance, 1, action, 0, 0, 0, 0, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass251_0___CheckRewardPopupChain_b__1(
        TerminalSceneComponent___c__DisplayClass251_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  System_Action_o *_9__5; // x22
  CommonUI_o *v8; // x21
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4BDE71C & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_TerminalSceneComponent___c__DisplayClass251_0__CheckRewardPopupChain_b__5__);
    byte_4BDE71C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__5 = this->fields.__9__5;
  v8 = (CommonUI_o *)Instance;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent___c__DisplayClass251_0__CheckRewardPopupChain_b__5__,
      0LL);
    this->fields.__9__5 = _9__5;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.__9__5, (int64_t)_9__5, v9, v10, v11, v12, v13, v14);
  }
  if ( !v8 )
    sub_1C22094(Instance, v6);
  CommonUI__StartLoginAndCampaignBonus(v8, action, _9__5, -1, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass251_0___CheckRewardPopupChain_b__3(
        TerminalSceneComponent___c__DisplayClass251_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (this = (TerminalSceneComponent___c__DisplayClass251_0_o *)_4__this->fields.mTerminalList) == 0LL )
    sub_1C22094(this, action);
  ScrTerminalListTop__CheckLoginAfterTransitionDialog((ScrTerminalListTop_o *)this, action, 100, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass251_0___CheckRewardPopupChain_b__4(
        TerminalSceneComponent___c__DisplayClass251_0_o *this,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  TerminalPramsManager_c *v4; // x0
  int32_t EventID; // w20
  void *Master_object; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  TerminalPramsManager_c *v9; // x0
  TerminalSceneComponent_o *_4__this; // x20
  System_Action_o *v11; // x21
  Il2CppObject *v12; // x22
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BDE71D & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&Method_TerminalSceneComponent___c__CheckRewardPopupChain_b__251_6__);
    sub_1C21E38(&TerminalSceneComponent___c_TypeInfo);
    byte_4BDE71D = 1;
  }
  entity = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9099 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9099 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  if ( v3->static_fields->_WarId_k__BackingField < 1 )
  {
    EventID = -1;
  }
  else
  {
    if ( !v3->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v3);
    if ( !byte_4BD9099 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD9099 = 1;
    }
    v4 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v4 = TerminalPramsManager_TypeInfo;
    }
    EventID = WarMaster__getEventID(v4->static_fields->_WarId_k__BackingField, 0LL);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !Master_object )
    goto LABEL_39;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
    &entity,
    EventID,
    (const MethodInfo_325BE14 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9279 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9279 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  if ( v9->static_fields->_SpotId_k__BackingField < 1
    || !entity
    || !EventDetailEntity__IsMakeFarm((EventDetailEntity_o *)entity, 0LL) )
  {
    _4__this = this->fields.__4__this;
    Master_object = TerminalSceneComponent___c_TypeInfo;
    if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
      Master_object = TerminalSceneComponent___c_TypeInfo;
    }
    v11 = *(System_Action_o **)(*((_QWORD *)Master_object + 23) + 120LL);
    if ( !v11 )
    {
      if ( !*((_DWORD *)Master_object + 56) )
      {
        j_il2cpp_runtime_class_init_0(Master_object);
        Master_object = TerminalSceneComponent___c_TypeInfo;
      }
      v12 = (Il2CppObject *)**((_QWORD **)Master_object + 23);
      v11 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(v11, v12, Method_TerminalSceneComponent___c__CheckRewardPopupChain_b__251_6__, 0LL);
      static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
      static_fields->__9__251_6 = v11;
      sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__251_6, (int64_t)v11, v14, v15, v16, v17, v18, v19);
    }
    if ( _4__this )
    {
      TerminalSceneComponent__CheckOpenCampaignDirectBonus(_4__this, v11, v8);
      goto LABEL_38;
    }
LABEL_39:
    sub_1C22094(Master_object, v7);
  }
LABEL_38:
  ActionExtensions__Call(this->fields.afterChain, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass251_0___CheckRewardPopupChain_b__5(
        TerminalSceneComponent___c__DisplayClass251_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (this = (TerminalSceneComponent___c__DisplayClass251_0_o *)_4__this->fields.mPlayerStatus) == 0LL )
    sub_1C22094(this, method);
  ScrPlayerStatus__mfInitUserData((ScrPlayerStatus_o *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass253_0___ctor(
        TerminalSceneComponent___c__DisplayClass253_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass253_0___CheckOpenCampaignDirectBonus_b__2(
        TerminalSceneComponent___c__DisplayClass253_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  TerminalSceneComponent___c__DisplayClass253_0_o *v8; // x19
  struct TerminalSceneComponent_o *_4__this; // x8
  TerminalPramsManager_c *v10; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  v8 = this;
  if ( (byte_4BDE71E & 1) == 0 )
  {
    this = (TerminalSceneComponent___c__DisplayClass253_0_o *)sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BDE71E = 1;
  }
  _4__this = v8->fields.__4__this;
  if ( !_4__this )
    sub_1C22094(this, action);
  _4__this->fields._IsPlayingCampaignDirectBonus_k__BackingField = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9AEE )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9AEE = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v10->static_fields;
  static_fields->_CampaignDirectBonus_k__BackingField = 0LL;
  sub_1C21DDC(
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


void __fastcall TerminalSceneComponent___c__DisplayClass260_0___ctor(
        TerminalSceneComponent___c__DisplayClass260_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass260_0___CheckSaveRouteSelect_b__0(
        TerminalSceneComponent___c__DisplayClass260_0_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  if ( (byte_4BDE71F & 1) == 0 )
  {
    sub_1C21E38(&ScriptManager_TypeInfo);
    byte_4BDE71F = 1;
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__ClearSelectRouteArray(0LL);
  ScriptManager__ClearSelectRouteArrayInCollection(0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass262_0___ctor(
        TerminalSceneComponent___c__DisplayClass262_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass262_0___CheckMasterMissionReset_b__0(
        TerminalSceneComponent___c__DisplayClass262_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  TerminalSceneComponent_c *v14; // x0
  System_String_o *MASTER_MISSION_RESET_KEY; // x21
  System_String_o *v16; // x0
  Il2CppObject *Instance; // x19
  System_Action_o *v18; // x21

  if ( (byte_4BDE720 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    sub_1C21E38(&Method_TerminalSceneComponent___c__DisplayClass262_1__CheckMasterMissionReset_b__1__);
    sub_1C21E38(&TerminalSceneComponent___c__DisplayClass262_1_TypeInfo);
    byte_4BDE720 = 1;
  }
  v5 = sub_1C22084(TerminalSceneComponent___c__DisplayClass262_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 24) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 24), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_BYTE *)(v5 + 16) = isDecide;
  v14 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v14 = TerminalSceneComponent_TypeInfo;
  }
  MASTER_MISSION_RESET_KEY = v14->static_fields->MASTER_MISSION_RESET_KEY;
  v16 = System_Int64__ToString((int64_t)&this->fields, 0LL);
  UnityEngine_PlayerPrefs__SetString(MASTER_MISSION_RESET_KEY, v16, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v18 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    (Il2CppObject *)v5,
    Method_TerminalSceneComponent___c__DisplayClass262_1__CheckMasterMissionReset_b__1__,
    0LL);
  if ( !Instance )
LABEL_8:
    sub_1C22094(v6, v7);
  CommonUI__CloseConfirmDialog_31128756((CommonUI_o *)Instance, v18, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass262_0___CheckMasterMissionReset_b__2(
        TerminalSceneComponent___c__DisplayClass262_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_o *_4__this; // x8
  ScrPlayerStatus_o *mPlayerStatus; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (mPlayerStatus = _4__this->fields.mPlayerStatus) == 0LL )
    sub_1C22094(this, method);
  ScrPlayerStatus__OpenMasterMission(mPlayerStatus, this->fields.callback, -1, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass262_1___ctor(
        TerminalSceneComponent___c__DisplayClass262_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass262_1___CheckMasterMissionReset_b__1(
        TerminalSceneComponent___c__DisplayClass262_1_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass262_1_o *v2; // x20
  AvalonSceneManager_c *v3; // x8
  CommonUI_o *v4; // x19
  struct TerminalSceneComponent___c__DisplayClass262_0_o *CS___8__locals1; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__2; // x21
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct TerminalSceneComponent___c__DisplayClass262_0_o *v14; // x8

  v2 = this;
  if ( (byte_4BDE721 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (TerminalSceneComponent___c__DisplayClass262_1_o *)sub_1C21E38(&Method_TerminalSceneComponent___c__DisplayClass262_0__CheckMasterMissionReset_b__2__);
    byte_4BDE721 = 1;
  }
  if ( v2->fields.isDecide )
  {
    this = (TerminalSceneComponent___c__DisplayClass262_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v3 = AvalonSceneManager_TypeInfo;
    v4 = (CommonUI_o *)this;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v3 = AvalonSceneManager_TypeInfo;
    }
    CS___8__locals1 = v2->fields.CS___8__locals1;
    if ( CS___8__locals1 )
    {
      DEFAULT_FADE_TIME = v3->static_fields->DEFAULT_FADE_TIME;
      _9__2 = CS___8__locals1->fields.__9__2;
      if ( !_9__2 )
      {
        _9__2 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
        System_Action___ctor(
          _9__2,
          (Il2CppObject *)CS___8__locals1,
          Method_TerminalSceneComponent___c__DisplayClass262_0__CheckMasterMissionReset_b__2__,
          0LL);
        CS___8__locals1->fields.__9__2 = _9__2;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&CS___8__locals1->fields.__9__2,
          (int64_t)_9__2,
          v8,
          v9,
          v10,
          v11,
          v12,
          v13);
      }
      if ( v4 )
      {
        CommonUI__maskFadeout(v4, 1, DEFAULT_FADE_TIME, _9__2, 0LL);
        return;
      }
    }
LABEL_13:
    sub_1C22094(this, method);
  }
  v14 = v2->fields.CS___8__locals1;
  if ( !v14 )
    goto LABEL_13;
  ActionExtensions__Call(v14->fields.callback, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass263_0___ctor(
        TerminalSceneComponent___c__DisplayClass263_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass263_0___CheckNotificationDialog_b__0(
        TerminalSceneComponent___c__DisplayClass263_0_o *this,
        const MethodInfo *method)
{
  BattleResultBondsComponent_c *v3; // x0

  if ( (byte_4BDE722 & 1) == 0 )
  {
    sub_1C21E38(&BattleResultBondsComponent_TypeInfo);
    byte_4BDE722 = 1;
  }
  v3 = BattleResultBondsComponent_TypeInfo;
  if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
    v3 = BattleResultBondsComponent_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v3->static_fields->GET_EXIST_SVT_KEY, 0LL);
  ActionExtensions__Call(this->fields.callBack, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass263_0___CheckNotificationDialog_b__2(
        TerminalSceneComponent___c__DisplayClass263_0_o *this,
        const MethodInfo *method)
{
  BattleResultBondsComponent_c *v3; // x0

  if ( (byte_4BDE723 & 1) == 0 )
  {
    sub_1C21E38(&BattleResultBondsComponent_TypeInfo);
    byte_4BDE723 = 1;
  }
  v3 = BattleResultBondsComponent_TypeInfo;
  if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
    v3 = BattleResultBondsComponent_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v3->static_fields->GET_EXIST_SVT_KEY, 0LL);
  ActionExtensions__Call(this->fields.callBack, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass263_1___ctor(
        TerminalSceneComponent___c__DisplayClass263_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass263_1___CheckNotificationDialog_b__1(
        TerminalSceneComponent___c__DisplayClass263_1_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct TerminalSceneComponent___c__DisplayClass263_0_o *CS___8__locals1; // x21
  GetSvtCoin_array *coin; // x20
  System_Action_o *_9__2; // x22
  CommonUI_o *v8; // x19
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4BDE724 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_TerminalSceneComponent___c__DisplayClass263_0__CheckNotificationDialog_b__2__);
    byte_4BDE724 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  coin = this->fields.coin;
  _9__2 = CS___8__locals1->fields.__9__2;
  v8 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)CS___8__locals1,
      Method_TerminalSceneComponent___c__DisplayClass263_0__CheckNotificationDialog_b__2__,
      0LL);
    CS___8__locals1->fields.__9__2 = _9__2;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&CS___8__locals1->fields.__9__2,
      (int64_t)_9__2,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  if ( !v8 )
LABEL_8:
    sub_1C22094(Instance, v4);
  CommonUI__CreateServantCoinConfirmDialog(v8, 1, coin, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent__coFadein_WorldDisp_d__195___ctor(
        TerminalSceneComponent__coFadein_WorldDisp_d__195_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall TerminalSceneComponent__coFadein_WorldDisp_d__195__MoveNext(
        TerminalSceneComponent__coFadein_WorldDisp_d__195_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent__coFadein_WorldDisp_d__195_o *v2; // x19
  int32_t _1__state; // w8
  struct TerminalSceneComponent_o *_4__this; // x20
  Il2CppObject *v5; // x22
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  Il2CppObject *endAct; // x1
  TerminalPramsManager_c *v26; // x0
  _BOOL8 IsBusy; // x0
  const MethodInfo *v28; // x1
  System_Collections_IEnumerator_o *v29; // x0
  System_Action_c *klass; // x8
  __int64 v31; // x8
  TerminalPramsManager_c *v32; // x0
  System_Collections_IEnumerator_o *v33; // x0
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  bool result; // w0
  Il2CppObject *Master_object; // x21
  System_String_o *ShowingFolderBGM; // x0
  const MethodInfo *v44; // x2
  const MethodInfo *v45; // x3
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v47; // x8
  Il2CppObject *v48; // x21
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v50; // x0
  __int64 *v51; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct ScrTerminalListTop_o *v53; // x8
  Il2CppObject *_8__1; // x19
  System_Action_o *v55; // x21
  const MethodInfo *v56; // x2
  AvalonSceneManager_c *v57; // x8
  System_Action_o *v58; // x19
  struct TerminalSceneComponent___c__DisplayClass195_0_o *v59; // x9
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  v2 = this;
  if ( (byte_4BDE729 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C21E38(&System_GC_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_RewardMiniPopupExecutor__get_Instance__);
    sub_1C21E38(&SoundManager_TypeInfo);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    sub_1C21E38(&Method_TerminalSceneComponent___c__DisplayClass195_0__coFadein_WorldDisp_b__0__);
    sub_1C21E38(&Method_TerminalSceneComponent___c__DisplayClass195_0__coFadein_WorldDisp_b__1__);
    sub_1C21E38(&Method_TerminalSceneComponent___c__DisplayClass195_0__coFadein_WorldDisp_b__2__);
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__195_o *)sub_1C21E38(&TerminalSceneComponent___c__DisplayClass195_0_TypeInfo);
    byte_4BDE729 = 1;
  }
  entity = 0LL;
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v2->fields.__1__state = -1;
    v5 = (Il2CppObject *)sub_1C22084(TerminalSceneComponent___c__DisplayClass195_0_TypeInfo);
    System_Object___ctor(v5, 0LL);
    v2->fields.__8__1 = (struct TerminalSceneComponent___c__DisplayClass195_0_o *)v5;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v2->fields.__8__1, (int64_t)v5, v6, v7, v8, v9, v10, v11);
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__195_o *)v2->fields.__8__1;
    if ( !this )
      goto LABEL_108;
    v18 = (int64_t)v2->fields.__4__this;
    *(_QWORD *)&this->fields.__1__state = v18;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, v18, v12, v13, v14, v15, v16, v17);
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__195_o *)v2->fields.__8__1;
    if ( !this )
      goto LABEL_108;
    endAct = (Il2CppObject *)v2->fields.endAct;
    this->fields.__2__current = endAct;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.__2__current, (int64_t)endAct, v19, v20, v21, v22, v23, v24);
    v2->fields._isAuto_5__2 = 0;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD966B )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD966B = 1;
    }
    v26 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v26 = TerminalPramsManager_TypeInfo;
    }
    if ( !v26->static_fields->_IsMapReturnFolder_k__BackingField )
    {
      if ( !v26->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v26);
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__195_o *)TerminalPramsManager__IsAuto(0LL);
      v2->fields._isAuto_5__2 = (unsigned __int8)this & 1;
      if ( !_4__this )
        goto LABEL_108;
      TerminalSceneComponent__EndAuto(_4__this, method);
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__195_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_RewardMiniPopupExecutor__get_Instance__);
      if ( !this )
        goto LABEL_108;
      IsBusy = RewardMiniPopupExecutor__IsBusy((RewardMiniPopupExecutor_o *)this, 0LL);
      if ( IsBusy )
      {
        v29 = TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect((TerminalSceneComponent_o *)IsBusy, v28);
        UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)_4__this, v29, 0LL);
      }
      else
      {
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        SoundManager__stopSe(0.0, 0LL);
      }
    }
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD82DB )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD82DB = 1;
    }
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__195_o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__195_o *)TerminalPramsManager_TypeInfo;
    }
    if ( HIBYTE(this[2].fields.endAct[1].klass) )
    {
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4BD7183 )
      {
        sub_1C21E38(&TerminalSceneComponent_TypeInfo);
        byte_4BD7183 = 1;
      }
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__195_o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        this = (TerminalSceneComponent__coFadein_WorldDisp_d__195_o *)TerminalSceneComponent_TypeInfo;
      }
      klass = this[2].fields.endAct->klass;
      if ( !klass )
        goto LABEL_108;
      v31 = *(_QWORD *)&klass->_2.thread_static_fields_offset;
      if ( !v31 )
        goto LABEL_108;
      this = *(TerminalSceneComponent__coFadein_WorldDisp_d__195_o **)(v31 + 552);
      if ( !this )
        goto LABEL_108;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    }
    if ( !_4__this )
      goto LABEL_108;
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__195_o *)_4__this->fields.mTerminalMap;
    if ( !this )
      goto LABEL_108;
    ScrTerminalMap__SetDisp((ScrTerminalMap_o *)this, 0, 0LL);
    if ( _4__this->fields._IsReq_InitEarthRotateY_k__BackingField )
    {
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__195_o *)_4__this->fields.mEarthCore;
      _4__this->fields._IsReq_InitEarthRotateY_k__BackingField = 0;
      if ( !this )
        goto LABEL_108;
      BaseCore__SetRotateY_PointInitAngle((BaseCore_o *)this, 0LL);
    }
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__195_o *)_4__this->fields.mTerminalList;
    if ( !this )
      goto LABEL_108;
    if ( !ScrTerminalListTop__isShowingFolder((ScrTerminalListTop_o *)this, 0LL) )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BD909C )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD909C = 1;
      }
      v32 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v32 = TerminalPramsManager_TypeInfo;
      }
      v32->static_fields->_DispState_k__BackingField = 1;
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__195_o *)_4__this->fields.mTitleInfo;
      if ( !this )
        goto LABEL_108;
      TitleInfoControl__SetActiveEventInfo_38378836((TitleInfoControl_o *)this, 1, 16, 0, 0, 0LL, 0LL);
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__195_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_108;
      CommonUI__CheckChangeOtherConnectMarkFromEventId((CommonUI_o *)this, 0, 1, 0LL);
    }
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__195_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this )
      goto LABEL_108;
    CommonUI__SetBgCameraActive((CommonUI_o *)this, 1, 0LL);
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__195_o *)_4__this->fields.mTerminalMap;
    if ( !this )
      goto LABEL_108;
    ScrTerminalMap__ReleaseMap((ScrTerminalMap_o *)this, 1, 0LL);
    if ( !System_GC_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
    System_GC__Collect_64162132(0LL);
    if ( v2->fields.isExecuteUnusedAssets )
    {
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__195_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( this )
      {
        AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)this, 0LL, 0LL);
        this = (TerminalSceneComponent__coFadein_WorldDisp_d__195_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( this )
        {
          v33 = AssetManager__WaitForExecutionUnloadUnuseAssets((AssetManager_o *)this, 0LL);
          v2->fields.__2__current = (Il2CppObject *)v33;
          p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
          sub_1C21DDC(p__2__current, (int64_t)v33, v35, v36, v37, v38, v39, v40);
          result = 1;
          *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
          return result;
        }
      }
      goto LABEL_108;
    }
  }
  if ( !v2->fields._isAuto_5__2 )
  {
    if ( !_4__this )
      goto LABEL_108;
    goto LABEL_91;
  }
  if ( !_4__this )
    goto LABEL_108;
  this = (TerminalSceneComponent__coFadein_WorldDisp_d__195_o *)_4__this->fields.mTerminalList;
  if ( !this )
    goto LABEL_108;
  if ( !ScrTerminalListTop__isShowingFolder((ScrTerminalListTop_o *)this, 0LL) )
    goto LABEL_91;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9099 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9099 = 1;
  }
  this = (TerminalSceneComponent__coFadein_WorldDisp_d__195_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__195_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_108;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          HIDWORD(this[2].fields.endAct->klass),
          (const MethodInfo_325BE14 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
  {
LABEL_91:
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__195_o *)_4__this->fields.mTerminalList;
    if ( !this )
      goto LABEL_108;
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__195_o *)ScrTerminalListTop__get_IsActiveBlankEarth(
                                                                    (ScrTerminalListTop_o *)this,
                                                                    0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      mTerminalList = _4__this->fields.mTerminalList;
      if ( !mTerminalList )
        goto LABEL_108;
      if ( !mTerminalList->fields.isBackFromBlankEarthMap )
        TerminalSceneComponent__playDefaultBgm(_4__this, method);
    }
    v53 = _4__this->fields.mTerminalList;
    if ( v53 )
    {
      if ( v53->fields.isBackFromBlankEarthMap )
      {
        _8__1 = (Il2CppObject *)v2->fields.__8__1;
        v55 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
        System_Action___ctor(
          v55,
          _8__1,
          Method_TerminalSceneComponent___c__DisplayClass195_0__coFadein_WorldDisp_b__1__,
          0LL);
        TerminalSceneComponent__StartWindowMessage(_4__this, v55, v56);
        return 0;
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v57 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v57 = AvalonSceneManager_TypeInfo;
      }
      v48 = (Il2CppObject *)v2->fields.__8__1;
      DEFAULT_FADE_TIME = v57->static_fields->DEFAULT_FADE_TIME;
      v50 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      v51 = &Method_TerminalSceneComponent___c__DisplayClass195_0__coFadein_WorldDisp_b__2__;
      goto LABEL_102;
    }
LABEL_108:
    sub_1C22094(this, method);
  }
  this = (TerminalSceneComponent__coFadein_WorldDisp_d__195_o *)_4__this->fields.mTerminalList;
  if ( !this )
    goto LABEL_108;
  ShowingFolderBGM = ScrTerminalListTop__GetShowingFolderBGM((ScrTerminalListTop_o *)this, 0LL);
  TerminalSceneComponent__playBgm(_4__this, ShowingFolderBGM, v44);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD82DB )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD82DB = 1;
  }
  this = (TerminalSceneComponent__coFadein_WorldDisp_d__195_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__195_o *)TerminalPramsManager_TypeInfo;
  }
  if ( HIBYTE(this[2].fields.endAct[1].klass) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v47 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v47 = AvalonSceneManager_TypeInfo;
    }
    v48 = (Il2CppObject *)v2->fields.__8__1;
    DEFAULT_FADE_TIME = v47->static_fields->DEFAULT_FADE_TIME;
    v50 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    v51 = &Method_TerminalSceneComponent___c__DisplayClass195_0__coFadein_WorldDisp_b__0__;
LABEL_102:
    v58 = v50;
    System_Action___ctor(v50, v48, *v51, 0LL);
    if ( !Instance )
      goto LABEL_108;
    CommonUI__maskFadein((CommonUI_o *)Instance, DEFAULT_FADE_TIME, v58, 0LL);
    return 0;
  }
  if ( !entity )
    goto LABEL_108;
  v59 = v2->fields.__8__1;
  if ( !v59 )
    goto LABEL_108;
  TerminalSceneComponent__FadeInAndTriggerEventEffects(
    _4__this,
    v2->fields.fadeTime,
    (int32_t)entity[6].klass,
    v59->fields.endAct,
    v45);
  return 0;
}


Il2CppObject *__fastcall TerminalSceneComponent__coFadein_WorldDisp_d__195__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TerminalSceneComponent__coFadein_WorldDisp_d__195_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn TerminalSceneComponent__coFadein_WorldDisp_d__195__System_Collections_IEnumerator_Reset(
        TerminalSceneComponent__coFadein_WorldDisp_d__195_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_TerminalSceneComponent__coFadein_WorldDisp_d__195_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall TerminalSceneComponent__coFadein_WorldDisp_d__195__System_Collections_IEnumerator_get_Current(
        TerminalSceneComponent__coFadein_WorldDisp_d__195_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall TerminalSceneComponent__coFadein_WorldDisp_d__195__System_IDisposable_Dispose(
        TerminalSceneComponent__coFadein_WorldDisp_d__195_o *this,
        const MethodInfo *method)
{
  ;
}