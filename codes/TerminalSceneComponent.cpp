void __fastcall TerminalSceneComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  TerminalSceneComponent_c *v9; // x8
  int32_t v10; // w1
  struct TerminalSceneComponent_StaticFields *static_fields; // x0
  int32_t v12; // w1
  struct TerminalSceneComponent_StaticFields *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w1
  struct TerminalSceneComponent_StaticFields *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w1
  struct TerminalSceneComponent_StaticFields *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w1
  struct TerminalSceneComponent_StaticFields *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3

  if ( (byte_4B46D81 & 1) == 0 )
  {
    sub_1BDB878(&TerminalSceneComponent_TypeInfo, v1);
    sub_1BDB878(&StringLiteral_10080/*"OverwriteCommonBG2"*/, v4);
    sub_1BDB878(&StringLiteral_10079/*"OverwriteCommonBG1"*/, v5);
    sub_1BDB878(&StringLiteral_21471/*"masterMissionResetKey"*/, v6);
    sub_1BDB878(&StringLiteral_13652/*"Terminal/EarthCore/{0:D2}"*/, v7);
    sub_1BDB878(&StringLiteral_10058/*"OrdealCallChapterPlayState"*/, v8);
    byte_4B46D81 = 1;
  }
  v9 = TerminalSceneComponent_TypeInfo;
  TerminalSceneComponent_TypeInfo->static_fields->DEFAULT_AMBIENT_LIGHT_COLOR = (struct UnityEngine_Color_o)xmmword_BEBB20;
  v10 = StringLiteral_21471/*"masterMissionResetKey"*/;
  static_fields = v9->static_fields;
  static_fields->MASTER_MISSION_RESET_KEY = (struct System_String_o *)StringLiteral_21471/*"masterMissionResetKey"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->MASTER_MISSION_RESET_KEY, v10, v2, v3);
  v12 = StringLiteral_13652/*"Terminal/EarthCore/{0:D2}"*/;
  v13 = TerminalSceneComponent_TypeInfo->static_fields;
  v13->EARTH_ASSET_NAME = (struct System_String_o *)StringLiteral_13652/*"Terminal/EarthCore/{0:D2}"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&v13->EARTH_ASSET_NAME, v12, v14, v15);
  v16 = StringLiteral_10058/*"OrdealCallChapterPlayState"*/;
  v17 = TerminalSceneComponent_TypeInfo->static_fields;
  v17->ORDEAL_CALL_CHAPTER_PLAY_STATE_KEY = (struct System_String_o *)StringLiteral_10058/*"OrdealCallChapterPlayState"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&v17->ORDEAL_CALL_CHAPTER_PLAY_STATE_KEY, v16, v18, v19);
  v20 = StringLiteral_10079/*"OverwriteCommonBG1"*/;
  v21 = TerminalSceneComponent_TypeInfo->static_fields;
  v21->OVERWRITE_COMMON_BG_TYPE1_KEY = (struct System_String_o *)StringLiteral_10079/*"OverwriteCommonBG1"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&v21->OVERWRITE_COMMON_BG_TYPE1_KEY, v20, v22, v23);
  v24 = StringLiteral_10080/*"OverwriteCommonBG2"*/;
  v25 = TerminalSceneComponent_TypeInfo->static_fields;
  v25->OVERWRITE_COMMON_BG_TYPE2_KEY = (struct System_String_o *)StringLiteral_10080/*"OverwriteCommonBG2"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&v25->OVERWRITE_COMMON_BG_TYPE2_KEY, v24, v26, v27);
  *(_WORD *)&TerminalSceneComponent_TypeInfo->static_fields->isTitleToTerminalTransition = 0;
}


void __fastcall TerminalSceneComponent___ctor(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  this->fields.TUTORIAL_SPOT_ARROW_POS = (struct UnityEngine_Vector2_o)3263954944LL;
  this->fields.TUTORIAL_SPOT_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_BEC010;
  *(_OWORD *)&this->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.x = xmmword_BEBD40;
  this->fields.TUTORIAL_QUEST_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_BEAE60;
  *(_OWORD *)&this->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.x = xmmword_BEBD50;
  this->fields.TUTORIAL_MENU_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_BEC0C0;
  *(_OWORD *)&this->fields.TUTORIAL_MENU_MESSAGE_POS.fields.x = xmmword_BEA850;
  this->fields.TUTORIAL_GACHA_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_BEAFA0;
  this->fields.TUTORIAL_MENU_ARROW_POS2 = (struct UnityEngine_Vector2_o)0xC366000043DB0000LL;
  this->fields.TUTORIAL_COMBINE_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_BEB2D0;
  this->fields.TUTORIAL_COMBINE_ARROW_POS = (struct UnityEngine_Vector2_o)0xC3200000C3058000LL;
  this->fields.isTopLoginBusy = 1;
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall TerminalSceneComponent__Awake(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  TerminalSceneComponent_c *v6; // x0
  UnityEngine_GameObject_o *UiFlag; // x0
  __int64 v8; // x1
  bool v9; // w1

  if ( (byte_4B46D33 & 1) == 0 )
  {
    sub_1BDB878(&ServantCommentManager_TypeInfo, method);
    sub_1BDB878(&TerminalSceneComponent_TypeInfo, v5);
    byte_4B46D33 = 1;
  }
  v6 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v6 = TerminalSceneComponent_TypeInfo;
  }
  v6->static_fields->mInstance = this;
  sub_1BDB81C((CGThumbnailListItem_o *)TerminalSceneComponent_TypeInfo->static_fields, (int32_t)this, v2, v3);
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
        v9 = 1;
        goto LABEL_15;
      }
    }
LABEL_16:
    sub_1BDBAD4(UiFlag, v8);
  }
  UnityEngine_GameObject__SetActive(this->fields.mBgText, 0, 0LL);
  UiFlag = this->fields.mBgGradLeft;
  if ( !UiFlag )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(UiFlag, 0, 0LL);
  UiFlag = this->fields.mBgGradRight;
  if ( !UiFlag )
    goto LABEL_16;
  v9 = 0;
LABEL_15:
  UnityEngine_GameObject__SetActive(UiFlag, v9, 0LL);
}


void __fastcall TerminalSceneComponent__CallAfterTopHome(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( this->fields.isTopLoginBusy )
  {
    this->fields.afterTopLogin = callback;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.afterTopLogin, (int32_t)callback, (int32_t)method, v3);
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
    sub_1BDBAD4(0LL, item);
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
    sub_1BDBAD4(0LL, questId);
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
    sub_1BDBAD4(this, item);
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
    sub_1BDBAD4(this, method);
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
    sub_1BDBAD4(this, isPlaySe);
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
  __int64 v4; // x1
  __int64 v5; // x1
  EventTutorialMaster_EventTutorialArgs_o *v6; // x20
  System_Collections_ICollection_o *IsNullOrEmpty; // x0
  __int64 v8; // x1
  __int64 v9; // x21
  EventTutorialEntity_array *AvailableTutorialArray; // x19
  __int64 v11; // x2
  int max_length; // w8
  System_Collections_ICollection_o *v13; // x20
  unsigned int v14; // w21
  EventTutorialEntity_o *v15; // x24
  struct EventTutorialEntity_TextTuto_array *textJson; // x8
  EventTutorialEntity_TextTuto_o *v17; // x8
  struct EventTutorialEntity_TextTuto_array *v18; // x8
  EventTutorialEntity_TextTuto_o *v19; // x8
  System_Collections_ICollection_o *v20; // x8
  int klass; // w25
  struct EventTutorialEntity_TextTuto_array *v22; // x8
  EventTutorialEntity_TextTuto_o *v23; // x8

  if ( (byte_4B46D80 & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, *(_QWORD *)&openType);
    sub_1BDB878(&EventTutorialMaster_EventTutorialArgs_TypeInfo, v4);
    sub_1BDB878(&Method_SingletonTemplate_QuestTree__get_Instance__, v5);
    byte_4B46D80 = 1;
  }
  v6 = (EventTutorialMaster_EventTutorialArgs_o *)sub_1BDBAC4(EventTutorialMaster_EventTutorialArgs_TypeInfo);
  EventTutorialMaster_EventTutorialArgs___ctor(v6, 0LL);
  if ( !v6
    || (v6->fields.eventId = 0,
        v6->fields.openKind = openType,
        v9 = sub_1BDBAC4(EventTutorialMaster_EventTutorialArgs_TypeInfo),
        EventTutorialMaster_EventTutorialArgs___ctor((EventTutorialMaster_EventTutorialArgs_o *)v9, 0LL),
        !v9)
    || (*(_QWORD *)(v9 + 16) = 0x5300000000LL,
        AvailableTutorialArray = EventTutorialMaster__GetAvailableTutorialArray(v6, 0LL),
        IsNullOrEmpty = (System_Collections_ICollection_o *)EventTutorialMaster__GetAvailableTutorialArray(
                                                              (EventTutorialMaster_EventTutorialArgs_o *)v9,
                                                              0LL),
        !AvailableTutorialArray) )
  {
LABEL_31:
    sub_1BDBAD4(IsNullOrEmpty, v8);
  }
  max_length = AvailableTutorialArray->max_length;
  if ( max_length >= 1 )
  {
    v13 = IsNullOrEmpty;
    v14 = 0;
    while ( v14 < max_length )
    {
      v15 = AvailableTutorialArray->m_Items[v14];
      if ( !v15 )
        goto LABEL_31;
      IsNullOrEmpty = (System_Collections_ICollection_o *)BasicHelper__IsNullOrEmpty(
                                                            (System_Collections_ICollection_o *)v15->fields.textJson,
                                                            0LL);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        textJson = v15->fields.textJson;
        if ( !textJson )
          goto LABEL_31;
        if ( !textJson->max_length )
          break;
        v17 = textJson->m_Items[0];
        if ( !v17 )
          goto LABEL_31;
        if ( v17->fields.isQuestRelease )
        {
          IsNullOrEmpty = (System_Collections_ICollection_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
          if ( IsNullOrEmpty )
          {
            IsNullOrEmpty = (System_Collections_ICollection_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
            v18 = v15->fields.textJson;
            if ( !v18 )
              goto LABEL_31;
            if ( !v18->max_length )
              break;
            v19 = v18->m_Items[0];
            if ( !v19 || !IsNullOrEmpty )
              goto LABEL_31;
            IsNullOrEmpty = (System_Collections_ICollection_o *)QuestTree__GetQuestInfo(
                                                                  (QuestTree_o *)IsNullOrEmpty,
                                                                  v19->fields.questId,
                                                                  0LL);
            if ( IsNullOrEmpty )
            {
              v20 = IsNullOrEmpty;
              IsNullOrEmpty = (System_Collections_ICollection_o *)BalanceConfig_TypeInfo;
              klass = (int)v20[4].klass;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                IsNullOrEmpty = (System_Collections_ICollection_o *)BalanceConfig_TypeInfo;
              }
              if ( klass == *((_DWORD *)IsNullOrEmpty[11].monitor + 215) )
              {
                IsNullOrEmpty = (System_Collections_ICollection_o *)BasicHelper__IsNullOrEmpty(v13, 0LL);
                if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
                {
                  v22 = v15->fields.textJson;
                  if ( !v22 )
                    goto LABEL_31;
                  if ( !v22->max_length )
                    break;
                  v23 = v22->m_Items[0];
                  if ( !v23 )
                    goto LABEL_31;
                  v23->fields.isQuestRelease = 0;
                }
              }
            }
          }
        }
      }
      max_length = AvailableTutorialArray->max_length;
      if ( (int)++v14 >= max_length )
        return;
    }
    sub_1BDBADC(IsNullOrEmpty, v8, v11);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TerminalSceneComponent__CheckEventDailyPoint(
        TerminalSceneComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x1
  TerminalPramsManager_c *v13; // x0
  int64_t BeforeTimeEventDailyPoint_k__BackingField; // x21
  __int64 v15; // x1
  uint64_t dateData; // x20
  TerminalPramsManager_c *v17; // x0
  int32_t Hour; // w19
  BalanceConfig_c *v19; // x8
  int32_t Year; // w19
  int32_t Month; // w21
  int32_t Day; // w0
  BalanceConfig_c *v23; // x8
  int32_t v24; // w22
  System_DateTime_o t2; // [xsp+0h] [xbp-50h] BYREF
  uint64_t v27; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF
  System_DateTime_o v29; // 0:x0.8
  System_DateTime_o v30; // 0:x0.8
  System_DateTime_o v31; // 0:x0.8
  System_DateTime_o v32; // 0:x0.8
  System_DateTime_o v33; // 0:x0.8
  System_DateTime_o v34; // 0:x0.8
  System_DateTime_o v35; // 0:x0.8
  System_DateTime_o v36; // 0:x1.8

  if ( (byte_4B46D65 & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, *(_QWORD *)&eventId);
    sub_1BDB878(&Method_DataManager_GetMasterData_EventDetailMaster___, v4);
    sub_1BDB878(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v5);
    sub_1BDB878(&System_DateTime_TypeInfo, v6);
    sub_1BDB878(&NetworkManager_TypeInfo, v7);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v9);
    byte_4B46D65 = 1;
  }
  entity = 0LL;
  t2.fields._dateData = 0LL;
  v27 = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_303395C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_40;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          eventId,
          (const MethodInfo_32E1E88 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Instance = entity;
  if ( !entity )
LABEL_40:
    sub_1BDBAD4(Instance, v11);
  if ( EventDetailEntity__IsEventDailyPoint((EventDetailEntity_o *)entity, 0LL) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B41F50 )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, v12);
      byte_4B41F50 = 1;
    }
    v13 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v13 = TerminalPramsManager_TypeInfo;
    }
    BeforeTimeEventDailyPoint_k__BackingField = v13->static_fields->_BeforeTimeEventDailyPoint_k__BackingField;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    dateData = NetworkManager__getDateTime_40274316(BeforeTimeEventDailyPoint_k__BackingField, 0LL).fields._dateData;
    if ( !byte_4B41F4F )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, v15);
      byte_4B41F4F = 1;
    }
    v17 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v17 = TerminalPramsManager_TypeInfo;
    }
    if ( BeforeTimeEventDailyPoint_k__BackingField < 1
      || v17->static_fields->_EventDailyPointEventId_k__BackingField != eventId )
    {
      return 1;
    }
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v27 = NetworkManager__getServerDateTime(0LL).fields._dateData;
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    v29.fields._dateData = (uint64_t)&v27;
    Hour = System_DateTime__get_Hour(v29, 0LL);
    v19 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v19 = BalanceConfig_TypeInfo;
    }
    if ( Hour < v19->static_fields->EventDailyPointResetAt )
    {
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      v30.fields._dateData = (uint64_t)&v27;
      v27 = System_DateTime__AddDays(v30, -1.0, 0LL).fields._dateData;
    }
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    v31.fields._dateData = (uint64_t)&v27;
    Year = System_DateTime__get_Year(v31, 0LL);
    v32.fields._dateData = (uint64_t)&v27;
    Month = System_DateTime__get_Month(v32, 0LL);
    v33.fields._dateData = (uint64_t)&v27;
    Day = System_DateTime__get_Day(v33, 0LL);
    v23 = BalanceConfig_TypeInfo;
    v24 = Day;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v23 = BalanceConfig_TypeInfo;
    }
    v34.fields._dateData = (uint64_t)&t2;
    System_DateTime___ctor_63962604(v34, Year, Month, v24, v23->static_fields->EventDailyPointResetAt, 0, 0, 0LL);
    v36.fields._dateData = t2.fields._dateData;
    v35.fields._dateData = dateData;
    if ( System_DateTime__op_LessThanOrEqual(v35, v36, 0LL) )
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
  __int64 v6; // x1
  System_String_o *String_70242896; // x0
  const MethodInfo *v8; // x5

  if ( (byte_4B46D75 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_1931/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_FREE_SHOP_TITLE"*/, callback);
    sub_1BDB878(&StringLiteral_19677/*"freeShopIds"*/, v5);
    sub_1BDB878(&StringLiteral_1930/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_FREE_SHOP_DETAIL"*/, v6);
    byte_4B46D75 = 1;
  }
  String_70242896 = UnityEngine_PlayerPrefs__GetString_70242896((System_String_o *)StringLiteral_19677/*"freeShopIds"*/, 0LL);
  if ( System_String__IsNullOrEmpty(String_70242896, 0LL) )
    ActionExtensions__Call(callback, 0LL);
  else
    TerminalSceneComponent__OpenExchangeDialogue(
      this,
      (System_String_o *)StringLiteral_19677/*"freeShopIds"*/,
      (System_String_o *)StringLiteral_1931/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_FREE_SHOP_TITLE"*/,
      (System_String_o *)StringLiteral_1930/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_FREE_SHOP_DETAIL"*/,
      callback,
      v8);
}


void __fastcall TerminalSceneComponent__CheckExchangeDialogTheReturn(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *String_70242896; // x0
  const MethodInfo *v8; // x5

  if ( (byte_4B46D76 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_1933/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_RETURN_RARE_PRI_SHOP_TITLE"*/, callback);
    sub_1BDB878(&StringLiteral_23113/*"returnRarePriShopIds"*/, v5);
    sub_1BDB878(&StringLiteral_1932/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_RETURN_RARE_PRI_SHOP_DETAIL"*/, v6);
    byte_4B46D76 = 1;
  }
  String_70242896 = UnityEngine_PlayerPrefs__GetString_70242896((System_String_o *)StringLiteral_23113/*"returnRarePriShopIds"*/, 0LL);
  if ( System_String__IsNullOrEmpty(String_70242896, 0LL) )
    ActionExtensions__Call(callback, 0LL);
  else
    TerminalSceneComponent__OpenExchangeDialogue(
      this,
      (System_String_o *)StringLiteral_23113/*"returnRarePriShopIds"*/,
      (System_String_o *)StringLiteral_1933/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_RETURN_RARE_PRI_SHOP_TITLE"*/,
      (System_String_o *)StringLiteral_1932/*"ACHIEVEMENT_EXCHANGE_CONDITIONS_RETURN_RARE_PRI_SHOP_DETAIL"*/,
      callback,
      v8);
}


void __fastcall TerminalSceneComponent__CheckLastPlayBgm(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mTerminalList; // x20
  __int64 v4; // x1
  ScrTerminalListTop_o *v5; // x0

  if ( (byte_4B46D59 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B46D59 = 1;
  }
  mTerminalList = (UnityEngine_Object_o *)this->fields.mTerminalList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mTerminalList, 0LL, 0LL) )
  {
    v5 = this->fields.mTerminalList;
    if ( !v5 )
      sub_1BDBAD4(0LL, v4);
    ScrTerminalListTop__CheckLastPlayBgm(v5, 0LL);
  }
}


void __fastcall TerminalSceneComponent__CheckMasterMissionReset(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x19
  ScrPlayerStatus_o *mPlayerStatus; // x0
  __int64 v18; // x1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Action_o **v21; // x20
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  _QWORD *v24; // x21
  TerminalSceneComponent_c *v25; // x0
  System_String_o *String; // x0
  int64_t v27; // x0
  Il2CppObject *Instance; // x20
  System_String_o *v29; // x21
  System_String_o *v30; // x22
  System_String_o *v31; // x23
  CommonConfirmDialog_ClickDelegate_o *v32; // x24
  TerminalSceneComponent_c *v33; // x0
  struct TerminalSceneComponent_StaticFields *static_fields; // x8
  int64_t v35; // x0
  System_String_o *MASTER_MISSION_RESET_KEY; // x19
  System_String_o *v37; // x0

  if ( (byte_4B46D79 & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, callback);
    sub_1BDB878(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5);
    sub_1BDB878(&LocalizationManager_TypeInfo, v6);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1BDB878(&TerminalSceneComponent_TypeInfo, v8);
    sub_1BDB878(&Method_TerminalSceneComponent___c__DisplayClass267_0__CheckMasterMissionReset_b__0__, v9);
    sub_1BDB878(&TerminalSceneComponent___c__DisplayClass267_0_TypeInfo, v10);
    sub_1BDB878(&StringLiteral_8803/*"MST_MISSION_CHANGE_MSG"*/, v11);
    sub_1BDB878(&StringLiteral_8802/*"MST_MISSION_CHANGE_DECIDE"*/, v12);
    sub_1BDB878(&StringLiteral_3717/*"COMMON_CONFIRM_CLOSE"*/, v13);
    sub_1BDB878(&StringLiteral_1/*""*/, v14);
    sub_1BDB878(&StringLiteral_1142/*"0"*/, v15);
    byte_4B46D79 = 1;
  }
  v16 = sub_1BDBAC4(TerminalSceneComponent___c__DisplayClass267_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_20;
  *(_QWORD *)(v16 + 24) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v16 + 24), (int32_t)this, v19, v20);
  *(_QWORD *)(v16 + 32) = callback;
  v21 = (System_Action_o **)(v16 + 32);
  sub_1BDB81C((CGThumbnailListItem_o *)(v16 + 32), (int32_t)callback, v22, v23);
  mPlayerStatus = this->fields.mPlayerStatus;
  if ( !mPlayerStatus )
    goto LABEL_20;
  *(_QWORD *)(v16 + 16) = ScrPlayerStatus__GetMstMissionStarts(mPlayerStatus, 0LL);
  v24 = (_QWORD *)(v16 + 16);
  v25 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v25 = TerminalSceneComponent_TypeInfo;
  }
  String = UnityEngine_PlayerPrefs__GetString(
             v25->static_fields->MASTER_MISSION_RESET_KEY,
             (System_String_o *)StringLiteral_1142/*"0"*/,
             0LL);
  v27 = System_Int64__Parse(String, 0LL);
  if ( *v24 )
  {
    if ( v27 )
    {
      if ( v27 != *v24 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v29 = LocalizationManager__Get((System_String_o *)StringLiteral_8803/*"MST_MISSION_CHANGE_MSG"*/, 0LL);
        v30 = LocalizationManager__Get((System_String_o *)StringLiteral_8802/*"MST_MISSION_CHANGE_DECIDE"*/, 0LL);
        v31 = LocalizationManager__Get((System_String_o *)StringLiteral_3717/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
        v32 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BDBAC4(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          v32,
          (Il2CppObject *)v16,
          Method_TerminalSceneComponent___c__DisplayClass267_0__CheckMasterMissionReset_b__0__,
          0LL);
        mPlayerStatus = (ScrPlayerStatus_o *)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        if ( Instance )
        {
          CommonUI__OpenConfirmDecideDlg(
            (CommonUI_o *)Instance,
            (System_String_o *)StringLiteral_1/*""*/,
            v29,
            v30,
            v31,
            v32,
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
        sub_1BDBAD4(mPlayerStatus, v18);
      }
    }
    else
    {
      v33 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v33 = TerminalSceneComponent_TypeInfo;
      }
      static_fields = v33->static_fields;
      v35 = v16 + 16;
      MASTER_MISSION_RESET_KEY = static_fields->MASTER_MISSION_RESET_KEY;
      v37 = System_Int64__ToString(v35, 0LL);
      UnityEngine_PlayerPrefs__SetString(MASTER_MISSION_RESET_KEY, v37, 0LL);
    }
  }
  ActionExtensions__Call(*v21, 0LL);
}


void __fastcall TerminalSceneComponent__CheckNotificationDialog(
        TerminalSceneComponent_o *this,
        System_Action_o *callBack,
        const MethodInfo *method)
{
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
  __int64 v21; // x1
  __int64 v22; // x19
  DataManager_o *Instance; // x0
  __int64 v24; // x1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Action_o **v27; // x20
  BattleResultBondsComponent_c *v28; // x0
  BattleResultBondsComponent_c *v29; // x0
  Il2CppObject *String_70242896; // x21
  System_Object_array *v31; // x0
  System_Object_array *v32; // x22
  __int64 v33; // x2
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v35; // x23
  __int64 v36; // x25
  Il2CppObject *v37; // x8
  BattleResultBondsComponent_c *v38; // x0
  BattleResultBondsComponent_c *v39; // x0
  System_Action_o *v40; // x20
  EventServantEntity_o *v41; // x21
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  DataMasterBase_TMaster__TEntity__PKType__o *v44; // x22
  __int64 v45; // x22
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  __int64 v48; // x19
  __int64 v49; // x20
  Il2CppObject *v50; // x8
  const MethodInfo *v51; // x3
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  System_String_o *v54; // x19
  Il2CppObject *v55; // x22
  __int64 v56; // x0
  Il2CppObject *v57; // [xsp+40h] [xbp-60h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_4B46D7A & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, callBack);
    sub_1BDB878(&BattleResultBondsComponent_TypeInfo, v4);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_1BDB878(&Method_DataManager_GetMaster_SvtCoinMaster___, v6);
    sub_1BDB878(&DataManager_TypeInfo, v7);
    sub_1BDB878(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__, v8);
    sub_1BDB878(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v9);
    sub_1BDB878(&GetSvtCoin___TypeInfo, v10);
    sub_1BDB878(&GetSvtCoin_TypeInfo, v11);
    sub_1BDB878(&Method_JsonManager_DeserializeArray_GetSvts___, v12);
    sub_1BDB878(&JsonManager_TypeInfo, v13);
    sub_1BDB878(&LocalizationManager_TypeInfo, v14);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1BDB878(&Method_TerminalSceneComponent___c__DisplayClass268_0__CheckNotificationDialog_b__0__, v17);
    sub_1BDB878(&TerminalSceneComponent___c__DisplayClass268_0_TypeInfo, v18);
    sub_1BDB878(&Method_TerminalSceneComponent___c__DisplayClass268_1__CheckNotificationDialog_b__1__, v19);
    sub_1BDB878(&TerminalSceneComponent___c__DisplayClass268_1_TypeInfo, v20);
    sub_1BDB878(&StringLiteral_12405/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/, v21);
    byte_4B46D7A = 1;
  }
  v57 = 0LL;
  entity = 0LL;
  v22 = sub_1BDBAC4(TerminalSceneComponent___c__DisplayClass268_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v22, 0LL);
  if ( !v22 )
    goto LABEL_54;
  *(_QWORD *)(v22 + 16) = callBack;
  v27 = (System_Action_o **)(v22 + 16);
  sub_1BDB81C((CGThumbnailListItem_o *)(v22 + 16), (int32_t)callBack, v25, v26);
  v28 = BattleResultBondsComponent_TypeInfo;
  if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
    v28 = BattleResultBondsComponent_TypeInfo;
  }
  if ( UnityEngine_PlayerPrefs__HasKey(v28->static_fields->GET_EXIST_SVT_KEY, 0LL) )
  {
    v29 = BattleResultBondsComponent_TypeInfo;
    if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
      v29 = BattleResultBondsComponent_TypeInfo;
    }
    String_70242896 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_70242896(
                                        v29->static_fields->GET_EXIST_SVT_KEY,
                                        0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v31 = JsonManager__DeserializeArray_object_(
            String_70242896,
            (const MethodInfo_30A04A4 *)Method_JsonManager_DeserializeArray_GetSvts___);
    if ( v31 )
    {
      v32 = v31;
      if ( *(_QWORD *)&v31->max_length )
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_54;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserServantMaster___);
        max_length = v32->max_length;
        if ( max_length >= 1 )
        {
          v35 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
          v36 = 0LL;
          while ( 1 )
          {
            if ( (unsigned int)v36 >= max_length )
              goto LABEL_55;
            v37 = v32->m_Items[v36];
            if ( !v37 || !v35 )
              goto LABEL_54;
            Instance = (DataManager_o *)DataMasterBase_object__object__long___TryGetEntity(
                                          v35,
                                          &entity,
                                          (int64_t)v37[1].klass,
                                          (const MethodInfo_32E43E4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
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
            if ( (_DWORD)v36 == v32->max_length - 1 )
            {
              v38 = BattleResultBondsComponent_TypeInfo;
              if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
                v38 = BattleResultBondsComponent_TypeInfo;
              }
              UnityEngine_PlayerPrefs__DeleteKey(v38->static_fields->GET_EXIST_SVT_KEY, 0LL);
              ActionExtensions__Call(*v27, 0LL);
            }
            max_length = v32->max_length;
            if ( (int)++v36 >= max_length )
              goto LABEL_29;
          }
          v40 = *(System_Action_o **)(v22 + 24);
          v41 = (EventServantEntity_o *)Instance;
          if ( !v40 )
          {
            v40 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
            System_Action___ctor(
              v40,
              (Il2CppObject *)v22,
              Method_TerminalSceneComponent___c__DisplayClass268_0__CheckNotificationDialog_b__0__,
              0LL);
            *(_QWORD *)(v22 + 24) = v40;
            sub_1BDB81C((CGThumbnailListItem_o *)(v22 + 24), (int32_t)v40, v42, v43);
          }
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_SvtCoinMaster___);
          if ( entity )
          {
            v44 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
            Instance = (DataManager_o *)UserServantEntity__getSvtId((UserServantEntity_o *)entity, 0LL);
            if ( v44 )
            {
              Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                            v44,
                                            &v57,
                                            (int32_t)Instance,
                                            (const MethodInfo_32E1E88 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                if ( !v57 )
                  goto LABEL_54;
                if ( SHIDWORD(v57[1].klass) >= 1 )
                {
                  v45 = sub_1BDBAC4(TerminalSceneComponent___c__DisplayClass268_1_TypeInfo);
                  System_Object___ctor((Il2CppObject *)v45, 0LL);
                  if ( !v45 )
                    goto LABEL_54;
                  *(_QWORD *)(v45 + 24) = v22;
                  sub_1BDB81C((CGThumbnailListItem_o *)(v45 + 24), v22, v46, v47);
                  v48 = sub_1BDB920(GetSvtCoin___TypeInfo, 1LL);
                  v49 = sub_1BDBAC4(GetSvtCoin_TypeInfo);
                  GetSvtCoin___ctor((GetSvtCoin_o *)v49, 0LL);
                  v50 = v57;
                  if ( !v57 )
                    goto LABEL_54;
                  if ( !v49 )
                    goto LABEL_54;
                  *(_DWORD *)(v49 + 16) = v57[1].klass;
                  *(int32x2_t *)(v49 + 20) = vrev64_s32(*(int32x2_t *)((char *)&v50[1].klass + 4));
                  if ( !v48 )
                    goto LABEL_54;
                  Instance = (DataManager_o *)sub_1BDB9B4(v49, *(_QWORD *)(*(_QWORD *)v48 + 64LL));
                  if ( !Instance )
                  {
                    v56 = sub_1BDBAF8(0LL);
                    sub_1BDB9A0(v56, 0LL);
                  }
                  if ( !*(_DWORD *)(v48 + 24) )
LABEL_55:
                    sub_1BDBADC(Instance, v24, v33);
                  *(_QWORD *)(v48 + 32) = v49;
                  sub_1BDB81C((CGThumbnailListItem_o *)(v48 + 32), v49, v33, v51);
                  *(_QWORD *)(v45 + 16) = v48;
                  sub_1BDB81C((CGThumbnailListItem_o *)(v45 + 16), v48, v52, v53);
                  v40 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
                  System_Action___ctor(
                    v40,
                    (Il2CppObject *)v45,
                    Method_TerminalSceneComponent___c__DisplayClass268_1__CheckNotificationDialog_b__1__,
                    0LL);
                }
              }
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v54 = LocalizationManager__Get((System_String_o *)StringLiteral_12405/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/, 0LL);
              v55 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              Instance = (DataManager_o *)EventServantEntity__GetGetMessage(v41, 0LL);
              if ( v55 )
              {
                CommonUI__OpenNotificationDialog(
                  (CommonUI_o *)v55,
                  v54,
                  (System_String_o *)Instance,
                  v40,
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
                  0,
                  0LL);
                return;
              }
            }
          }
LABEL_54:
          sub_1BDBAD4(Instance, v24);
        }
      }
    }
LABEL_29:
    v39 = BattleResultBondsComponent_TypeInfo;
    if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
      v39 = BattleResultBondsComponent_TypeInfo;
    }
    UnityEngine_PlayerPrefs__DeleteKey(v39->static_fields->GET_EXIST_SVT_KEY, 0LL);
  }
  ActionExtensions__Call(*v27, 0LL);
}


void __fastcall TerminalSceneComponent__CheckOnTerminalMap(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  EventTutorialMaster__CheckTutorial(0, 98, callback, 0, 0, 0, 0, 0LL);
}


void __fastcall TerminalSceneComponent__CheckOpenCampaignDirectBonus(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x22
  char *mTerminalList; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Action_o **v17; // x20
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  unsigned __int64 v20; // x21
  unsigned __int64 v21; // x23
  bool IsBlankEarthAction; // w24
  __int64 v23; // x2
  const MethodInfo *v24; // x3
  TerminalSceneComponent___c_c *v25; // x8
  char *v26; // x25
  System_Action_object__o *_9__257_0; // x26
  Il2CppObject *v28; // x27
  CGThumbnailListItem_o *static_fields; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x3
  System_Action_object__o *v33; // x26
  Il2CppObject *v34; // x27
  struct TerminalSceneComponent___c_StaticFields *v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  System_Action_object__o *v38; // x26
  const MethodInfo *v39; // x3
  ActionChain_o *v40; // x22
  const MethodInfo *v41; // x2
  System_Collections_IEnumerator_o *v42; // x0

  if ( (byte_4B46D72 & 1) == 0 )
  {
    sub_1BDB878(&ActionChain_TypeInfo, callback);
    sub_1BDB878(&System_Action_Action____TypeInfo, v5);
    sub_1BDB878(&System_Action_Action__TypeInfo, v6);
    sub_1BDB878(&Method_TerminalSceneComponent___c__CheckOpenCampaignDirectBonus_b__257_0__, v7);
    sub_1BDB878(&Method_TerminalSceneComponent___c__CheckOpenCampaignDirectBonus_b__257_1__, v8);
    sub_1BDB878(&Method_TerminalSceneComponent___c__DisplayClass257_0__CheckOpenCampaignDirectBonus_b__2__, v9);
    sub_1BDB878(&TerminalSceneComponent___c__DisplayClass257_0_TypeInfo, v10);
    sub_1BDB878(&TerminalSceneComponent___c_TypeInfo, v11);
    byte_4B46D72 = 1;
  }
  v12 = sub_1BDBAC4(TerminalSceneComponent___c__DisplayClass257_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_33;
  *(_QWORD *)(v12 + 16) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v12 + 16), (int32_t)this, v15, v16);
  *(_QWORD *)(v12 + 24) = callback;
  v17 = (System_Action_o **)(v12 + 24);
  sub_1BDB81C((CGThumbnailListItem_o *)(v12 + 24), (int32_t)callback, v18, v19);
  mTerminalList = (char *)this->fields.mTerminalList;
  this->fields._IsPlayingCampaignDirectBonus_k__BackingField = 1;
  if ( !mTerminalList )
    goto LABEL_33;
  mTerminalList = (char *)ScrTerminalListTop__CheckTerminalTopEffect((ScrTerminalListTop_o *)mTerminalList, 0LL);
  if ( !this->fields.mTerminalList )
    goto LABEL_33;
  v20 = (unsigned __int64)mTerminalList;
  mTerminalList = (char *)ScrTerminalListTop__GetCurrentLoginEntity(this->fields.mTerminalList, 0LL);
  if ( !this->fields.mTerminalList )
    goto LABEL_33;
  v21 = (unsigned __int64)mTerminalList;
  IsBlankEarthAction = ScrTerminalListTop__IsBlankEarthAction(this->fields.mTerminalList, 0LL);
  mTerminalList = (char *)sub_1BDB920(System_Action_Action____TypeInfo, 3LL);
  v25 = TerminalSceneComponent___c_TypeInfo;
  v26 = mTerminalList;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v25 = TerminalSceneComponent___c_TypeInfo;
  }
  _9__257_0 = (System_Action_object__o *)v25->static_fields->__9__257_0;
  if ( !_9__257_0 )
  {
    if ( !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      v25 = TerminalSceneComponent___c_TypeInfo;
    }
    v28 = (Il2CppObject *)v25->static_fields->__9;
    _9__257_0 = (System_Action_object__o *)sub_1BDBAC4(System_Action_Action__TypeInfo);
    System_Action_object____ctor(
      _9__257_0,
      v28,
      Method_TerminalSceneComponent___c__CheckOpenCampaignDirectBonus_b__257_0__,
      0LL);
    static_fields = (CGThumbnailListItem_o *)TerminalSceneComponent___c_TypeInfo->static_fields;
    static_fields[1].klass = (CGThumbnailListItem_c *)_9__257_0;
    sub_1BDB81C(static_fields + 1, (int32_t)_9__257_0, v30, v31);
  }
  if ( !v26 )
    goto LABEL_33;
  if ( !*((_DWORD *)v26 + 6) )
    goto LABEL_34;
  *((_QWORD *)v26 + 4) = _9__257_0;
  sub_1BDB81C((CGThumbnailListItem_o *)(v26 + 32), (int32_t)_9__257_0, v23, v24);
  mTerminalList = (char *)TerminalSceneComponent___c_TypeInfo;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    mTerminalList = (char *)TerminalSceneComponent___c_TypeInfo;
  }
  v33 = *(System_Action_object__o **)(*((_QWORD *)mTerminalList + 23) + 144LL);
  if ( !v33 )
  {
    if ( !*((_DWORD *)mTerminalList + 56) )
    {
      j_il2cpp_runtime_class_init_0(mTerminalList);
      mTerminalList = (char *)TerminalSceneComponent___c_TypeInfo;
    }
    v34 = (Il2CppObject *)**((_QWORD **)mTerminalList + 23);
    v33 = (System_Action_object__o *)sub_1BDBAC4(System_Action_Action__TypeInfo);
    System_Action_object____ctor(
      v33,
      v34,
      Method_TerminalSceneComponent___c__CheckOpenCampaignDirectBonus_b__257_1__,
      0LL);
    v35 = TerminalSceneComponent___c_TypeInfo->static_fields;
    v35->__9__257_1 = (struct System_Action_Action__o *)v33;
    sub_1BDB81C((CGThumbnailListItem_o *)&v35->__9__257_1, (int32_t)v33, v36, v37);
  }
  if ( *((_DWORD *)v26 + 6) <= 1u
    || (*((_QWORD *)v26 + 5) = v33,
        sub_1BDB81C((CGThumbnailListItem_o *)(v26 + 40), (int32_t)v33, v23, v32),
        v38 = (System_Action_object__o *)sub_1BDBAC4(System_Action_Action__TypeInfo),
        System_Action_object____ctor(
          v38,
          (Il2CppObject *)v12,
          Method_TerminalSceneComponent___c__DisplayClass257_0__CheckOpenCampaignDirectBonus_b__2__,
          0LL),
        *((_DWORD *)v26 + 6) <= 2u) )
  {
LABEL_34:
    sub_1BDBADC(mTerminalList, v14, v23);
  }
  *((_QWORD *)v26 + 6) = v38;
  sub_1BDB81C((CGThumbnailListItem_o *)(v26 + 48), (int32_t)v38, v23, v39);
  v40 = (ActionChain_o *)sub_1BDBAC4(ActionChain_TypeInfo);
  ActionChain___ctor_48337224(v40, (System_Action_Action__array *)v26, 0LL);
  if ( (v20 | v21) == 0 && !IsBlankEarthAction )
  {
    if ( v40 )
    {
      ChainableActionBase__Execute((ChainableActionBase_o *)v40, 0LL);
      return;
    }
LABEL_33:
    sub_1BDBAD4(mTerminalList, v14);
  }
  if ( !v21 && v20 )
  {
    v42 = TerminalSceneComponent__CoWaitTerminalTopEffectEnd(this, v40, v41);
LABEL_31:
    UnityEngine_MonoBehaviour__StartCoroutine_70269772((UnityEngine_MonoBehaviour_o *)this, v42, 0LL);
    return;
  }
  if ( IsBlankEarthAction )
  {
    v42 = TerminalSceneComponent__CoWaitBlankEarthActionEnd(this, v40, v41);
    goto LABEL_31;
  }
  this->fields._IsPlayingCampaignDirectBonus_k__BackingField = 0;
  ActionExtensions__Call(*v17, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TerminalSceneComponent__CheckPlayChapterStart(
        TerminalSceneComponent_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  WarEntity_o *WarEntityByWarID; // x0
  WarEntity_o *v9; // x20
  int32_t StartType; // w0
  int64_t targetId; // x19

  if ( (byte_4B46D67 & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, *(_QWORD *)&warId);
    sub_1BDB878(&Method_SingletonTemplate_QuestTree__get_Instance__, v4);
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v5);
    byte_4B46D67 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)Instance, warId, 0LL);
  if ( !WarEntityByWarID )
    return (char)WarEntityByWarID;
  v9 = WarEntityByWarID;
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
  targetId = v9->fields.targetId;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
LABEL_15:
    sub_1BDBAD4(Instance, v7);
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
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x20
  void *Instance; // x0
  __int64 v39; // x1
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  System_Action_o **v42; // x24
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  __int64 v45; // x1
  TerminalPramsManager_c *v46; // x0
  TerminalSceneComponent_o *CampaignDirectBonus; // x0
  const MethodInfo *v48; // x2
  __int64 v49; // x0
  Il2CppObject *mTerminalList; // x23
  __int64 v51; // x21
  System_Action_object__o *v52; // x22
  __int64 v53; // x2
  const MethodInfo *v54; // x3
  System_Action_object__o *v55; // x22
  const MethodInfo *v56; // x3
  System_Action_object__o *v57; // x22
  const MethodInfo *v58; // x3
  Il2CppObject *v59; // x24
  System_Action_object__o *v60; // x22
  const MethodInfo *v61; // x3
  Il2CppObject *v62; // x24
  System_Action_object__o *v63; // x22
  const MethodInfo *v64; // x3
  Il2CppObject *v65; // x24
  System_Action_object__o *v66; // x22
  const MethodInfo *v67; // x3
  System_Action_object__o *v68; // x22
  const MethodInfo *v69; // x3
  System_Action_object__o *v70; // x22
  const MethodInfo *v71; // x3
  System_Action_object__o *v72; // x22
  const MethodInfo *v73; // x3
  System_Action_object__o *v74; // x22
  const MethodInfo *v75; // x3
  const MethodInfo *v76; // x3
  System_Action_object__o *v77; // x22
  Il2CppObject *v78; // x23
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int32_t v80; // w2
  const MethodInfo *v81; // x3
  System_Action_object__o *v82; // x22
  const MethodInfo *v83; // x3
  System_Action_object__o *v84; // x22
  const MethodInfo *v85; // x3
  System_Action_object__o *v86; // x22
  const MethodInfo *v87; // x3
  System_Action_object__o *v88; // x22
  const MethodInfo *v89; // x3
  System_Action_object__o *v90; // x22
  const MethodInfo *v91; // x3
  System_Action_object__o *v92; // x22
  const MethodInfo *v93; // x3
  System_Action_object__o *v94; // x19
  const MethodInfo *v95; // x3
  ActionChain_o *v96; // x19
  __int64 v97; // x21
  System_Action_o *v98; // x22
  const MethodInfo *v99; // x3

  if ( (byte_4B46D70 & 1) == 0 )
  {
    sub_1BDB878(&ActionChain_TypeInfo, afterChain);
    sub_1BDB878(&System_Action___TypeInfo, v9);
    sub_1BDB878(&System_Action_Action____TypeInfo, v10);
    sub_1BDB878(&System_Action_Action__TypeInfo, v11);
    sub_1BDB878(&System_Action_TypeInfo, v12);
    sub_1BDB878(&Method_CommonUI_StartLoginMessages__, v13);
    sub_1BDB878(&Method_CommonUI_StartServantEventJoinLeaveNotification__, v14);
    sub_1BDB878(&Method_ScrTerminalListTop_ShowTerminalMessagesDialogue__, v15);
    sub_1BDB878(&Method_ScrTerminalListTop_StartShowWarClearReward__, v16);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17);
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v18);
    sub_1BDB878(&Method_TerminalSceneComponent_CheckAfterQuestClearDialog__, v19);
    sub_1BDB878(&Method_TerminalSceneComponent_CheckExchangeDialogTheFree__, v20);
    sub_1BDB878(&Method_TerminalSceneComponent_CheckExchangeDialogTheReturn__, v21);
    sub_1BDB878(&Method_TerminalSceneComponent_CheckMasterMissionReset__, v22);
    sub_1BDB878(&Method_TerminalSceneComponent_CheckNotificationDialog__, v23);
    sub_1BDB878(&Method_TerminalSceneComponent_CheckOnTerminalMap__, v24);
    sub_1BDB878(&Method_TerminalSceneComponent_CheckSaveRouteSelect__, v25);
    sub_1BDB878(&Method_TerminalSceneComponent_CheckSpecialAscensionTutorial__, v26);
    sub_1BDB878(&Method_TerminalSceneComponent_CheckTutorialOnTerminalAfterFreeExchangeDialog__, v27);
    sub_1BDB878(&Method_TerminalSceneComponent_CheckTutorialOnTerminal__, v28);
    sub_1BDB878(&TutorialFlag_TypeInfo, v29);
    sub_1BDB878(&Method_TerminalSceneComponent___c__CheckRewardPopupChain_b__255_2__, v30);
    sub_1BDB878(&Method_TerminalSceneComponent___c__DisplayClass255_0__CheckRewardPopupChain_b__0__, v31);
    sub_1BDB878(&Method_TerminalSceneComponent___c__DisplayClass255_0__CheckRewardPopupChain_b__1__, v32);
    sub_1BDB878(&Method_TerminalSceneComponent___c__DisplayClass255_0__CheckRewardPopupChain_b__3__, v33);
    sub_1BDB878(&Method_TerminalSceneComponent___c__DisplayClass255_0__CheckRewardPopupChain_b__4__, v34);
    sub_1BDB878(&TerminalSceneComponent___c__DisplayClass255_0_TypeInfo, v35);
    sub_1BDB878(&TerminalSceneComponent___c_TypeInfo, v36);
    byte_4B46D70 = 1;
  }
  v37 = sub_1BDBAC4(TerminalSceneComponent___c__DisplayClass255_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v37, 0LL);
  if ( !v37 )
    goto LABEL_53;
  *(_QWORD *)(v37 + 16) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v37 + 16), (int32_t)this, v40, v41);
  *(_QWORD *)(v37 + 24) = afterChain;
  v42 = (System_Action_o **)(v37 + 24);
  sub_1BDB81C((CGThumbnailListItem_o *)(v37 + 24), (int32_t)afterChain, v43, v44);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B41AC9 )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v45);
    byte_4B41AC9 = 1;
  }
  v46 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v46 = TerminalPramsManager_TypeInfo;
  }
  if ( v46->static_fields->_IsTransFromOrdealCall_k__BackingField )
  {
    ActionExtensions__Call(*v42, 0LL);
    return;
  }
  if ( checkTutorialEnded )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__Get_39449392(102, 0LL) )
      goto LABEL_48;
  }
  if ( noExecuteCondition )
  {
LABEL_48:
    ActionExtensions__Call(*v42, 0LL);
    goto LABEL_49;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  CampaignDirectBonus = (TerminalSceneComponent_o *)CommonUI__get_CampaignDirectBonus((CommonUI_o *)Instance, 0LL);
  TerminalSceneComponent__SaveCampaignDirectBonusData(
    CampaignDirectBonus,
    (CommonUI_CampaignDirectBonusData_array *)CampaignDirectBonus,
    v48);
  v49 = sub_1BDB920(System_Action_Action____TypeInfo, 18LL);
  mTerminalList = (Il2CppObject *)this->fields.mTerminalList;
  v51 = v49;
  v52 = (System_Action_object__o *)sub_1BDBAC4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v52, mTerminalList, Method_ScrTerminalListTop_StartShowWarClearReward__, 0LL);
  if ( !v51 )
    goto LABEL_53;
  if ( !*(_DWORD *)(v51 + 24) )
    goto LABEL_52;
  *(_QWORD *)(v51 + 32) = v52;
  sub_1BDB81C((CGThumbnailListItem_o *)(v51 + 32), (int32_t)v52, v53, v54);
  v55 = (System_Action_object__o *)sub_1BDBAC4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v55,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent_CheckAfterQuestClearDialog__,
    0LL);
  if ( *(_DWORD *)(v51 + 24) <= 1u )
    goto LABEL_52;
  *(_QWORD *)(v51 + 40) = v55;
  sub_1BDB81C((CGThumbnailListItem_o *)(v51 + 40), (int32_t)v55, v53, v56);
  v57 = (System_Action_object__o *)sub_1BDBAC4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v57,
    (Il2CppObject *)v37,
    Method_TerminalSceneComponent___c__DisplayClass255_0__CheckRewardPopupChain_b__0__,
    0LL);
  if ( *(_DWORD *)(v51 + 24) <= 2u )
    goto LABEL_52;
  *(_QWORD *)(v51 + 48) = v57;
  sub_1BDB81C((CGThumbnailListItem_o *)(v51 + 48), (int32_t)v57, v53, v58);
  v59 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v60 = (System_Action_object__o *)sub_1BDBAC4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v60, v59, Method_CommonUI_StartServantEventJoinLeaveNotification__, 0LL);
  if ( *(_DWORD *)(v51 + 24) <= 3u )
    goto LABEL_52;
  *(_QWORD *)(v51 + 56) = v60;
  sub_1BDB81C((CGThumbnailListItem_o *)(v51 + 56), (int32_t)v60, v53, v61);
  v62 = (Il2CppObject *)this->fields.mTerminalList;
  v63 = (System_Action_object__o *)sub_1BDBAC4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v63, v62, Method_ScrTerminalListTop_ShowTerminalMessagesDialogue__, 0LL);
  if ( *(_DWORD *)(v51 + 24) <= 4u )
    goto LABEL_52;
  *(_QWORD *)(v51 + 64) = v63;
  sub_1BDB81C((CGThumbnailListItem_o *)(v51 + 64), (int32_t)v63, v53, v64);
  v65 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v66 = (System_Action_object__o *)sub_1BDBAC4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v66, v65, Method_CommonUI_StartLoginMessages__, 0LL);
  if ( *(_DWORD *)(v51 + 24) <= 5u )
    goto LABEL_52;
  *(_QWORD *)(v51 + 72) = v66;
  sub_1BDB81C((CGThumbnailListItem_o *)(v51 + 72), (int32_t)v66, v53, v67);
  v68 = (System_Action_object__o *)sub_1BDBAC4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v68,
    (Il2CppObject *)v37,
    Method_TerminalSceneComponent___c__DisplayClass255_0__CheckRewardPopupChain_b__1__,
    0LL);
  if ( *(_DWORD *)(v51 + 24) <= 6u )
    goto LABEL_52;
  *(_QWORD *)(v51 + 80) = v68;
  sub_1BDB81C((CGThumbnailListItem_o *)(v51 + 80), (int32_t)v68, v53, v69);
  v70 = (System_Action_object__o *)sub_1BDBAC4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v70,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent_CheckSpecialAscensionTutorial__,
    0LL);
  if ( *(_DWORD *)(v51 + 24) <= 7u )
    goto LABEL_52;
  *(_QWORD *)(v51 + 88) = v70;
  sub_1BDB81C((CGThumbnailListItem_o *)(v51 + 88), (int32_t)v70, v53, v71);
  v72 = (System_Action_object__o *)sub_1BDBAC4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v72, (Il2CppObject *)this, Method_TerminalSceneComponent_CheckOnTerminalMap__, 0LL);
  if ( *(_DWORD *)(v51 + 24) <= 8u )
    goto LABEL_52;
  *(_QWORD *)(v51 + 96) = v72;
  sub_1BDB81C((CGThumbnailListItem_o *)(v51 + 96), (int32_t)v72, v53, v73);
  v74 = (System_Action_object__o *)sub_1BDBAC4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v74, (Il2CppObject *)this, Method_TerminalSceneComponent_CheckTutorialOnTerminal__, 0LL);
  if ( *(_DWORD *)(v51 + 24) <= 9u )
    goto LABEL_52;
  *(_QWORD *)(v51 + 104) = v74;
  sub_1BDB81C((CGThumbnailListItem_o *)(v51 + 104), (int32_t)v74, v53, v75);
  Instance = TerminalSceneComponent___c_TypeInfo;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    Instance = TerminalSceneComponent___c_TypeInfo;
  }
  v77 = *(System_Action_object__o **)(*((_QWORD *)Instance + 23) + 120LL);
  if ( !v77 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = TerminalSceneComponent___c_TypeInfo;
    }
    v78 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v77 = (System_Action_object__o *)sub_1BDBAC4(System_Action_Action__TypeInfo);
    System_Action_object____ctor(v77, v78, Method_TerminalSceneComponent___c__CheckRewardPopupChain_b__255_2__, 0LL);
    static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    static_fields->__9__255_2 = (struct System_Action_Action__o *)v77;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__255_2, (int32_t)v77, v80, v81);
  }
  if ( *(_DWORD *)(v51 + 24) <= 0xAu )
    goto LABEL_52;
  *(_QWORD *)(v51 + 112) = v77;
  sub_1BDB81C((CGThumbnailListItem_o *)(v51 + 112), (int32_t)v77, v53, v76);
  v82 = (System_Action_object__o *)sub_1BDBAC4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v82, (Il2CppObject *)this, Method_TerminalSceneComponent_CheckNotificationDialog__, 0LL);
  if ( *(_DWORD *)(v51 + 24) <= 0xBu )
    goto LABEL_52;
  *(_QWORD *)(v51 + 120) = v82;
  sub_1BDB81C((CGThumbnailListItem_o *)(v51 + 120), (int32_t)v82, v53, v83);
  v84 = (System_Action_object__o *)sub_1BDBAC4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v84, (Il2CppObject *)this, Method_TerminalSceneComponent_CheckMasterMissionReset__, 0LL);
  if ( *(_DWORD *)(v51 + 24) <= 0xCu )
    goto LABEL_52;
  *(_QWORD *)(v51 + 128) = v84;
  sub_1BDB81C((CGThumbnailListItem_o *)(v51 + 128), (int32_t)v84, v53, v85);
  v86 = (System_Action_object__o *)sub_1BDBAC4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(v86, (Il2CppObject *)this, Method_TerminalSceneComponent_CheckSaveRouteSelect__, 0LL);
  if ( *(_DWORD *)(v51 + 24) <= 0xDu )
    goto LABEL_52;
  *(_QWORD *)(v51 + 136) = v86;
  sub_1BDB81C((CGThumbnailListItem_o *)(v51 + 136), (int32_t)v86, v53, v87);
  v88 = (System_Action_object__o *)sub_1BDBAC4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v88,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent_CheckExchangeDialogTheFree__,
    0LL);
  if ( *(_DWORD *)(v51 + 24) <= 0xEu )
    goto LABEL_52;
  *(_QWORD *)(v51 + 144) = v88;
  sub_1BDB81C((CGThumbnailListItem_o *)(v51 + 144), (int32_t)v88, v53, v89);
  v90 = (System_Action_object__o *)sub_1BDBAC4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v90,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent_CheckExchangeDialogTheReturn__,
    0LL);
  if ( *(_DWORD *)(v51 + 24) <= 0xFu )
    goto LABEL_52;
  *(_QWORD *)(v51 + 152) = v90;
  sub_1BDB81C((CGThumbnailListItem_o *)(v51 + 152), (int32_t)v90, v53, v91);
  v92 = (System_Action_object__o *)sub_1BDBAC4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v92,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent_CheckTutorialOnTerminalAfterFreeExchangeDialog__,
    0LL);
  if ( *(_DWORD *)(v51 + 24) <= 0x10u )
    goto LABEL_52;
  *(_QWORD *)(v51 + 160) = v92;
  sub_1BDB81C((CGThumbnailListItem_o *)(v51 + 160), (int32_t)v92, v53, v93);
  v94 = (System_Action_object__o *)sub_1BDBAC4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v94,
    (Il2CppObject *)v37,
    Method_TerminalSceneComponent___c__DisplayClass255_0__CheckRewardPopupChain_b__3__,
    0LL);
  if ( *(_DWORD *)(v51 + 24) <= 0x11u )
    goto LABEL_52;
  *(_QWORD *)(v51 + 168) = v94;
  sub_1BDB81C((CGThumbnailListItem_o *)(v51 + 168), (int32_t)v94, v53, v95);
  v96 = (ActionChain_o *)sub_1BDBAC4(ActionChain_TypeInfo);
  ActionChain___ctor_48337224(v96, (System_Action_Action__array *)v51, 0LL);
  v97 = sub_1BDB920(System_Action___TypeInfo, 1LL);
  v98 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    v98,
    (Il2CppObject *)v37,
    Method_TerminalSceneComponent___c__DisplayClass255_0__CheckRewardPopupChain_b__4__,
    0LL);
  if ( !v97 )
    goto LABEL_53;
  if ( !*(_DWORD *)(v97 + 24) )
LABEL_52:
    sub_1BDBADC(Instance, v39, v53);
  *(_QWORD *)(v97 + 32) = v98;
  sub_1BDB81C((CGThumbnailListItem_o *)(v97 + 32), (int32_t)v98, v53, v99);
  if ( !v96
    || (Instance = ChainableActionBase__Final((ChainableActionBase_o *)v96, (System_Action_array *)v97, 0LL)) == 0LL )
  {
LABEL_53:
    sub_1BDBAD4(Instance, v39);
  }
  ChainableActionBase__Execute((ChainableActionBase_o *)Instance, 0LL);
LABEL_49:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__DeleteClearDatas(0LL);
}


void __fastcall TerminalSceneComponent__CheckSaveRouteSelect(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x19
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  NetworkManager_ResultCallbackFunc_o *v16; // x20
  System_Int32_array *routes; // [xsp+8h] [xbp-38h] BYREF
  int32_t phase; // [xsp+18h] [xbp-28h] BYREF
  int32_t questId; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4B46D78 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_QuestPhaseMaster___, callback);
    sub_1BDB878(&Method_NetworkManager_getRequest_BattleRouteSelectRequest___, v4);
    sub_1BDB878(&NetworkManager_TypeInfo, v5);
    sub_1BDB878(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_1BDB878(&ScriptManager_TypeInfo, v7);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1BDB878(&Method_TerminalSceneComponent___c__DisplayClass264_0__CheckSaveRouteSelect_b__0__, v9);
    sub_1BDB878(&TerminalSceneComponent___c__DisplayClass264_0_TypeInfo, v10);
    byte_4B46D78 = 1;
  }
  v11 = sub_1BDBAC4(TerminalSceneComponent___c__DisplayClass264_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_19;
  *(_QWORD *)(v11 + 16) = callback;
  sub_1BDB81C((CGThumbnailListItem_o *)(v11 + 16), (int32_t)callback, v14, v15);
  phase = -1;
  questId = -1;
  routes = 0LL;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  if ( ScriptManager__GetSelectRouteArrayInCollection(&questId, &phase, &routes, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_303395C *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
    if ( !Instance )
      goto LABEL_19;
    if ( QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, questId, phase, 0LL) )
    {
      v16 = (NetworkManager_ResultCallbackFunc_o *)sub_1BDBAC4(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v16,
        (Il2CppObject *)v11,
        Method_TerminalSceneComponent___c__DisplayClass264_0__CheckSaveRouteSelect_b__0__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager__getRequest_object_(
                   v16,
                   (const MethodInfo_30BC7D4 *)Method_NetworkManager_getRequest_BattleRouteSelectRequest___);
      if ( Instance )
      {
        BattleRouteSelectRequest__beginRequest((BattleRouteSelectRequest_o *)Instance, questId, phase, routes, 0LL);
        return;
      }
LABEL_19:
      sub_1BDBAD4(Instance, v13);
    }
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    ScriptManager__ClearSelectRouteArray(0LL);
    ScriptManager__ClearSelectRouteArrayInCollection(0LL);
  }
  ActionExtensions__Call(*(System_Action_o **)(v11 + 16), 0LL);
}


void __fastcall TerminalSceneComponent__CheckSpecialAscensionTutorial(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *v4; // x20
  struct ScrTerminalMap_o *mTerminalMap; // x8

  v4 = this;
  if ( (byte_4B46D7B & 1) == 0 )
  {
    this = (TerminalSceneComponent_o *)sub_1BDB878(&CombineRootComponent_TypeInfo, callback);
    byte_4B46D7B = 1;
  }
  if ( !v4->fields.isTutorialAfter )
  {
    mTerminalMap = v4->fields.mTerminalMap;
    if ( !mTerminalMap || (this = (TerminalSceneComponent_o *)mTerminalMap->fields.dispRoot) == 0LL )
      sub_1BDBAD4(this, callback);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  CommonUI_o *Instance; // x0
  __int64 v14; // x1
  bool v15; // w20
  TerminalPramsManager_c *v16; // x0
  int32_t FirstWarId; // w21
  TerminalPramsManager_c *v18; // x0
  Il2CppObject *v19; // x0
  clsQuestCheck_o *v20; // x21
  int32_t v21; // w0
  int32_t v22; // w0
  __int64 v23; // x1
  int32_t v24; // w0
  int32_t v25; // w0
  int32_t v26; // w8
  int32_t Value; // w21
  TerminalPramsManager_c *v28; // x0
  TerminalPramsManager_c *v30; // x0
  int32_t v31; // w1

  if ( (byte_4B46D64 & 1) == 0 )
  {
    sub_1BDB878(&OpeningMovieData_TypeInfo, method);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1BDB878(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    sub_1BDB878(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v5);
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v6);
    sub_1BDB878(&TutorialFlag_TypeInfo, v7);
    sub_1BDB878(&StringLiteral_13578/*"TUTORIAL_QUEST_ID1"*/, v8);
    sub_1BDB878(&StringLiteral_13579/*"TUTORIAL_QUEST_ID2"*/, v9);
    sub_1BDB878(&StringLiteral_13580/*"TUTORIAL_QUEST_ID3"*/, v10);
    sub_1BDB878(&StringLiteral_13581/*"TUTORIAL_QUEST_ID4"*/, v11);
    byte_4B46D64 = 1;
  }
  this->fields.mTutorialKind = 0;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_39449392(102, 0LL) )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( TutorialFlag__GetProgress(0LL) == 4 )
      return 0;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1BDBAD4(Instance, v14);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B4142C )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v12);
    byte_4B4142C = 1;
  }
  v16 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
  }
  this->fields.mIsStart_LoginBonusWhiteBg = !v16->static_fields->_IsAutoResume_k__BackingField;
  if ( !byte_4B3F3B7 )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v12);
    v16 = TerminalPramsManager_TypeInfo;
    byte_4B3F3B7 = 1;
  }
  if ( !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = TerminalPramsManager_TypeInfo;
  }
  v16->static_fields->_IsAutoResume_k__BackingField = 1;
  if ( !byte_4B41427 )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v12);
    v16 = TerminalPramsManager_TypeInfo;
    byte_4B41427 = 1;
  }
  if ( !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = TerminalPramsManager_TypeInfo;
  }
  v16->static_fields->_DispState_k__BackingField = 2;
  if ( !OpeningMovieData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OpeningMovieData_TypeInfo);
  FirstWarId = OpeningMovieData__GetFirstWarId(0LL);
  if ( !byte_4B4142B )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v14);
    byte_4B4142B = 1;
  }
  v18 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v18 = TerminalPramsManager_TypeInfo;
  }
  v18->static_fields->_WarId_k__BackingField = FirstWarId;
  if ( !byte_4B4142A )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v14);
    v18 = TerminalPramsManager_TypeInfo;
    byte_4B4142A = 1;
  }
  if ( !v18->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v18);
    v18 = TerminalPramsManager_TypeInfo;
  }
  v18->static_fields->_SpotId_k__BackingField = -1;
  Instance = (CommonUI_o *)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_83;
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)Instance, 0, 0LL);
  MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
  Instance = (CommonUI_o *)this->fields.mPlayerStatus;
  if ( !Instance )
    goto LABEL_83;
  ScrPlayerStatus__DisableAllBtn((ScrPlayerStatus_o *)Instance, 0LL);
  v19 = SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  this->fields.mTutorialKind = 5;
  v20 = (clsQuestCheck_o *)v19;
  Instance = (CommonUI_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_13578/*"TUTORIAL_QUEST_ID1"*/, 0LL);
  if ( !v20 )
    goto LABEL_83;
  if ( !clsQuestCheck__IsQuestClear(v20, (int32_t)Instance, 0, 0LL) )
  {
    Value = ConstantMaster__getValue((System_String_o *)StringLiteral_13578/*"TUTORIAL_QUEST_ID1"*/, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B41425 )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, v14);
      byte_4B41425 = 1;
    }
    v28 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v28 = TerminalPramsManager_TypeInfo;
    }
    v28->static_fields->_QuestId_k__BackingField = Value;
    Instance = (CommonUI_o *)this->fields.mTerminalList;
    if ( Instance )
    {
      ScrTerminalListTop__SelectedQuest((ScrTerminalListTop_o *)Instance, 0LL);
      return 1;
    }
    goto LABEL_83;
  }
  v21 = ConstantMaster__getValue((System_String_o *)StringLiteral_13579/*"TUTORIAL_QUEST_ID2"*/, 0LL);
  if ( !clsQuestCheck__IsQuestClear(v20, v21, 0, 0LL) )
  {
    v15 = 0;
    v26 = 1;
    goto LABEL_70;
  }
  v22 = ConstantMaster__getValue((System_String_o *)StringLiteral_13580/*"TUTORIAL_QUEST_ID3"*/, 0LL);
  if ( !clsQuestCheck__IsQuestClear(v20, v22, 0, 0LL) )
  {
    v15 = 0;
    v26 = 2;
    goto LABEL_70;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__IsProgressDone(1, 0LL) )
  {
    v15 = 0;
    v26 = 3;
    goto LABEL_70;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_39449392(101, 0LL) )
    goto LABEL_86;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__IsProgressDone(2, 0LL) )
  {
LABEL_86:
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B41026 )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, v23);
      byte_4B41026 = 1;
    }
    v30 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v30 = TerminalPramsManager_TypeInfo;
    }
    v30->static_fields->_SummonType_k__BackingField = 1;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_83;
    v31 = 20;
LABEL_80:
    v15 = 1;
    AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, v31, 1, 0LL, 0LL);
    return v15;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__IsProgressDone(3, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_83;
    v31 = 40;
    goto LABEL_80;
  }
  v24 = ConstantMaster__getValue((System_String_o *)StringLiteral_13581/*"TUTORIAL_QUEST_ID4"*/, 0LL);
  v15 = 0;
  if ( clsQuestCheck__IsQuestClear(v20, v24, 0, 0LL) )
    return v15;
  v25 = ConstantMaster__getValue((System_String_o *)StringLiteral_13581/*"TUTORIAL_QUEST_ID4"*/, 0LL);
  if ( clsQuestCheck__mfGetQuestPhaseByQuestID(v20, v25, 0LL) <= 0 )
  {
    v15 = 0;
    v26 = 4;
LABEL_70:
    this->fields.mTutorialKind = v26;
    return v15;
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
    sub_1BDBAD4(this, callback);
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
  __int64 v3; // x1
  TerminalTransitionInfo_o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4B46D3C & 1) == 0 )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, method);
    sub_1BDB878(&TerminalTransitionInfo_TypeInfo, v3);
    byte_4B46D3C = 1;
  }
  v4 = (TerminalTransitionInfo_o *)sub_1BDBAC4(TerminalTransitionInfo_TypeInfo);
  TerminalTransitionInfo___ctor(v4, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__TerminalTransitionInfoSave_SaveData(v4, 0LL);
  this->fields._TransitionInfo_k__BackingField = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._TransitionInfo_k__BackingField, 0, v5, v6);
}


System_Collections_IEnumerator_o *__fastcall TerminalSceneComponent__CoWaitBlankEarthActionEnd(
        TerminalSceneComponent_o *this,
        ActionChain_o *openCampaignDirectBonus,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4B46D74 & 1) == 0 )
  {
    sub_1BDB878(&TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__259_TypeInfo, openCampaignDirectBonus);
    byte_4B46D74 = 1;
  }
  v5 = sub_1BDBAC4(TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__259_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = openCampaignDirectBonus;
  sub_1BDB81C((CGThumbnailListItem_o *)(v5 + 40), (int32_t)openCampaignDirectBonus, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall TerminalSceneComponent__CoWaitTerminalTopEffectEnd(
        TerminalSceneComponent_o *this,
        ActionChain_o *openCampaignDirectBonus,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4B46D73 & 1) == 0 )
  {
    sub_1BDB878(&TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__258_TypeInfo, openCampaignDirectBonus);
    byte_4B46D73 = 1;
  }
  v5 = sub_1BDBAC4(TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__258_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = openCampaignDirectBonus;
  sub_1BDB81C((CGThumbnailListItem_o *)(v5 + 40), (int32_t)openCampaignDirectBonus, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall TerminalSceneComponent__CreateTransitionInfo(
        TerminalSceneComponent_o *this,
        TerminalTransitionInfo_o *info,
        const MethodInfo *method)
{
  TerminalTransitionInfo_o *v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  __int64 v8; // x1
  TerminalTransitionInfo_o *TransitionInfo_k__BackingField; // x0

  if ( (byte_4B46D3B & 1) == 0 )
  {
    sub_1BDB878(&TerminalTransitionInfo_TypeInfo, info);
    byte_4B46D3B = 1;
  }
  v5 = (TerminalTransitionInfo_o *)sub_1BDBAC4(TerminalTransitionInfo_TypeInfo);
  TerminalTransitionInfo___ctor(v5, 0LL);
  this->fields._TransitionInfo_k__BackingField = v5;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._TransitionInfo_k__BackingField, (int32_t)v5, v6, v7);
  TransitionInfo_k__BackingField = this->fields._TransitionInfo_k__BackingField;
  if ( !TransitionInfo_k__BackingField )
    sub_1BDBAD4(0LL, v8);
  TerminalTransitionInfo__SetParameters(TransitionInfo_k__BackingField, info, 0LL);
}


void __fastcall TerminalSceneComponent__EndAuto(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  TerminalPramsManager_c *v4; // x0
  ScrPlayerStatus_o *mPlayerStatus; // x19
  QuestAfterAction_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B46D4D & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, method);
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v3);
    byte_4B46D4D = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B46DD7 )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, method);
    byte_4B46DD7 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  if ( v4->static_fields->mIsAutoOpenMasterMission )
  {
    mPlayerStatus = this->fields.mPlayerStatus;
    if ( !v4->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v4);
    if ( !byte_4B46DD8 )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, method);
      byte_4B46DD8 = 1;
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
      HIDWORD(Instance->fields.lastDispSpot[2].fields._MapModelEffectRootObj_k__BackingField),
      0LL);
    if ( !byte_4B3EEF1 )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, v7);
      byte_4B3EEF1 = 1;
    }
    v4 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v4 = TerminalPramsManager_TypeInfo;
    }
    v4->static_fields->_MasterMissionTargetType_k__BackingField = -1;
  }
  if ( !v4->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v4);
  TerminalPramsManager__AutoOff(0LL);
  Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  if ( QuestAfterAction__IsExistTerminalTransition(Instance, 0LL) )
  {
    Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( Instance )
    {
      QuestAfterAction__Clear(Instance, 0LL);
      return;
    }
LABEL_29:
    sub_1BDBAD4(Instance, method);
  }
}


float __fastcall TerminalSceneComponent__FSMenuOffsetX(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4B46D2E & 1) == 0 )
  {
    sub_1BDB878(&FSUtility_TypeInfo, method);
    byte_4B46D2E = 1;
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


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalSceneComponent__FadeInAndTriggerEventEffects(
        TerminalSceneComponent_o *this,
        float fadeTime,
        int32_t eventId,
        System_Action_o *callback,
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x20
  AvalonSceneManager_o *Instance; // x0
  __int64 v24; // x1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  const MethodInfo *v29; // x3
  struct ScrTerminalListTop_o *mTerminalList; // x8
  System_Action_o *v31; // x2
  __int64 v32; // x8
  __int64 v33; // x8
  __int64 v34; // x8
  __int64 v35; // x8
  __int64 v36; // x22
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  int32_t v40; // w23
  int32_t v41; // w24
  SceneJumpInfo_o *v42; // x22
  TerminalPramsManager_c *v43; // x0
  __int64 v44; // x1
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  TerminalPramsManager_c *v47; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  ScrTerminalListTop_o *v49; // x22
  _BOOL8 IsGrandQuestWarId; // x0
  const MethodInfo *v51; // x2
  ScrTerminalMap_o *mTerminalMap; // x22
  int32_t v53; // w23
  __int64 v54; // x1
  System_String_o *MapModelEntryAnimationName; // x22
  TerminalPramsManager_c *v56; // x0
  Il2CppObject *v57; // x0
  float v58; // s8
  CommonUI_o *v59; // x19
  System_Action_o *v60; // x21
  __int64 v61; // x19
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  Il2CppObject *v64; // x20
  System_Action_o *v65; // x21
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  Il2CppObject *v68; // x20
  System_Action_o *v69; // x21
  CommonUI_o *v70; // x21
  ScrTerminalMap_o *v71; // x19
  System_Action_o *v72; // x21

  if ( (byte_4B46D4F & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_1BDB878(&AvalonSceneManager_TypeInfo, v9);
    sub_1BDB878(&SceneJumpInfo_TypeInfo, v10);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1BDB878(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v12);
    sub_1BDB878(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v13);
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v14);
    sub_1BDB878(&Method_TerminalSceneComponent___c__DisplayClass202_0__FadeInAndTriggerEventEffects_b__0__, v15);
    sub_1BDB878(&Method_TerminalSceneComponent___c__DisplayClass202_0__FadeInAndTriggerEventEffects_b__1__, v16);
    sub_1BDB878(&Method_TerminalSceneComponent___c__DisplayClass202_0__FadeInAndTriggerEventEffects_b__4__, v17);
    sub_1BDB878(&TerminalSceneComponent___c__DisplayClass202_0_TypeInfo, v18);
    sub_1BDB878(&Method_TerminalSceneComponent___c__DisplayClass202_1__FadeInAndTriggerEventEffects_b__2__, v19);
    sub_1BDB878(&TerminalSceneComponent___c__DisplayClass202_1_TypeInfo, v20);
    sub_1BDB878(&StringLiteral_1/*""*/, v21);
    byte_4B46D4F = 1;
  }
  v22 = sub_1BDBAC4(TerminalSceneComponent___c__DisplayClass202_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v22, 0LL);
  if ( !v22 )
    goto LABEL_108;
  *(_QWORD *)(v22 + 16) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v22 + 16), (int32_t)this, v25, v26);
  *(_QWORD *)(v22 + 32) = callback;
  *(_DWORD *)(v22 + 24) = eventId;
  sub_1BDB81C((CGThumbnailListItem_o *)(v22 + 32), (int32_t)callback, v27, v28);
  *(float *)(v22 + 40) = fadeTime;
  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_108;
  v24 = *(unsigned int *)(v22 + 24);
  if ( mTerminalList->fields.isBackFromBlankEarthMap )
  {
    v31 = *(System_Action_o **)(v22 + 32);
LABEL_7:
    TerminalSceneComponent__FadeInAndTriggerEventEffectsNext(this, v24, v31, v29);
    return;
  }
  Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  if ( (int)v24 >= 1 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B41F62 )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, v24);
      byte_4B41F62 = 1;
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
      if ( !byte_4B41F62 )
      {
        sub_1BDB878(&TerminalPramsManager_TypeInfo, v24);
        byte_4B41F62 = 1;
      }
      Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
      }
      v32 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields.fadeType + 208LL);
      if ( !v32 )
        goto LABEL_108;
      if ( *(_DWORD *)(v32 + 16) == *(_DWORD *)(v22 + 24) )
      {
        if ( !Instance[2].fields.m_CachedPtr )
          j_il2cpp_runtime_class_init_0(Instance);
        if ( !byte_4B41F62 )
        {
          sub_1BDB878(&TerminalPramsManager_TypeInfo, v24);
          byte_4B41F62 = 1;
        }
        Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
        }
        v33 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields.fadeType + 208LL);
        if ( !v33 )
          goto LABEL_108;
        if ( *(_DWORD *)(v33 + 20) )
        {
          if ( !Instance[2].fields.m_CachedPtr )
            j_il2cpp_runtime_class_init_0(Instance);
          if ( !byte_4B41F62 )
          {
            sub_1BDB878(&TerminalPramsManager_TypeInfo, v24);
            byte_4B41F62 = 1;
          }
          Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
          }
          v34 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields.fadeType + 208LL);
          if ( v34 )
          {
            if ( *(_DWORD *)(v34 + 20) == 1 )
            {
              if ( !Instance[2].fields.m_CachedPtr )
                j_il2cpp_runtime_class_init_0(Instance);
              if ( !byte_4B41F62 )
              {
                sub_1BDB878(&TerminalPramsManager_TypeInfo, v24);
                byte_4B41F62 = 1;
              }
              Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
              }
              v35 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields.fadeType + 208LL);
              if ( !v35 )
                goto LABEL_108;
              v36 = *(_QWORD *)(v35 + 24);
              if ( v36
                && *(int *)(v36 + 24) >= 1
                && !(IsNullOrEmpty = System_String__IsNullOrEmpty(*(System_String_o **)(v36 + 32), 0LL)) )
              {
                if ( !*(_DWORD *)(v36 + 24) )
                  sub_1BDBADC(IsNullOrEmpty, v38, v39);
                v40 = System_Int32__Parse(*(System_String_o **)(v36 + 32), 0LL) + 1;
              }
              else
              {
                v40 = 0;
              }
              v41 = *(_DWORD *)(v22 + 24);
              v42 = (SceneJumpInfo_o *)sub_1BDBAC4(SceneJumpInfo_TypeInfo);
              SceneJumpInfo___ctor_40482356(v42, (System_String_o *)StringLiteral_1/*""*/, v41, v40, 0LL);
              Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
              if ( !Instance )
                goto LABEL_108;
              AvalonSceneManager__transitionScene(Instance, 72, 1, (Il2CppObject *)v42, 0LL);
              Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
            }
            if ( !Instance[2].fields.m_CachedPtr )
              j_il2cpp_runtime_class_init_0(Instance);
            if ( !byte_4B41F62 )
            {
              sub_1BDB878(&TerminalPramsManager_TypeInfo, v24);
              byte_4B41F62 = 1;
            }
            v43 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v43 = TerminalPramsManager_TypeInfo;
            }
            Instance = (AvalonSceneManager_o *)v43->static_fields->_SpecifiedChangeSceneInfo_k__BackingField;
            if ( Instance )
            {
              SpecifiedSceneInfo__InitParameter((SpecifiedSceneInfo_o *)Instance, 0LL);
              if ( !byte_4B41F43 )
              {
                sub_1BDB878(&TerminalPramsManager_TypeInfo, v44);
                byte_4B41F43 = 1;
              }
              v47 = TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v47 = TerminalPramsManager_TypeInfo;
              }
              static_fields = v47->static_fields;
              static_fields->_SpecifiedChangeSceneInfo_k__BackingField = 0LL;
              sub_1BDB81C(
                (CGThumbnailListItem_o *)&static_fields->_SpecifiedChangeSceneInfo_k__BackingField,
                0,
                v45,
                v46);
              LODWORD(v24) = *(_DWORD *)(v22 + 24);
              v31 = *(System_Action_o **)(v22 + 32);
              goto LABEL_7;
            }
          }
LABEL_108:
          sub_1BDBAD4(Instance, v24);
        }
      }
    }
  }
  v49 = this->fields.mTerminalList;
  if ( !Instance[2].fields.m_CachedPtr )
    j_il2cpp_runtime_class_init_0(Instance);
  if ( !byte_4B3F84F )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v24);
    byte_4B3F84F = 1;
  }
  Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v49 )
    goto LABEL_108;
  IsGrandQuestWarId = ScrTerminalListTop__IsGrandQuestWarId(
                        v49,
                        *(_DWORD *)(*(_QWORD *)&Instance[1].fields.fadeType + 4LL),
                        0LL);
  if ( IsGrandQuestWarId
    || !TerminalSceneComponent__IsEnabledMapOnEvent(
          (TerminalSceneComponent_o *)IsGrandQuestWarId,
          *(_DWORD *)(v22 + 24),
          v51) )
  {
    v61 = sub_1BDBAC4(TerminalSceneComponent___c__DisplayClass202_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v61, 0LL);
    if ( !v61 )
      goto LABEL_108;
    *(_QWORD *)(v61 + 24) = v22;
    sub_1BDB81C((CGThumbnailListItem_o *)(v61 + 24), v22, v62, v63);
    v64 = *(Il2CppObject **)(v61 + 24);
    v65 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      v65,
      v64,
      Method_TerminalSceneComponent___c__DisplayClass202_0__FadeInAndTriggerEventEffects_b__1__,
      0LL);
    *(_QWORD *)(v61 + 16) = v65;
    sub_1BDB81C((CGThumbnailListItem_o *)(v61 + 16), (int32_t)v65, v66, v67);
    v68 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    v69 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      v69,
      (Il2CppObject *)v61,
      Method_TerminalSceneComponent___c__DisplayClass202_1__FadeInAndTriggerEventEffects_b__2__,
      0LL);
    if ( !v68 )
      goto LABEL_108;
    QuestAfterAction__LoadVoice((QuestAfterAction_o *)v68, v69, 0LL);
  }
  else
  {
    Instance = (AvalonSceneManager_o *)this->fields.mTerminalMap;
    if ( !Instance )
      goto LABEL_108;
    if ( !ScrTerminalMap__IsMapModel((ScrTerminalMap_o *)Instance, 0LL) )
      goto LABEL_96;
    mTerminalMap = this->fields.mTerminalMap;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B41619 )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, v24);
      byte_4B41619 = 1;
    }
    Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
    }
    v53 = *(_DWORD *)(*(_QWORD *)&Instance[1].fields.fadeType + 140LL);
    if ( !byte_4B4161A )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, v24);
      Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
      byte_4B4161A = 1;
    }
    if ( !Instance[2].fields.m_CachedPtr )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
    }
    if ( !mTerminalMap )
      goto LABEL_108;
    MapModelEntryAnimationName = ScrTerminalMap__GetMapModelEntryAnimationName(
                                   mTerminalMap,
                                   v53,
                                   *(_DWORD *)(*(_QWORD *)&Instance[1].fields.fadeType + 144LL),
                                   0LL);
    if ( !byte_4B41F46 )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, v54);
      byte_4B41F46 = 1;
    }
    v56 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v56 = TerminalPramsManager_TypeInfo;
    }
    v56->static_fields->_MapModelClearQuestId_k__BackingField = 0;
    if ( !byte_4B41F47 )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, v54);
      v56 = TerminalPramsManager_TypeInfo;
      byte_4B41F47 = 1;
    }
    if ( !v56->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v56);
      v56 = TerminalPramsManager_TypeInfo;
    }
    v56->static_fields->_MapModelClearPhaseCount_k__BackingField = 0;
    if ( !System_String__IsNullOrEmpty(MapModelEntryAnimationName, 0LL) )
    {
      Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v70 = (CommonUI_o *)Instance;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      if ( !v70 )
        goto LABEL_108;
      CommonUI__maskFadein(v70, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
      v71 = this->fields.mTerminalMap;
      v72 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
      System_Action___ctor(
        v72,
        (Il2CppObject *)v22,
        Method_TerminalSceneComponent___c__DisplayClass202_0__FadeInAndTriggerEventEffects_b__4__,
        0LL);
      if ( !v71 )
        goto LABEL_108;
      ScrTerminalMap__PlayMapModelEntryAnimation(v71, MapModelEntryAnimationName, v72, 0LL);
    }
    else
    {
LABEL_96:
      v57 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v58 = *(float *)(v22 + 40);
      v59 = (CommonUI_o *)v57;
      v60 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
      System_Action___ctor(
        v60,
        (Il2CppObject *)v22,
        Method_TerminalSceneComponent___c__DisplayClass202_0__FadeInAndTriggerEventEffects_b__0__,
        0LL);
      if ( !v59 )
        goto LABEL_108;
      CommonUI__maskFadein(v59, v58, v60, 0LL);
    }
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x22
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Action_o **v19; // x20
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Action_o *v22; // x2
  Il2CppObject *v23; // x1
  struct TitleInfoControl_o *mTitleInfo; // x19
  Il2CppObject *v25; // x20
  System_Action_o *v26; // x21
  struct TitleInfoControl_o *v27; // x23
  TerminalPramsManager_c *v28; // x0
  System_Action_o *v29; // x19
  System_Action_o *v30; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B46D52 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_1BDB878(&Method_DataManager_GetMasterData_EventDetailMaster___, v7);
    sub_1BDB878(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v8);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v10);
    sub_1BDB878(&Method_TerminalSceneComponent___c__DisplayClass205_0__FadeInAndTriggerEventEffectsNext_b__0__, v11);
    sub_1BDB878(&Method_TerminalSceneComponent___c__DisplayClass205_0__FadeInAndTriggerEventEffectsNext_b__1__, v12);
    sub_1BDB878(&TerminalSceneComponent___c__DisplayClass205_0_TypeInfo, v13);
    byte_4B46D52 = 1;
  }
  entity = 0LL;
  v14 = sub_1BDBAC4(TerminalSceneComponent___c__DisplayClass205_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_68;
  *(_QWORD *)(v14 + 16) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v14 + 16), (int32_t)this, v17, v18);
  *(_QWORD *)(v14 + 24) = callback;
  v19 = (System_Action_o **)(v14 + 24);
  sub_1BDB81C((CGThumbnailListItem_o *)(v14 + 24), (int32_t)callback, v20, v21);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_303395C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_68;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          eventId,
          (const MethodInfo_32E1E88 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
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
    sub_1BDBAD4(Instance, v16);
  if ( EventDetailEntity__isRaidDefeatCount((EventDetailEntity_o *)entity, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.mTitleInfo;
    if ( Instance )
    {
      TitleInfoControl__PlayEventRaidDefeatedEffect((TitleInfoControl_o *)Instance, eventId, 0, *v19, 0LL);
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
      TitleInfoControl__CheckSuperBossHpAnim((TitleInfoControl_o *)Instance, *v19, 0LL);
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
      v22 = *v19;
      v23 = entity;
LABEL_31:
      TitleInfoControl__EventTowerStart((TitleInfoControl_o *)Instance, (EventDetailEntity_o *)v23, v22, 0LL);
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
      v25 = entity;
      v26 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
      System_Action___ctor(
        v26,
        (Il2CppObject *)v14,
        Method_TerminalSceneComponent___c__DisplayClass205_0__FadeInAndTriggerEventEffectsNext_b__0__,
        0LL);
      if ( !mTitleInfo )
        goto LABEL_68;
      Instance = (DataManager_o *)mTitleInfo;
      v23 = v25;
      v22 = v26;
      goto LABEL_31;
    }
  }
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_68;
  Instance = (DataManager_o *)EventDetailEntity__IsGroupPoint((EventDetailEntity_o *)entity, 0LL);
  v27 = this->fields.mTitleInfo;
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !v27 )
      goto LABEL_68;
    TitleInfoControl__CheckEventPointGroupReward(this->fields.mTitleInfo, eventId, *v19, 0LL);
    v28 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v28 = TerminalPramsManager_TypeInfo;
    }
    if ( v28->static_fields->joinGroupId >= 1 )
    {
      Instance = (DataManager_o *)this->fields.mTitleInfo;
      if ( !Instance )
        goto LABEL_68;
      TitleInfoControl__vsGaugeEvent((TitleInfoControl_o *)Instance, eventId, 0LL);
    }
    return;
  }
  if ( !v27 )
    goto LABEL_68;
  if ( v27->fields.needPlayDailyPointItemEffect )
  {
    v29 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      v29,
      (Il2CppObject *)v14,
      Method_TerminalSceneComponent___c__DisplayClass205_0__FadeInAndTriggerEventEffectsNext_b__1__,
      0LL);
    TitleInfoControl__UpdateDailyPointWithEffect(v27, v29, 0LL);
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
    TitleInfoControl__CheckEventPointGaugeAnim((TitleInfoControl_o *)Instance, (EventDetailEntity_o *)entity, *v19, 0LL);
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
      *v19,
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
      ScrTerminalMap__UpdateEventBoardGame((ScrTerminalMap_o *)Instance, *v19, 0LL);
      return;
    }
    v30 = *v19;
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
    v30 = *v19;
LABEL_65:
    ActionExtensions__Call(v30, 0LL);
    return;
  }
  Instance = (DataManager_o *)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_68;
  TitleInfoControl__StartEventUIAnimation((TitleInfoControl_o *)Instance, 1, *v19, 0LL);
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

  if ( (byte_4B46D46 & 1) == 0 )
  {
    sub_1BDB878(&AvalonSceneManager_TypeInfo, isExecuteUnusedAssets);
    byte_4B46D46 = 1;
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
  UnityEngine_MonoBehaviour__StartCoroutine_70269772((UnityEngine_MonoBehaviour_o *)this, v8, 0LL);
}


void __fastcall TerminalSceneComponent__Fadein_MapDisp(
        TerminalSceneComponent_o *this,
        float fade_time,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x2
  Il2CppObject *Instance; // x19
  AvalonSceneManager_c *v20; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v22; // x21

  if ( (byte_4B46D4A & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, end_act);
    sub_1BDB878(&AvalonSceneManager_TypeInfo, v7);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1BDB878(&Method_TerminalSceneComponent___c__DisplayClass197_0__Fadein_MapDisp_b__0__, v9);
    sub_1BDB878(&TerminalSceneComponent___c__DisplayClass197_0_TypeInfo, v10);
    byte_4B46D4A = 1;
  }
  v11 = sub_1BDBAC4(TerminalSceneComponent___c__DisplayClass197_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_10;
  *(_QWORD *)(v11 + 16) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v11 + 16), (int32_t)this, v14, v15);
  *(_QWORD *)(v11 + 24) = end_act;
  sub_1BDB81C((CGThumbnailListItem_o *)(v11 + 24), (int32_t)end_act, v16, v17);
  if ( this->fields._FirstFadeTime_k__BackingField > 0.0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v20 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v20 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v20->static_fields->DEFAULT_FADE_TIME;
    v22 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      v22,
      (Il2CppObject *)v11,
      Method_TerminalSceneComponent___c__DisplayClass197_0__Fadein_MapDisp_b__0__,
      0LL);
    if ( Instance )
    {
      CommonUI__maskFadeChangeColor((CommonUI_o *)Instance, 2, DEFAULT_FADE_TIME, v22, 0LL);
      return;
    }
LABEL_10:
    sub_1BDBAD4(v12, v13);
  }
  TerminalSceneComponent__Fadein_MapDisp_Load(this, fade_time, *(System_Action_o **)(v11 + 24), v18);
}


void __fastcall TerminalSceneComponent__Fadein_MapDisp_Load(
        TerminalSceneComponent_o *this,
        float fade_time,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x20
  void *mTerminalMap; // x0
  const MethodInfo *v14; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  TerminalPramsManager_c *v19; // x0
  __int64 v20; // x8
  __int64 v21; // x8
  WarEntity_o *v22; // x21
  __int64 v23; // x1
  TerminalPramsManager_c *v24; // x0
  _BOOL4 isInvisibleConnectAndLoad; // w22
  TitleInfoControl_o *mTitleInfo; // x19
  System_Action_o *v27; // x22

  if ( (byte_4B46D4B & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, end_act);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v8);
    sub_1BDB878(&TerminalSceneComponent_TypeInfo, v9);
    sub_1BDB878(&Method_TerminalSceneComponent___c__DisplayClass198_0__Fadein_MapDisp_Load_b__0__, v10);
    sub_1BDB878(&TerminalSceneComponent___c__DisplayClass198_0_TypeInfo, v11);
    byte_4B46D4B = 1;
  }
  v12 = sub_1BDBAC4(TerminalSceneComponent___c__DisplayClass198_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_32;
  *(_QWORD *)(v12 + 16) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v12 + 16), (int32_t)this, v15, v16);
  *(_QWORD *)(v12 + 32) = end_act;
  *(float *)(v12 + 24) = fade_time;
  sub_1BDB81C((CGThumbnailListItem_o *)(v12 + 32), (int32_t)end_act, v17, v18);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B406D7 )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v14);
    byte_4B406D7 = 1;
  }
  v19 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v19 = TerminalPramsManager_TypeInfo;
  }
  if ( !v19->static_fields->_IsDispOnly_k__BackingField )
  {
    TerminalSceneComponent__EndAuto(this, v14);
    goto LABEL_22;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4B3EEEF )
  {
    sub_1BDB878(&TerminalSceneComponent_TypeInfo, v14);
    byte_4B3EEEF = 1;
  }
  mTerminalMap = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    mTerminalMap = TerminalSceneComponent_TypeInfo;
  }
  v20 = **((_QWORD **)mTerminalMap + 23);
  if ( !v20 || (v21 = *(_QWORD *)(v20 + 264)) == 0 || (mTerminalMap = *(void **)(v21 + 552)) == 0LL )
LABEL_32:
    sub_1BDBAD4(mTerminalMap, v14);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mTerminalMap, 1, 0LL);
LABEL_22:
  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_32;
  v22 = (WarEntity_o *)*((_QWORD *)mTerminalMap + 45);
  ScrTerminalMap__SetDisp((ScrTerminalMap_o *)mTerminalMap, 1, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B41962 )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v23);
    byte_4B41962 = 1;
  }
  v24 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v24 = TerminalPramsManager_TypeInfo;
  }
  isInvisibleConnectAndLoad = v24->static_fields->isInvisibleConnectAndLoad;
  mTerminalMap = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !mTerminalMap )
    goto LABEL_32;
  CommonUI__SetLoadMode((CommonUI_o *)mTerminalMap, !isInvisibleConnectAndLoad, 0LL);
  mTitleInfo = this->fields.mTitleInfo;
  v27 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    v27,
    (Il2CppObject *)v12,
    Method_TerminalSceneComponent___c__DisplayClass198_0__Fadein_MapDisp_Load_b__0__,
    0LL);
  if ( !mTitleInfo )
    goto LABEL_32;
  TitleInfoControl__SetActiveEventInfo(mTitleInfo, v22, 32, v27, 0LL);
}


void __fastcall TerminalSceneComponent__Fadein_MapDisp_Start(
        TerminalSceneComponent_o *this,
        float fade_time,
        System_Action_o *end_act,
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
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x20
  __int64 Instance; // x0
  _BOOL8 v35; // x1
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  __int64 *v38; // x21
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  struct ScrTerminalMap_o *mTerminalMap; // x8
  struct WarEntity_o *mWarEnt; // x1
  __int64 v45; // x22
  struct ScrTerminalMap_o *v46; // x8
  MapEntity_o *mMapEnt; // x23
  System_String_o *ActiveStateName; // x24
  System_String_o *PrioredBgmName; // x0
  const MethodInfo *v50; // x3
  TerminalPramsManager_c *v51; // x0
  struct ScrTerminalMap_o *v52; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  TerminalPramsManager_c *v54; // x0
  __int64 v55; // x21
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  Il2CppObject **v58; // x22
  __int64 v59; // x8
  __int64 v60; // x8
  __int64 v61; // x8
  __int64 v62; // x8
  __int64 v63; // x8
  __int64 v64; // x8
  __int64 v65; // x0
  Il2CppObject *v66; // x24
  __int64 v67; // x20
  System_Action_object__o *v68; // x23
  __int64 v69; // x2
  const MethodInfo *v70; // x3
  Il2CppObject *v71; // x23
  System_Action_object__o *v72; // x22
  const MethodInfo *v73; // x3
  const MethodInfo *v74; // x3
  System_Action_object__o *v75; // x22
  Il2CppObject *v76; // x23
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  Il2CppObject *v80; // x24
  System_Action_object__o *v81; // x22
  const MethodInfo *v82; // x3
  ActionChain_o *v83; // x22
  __int64 v84; // x20
  System_Action_o *v85; // x23
  const MethodInfo *v86; // x3
  ChainableActionBase_o *v87; // x0
  System_Action_array *v88; // x1
  int32_t v89; // w21
  System_Action_o *v90; // x22
  const MethodInfo *v91; // x3
  __int64 v92; // x22
  Il2CppObject *v93; // x24
  System_Action_object__o *v94; // x23
  const MethodInfo *v95; // x3
  const MethodInfo *v96; // x3
  System_Action_object__o *v97; // x23
  Il2CppObject *v98; // x24
  struct TerminalSceneComponent___c_StaticFields *v99; // x0
  int32_t v100; // w2
  const MethodInfo *v101; // x3
  const MethodInfo *v102; // x3
  System_Action_object__o *v103; // x23
  Il2CppObject *v104; // x24
  struct TerminalSceneComponent___c_StaticFields *v105; // x0
  int32_t v106; // w2
  const MethodInfo *v107; // x3
  System_Action_object__o *v108; // x23
  const MethodInfo *v109; // x3
  ActionChain_o *v110; // x20
  const MethodInfo *v111; // x3
  System_Action_array *v112; // x22
  __int64 v113; // x1

  if ( (byte_4B46D4C & 1) == 0 )
  {
    sub_1BDB878(&ActionChain_TypeInfo, end_act);
    sub_1BDB878(&System_Action___TypeInfo, v7);
    sub_1BDB878(&System_Action_Action____TypeInfo, v8);
    sub_1BDB878(&System_Action_Action__TypeInfo, v9);
    sub_1BDB878(&System_Action_TypeInfo, v10);
    sub_1BDB878(&Method_CommonUI_StartLoginMessages__, v11);
    sub_1BDB878(&Method_QuestAfterAction_Play__, v12);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_1BDB878(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v14);
    sub_1BDB878(&SoundManager_TypeInfo, v15);
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v16);
    sub_1BDB878(&TerminalSceneComponent_TypeInfo, v17);
    sub_1BDB878(&TutorialFlag_TypeInfo, v18);
    sub_1BDB878(&Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__199_0__, v19);
    sub_1BDB878(&Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__199_1__, v20);
    sub_1BDB878(&Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__199_6__, v21);
    sub_1BDB878(&Method_TerminalSceneComponent___c__DisplayClass199_0__Fadein_MapDisp_Start_b__2__, v22);
    sub_1BDB878(&Method_TerminalSceneComponent___c__DisplayClass199_0__Fadein_MapDisp_Start_b__3__, v23);
    sub_1BDB878(&Method_TerminalSceneComponent___c__DisplayClass199_0__Fadein_MapDisp_Start_b__4__, v24);
    sub_1BDB878(&Method_TerminalSceneComponent___c__DisplayClass199_0__Fadein_MapDisp_Start_b__5__, v25);
    sub_1BDB878(&TerminalSceneComponent___c__DisplayClass199_0_TypeInfo, v26);
    sub_1BDB878(&Method_TerminalSceneComponent___c__DisplayClass199_1__Fadein_MapDisp_Start_b__7__, v27);
    sub_1BDB878(&TerminalSceneComponent___c__DisplayClass199_1_TypeInfo, v28);
    sub_1BDB878(&TerminalSceneComponent___c_TypeInfo, v29);
    sub_1BDB878(&StringLiteral_3333/*"CAPTER INIT"*/, v30);
    sub_1BDB878(&StringLiteral_3332/*"CAPTER CREATE"*/, v31);
    sub_1BDB878(&StringLiteral_3334/*"CAPTER WAIT"*/, v32);
    byte_4B46D4C = 1;
  }
  v33 = sub_1BDBAC4(TerminalSceneComponent___c__DisplayClass199_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v33, 0LL);
  if ( !v33 )
    goto LABEL_160;
  *(_QWORD *)(v33 + 16) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v33 + 16), (int32_t)this, v36, v37);
  *(_QWORD *)(v33 + 40) = end_act;
  v38 = (__int64 *)(v33 + 40);
  *(float *)(v33 + 32) = fade_time;
  sub_1BDB81C((CGThumbnailListItem_o *)(v33 + 40), (int32_t)end_act, v39, v40);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_160;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_160;
  mWarEnt = mTerminalMap->fields.mWarEnt;
  *(_QWORD *)(v33 + 24) = mWarEnt;
  v45 = v33 + 24;
  sub_1BDB81C((CGThumbnailListItem_o *)(v33 + 24), (int32_t)mWarEnt, v41, v42);
  v46 = this->fields.mTerminalMap;
  if ( !v46 )
    goto LABEL_160;
  Instance = (__int64)this->fields.mTerminalList;
  if ( !Instance )
    goto LABEL_160;
  mMapEnt = v46->fields.mMapEnt;
  Instance = (__int64)ScrTerminalListTop__mfGetMyFsmP((ScrTerminalListTop_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_160;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)Instance, 0LL);
  v35 = System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_3332/*"CAPTER CREATE"*/, 0LL)
     || System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_3333/*"CAPTER INIT"*/, 0LL)
     || System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_3334/*"CAPTER WAIT"*/, 0LL);
  Instance = (__int64)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_160;
  TitleInfoControl__setBackBtnSprite_38890076((TitleInfoControl_o *)Instance, v35, 0, 0, 0LL);
  Instance = (__int64)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_160;
  TitleInfoControl__FrameIn((TitleInfoControl_o *)Instance, 0, 0LL);
  MainMenuBar__FrameIn(0, 0LL);
  Instance = (__int64)this->fields.mPlayerStatus;
  if ( !Instance )
    goto LABEL_160;
  ScrPlayerStatus__FrameIn((ScrPlayerStatus_o *)Instance, 0, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    goto LABEL_160;
  if ( *(_BYTE *)(Instance + 192) )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__stopBgm(0LL);
  }
  else
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B41ADA )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, v35);
      byte_4B41ADA = 1;
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
      TerminalSceneComponent__playBgm(this, PrioredBgmName, 0LL, v50);
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B41ADA )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v35);
    byte_4B41ADA = 1;
  }
  v51 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v51 = TerminalPramsManager_TypeInfo;
  }
  if ( v51->static_fields->_IsPlayScriptWithMap_k__BackingField )
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
    v51 = TerminalPramsManager_TypeInfo;
  }
  if ( !v51->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v51);
  if ( !byte_4B406D7 )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v35);
    byte_4B406D7 = 1;
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
    if ( !byte_4B41AC6 )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, v35);
      byte_4B41AC6 = 1;
    }
    Instance = (__int64)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Instance = (__int64)TerminalPramsManager_TypeInfo;
    }
    if ( *(_BYTE *)(*(_QWORD *)(Instance + 184) + 106LL) )
    {
      v52 = this->fields.mTerminalMap;
      if ( !v52 )
        goto LABEL_160;
      Instance = (__int64)v52->fields.spotMaskObj;
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
      QuestBoardListViewManager__SetMode((QuestBoardListViewManager_o *)Instance, 4, 0LL, 0, 0, 0, 0LL);
      Instance = (__int64)TerminalPramsManager_TypeInfo;
    }
  }
  if ( !*(_DWORD *)(Instance + 224) )
    j_il2cpp_runtime_class_init_0(Instance);
  if ( !byte_4B41AC6 )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v35);
    byte_4B41AC6 = 1;
  }
  v54 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v54 = TerminalPramsManager_TypeInfo;
  }
  if ( v54->static_fields->_IsScriptDisp_k__BackingField )
    goto LABEL_136;
  if ( !v54->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v54);
  if ( !byte_4B406D7 )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v35);
    byte_4B406D7 = 1;
  }
  Instance = (__int64)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( *(_BYTE *)(*(_QWORD *)(Instance + 184) + 103LL) )
  {
    v55 = sub_1BDBAC4(TerminalSceneComponent___c__DisplayClass199_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v55, 0LL);
    if ( v55 )
    {
      *(_QWORD *)(v55 + 24) = v33;
      v58 = (Il2CppObject **)(v55 + 24);
      sub_1BDB81C((CGThumbnailListItem_o *)(v55 + 24), v33, v56, v57);
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4B3EEEF )
      {
        sub_1BDB878(&TerminalSceneComponent_TypeInfo, v35);
        byte_4B3EEEF = 1;
      }
      Instance = (__int64)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        Instance = (__int64)TerminalSceneComponent_TypeInfo;
      }
      v59 = **(_QWORD **)(Instance + 184);
      if ( v59 )
      {
        v60 = *(_QWORD *)(v59 + 264);
        if ( v60 )
        {
          Instance = *(_QWORD *)(v60 + 552);
          if ( Instance )
          {
            *(_BYTE *)(v55 + 16) = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
            Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
            if ( Instance )
            {
              QuestAfterAction__Init((QuestAfterAction_o *)Instance, 0LL);
              Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
              if ( Instance )
              {
                QuestAfterAction__CreateCommandBuf((QuestAfterAction_o *)Instance, 1, 0LL);
                Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
                if ( Instance )
                {
                  if ( QuestAfterAction__IsActiveCommand((QuestAfterAction_o *)Instance, 0LL) )
                  {
                    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                    if ( !byte_4B3EEEF )
                    {
                      sub_1BDB878(&TerminalSceneComponent_TypeInfo, v35);
                      byte_4B3EEEF = 1;
                    }
                    Instance = (__int64)TerminalSceneComponent_TypeInfo;
                    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                      Instance = (__int64)TerminalSceneComponent_TypeInfo;
                    }
                    v61 = **(_QWORD **)(Instance + 184);
                    if ( !v61 )
                      goto LABEL_160;
                    v62 = *(_QWORD *)(v61 + 264);
                    if ( !v62 )
                      goto LABEL_160;
                    Instance = *(_QWORD *)(v62 + 552);
                    if ( !Instance )
                      goto LABEL_160;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                  }
                  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  if ( !byte_4B3EEEF )
                  {
                    sub_1BDB878(&TerminalSceneComponent_TypeInfo, v35);
                    byte_4B3EEEF = 1;
                  }
                  Instance = (__int64)TerminalSceneComponent_TypeInfo;
                  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                    Instance = (__int64)TerminalSceneComponent_TypeInfo;
                  }
                  v63 = **(_QWORD **)(Instance + 184);
                  if ( v63 )
                  {
                    v64 = *(_QWORD *)(v63 + 264);
                    if ( v64 )
                    {
                      Instance = *(_QWORD *)(v64 + 552);
                      if ( Instance )
                      {
                        if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
                        {
                          Instance = (__int64)this->fields.mTerminalMap;
                          if ( !Instance )
                            goto LABEL_160;
                          ScrTerminalMap__AllMaskStart((ScrTerminalMap_o *)Instance, 0, 1, 0LL);
                        }
                        v65 = sub_1BDB920(System_Action_Action____TypeInfo, 4LL);
                        v66 = *v58;
                        v67 = v65;
                        v68 = (System_Action_object__o *)sub_1BDBAC4(System_Action_Action__TypeInfo);
                        System_Action_object____ctor(
                          v68,
                          v66,
                          Method_TerminalSceneComponent___c__DisplayClass199_0__Fadein_MapDisp_Start_b__4__,
                          0LL);
                        if ( v67 )
                        {
                          if ( *(_DWORD *)(v67 + 24) )
                          {
                            *(_QWORD *)(v67 + 32) = v68;
                            sub_1BDB81C((CGThumbnailListItem_o *)(v67 + 32), (int32_t)v68, v69, v70);
                            v71 = *v58;
                            v72 = (System_Action_object__o *)sub_1BDBAC4(System_Action_Action__TypeInfo);
                            System_Action_object____ctor(
                              v72,
                              v71,
                              Method_TerminalSceneComponent___c__DisplayClass199_0__Fadein_MapDisp_Start_b__5__,
                              0LL);
                            if ( *(_DWORD *)(v67 + 24) > 1u )
                            {
                              *(_QWORD *)(v67 + 40) = v72;
                              sub_1BDB81C((CGThumbnailListItem_o *)(v67 + 40), (int32_t)v72, v69, v73);
                              Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
                              if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
                              {
                                j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
                                Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
                              }
                              v75 = *(System_Action_object__o **)(*(_QWORD *)(Instance + 184) + 16LL);
                              if ( !v75 )
                              {
                                if ( !*(_DWORD *)(Instance + 224) )
                                {
                                  j_il2cpp_runtime_class_init_0(Instance);
                                  Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
                                }
                                v76 = **(Il2CppObject ***)(Instance + 184);
                                v75 = (System_Action_object__o *)sub_1BDBAC4(System_Action_Action__TypeInfo);
                                System_Action_object____ctor(
                                  v75,
                                  v76,
                                  Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__199_6__,
                                  0LL);
                                static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
                                static_fields->__9__199_6 = (struct System_Action_Action__o *)v75;
                                sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__199_6, (int32_t)v75, v78, v79);
                              }
                              if ( *(_DWORD *)(v67 + 24) > 2u )
                              {
                                *(_QWORD *)(v67 + 48) = v75;
                                sub_1BDB81C((CGThumbnailListItem_o *)(v67 + 48), (int32_t)v75, v69, v74);
                                v80 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
                                v81 = (System_Action_object__o *)sub_1BDBAC4(System_Action_Action__TypeInfo);
                                System_Action_object____ctor(v81, v80, Method_QuestAfterAction_Play__, 0LL);
                                if ( *(_DWORD *)(v67 + 24) > 3u )
                                {
                                  *(_QWORD *)(v67 + 56) = v81;
                                  sub_1BDB81C((CGThumbnailListItem_o *)(v67 + 56), (int32_t)v81, v69, v82);
                                  v83 = (ActionChain_o *)sub_1BDBAC4(ActionChain_TypeInfo);
                                  ActionChain___ctor_48337224(v83, (System_Action_Action__array *)v67, 0LL);
                                  v84 = sub_1BDB920(System_Action___TypeInfo, 1LL);
                                  v85 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
                                  System_Action___ctor(
                                    v85,
                                    (Il2CppObject *)v55,
                                    Method_TerminalSceneComponent___c__DisplayClass199_1__Fadein_MapDisp_Start_b__7__,
                                    0LL);
                                  if ( !v84 )
                                    goto LABEL_160;
                                  if ( *(_DWORD *)(v84 + 24) )
                                  {
                                    *(_QWORD *)(v84 + 32) = v85;
                                    sub_1BDB81C((CGThumbnailListItem_o *)(v84 + 32), (int32_t)v85, v69, v86);
                                    if ( !v83 )
                                      goto LABEL_160;
                                    v87 = (ChainableActionBase_o *)v83;
                                    v88 = (System_Action_array *)v84;
                                    goto LABEL_127;
                                  }
                                }
                              }
                            }
                          }
LABEL_161:
                          sub_1BDBADC(Instance, v35, v69);
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
    sub_1BDBAD4(Instance, v35);
  }
  if ( this->fields.mIsStart_LoginBonusWhiteBg )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    Instance = TutorialFlag__Get_39449392(102, 0LL);
    if ( (Instance & 1) != 0 && !this->fields.isTutorialAfter )
    {
      this->fields.mIsStart_LoginBonusWhiteBg = 0;
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__SetupLoginResultData((CommonUI_o *)Instance, 0LL, 0LL);
        v92 = sub_1BDB920(System_Action_Action____TypeInfo, 4LL);
        v93 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v94 = (System_Action_object__o *)sub_1BDBAC4(System_Action_Action__TypeInfo);
        System_Action_object____ctor(v94, v93, Method_CommonUI_StartLoginMessages__, 0LL);
        if ( v92 )
        {
          if ( !*(_DWORD *)(v92 + 24) )
            goto LABEL_161;
          *(_QWORD *)(v92 + 32) = v94;
          sub_1BDB81C((CGThumbnailListItem_o *)(v92 + 32), (int32_t)v94, v69, v95);
          Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
          if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
            Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
          }
          v97 = *(System_Action_object__o **)(*(_QWORD *)(Instance + 184) + 24LL);
          if ( !v97 )
          {
            if ( !*(_DWORD *)(Instance + 224) )
            {
              j_il2cpp_runtime_class_init_0(Instance);
              Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
            }
            v98 = **(Il2CppObject ***)(Instance + 184);
            v97 = (System_Action_object__o *)sub_1BDBAC4(System_Action_Action__TypeInfo);
            System_Action_object____ctor(
              v97,
              v98,
              Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__199_0__,
              0LL);
            v99 = TerminalSceneComponent___c_TypeInfo->static_fields;
            v99->__9__199_0 = (struct System_Action_Action__o *)v97;
            sub_1BDB81C((CGThumbnailListItem_o *)&v99->__9__199_0, (int32_t)v97, v100, v101);
          }
          if ( *(_DWORD *)(v92 + 24) <= 1u )
            goto LABEL_161;
          *(_QWORD *)(v92 + 40) = v97;
          sub_1BDB81C((CGThumbnailListItem_o *)(v92 + 40), (int32_t)v97, v69, v96);
          Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
          if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
            Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
          }
          v103 = *(System_Action_object__o **)(*(_QWORD *)(Instance + 184) + 32LL);
          if ( !v103 )
          {
            if ( !*(_DWORD *)(Instance + 224) )
            {
              j_il2cpp_runtime_class_init_0(Instance);
              Instance = (__int64)TerminalSceneComponent___c_TypeInfo;
            }
            v104 = **(Il2CppObject ***)(Instance + 184);
            v103 = (System_Action_object__o *)sub_1BDBAC4(System_Action_Action__TypeInfo);
            System_Action_object____ctor(
              v103,
              v104,
              Method_TerminalSceneComponent___c__Fadein_MapDisp_Start_b__199_1__,
              0LL);
            v105 = TerminalSceneComponent___c_TypeInfo->static_fields;
            v105->__9__199_1 = (struct System_Action_Action__o *)v103;
            sub_1BDB81C((CGThumbnailListItem_o *)&v105->__9__199_1, (int32_t)v103, v106, v107);
          }
          if ( *(_DWORD *)(v92 + 24) <= 2u )
            goto LABEL_161;
          *(_QWORD *)(v92 + 48) = v103;
          sub_1BDB81C((CGThumbnailListItem_o *)(v92 + 48), (int32_t)v103, v69, v102);
          v108 = (System_Action_object__o *)sub_1BDBAC4(System_Action_Action__TypeInfo);
          System_Action_object____ctor(
            v108,
            (Il2CppObject *)v33,
            Method_TerminalSceneComponent___c__DisplayClass199_0__Fadein_MapDisp_Start_b__2__,
            0LL);
          if ( *(_DWORD *)(v92 + 24) <= 3u )
            goto LABEL_161;
          *(_QWORD *)(v92 + 56) = v108;
          sub_1BDB81C((CGThumbnailListItem_o *)(v92 + 56), (int32_t)v108, v69, v109);
          v110 = (ActionChain_o *)sub_1BDBAC4(ActionChain_TypeInfo);
          ActionChain___ctor_48337224(v110, (System_Action_Action__array *)v92, 0LL);
          Instance = sub_1BDB920(System_Action___TypeInfo, 1LL);
          if ( Instance )
          {
            v112 = (System_Action_array *)Instance;
            if ( !*(_DWORD *)(Instance + 24) )
              goto LABEL_161;
            v113 = *v38;
            *(_QWORD *)(Instance + 32) = *v38;
            sub_1BDB81C((CGThumbnailListItem_o *)(Instance + 32), v113, v69, v111);
            if ( v110 )
            {
              v87 = (ChainableActionBase_o *)v110;
              v88 = v112;
LABEL_127:
              Instance = (__int64)ChainableActionBase__Final(v87, v88, 0LL);
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
  if ( !*(_QWORD *)v45 )
    goto LABEL_160;
  v89 = *(_DWORD *)(*(_QWORD *)v45 + 96LL);
  v90 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    v90,
    (Il2CppObject *)v33,
    Method_TerminalSceneComponent___c__DisplayClass199_0__Fadein_MapDisp_Start_b__3__,
    0LL);
  TerminalSceneComponent__StartEventDailyPoint(this, v89, v90, v91);
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

  if ( (byte_4B46D47 & 1) == 0 )
  {
    sub_1BDB878(&AvalonSceneManager_TypeInfo, end_act);
    byte_4B46D47 = 1;
  }
  v6 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v6 = AvalonSceneManager_TypeInfo;
  }
  v7 = TerminalSceneComponent__coFadein_WorldDisp(this, v6->static_fields->DEFAULT_FADE_TIME, end_act, 1, v3);
  UnityEngine_MonoBehaviour__StartCoroutine_70269772((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
}


void __fastcall TerminalSceneComponent__Fadein_WorldDisp_44205856(
        TerminalSceneComponent_o *this,
        float fade_time,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x3
  System_Collections_IEnumerator_o *v6; // x1

  v6 = TerminalSceneComponent__coFadein_WorldDisp(this, fade_time, end_act, 1, v4);
  UnityEngine_MonoBehaviour__StartCoroutine_70269772((UnityEngine_MonoBehaviour_o *)this, v6, 0LL);
}


UserServantEntity_o *__fastcall TerminalSceneComponent__GetNextStandServant(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct UserServantEntity_array *mStandSvtDatas; // x11
  __int64 v4; // x9
  int v5; // w10
  int32_t mStandSvtIdx; // w8
  int32_t v7; // w8
  UserServantEntity_o *v8; // x8

  mStandSvtDatas = this->fields.mStandSvtDatas;
  if ( !mStandSvtDatas )
    sub_1BDBAD4(this, method);
  v4 = *(_QWORD *)&mStandSvtDatas->max_length;
  if ( (int)v4 < 1 )
  {
    v5 = 0;
LABEL_12:
    v8 = 0LL;
  }
  else
  {
    v5 = 0;
    while ( 1 )
    {
      mStandSvtIdx = this->fields.mStandSvtIdx;
      if ( mStandSvtIdx + 1 < (int)v4 )
        v7 = mStandSvtIdx + 1;
      else
        v7 = 0;
      this->fields.mStandSvtIdx = v7;
      if ( v7 >= (unsigned int)v4 )
        sub_1BDBADC(this, method, v2);
      v8 = mStandSvtDatas->m_Items[v7];
      if ( v8 )
        break;
      v4 = *(_QWORD *)&mStandSvtDatas->max_length;
      if ( ++v5 >= (int)v4 )
        goto LABEL_12;
    }
  }
  if ( v5 == (_DWORD)v4 )
    this->fields.mStandSvtIdx = 0;
  return v8;
}


System_String_o *__fastcall TerminalSceneComponent__GetOverwriteCommonBg(int32_t skinType, const MethodInfo *method)
{
  __int64 v3; // x1
  TerminalSceneComponent_c *v4; // x0
  System_String_o *OVERWRITE_COMMON_BG_TYPE2_KEY; // x0
  TerminalSceneComponent_c *v6; // x0

  if ( (byte_4B46D7F & 1) == 0 )
  {
    sub_1BDB878(&string_TypeInfo, method);
    sub_1BDB878(&TerminalSceneComponent_TypeInfo, v3);
    byte_4B46D7F = 1;
  }
  if ( skinType == 4 )
  {
    v6 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v6 = TerminalSceneComponent_TypeInfo;
    }
    OVERWRITE_COMMON_BG_TYPE2_KEY = v6->static_fields->OVERWRITE_COMMON_BG_TYPE2_KEY;
    return UnityEngine_PlayerPrefs__GetString_70242896(OVERWRITE_COMMON_BG_TYPE2_KEY, 0LL);
  }
  if ( skinType == 2 )
  {
    v4 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v4 = TerminalSceneComponent_TypeInfo;
    }
    OVERWRITE_COMMON_BG_TYPE2_KEY = v4->static_fields->OVERWRITE_COMMON_BG_TYPE1_KEY;
    return UnityEngine_PlayerPrefs__GetString_70242896(OVERWRITE_COMMON_BG_TYPE2_KEY, 0LL);
  }
  return string_TypeInfo->static_fields->Empty;
}


QuestEntity_o *__fastcall TerminalSceneComponent__GetPlayAutoExecuteQuestEntity(
        TerminalSceneComponent_o *this,
        QuestEntity_array *questEntList,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  signed int max_length; // w8
  unsigned int v13; // w23
  QuestEntity_o *v14; // x21
  int32_t id; // w22
  int klass_high; // w22
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B46D6A & 1) == 0 )
  {
    sub_1BDB878(&CondType_TypeInfo, questEntList);
    sub_1BDB878(&Method_DataManager_GetMaster_SpotMaster___, v4);
    sub_1BDB878(&DataManager_TypeInfo, v5);
    sub_1BDB878(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__, v6);
    sub_1BDB878(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v7);
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v8);
    byte_4B46D6A = 1;
  }
  entity = 0LL;
  Instance = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  if ( !BYTE4(Instance[2].fields._lookup) )
  {
    if ( !questEntList )
      goto LABEL_28;
    max_length = questEntList->max_length;
    if ( max_length >= 1 )
    {
      v13 = 0;
      while ( 1 )
      {
        if ( v13 >= max_length )
          sub_1BDBADC(Instance, v10, v11);
        v14 = questEntList->m_Items[v13];
        if ( !v14 )
          break;
        id = v14->fields.id;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        Instance = (DataMasterBase_TMaster__TEntity__PKType__o *)CondType__IsQuestClear_39349364(id, -1, 0, 0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Instance = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_SpotMaster___);
          if ( !Instance )
            break;
          Instance = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                     Instance,
                                                                     &entity,
                                                                     v14->fields.spotId,
                                                                     (const MethodInfo_32E1E88 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !entity )
              break;
            klass_high = HIDWORD(entity[1].klass);
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4B3F84F )
            {
              sub_1BDB878(&TerminalPramsManager_TypeInfo, v10);
              byte_4B3F84F = 1;
            }
            Instance = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              Instance = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
            }
            if ( klass_high == HIDWORD(Instance[2].fields.list->klass) )
              return v14;
          }
        }
        max_length = questEntList->max_length;
        if ( (int)++v13 >= max_length )
          return 0LL;
      }
LABEL_28:
      sub_1BDBAD4(Instance, v10);
    }
  }
  return 0LL;
}


int32_t __fastcall TerminalSceneComponent__GetState(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  TerminalSceneComponent_o *v2; // x19
  struct CStateManager_TerminalSceneComponent__o *mFSM; // x8

  v2 = this;
  if ( (byte_4B46D6D & 1) == 0 )
  {
    this = (TerminalSceneComponent_o *)sub_1BDB878(&Method_CStateManager_TerminalSceneComponent__getState__, method);
    byte_4B46D6D = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1BDBAD4(this, method);
  return mFSM->fields.m_state;
}


void __fastcall TerminalSceneComponent__InitLighting(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  TerminalSceneComponent_c *v3; // x0
  const MethodInfo *v4; // x2

  if ( (byte_4B46D7D & 1) == 0 )
  {
    sub_1BDB878(&TerminalSceneComponent_TypeInfo, method);
    byte_4B46D7D = 1;
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall TerminalSceneComponent__IsEnabledMapOnEvent(
        TerminalSceneComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  MapEntity_array *Instance; // x0
  __int64 v7; // x1
  WarEntity_o *v8; // x0
  WarEntity_o *v9; // x19
  int max_length; // w8
  int v11; // w9
  int *v12; // x10

  if ( (byte_4B46D50 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_MapMaster___, *(_QWORD *)&eventId);
    sub_1BDB878(&Method_DataManager_GetMasterData_WarMaster___, v4);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B46D50 = 1;
  }
  if ( !eventId )
    return 1;
  Instance = (MapEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (MapEntity_array *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_303395C *)Method_DataManager_GetMasterData_WarMaster___);
  if ( !Instance )
    goto LABEL_19;
  v8 = WarMaster__getByEventId((WarMaster_o *)Instance, eventId, 0LL);
  if ( !v8 )
    return 1;
  v9 = v8;
  Instance = (MapEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (MapEntity_array *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_303395C *)Method_DataManager_GetMasterData_MapMaster___);
  if ( !Instance )
    goto LABEL_19;
  Instance = MapMaster__getList((MapMaster_o *)Instance, v9->fields.id, 0LL);
  if ( !Instance )
    goto LABEL_19;
  max_length = Instance->max_length;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      v12 = (int *)Instance->m_Items[v11];
      if ( !v12 )
        break;
      if ( v12[6] >= 1 && v12[7] >= 1 && v12[8] > 0 )
        return 1;
      if ( max_length == ++v11 )
        return 0;
    }
LABEL_19:
    sub_1BDBAD4(Instance, v7);
  }
  return 0;
}


bool __fastcall TerminalSceneComponent__IsMapActive(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  struct ScrTerminalMap_o *mTerminalMap; // x8

  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap || (this = (TerminalSceneComponent_o *)mTerminalMap->fields.dispRoot) == 0LL )
    sub_1BDBAD4(this, method);
  return UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
}


bool __fastcall TerminalSceneComponent__IsMapTouchEnabled(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  ScrTerminalMap_o *mTerminalMap; // x0
  struct ScrTerminalListTop_o *mTerminalList; // x8
  System_String_o *v8; // x20

  if ( (byte_4B46D54 & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1BDB878(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v3);
    sub_1BDB878(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v4);
    sub_1BDB878(&StringLiteral_8885/*"Map Touch Enable"*/, v5);
    byte_4B46D54 = 1;
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
    v8 = (System_String_o *)mTerminalMap;
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
      if ( !v8 )
        goto LABEL_60;
      if ( (System_String__IndexOf_62630756(v8, (System_String_o *)StringLiteral_8885/*"Map Touch Enable"*/, 0LL) & 0x80000000) != 0
        || MainMenuBar__get_IsEnableOutSideCollider(0LL) )
      {
        return 0;
      }
      mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !mTerminalMap )
        goto LABEL_60;
      if ( !CommonUI__IsActive_UserPresentBoxWindow((CommonUI_o *)mTerminalMap, 0LL) )
      {
        mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !mTerminalMap )
          goto LABEL_60;
        if ( !CommonUI__IsActive_ApRecvDlgComp((CommonUI_o *)mTerminalMap, 0LL) )
        {
          mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !mTerminalMap )
            goto LABEL_60;
          if ( !CommonUI__IsActive_EventItemSelectDlgComp((CommonUI_o *)mTerminalMap, 0LL) )
          {
            mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !mTerminalMap )
              goto LABEL_60;
            if ( !CommonUI__IsActive_CommonConfirmDialog((CommonUI_o *)mTerminalMap, 0LL) )
            {
              mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( !mTerminalMap )
                goto LABEL_60;
              if ( !CommonUI__IsActive_NotifiDialog((CommonUI_o *)mTerminalMap, 0LL) )
              {
                mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( !mTerminalMap )
                  goto LABEL_60;
                if ( !CommonUI__IsActive_TutorialBigDialog((CommonUI_o *)mTerminalMap, 0LL) )
                {
                  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  if ( !mTerminalMap )
                    goto LABEL_60;
                  if ( !CommonUI__IsActive_MasterMission((CommonUI_o *)mTerminalMap, 0LL) )
                  {
                    mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                    if ( !mTerminalMap )
                      goto LABEL_60;
                    if ( !CommonUI__IsActive_MasterProfile((CommonUI_o *)mTerminalMap, 0LL) )
                    {
                      mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                      if ( !mTerminalMap )
                        goto LABEL_60;
                      if ( !CommonUI__IsActive_MissionListDialog((CommonUI_o *)mTerminalMap, 0LL) )
                      {
                        mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                        if ( !mTerminalMap )
                          goto LABEL_60;
                        if ( !CommonUI__IsActive_AssistEffectConfirmDialog((CommonUI_o *)mTerminalMap, 0LL) )
                        {
                          mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                          if ( !mTerminalMap )
                            goto LABEL_60;
                          if ( !CommonUI__IsActive_CommandAssistConfirmDialog((CommonUI_o *)mTerminalMap, 0LL) )
                          {
                            mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                            if ( !mTerminalMap )
                              goto LABEL_60;
                            if ( !CommonUI__IsActive_AchievementExchangeConditionsDialog(
                                    (CommonUI_o *)mTerminalMap,
                                    0LL) )
                            {
                              mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                              if ( !mTerminalMap )
                                goto LABEL_60;
                              if ( !CommonUI__IsActive_SvtFrameShortDialog((CommonUI_o *)mTerminalMap, 0LL) )
                              {
                                mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                                  mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
                                  if ( !mTerminalMap )
                                    goto LABEL_60;
                                  if ( !QuestAfterAction__IsPlaying((QuestAfterAction_o *)mTerminalMap, 0LL) )
                                  {
                                    mTerminalMap = (ScrTerminalMap_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
                                            mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
                                            if ( mTerminalMap )
                                            {
                                              if ( BYTE4(mTerminalMap->fields.rootEffectP) )
                                                return 0;
                                              mTerminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                              if ( mTerminalMap )
                                                return !CommonUI__IsActive_MessageAndScrollDetailConfirmDialog(
                                                          (CommonUI_o *)mTerminalMap,
                                                          0LL);
                                            }
LABEL_60:
                                            sub_1BDBAD4(mTerminalMap, method);
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
    sub_1BDBAD4(this, 0LL);
  return shopEntity->fields.shopType == 11
      && shopEntity->fields.purchaseType == 14
      && !ShopEntity__IsEligibleForFreeFeaturesTheCostumeRelease(shopEntity, 0LL);
}


bool __fastcall TerminalSceneComponent__IsPlayChapterStart(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _BOOL4 IsWarStartAnim_k__BackingField; // w23
  _BOOL4 v6; // w24
  _BOOL4 IsWarStartActionSkip; // w19
  __int64 v8; // x1
  Il2CppObject *Instance; // x20
  TerminalPramsManager_c *v10; // x0
  WarEntity_o *WarEntityByWarID; // x0
  WarEntity_o *v12; // x20
  int64_t targetId; // x19
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  TerminalPramsManager_c *v16; // x0

  if ( (byte_4B46D66 & 1) == 0 )
  {
    sub_1BDB878(&CondType_TypeInfo, method);
    sub_1BDB878(&Method_SingletonTemplate_QuestTree__get_Instance__, v3);
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v4);
    byte_4B46D66 = 1;
  }
  IsWarStartAnim_k__BackingField = this->fields._IsWarStartAnim_k__BackingField;
  v6 = this->fields.mTutorialKind == 1;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  IsWarStartActionSkip = TerminalPramsManager__get_Debug_IsWarStartActionSkip(0LL);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B3F84F )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v8);
    byte_4B3F84F = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  if ( !Instance )
    sub_1BDBAD4(v10, v8);
  WarEntityByWarID = QuestTree__mfGetWarEntityByWarID(
                       (QuestTree_o *)Instance,
                       v10->static_fields->_WarId_k__BackingField,
                       0LL);
  if ( !WarEntityByWarID )
    return 0;
  v12 = WarEntityByWarID;
  if ( WarEntity__IsMainInterlude(WarEntityByWarID, 0LL)
    && WarEntity__IsPurchasedByRarePrism(v12, 0LL)
    && WarEntity__IsStartTypeQuest(v12, 0LL) )
  {
    targetId = v12->fields.targetId;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsQuestPhaseClear_39409100(targetId, 1, -1, 0, 0LL) )
      return 0;
  }
  else if ( !IsWarStartAnim_k__BackingField && !v6 || IsWarStartActionSkip )
  {
    return 0;
  }
  if ( !WarEntity__GetStartType(v12, 0LL) )
    return 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B3F84F )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v14);
    byte_4B3F84F = 1;
  }
  v16 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
  }
  return TerminalSceneComponent__CheckPlayChapterStart(
           (TerminalSceneComponent_o *)v16,
           v16->static_fields->_WarId_k__BackingField,
           v15);
}


bool __fastcall TerminalSceneComponent__IsTerminalListAreaWait(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  ScrTerminalListTop_o *mTerminalList; // x0

  if ( (byte_4B46D2C & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_2063/*"AREA WAIT"*/, method);
    byte_4B46D2C = 1;
  }
  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList
    || (mTerminalList = (ScrTerminalListTop_o *)ScrTerminalListTop__mfGetMyFsmP(mTerminalList, 0LL)) == 0LL
    || (mTerminalList = (ScrTerminalListTop_o *)PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)mTerminalList, 0LL)) == 0LL )
  {
    sub_1BDBAD4(mTerminalList, method);
  }
  return System_String__IndexOf_62630756((System_String_o *)mTerminalList, (System_String_o *)StringLiteral_2063/*"AREA WAIT"*/, 0LL) >= 0;
}


bool __fastcall TerminalSceneComponent__IsValidGrandBgm(
        TerminalSceneComponent_o *this,
        int32_t *index,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  BalanceConfig_c *v8; // x8
  TerminalSceneComponent___c_c *v9; // x0
  System_Int32_array *TerminalGrandBgmCommonReleaseIds; // x20
  System_Predicate_int__o *_9__213_0; // x21
  Il2CppObject *v12; // x22
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t Index_int; // w0

  if ( (byte_4B46D5A & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Array_FindIndex_int___, index);
    sub_1BDB878(&BalanceConfig_TypeInfo, v4);
    sub_1BDB878(&System_Predicate_int__TypeInfo, v5);
    sub_1BDB878(&Method_TerminalSceneComponent___c__IsValidGrandBgm_b__213_0__, v6);
    sub_1BDB878(&TerminalSceneComponent___c_TypeInfo, v7);
    byte_4B46D5A = 1;
  }
  v8 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  v9 = TerminalSceneComponent___c_TypeInfo;
  TerminalGrandBgmCommonReleaseIds = v8->static_fields->TerminalGrandBgmCommonReleaseIds;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v9 = TerminalSceneComponent___c_TypeInfo;
  }
  _9__213_0 = v9->static_fields->__9__213_0;
  if ( !_9__213_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = TerminalSceneComponent___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v9->static_fields->__9;
    _9__213_0 = (System_Predicate_int__o *)sub_1BDBAC4(System_Predicate_int__TypeInfo);
    System_Predicate_int____ctor(_9__213_0, v12, Method_TerminalSceneComponent___c__IsValidGrandBgm_b__213_0__, 0LL);
    static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    static_fields->__9__213_0 = _9__213_0;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__213_0, (int32_t)_9__213_0, v14, v15);
  }
  Index_int = System_Array__FindIndex_int_(
                TerminalGrandBgmCommonReleaseIds,
                (System_Predicate_T__o *)_9__213_0,
                (const MethodInfo_3131A64 *)Method_System_Array_FindIndex_int___);
  *index = Index_int;
  return Index_int >= 0;
}


System_Collections_IEnumerator_o *__fastcall TerminalSceneComponent__LoadAsync(
        TerminalSceneComponent_o *this,
        UserServantEntity_o *usd,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4B46D39 & 1) == 0 )
  {
    sub_1BDB878(&TerminalSceneComponent__LoadAsync_d__177_TypeInfo, usd);
    byte_4B46D39 = 1;
  }
  v7 = sub_1BDBAC4(TerminalSceneComponent__LoadAsync_d__177_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v7 + 32), (int32_t)this, v8, v9);
  *(_QWORD *)(v7 + 40) = usd;
  sub_1BDB81C((CGThumbnailListItem_o *)(v7 + 40), (int32_t)usd, v10, v11);
  *(_QWORD *)(v7 + 48) = callback;
  sub_1BDB81C((CGThumbnailListItem_o *)(v7 + 48), (int32_t)callback, v12, v13);
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
  UnityEngine_Component_o *uiRoot; // x8
  TerminalSceneComponent_o *v9; // x21
  __int64 v10; // x1
  const MethodInfo_37F9FCC *v11; // x2
  float x; // s8
  float y; // s9
  float z; // s10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  System_Nullable_Vector3__o v16; // [xsp+0h] [xbp-50h] BYREF
  System_Nullable_Vector3__o v17; // 0:x0.16
  UnityEngine_Vector3_o Value; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  hasValue = localScale.fields.hasValue;
  v6 = this;
  v16 = localScale;
  if ( (byte_4B46D7C & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Nullable_Vector3__get_HasValue__, dialog);
    this = (TerminalSceneComponent_o *)sub_1BDB878(&Method_System_Nullable_Vector3__get_Value__, v7);
    byte_4B46D7C = 1;
  }
  if ( !dialog )
    goto LABEL_13;
  this = (TerminalSceneComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)dialog, 0LL);
  uiRoot = (UnityEngine_Component_o *)v6->fields.uiRoot;
  if ( !uiRoot )
    goto LABEL_13;
  v9 = this;
  this = (TerminalSceneComponent_o *)UnityEngine_Component__get_transform(uiRoot, 0LL);
  if ( !v9 )
    goto LABEL_13;
  UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)v9, (UnityEngine_Transform_o *)this, 0LL);
  if ( hasValue )
  {
    *(_QWORD *)&v17.fields.hasValue = &v16;
    *(_QWORD *)&v17.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
    Value = System_Nullable_Vector3___get_Value(v17, v11);
    x = Value.fields.x;
    y = Value.fields.y;
    z = Value.fields.z;
  }
  else
  {
    if ( !byte_4B3E916 )
    {
      sub_1BDB878(&UnityEngine_Vector3_TypeInfo, v10);
      byte_4B3E916 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->oneVector.fields.x;
    y = static_fields->oneVector.fields.y;
    z = static_fields->oneVector.fields.z;
  }
  this = (TerminalSceneComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)dialog, 0LL);
  if ( !this )
LABEL_13:
    sub_1BDBAD4(this, dialog);
  v19.fields.x = x;
  v19.fields.y = y;
  v19.fields.z = z;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v19, 0LL);
}


void __fastcall TerminalSceneComponent__OnCorePress(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  struct BaseCore_o *mEarthCore; // x0

  mEarthCore = this->fields.mEarthCore;
  if ( !mEarthCore )
    sub_1BDBAD4(0LL, method);
  ((void (__fastcall *)(struct BaseCore_o *, Il2CppMethodPointer))mEarthCore->klass->vtable._7_OnPress.method)(
    mEarthCore,
    mEarthCore->klass->vtable._8_Setup.methodPtr);
}


void __fastcall TerminalSceneComponent__OnCoreRelease(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  BaseCore_o *mEarthCore; // x0

  mEarthCore = this->fields.mEarthCore;
  if ( !mEarthCore )
    sub_1BDBAD4(0LL, method);
  BaseCore__OnRelease(mEarthCore, 0LL);
}


void __fastcall TerminalSceneComponent__OnDestroy(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  TerminalSceneComponent_c *v6; // x0
  UnityEngine_Object_o *mInstance; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  TerminalSceneComponent_c *v10; // x0
  long double v11; // q0
  __int64 v12; // x0
  __int64 v13; // x0
  UnityEngine_Object_o *v14; // x20
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_String_o *loadEarthAssetName; // x20
  const MethodInfo *v18; // x1

  if ( (byte_4B46D34 & 1) == 0 )
  {
    sub_1BDB878(&AssetManager_TypeInfo, method);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v3);
    sub_1BDB878(&Method_SingletonMonoBehaviour_AssetManager__getInstance__, v4);
    sub_1BDB878(&TerminalSceneComponent_TypeInfo, v5);
    byte_4B46D34 = 1;
  }
  v6 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v6 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v6->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mInstance, (UnityEngine_Object_o *)this, 0LL) )
  {
    v10 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v10 = TerminalSceneComponent_TypeInfo;
    }
    v10->static_fields->mInstance = 0LL;
    sub_1BDB81C((CGThumbnailListItem_o *)TerminalSceneComponent_TypeInfo->static_fields, 0, v8, v9);
    v12 = *((_QWORD *)Method_SingletonMonoBehaviour_AssetManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
      v12 = sub_1C2BF08(v11);
    v13 = *(_QWORD *)(*(_QWORD *)(v12 + 192) + 16LL);
    if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
      v13 = sub_1C2BF08(v11);
    v14 = **(UnityEngine_Object_o ***)(v13 + 184);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Implicit(v14, 0LL) )
    {
      loadEarthAssetName = this->fields.loadEarthAssetName;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAssetStorage(loadEarthAssetName, 0LL);
    }
    this->fields.loadEarthAssetName = 0LL;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.loadEarthAssetName, 0, v15, v16);
    StandFigureManager__ReleaseCharaFigure(0LL);
    TerminalSceneComponent__ReleaseAssetToResume(this, v18);
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
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  System_String_o *String_70242896; // x0
  __int64 v33; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x24
  System_Func_object__int__o *v35; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  System_Int32_array *v37; // x0
  TerminalSceneComponent___c_c *v38; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x24
  System_Func_T__TResult__o *_9__262_0; // x25
  Il2CppObject *v41; // x26
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x0
  System_Collections_Generic_List_TSource__o *v46; // x0
  TerminalSceneComponent___c_c *v47; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x24
  System_Func_object__bool__o *_9__262_1; // x25
  Il2CppObject *v50; // x26
  struct TerminalSceneComponent___c_StaticFields *v51; // x0
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x0
  TerminalSceneComponent___c_c *v55; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x24
  System_Func_object__bool__o *_9__262_2; // x25
  Il2CppObject *v58; // x26
  struct TerminalSceneComponent___c_StaticFields *v59; // x0
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v62; // x24
  System_Func_object__bool__o *v63; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v64; // x0
  System_Collections_Generic_List_TSource__o *v65; // x0
  TerminalSceneComponent___c_c *v66; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v67; // x23
  System_Func_object__int__o *_9__262_4; // x24
  Il2CppObject *v69; // x25
  struct TerminalSceneComponent___c_StaticFields *v70; // x0
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v73; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v74; // x23
  Il2CppObject *Instance; // x24
  System_String_o *v76; // x22
  TerminalSceneComponent___c_c *v77; // x0
  System_Func_T__TResult__o *_9__262_5; // x24
  Il2CppObject *v79; // x25
  struct TerminalSceneComponent___c_StaticFields *v80; // x0
  int32_t v81; // w2
  const MethodInfo *v82; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v83; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v84; // x25
  System_String_o *v85; // x0
  TerminalSceneComponent___c_c *v86; // x8
  System_String_o *v87; // x21
  System_Func_object__int__o *_9__262_6; // x26
  Il2CppObject *v89; // x27
  struct TerminalSceneComponent___c_StaticFields *v90; // x0
  int32_t v91; // w2
  const MethodInfo *v92; // x3
  __int64 v93; // x2
  __int64 v94; // x3
  __int64 v95; // x4
  Il2CppObject *v96; // x0
  int32_t v99; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4B46D77 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Linq_Enumerable_Select_int__ShopEntity___, playerPrefsKey);
    sub_1BDB878(&Method_System_Linq_Enumerable_Select_ShopEntity__int___, v9);
    sub_1BDB878(&Method_System_Linq_Enumerable_Select_string__int___, v10);
    sub_1BDB878(&Method_System_Linq_Enumerable_Sum_ShopEntity___, v11);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToArray_int___, v12);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToList_ShopEntity___, v13);
    sub_1BDB878(&Method_System_Linq_Enumerable_Where_ShopEntity___, v14);
    sub_1BDB878(&System_Func_int__ShopEntity__TypeInfo, v15);
    sub_1BDB878(&System_Func_ShopEntity__int__TypeInfo, v16);
    sub_1BDB878(&System_Func_ShopEntity__bool__TypeInfo, v17);
    sub_1BDB878(&System_Func_string__int__TypeInfo, v18);
    sub_1BDB878(&Method_System_Int32_Parse__, v19);
    sub_1BDB878(&int_TypeInfo, v20);
    sub_1BDB878(&LocalizationManager_TypeInfo, v21);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v22);
    sub_1BDB878(&Method_TerminalSceneComponent__OpenExchangeDialogue_b__262_3__, v23);
    sub_1BDB878(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__262_0__, v24);
    sub_1BDB878(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__262_1__, v25);
    sub_1BDB878(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__262_2__, v26);
    sub_1BDB878(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__262_4__, v27);
    sub_1BDB878(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__262_5__, v28);
    sub_1BDB878(&Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__262_6__, v29);
    sub_1BDB878(&TerminalSceneComponent___c_TypeInfo, v30);
    sub_1BDB878(&StringLiteral_19677/*"freeShopIds"*/, v31);
    byte_4B46D77 = 1;
  }
  String_70242896 = UnityEngine_PlayerPrefs__GetString_70242896(playerPrefsKey, 0LL);
  if ( !String_70242896 )
    goto LABEL_34;
  v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String_70242896, 0x2Cu, 0, 0LL);
  v35 = (System_Func_object__int__o *)sub_1BDBAC4(System_Func_string__int__TypeInfo);
  System_Func_object__int____ctor(v35, 0LL, Method_System_Int32_Parse__, 0LL);
  v36 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v34,
                                                               (System_Func_TSource__TResult__o *)v35,
                                                               (const MethodInfo_3067BA8 *)Method_System_Linq_Enumerable_Select_string__int___);
  v37 = System_Linq_Enumerable__ToArray_int_(
          v36,
          (const MethodInfo_3070610 *)Method_System_Linq_Enumerable_ToArray_int___);
  v38 = TerminalSceneComponent___c_TypeInfo;
  v39 = (System_Collections_Generic_IEnumerable_TSource__o *)v37;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v38 = TerminalSceneComponent___c_TypeInfo;
  }
  _9__262_0 = (System_Func_T__TResult__o *)v38->static_fields->__9__262_0;
  if ( !_9__262_0 )
  {
    if ( !v38->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v38);
      v38 = TerminalSceneComponent___c_TypeInfo;
    }
    v41 = (Il2CppObject *)v38->static_fields->__9;
    _9__262_0 = (System_Func_T__TResult__o *)sub_1BDBAC4(System_Func_int__ShopEntity__TypeInfo);
    System_Func_int__object____ctor(
      _9__262_0,
      v41,
      Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__262_0__,
      0LL);
    static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    static_fields->__9__262_0 = (struct System_Func_int__ShopEntity__o *)_9__262_0;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__262_0, (int32_t)_9__262_0, v43, v44);
  }
  v45 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                               v39,
                                                               (System_Func_TSource__TResult__o *)_9__262_0,
                                                               (const MethodInfo_3065ABC *)Method_System_Linq_Enumerable_Select_int__ShopEntity___);
  v46 = System_Linq_Enumerable__ToList_object_(
          v45,
          (const MethodInfo_307503C *)Method_System_Linq_Enumerable_ToList_ShopEntity___);
  v47 = TerminalSceneComponent___c_TypeInfo;
  v48 = (System_Collections_Generic_IEnumerable_TSource__o *)v46;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v47 = TerminalSceneComponent___c_TypeInfo;
  }
  _9__262_1 = (System_Func_object__bool__o *)v47->static_fields->__9__262_1;
  if ( !_9__262_1 )
  {
    if ( !v47->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v47);
      v47 = TerminalSceneComponent___c_TypeInfo;
    }
    v50 = (Il2CppObject *)v47->static_fields->__9;
    _9__262_1 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_ShopEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__262_1,
      v50,
      Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__262_1__,
      0LL);
    v51 = TerminalSceneComponent___c_TypeInfo->static_fields;
    v51->__9__262_1 = (struct System_Func_ShopEntity__bool__o *)_9__262_1;
    sub_1BDB81C((CGThumbnailListItem_o *)&v51->__9__262_1, (int32_t)_9__262_1, v52, v53);
  }
  v54 = System_Linq_Enumerable__Where_object_(
          v48,
          (System_Func_TSource__bool__o *)_9__262_1,
          (const MethodInfo_3077440 *)Method_System_Linq_Enumerable_Where_ShopEntity___);
  v55 = TerminalSceneComponent___c_TypeInfo;
  v56 = v54;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v55 = TerminalSceneComponent___c_TypeInfo;
  }
  _9__262_2 = (System_Func_object__bool__o *)v55->static_fields->__9__262_2;
  if ( !_9__262_2 )
  {
    if ( !v55->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v55);
      v55 = TerminalSceneComponent___c_TypeInfo;
    }
    v58 = (Il2CppObject *)v55->static_fields->__9;
    _9__262_2 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_ShopEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__262_2,
      v58,
      Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__262_2__,
      0LL);
    v59 = TerminalSceneComponent___c_TypeInfo->static_fields;
    v59->__9__262_2 = (struct System_Func_ShopEntity__bool__o *)_9__262_2;
    sub_1BDB81C((CGThumbnailListItem_o *)&v59->__9__262_2, (int32_t)_9__262_2, v60, v61);
  }
  v62 = System_Linq_Enumerable__Where_object_(
          v56,
          (System_Func_TSource__bool__o *)_9__262_2,
          (const MethodInfo_3077440 *)Method_System_Linq_Enumerable_Where_ShopEntity___);
  v63 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_ShopEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v63,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent__OpenExchangeDialogue_b__262_3__,
    0LL);
  v64 = System_Linq_Enumerable__Where_object_(
          v62,
          (System_Func_TSource__bool__o *)v63,
          (const MethodInfo_3077440 *)Method_System_Linq_Enumerable_Where_ShopEntity___);
  v65 = System_Linq_Enumerable__ToList_object_(
          v64,
          (const MethodInfo_307503C *)Method_System_Linq_Enumerable_ToList_ShopEntity___);
  v66 = TerminalSceneComponent___c_TypeInfo;
  v67 = (System_Collections_Generic_IEnumerable_TSource__o *)v65;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v66 = TerminalSceneComponent___c_TypeInfo;
  }
  _9__262_4 = (System_Func_object__int__o *)v66->static_fields->__9__262_4;
  if ( !_9__262_4 )
  {
    if ( !v66->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v66);
      v66 = TerminalSceneComponent___c_TypeInfo;
    }
    v69 = (Il2CppObject *)v66->static_fields->__9;
    _9__262_4 = (System_Func_object__int__o *)sub_1BDBAC4(System_Func_ShopEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__262_4,
      v69,
      Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__262_4__,
      0LL);
    v70 = TerminalSceneComponent___c_TypeInfo->static_fields;
    v70->__9__262_4 = (struct System_Func_ShopEntity__int__o *)_9__262_4;
    sub_1BDB81C((CGThumbnailListItem_o *)&v70->__9__262_4, (int32_t)_9__262_4, v71, v72);
  }
  v73 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v67,
                                                               (System_Func_TSource__TResult__o *)_9__262_4,
                                                               (const MethodInfo_3067BA8 *)Method_System_Linq_Enumerable_Select_ShopEntity__int___);
  String_70242896 = (System_String_o *)System_Linq_Enumerable__ToArray_int_(
                                         v73,
                                         (const MethodInfo_3070610 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !String_70242896 )
    goto LABEL_34;
  v74 = (System_Collections_Generic_IEnumerable_TSource__o *)String_70242896;
  if ( String_70242896[1].klass )
  {
    if ( System_String__op_Equality(playerPrefsKey, (System_String_o *)StringLiteral_19677/*"freeShopIds"*/, 0LL) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v76 = LocalizationManager__Get(localizationKeyForTitle, 0LL);
      String_70242896 = LocalizationManager__Get(localizationKeyForDetail, 0LL);
      if ( !Instance )
        goto LABEL_34;
      goto LABEL_51;
    }
    v77 = TerminalSceneComponent___c_TypeInfo;
    if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
      v77 = TerminalSceneComponent___c_TypeInfo;
    }
    _9__262_5 = (System_Func_T__TResult__o *)v77->static_fields->__9__262_5;
    if ( !_9__262_5 )
    {
      if ( !v77->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v77);
        v77 = TerminalSceneComponent___c_TypeInfo;
      }
      v79 = (Il2CppObject *)v77->static_fields->__9;
      _9__262_5 = (System_Func_T__TResult__o *)sub_1BDBAC4(System_Func_int__ShopEntity__TypeInfo);
      System_Func_int__object____ctor(
        _9__262_5,
        v79,
        Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__262_5__,
        0LL);
      v80 = TerminalSceneComponent___c_TypeInfo->static_fields;
      v80->__9__262_5 = (struct System_Func_int__ShopEntity__o *)_9__262_5;
      sub_1BDB81C((CGThumbnailListItem_o *)&v80->__9__262_5, (int32_t)_9__262_5, v81, v82);
    }
    v83 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                                 v74,
                                                                 (System_Func_TSource__TResult__o *)_9__262_5,
                                                                 (const MethodInfo_3065ABC *)Method_System_Linq_Enumerable_Select_int__ShopEntity___);
    v84 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                 v83,
                                                                 (const MethodInfo_307503C *)Method_System_Linq_Enumerable_ToList_ShopEntity___);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v76 = LocalizationManager__Get(localizationKeyForTitle, 0LL);
    v85 = LocalizationManager__Get(localizationKeyForDetail, 0LL);
    v86 = TerminalSceneComponent___c_TypeInfo;
    v87 = v85;
    if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
      v86 = TerminalSceneComponent___c_TypeInfo;
    }
    _9__262_6 = (System_Func_object__int__o *)v86->static_fields->__9__262_6;
    if ( !_9__262_6 )
    {
      if ( !v86->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v86);
        v86 = TerminalSceneComponent___c_TypeInfo;
      }
      v89 = (Il2CppObject *)v86->static_fields->__9;
      _9__262_6 = (System_Func_object__int__o *)sub_1BDBAC4(System_Func_ShopEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__262_6,
        v89,
        Method_TerminalSceneComponent___c__OpenExchangeDialogue_b__262_6__,
        0LL);
      v90 = TerminalSceneComponent___c_TypeInfo->static_fields;
      v90->__9__262_6 = (struct System_Func_ShopEntity__int__o *)_9__262_6;
      sub_1BDB81C((CGThumbnailListItem_o *)&v90->__9__262_6, (int32_t)_9__262_6, v91, v92);
    }
    v99 = System_Linq_Enumerable__Sum_object_(
            v84,
            (System_Func_TSource__int__o *)_9__262_6,
            (const MethodInfo_306F328 *)Method_System_Linq_Enumerable_Sum_ShopEntity___);
    v96 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v99, v93, v94, v95);
    String_70242896 = System_String__Format(v87, v96, 0LL);
    if ( Instance )
    {
LABEL_51:
      CommonUI__OpenAchievementExchangeConditionsDialog(
        (CommonUI_o *)Instance,
        (System_Int32_array *)v74,
        v76,
        String_70242896,
        action,
        0LL);
      goto LABEL_52;
    }
LABEL_34:
    sub_1BDBAD4(String_70242896, v33);
  }
  ActionExtensions__Call(action, 0LL);
LABEL_52:
  UnityEngine_PlayerPrefs__DeleteKey(playerPrefsKey, 0LL);
}


void __fastcall TerminalSceneComponent__PlayAutoExecuteQuest(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
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
  __int64 v14; // x21
  QuestMaster_o *Master_object; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  __int64 v19; // x22
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  TerminalSceneComponent_o *QuestEntityListByType; // x0
  const MethodInfo *v23; // x2
  QuestEntity_o *PlayAutoExecuteQuestEntity; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  QuestMaster_o *v27; // x23
  int32_t v28; // w24
  TerminalPramsManager_c *v29; // x0
  int32_t list_high; // w23
  NetworkManager_ResultCallbackFunc_o *v31; // x19
  Il2CppObject *Request_object; // x19
  int32_t items_high; // w21
  bool HasFlag; // w0
  ScrTerminalListTop_o *mTerminalList; // x22
  bool v36; // w23
  TerminalPramsManager_c *v37; // x0
  int32_t QuestId_k__BackingField; // w19
  int32_t PhaseCnt_k__BackingField; // w23
  System_Action_o *v40; // x20
  int32_t klass_high; // w21
  int32_t v42; // w23

  if ( (byte_4B46D69 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_DataManager_GetMaster_QuestMaster___, v3);
    sub_1BDB878(&DataManager_TypeInfo, v4);
    sub_1BDB878(&Method_NetworkManager_getRequest_BattleSetupScenarioRequest___, v5);
    sub_1BDB878(&NetworkManager_TypeInfo, v6);
    sub_1BDB878(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_1BDB878(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v8);
    sub_1BDB878(&Method_SingletonTemplate_QuestTree__get_Instance__, v9);
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v10);
    sub_1BDB878(&Method_TerminalSceneComponent___c__DisplayClass232_0__PlayAutoExecuteQuest_b__0__, v11);
    sub_1BDB878(&Method_TerminalSceneComponent___c__DisplayClass232_0__PlayAutoExecuteQuest_b__1__, v12);
    sub_1BDB878(&TerminalSceneComponent___c__DisplayClass232_0_TypeInfo, v13);
    byte_4B46D69 = 1;
  }
  v14 = sub_1BDBAC4(TerminalSceneComponent___c__DisplayClass232_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_71;
  *(_QWORD *)(v14 + 24) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v14 + 24), (int32_t)this, v17, v18);
  *(_QWORD *)(v14 + 16) = 0LL;
  v19 = v14 + 16;
  sub_1BDB81C((CGThumbnailListItem_o *)(v14 + 16), 0, v20, v21);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Master_object )
    goto LABEL_71;
  QuestEntityListByType = (TerminalSceneComponent_o *)QuestMaster__GetQuestEntityListByType(Master_object, 8, 0LL);
  if ( QuestEntityListByType )
  {
    PlayAutoExecuteQuestEntity = TerminalSceneComponent__GetPlayAutoExecuteQuestEntity(
                                   QuestEntityListByType,
                                   (QuestEntity_array *)QuestEntityListByType,
                                   v23);
    *(_QWORD *)v19 = PlayAutoExecuteQuestEntity;
    sub_1BDB81C((CGThumbnailListItem_o *)(v14 + 16), (int32_t)PlayAutoExecuteQuestEntity, v25, v26);
    if ( *(_QWORD *)v19 )
    {
      Master_object = (QuestMaster_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !*(_QWORD *)v19 )
        goto LABEL_71;
      if ( !Master_object )
        goto LABEL_71;
      Master_object = (QuestMaster_o *)QuestTree__GetQuestInfo(
                                         (QuestTree_o *)Master_object,
                                         *(_DWORD *)(*(_QWORD *)v19 + 16LL),
                                         0LL);
      if ( !Master_object )
        goto LABEL_71;
      v27 = Master_object;
      if ( Master_object->fields.revision == 1 )
      {
        if ( !*(_QWORD *)v19 )
          goto LABEL_71;
        v28 = *(_DWORD *)(*(_QWORD *)v19 + 16LL);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4B41425 )
        {
          sub_1BDB878(&TerminalPramsManager_TypeInfo, v16);
          byte_4B41425 = 1;
        }
        v29 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v29 = TerminalPramsManager_TypeInfo;
        }
        v29->static_fields->_QuestId_k__BackingField = v28;
        list_high = HIDWORD(v27->fields.list);
        if ( !byte_4B41429 )
        {
          sub_1BDB878(&TerminalPramsManager_TypeInfo, v16);
          v29 = TerminalPramsManager_TypeInfo;
          byte_4B41429 = 1;
        }
        if ( !v29->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v29);
          v29 = TerminalPramsManager_TypeInfo;
        }
        v29->static_fields->_PhaseCnt_k__BackingField = list_high;
        Master_object = *(QuestMaster_o **)v19;
        if ( !*(_QWORD *)v19 )
          goto LABEL_71;
        if ( QuestEntity__HasFlag((QuestEntity_o *)Master_object, 2LL, 0LL) )
        {
          Master_object = (QuestMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
          if ( Master_object )
          {
            BYTE4(Master_object[2].fields._lookup) = 1;
            v31 = (NetworkManager_ResultCallbackFunc_o *)sub_1BDBAC4(NetworkManager_ResultCallbackFunc_TypeInfo);
            NetworkManager_ResultCallbackFunc___ctor(
              v31,
              (Il2CppObject *)v14,
              Method_TerminalSceneComponent___c__DisplayClass232_0__PlayAutoExecuteQuest_b__1__,
              0LL);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            Request_object = NetworkManager__getRequest_object_(
                               v31,
                               (const MethodInfo_30BC7D4 *)Method_NetworkManager_getRequest_BattleSetupScenarioRequest___);
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4B3EFD0 )
            {
              sub_1BDB878(&TerminalPramsManager_TypeInfo, v16);
              byte_4B3EFD0 = 1;
            }
            Master_object = (QuestMaster_o *)TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              Master_object = (QuestMaster_o *)TerminalPramsManager_TypeInfo;
            }
            items_high = HIDWORD(Master_object[2].fields.list->fields.items);
            if ( !byte_4B3EFCF )
            {
              sub_1BDB878(&TerminalPramsManager_TypeInfo, v16);
              Master_object = (QuestMaster_o *)TerminalPramsManager_TypeInfo;
              byte_4B3EFCF = 1;
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
          sub_1BDBAD4(Master_object, v16);
        }
        Master_object = *(QuestMaster_o **)v19;
        if ( !*(_QWORD *)v19 )
          goto LABEL_71;
        HasFlag = QuestEntity__HasFlag((QuestEntity_o *)Master_object, 0x400000LL, 0LL);
        mTerminalList = this->fields.mTerminalList;
        v36 = HasFlag;
        if ( TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          if ( HasFlag )
          {
LABEL_45:
            if ( !byte_4B3EFD0 )
            {
              sub_1BDB878(&TerminalPramsManager_TypeInfo, v16);
              byte_4B3EFD0 = 1;
            }
            v37 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v37 = TerminalPramsManager_TypeInfo;
            }
            QuestId_k__BackingField = v37->static_fields->_QuestId_k__BackingField;
            if ( !byte_4B3EFCF )
            {
              sub_1BDB878(&TerminalPramsManager_TypeInfo, v16);
              v37 = TerminalPramsManager_TypeInfo;
              byte_4B3EFCF = 1;
            }
            if ( !v37->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v37);
              v37 = TerminalPramsManager_TypeInfo;
            }
            PhaseCnt_k__BackingField = v37->static_fields->_PhaseCnt_k__BackingField;
            v40 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
            System_Action___ctor(
              v40,
              (Il2CppObject *)v14,
              Method_TerminalSceneComponent___c__DisplayClass232_0__PlayAutoExecuteQuest_b__0__,
              0LL);
            if ( !mTerminalList )
              goto LABEL_71;
            ScrTerminalListTop__StartQuestBeforeAction(
              mTerminalList,
              QuestId_k__BackingField,
              PhaseCnt_k__BackingField + 1,
              v40,
              0LL);
            return;
          }
        }
        else
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( v36 )
            goto LABEL_45;
        }
        if ( !byte_4B3F84F )
        {
          sub_1BDB878(&TerminalPramsManager_TypeInfo, v16);
          byte_4B3F84F = 1;
        }
        Master_object = (QuestMaster_o *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          Master_object = (QuestMaster_o *)TerminalPramsManager_TypeInfo;
        }
        klass_high = HIDWORD(Master_object[2].fields.list->klass);
        if ( !byte_4B3EFD0 )
        {
          sub_1BDB878(&TerminalPramsManager_TypeInfo, v16);
          Master_object = (QuestMaster_o *)TerminalPramsManager_TypeInfo;
          byte_4B3EFD0 = 1;
        }
        if ( !LODWORD(Master_object[3].monitor) )
        {
          j_il2cpp_runtime_class_init_0(Master_object);
          Master_object = (QuestMaster_o *)TerminalPramsManager_TypeInfo;
        }
        v42 = HIDWORD(Master_object[2].fields.list->fields.items);
        if ( !byte_4B3EFCF )
        {
          sub_1BDB878(&TerminalPramsManager_TypeInfo, v16);
          Master_object = (QuestMaster_o *)TerminalPramsManager_TypeInfo;
          byte_4B3EFCF = 1;
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
          v42,
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  WarEntity_o *IsPlayChapterStart; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  Il2CppObject *Instance; // x20
  WarEntity_o *v16; // x20
  int32_t StartType; // w0
  __int64 v18; // x1
  BattleScriptRootComponent_TalkScriptInfo_o *v19; // x21
  TerminalPramsManager_c *v20; // x0
  int32_t v21; // w22
  TerminalPramsManager_c *v22; // x0
  int32_t targetId; // w22
  int32_t WarId_k__BackingField; // w23
  TerminalPramsManager_c *v25; // x0
  BalanceConfig_c *v26; // x8
  int32_t v27; // w22
  TerminalSceneComponent_c *v28; // x0
  __int64 v29; // x1
  int64_t v30; // x22
  TerminalPramsManager_c *v31; // x0
  int32_t v32; // w22
  TerminalPramsManager_c *v33; // x0

  if ( (byte_4B46D68 & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, end_act);
    sub_1BDB878(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    sub_1BDB878(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v6);
    sub_1BDB878(&Method_SingletonTemplate_QuestTree__get_Instance__, v7);
    sub_1BDB878(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo, v8);
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v9);
    sub_1BDB878(&TerminalSceneComponent_TypeInfo, v10);
    byte_4B46D68 = 1;
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
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.OnResumeFromChapterStart, (int32_t)end_act, v13, v14);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B3F84F )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v12);
    byte_4B3F84F = 1;
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
  v16 = IsPlayChapterStart;
  StartType = WarEntity__GetStartType(IsPlayChapterStart, 0LL);
  if ( StartType == 2 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B3F84F )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, v18);
      byte_4B3F84F = 1;
    }
    v22 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v22 = TerminalPramsManager_TypeInfo;
    }
    targetId = v16->fields.targetId;
    WarId_k__BackingField = v22->static_fields->_WarId_k__BackingField;
    v19 = (BattleScriptRootComponent_TalkScriptInfo_o *)sub_1BDBAC4(BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
    BattleScriptRootComponent_TalkScriptInfo___ctor_46573360(v19, WarId_k__BackingField, targetId, 0, 1, 0, 0, 0, 0LL);
  }
  else
  {
    v19 = 0LL;
    if ( StartType == 1 )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4B3F84F )
      {
        sub_1BDB878(&TerminalPramsManager_TypeInfo, v18);
        byte_4B3F84F = 1;
      }
      v20 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v20 = TerminalPramsManager_TypeInfo;
      }
      v21 = v20->static_fields->_WarId_k__BackingField;
      v19 = (BattleScriptRootComponent_TalkScriptInfo_o *)sub_1BDBAC4(BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
      BattleScriptRootComponent_TalkScriptInfo___ctor_46573360(v19, v21, 0, 0, 1, 0, 0, 0, 0LL);
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B3F84F )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v18);
    byte_4B3F84F = 1;
  }
  v25 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v25 = TerminalPramsManager_TypeInfo;
  }
  v26 = BalanceConfig_TypeInfo;
  v27 = v25->static_fields->_WarId_k__BackingField;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v26 = BalanceConfig_TypeInfo;
  }
  if ( v27 == v26->static_fields->OrdealCallWarId )
  {
    v28 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v28 = TerminalSceneComponent_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v28->static_fields->ORDEAL_CALL_CHAPTER_PLAY_STATE_KEY, 1, 0LL);
  }
  if ( WarEntity__HasFlag(v16, 0x8000, 0LL) )
  {
    v30 = v16->fields.targetId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B41425 )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, v29);
      byte_4B41425 = 1;
    }
    v31 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v31 = TerminalPramsManager_TypeInfo;
    }
    v31->static_fields->_QuestId_k__BackingField = v30;
    v32 = v16->fields.targetId;
    if ( !byte_4B417DA )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, v29);
      v31 = TerminalPramsManager_TypeInfo;
      byte_4B417DA = 1;
    }
    if ( !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      v31 = TerminalPramsManager_TypeInfo;
    }
    v31->static_fields->_LastPlayedQuestId_k__BackingField = v32;
    TerminalPramsManager__CheckClearSelectedStoryQuestId(v16->fields.targetId, 0LL);
    TerminalPramsManager__PlayQuestSave_SaveData(0LL);
    IsPlayChapterStart = (WarEntity_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( IsPlayChapterStart )
    {
      MissionNotifyManager__StartPause((MissionNotifyManager_o *)IsPlayChapterStart, 0LL);
      IsPlayChapterStart = (WarEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( IsPlayChapterStart )
      {
        AvalonSceneManager__changeScene((AvalonSceneManager_o *)IsPlayChapterStart, 38, 2, (Il2CppObject *)v19, 0LL);
        return;
      }
    }
LABEL_64:
    sub_1BDBAD4(IsPlayChapterStart, v12);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B416D2 )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v29);
    byte_4B416D2 = 1;
  }
  v33 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v33 = TerminalPramsManager_TypeInfo;
  }
  v33->static_fields->meSceneStatus = 3;
  IsPlayChapterStart = (WarEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !IsPlayChapterStart )
    goto LABEL_64;
  AvalonSceneManager__pushScene((AvalonSceneManager_o *)IsPlayChapterStart, 38, 2, (Il2CppObject *)v19, 0LL);
}


void __fastcall TerminalSceneComponent__PlayEventTutorial(
        TerminalSceneComponent_o *this,
        System_Action_o *callbackAfter,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x20
  UnityEngine_Component_o *EventID; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x1
  TerminalPramsManager_c *v16; // x0
  struct ScrTerminalListTop_o *mTerminalList; // x8
  int32_t v18; // w21
  System_Action_o *v19; // x22
  struct ScrTerminalMap_o *mTerminalMap; // x8
  struct MapControl_MapInfo_o *mMapInfo; // x8

  if ( (byte_4B46D6B & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, callbackAfter);
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v5);
    sub_1BDB878(&Method_TerminalSceneComponent___c__DisplayClass237_0__PlayEventTutorial_b__0__, v6);
    sub_1BDB878(&TerminalSceneComponent___c__DisplayClass237_0_TypeInfo, v7);
    byte_4B46D6B = 1;
  }
  v8 = sub_1BDBAC4(TerminalSceneComponent___c__DisplayClass237_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_16;
  *(_QWORD *)(v8 + 16) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v8 + 16), (int32_t)this, v11, v12);
  *(_QWORD *)(v8 + 24) = callbackAfter;
  sub_1BDB81C((CGThumbnailListItem_o *)(v8 + 24), (int32_t)callbackAfter, v13, v14);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B3F84F )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v15);
    byte_4B3F84F = 1;
  }
  v16 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
  }
  EventID = (UnityEngine_Component_o *)WarMaster__getEventID(v16->static_fields->_WarId_k__BackingField, 0LL);
  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_16;
  v18 = (int)EventID;
  EventID = (UnityEngine_Component_o *)mTerminalList->fields.mActionBgColl;
  if ( !EventID
    || (EventID = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(EventID, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)EventID, 1, 0LL),
        v19 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo),
        System_Action___ctor(
          v19,
          (Il2CppObject *)v8,
          Method_TerminalSceneComponent___c__DisplayClass237_0__PlayEventTutorial_b__0__,
          0LL),
        (mTerminalMap = this->fields.mTerminalMap) == 0LL)
    || (mMapInfo = mTerminalMap->fields.mMapInfo) == 0LL )
  {
LABEL_16:
    sub_1BDBAD4(EventID, v10);
  }
  EventTutorialMaster__CheckTutorial(v18, 1, v19, mMapInfo->fields.mapId, 0, 0, 0, 0LL);
}


void __fastcall TerminalSceneComponent__PlayEventTutorialWithoutAfterAction(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x1
  TerminalPramsManager_c *v9; // x0
  struct ScrTerminalMap_o *mTerminalMap; // x8
  struct MapControl_MapInfo_o *mMapInfo; // x8

  if ( (byte_4B46D6C & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, callback);
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v5);
    byte_4B46D6C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  if ( QuestAfterAction__IsPlaying((QuestAfterAction_o *)Instance, 0LL) )
  {
    ActionExtensions__Call(callback, 0LL);
    return;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B3F84F )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v8);
    byte_4B3F84F = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  Instance = (Il2CppObject *)WarMaster__getEventID(v9->static_fields->_WarId_k__BackingField, 0LL);
  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap || (mMapInfo = mTerminalMap->fields.mMapInfo) == 0LL )
LABEL_15:
    sub_1BDBAD4(Instance, v7);
  EventTutorialMaster__CheckTutorial((int32_t)Instance, 90, callback, mMapInfo->fields.mapId, 0, 0, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalSceneComponent__PlayGrandBgm(
        TerminalSceneComponent_o *this,
        int32_t index,
        System_Action_o *onLoadFinishCallback,
        const MethodInfo *method)
{
  BalanceConfig_c *v7; // x0
  struct System_String_array *TerminalGrandBgmNames; // x8

  if ( (byte_4B46D5B & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, *(_QWORD *)&index);
    byte_4B46D5B = 1;
  }
  if ( (index & 0x80000000) == 0 )
  {
    v7 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v7 = BalanceConfig_TypeInfo;
    }
    TerminalGrandBgmNames = v7->static_fields->TerminalGrandBgmNames;
    if ( !TerminalGrandBgmNames )
      goto LABEL_13;
    if ( (signed int)TerminalGrandBgmNames->max_length <= index )
      return;
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      TerminalGrandBgmNames = BalanceConfig_TypeInfo->static_fields->TerminalGrandBgmNames;
      if ( !TerminalGrandBgmNames )
LABEL_13:
        sub_1BDBAD4(v7, *(_QWORD *)&index);
    }
    if ( TerminalGrandBgmNames->max_length <= index )
      sub_1BDBADC(v7, *(_QWORD *)&index, onLoadFinishCallback);
    TerminalSceneComponent__playBgm(this, TerminalGrandBgmNames->m_Items[index], onLoadFinishCallback, method);
  }
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
    sub_1BDBAD4(mQuestInformation, method);
  return QuestInformationComponent__isListBuilding(mQuestInformation, 0LL);
}


int32_t __fastcall TerminalSceneComponent__QuestInfoShowing(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  struct QuestInformationComponent_o *mQuestInformation; // x8

  mQuestInformation = this->fields.mQuestInformation;
  if ( !mQuestInformation )
    sub_1BDBAD4(this, method);
  return mQuestInformation->fields.settedQuestId;
}


void __fastcall TerminalSceneComponent__RebootToNetworkError(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Instance; // x19
  System_String_o *v9; // x20
  System_String_o *v10; // x0
  __int64 v11; // x1
  TerminalSceneComponent___c_c *v12; // x8
  System_String_o *v13; // x21
  ErrorDialog_ClickDelegate_o *_9__219_0; // x22
  Il2CppObject *v15; // x23
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4B46D5F & 1) == 0 )
  {
    sub_1BDB878(&ErrorDialog_ClickDelegate_TypeInfo, method);
    sub_1BDB878(&LocalizationManager_TypeInfo, v2);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1BDB878(&Method_TerminalSceneComponent___c__RebootToNetworkError_b__219_0__, v4);
    sub_1BDB878(&TerminalSceneComponent___c_TypeInfo, v5);
    sub_1BDB878(&StringLiteral_13341/*"TERMINAL_NETWORK_ERROR_DIALOG_TITLE"*/, v6);
    sub_1BDB878(&StringLiteral_13340/*"TERMINAL_NETWORK_ERROR_DIALOG_MESSAGE"*/, v7);
    byte_4B46D5F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_13341/*"TERMINAL_NETWORK_ERROR_DIALOG_TITLE"*/, 0LL);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_13340/*"TERMINAL_NETWORK_ERROR_DIALOG_MESSAGE"*/, 0LL);
  v12 = TerminalSceneComponent___c_TypeInfo;
  v13 = v10;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v12 = TerminalSceneComponent___c_TypeInfo;
  }
  _9__219_0 = v12->static_fields->__9__219_0;
  if ( !_9__219_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = TerminalSceneComponent___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v12->static_fields->__9;
    _9__219_0 = (ErrorDialog_ClickDelegate_o *)sub_1BDBAC4(ErrorDialog_ClickDelegate_TypeInfo);
    ErrorDialog_ClickDelegate___ctor(
      _9__219_0,
      v15,
      Method_TerminalSceneComponent___c__RebootToNetworkError_b__219_0__,
      0LL);
    static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    static_fields->__9__219_0 = _9__219_0;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__219_0, (int32_t)_9__219_0, v17, v18);
  }
  if ( !Instance )
    sub_1BDBAD4(v10, v11);
  CommonUI__OpenErrorDialog((CommonUI_o *)Instance, v9, v13, _9__219_0, 1, 0LL);
}


void __fastcall TerminalSceneComponent__RegenerateEarthView(
        TerminalSceneComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x20
  UnityEngine_GameObject_o *v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UnityEngine_Object_o *mEarthCoreObj; // x22
  struct UnityEngine_GameObject_o **p_mEarthCoreObj; // x21
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  UnityEngine_Object_o *v19; // x22
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Action_o *v22; // x21
  const MethodInfo *v23; // x2

  if ( (byte_4B46D37 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, callback);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v5);
    sub_1BDB878(&Method_TerminalSceneComponent___c__DisplayClass174_0__RegenerateEarthView_b__0__, v6);
    sub_1BDB878(&TerminalSceneComponent___c__DisplayClass174_0_TypeInfo, v7);
    byte_4B46D37 = 1;
  }
  v8 = sub_1BDBAC4(TerminalSceneComponent___c__DisplayClass174_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_12;
  *(_QWORD *)(v8 + 16) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v8 + 16), (int32_t)this, v11, v12);
  *(_QWORD *)(v8 + 24) = callback;
  sub_1BDB81C((CGThumbnailListItem_o *)(v8 + 24), (int32_t)callback, v13, v14);
  mEarthCoreObj = (UnityEngine_Object_o *)this->fields.mEarthCoreObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_mEarthCoreObj = &this->fields.mEarthCoreObj;
  if ( UnityEngine_Object__op_Inequality(mEarthCoreObj, 0LL, 0LL) )
  {
    v9 = *p_mEarthCoreObj;
    if ( *p_mEarthCoreObj )
    {
      UnityEngine_GameObject__SetActive(v9, 0, 0LL);
      v19 = (UnityEngine_Object_o *)*p_mEarthCoreObj;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70284200(v19, 0LL);
      goto LABEL_11;
    }
LABEL_12:
    sub_1BDBAD4(v9, v10);
  }
LABEL_11:
  this->fields.mEarthCoreObj = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.mEarthCoreObj, 0, v17, v18);
  this->fields.mEarthCore = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.mEarthCore, 0, v20, v21);
  v22 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v8,
    Method_TerminalSceneComponent___c__DisplayClass174_0__RegenerateEarthView_b__0__,
    0LL);
  TerminalSceneComponent__SetEarthView(this, v22, v23);
}


void __fastcall TerminalSceneComponent__ReleaseAssetToResume(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mTerminalList; // x20
  TitleInfoControl_o *v4; // x0
  __int64 v5; // x1
  struct ScrTerminalListTop_o *v6; // x8
  UnityEngine_Object_o *mQuestBoardListViewManager; // x20
  UnityEngine_Object_o *mTitleInfo; // x20

  if ( (byte_4B46D40 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B46D40 = 1;
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
    sub_1BDBAD4(v4, v5);
  }
}


void __fastcall TerminalSceneComponent__SaveCampaignDirectBonusData(
        TerminalSceneComponent_o *this,
        CommonUI_CampaignDirectBonusData_array *campaignDirectBonus,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_4B46D71 & 1) == 0 )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, campaignDirectBonus);
    byte_4B46D71 = 1;
  }
  if ( campaignDirectBonus )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B41F4B )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, campaignDirectBonus);
      byte_4B41F4B = 1;
    }
    v5 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v5 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v5->static_fields;
    static_fields->_CampaignDirectBonus_k__BackingField = campaignDirectBonus;
    sub_1BDB81C(
      (CGThumbnailListItem_o *)&static_fields->_CampaignDirectBonus_k__BackingField,
      (int32_t)campaignDirectBonus,
      (int32_t)method,
      v3);
    TerminalPramsManager__CampaignDirectBonus_SaveData(0LL);
  }
}


void __fastcall TerminalSceneComponent__SendMessageStartUpAndResume(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  CommonUI_o *v6; // x20
  struct TerminalSceneComponent_PlayChapterStartCallback_o *v7; // x8
  CGThumbnailListItem_o *p_OnResumeFromChapterStart; // x19
  struct TerminalSceneComponent_PlayChapterStartCallback_o *OnResumeFromChapterStart; // t1
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4B46D3A & 1) == 0 )
  {
    sub_1BDB878(&AvalonSceneManager_TypeInfo, method);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_4B46D3A = 1;
  }
  SceneRootComponent__sendMessageStartUp((SceneRootComponent_o *)this, 0LL);
  if ( this->fields.isFadeInAfterResumeLoad )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v6 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    if ( !v6 )
      sub_1BDBAD4(Instance, v5);
    CommonUI__maskFadein(v6, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
    this->fields.isFadeInAfterResumeLoad = 0;
  }
  OnResumeFromChapterStart = this->fields.OnResumeFromChapterStart;
  p_OnResumeFromChapterStart = (CGThumbnailListItem_o *)&this->fields.OnResumeFromChapterStart;
  v7 = OnResumeFromChapterStart;
  if ( OnResumeFromChapterStart )
  {
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v7->fields.m_target)(
      v7->fields.original_method_info,
      1LL,
      *(_QWORD *)&v7->fields.extra_arg);
    p_OnResumeFromChapterStart->klass = 0LL;
    sub_1BDB81C(p_OnResumeFromChapterStart, 0, v10, v11);
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
    sub_1BDBAD4(this, isEnable);
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
  UnityEngine_Object_o *GameObjectWithLog; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1

  if ( (byte_4B46D7E & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, isActive);
    sub_1BDB878(&StringLiteral_5317/*"Directional light"*/, v5);
    byte_4B46D7E = 1;
  }
  GameObjectWithLog = (UnityEngine_Object_o *)GameObjectExtensions__FindGameObjectWithLog(
                                                this->fields.mEarthCoreObj,
                                                (System_String_o *)StringLiteral_5317/*"Directional light"*/,
                                                0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality(GameObjectWithLog, 0LL, 0LL);
  if ( !v7 )
  {
    if ( !GameObjectWithLog )
      sub_1BDBAD4(v7, v8);
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

  if ( (byte_4B46D45 & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, isDisp);
    byte_4B46D45 = 1;
  }
  mTerminalServant = (UnityEngine_Component_o *)this->fields.mTerminalServant;
  if ( !mTerminalServant
    || (gameObject = UnityEngine_Component__get_gameObject(mTerminalServant, 0LL),
        (mTerminalServant = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(gameObject, 0LL)) == 0LL)
    || (mTerminalServant = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mTerminalServant, 0LL)) == 0LL
    || (mTerminalServant = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                        (UnityEngine_GameObject_o *)mTerminalServant,
                                                        (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___)) == 0LL )
  {
    sub_1BDBAD4(mTerminalServant, isDisp);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x20
  UnityEngine_Camera_o *mEarthEffCamera; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  UnityEngine_Object_o *mEarthCore; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v23; // x0
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  TerminalSceneComponent_c *v27; // x0
  System_String_o *EARTH_ASSET_NAME; // x21
  System_Int32_c *v29; // x0
  int v30; // w8
  UnityEngine_GameObject_o *v31; // x0
  UnityEngine_GameObject_o *v32; // x0
  TerminalSceneComponent_c *v33; // x0
  Il2CppObject *v34; // x0
  struct System_String_o *v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  TerminalSceneComponent_c *v38; // x0
  struct System_String_o *v39; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  Il2CppObject *Instance; // x0
  System_String_o *loadEarthAssetName; // x19
  AssetManager_o *v44; // x21
  AssetLoader_LoadEndDataHandler_o *v45; // x22
  int v46; // [xsp+4h] [xbp-4Ch] BYREF
  TerminalOverwriteEntity_o *overwriteEntity; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *overwriteId; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4B46D36 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_TerminalOverwriteMaster___, callback);
    sub_1BDB878(&DataManager_TypeInfo, v5);
    sub_1BDB878(&int_TypeInfo, v6);
    sub_1BDB878(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v8);
    sub_1BDB878(&ServantCommentManager_TypeInfo, v9);
    sub_1BDB878(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v10);
    sub_1BDB878(&TerminalSceneComponent_TypeInfo, v11);
    sub_1BDB878(&Method_TerminalSceneComponent___c__DisplayClass173_0__SetEarthView_b__0__, v12);
    sub_1BDB878(&TerminalSceneComponent___c__DisplayClass173_0_TypeInfo, v13);
    byte_4B46D36 = 1;
  }
  overwriteId = 0LL;
  overwriteEntity = 0LL;
  v14 = sub_1BDBAC4(TerminalSceneComponent___c__DisplayClass173_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_37;
  *(_QWORD *)(v14 + 16) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v14 + 16), (int32_t)this, v17, v18);
  *(_QWORD *)(v14 + 24) = callback;
  sub_1BDB81C((CGThumbnailListItem_o *)(v14 + 24), (int32_t)callback, v19, v20);
  mEarthCore = (UnityEngine_Object_o *)this->fields.mEarthCore;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mEarthCore, 0LL, 0LL) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v14 + 24), 0LL);
    return;
  }
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  mEarthEffCamera = (UnityEngine_Camera_o *)ServantCommentManager__GetUiChangeType(0LL);
  if ( !this->fields.mEarthCamera )
    goto LABEL_37;
  if ( (_DWORD)mEarthEffCamera == 1 )
  {
    UnityEngine_Camera__set_orthographic(this->fields.mEarthCamera, 0, 0LL);
    mEarthEffCamera = this->fields.mEarthEffCamera;
    if ( !mEarthEffCamera )
      goto LABEL_37;
    UnityEngine_Camera__set_orthographic(mEarthEffCamera, 0, 0LL);
    mEarthEffCamera = this->fields.mEarthCamera;
    if ( !mEarthEffCamera )
      goto LABEL_37;
    UnityEngine_Camera__set_fieldOfView(mEarthEffCamera, 32.269, 0LL);
    mEarthEffCamera = this->fields.mEarthEffCamera;
    if ( !mEarthEffCamera )
      goto LABEL_37;
    UnityEngine_Camera__set_fieldOfView(mEarthEffCamera, 32.269, 0LL);
    mEarthEffCamera = this->fields.mEarthCamera;
    if ( !mEarthEffCamera )
      goto LABEL_37;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mEarthEffCamera, 0LL);
    GameObjectExtensions__SetLocalPositionZ(gameObject, -792.87, 0LL);
    mEarthEffCamera = this->fields.mEarthEffCamera;
    if ( !mEarthEffCamera )
      goto LABEL_37;
    v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mEarthEffCamera, 0LL);
    GameObjectExtensions__SetLocalPositionZ(v23, -792.87, 0LL);
    v27 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v27 = TerminalSceneComponent_TypeInfo;
    }
    EARTH_ASSET_NAME = v27->static_fields->EARTH_ASSET_NAME;
    v29 = int_TypeInfo;
    v30 = 2;
  }
  else
  {
    UnityEngine_Camera__set_orthographic(this->fields.mEarthCamera, 1, 0LL);
    mEarthEffCamera = this->fields.mEarthEffCamera;
    if ( !mEarthEffCamera )
      goto LABEL_37;
    UnityEngine_Camera__set_orthographic(mEarthEffCamera, 1, 0LL);
    mEarthEffCamera = this->fields.mEarthCamera;
    if ( !mEarthEffCamera )
      goto LABEL_37;
    UnityEngine_Camera__set_orthographicSize(mEarthEffCamera, 1.0, 0LL);
    mEarthEffCamera = this->fields.mEarthEffCamera;
    if ( !mEarthEffCamera )
      goto LABEL_37;
    UnityEngine_Camera__set_orthographicSize(mEarthEffCamera, 1.0, 0LL);
    mEarthEffCamera = this->fields.mEarthCamera;
    if ( !mEarthEffCamera )
      goto LABEL_37;
    v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mEarthEffCamera, 0LL);
    GameObjectExtensions__SetLocalPositionZ(v31, -50000.0, 0LL);
    mEarthEffCamera = this->fields.mEarthEffCamera;
    if ( !mEarthEffCamera )
      goto LABEL_37;
    v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mEarthEffCamera, 0LL);
    GameObjectExtensions__SetLocalPositionZ(v32, -50000.0, 0LL);
    v33 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v33 = TerminalSceneComponent_TypeInfo;
    }
    EARTH_ASSET_NAME = v33->static_fields->EARTH_ASSET_NAME;
    v29 = int_TypeInfo;
    v30 = 1;
  }
  v46 = v30;
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(v29, &v46, v24, v25, v26);
  v35 = System_String__Format(EARTH_ASSET_NAME, v34, 0LL);
  this->fields.loadEarthAssetName = v35;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.loadEarthAssetName, (int32_t)v35, v36, v37);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  mEarthEffCamera = (UnityEngine_Camera_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_TerminalOverwriteMaster___);
  if ( !mEarthEffCamera )
    goto LABEL_37;
  if ( TerminalOverwriteMaster__TryGetOverwriteId(
         (TerminalOverwriteMaster_o *)mEarthEffCamera,
         9,
         &overwriteId,
         &overwriteEntity,
         0LL) )
  {
    v38 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v38 = TerminalSceneComponent_TypeInfo;
    }
    v39 = System_String__Format(v38->static_fields->EARTH_ASSET_NAME, (Il2CppObject *)overwriteId, 0LL);
    this->fields.loadEarthAssetName = v39;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.loadEarthAssetName, (int32_t)v39, v40, v41);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  loadEarthAssetName = this->fields.loadEarthAssetName;
  v44 = (AssetManager_o *)Instance;
  v45 = (AssetLoader_LoadEndDataHandler_o *)sub_1BDBAC4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v45,
    (Il2CppObject *)v14,
    Method_TerminalSceneComponent___c__DisplayClass173_0__SetEarthView_b__0__,
    0LL);
  if ( !v44 )
LABEL_37:
    sub_1BDBAD4(mEarthEffCamera, v16);
  AssetManager__LoadAssetStorage(v44, loadEarthAssetName, v45, 1, 0LL);
}


void __fastcall TerminalSceneComponent__SetQuestBoardInfoOff(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  struct ScrTerminalListTop_o *mTerminalList; // x0
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x8

  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList || (mQuestBoardListViewManager = mTerminalList->fields.mQuestBoardListViewManager) == 0LL )
    sub_1BDBAD4(mTerminalList, method);
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
    sub_1BDBAD4(0LL, method);
  QuestInformationComponent__SetResetReady(mQuestInformation, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalSceneComponent__SetState(
        TerminalSceneComponent_o *this,
        int32_t state,
        const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4B46D6E & 1) == 0 )
  {
    sub_1BDB878(&Method_CStateManager_TerminalSceneComponent__setState__, *(_QWORD *)&state);
    byte_4B46D6E = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1BDBAD4(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_32701B8 *)Method_CStateManager_TerminalSceneComponent__setState__);
}


void __fastcall TerminalSceneComponent__SetupStandServant(
        TerminalSceneComponent_o *this,
        UserServantEntity_o *usd,
        bool isSlideIn,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  StandFigureSlideComponent_o *mTerminalServant; // x22
  System_Action_o *v20; // x23
  struct StandFigureSlideComponent_o *v21; // x19
  System_Action_o *v22; // x20
  int32_t v23; // w2
  const MethodInfo *v24; // x3

  if ( (byte_4B46D44 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, usd);
    sub_1BDB878(&Method_TerminalSceneComponent___c__DisplayClass190_0__SetupStandServant_b__0__, v9);
    sub_1BDB878(&Method_TerminalSceneComponent___c__DisplayClass190_0__SetupStandServant_b__1__, v10);
    sub_1BDB878(&TerminalSceneComponent___c__DisplayClass190_0_TypeInfo, v11);
    byte_4B46D44 = 1;
  }
  v12 = sub_1BDBAC4(TerminalSceneComponent___c__DisplayClass190_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_7;
  *(_BYTE *)(v12 + 16) = isSlideIn;
  *(_QWORD *)(v12 + 24) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v12 + 24), (int32_t)this, v15, v16);
  *(_QWORD *)(v12 + 32) = endAction;
  sub_1BDB81C((CGThumbnailListItem_o *)(v12 + 32), (int32_t)endAction, v17, v18);
  mTerminalServant = this->fields.mTerminalServant;
  v20 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v12,
    Method_TerminalSceneComponent___c__DisplayClass190_0__SetupStandServant_b__0__,
    0LL);
  if ( !mTerminalServant
    || (StandFigureSlideComponent__Setup(mTerminalServant, usd, 0, v20, 0LL),
        v21 = this->fields.mTerminalServant,
        v22 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo),
        System_Action___ctor(
          v22,
          (Il2CppObject *)v12,
          Method_TerminalSceneComponent___c__DisplayClass190_0__SetupStandServant_b__1__,
          0LL),
        !v21) )
  {
LABEL_7:
    sub_1BDBAD4(v13, v14);
  }
  v21->fields.mBtnAct = v22;
  sub_1BDB81C((CGThumbnailListItem_o *)&v21->fields.mBtnAct, (int32_t)v22, v23, v24);
}


void __fastcall TerminalSceneComponent__StartEventDailyPoint(
        TerminalSceneComponent_o *this,
        int32_t eventId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( TerminalSceneComponent__CheckEventDailyPoint(this, eventId, (const MethodInfo *)callback) )
  {
    this->fields.afterEventDailyPoint = callback;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.afterEventDailyPoint, (int32_t)callback, v7, v8);
    TerminalSceneComponent__requestEventDailyPoint(this, eventId, v9);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  TerminalPramsManager_c *v14; // x0
  TerminalPramsManager_c *v15; // x0
  void *v16; // x0
  __int64 v17; // x8
  __int64 v18; // x8
  __int64 v19; // x19
  System_Action_object__o *v20; // x21
  __int64 v21; // x2
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x3
  System_Action_object__o *v24; // x20
  Il2CppObject *v25; // x21
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  const MethodInfo *v29; // x3
  System_Action_object__o *v30; // x20
  Il2CppObject *v31; // x21
  struct TerminalSceneComponent___c_StaticFields *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x3
  System_Action_object__o *v36; // x20
  Il2CppObject *v37; // x21
  struct TerminalSceneComponent___c_StaticFields *v38; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  ActionChain_o *v41; // x20

  if ( (byte_4B46D4E & 1) == 0 )
  {
    sub_1BDB878(&ActionChain_TypeInfo, callbackFunc);
    sub_1BDB878(&System_Action_Action____TypeInfo, v5);
    sub_1BDB878(&System_Action_Action__TypeInfo, v6);
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v7);
    sub_1BDB878(&Method_TerminalSceneComponent__StartWindowMessage_b__201_0__, v8);
    sub_1BDB878(&TerminalSceneComponent_TypeInfo, v9);
    sub_1BDB878(&Method_TerminalSceneComponent___c__StartWindowMessage_b__201_1__, v10);
    sub_1BDB878(&Method_TerminalSceneComponent___c__StartWindowMessage_b__201_2__, v11);
    sub_1BDB878(&Method_TerminalSceneComponent___c__StartWindowMessage_b__201_3__, v12);
    sub_1BDB878(&TerminalSceneComponent___c_TypeInfo, v13);
    byte_4B46D4E = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B406D7 )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, callbackFunc);
    byte_4B406D7 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  if ( v14->static_fields->_IsDispOnly_k__BackingField )
  {
    if ( !v14->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v14);
    if ( !byte_4B46DD9 )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, callbackFunc);
      byte_4B46DD9 = 1;
    }
    v15 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v15 = TerminalPramsManager_TypeInfo;
    }
    if ( !System_String__IsNullOrEmpty(v15->static_fields->_QuestWindowMessage_k__BackingField, 0LL) )
    {
      v19 = sub_1BDB920(System_Action_Action____TypeInfo, 4LL);
      v20 = (System_Action_object__o *)sub_1BDBAC4(System_Action_Action__TypeInfo);
      System_Action_object____ctor(
        v20,
        (Il2CppObject *)this,
        Method_TerminalSceneComponent__StartWindowMessage_b__201_0__,
        0LL);
      if ( v19 )
      {
        if ( !*(_DWORD *)(v19 + 24) )
          goto LABEL_55;
        *(_QWORD *)(v19 + 32) = v20;
        sub_1BDB81C((CGThumbnailListItem_o *)(v19 + 32), (int32_t)v20, v21, v22);
        v16 = TerminalSceneComponent___c_TypeInfo;
        if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
          v16 = TerminalSceneComponent___c_TypeInfo;
        }
        v24 = *(System_Action_object__o **)(*((_QWORD *)v16 + 23) + 40LL);
        if ( !v24 )
        {
          if ( !*((_DWORD *)v16 + 56) )
          {
            j_il2cpp_runtime_class_init_0(v16);
            v16 = TerminalSceneComponent___c_TypeInfo;
          }
          v25 = (Il2CppObject *)**((_QWORD **)v16 + 23);
          v24 = (System_Action_object__o *)sub_1BDBAC4(System_Action_Action__TypeInfo);
          System_Action_object____ctor(v24, v25, Method_TerminalSceneComponent___c__StartWindowMessage_b__201_1__, 0LL);
          static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
          static_fields->__9__201_1 = (struct System_Action_Action__o *)v24;
          sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__201_1, (int32_t)v24, v27, v28);
        }
        if ( *(_DWORD *)(v19 + 24) <= 1u )
          goto LABEL_55;
        *(_QWORD *)(v19 + 40) = v24;
        sub_1BDB81C((CGThumbnailListItem_o *)(v19 + 40), (int32_t)v24, v21, v23);
        v16 = TerminalSceneComponent___c_TypeInfo;
        if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
          v16 = TerminalSceneComponent___c_TypeInfo;
        }
        v30 = *(System_Action_object__o **)(*((_QWORD *)v16 + 23) + 48LL);
        if ( !v30 )
        {
          if ( !*((_DWORD *)v16 + 56) )
          {
            j_il2cpp_runtime_class_init_0(v16);
            v16 = TerminalSceneComponent___c_TypeInfo;
          }
          v31 = (Il2CppObject *)**((_QWORD **)v16 + 23);
          v30 = (System_Action_object__o *)sub_1BDBAC4(System_Action_Action__TypeInfo);
          System_Action_object____ctor(v30, v31, Method_TerminalSceneComponent___c__StartWindowMessage_b__201_2__, 0LL);
          v32 = TerminalSceneComponent___c_TypeInfo->static_fields;
          v32->__9__201_2 = (struct System_Action_Action__o *)v30;
          sub_1BDB81C((CGThumbnailListItem_o *)&v32->__9__201_2, (int32_t)v30, v33, v34);
        }
        if ( *(_DWORD *)(v19 + 24) <= 2u )
          goto LABEL_55;
        *(_QWORD *)(v19 + 48) = v30;
        sub_1BDB81C((CGThumbnailListItem_o *)(v19 + 48), (int32_t)v30, v21, v29);
        v16 = TerminalSceneComponent___c_TypeInfo;
        if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
          v16 = TerminalSceneComponent___c_TypeInfo;
        }
        v36 = *(System_Action_object__o **)(*((_QWORD *)v16 + 23) + 56LL);
        if ( !v36 )
        {
          if ( !*((_DWORD *)v16 + 56) )
          {
            j_il2cpp_runtime_class_init_0(v16);
            v16 = TerminalSceneComponent___c_TypeInfo;
          }
          v37 = (Il2CppObject *)**((_QWORD **)v16 + 23);
          v36 = (System_Action_object__o *)sub_1BDBAC4(System_Action_Action__TypeInfo);
          System_Action_object____ctor(v36, v37, Method_TerminalSceneComponent___c__StartWindowMessage_b__201_3__, 0LL);
          v38 = TerminalSceneComponent___c_TypeInfo->static_fields;
          v38->__9__201_3 = (struct System_Action_Action__o *)v36;
          sub_1BDB81C((CGThumbnailListItem_o *)&v38->__9__201_3, (int32_t)v36, v39, v40);
        }
        if ( *(_DWORD *)(v19 + 24) <= 3u )
LABEL_55:
          sub_1BDBADC(v16, callbackFunc, v21);
        *(_QWORD *)(v19 + 56) = v36;
        sub_1BDB81C((CGThumbnailListItem_o *)(v19 + 56), (int32_t)v36, v21, v35);
        v41 = (ActionChain_o *)sub_1BDBAC4(ActionChain_TypeInfo);
        ActionChain___ctor_48337224(v41, (System_Action_Action__array *)v19, 0LL);
        if ( v41 )
        {
          ChainableActionBase__Execute((ChainableActionBase_o *)v41, 0LL);
          return;
        }
      }
LABEL_54:
      sub_1BDBAD4(v16, callbackFunc);
    }
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4B3EEEF )
  {
    sub_1BDB878(&TerminalSceneComponent_TypeInfo, callbackFunc);
    byte_4B3EEEF = 1;
  }
  v16 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v16 = TerminalSceneComponent_TypeInfo;
  }
  v17 = **((_QWORD **)v16 + 23);
  if ( !v17 )
    goto LABEL_54;
  v18 = *(_QWORD *)(v17 + 264);
  if ( !v18 )
    goto LABEL_54;
  v16 = *(void **)(v18 + 552);
  if ( !v16 )
    goto LABEL_54;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v16, 0, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
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
  __int64 v8; // x1
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B46D51 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&eventId);
    sub_1BDB878(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v7);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4B46D51 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_303395C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_15;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          eventId,
          (const MethodInfo_32E1E88 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
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
    sub_1BDBAD4(Instance, v10);
  TitleInfoControl__CheckSuperBossHpAnim((TitleInfoControl_o *)Instance, callback, 0LL);
}


bool __fastcall TerminalSceneComponent__TryPlayGrandBgm(
        TerminalSceneComponent_o *this,
        System_Action_o *onLoadFinishCallback,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  bool IsValidGrandBgm; // w21
  int32_t index; // [xsp+Ch] [xbp-24h] BYREF

  index = 0;
  IsValidGrandBgm = TerminalSceneComponent__IsValidGrandBgm(this, &index, method);
  if ( IsValidGrandBgm )
    TerminalSceneComponent__PlayGrandBgm(this, index, onLoadFinishCallback, v5);
  return IsValidGrandBgm;
}


void __fastcall TerminalSceneComponent__Update(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x1
  CStateManager_T__o *mFSM; // x0
  ScrTerminalMap_o *mTerminalMap; // x20
  _BOOL8 IsMapTouchEnabled; // x0
  __int64 v8; // x1

  if ( (byte_4B46D53 & 1) == 0 )
  {
    sub_1BDB878(&Method_CStateManager_TerminalSceneComponent__update__, method);
    sub_1BDB878(&CTouch_TypeInfo, v3);
    byte_4B46D53 = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__process(0LL);
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_3270194 *)Method_CStateManager_TerminalSceneComponent__update__);
  mTerminalMap = this->fields.mTerminalMap;
  IsMapTouchEnabled = TerminalSceneComponent__IsMapTouchEnabled(this, v4);
  if ( !mTerminalMap )
    sub_1BDBAD4(IsMapTouchEnabled, v8);
  ScrTerminalMap__ProcessMapCamera(mTerminalMap, IsMapTouchEnabled, 0LL);
}


void __fastcall TerminalSceneComponent__UpdateCompleteMissionIconUI(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  ScrPlayerStatus_o *mPlayerStatus; // x0

  mPlayerStatus = this->fields.mPlayerStatus;
  if ( !mPlayerStatus )
    sub_1BDBAD4(0LL, method);
  ScrPlayerStatus__UpdateCompleteMissionIconUI(mPlayerStatus, 0LL);
}


void __fastcall TerminalSceneComponent__UpdateQuestBoardList(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  struct ScrTerminalListTop_o *mTerminalList; // x8

  mTerminalList = this->fields.mTerminalList;
  if ( !mTerminalList || (this = (TerminalSceneComponent_o *)mTerminalList->fields.mQuestBoardListViewManager) == 0LL )
    sub_1BDBAD4(this, method);
  QuestBoardListViewManager__SetupDisp((QuestBoardListViewManager_o *)this, 0LL);
}


void __fastcall TerminalSceneComponent__UpdateTitleEventInfo(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *mTitleInfo; // x0

  mTitleInfo = this->fields.mTitleInfo;
  if ( !mTitleInfo )
    sub_1BDBAD4(0LL, method);
  TitleInfoControl__UpdateEventItemInfo(mTitleInfo, 0LL);
}


System_Collections_IEnumerator_o *__fastcall TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__195_o *v2; // x19

  if ( (byte_4B46D48 & 1) == 0 )
  {
    sub_1BDB878(&TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__195_TypeInfo, method);
    byte_4B46D48 = 1;
  }
  v2 = (TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__195_o *)sub_1BDBAC4(TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__195_TypeInfo);
  TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__195___ctor(v2, 0, 0LL);
  return (System_Collections_IEnumerator_o *)v2;
}


bool __fastcall TerminalSceneComponent___CoWaitBlankEarthActionEnd_b__259_0(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *mTerminalList; // x0

  if ( (byte_4B46D87 & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4B46D87 = 1;
  }
  mTerminalList = (CommonUI_o *)this->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_9;
  if ( !ScrTerminalListTop__IsBlankEarthAction((ScrTerminalListTop_o *)mTerminalList, 0LL) )
  {
    mTerminalList = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( mTerminalList )
      return !CommonUI__IsActive_NotifiDialog(mTerminalList, 0LL);
LABEL_9:
    sub_1BDBAD4(mTerminalList, method);
  }
  return 0;
}


bool __fastcall TerminalSceneComponent___CoWaitTerminalTopEffectEnd_b__258_0(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *mTerminalList; // x0

  if ( (byte_4B46D86 & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4B46D86 = 1;
  }
  mTerminalList = (CommonUI_o *)this->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_9;
  if ( !ScrTerminalListTop__CheckTerminalTopEffect((ScrTerminalListTop_o *)mTerminalList, 0LL) )
  {
    mTerminalList = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( mTerminalList )
      return !CommonUI__IsActive_NotifiDialog(mTerminalList, 0LL);
LABEL_9:
    sub_1BDBAD4(mTerminalList, method);
  }
  return 0;
}


bool __fastcall TerminalSceneComponent___OpenExchangeDialogue_b__262_3(
        TerminalSceneComponent_o *this,
        ShopEntity_o *x,
        const MethodInfo *method)
{
  return !TerminalSceneComponent__IsNotDisplayCostume(this, x, method);
}


void __fastcall TerminalSceneComponent___StartWindowMessage_b__201_0(
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
    sub_1BDBAD4(this, action);
  }
  QuestBoardListViewManager__SetMode((QuestBoardListViewManager_o *)this, 4, action, 0, 0, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TerminalSceneComponent___beginInitialize_b__172_0(
        TerminalSceneComponent_o *this,
        bool gotNewServant,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  TerminalPramsManager_c *v11; // x0
  struct ScrTerminalMap_o *mTerminalMap; // x8
  struct ScrTerminalMap_o *v13; // x8
  struct ScrTerminalMap_o *v14; // x8
  struct WarEntity_o *mWarEnt; // x8
  ScrTerminalMap_o *v16; // x21
  System_Action_o *v17; // x22
  TitleInfoControl_o *mTitleInfo; // x21
  System_Action_o *v19; // x22

  v4 = this;
  if ( (byte_4B46D82 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, gotNewServant);
    sub_1BDB878(&Method_DataManager_GetMaster_EventRaidMaster___, v5);
    sub_1BDB878(&DataManager_TypeInfo, v6);
    sub_1BDB878(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7);
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v8);
    sub_1BDB878(&Method_TerminalSceneComponent__beginInitialize_b__172_3__, v9);
    this = (TerminalSceneComponent_o *)sub_1BDB878(&Method_TerminalSceneComponent__beginInitialize_b__172_4__, v10);
    byte_4B46D82 = 1;
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
    v13 = v4->fields.mTerminalMap;
    if ( !v13 )
      goto LABEL_30;
    if ( !v13->fields.isRaidMap )
      goto LABEL_25;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (TerminalSceneComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_EventRaidMaster___);
    v14 = v4->fields.mTerminalMap;
    if ( !v14 )
      goto LABEL_30;
    mWarEnt = v14->fields.mWarEnt;
    if ( !mWarEnt || !this )
      goto LABEL_30;
    if ( EventRaidMaster__GetRaidGorupMax((EventRaidMaster_o *)this, mWarEnt->fields.eventId, 0LL) >= 1 )
    {
      v16 = v4->fields.mTerminalMap;
      v17 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
      System_Action___ctor(v17, (Il2CppObject *)v4, Method_TerminalSceneComponent__beginInitialize_b__172_3__, 0LL);
      if ( v16 )
      {
        ScrTerminalMap__BeginRaidUpdateRequest(v16, v17, 0LL);
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
        v19 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
        System_Action___ctor(v19, (Il2CppObject *)v4, Method_TerminalSceneComponent__beginInitialize_b__172_4__, 0LL);
        if ( mTitleInfo )
        {
          TitleInfoControl__UpdateEventInfo(mTitleInfo, v19, 0LL);
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
    sub_1BDBAD4(this, gotNewServant);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B3F3B7 )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, gotNewServant);
    byte_4B3F3B7 = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
  }
  v11->static_fields->_IsAutoResume_k__BackingField = 1;
  this = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
    sub_1BDBAD4(mPlayerStatus, method);
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

  if ( (byte_4B46D84 & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4B46D84 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (AvalonSceneManager__endInitialize(Instance, (SceneRootComponent_o *)this, 0LL),
        (Instance = (AvalonSceneManager_o *)this->fields.mEarthCore) == 0LL)
    || (mTerminalMap = this->fields.mTerminalMap,
        Instance = (AvalonSceneManager_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)Instance,
                                             0LL),
        !mTerminalMap) )
  {
    sub_1BDBAD4(Instance, v4);
  }
  ScrTerminalMap__SetCore(mTerminalMap, (UnityEngine_GameObject_o *)Instance, 0LL);
}


void __fastcall TerminalSceneComponent___beginInitialize_b__172_3(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x20
  TerminalPramsManager_c *v8; // x0
  int32_t WarId_k__BackingField; // w21
  System_Action_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  System_Collections_IEnumerator_o *v13; // x1

  if ( (byte_4B46D83 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_SingletonTemplate_QuestTree__get_Instance__, v3);
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v4);
    sub_1BDB878(&Method_TerminalSceneComponent__beginInitialize_b__172_5__, v5);
    byte_4B46D83 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B3F84F )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v6);
    byte_4B3F84F = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v8->static_fields->_WarId_k__BackingField;
  v10 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_TerminalSceneComponent__beginInitialize_b__172_5__, 0LL);
  if ( !Instance )
    sub_1BDBAD4(v11, v12);
  v13 = QuestTree__mfBaseTreeUpdateWithOpenCheck((QuestTree_o *)Instance, WarId_k__BackingField, v10, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_70269772((UnityEngine_MonoBehaviour_o *)this, v13, 0LL);
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
    sub_1BDBAD4(this, method);
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
    sub_1BDBAD4(mTerminalList, method);
  }
  ScrTerminalMap__UpdateEventRaidUI((ScrTerminalMap_o *)mTerminalList, 0LL);
}


void __fastcall TerminalSceneComponent___callbackEventDailyPoint_b__224_0(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.afterEventDailyPoint, 0LL);
}


void __fastcall TerminalSceneComponent___mfsmfInitTable_b__221_0(
        TerminalSceneComponent_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *v2; // x19
  __int64 v3; // x1
  PlayMakerFSM_o *myFSM; // x0

  v2 = this;
  if ( (byte_4B46D85 & 1) == 0 )
  {
    this = (TerminalSceneComponent_o *)sub_1BDB878(&StringLiteral_5536/*"EVENTLISTUP_END"*/, method);
    byte_4B46D85 = 1;
  }
  TerminalSceneComponent__deleteQuestMovie(this, method);
  myFSM = v2->fields.myFSM;
  if ( !myFSM )
    sub_1BDBAD4(0LL, v3);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_5536/*"EVENTLISTUP_END"*/, 0LL);
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
  __int64 v3; // x1
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
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  TerminalPramsManager_c *v30; // x0
  TerminalPramsManager_c *v31; // x0
  __int64 v32; // x1
  TerminalPramsManager_c *v33; // x0
  QuestAfterAction_o *Instance; // x0
  __int64 v35; // x1
  CommonUI_o *v36; // x21
  __int64 v37; // x1
  TerminalPramsManager_c *v38; // x0
  BalanceConfig_c *v39; // x0
  int32_t OrdealCallWarId; // w21
  TerminalPramsManager_c *v41; // x0
  __int64 v42; // x1
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  struct UnityEngine_Camera_o *mUICamera; // x20
  CTouch_c *v46; // x0
  struct CTouch_StaticFields *static_fields; // x0
  struct CStateManager_TerminalSceneComponent__o **p_mFSM; // x20
  CStateManager_T__o *v49; // x21
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  CStateManager_T__o *mFSM; // x21
  Il2CppObject *v53; // x22
  CStateManager_T__o *v54; // x21
  Il2CppObject *v55; // x22
  CStateManager_T__o *v56; // x21
  Il2CppObject *v57; // x22
  CStateManager_T__o *v58; // x21
  Il2CppObject *v59; // x22
  CStateManager_T__o *v60; // x21
  Il2CppObject *v61; // x22
  CStateManager_T__o *v62; // x21
  Il2CppObject *v63; // x22
  CStateManager_T__o *v64; // x21
  Il2CppObject *v65; // x22
  CStateManager_T__o *v66; // x21
  Il2CppObject *v67; // x22
  CStateManager_T__o *v68; // x21
  Il2CppObject *v69; // x22
  CStateManager_T__o *v70; // x21
  Il2CppObject *v71; // x22
  CStateManager_T__o *v72; // x20
  Il2CppObject *v73; // x21
  const MethodInfo *v74; // x2
  ScrPlayerStatus_o *mPlayerStatus; // x20
  System_Func_bool__bool__o *v76; // x21
  struct ScrPlayerStatus_o *v77; // x21
  System_Action_o *v78; // x20
  int32_t v79; // w2
  const MethodInfo *v80; // x3
  struct ScrTerminalMap_o *mTerminalMap; // x8
  System_Action_o *v82; // x20
  const MethodInfo *v83; // x2

  if ( (byte_4B46D35 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&AndroidUtil_TypeInfo, v3);
    sub_1BDB878(&BalanceConfig_TypeInfo, v4);
    sub_1BDB878(&Method_CStateManager_TerminalSceneComponent___ctor__, v5);
    sub_1BDB878(&Method_CStateManager_TerminalSceneComponent__add__, v6);
    sub_1BDB878(&CStateManager_TerminalSceneComponent__TypeInfo, v7);
    sub_1BDB878(&CTouch_TypeInfo, v8);
    sub_1BDB878(&System_Func_bool__bool__TypeInfo, v9);
    sub_1BDB878(&ServantProfileEventJoinManager_TypeInfo, v10);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1BDB878(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v12);
    sub_1BDB878(&TerminalSceneComponent_StateNormal_TypeInfo, v13);
    sub_1BDB878(&TerminalSceneComponent_StateTutorial1_QuestArrow_TypeInfo, v14);
    sub_1BDB878(&TerminalSceneComponent_StateTutorial1_SpotArrow_TypeInfo, v15);
    sub_1BDB878(&TerminalSceneComponent_StateTutorial2_QuestArrow_TypeInfo, v16);
    sub_1BDB878(&TerminalSceneComponent_StateTutorial2_SpotArrow_TypeInfo, v17);
    sub_1BDB878(&TerminalSceneComponent_StateTutorial3_GachaArrow_TypeInfo, v18);
    sub_1BDB878(&TerminalSceneComponent_StateTutorial3_MenuArrow_TypeInfo, v19);
    sub_1BDB878(&TerminalSceneComponent_StateTutorial4_QuestArrow_TypeInfo, v20);
    sub_1BDB878(&TerminalSceneComponent_StateTutorial4_SpotArrow_TypeInfo, v21);
    sub_1BDB878(&TerminalSceneComponent_StateTutorial5_CombineArrow_TypeInfo, v22);
    sub_1BDB878(&TerminalSceneComponent_StateTutorial5_MenuArrow_TypeInfo, v23);
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v24);
    sub_1BDB878(&Method_TerminalSceneComponent__beginInitialize_b__172_0__, v25);
    sub_1BDB878(&Method_TerminalSceneComponent__beginInitialize_b__172_1__, v26);
    sub_1BDB878(&Method_TerminalSceneComponent__beginInitialize_b__172_2__, v27);
    sub_1BDB878(&StringLiteral_1/*""*/, v28);
    byte_4B46D35 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  AndroidUtil__DeleteOldSaveData(0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__Load_SaveData(0LL);
  if ( !byte_4B4142C )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v29);
    byte_4B4142C = 1;
  }
  v30 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v30 = TerminalPramsManager_TypeInfo;
  }
  if ( !v30->static_fields->_IsAutoResume_k__BackingField )
  {
    if ( !v30->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v30);
    if ( !byte_4B41427 )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, v29);
      byte_4B41427 = 1;
    }
    v31 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v31 = TerminalPramsManager_TypeInfo;
    }
    v31->static_fields->_DispState_k__BackingField = 0;
    if ( !byte_4B417E0 )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, v29);
      v31 = TerminalPramsManager_TypeInfo;
      byte_4B417E0 = 1;
    }
    if ( !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      v31 = TerminalPramsManager_TypeInfo;
    }
    v31->static_fields->_SelectedStoryQuestId_k__BackingField = 0;
    TerminalPramsManager__TerminalSelectedStoryQuestId_SaveData(0LL);
    if ( !byte_4B40B53 )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, v32);
      byte_4B40B53 = 1;
    }
    v33 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v33 = TerminalPramsManager_TypeInfo;
    }
    v33->static_fields->_SelectedRecollectionWarId_k__BackingField = 0;
    TerminalPramsManager__TerminalSelectedRecollectionWarId_SaveData(0LL);
  }
  Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v36 = (CommonUI_o *)Instance;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !v36 )
    goto LABEL_88;
  CommonUI__CheckChangeOtherConnectMarkFromEventId(
    v36,
    TerminalPramsManager_TypeInfo->static_fields->ConnectMarkEventId,
    1,
    0LL);
  Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    goto LABEL_88;
  if ( QuestAfterAction__CheckChangeBlankEarth(Instance, 0LL) )
    goto LABEL_39;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B46DD2 )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v37);
    byte_4B46DD2 = 1;
  }
  v38 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v38 = TerminalPramsManager_TypeInfo;
  }
  if ( v38->static_fields->_IsTransOrdealCall_k__BackingField )
  {
LABEL_39:
    v39 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v39 = BalanceConfig_TypeInfo;
    }
    OrdealCallWarId = v39->static_fields->OrdealCallWarId;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    TerminalPramsManager__SetAutoResumeByWarId(OrdealCallWarId, 0LL);
    if ( !byte_4B416D6 )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, v37);
      byte_4B416D6 = 1;
    }
    v38 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v38 = TerminalPramsManager_TypeInfo;
    }
    v38->static_fields->_IsTransOrdealCall_k__BackingField = 0;
  }
  if ( !v38->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v38);
  if ( !byte_4B416D2 )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v37);
    byte_4B416D2 = 1;
  }
  v41 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v41 = TerminalPramsManager_TypeInfo;
  }
  v41->static_fields->meSceneStatus = 1;
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  this->fields._IsReq_InitEarthRotateY_k__BackingField = 1;
  this->fields._onClosePresentBoxFlag_k__BackingField = 0;
  this->fields._FirstFadeTime_k__BackingField = 0.0;
  SkillLvMaster__AssertionSkillOverwriteByNowTime(0LL);
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__init(0LL);
  mUICamera = this->fields.mUICamera;
  if ( !byte_4B4279B )
  {
    sub_1BDB878(&CTouch_TypeInfo, v42);
    byte_4B4279B = 1;
  }
  v46 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v46 = CTouch_TypeInfo;
  }
  static_fields = v46->static_fields;
  static_fields->mScreenCam = mUICamera;
  sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->mScreenCam, (int32_t)mUICamera, v43, v44);
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v49 = (CStateManager_T__o *)sub_1BDBAC4(CStateManager_TerminalSceneComponent__TypeInfo);
    CStateManager_object____ctor(
      v49,
      (Il2CppObject *)this,
      11,
      (const MethodInfo_3270084 *)Method_CStateManager_TerminalSceneComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_TerminalSceneComponent__o *)v49;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.mFSM, (int32_t)v49, v50, v51);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v53 = (Il2CppObject *)sub_1BDBAC4(TerminalSceneComponent_StateNormal_TypeInfo);
    System_Object___ctor(v53, 0LL);
    if ( mFSM )
    {
      CStateManager_object___add(
        mFSM,
        0,
        (IState_T__o *)v53,
        (const MethodInfo_327012C *)Method_CStateManager_TerminalSceneComponent__add__);
      v54 = (CStateManager_T__o *)*p_mFSM;
      v55 = (Il2CppObject *)sub_1BDBAC4(TerminalSceneComponent_StateTutorial1_SpotArrow_TypeInfo);
      System_Object___ctor(v55, 0LL);
      if ( v54 )
      {
        CStateManager_object___add(
          v54,
          1,
          (IState_T__o *)v55,
          (const MethodInfo_327012C *)Method_CStateManager_TerminalSceneComponent__add__);
        v56 = (CStateManager_T__o *)*p_mFSM;
        v57 = (Il2CppObject *)sub_1BDBAC4(TerminalSceneComponent_StateTutorial1_QuestArrow_TypeInfo);
        System_Object___ctor(v57, 0LL);
        if ( v56 )
        {
          CStateManager_object___add(
            v56,
            2,
            (IState_T__o *)v57,
            (const MethodInfo_327012C *)Method_CStateManager_TerminalSceneComponent__add__);
          v58 = (CStateManager_T__o *)*p_mFSM;
          v59 = (Il2CppObject *)sub_1BDBAC4(TerminalSceneComponent_StateTutorial2_SpotArrow_TypeInfo);
          System_Object___ctor(v59, 0LL);
          if ( v58 )
          {
            CStateManager_object___add(
              v58,
              3,
              (IState_T__o *)v59,
              (const MethodInfo_327012C *)Method_CStateManager_TerminalSceneComponent__add__);
            v60 = (CStateManager_T__o *)*p_mFSM;
            v61 = (Il2CppObject *)sub_1BDBAC4(TerminalSceneComponent_StateTutorial2_QuestArrow_TypeInfo);
            System_Object___ctor(v61, 0LL);
            if ( v60 )
            {
              CStateManager_object___add(
                v60,
                4,
                (IState_T__o *)v61,
                (const MethodInfo_327012C *)Method_CStateManager_TerminalSceneComponent__add__);
              v62 = (CStateManager_T__o *)*p_mFSM;
              v63 = (Il2CppObject *)sub_1BDBAC4(TerminalSceneComponent_StateTutorial3_MenuArrow_TypeInfo);
              System_Object___ctor(v63, 0LL);
              if ( v62 )
              {
                CStateManager_object___add(
                  v62,
                  5,
                  (IState_T__o *)v63,
                  (const MethodInfo_327012C *)Method_CStateManager_TerminalSceneComponent__add__);
                v64 = (CStateManager_T__o *)*p_mFSM;
                v65 = (Il2CppObject *)sub_1BDBAC4(TerminalSceneComponent_StateTutorial3_GachaArrow_TypeInfo);
                System_Object___ctor(v65, 0LL);
                if ( v64 )
                {
                  CStateManager_object___add(
                    v64,
                    6,
                    (IState_T__o *)v65,
                    (const MethodInfo_327012C *)Method_CStateManager_TerminalSceneComponent__add__);
                  v66 = (CStateManager_T__o *)*p_mFSM;
                  v67 = (Il2CppObject *)sub_1BDBAC4(TerminalSceneComponent_StateTutorial4_SpotArrow_TypeInfo);
                  System_Object___ctor(v67, 0LL);
                  if ( v66 )
                  {
                    CStateManager_object___add(
                      v66,
                      7,
                      (IState_T__o *)v67,
                      (const MethodInfo_327012C *)Method_CStateManager_TerminalSceneComponent__add__);
                    v68 = (CStateManager_T__o *)*p_mFSM;
                    v69 = (Il2CppObject *)sub_1BDBAC4(TerminalSceneComponent_StateTutorial4_QuestArrow_TypeInfo);
                    System_Object___ctor(v69, 0LL);
                    if ( v68 )
                    {
                      CStateManager_object___add(
                        v68,
                        8,
                        (IState_T__o *)v69,
                        (const MethodInfo_327012C *)Method_CStateManager_TerminalSceneComponent__add__);
                      v70 = (CStateManager_T__o *)*p_mFSM;
                      v71 = (Il2CppObject *)sub_1BDBAC4(TerminalSceneComponent_StateTutorial5_MenuArrow_TypeInfo);
                      System_Object___ctor(v71, 0LL);
                      if ( v70 )
                      {
                        CStateManager_object___add(
                          v70,
                          9,
                          (IState_T__o *)v71,
                          (const MethodInfo_327012C *)Method_CStateManager_TerminalSceneComponent__add__);
                        v72 = (CStateManager_T__o *)*p_mFSM;
                        v73 = (Il2CppObject *)sub_1BDBAC4(TerminalSceneComponent_StateTutorial5_CombineArrow_TypeInfo);
                        System_Object___ctor(v73, 0LL);
                        if ( v72 )
                        {
                          CStateManager_object___add(
                            v72,
                            10,
                            (IState_T__o *)v73,
                            (const MethodInfo_327012C *)Method_CStateManager_TerminalSceneComponent__add__);
                          TerminalSceneComponent__SetState(this, 0, v74);
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
    sub_1BDBAD4(Instance, v35);
  }
LABEL_73:
  Instance = (QuestAfterAction_o *)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_88;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)Instance, 0LL, 1, (System_String_o *)StringLiteral_1/*""*/, 1, 0LL);
  Instance = (QuestAfterAction_o *)this->fields.mTitleInfo;
  if ( !Instance )
    goto LABEL_88;
  TitleInfoControl__changeTitleInfo_38893964((TitleInfoControl_o *)Instance, 1, 1, 0, 0LL);
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
  v76 = (System_Func_bool__bool__o *)sub_1BDBAC4(System_Func_bool__bool__TypeInfo);
  System_Func_bool__bool____ctor(
    v76,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent__beginInitialize_b__172_0__,
    0LL);
  if ( !mPlayerStatus )
    goto LABEL_88;
  ScrPlayerStatus__SetCloseGiftAct(mPlayerStatus, v76, 0LL);
  v77 = this->fields.mPlayerStatus;
  v78 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v78, (Il2CppObject *)this, Method_TerminalSceneComponent__beginInitialize_b__172_1__, 0LL);
  if ( !v77 )
    goto LABEL_88;
  v77->fields.mRecoverAct = v78;
  sub_1BDB81C((CGThumbnailListItem_o *)&v77->fields.mRecoverAct, (int32_t)v78, v79, v80);
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
  v82 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v82, (Il2CppObject *)this, Method_TerminalSceneComponent__beginInitialize_b__172_2__, 0LL);
  TerminalSceneComponent__SetEarthView(this, v82, v83);
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
  ServantProfileEventJoinManager__UpdateProfileServantEventJoin(0LL);
}


void __fastcall TerminalSceneComponent__beginPause(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  if ( (byte_4B46D42 & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_4B46D42 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v4);
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  this->fields.quitType = 3;
  TerminalSceneComponent__quit(this, v5);
}


void __fastcall TerminalSceneComponent__beginResume(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  MissionNotifyManager_o *Instance; // x0
  __int64 v8; // x1
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8
  struct WarEntity_o *mWarEnt; // x8
  int32_t eventId; // w21
  TerminalPramsManager_c *v13; // x0
  ScrTerminalListTop_o *v14; // x20
  bool IsGrandQuestWarId; // w20
  const MethodInfo *v16; // x2
  bool IsEventPeriod; // w21
  TerminalPramsManager_c *v18; // x0
  TerminalPramsManager_c *v19; // x0
  struct ScrTerminalMap_o *v20; // x8
  const MethodInfo *v21; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B46D41 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_1BDB878(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v3);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_1BDB878(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v5);
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v6);
    byte_4B46D41 = 1;
  }
  entity = 0LL;
  this->fields.isFadeInAfterResumeLoad = 0;
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  MissionNotifyManager__EndPause(Instance, 0LL);
  mTerminalList = this->fields.mTerminalList;
  this->fields._IsReq_InitEarthRotateY_k__BackingField = 0;
  if ( !mTerminalList )
    goto LABEL_50;
  Instance = (MissionNotifyManager_o *)mTerminalList->fields.mQuestBoardListViewManager;
  if ( !Instance )
    goto LABEL_50;
  ListViewManager__DestroyList((ListViewManager_o *)Instance, 0LL);
  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_50;
  mWarEnt = mTerminalMap->fields.mWarEnt;
  if ( mWarEnt )
    eventId = mWarEnt->fields.eventId;
  else
    eventId = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B41AC4 )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v8);
    byte_4B41AC4 = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v13 = TerminalPramsManager_TypeInfo;
  }
  if ( v13->static_fields->meSceneStatus != 3 )
  {
    v14 = this->fields.mTerminalList;
    if ( !v13->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v13);
    if ( !byte_4B3F84F )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, v8);
      byte_4B3F84F = 1;
    }
    Instance = (MissionNotifyManager_o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Instance = (MissionNotifyManager_o *)TerminalPramsManager_TypeInfo;
    }
    if ( v14 )
    {
      IsGrandQuestWarId = ScrTerminalListTop__IsGrandQuestWarId(
                            v14,
                            HIDWORD(Instance[2].fields.mNoticeNumberComp->klass),
                            0LL);
      if ( !eventId )
        goto LABEL_53;
      Instance = (MissionNotifyManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_50;
      Instance = (MissionNotifyManager_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_303395C *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !Instance )
        goto LABEL_50;
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
              &entity,
              eventId,
              (const MethodInfo_32E1E88 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
      {
LABEL_53:
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( byte_4B416D2 )
          goto LABEL_38;
        goto LABEL_37;
      }
      Instance = (MissionNotifyManager_o *)entity;
      if ( entity )
      {
        IsEventPeriod = EventEntity__IsEventPeriod((EventEntity_o *)entity, 0LL, 0LL);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( IsEventPeriod )
        {
          if ( byte_4B416D2 )
          {
LABEL_38:
            v18 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v18 = TerminalPramsManager_TypeInfo;
            }
            v18->static_fields->meSceneStatus = 2;
            if ( !IsGrandQuestWarId )
              this->fields.isFadeInAfterResumeLoad = 1;
            goto LABEL_49;
          }
LABEL_37:
          sub_1BDB878(&TerminalPramsManager_TypeInfo, v8);
          byte_4B416D2 = 1;
          goto LABEL_38;
        }
        if ( !byte_4B416D2 )
        {
          sub_1BDB878(&TerminalPramsManager_TypeInfo, v8);
          byte_4B416D2 = 1;
        }
        v19 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v19 = TerminalPramsManager_TypeInfo;
        }
        v19->static_fields->meSceneStatus = 1;
        TerminalSceneComponent__CallQuestInformationCloseAtAll(this, 0, v16);
        v20 = this->fields.mTerminalMap;
        if ( v20 )
        {
          Instance = (MissionNotifyManager_o *)v20->fields.spotMaskObj;
          if ( Instance )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
            TerminalSceneComponent__SetQuestBoardInfoOff(this, v21);
            goto LABEL_49;
          }
        }
      }
    }
LABEL_50:
    sub_1BDBAD4(Instance, v8);
  }
LABEL_49:
  this->fields.quitType = 1;
  SceneRootComponent__beginResume_40484540((SceneRootComponent_o *)this, 0LL);
}


void __fastcall TerminalSceneComponent__beginStartUp(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(TerminalSceneComponent_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._5_beginStartUp.method)(
    this,
    0LL,
    this->klass->vtable._6_beginStartUp.methodPtr);
}


void __fastcall TerminalSceneComponent__beginStartUp_44200712(
        TerminalSceneComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 methodPtr_low; // x10
  Il2CppObject *v16; // x1
  TerminalSceneComponent_c *v17; // x0
  const MethodInfo *v18; // x2
  __int64 v19; // x1
  TerminalPramsManager_c *v20; // x0
  TerminalPramsManager_c *v21; // x0
  Il2CppObject *Instance; // x0
  const MethodInfo *v23; // x1
  Il2CppObject *MasterData_object; // x20
  struct UserServantEntity_array *UserServantListFromDeckIsTerminal; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  __int64 v28; // x2
  struct UserServantEntity_array *mStandSvtDatas; // x8
  __int64 mStandSvtIdx; // x9
  UserServantEntity_o *NextStandServant; // x20
  bool isSavedMemoryMode; // w22
  System_Action_o *v33; // x0
  System_Action_o *v34; // x21
  const MethodInfo *v35; // x4
  const MethodInfo *v36; // x3
  System_Collections_IEnumerator_o *Async; // x1

  if ( (byte_4B46D38 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, data);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserDeckMaster___, v6);
    sub_1BDB878(&OptionManager_TypeInfo, v7);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v9);
    sub_1BDB878(&Method_TerminalSceneComponent_SendMessageStartUpAndResume__, v10);
    sub_1BDB878(&Method_TerminalSceneComponent__beginStartUp_b__176_0__, v11);
    sub_1BDB878(&TerminalSceneComponent_TypeInfo, v12);
    sub_1BDB878(&TerminalTransitionInfo_TypeInfo, v13);
    sub_1BDB878(&TutorialFlag_TypeInfo, v14);
    byte_4B46D38 = 1;
  }
  if ( data
    && (methodPtr_low = LOBYTE(TerminalTransitionInfo_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (TerminalTransitionInfo_c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] == TerminalTransitionInfo_TypeInfo )
      v16 = data;
    else
      v16 = 0LL;
  }
  else
  {
    v16 = 0LL;
  }
  this->fields._TransitionInfo_k__BackingField = (struct TerminalTransitionInfo_o *)v16;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._TransitionInfo_k__BackingField, (int32_t)v16, (int32_t)method, v3);
  v17 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v17 = TerminalSceneComponent_TypeInfo;
  }
  UnityEngine_RenderSettings__set_ambientLight(v17->static_fields->DEFAULT_AMBIENT_LIGHT_COLOR, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 1, 32, 0LL);
  MainMenuBar__setMenuActive(1, this->fields.mUICamera, 0LL);
  TerminalSceneComponent__SetDispStandServant(this, 1, v18);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B46DD3 )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v19);
    byte_4B46DD3 = 1;
  }
  v20 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v20 = TerminalPramsManager_TypeInfo;
  }
  if ( !v20->static_fields->_IsDispDone_UIStandFigure_k__BackingField )
  {
    if ( !v20->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v20);
    if ( !byte_4B46DD4 )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, v19);
      byte_4B46DD4 = 1;
    }
    v21 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v21 = TerminalPramsManager_TypeInfo;
    }
    v21->static_fields->_IsDispDone_UIStandFigure_k__BackingField = 1;
    if ( !byte_4B46DD5 )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, v19);
      v21 = TerminalPramsManager_TypeInfo;
      byte_4B46DD5 = 1;
    }
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = TerminalPramsManager_TypeInfo;
    }
    v21->static_fields->_IsDispUIStandFigure_k__BackingField = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  Instance = (Il2CppObject *)TutorialFlag__Get_39449392(126, 0LL);
  if ( !MasterData_object
    || (((unsigned __int8)Instance & 1) == 0
      ? (UserServantListFromDeckIsTerminal = UserDeckMaster__GetUserServantListFromDeckIsTerminal(
                                               (UserDeckMaster_o *)MasterData_object,
                                               0LL))
      : (UserServantListFromDeckIsTerminal = UserDeckMaster__GetUserServantListFromDeckReaveHeroine(
                                               (UserDeckMaster_o *)MasterData_object,
                                               0LL)),
        this->fields.mStandSvtDatas = UserServantListFromDeckIsTerminal,
        sub_1BDB81C(
          (CGThumbnailListItem_o *)&this->fields.mStandSvtDatas,
          (int32_t)UserServantListFromDeckIsTerminal,
          v26,
          v27),
        (mStandSvtDatas = this->fields.mStandSvtDatas) == 0LL) )
  {
LABEL_45:
    sub_1BDBAD4(Instance, v23);
  }
  mStandSvtIdx = this->fields.mStandSvtIdx;
  if ( (unsigned int)mStandSvtIdx >= mStandSvtDatas->max_length )
    sub_1BDBADC(Instance, v23, v28);
  NextStandServant = mStandSvtDatas->m_Items[mStandSvtIdx];
  if ( !NextStandServant )
    NextStandServant = TerminalSceneComponent__GetNextStandServant(this, v23);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  isSavedMemoryMode = OptionManager__isSavedMemoryMode(0LL);
  v33 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  v34 = v33;
  if ( isSavedMemoryMode )
  {
    System_Action___ctor(v33, (Il2CppObject *)this, Method_TerminalSceneComponent__beginStartUp_b__176_0__, 0LL);
    TerminalSceneComponent__SetupStandServant(this, NextStandServant, 0, v34, v35);
  }
  else
  {
    System_Action___ctor(v33, (Il2CppObject *)this, Method_TerminalSceneComponent_SendMessageStartUpAndResume__, 0LL);
    Async = TerminalSceneComponent__LoadAsync(this, NextStandServant, v34, v36);
    UnityEngine_MonoBehaviour__StartCoroutine_70269772((UnityEngine_MonoBehaviour_o *)this, Async, 0LL);
  }
}


void __fastcall TerminalSceneComponent__callbackEventDailyPoint(
        TerminalSceneComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  TerminalSceneComponent_o *v4; // x19
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
  struct ScrTerminalMap_o *mTerminalMap; // x8
  struct WarEntity_o *mWarEnt; // x22
  __int64 v19; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  Il2CppObject *v22; // x21
  TerminalPramsManager_c *v23; // x0
  CGThumbnailListItem_o *p_eventDailyPoint_k__BackingField; // x0
  int32_t monitor_high; // w21
  TerminalPramsManager_c *v26; // x0
  __int64 v27; // x1
  int64_t Time_40367404; // x21
  TerminalPramsManager_c *v29; // x0
  int32_t eventId; // w21
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct ScrTerminalListTop_o *v32; // x8
  UnityEngine_GameObject_o *mActionPanel; // x21
  TitleInfoControl_o *mTitleInfo; // x20
  System_Action_o *v35; // x22
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  System_DateTime_o v37; // 0:x0.8

  v4 = this;
  if ( (byte_4B46D63 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, result);
    sub_1BDB878(&Method_DataManager_GetMasterData_EventDetailMaster___, v5);
    sub_1BDB878(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v6);
    sub_1BDB878(&Method_JsonManager_Deserialize_EventDailyPoint___, v7);
    sub_1BDB878(&JsonManager_TypeInfo, v8);
    sub_1BDB878(&NetworkManager_TypeInfo, v9);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1BDB878(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v11);
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v12);
    sub_1BDB878(&Method_TerminalSceneComponent__callbackEventDailyPoint_b__224_0__, v13);
    sub_1BDB878(&StringLiteral_11063/*"REQUEST_NG"*/, v14);
    sub_1BDB878(&StringLiteral_22233/*"ng"*/, v15);
    this = (TerminalSceneComponent_o *)sub_1BDB878(&StringLiteral_25332/*"{}"*/, v16);
    byte_4B46D63 = 1;
  }
  entity = 0LL;
  if ( !result )
    goto LABEL_46;
  if ( System_String__Equals_62607564(result, (System_String_o *)StringLiteral_22233/*"ng"*/, 0LL) )
  {
    this = (TerminalSceneComponent_o *)v4->fields.myFSM;
    if ( this )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11063/*"REQUEST_NG"*/, 0LL);
      return;
    }
LABEL_46:
    sub_1BDBAD4(this, result);
  }
  this = (TerminalSceneComponent_o *)System_String__Equals_62607564(result, (System_String_o *)StringLiteral_25332/*"{}"*/, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_43;
  mTerminalMap = v4->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_46;
  mWarEnt = mTerminalMap->fields.mWarEnt;
  this = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_46;
  this = (TerminalSceneComponent_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_303395C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !mWarEnt || !this )
    goto LABEL_46;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &entity,
          mWarEnt->fields.eventId,
          (const MethodInfo_32E1E88 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
LABEL_43:
    this = (TerminalSceneComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !this )
      goto LABEL_46;
    MissionNotifyManager__EndPause((MissionNotifyManager_o *)this, 0LL);
    ActionExtensions__Call(v4->fields.afterEventDailyPoint, 0LL);
  }
  else
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v22 = JsonManager__Deserialize_object_(
            (Il2CppObject *)result,
            (const MethodInfo_30A0354 *)Method_JsonManager_Deserialize_EventDailyPoint___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B4374C )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, v19);
      byte_4B4374C = 1;
    }
    v23 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v23 = TerminalPramsManager_TypeInfo;
    }
    p_eventDailyPoint_k__BackingField = (CGThumbnailListItem_o *)&v23->static_fields->_eventDailyPoint_k__BackingField;
    p_eventDailyPoint_k__BackingField->klass = (CGThumbnailListItem_c *)v22;
    sub_1BDB81C(p_eventDailyPoint_k__BackingField, (int32_t)v22, v20, v21);
    if ( !entity )
      goto LABEL_46;
    monitor_high = HIDWORD(entity[2].monitor);
    if ( !byte_4B46DDA )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, result);
      byte_4B46DDA = 1;
    }
    v26 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v26 = TerminalPramsManager_TypeInfo;
    }
    v26->static_fields->_EventDailyPointItem_k__BackingField = monitor_high;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v37.fields._dateData = NetworkManager__getServerDateTime(0LL).fields._dateData;
    Time_40367404 = NetworkManager__getTime_40367404(v37, 0LL);
    if ( !byte_4B41F40 )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, v27);
      byte_4B41F40 = 1;
    }
    v29 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v29 = TerminalPramsManager_TypeInfo;
    }
    v29->static_fields->_BeforeTimeEventDailyPoint_k__BackingField = Time_40367404;
    eventId = mWarEnt->fields.eventId;
    if ( !byte_4B41F3F )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, v27);
      v29 = TerminalPramsManager_TypeInfo;
      byte_4B41F3F = 1;
    }
    if ( !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29);
      v29 = TerminalPramsManager_TypeInfo;
    }
    v29->static_fields->_EventDailyPointEventId_k__BackingField = eventId;
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
    v32 = v4->fields.mTerminalList;
    if ( !v32 )
      goto LABEL_46;
    mActionPanel = v32->fields.mActionPanel;
    mTitleInfo = v4->fields.mTitleInfo;
    v35 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      v35,
      (Il2CppObject *)v4,
      Method_TerminalSceneComponent__callbackEventDailyPoint_b__224_0__,
      0LL);
    if ( !mTitleInfo )
      goto LABEL_46;
    TitleInfoControl__EventDailyPointOpen(mTitleInfo, mActionPanel, v35, 0LL);
  }
}


void __fastcall TerminalSceneComponent__callbackTopHome(
        TerminalSceneComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  void *myFSM; // x0
  System_Action_o *afterTopLogin; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4B46D5E & 1) == 0 )
  {
    sub_1BDB878(&Method_JsonManager_Deserialize_TopHomeInfo___, result);
    sub_1BDB878(&JsonManager_TypeInfo, v5);
    sub_1BDB878(&StringLiteral_11065/*"REQUEST_OK"*/, v6);
    sub_1BDB878(&StringLiteral_11063/*"REQUEST_NG"*/, v7);
    sub_1BDB878(&StringLiteral_22233/*"ng"*/, v8);
    byte_4B46D5E = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_22233/*"ng"*/, 0LL) )
  {
    myFSM = this->fields.myFSM;
    if ( myFSM )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)StringLiteral_11063/*"REQUEST_NG"*/, 0LL);
      return;
    }
LABEL_11:
    sub_1BDBAD4(myFSM, v9);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  myFSM = JsonManager__Deserialize_object_(
            (Il2CppObject *)result,
            (const MethodInfo_30A0354 *)Method_JsonManager_Deserialize_TopHomeInfo___);
  if ( !myFSM )
    goto LABEL_11;
  TopHomeRequest__setRecentRefreshTime(*((_QWORD *)myFSM + 2), 0LL);
  MainMenuBar__UpdateNoticeNumber(0LL);
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    goto LABEL_11;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)StringLiteral_11065/*"REQUEST_OK"*/, 0LL);
  afterTopLogin = this->fields.afterTopLogin;
  this->fields.isTopLoginBusy = 0;
  ActionExtensions__Call(afterTopLogin, 0LL);
  this->fields.afterTopLogin = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.afterTopLogin, 0, v12, v13);
}


void __fastcall TerminalSceneComponent__callbackTopLogin(
        TerminalSceneComponent_o *this,
        System_String_o *result,
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  NetworkManager_ResultCallbackFunc_o *v22; // x21
  __int64 v23; // x1
  Il2CppObject *Request_object; // x21
  void *myFSM; // x0
  void *v26; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  System_Collections_Generic_List_int__o *v28; // x20
  TerminalSceneComponent___c_c *v29; // x8
  System_Converter_TInput__TOutput__o *_9__217_0; // x21
  Il2CppObject *v31; // x22
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  System_String_array *v35; // x0
  System_String_o *v36; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  System_Collections_Generic_List_int__o *v38; // x19
  TerminalSceneComponent___c_c *v39; // x8
  System_Converter_TInput__TOutput__o *_9__217_1; // x20
  Il2CppObject *v41; // x21
  struct TerminalSceneComponent___c_StaticFields *v42; // x0
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  System_String_array *v45; // x0
  System_String_o *v46; // x0

  if ( (byte_4B46D5D & 1) == 0 )
  {
    sub_1BDB878(&System_Converter_int__string__TypeInfo, result);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToList_int___, v5);
    sub_1BDB878(&Method_JsonManager_Deserialize_CommonUI_LoginResultData___, v6);
    sub_1BDB878(&JsonManager_TypeInfo, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__ConvertAll_string___, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_string__ToArray__, v9);
    sub_1BDB878(&Method_NetworkManager_getRequest_TopHomeRequest___, v10);
    sub_1BDB878(&NetworkManager_TypeInfo, v11);
    sub_1BDB878(&NetworkManager_ResultCallbackFunc_TypeInfo, v12);
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v13);
    sub_1BDB878(&Method_TerminalSceneComponent_callbackTopHome__, v14);
    sub_1BDB878(&Method_TerminalSceneComponent___c__callbackTopLogin_b__217_0__, v15);
    sub_1BDB878(&Method_TerminalSceneComponent___c__callbackTopLogin_b__217_1__, v16);
    sub_1BDB878(&TerminalSceneComponent___c_TypeInfo, v17);
    sub_1BDB878(&StringLiteral_19677/*"freeShopIds"*/, v18);
    sub_1BDB878(&StringLiteral_11065/*"REQUEST_OK"*/, v19);
    sub_1BDB878(&StringLiteral_23113/*"returnRarePriShopIds"*/, v20);
    sub_1BDB878(&StringLiteral_820/*","*/, v21);
    byte_4B46D5D = 1;
  }
  v22 = (NetworkManager_ResultCallbackFunc_o *)sub_1BDBAC4(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v22,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent_callbackTopHome__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v22,
                     (const MethodInfo_30BC7D4 *)Method_NetworkManager_getRequest_TopHomeRequest___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B41962 )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v23);
    byte_4B41962 = 1;
  }
  myFSM = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    myFSM = TerminalPramsManager_TypeInfo;
  }
  if ( !Request_object )
    goto LABEL_45;
  TopHomeRequest__setBackgroundRequest(
    (TopHomeRequest_o *)Request_object,
    *(_BYTE *)(*((_QWORD *)myFSM + 23) + 600LL),
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
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)StringLiteral_11065/*"REQUEST_OK"*/, 0LL);
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
  myFSM = JsonManager__Deserialize_object_(
            (Il2CppObject *)result,
            (const MethodInfo_30A0354 *)Method_JsonManager_Deserialize_CommonUI_LoginResultData___);
  if ( !myFSM )
LABEL_45:
    sub_1BDBAD4(myFSM, v23);
  v26 = myFSM;
  v27 = (System_Collections_Generic_IEnumerable_TSource__o *)*((_QWORD *)myFSM + 18);
  if ( v27 )
  {
    myFSM = System_Linq_Enumerable__ToList_int_(
              v27,
              (const MethodInfo_3074DD0 *)Method_System_Linq_Enumerable_ToList_int___);
    v28 = (System_Collections_Generic_List_int__o *)myFSM;
    v29 = TerminalSceneComponent___c_TypeInfo;
    if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
      v29 = TerminalSceneComponent___c_TypeInfo;
    }
    _9__217_0 = (System_Converter_TInput__TOutput__o *)v29->static_fields->__9__217_0;
    if ( !_9__217_0 )
    {
      if ( !v29->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v29);
        v29 = TerminalSceneComponent___c_TypeInfo;
      }
      v31 = (Il2CppObject *)v29->static_fields->__9;
      _9__217_0 = (System_Converter_TInput__TOutput__o *)sub_1BDBAC4(System_Converter_int__string__TypeInfo);
      System_Converter_int__object____ctor(
        _9__217_0,
        v31,
        Method_TerminalSceneComponent___c__callbackTopLogin_b__217_0__,
        0LL);
      static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
      static_fields->__9__217_0 = (struct System_Converter_int__string__o *)_9__217_0;
      sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__217_0, (int32_t)_9__217_0, v33, v34);
    }
    if ( !v28 )
      goto LABEL_45;
    myFSM = System_Collections_Generic_List_int___ConvertAll_object_(
              v28,
              (System_Converter_T__TOutput__o *)_9__217_0,
              (const MethodInfo_2F62CB4 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    if ( !myFSM )
      goto LABEL_45;
    v35 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                   (System_Collections_Generic_List_object__o *)myFSM,
                                   (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_string__ToArray__);
    v36 = System_String__Join((System_String_o *)StringLiteral_820/*","*/, v35, 0LL);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_19677/*"freeShopIds"*/, v36, 0LL);
  }
  v37 = (System_Collections_Generic_IEnumerable_TSource__o *)*((_QWORD *)v26 + 17);
  if ( v37 )
  {
    myFSM = System_Linq_Enumerable__ToList_int_(
              v37,
              (const MethodInfo_3074DD0 *)Method_System_Linq_Enumerable_ToList_int___);
    v38 = (System_Collections_Generic_List_int__o *)myFSM;
    v39 = TerminalSceneComponent___c_TypeInfo;
    if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
      v39 = TerminalSceneComponent___c_TypeInfo;
    }
    _9__217_1 = (System_Converter_TInput__TOutput__o *)v39->static_fields->__9__217_1;
    if ( !_9__217_1 )
    {
      if ( !v39->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v39);
        v39 = TerminalSceneComponent___c_TypeInfo;
      }
      v41 = (Il2CppObject *)v39->static_fields->__9;
      _9__217_1 = (System_Converter_TInput__TOutput__o *)sub_1BDBAC4(System_Converter_int__string__TypeInfo);
      System_Converter_int__object____ctor(
        _9__217_1,
        v41,
        Method_TerminalSceneComponent___c__callbackTopLogin_b__217_1__,
        0LL);
      v42 = TerminalSceneComponent___c_TypeInfo->static_fields;
      v42->__9__217_1 = (struct System_Converter_int__string__o *)_9__217_1;
      sub_1BDB81C((CGThumbnailListItem_o *)&v42->__9__217_1, (int32_t)_9__217_1, v43, v44);
    }
    if ( v38 )
    {
      myFSM = System_Collections_Generic_List_int___ConvertAll_object_(
                v38,
                (System_Converter_T__TOutput__o *)_9__217_1,
                (const MethodInfo_2F62CB4 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
      if ( myFSM )
      {
        v45 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                       (System_Collections_Generic_List_object__o *)myFSM,
                                       (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_string__ToArray__);
        v46 = System_String__Join((System_String_o *)StringLiteral_820/*","*/, v45, 0LL);
        UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_23113/*"returnRarePriShopIds"*/, v46, 0LL);
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
  __int64 v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4B46D49 & 1) == 0 )
  {
    sub_1BDB878(&TerminalSceneComponent__coFadein_WorldDisp_d__196_TypeInfo, endAct);
    byte_4B46D49 = 1;
  }
  v9 = sub_1BDBAC4(TerminalSceneComponent__coFadein_WorldDisp_d__196_TypeInfo);
  TerminalSceneComponent__coFadein_WorldDisp_d__196___ctor(
    (TerminalSceneComponent__coFadein_WorldDisp_d__196_o *)v9,
    0,
    0LL);
  if ( !v9 )
    sub_1BDBAD4(v10, v11);
  *(_QWORD *)(v9 + 32) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v9 + 32), (int32_t)this, v12, v13);
  *(float *)(v9 + 64) = fadeTime;
  *(_QWORD *)(v9 + 40) = endAct;
  sub_1BDB81C((CGThumbnailListItem_o *)(v9 + 40), (int32_t)endAct, v14, v15);
  *(_BYTE *)(v9 + 48) = isExecuteUnusedAssets;
  return (System_Collections_IEnumerator_o *)v9;
}


void __fastcall TerminalSceneComponent__deleteQuestMovie(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  int64_t Time; // x20
  DataManager_o *Master_object; // x0
  __int64 v15; // x1
  System_Collections_ObjectModel_Collection_T__o *datalist; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *v17; // x21
  __int64 v18; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  __int64 v25; // x9
  int32_t *v26; // x10
  __int64 v27; // x0
  __int64 v28; // x1
  QuestPhaseEntity_o *v29; // x23
  QuestPhaseMaster_c *v30; // x0
  System_String_o *ScriptStr; // x0
  __int64 v32; // x1
  System_String_o *v33; // x22
  Il2CppObject *Entity; // x0
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  __int64 v36; // x9
  int32_t *v37; // x10
  __int64 v38; // x0

  if ( (byte_4B46D61 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_QuestPhaseEntity__GetEnumerator__, method);
    sub_1BDB878(&Method_DataManager_GetMasterData_QuestMaster___, v2);
    sub_1BDB878(&Method_DataManager_GetMaster_QuestPhaseMaster___, v3);
    sub_1BDB878(&DataManager_TypeInfo, v4);
    sub_1BDB878(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v5);
    sub_1BDB878(&Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string__getEntityList__, v6);
    sub_1BDB878(&System_IDisposable_TypeInfo, v7);
    sub_1BDB878(&System_Collections_Generic_IEnumerator_QuestPhaseEntity__TypeInfo, v8);
    sub_1BDB878(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1BDB878(&NetworkManager_TypeInfo, v10);
    sub_1BDB878(&QuestPhaseMaster_TypeInfo, v11);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4B46D61 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object
    || (datalist = (System_Collections_ObjectModel_Collection_T__o *)Master_object->fields.datalist,
        (Master_object = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Master_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                           Master_object,
                                           (const MethodInfo_303395C *)Method_DataManager_GetMasterData_QuestMaster___),
        !datalist) )
  {
    sub_1BDBAD4(Master_object, v15);
  }
  v17 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 datalist,
                 (const MethodInfo_327DBFC *)Method_System_Collections_ObjectModel_Collection_QuestPhaseEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BDBAD4(0LL, v18);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v21 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v21;
        p_offset += 4;
        if ( !v21 )
          goto LABEL_15;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_15:
      p_method = sub_1C2C00C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v24 = Enumerator->klass;
    v25 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v26 = &v24->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestPhaseEntity__c **)v26 - 1) != System_Collections_Generic_IEnumerator_QuestPhaseEntity__TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_22;
      }
      v27 = (__int64)&v24->vtable[*v26].method;
    }
    else
    {
LABEL_22:
      v27 = sub_1C2C00C(Enumerator, System_Collections_Generic_IEnumerator_QuestPhaseEntity__TypeInfo, 0LL);
    }
    v29 = (QuestPhaseEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(
                                  Enumerator,
                                  *(_QWORD *)(v27 + 8));
    v30 = QuestPhaseMaster_TypeInfo;
    if ( !QuestPhaseMaster_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestPhaseMaster_TypeInfo);
    if ( !v29 )
      sub_1BDBAD4(v30, v28);
    ScriptStr = QuestPhaseEntity__getScriptStr(
                  v29,
                  QuestPhaseMaster_TypeInfo->static_fields->MOVIE_QUEST_SCRIPT_STR,
                  0LL,
                  0LL);
    v33 = ScriptStr;
    if ( ScriptStr )
    {
      if ( !v17 )
        sub_1BDBAD4(ScriptStr, v32);
      Entity = DataMasterBase_object__object__int___GetEntity(
                 v17,
                 v29->fields.questId,
                 (const MethodInfo_32E1E3C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
      if ( Entity )
      {
        if ( Time >= QuestEntity__getClosedAt((QuestEntity_o *)Entity, 0LL) )
          MovieFileMerge__Delete(v33, 0LL);
      }
    }
  }
  v35 = Enumerator->klass;
  v36 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v37 = &v35->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
    {
      --v36;
      v37 += 4;
      if ( !v36 )
        goto LABEL_36;
    }
    v38 = (__int64)&v35->vtable[*v37].method;
  }
  else
  {
LABEL_36:
    v38 = sub_1C2C00C(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(Enumerator, *(_QWORD *)(v38 + 8));
}


void __fastcall TerminalSceneComponent__fadeoutBgm(
        TerminalSceneComponent_o *this,
        float fadeoutTime,
        const MethodInfo *method)
{
  if ( (byte_4B46D58 & 1) == 0 )
  {
    sub_1BDB878(&SoundManager_TypeInfo, method);
    byte_4B46D58 = 1;
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
  __int64 v1; // x1
  TerminalSceneComponent_c *v2; // x0

  if ( (byte_4B46D2D & 1) == 0 )
  {
    sub_1BDB878(&TerminalSceneComponent_TypeInfo, v1);
    byte_4B46D2D = 1;
  }
  v2 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v2 = TerminalSceneComponent_TypeInfo;
  }
  return v2->static_fields->mInstance;
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

  if ( (byte_4B46D30 & 1) == 0 )
  {
    sub_1BDB878(&FSUtility_TypeInfo, method);
    byte_4B46D30 = 1;
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

  if ( (byte_4B46D2F & 1) == 0 )
  {
    sub_1BDB878(&FSUtility_TypeInfo, method);
    byte_4B46D2F = 1;
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

  if ( (byte_4B46D31 & 1) == 0 )
  {
    sub_1BDB878(&FSUtility_TypeInfo, method);
    byte_4B46D31 = 1;
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

  if ( (byte_4B46D32 & 1) == 0 )
  {
    sub_1BDB878(&FSUtility_TypeInfo, method);
    byte_4B46D32 = 1;
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x1
  System_Action_o *v9; // x20

  if ( (byte_4B46D3D & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&AtlasManager_TypeInfo, v3);
    sub_1BDB878(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v4);
    sub_1BDB878(&Method_TerminalSceneComponent__loadCommonBG_b__181_0__, v5);
    byte_4B46D3D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v7);
  if ( AtlasManager__isLoadedSkinData((AtlasManager_o *)Instance, 4, 0LL) )
  {
    TerminalSceneComponent__loadOutGameAtlas(this, v8);
  }
  else
  {
    v9 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_TerminalSceneComponent__loadCommonBG_b__181_0__, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__LoadUISkin(v9, 4, 1, 0LL);
  }
}


void __fastcall TerminalSceneComponent__loadOutGameAtlas(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_4B46D3E & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&AtlasManager_TypeInfo, v3);
    sub_1BDB878(&Method_TerminalSceneComponent__loadOutGameAtlas_b__182_0__, v4);
    byte_4B46D3E = 1;
  }
  v5 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_TerminalSceneComponent__loadOutGameAtlas_b__182_0__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameAtlas(v5, 0LL);
}


void __fastcall TerminalSceneComponent__loadVoice(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct TerminalTransitionInfo_o *TransitionInfo_k__BackingField; // x8
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  struct TerminalTransitionInfo_o *v8; // x8
  System_String_o *voiceAssetName; // x21
  SoundManager_o *v10; // x20
  System_Action_o *v11; // x22

  if ( (byte_4B46D3F & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v3);
    sub_1BDB878(&Method_TerminalSceneComponent_SendMessageStartUpAndResume__, v4);
    byte_4B46D3F = 1;
  }
  TransitionInfo_k__BackingField = this->fields._TransitionInfo_k__BackingField;
  if ( TransitionInfo_k__BackingField
    && !System_String__IsNullOrEmpty(TransitionInfo_k__BackingField->fields.voiceAssetName, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    v8 = this->fields._TransitionInfo_k__BackingField;
    if ( !v8
      || (voiceAssetName = v8->fields.voiceAssetName,
          v10 = (SoundManager_o *)Instance,
          v11 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo),
          System_Action___ctor(
            v11,
            (Il2CppObject *)this,
            Method_TerminalSceneComponent_SendMessageStartUpAndResume__,
            0LL),
          !v10) )
    {
      sub_1BDBAD4(Instance, v7);
    }
    SoundManager__LoadAudioAssetStorage(v10, voiceAssetName, v11, 1, 0LL);
  }
  else
  {
    TerminalSceneComponent__SendMessageStartUpAndResume(this, method);
  }
}


void __fastcall TerminalSceneComponent__mcbfCheckSceneStatus(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  TerminalPramsManager_c *v5; // x0
  int32_t meSceneStatus; // w8
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v8; // x8

  if ( (byte_4B46D6F & 1) == 0 )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, method);
    sub_1BDB878(&StringLiteral_5761/*"EV_SCENE_STATUS_INIT"*/, v3);
    sub_1BDB878(&StringLiteral_5762/*"EV_SCENE_STATUS_RESUME"*/, v4);
    byte_4B46D6F = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B41AC4 )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, method);
    byte_4B41AC4 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  meSceneStatus = v5->static_fields->meSceneStatus;
  if ( meSceneStatus != 3 && meSceneStatus != 2 )
  {
    myFSM = this->fields.myFSM;
    if ( myFSM )
    {
      v8 = &StringLiteral_5761/*"EV_SCENE_STATUS_INIT"*/;
      goto LABEL_15;
    }
LABEL_16:
    sub_1BDBAD4(myFSM, method);
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    goto LABEL_16;
  v8 = &StringLiteral_5762/*"EV_SCENE_STATUS_RESUME"*/;
LABEL_15:
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v8, 0LL);
}


void __fastcall TerminalSceneComponent__mfCallFsmEvent(
        TerminalSceneComponent_o *this,
        System_String_o *sEventStr,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1BDBAD4(0LL, sEventStr);
  PlayMakerFSM__SendEvent(myFSM, sEventStr, 0LL);
}


void __fastcall TerminalSceneComponent__mfsmfInitTable(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  ScrTerminalMap_o *mTerminalMap; // x0
  struct ScrTerminalListTop_o *mTerminalList; // x8
  Il2CppObject *Instance; // x20
  System_Action_o *v8; // x21
  System_Collections_IEnumerator_o *v9; // x1

  if ( (byte_4B46D60 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_SingletonTemplate_QuestTree__get_Instance__, v3);
    sub_1BDB878(&Method_TerminalSceneComponent__mfsmfInitTable_b__221_0__, v4);
    byte_4B46D60 = 1;
  }
  mTerminalMap = this->fields.mTerminalMap;
  if ( !mTerminalMap
    || (ScrTerminalMap__ReleaseMap(mTerminalMap, 0, 0LL), (mTerminalList = this->fields.mTerminalList) == 0LL)
    || (mTerminalMap = (ScrTerminalMap_o *)mTerminalList->fields.mQuestBoardListViewManager) == 0LL
    || (ListViewManager__DestroyList((ListViewManager_o *)mTerminalMap, 0LL),
        Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_QuestTree__get_Instance__),
        v8 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo),
        System_Action___ctor(v8, (Il2CppObject *)this, Method_TerminalSceneComponent__mfsmfInitTable_b__221_0__, 0LL),
        !Instance) )
  {
    sub_1BDBAD4(mTerminalMap, method);
  }
  v9 = QuestTree__Init((QuestTree_o *)Instance, v8, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_70269772((UnityEngine_MonoBehaviour_o *)this, v9, 0LL);
}


void __fastcall TerminalSceneComponent__playBgm(
        TerminalSceneComponent_o *this,
        System_String_o *bgmName,
        System_Action_o *onLoadFinishCallback,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x3
  System_String_o *mPlayBgmName; // x20

  if ( (byte_4B46D55 & 1) == 0 )
  {
    sub_1BDB878(&SoundManager_TypeInfo, bgmName);
    byte_4B46D55 = 1;
  }
  if ( System_String__IsNullOrEmpty(bgmName, 0LL) )
  {
    TerminalSceneComponent__playDefaultBgm(this, onLoadFinishCallback, v7);
  }
  else
  {
    this->fields.mPlayBgmName = bgmName;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.mPlayBgmName, (int32_t)bgmName, (int32_t)v7, v8);
    mPlayBgmName = this->fields.mPlayBgmName;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__playBgm_40513824(mPlayBgmName, onLoadFinishCallback, 0LL);
  }
}


void __fastcall TerminalSceneComponent__playBgm_44216792(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  System_String_o *mPlayBgmName; // x19

  if ( (byte_4B46D57 & 1) == 0 )
  {
    sub_1BDB878(&SoundManager_TypeInfo, method);
    byte_4B46D57 = 1;
  }
  mPlayBgmName = this->fields.mPlayBgmName;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(mPlayBgmName, 0LL);
}


void __fastcall TerminalSceneComponent__playDefaultBgm(
        TerminalSceneComponent_o *this,
        System_Action_o *onLoadFinishCallback,
        const MethodInfo *method)
{
  System_String_o *MainBgmName; // x1
  const MethodInfo *v6; // x3

  if ( (byte_4B46D56 & 1) == 0 )
  {
    sub_1BDB878(&BgmManager_TypeInfo, onLoadFinishCallback);
    byte_4B46D56 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  MainBgmName = BgmManager__GetMainBgmName(0, 0LL);
  TerminalSceneComponent__playBgm(this, MainBgmName, onLoadFinishCallback, v6);
}


void __fastcall TerminalSceneComponent__quit(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  void *Instance; // x0
  __int64 v12; // x1
  __int64 v13; // x1
  TerminalPramsManager_c *v14; // x0
  TerminalPramsManager_c *v15; // x0
  struct TerminalTransitionInfo_o *TransitionInfo_k__BackingField; // x8
  struct TerminalTransitionInfo_o *v17; // x8
  System_String_o *voiceAssetName; // x20
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  Il2CppObject *MasterData_object; // x0
  TerminalOverwriteMaster_o *v22; // x20
  bool OverwriteSkinName; // w0
  TerminalSceneComponent_c *v24; // x8
  bool v25; // w22
  System_String_o *OVERWRITE_COMMON_BG_TYPE1_KEY; // x21
  System_String_o *Empty; // x1
  bool v28; // w0
  TerminalSceneComponent_c *v29; // x8
  bool v30; // w21
  System_String_o *OVERWRITE_COMMON_BG_TYPE2_KEY; // x20
  System_String_o *v32; // x1
  System_String_o *str1; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *skinName; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4B46D43 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_TerminalOverwriteMaster___, method);
    sub_1BDB878(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v3);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_1BDB878(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v5);
    sub_1BDB878(&SoundManager_TypeInfo, v6);
    sub_1BDB878(&string_TypeInfo, v7);
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v8);
    sub_1BDB878(&TerminalSceneComponent_TypeInfo, v9);
    sub_1BDB878(&StringLiteral_14757/*"UISkin/"*/, v10);
    byte_4B46D43 = 1;
  }
  skinName = 0LL;
  str1 = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  AutomatedAction__TerminateMissionAction((AutomatedAction_o *)Instance, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B46DD6 )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v13);
    byte_4B46DD6 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  if ( v14->static_fields->_isWarBoardPlay_k__BackingField )
  {
    if ( !v14->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v14);
    if ( !byte_4B41D3E )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, v13);
      byte_4B41D3E = 1;
    }
    v15 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v15 = TerminalPramsManager_TypeInfo;
    }
    v15->static_fields->_isWarBoardPlay_k__BackingField = 0;
  }
  else
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__stopSe(0.0, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  QuestAfterAction__releaseVoice((QuestAfterAction_o *)Instance, 0LL);
  TransitionInfo_k__BackingField = this->fields._TransitionInfo_k__BackingField;
  if ( TransitionInfo_k__BackingField )
  {
    Instance = (void *)System_String__IsNullOrEmpty(TransitionInfo_k__BackingField->fields.voiceAssetName, 0LL);
    if ( ((unsigned __int8)Instance & 1) == 0 )
    {
      v17 = this->fields._TransitionInfo_k__BackingField;
      if ( !v17 )
        goto LABEL_50;
      voiceAssetName = v17->fields.voiceAssetName;
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__releaseAudioAssetStorage(voiceAssetName, 0LL);
      Instance = this->fields._TransitionInfo_k__BackingField;
      if ( !Instance )
        goto LABEL_50;
      *((_QWORD *)Instance + 5) = 0LL;
      sub_1BDB81C((CGThumbnailListItem_o *)((char *)Instance + 40), 0, v19, v20);
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
    sub_1BDBAD4(Instance, v12);
  }
LABEL_34:
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_TerminalOverwriteMaster___);
  if ( MasterData_object )
  {
    v22 = (TerminalOverwriteMaster_o *)MasterData_object;
    OverwriteSkinName = TerminalOverwriteMaster__TryGetOverwriteSkinName(
                          (TerminalOverwriteMaster_o *)MasterData_object,
                          2,
                          &skinName,
                          0LL);
    v24 = TerminalSceneComponent_TypeInfo;
    v25 = OverwriteSkinName;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v24 = TerminalSceneComponent_TypeInfo;
    }
    OVERWRITE_COMMON_BG_TYPE1_KEY = v24->static_fields->OVERWRITE_COMMON_BG_TYPE1_KEY;
    if ( v25 )
      Empty = System_String__Concat_62572260((System_String_o *)StringLiteral_14757/*"UISkin/"*/, skinName, 0LL);
    else
      Empty = string_TypeInfo->static_fields->Empty;
    UnityEngine_PlayerPrefs__SetString(OVERWRITE_COMMON_BG_TYPE1_KEY, Empty, 0LL);
    v28 = TerminalOverwriteMaster__TryGetOverwriteSkinName(v22, 4, &str1, 0LL);
    v29 = TerminalSceneComponent_TypeInfo;
    v30 = v28;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v29 = TerminalSceneComponent_TypeInfo;
    }
    OVERWRITE_COMMON_BG_TYPE2_KEY = v29->static_fields->OVERWRITE_COMMON_BG_TYPE2_KEY;
    if ( v30 )
      v32 = System_String__Concat_62572260((System_String_o *)StringLiteral_14757/*"UISkin/"*/, str1, 0LL);
    else
      v32 = string_TypeInfo->static_fields->Empty;
    UnityEngine_PlayerPrefs__SetString(OVERWRITE_COMMON_BG_TYPE2_KEY, v32, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  NetworkManager_ResultCallbackFunc_o *v11; // x21

  if ( (byte_4B46D62 & 1) == 0 )
  {
    sub_1BDB878(&Method_NetworkManager_getRequest_EventDailyPointRequest___, *(_QWORD *)&eventId);
    sub_1BDB878(&NetworkManager_TypeInfo, v5);
    sub_1BDB878(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_1BDB878(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v7);
    sub_1BDB878(&Method_TerminalSceneComponent_callbackEventDailyPoint__, v8);
    byte_4B46D62 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  v11 = (NetworkManager_ResultCallbackFunc_o *)sub_1BDBAC4(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v11,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent_callbackEventDailyPoint__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getRequest_object_(
               v11,
               (const MethodInfo_30BC7D4 *)Method_NetworkManager_getRequest_EventDailyPointRequest___);
  if ( !Instance )
LABEL_8:
    sub_1BDBAD4(Instance, v10);
  EventDailyPointRequest__beginRequest((EventDailyPointRequest_o *)Instance, eventId, 0LL);
}


void __fastcall TerminalSceneComponent__requestTopHome(TerminalSceneComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  TerminalPramsManager_c *v9; // x0
  PlayMakerFSM_o *myFSM; // x0
  Il2CppObject *Instance; // x20
  NetworkManager_LoginCallbackFunc_o *v12; // x21

  if ( (byte_4B46D5C & 1) == 0 )
  {
    sub_1BDB878(&NetworkManager_LoginCallbackFunc_TypeInfo, method);
    sub_1BDB878(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v3);
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v4);
    sub_1BDB878(&Method_TerminalSceneComponent_callbackTopLogin__, v5);
    sub_1BDB878(&TutorialFlag_TypeInfo, v6);
    sub_1BDB878(&StringLiteral_11065/*"REQUEST_OK"*/, v7);
    byte_4B46D5C = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_39449392(102, 0LL) )
    goto LABEL_13;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B41ADA )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v8);
    byte_4B41ADA = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  if ( v9->static_fields->_IsPlayScriptWithMap_k__BackingField )
  {
LABEL_13:
    myFSM = this->fields.myFSM;
    if ( myFSM )
    {
      PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11065/*"REQUEST_OK"*/, 0LL);
      this->fields.isTopLoginBusy = 0;
      return;
    }
LABEL_17:
    sub_1BDBAD4(myFSM, v8);
  }
  this->fields.isTopLoginBusy = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  v12 = (NetworkManager_LoginCallbackFunc_o *)sub_1BDBAC4(NetworkManager_LoginCallbackFunc_TypeInfo);
  NetworkManager_LoginCallbackFunc___ctor(
    v12,
    (Il2CppObject *)this,
    Method_TerminalSceneComponent_callbackTopLogin__,
    0LL);
  if ( !Instance )
    goto LABEL_17;
  NetworkManager__RequestLogin((NetworkManager_o *)Instance, v12, 0, 0LL);
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
  const MethodInfo *v3; // x3

  this->fields._TransitionInfo_k__BackingField = value;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields._TransitionInfo_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BDB938(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BDBAF0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BDB9A0(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A27268;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A27220;
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
  if ( (byte_4B46D88 & 1) == 0 )
  {
    sub_1BDB878(&bool_TypeInfo, isPlay);
    byte_4B46D88 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BDB82C(this, v9, callback, object);
}


void __fastcall TerminalSceneComponent_PlayChapterStartCallback__EndInvoke(
        TerminalSceneComponent_PlayChapterStartCallback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BDB830(result, 0LL, method);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x19
  TerminalSceneComponent_o *mFG; // x0
  const MethodInfo *v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  TerminalSceneComponent_o **v16; // x20
  QuestBoardListViewObject_o *FocusQuest; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x8
  struct UIScrollView_o *scrollView; // x8
  struct UIProgressBar_o *verticalScrollBar; // x23
  System_String_o *v24; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v26; // x0
  CommonUI_o *v27; // x22
  UnityEngine_Vector2_o TUTORIAL_QUEST_ARROW_POS_FS; // kr00_8
  float v29; // s0
  float v30; // s1
  float v31; // s2
  float v32; // s3
  TerminalSceneComponent_o *v33; // x8
  float x; // s14
  float y; // s15
  float v36; // s10
  float v37; // s11
  float v38; // s12
  float v39; // s13
  System_Action_o *v40; // x23
  struct ScrTerminalListTop_o *v41; // x21
  System_Action_o *v42; // x20
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  UnityEngine_Rect_o v45; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4B46D8B & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, that);
    sub_1BDB878(&Method_GameObjectExtensions_RemoveComponent_Collider___, v4);
    sub_1BDB878(&LocalizationManager_TypeInfo, v5);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1BDB878(&Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__0__, v7);
    sub_1BDB878(&Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__1__, v8);
    sub_1BDB878(&TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_TypeInfo, v9);
    sub_1BDB878(&StringLiteral_13573/*"TUTORIAL_MESSAGE_TERMINAL_QUEST1"*/, v10);
    byte_4B46D8B = 1;
  }
  v11 = sub_1BDBAC4(TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_22;
  *(_QWORD *)(v11 + 16) = that;
  v16 = (TerminalSceneComponent_o **)(v11 + 16);
  sub_1BDB81C((CGThumbnailListItem_o *)(v11 + 16), (int32_t)that, v14, v15);
  if ( !*(_QWORD *)(v11 + 16) )
    goto LABEL_22;
  mFG = *(TerminalSceneComponent_o **)(*(_QWORD *)(v11 + 16) + 256LL);
  if ( !mFG )
    goto LABEL_22;
  FocusQuest = ScrTerminalListTop__GetFocusQuest((ScrTerminalListTop_o *)mFG, 0LL);
  *(_QWORD *)(v11 + 24) = FocusQuest;
  sub_1BDB81C((CGThumbnailListItem_o *)(v11 + 24), (int32_t)FocusQuest, v18, v19);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  mFG = (TerminalSceneComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13573/*"TUTORIAL_MESSAGE_TERMINAL_QUEST1"*/, 0LL);
  if ( !*v16 )
    goto LABEL_22;
  mTerminalList = (*v16)->fields.mTerminalList;
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
  v24 = (System_String_o *)mFG;
  mFG = (TerminalSceneComponent_o *)verticalScrollBar->fields.mFG;
  if ( !mFG )
    goto LABEL_22;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mFG, 0LL);
  GameObjectExtensions__RemoveComponent_object_(
    gameObject,
    (const MethodInfo_3089EC4 *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mFG = (TerminalSceneComponent_o *)verticalScrollBar->fields.mBG;
  if ( !mFG )
    goto LABEL_22;
  v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mFG, 0LL);
  GameObjectExtensions__RemoveComponent_object_(
    v26,
    (const MethodInfo_3089EC4 *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mFG = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*v16 )
    goto LABEL_22;
  v27 = (CommonUI_o *)mFG;
  TUTORIAL_QUEST_ARROW_POS_FS = TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_POS_FS(*v16, v13);
  mFG = *v16;
  if ( !*v16 )
    goto LABEL_22;
  *(UnityEngine_Rect_o *)&v29 = TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_RECT_FS(mFG, v13);
  v33 = *v16;
  if ( !*v16 )
    goto LABEL_22;
  x = v33->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.x;
  y = v33->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.y;
  v36 = v29;
  v37 = v30;
  v38 = v31;
  v39 = v32;
  v40 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    v40,
    (Il2CppObject *)v11,
    Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__0__,
    0LL);
  if ( !v27 )
    goto LABEL_22;
  v45.fields.m_XMin = v36;
  v45.fields.m_YMin = v37;
  v45.fields.m_Width = v38;
  v45.fields.m_Height = v39;
  CommonUI__OpenTutorialNotificationDialogArrow(
    v27,
    v24,
    TUTORIAL_QUEST_ARROW_POS_FS,
    v45,
    90.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    v40,
    0LL);
  if ( !*v16
    || (v41 = (*v16)->fields.mTerminalList,
        v42 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo),
        System_Action___ctor(
          v42,
          (Il2CppObject *)v11,
          Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__1__,
          0LL),
        !v41) )
  {
LABEL_22:
    sub_1BDBAD4(mFG, v13);
  }
  v41->fields.mQuestClickAct = v42;
  sub_1BDB81C((CGThumbnailListItem_o *)&v41->fields.mQuestClickAct, (int32_t)v42, v43, v44);
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
  if ( (byte_4B46D8C & 1) == 0 )
  {
    this = (TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *)sub_1BDB878(
                                                                                        &Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___,
                                                                                        method);
    byte_4B46D8C = 1;
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
                                                                                            (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___)) == 0LL )
  {
LABEL_12:
    sub_1BDBAD4(this, method);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0___begin_b__1(
        TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v8; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4B46D8D & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1BDB878(&Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__2__, v4);
    byte_4B46D8D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v8 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v9, v10);
  }
  if ( !v8 )
    sub_1BDBAD4(Instance, v6);
  CommonUI__CloseTutorialNotificationDialogArrow_30859100(v8, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial1_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1BDBAD4(0LL, method);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x20
  ScrTerminalMap_o *mTerminalMap; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  SrcSpotBasePrefab_o *FocusSpot; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_String_o *v19; // x21
  Il2CppObject *Instance; // x22
  const MethodInfo *v21; // x1
  UnityEngine_Vector2_o v22; // kr00_8
  const MethodInfo *v23; // x1
  float x; // s14
  float y; // s15
  float m_XMin; // s10
  float m_YMin; // s11
  float m_Width; // s12
  float m_Height; // s13
  System_Action_o *v30; // x23
  struct ScrTerminalMap_o *v31; // x21
  System_Action_o *v32; // x19
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  UnityEngine_Vector2_o v35; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v36; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v37; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v38; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4B46D89 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, that);
    sub_1BDB878(&LocalizationManager_TypeInfo, v5);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1BDB878(&Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__0__, v7);
    sub_1BDB878(&Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__1__, v8);
    sub_1BDB878(&TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0_TypeInfo, v9);
    sub_1BDB878(&StringLiteral_13576/*"TUTORIAL_MESSAGE_TERMINAL_SPOT1"*/, v10);
    byte_4B46D89 = 1;
  }
  v11 = sub_1BDBAC4(TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_12;
  *(_QWORD *)(v11 + 24) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v11 + 24), (int32_t)this, v14, v15);
  this->fields.mIsGoNext = 0;
  if ( !that )
    goto LABEL_12;
  mTerminalMap = that->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_12;
  FocusSpot = ScrTerminalMap__GetFocusSpot(mTerminalMap, 0LL);
  *(_QWORD *)(v11 + 16) = FocusSpot;
  sub_1BDB81C((CGThumbnailListItem_o *)(v11 + 16), (int32_t)FocusSpot, v17, v18);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_13576/*"TUTORIAL_MESSAGE_TERMINAL_SPOT1"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v35.fields.y = -97.0;
  v35.fields.x = -55.0;
  v22 = TerminalSceneComponent__FSSpotArrowPosLerp(that, v35, v21);
  v36.fields.y = 0.0;
  v36.fields.x = -55.0;
  v37 = TerminalSceneComponent__FSSpotArrowRectLerp(that, v36, v23);
  x = that->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.x;
  y = that->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.y;
  m_XMin = v37.fields.m_XMin;
  m_YMin = v37.fields.m_YMin;
  m_Width = v37.fields.m_Width;
  m_Height = v37.fields.m_Height;
  v30 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v11,
    Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__0__,
    0LL);
  if ( !Instance )
    goto LABEL_12;
  v38.fields.m_XMin = m_XMin;
  v38.fields.m_YMin = m_YMin;
  v38.fields.m_Width = m_Width;
  v38.fields.m_Height = m_Height;
  CommonUI__OpenTutorialNotificationDialogArrow(
    (CommonUI_o *)Instance,
    v19,
    v22,
    v38,
    90.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    v30,
    0LL);
  mTerminalMap = that->fields.mTerminalMap;
  if ( !mTerminalMap
    || (ScrTerminalMap__SetMapCamera_TutorialFocusSpot(mTerminalMap, *(SrcSpotBasePrefab_o **)(v11 + 16), 0.5, 0LL),
        v31 = that->fields.mTerminalMap,
        v32 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo),
        System_Action___ctor(
          v32,
          (Il2CppObject *)v11,
          Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__1__,
          0LL),
        !v31) )
  {
LABEL_12:
    sub_1BDBAD4(mTerminalMap, v13);
  }
  v31->fields.mSpotClickAct = v32;
  sub_1BDB81C((CGThumbnailListItem_o *)&v31->fields.mSpotClickAct, (int32_t)v32, v33, v34);
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
      sub_1BDBAD4(that, that);
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
    sub_1BDBAD4(0LL, method);
  SrcSpotBasePrefab__SetBtnColliderEnable(focus_spot, 1, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0___begin_b__1(
        TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v8; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4B46D8A & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1BDB878(&Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__2__, v4);
    byte_4B46D8A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v8 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v9, v10);
  }
  if ( !v8 )
    sub_1BDBAD4(Instance, v6);
  CommonUI__CloseTutorialNotificationDialogArrow_30859100(v8, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0___begin_b__2(
        TerminalSceneComponent_StateTutorial1_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_StateTutorial1_SpotArrow_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BDBAD4(this, method);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x19
  TerminalSceneComponent_o *mFG; // x0
  const MethodInfo *v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  TerminalSceneComponent_o **v16; // x20
  QuestBoardListViewObject_o *FocusQuest; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x8
  struct UIScrollView_o *scrollView; // x8
  struct UIProgressBar_o *verticalScrollBar; // x23
  System_String_o *v24; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v26; // x0
  CommonUI_o *v27; // x22
  UnityEngine_Vector2_o TUTORIAL_QUEST_ARROW_POS_FS; // kr00_8
  float v29; // s0
  float v30; // s1
  float v31; // s2
  float v32; // s3
  TerminalSceneComponent_o *v33; // x8
  float x; // s14
  float y; // s15
  float v36; // s10
  float v37; // s11
  float v38; // s12
  float v39; // s13
  System_Action_o *v40; // x23
  struct ScrTerminalListTop_o *v41; // x21
  System_Action_o *v42; // x20
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  UnityEngine_Rect_o v45; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4B46D90 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, that);
    sub_1BDB878(&Method_GameObjectExtensions_RemoveComponent_Collider___, v4);
    sub_1BDB878(&LocalizationManager_TypeInfo, v5);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1BDB878(&Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__0__, v7);
    sub_1BDB878(&Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__1__, v8);
    sub_1BDB878(&TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_TypeInfo, v9);
    sub_1BDB878(&StringLiteral_13574/*"TUTORIAL_MESSAGE_TERMINAL_QUEST2"*/, v10);
    byte_4B46D90 = 1;
  }
  v11 = sub_1BDBAC4(TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_22;
  *(_QWORD *)(v11 + 16) = that;
  v16 = (TerminalSceneComponent_o **)(v11 + 16);
  sub_1BDB81C((CGThumbnailListItem_o *)(v11 + 16), (int32_t)that, v14, v15);
  if ( !*(_QWORD *)(v11 + 16) )
    goto LABEL_22;
  mFG = *(TerminalSceneComponent_o **)(*(_QWORD *)(v11 + 16) + 256LL);
  if ( !mFG )
    goto LABEL_22;
  FocusQuest = ScrTerminalListTop__GetFocusQuest((ScrTerminalListTop_o *)mFG, 0LL);
  *(_QWORD *)(v11 + 24) = FocusQuest;
  sub_1BDB81C((CGThumbnailListItem_o *)(v11 + 24), (int32_t)FocusQuest, v18, v19);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  mFG = (TerminalSceneComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13574/*"TUTORIAL_MESSAGE_TERMINAL_QUEST2"*/, 0LL);
  if ( !*v16 )
    goto LABEL_22;
  mTerminalList = (*v16)->fields.mTerminalList;
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
  v24 = (System_String_o *)mFG;
  mFG = (TerminalSceneComponent_o *)verticalScrollBar->fields.mFG;
  if ( !mFG )
    goto LABEL_22;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mFG, 0LL);
  GameObjectExtensions__RemoveComponent_object_(
    gameObject,
    (const MethodInfo_3089EC4 *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mFG = (TerminalSceneComponent_o *)verticalScrollBar->fields.mBG;
  if ( !mFG )
    goto LABEL_22;
  v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mFG, 0LL);
  GameObjectExtensions__RemoveComponent_object_(
    v26,
    (const MethodInfo_3089EC4 *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mFG = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*v16 )
    goto LABEL_22;
  v27 = (CommonUI_o *)mFG;
  TUTORIAL_QUEST_ARROW_POS_FS = TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_POS_FS(*v16, v13);
  mFG = *v16;
  if ( !*v16 )
    goto LABEL_22;
  *(UnityEngine_Rect_o *)&v29 = TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_RECT_FS(mFG, v13);
  v33 = *v16;
  if ( !*v16 )
    goto LABEL_22;
  x = v33->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.x;
  y = v33->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.y;
  v36 = v29;
  v37 = v30;
  v38 = v31;
  v39 = v32;
  v40 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    v40,
    (Il2CppObject *)v11,
    Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__0__,
    0LL);
  if ( !v27 )
    goto LABEL_22;
  v45.fields.m_XMin = v36;
  v45.fields.m_YMin = v37;
  v45.fields.m_Width = v38;
  v45.fields.m_Height = v39;
  CommonUI__OpenTutorialNotificationDialogArrow(
    v27,
    v24,
    TUTORIAL_QUEST_ARROW_POS_FS,
    v45,
    90.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    v40,
    0LL);
  if ( !*v16
    || (v41 = (*v16)->fields.mTerminalList,
        v42 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo),
        System_Action___ctor(
          v42,
          (Il2CppObject *)v11,
          Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__1__,
          0LL),
        !v41) )
  {
LABEL_22:
    sub_1BDBAD4(mFG, v13);
  }
  v41->fields.mQuestClickAct = v42;
  sub_1BDB81C((CGThumbnailListItem_o *)&v41->fields.mQuestClickAct, (int32_t)v42, v43, v44);
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
  if ( (byte_4B46D91 & 1) == 0 )
  {
    this = (TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *)sub_1BDB878(
                                                                                        &Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___,
                                                                                        method);
    byte_4B46D91 = 1;
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
                                                                                            (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___)) == 0LL )
  {
LABEL_12:
    sub_1BDBAD4(this, method);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0___begin_b__1(
        TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v8; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4B46D92 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1BDB878(&Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__2__, v4);
    byte_4B46D92 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v8 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v9, v10);
  }
  if ( !v8 )
    sub_1BDBAD4(Instance, v6);
  CommonUI__CloseTutorialNotificationDialogArrow_30859100(v8, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial2_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1BDBAD4(0LL, method);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x20
  ScrTerminalMap_o *mTerminalMap; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  SrcSpotBasePrefab_o *FocusSpot; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_String_o *v19; // x21
  Il2CppObject *Instance; // x22
  const MethodInfo *v21; // x1
  UnityEngine_Vector2_o v22; // kr00_8
  const MethodInfo *v23; // x1
  float x; // s14
  float y; // s15
  float m_XMin; // s10
  float m_YMin; // s11
  float m_Width; // s12
  float m_Height; // s13
  System_Action_o *v30; // x23
  struct ScrTerminalMap_o *v31; // x21
  System_Action_o *v32; // x19
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  UnityEngine_Vector2_o v35; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v36; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v37; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v38; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4B46D8E & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, that);
    sub_1BDB878(&LocalizationManager_TypeInfo, v5);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1BDB878(&Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__0__, v7);
    sub_1BDB878(&Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__1__, v8);
    sub_1BDB878(&TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0_TypeInfo, v9);
    sub_1BDB878(&StringLiteral_13577/*"TUTORIAL_MESSAGE_TERMINAL_SPOT2"*/, v10);
    byte_4B46D8E = 1;
  }
  v11 = sub_1BDBAC4(TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_12;
  *(_QWORD *)(v11 + 24) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v11 + 24), (int32_t)this, v14, v15);
  this->fields.mIsGoNext = 0;
  if ( !that )
    goto LABEL_12;
  mTerminalMap = that->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_12;
  FocusSpot = ScrTerminalMap__GetFocusSpot(mTerminalMap, 0LL);
  *(_QWORD *)(v11 + 16) = FocusSpot;
  sub_1BDB81C((CGThumbnailListItem_o *)(v11 + 16), (int32_t)FocusSpot, v17, v18);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_13577/*"TUTORIAL_MESSAGE_TERMINAL_SPOT2"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v35.fields.x = 0.0;
  v35.fields.y = -113.0;
  v22 = TerminalSceneComponent__FSSpotArrowPosLerp(that, v35, v21);
  v36.fields.x = 0.0;
  v36.fields.y = 0.0;
  v37 = TerminalSceneComponent__FSSpotArrowRectLerp(that, v36, v23);
  x = that->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.x;
  y = that->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.y;
  m_XMin = v37.fields.m_XMin;
  m_YMin = v37.fields.m_YMin;
  m_Width = v37.fields.m_Width;
  m_Height = v37.fields.m_Height;
  v30 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v11,
    Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__0__,
    0LL);
  if ( !Instance )
    goto LABEL_12;
  v38.fields.m_XMin = m_XMin;
  v38.fields.m_YMin = m_YMin;
  v38.fields.m_Width = m_Width;
  v38.fields.m_Height = m_Height;
  CommonUI__OpenTutorialNotificationDialogArrow(
    (CommonUI_o *)Instance,
    v19,
    v22,
    v38,
    90.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    v30,
    0LL);
  mTerminalMap = that->fields.mTerminalMap;
  if ( !mTerminalMap
    || (ScrTerminalMap__SetMapCamera_TutorialFocusSpot(mTerminalMap, *(SrcSpotBasePrefab_o **)(v11 + 16), 0.5, 0LL),
        v31 = that->fields.mTerminalMap,
        v32 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo),
        System_Action___ctor(
          v32,
          (Il2CppObject *)v11,
          Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__1__,
          0LL),
        !v31) )
  {
LABEL_12:
    sub_1BDBAD4(mTerminalMap, v13);
  }
  v31->fields.mSpotClickAct = v32;
  sub_1BDB81C((CGThumbnailListItem_o *)&v31->fields.mSpotClickAct, (int32_t)v32, v33, v34);
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
      sub_1BDBAD4(that, that);
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
    sub_1BDBAD4(0LL, method);
  SrcSpotBasePrefab__SetBtnColliderEnable(focus_spot, 1, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0___begin_b__1(
        TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v8; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4B46D8F & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1BDB878(&Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__2__, v4);
    byte_4B46D8F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v8 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v9, v10);
  }
  if ( !v8 )
    sub_1BDBAD4(Instance, v6);
  CommonUI__CloseTutorialNotificationDialogArrow_30859100(v8, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0___begin_b__2(
        TerminalSceneComponent_StateTutorial2_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_StateTutorial2_SpotArrow_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BDBAD4(this, method);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x19
  void *Instance; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  __int64 *v16; // x21
  System_String_o *v17; // x20
  __int64 v18; // x8
  CommonUI_o *v19; // x21
  float v20; // s8
  float v21; // s13
  float v22; // s9
  float v23; // s14
  float v24; // s10
  unsigned int v25; // s11
  unsigned int v26; // s12
  System_Action_o *v27; // x22
  Il2CppObject *v28; // x23
  struct TerminalSceneComponent_StateTutorial3_GachaArrow___c_StaticFields *static_fields; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_Action_o *v32; // x20
  UnityEngine_Vector2_o v33; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v34; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4B46D96 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, that);
    sub_1BDB878(&LocalizationManager_TypeInfo, v4);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1BDB878(&Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__begin_b__0_0__, v6);
    sub_1BDB878(&Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0__begin_b__1__, v7);
    sub_1BDB878(&TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0_TypeInfo, v8);
    sub_1BDB878(&TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo, v9);
    sub_1BDB878(&StringLiteral_13571/*"TUTORIAL_MESSAGE_TERMINAL_GACHA"*/, v10);
    byte_4B46D96 = 1;
  }
  v11 = sub_1BDBAC4(TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_15;
  *(_QWORD *)(v11 + 16) = that;
  v16 = (__int64 *)(v11 + 16);
  sub_1BDB81C((CGThumbnailListItem_o *)(v11 + 16), (int32_t)that, v14, v15);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_13571/*"TUTORIAL_MESSAGE_TERMINAL_GACHA"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v18 = *v16;
  if ( !*v16 )
    goto LABEL_15;
  v19 = (CommonUI_o *)Instance;
  v20 = *(float *)(v18 + 160);
  v21 = *(float *)(v18 + 164);
  v22 = *(float *)(v18 + 168);
  v23 = *(float *)(v18 + 172);
  Instance = TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo;
  v24 = *(float *)(v18 + 176);
  v25 = *(_DWORD *)(v18 + 152);
  v26 = *(_DWORD *)(v18 + 156);
  if ( !TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo);
    Instance = TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo;
  }
  v27 = *(System_Action_o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v27 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo;
    }
    v28 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v27 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(v27, v28, Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__begin_b__0_0__, 0LL);
    static_fields = TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = v27;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__0_0, (int32_t)v27, v30, v31);
  }
  if ( !v19 )
LABEL_15:
    sub_1BDBAD4(Instance, v13);
  v34.fields.m_YMin = v23 + 53.0;
  v33.fields.y = v21 + 33.0;
  v34.fields.m_Height = 135.0;
  v33.fields.x = v20;
  v34.fields.m_XMin = v22;
  v34.fields.m_Width = v24;
  CommonUI__OpenTutorialNotificationDialogArrow(
    v19,
    v17,
    v33,
    v34,
    0.0,
    (UnityEngine_Vector2_o)__PAIR64__(v26, v25),
    -1,
    v27,
    0LL);
  v32 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    v32,
    (Il2CppObject *)v11,
    Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0__begin_b__1__,
    0LL);
  MainMenuBar__SetDispBtnAct(2, v32, 0LL);
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
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B46D97 & 1) == 0 )
  {
    sub_1BDB878(&TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo, v1);
    byte_4B46D97 = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo->static_fields->__9 = (struct TerminalSceneComponent_StateTutorial3_GachaArrow___c_o *)v2;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)TerminalSceneComponent_StateTutorial3_GachaArrow___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4B46D98 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1BDB878(&TutorialFlag_TypeInfo, v4);
    sub_1BDB878(&Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0__begin_b__2__, v5);
    byte_4B46D98 = 1;
  }
  MainMenuBar__SetDispBtnColliderEnable(0, 8, 0LL);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  TutorialFlag__SetProgress(1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v9 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v10, v11);
  }
  if ( !v9 )
    sub_1BDBAD4(Instance, v7);
  CommonUI__CloseTutorialNotificationDialogArrow_30859100(v9, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial3_GachaArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1BDBAD4(0LL, method);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x19
  void *Instance; // x0
  const MethodInfo *v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  TerminalSceneComponent_o **v16; // x22
  System_String_o *v17; // x20
  CommonUI_o *v18; // x21
  UnityEngine_Vector2_o TUTORIAL_MENU_ARROW_POS_FS; // kr00_8
  TerminalSceneComponent_o *v20; // x8
  float m_XMin; // s12
  float m_YMin; // s14
  float m_Height; // s8
  float m_Width; // s10
  float v25; // s0
  TerminalSceneComponent_o *v26; // x8
  float x; // s13
  float y; // s15
  float v29; // s11
  System_Action_o *v30; // x22
  Il2CppObject *v31; // x23
  struct TerminalSceneComponent_StateTutorial3_MenuArrow___c_StaticFields *static_fields; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  System_Action_o *v35; // x20
  UnityEngine_Rect_o v36; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4B46D93 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, that);
    sub_1BDB878(&LocalizationManager_TypeInfo, v4);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1BDB878(&Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__begin_b__0_0__, v6);
    sub_1BDB878(&Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0__begin_b__1__, v7);
    sub_1BDB878(&TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0_TypeInfo, v8);
    sub_1BDB878(&TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo, v9);
    sub_1BDB878(&StringLiteral_13572/*"TUTORIAL_MESSAGE_TERMINAL_MENU"*/, v10);
    byte_4B46D93 = 1;
  }
  v11 = sub_1BDBAC4(TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_17;
  *(_QWORD *)(v11 + 16) = that;
  v16 = (TerminalSceneComponent_o **)(v11 + 16);
  sub_1BDB81C((CGThumbnailListItem_o *)(v11 + 16), (int32_t)that, v14, v15);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_13572/*"TUTORIAL_MESSAGE_TERMINAL_MENU"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*v16 )
    goto LABEL_17;
  v18 = (CommonUI_o *)Instance;
  TUTORIAL_MENU_ARROW_POS_FS = TerminalSceneComponent__get_TUTORIAL_MENU_ARROW_POS_FS(*v16, v13);
  v20 = *v16;
  if ( !*v16 )
    goto LABEL_17;
  m_XMin = v20->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_XMin;
  m_YMin = v20->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_YMin;
  m_Width = v20->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Width;
  m_Height = v20->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Height;
  v25 = TerminalSceneComponent__FSMenuOffsetX((TerminalSceneComponent_o *)Instance, v13);
  v26 = *v16;
  if ( !*v16 )
    goto LABEL_17;
  x = v26->fields.TUTORIAL_MENU_MESSAGE_POS.fields.x;
  y = v26->fields.TUTORIAL_MENU_MESSAGE_POS.fields.y;
  v29 = v25;
  Instance = TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo;
  if ( !TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo);
    Instance = TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo;
  }
  v30 = *(System_Action_o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v30 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo;
    }
    v31 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v30 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(v30, v31, Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__begin_b__0_0__, 0LL);
    static_fields = TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = v30;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__0_0, (int32_t)v30, v33, v34);
  }
  if ( !v18 )
LABEL_17:
    sub_1BDBAD4(Instance, v13);
  v36.fields.m_Height = m_Height + 33.0;
  v36.fields.m_YMin = m_YMin + 33.0;
  v36.fields.m_XMin = m_XMin + v29;
  v36.fields.m_Width = m_Width;
  CommonUI__OpenTutorialNotificationDialogArrow(
    v18,
    v17,
    TUTORIAL_MENU_ARROW_POS_FS,
    v36,
    0.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    v30,
    0LL);
  v35 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    v35,
    (Il2CppObject *)v11,
    Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0__begin_b__1__,
    0LL);
  MainMenuBar__SetMenuBtnAct(v35, 0LL);
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
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B46D94 & 1) == 0 )
  {
    sub_1BDB878(&TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo, v1);
    byte_4B46D94 = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo->static_fields->__9 = (struct TerminalSceneComponent_StateTutorial3_MenuArrow___c_o *)v2;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)TerminalSceneComponent_StateTutorial3_MenuArrow___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v8; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4B46D95 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1BDB878(&Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0__begin_b__2__, v4);
    byte_4B46D95 = 1;
  }
  MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v8 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v9, v10);
  }
  if ( !v8 )
    sub_1BDBAD4(Instance, v6);
  CommonUI__CloseTutorialNotificationDialogArrow_30859100(v8, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial3_MenuArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1BDBAD4(0LL, method);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x19
  TerminalSceneComponent_o *mFG; // x0
  const MethodInfo *v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  TerminalSceneComponent_o **v16; // x20
  QuestBoardListViewObject_o *FocusQuest; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x8
  struct UIScrollView_o *scrollView; // x8
  struct UIProgressBar_o *verticalScrollBar; // x23
  System_String_o *v24; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v26; // x0
  CommonUI_o *v27; // x22
  UnityEngine_Vector2_o TUTORIAL_QUEST_ARROW_POS_FS; // kr00_8
  float v29; // s0
  float v30; // s1
  float v31; // s2
  float v32; // s3
  TerminalSceneComponent_o *v33; // x8
  float x; // s14
  float y; // s15
  float v36; // s10
  float v37; // s11
  float v38; // s12
  float v39; // s13
  System_Action_o *v40; // x23
  struct ScrTerminalListTop_o *v41; // x21
  System_Action_o *v42; // x20
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  UnityEngine_Rect_o v45; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4B46D9B & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, that);
    sub_1BDB878(&Method_GameObjectExtensions_RemoveComponent_Collider___, v4);
    sub_1BDB878(&LocalizationManager_TypeInfo, v5);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1BDB878(&Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__0__, v7);
    sub_1BDB878(&Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__1__, v8);
    sub_1BDB878(&TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_TypeInfo, v9);
    sub_1BDB878(&StringLiteral_13575/*"TUTORIAL_MESSAGE_TERMINAL_QUEST3"*/, v10);
    byte_4B46D9B = 1;
  }
  v11 = sub_1BDBAC4(TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_22;
  *(_QWORD *)(v11 + 16) = that;
  v16 = (TerminalSceneComponent_o **)(v11 + 16);
  sub_1BDB81C((CGThumbnailListItem_o *)(v11 + 16), (int32_t)that, v14, v15);
  if ( !*(_QWORD *)(v11 + 16) )
    goto LABEL_22;
  mFG = *(TerminalSceneComponent_o **)(*(_QWORD *)(v11 + 16) + 256LL);
  if ( !mFG )
    goto LABEL_22;
  FocusQuest = ScrTerminalListTop__GetFocusQuest((ScrTerminalListTop_o *)mFG, 0LL);
  *(_QWORD *)(v11 + 24) = FocusQuest;
  sub_1BDB81C((CGThumbnailListItem_o *)(v11 + 24), (int32_t)FocusQuest, v18, v19);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  mFG = (TerminalSceneComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13575/*"TUTORIAL_MESSAGE_TERMINAL_QUEST3"*/, 0LL);
  if ( !*v16 )
    goto LABEL_22;
  mTerminalList = (*v16)->fields.mTerminalList;
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
  v24 = (System_String_o *)mFG;
  mFG = (TerminalSceneComponent_o *)verticalScrollBar->fields.mFG;
  if ( !mFG )
    goto LABEL_22;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mFG, 0LL);
  GameObjectExtensions__RemoveComponent_object_(
    gameObject,
    (const MethodInfo_3089EC4 *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mFG = (TerminalSceneComponent_o *)verticalScrollBar->fields.mBG;
  if ( !mFG )
    goto LABEL_22;
  v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mFG, 0LL);
  GameObjectExtensions__RemoveComponent_object_(
    v26,
    (const MethodInfo_3089EC4 *)Method_GameObjectExtensions_RemoveComponent_Collider___);
  mFG = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*v16 )
    goto LABEL_22;
  v27 = (CommonUI_o *)mFG;
  TUTORIAL_QUEST_ARROW_POS_FS = TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_POS_FS(*v16, v13);
  mFG = *v16;
  if ( !*v16 )
    goto LABEL_22;
  *(UnityEngine_Rect_o *)&v29 = TerminalSceneComponent__get_TUTORIAL_QUEST_ARROW_RECT_FS(mFG, v13);
  v33 = *v16;
  if ( !*v16 )
    goto LABEL_22;
  x = v33->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.x;
  y = v33->fields.TUTORIAL_QUEST_MESSAGE_POS.fields.y;
  v36 = v29;
  v37 = v30;
  v38 = v31;
  v39 = v32;
  v40 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    v40,
    (Il2CppObject *)v11,
    Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__0__,
    0LL);
  if ( !v27 )
    goto LABEL_22;
  v45.fields.m_XMin = v36;
  v45.fields.m_YMin = v37;
  v45.fields.m_Width = v38;
  v45.fields.m_Height = v39;
  CommonUI__OpenTutorialNotificationDialogArrow(
    v27,
    v24,
    TUTORIAL_QUEST_ARROW_POS_FS,
    v45,
    90.0,
    (UnityEngine_Vector2_o)__PAIR64__(LODWORD(y), LODWORD(x)),
    -1,
    v40,
    0LL);
  if ( !*v16
    || (v41 = (*v16)->fields.mTerminalList,
        v42 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo),
        System_Action___ctor(
          v42,
          (Il2CppObject *)v11,
          Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__1__,
          0LL),
        !v41) )
  {
LABEL_22:
    sub_1BDBAD4(mFG, v13);
  }
  v41->fields.mQuestClickAct = v42;
  sub_1BDB81C((CGThumbnailListItem_o *)&v41->fields.mQuestClickAct, (int32_t)v42, v43, v44);
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
  if ( (byte_4B46D9C & 1) == 0 )
  {
    this = (TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *)sub_1BDB878(
                                                                                        &Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___,
                                                                                        method);
    byte_4B46D9C = 1;
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
                                                                                            (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___)) == 0LL )
  {
LABEL_12:
    sub_1BDBAD4(this, method);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0___begin_b__1(
        TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v8; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4B46D9D & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1BDB878(&Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__2__, v4);
    byte_4B46D9D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v8 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v9, v10);
  }
  if ( !v8 )
    sub_1BDBAD4(Instance, v6);
  CommonUI__CloseTutorialNotificationDialogArrow_30859100(v8, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial4_QuestArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1BDBAD4(0LL, method);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  ScrTerminalMap_o *mTerminalMap; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  SrcSpotBasePrefab_o *FocusSpot; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  Il2CppObject *Instance; // x21
  const MethodInfo *v18; // x1
  UnityEngine_Vector2_o v19; // kr00_8
  const MethodInfo *v20; // x1
  float m_XMin; // s10
  float m_YMin; // s11
  float m_Width; // s12
  float m_Height; // s13
  System_Action_o *v25; // x22
  struct ScrTerminalMap_o *v26; // x21
  System_Action_o *v27; // x19
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  UnityEngine_Vector2_o v30; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v31; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v33; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4B46D99 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, that);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1BDB878(&Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__0__, v6);
    sub_1BDB878(&Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__1__, v7);
    sub_1BDB878(&TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0_TypeInfo, v8);
    byte_4B46D99 = 1;
  }
  v9 = sub_1BDBAC4(TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_10;
  *(_QWORD *)(v9 + 24) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v9 + 24), (int32_t)this, v12, v13);
  this->fields.mIsGoNext = 0;
  if ( !that )
    goto LABEL_10;
  mTerminalMap = that->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_10;
  FocusSpot = ScrTerminalMap__GetFocusSpot(mTerminalMap, 0LL);
  *(_QWORD *)(v9 + 16) = FocusSpot;
  sub_1BDB81C((CGThumbnailListItem_o *)(v9 + 16), (int32_t)FocusSpot, v15, v16);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v30.fields.x = 0.0;
  v30.fields.y = -113.0;
  v19 = TerminalSceneComponent__FSSpotArrowPosLerp(that, v30, v18);
  v31.fields.x = 0.0;
  v31.fields.y = 0.0;
  v32 = TerminalSceneComponent__FSSpotArrowRectLerp(that, v31, v20);
  m_XMin = v32.fields.m_XMin;
  m_YMin = v32.fields.m_YMin;
  m_Width = v32.fields.m_Width;
  m_Height = v32.fields.m_Height;
  v25 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    v25,
    (Il2CppObject *)v9,
    Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__0__,
    0LL);
  if ( !Instance )
    goto LABEL_10;
  v33.fields.m_XMin = m_XMin;
  v33.fields.m_YMin = m_YMin;
  v33.fields.m_Width = m_Width;
  v33.fields.m_Height = m_Height;
  CommonUI__OpenTutorialArrowMark((CommonUI_o *)Instance, v19, 90.0, v33, v25, 0LL);
  mTerminalMap = that->fields.mTerminalMap;
  if ( !mTerminalMap
    || (ScrTerminalMap__SetMapCamera_TutorialFocusSpot(mTerminalMap, *(SrcSpotBasePrefab_o **)(v9 + 16), 0.5, 0LL),
        v26 = that->fields.mTerminalMap,
        v27 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo),
        System_Action___ctor(
          v27,
          (Il2CppObject *)v9,
          Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__1__,
          0LL),
        !v26) )
  {
LABEL_10:
    sub_1BDBAD4(mTerminalMap, v11);
  }
  v26->fields.mSpotClickAct = v27;
  sub_1BDB81C((CGThumbnailListItem_o *)&v26->fields.mSpotClickAct, (int32_t)v27, v28, v29);
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
      sub_1BDBAD4(that, that);
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
    sub_1BDBAD4(0LL, method);
  SrcSpotBasePrefab__SetBtnColliderEnable(focus_spot, 1, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0___begin_b__1(
        TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v8; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4B46D9A & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1BDB878(&Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__2__, v4);
    byte_4B46D9A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v8 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v9, v10);
  }
  if ( !v8 )
    sub_1BDBAD4(Instance, v6);
  CommonUI__CloseTutorialArrowMark(v8, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0___begin_b__2(
        TerminalSceneComponent_StateTutorial4_SpotArrow___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_StateTutorial4_SpotArrow_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BDBAD4(this, method);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x19
  void *Instance; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  float *v14; // x8
  CommonUI_o *v15; // x20
  float v16; // s9
  float v17; // s11
  float v18; // s8
  float v19; // s12
  float v20; // s10
  System_Action_o *v21; // x21
  Il2CppObject *v22; // x22
  struct TerminalSceneComponent_StateTutorial5_CombineArrow___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Action_o *v26; // x20
  UnityEngine_Vector2_o v27; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v28; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4B46DA1 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, that);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1BDB878(&Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__begin_b__0_0__, v5);
    sub_1BDB878(&Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0__begin_b__1__, v6);
    sub_1BDB878(&TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0_TypeInfo, v7);
    sub_1BDB878(&TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo, v8);
    byte_4B46DA1 = 1;
  }
  v9 = sub_1BDBAC4(TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_13;
  *(_QWORD *)(v9 + 16) = that;
  sub_1BDB81C((CGThumbnailListItem_o *)(v9 + 16), (int32_t)that, v12, v13);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = *(float **)(v9 + 16);
  if ( !v14 )
    goto LABEL_13;
  v15 = (CommonUI_o *)Instance;
  v16 = v14[52];
  v17 = v14[53];
  v18 = v14[48];
  v19 = v14[49];
  Instance = TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo;
  v20 = v14[50];
  if ( !TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo);
    Instance = TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo;
  }
  v21 = *(System_Action_o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v21 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo;
    }
    v22 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v21 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(v21, v22, Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__begin_b__0_0__, 0LL);
    static_fields = TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = v21;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__0_0, (int32_t)v21, v24, v25);
  }
  if ( !v15 )
LABEL_13:
    sub_1BDBAD4(Instance, v11);
  v28.fields.m_YMin = v19 + 53.0;
  v27.fields.y = v17 + 33.0;
  v28.fields.m_Height = 135.0;
  v27.fields.x = v16;
  v28.fields.m_XMin = v18;
  v28.fields.m_Width = v20;
  CommonUI__OpenTutorialArrowMark(v15, v27, 0.0, v28, v21, 0LL);
  v26 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    v26,
    (Il2CppObject *)v9,
    Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0__begin_b__1__,
    0LL);
  MainMenuBar__SetDispBtnAct(3, v26, 0LL);
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
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B46DA2 & 1) == 0 )
  {
    sub_1BDB878(&TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo, v1);
    byte_4B46DA2 = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo->static_fields->__9 = (struct TerminalSceneComponent_StateTutorial5_CombineArrow___c_o *)v2;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)TerminalSceneComponent_StateTutorial5_CombineArrow___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v8; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4B46DA3 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1BDB878(&Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0__begin_b__2__, v4);
    byte_4B46DA3 = 1;
  }
  MainMenuBar__SetDispBtnColliderEnable(0, 8, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v8 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial5_CombineArrow___c__DisplayClass0_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v9, v10);
  }
  if ( !v8 )
    sub_1BDBAD4(Instance, v6);
  CommonUI__CloseTutorialArrowMark(v8, _9__2, 0LL);
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
    sub_1BDBAD4(that, method);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x19
  void *v12; // x0
  const MethodInfo *v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  TerminalSceneComponent_o **v16; // x22
  Il2CppObject *Instance; // x20
  System_String_o *v18; // x21
  UnityEngine_Vector2_o TUTORIAL_MENU_ARROW_POS2_FS; // kr00_8
  TerminalSceneComponent_o *v20; // x8
  float m_XMin; // s12
  float m_YMin; // s13
  float m_Width; // s10
  float m_Height; // s14
  float v25; // s0
  float v26; // s11
  System_Action_o *v27; // x22
  Il2CppObject *v28; // x23
  struct TerminalSceneComponent_StateTutorial5_MenuArrow___c_StaticFields *static_fields; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_Action_o *v32; // x20
  UnityEngine_Rect_o v33; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4B46D9E & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, that);
    sub_1BDB878(&LocalizationManager_TypeInfo, v4);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1BDB878(&Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__begin_b__0_0__, v6);
    sub_1BDB878(&Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0__begin_b__1__, v7);
    sub_1BDB878(&TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0_TypeInfo, v8);
    sub_1BDB878(&TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo, v9);
    sub_1BDB878(&StringLiteral_13553/*"TUTORIAL_MESSAGE_COMBINE1"*/, v10);
    byte_4B46D9E = 1;
  }
  v11 = sub_1BDBAC4(TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_16;
  *(_QWORD *)(v11 + 16) = that;
  v16 = (TerminalSceneComponent_o **)(v11 + 16);
  sub_1BDB81C((CGThumbnailListItem_o *)(v11 + 16), (int32_t)that, v14, v15);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_13553/*"TUTORIAL_MESSAGE_COMBINE1"*/, 0LL);
  if ( !*v16 )
    goto LABEL_16;
  v18 = (System_String_o *)v12;
  TUTORIAL_MENU_ARROW_POS2_FS = TerminalSceneComponent__get_TUTORIAL_MENU_ARROW_POS2_FS(*v16, v13);
  v20 = *v16;
  if ( !*v16 )
    goto LABEL_16;
  m_XMin = v20->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_XMin;
  m_YMin = v20->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_YMin;
  m_Width = v20->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Width;
  m_Height = v20->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Height;
  v25 = TerminalSceneComponent__FSMenuOffsetX((TerminalSceneComponent_o *)v12, v13);
  v12 = TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo;
  v26 = v25;
  if ( !TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo);
    v12 = TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo;
  }
  v27 = *(System_Action_o **)(*((_QWORD *)v12 + 23) + 8LL);
  if ( !v27 )
  {
    if ( !*((_DWORD *)v12 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo;
    }
    v28 = (Il2CppObject *)**((_QWORD **)v12 + 23);
    v27 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(v27, v28, Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__begin_b__0_0__, 0LL);
    static_fields = TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = v27;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__0_0, (int32_t)v27, v30, v31);
  }
  if ( !Instance )
LABEL_16:
    sub_1BDBAD4(v12, v13);
  v33.fields.m_Height = m_Height + 33.0;
  v33.fields.m_YMin = m_YMin + 33.0;
  v33.fields.m_XMin = m_XMin + v26;
  v33.fields.m_Width = m_Width;
  CommonUI__OpenTutorialNotificationDialogArrow(
    (CommonUI_o *)Instance,
    v18,
    TUTORIAL_MENU_ARROW_POS2_FS,
    v33,
    0.0,
    (UnityEngine_Vector2_o)0xC224000000000000LL,
    -1,
    v27,
    0LL);
  v32 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    v32,
    (Il2CppObject *)v11,
    Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0__begin_b__1__,
    0LL);
  MainMenuBar__SetMenuBtnAct(v32, 0LL);
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
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B46D9F & 1) == 0 )
  {
    sub_1BDB878(&TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo, v1);
    byte_4B46D9F = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo->static_fields->__9 = (struct TerminalSceneComponent_StateTutorial5_MenuArrow___c_o *)v2;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)TerminalSceneComponent_StateTutorial5_MenuArrow___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  System_Action_o *_9__2; // x22
  CommonUI_o *v8; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4B46DA0 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1BDB878(&Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0__begin_b__2__, v4);
    byte_4B46DA0 = 1;
  }
  MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
  MainMenuBar__SetDispBtnColliderEnable(0, 8, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__2 = this->fields.__9__2;
  v8 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0__begin_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v9, v10);
  }
  if ( !v8 )
    sub_1BDBAD4(Instance, v6);
  CommonUI__CloseTutorialNotificationDialogArrow_30859100(v8, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0___begin_b__2(
        TerminalSceneComponent_StateTutorial5_MenuArrow___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalSceneComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1BDBAD4(0LL, method);
  TerminalSceneComponent__SetState(that, 10, v2);
}


void __fastcall TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__259___ctor(
        TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__259_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__259__MoveNext(
        TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__259_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x20
  System_Func_bool__o *v7; // x21
  UnityEngine_WaitUntil_o *v8; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  bool result; // w0
  ChainableActionBase_o *openCampaignDirectBonus; // x0

  if ( (byte_4B46DCF & 1) == 0 )
  {
    sub_1BDB878(&System_Func_bool__TypeInfo, method);
    sub_1BDB878(&Method_TerminalSceneComponent__CoWaitBlankEarthActionEnd_b__259_0__, v3);
    sub_1BDB878(&UnityEngine_WaitUntil_TypeInfo, v4);
    byte_4B46DCF = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    openCampaignDirectBonus = (ChainableActionBase_o *)this->fields.openCampaignDirectBonus;
    this->fields.__1__state = -1;
    if ( !openCampaignDirectBonus )
      sub_1BDBAD4(0LL, method);
    ChainableActionBase__Execute(openCampaignDirectBonus, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    _4__this = (Il2CppObject *)this->fields.__4__this;
    v7 = (System_Func_bool__o *)sub_1BDBAC4(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(v7, _4__this, Method_TerminalSceneComponent__CoWaitBlankEarthActionEnd_b__259_0__, 0LL);
    v8 = (UnityEngine_WaitUntil_o *)sub_1BDBAC4(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v8, v7, 0LL);
    this->fields.__2__current = (Il2CppObject *)v8;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.__2__current, (int32_t)v8, v9, v10);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__259__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__259_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__259__System_Collections_IEnumerator_Reset(
        TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__259_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BDB88C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BDBAC4(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BDB88C(&Method_TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__259_System_Collections_IEnumerator_Reset__);
  sub_1BDB9A0(v3, v4);
}


Il2CppObject *__fastcall TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__259__System_Collections_IEnumerator_get_Current(
        TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__259_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__259__System_IDisposable_Dispose(
        TerminalSceneComponent__CoWaitBlankEarthActionEnd_d__259_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__258___ctor(
        TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__258_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__258__MoveNext(
        TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__258_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x20
  System_Func_bool__o *v7; // x21
  UnityEngine_WaitUntil_o *v8; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  bool result; // w0
  ChainableActionBase_o *openCampaignDirectBonus; // x0

  if ( (byte_4B46DD0 & 1) == 0 )
  {
    sub_1BDB878(&System_Func_bool__TypeInfo, method);
    sub_1BDB878(&Method_TerminalSceneComponent__CoWaitTerminalTopEffectEnd_b__258_0__, v3);
    sub_1BDB878(&UnityEngine_WaitUntil_TypeInfo, v4);
    byte_4B46DD0 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    openCampaignDirectBonus = (ChainableActionBase_o *)this->fields.openCampaignDirectBonus;
    this->fields.__1__state = -1;
    if ( !openCampaignDirectBonus )
      sub_1BDBAD4(0LL, method);
    ChainableActionBase__Execute(openCampaignDirectBonus, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    _4__this = (Il2CppObject *)this->fields.__4__this;
    v7 = (System_Func_bool__o *)sub_1BDBAC4(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(v7, _4__this, Method_TerminalSceneComponent__CoWaitTerminalTopEffectEnd_b__258_0__, 0LL);
    v8 = (UnityEngine_WaitUntil_o *)sub_1BDBAC4(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v8, v7, 0LL);
    this->fields.__2__current = (Il2CppObject *)v8;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.__2__current, (int32_t)v8, v9, v10);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__258__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__258_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__258__System_Collections_IEnumerator_Reset(
        TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__258_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BDB88C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BDBAC4(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BDB88C(&Method_TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__258_System_Collections_IEnumerator_Reset__);
  sub_1BDB9A0(v3, v4);
}


Il2CppObject *__fastcall TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__258__System_Collections_IEnumerator_get_Current(
        TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__258_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__258__System_IDisposable_Dispose(
        TerminalSceneComponent__CoWaitTerminalTopEffectEnd_d__258_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall TerminalSceneComponent__LoadAsync_d__177___ctor(
        TerminalSceneComponent__LoadAsync_d__177_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall TerminalSceneComponent__LoadAsync_d__177__MoveNext(
        TerminalSceneComponent__LoadAsync_d__177_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent__LoadAsync_d__177_o *v2; // x19
  __int64 v3; // x1
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
  __int64 v21; // x1
  __int64 v22; // x1
  int32_t _1__state; // w8
  TerminalSceneComponent_o *_4__this; // x21
  __int64 v25; // x20
  UserServantEntity_o *usd; // x22
  System_Action_o *v27; // x23
  const MethodInfo *v28; // x4
  System_Action_o *v29; // x22
  struct TerminalTransitionInfo_o *TransitionInfo_k__BackingField; // x8
  struct TerminalTransitionInfo_o *v31; // x8
  SoundManager_o *v32; // x21
  System_String_o *voiceAssetName; // x22
  System_Action_o *v34; // x23
  System_Action_o *v35; // x21
  System_Action_o *v36; // x21
  System_Action_o *v37; // x21
  System_Action_o *v38; // x21
  System_Action_o *v39; // x21
  System_Action_o *v40; // x21
  System_Action_o *v41; // x21
  System_Action_o *v42; // x21
  System_Action_o *v43; // x21
  System_Action_o *v44; // x21
  System_Func_bool__o *v45; // x21
  UnityEngine_WaitUntil_o *v46; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  bool result; // w0
  struct System_Action_o *callback; // x8

  v2 = this;
  if ( (byte_4B46DD1 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&AtlasManager_TypeInfo, v3);
    sub_1BDB878(&System_Func_bool__TypeInfo, v4);
    sub_1BDB878(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v5);
    sub_1BDB878(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v6);
    sub_1BDB878(&Method_TerminalSceneComponent___c__DisplayClass177_0__LoadAsync_b__0__, v7);
    sub_1BDB878(&Method_TerminalSceneComponent___c__DisplayClass177_0__LoadAsync_b__10__, v8);
    sub_1BDB878(&Method_TerminalSceneComponent___c__DisplayClass177_0__LoadAsync_b__11__, v9);
    sub_1BDB878(&Method_TerminalSceneComponent___c__DisplayClass177_0__LoadAsync_b__12__, v10);
    sub_1BDB878(&Method_TerminalSceneComponent___c__DisplayClass177_0__LoadAsync_b__13__, v11);
    sub_1BDB878(&Method_TerminalSceneComponent___c__DisplayClass177_0__LoadAsync_b__1__, v12);
    sub_1BDB878(&Method_TerminalSceneComponent___c__DisplayClass177_0__LoadAsync_b__2__, v13);
    sub_1BDB878(&Method_TerminalSceneComponent___c__DisplayClass177_0__LoadAsync_b__3__, v14);
    sub_1BDB878(&Method_TerminalSceneComponent___c__DisplayClass177_0__LoadAsync_b__4__, v15);
    sub_1BDB878(&Method_TerminalSceneComponent___c__DisplayClass177_0__LoadAsync_b__5__, v16);
    sub_1BDB878(&Method_TerminalSceneComponent___c__DisplayClass177_0__LoadAsync_b__6__, v17);
    sub_1BDB878(&Method_TerminalSceneComponent___c__DisplayClass177_0__LoadAsync_b__7__, v18);
    sub_1BDB878(&Method_TerminalSceneComponent___c__DisplayClass177_0__LoadAsync_b__8__, v19);
    sub_1BDB878(&Method_TerminalSceneComponent___c__DisplayClass177_0__LoadAsync_b__9__, v20);
    sub_1BDB878(&TerminalSceneComponent___c__DisplayClass177_0_TypeInfo, v21);
    this = (TerminalSceneComponent__LoadAsync_d__177_o *)sub_1BDB878(&UnityEngine_WaitUntil_TypeInfo, v22);
    byte_4B46DD1 = 1;
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
  v25 = sub_1BDBAC4(TerminalSceneComponent___c__DisplayClass177_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v25, 0LL);
  if ( !v25 )
    goto LABEL_23;
  *(_DWORD *)(v25 + 19) = 0;
  *(_BYTE *)(v25 + 23) = 0;
  *(_DWORD *)(v25 + 24) = 0;
  *(_WORD *)(v25 + 16) = 256;
  *(_BYTE *)(v25 + 18) = 1;
  *(_BYTE *)(v25 + 28) = 1;
  usd = v2->fields.usd;
  v27 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    v27,
    (Il2CppObject *)v25,
    Method_TerminalSceneComponent___c__DisplayClass177_0__LoadAsync_b__0__,
    0LL);
  if ( !_4__this )
    goto LABEL_23;
  TerminalSceneComponent__SetupStandServant(_4__this, usd, 0, v27, v28);
  this = (TerminalSceneComponent__LoadAsync_d__177_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !this )
    goto LABEL_23;
  if ( !AtlasManager__isLoadedSkinData((AtlasManager_o *)this, 4, 0LL) )
  {
    *(_BYTE *)(v25 + 17) = 0;
    v29 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      v29,
      (Il2CppObject *)v25,
      Method_TerminalSceneComponent___c__DisplayClass177_0__LoadAsync_b__1__,
      0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__LoadUISkin(v29, 4, 11, 0LL);
  }
  TransitionInfo_k__BackingField = _4__this->fields._TransitionInfo_k__BackingField;
  if ( !TransitionInfo_k__BackingField
    || System_String__IsNullOrEmpty(TransitionInfo_k__BackingField->fields.voiceAssetName, 0LL) )
  {
    goto LABEL_17;
  }
  *(_BYTE *)(v25 + 18) = 0;
  this = (TerminalSceneComponent__LoadAsync_d__177_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v31 = _4__this->fields._TransitionInfo_k__BackingField;
  if ( !v31
    || (v32 = (SoundManager_o *)this,
        voiceAssetName = v31->fields.voiceAssetName,
        v34 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo),
        System_Action___ctor(
          v34,
          (Il2CppObject *)v25,
          Method_TerminalSceneComponent___c__DisplayClass177_0__LoadAsync_b__2__,
          0LL),
        !v32) )
  {
LABEL_23:
    sub_1BDBAD4(this, method);
  }
  SoundManager__LoadAudioAssetStorage(v32, voiceAssetName, v34, 1, 0LL);
LABEL_17:
  v35 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    v35,
    (Il2CppObject *)v25,
    Method_TerminalSceneComponent___c__DisplayClass177_0__LoadAsync_b__3__,
    0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadBanner(v35, 11, 0LL);
  v36 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    v36,
    (Il2CppObject *)v25,
    Method_TerminalSceneComponent___c__DisplayClass177_0__LoadAsync_b__4__,
    0LL);
  AtlasManager__LoadFaceAtlas(v36, 11, 0LL);
  v37 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    v37,
    (Il2CppObject *)v25,
    Method_TerminalSceneComponent___c__DisplayClass177_0__LoadAsync_b__5__,
    0LL);
  AtlasManager__LoadEquipFace(v37, 11, 0LL);
  v38 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    v38,
    (Il2CppObject *)v25,
    Method_TerminalSceneComponent___c__DisplayClass177_0__LoadAsync_b__6__,
    0LL);
  AtlasManager__LoadFriendshipExceed(v38, 11, 0LL);
  v39 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    v39,
    (Il2CppObject *)v25,
    Method_TerminalSceneComponent___c__DisplayClass177_0__LoadAsync_b__7__,
    0LL);
  AtlasManager__LoadCommandCode(v39, 11, 0LL);
  v40 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    v40,
    (Il2CppObject *)v25,
    Method_TerminalSceneComponent___c__DisplayClass177_0__LoadAsync_b__8__,
    0LL);
  AtlasManager__LoadCommandCodeMini(v40, 11, 0LL);
  v41 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    v41,
    (Il2CppObject *)v25,
    Method_TerminalSceneComponent___c__DisplayClass177_0__LoadAsync_b__9__,
    0LL);
  AtlasManager__LoadEventAtlas(v41, 11, 0LL);
  v42 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    v42,
    (Il2CppObject *)v25,
    Method_TerminalSceneComponent___c__DisplayClass177_0__LoadAsync_b__10__,
    0LL);
  AtlasManager__LoadEventUI(v42, 11, 0LL);
  v43 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    v43,
    (Il2CppObject *)v25,
    Method_TerminalSceneComponent___c__DisplayClass177_0__LoadAsync_b__11__,
    0LL);
  AtlasManager__LoadCharaGraphOptionAtlas(v43, 11, 0LL);
  v44 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    v44,
    (Il2CppObject *)v25,
    Method_TerminalSceneComponent___c__DisplayClass177_0__LoadAsync_b__12__,
    0LL);
  AtlasManager__LoadPartyOrganizationAtlas(v44, 11, 0LL);
  v45 = (System_Func_bool__o *)sub_1BDBAC4(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v45,
    (Il2CppObject *)v25,
    Method_TerminalSceneComponent___c__DisplayClass177_0__LoadAsync_b__13__,
    0LL);
  v46 = (UnityEngine_WaitUntil_o *)sub_1BDBAC4(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v46, v45, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v46;
  p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
  sub_1BDB81C(p__2__current, (int32_t)v46, v48, v49);
  result = 1;
  LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
  return result;
}


Il2CppObject *__fastcall TerminalSceneComponent__LoadAsync_d__177__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TerminalSceneComponent__LoadAsync_d__177_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn TerminalSceneComponent__LoadAsync_d__177__System_Collections_IEnumerator_Reset(
        TerminalSceneComponent__LoadAsync_d__177_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BDB88C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BDBAC4(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BDB88C(&Method_TerminalSceneComponent__LoadAsync_d__177_System_Collections_IEnumerator_Reset__);
  sub_1BDB9A0(v3, v4);
}


Il2CppObject *__fastcall TerminalSceneComponent__LoadAsync_d__177__System_Collections_IEnumerator_get_Current(
        TerminalSceneComponent__LoadAsync_d__177_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall TerminalSceneComponent__LoadAsync_d__177__System_IDisposable_Dispose(
        TerminalSceneComponent__LoadAsync_d__177_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__195___ctor(
        TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__195_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__195__MoveNext(
        TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__195_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t _1__state; // w8
  TerminalSceneComponent___c_c *v8; // x0
  System_Func_bool__o *_9__195_0; // x20
  Il2CppObject *v10; // x21
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  UnityEngine_WaitWhile_o *v14; // x21
  Il2CppObject **p__2__current; // x19
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  bool result; // w0

  if ( (byte_4B46DDC & 1) == 0 )
  {
    sub_1BDB878(&System_Func_bool__TypeInfo, method);
    sub_1BDB878(&SoundManager_TypeInfo, v3);
    sub_1BDB878(&Method_TerminalSceneComponent___c__WaitStopSEQuestPhaseRewardEffect_b__195_0__, v4);
    sub_1BDB878(&TerminalSceneComponent___c_TypeInfo, v5);
    sub_1BDB878(&UnityEngine_WaitWhile_TypeInfo, v6);
    byte_4B46DDC = 1;
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
  v8 = TerminalSceneComponent___c_TypeInfo;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v8 = TerminalSceneComponent___c_TypeInfo;
  }
  _9__195_0 = v8->static_fields->__9__195_0;
  if ( !_9__195_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = TerminalSceneComponent___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v8->static_fields->__9;
    _9__195_0 = (System_Func_bool__o *)sub_1BDBAC4(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      _9__195_0,
      v10,
      Method_TerminalSceneComponent___c__WaitStopSEQuestPhaseRewardEffect_b__195_0__,
      0LL);
    static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    static_fields->__9__195_0 = _9__195_0;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__195_0, (int32_t)_9__195_0, v12, v13);
  }
  v14 = (UnityEngine_WaitWhile_o *)sub_1BDBAC4(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v14, _9__195_0, 0LL);
  this->fields.__2__current = (Il2CppObject *)v14;
  p__2__current = &this->fields.__2__current;
  sub_1BDB81C((CGThumbnailListItem_o *)p__2__current, (int32_t)v14, v16, v17);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *__fastcall TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__195__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__195_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__195__System_Collections_IEnumerator_Reset(
        TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__195_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BDB88C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BDBAC4(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BDB88C(&Method_TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__195_System_Collections_IEnumerator_Reset__);
  sub_1BDB9A0(v3, v4);
}


Il2CppObject *__fastcall TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__195__System_Collections_IEnumerator_get_Current(
        TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__195_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__195__System_IDisposable_Dispose(
        TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect_d__195_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall TerminalSceneComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B46DA4 & 1) == 0 )
  {
    sub_1BDB878(&TerminalSceneComponent___c_TypeInfo, v1);
    byte_4B46DA4 = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(TerminalSceneComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  TerminalSceneComponent___c_TypeInfo->static_fields->__9 = (struct TerminalSceneComponent___c_o *)v2;
  sub_1BDB81C((CGThumbnailListItem_o *)TerminalSceneComponent___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall TerminalSceneComponent___c___ctor(TerminalSceneComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c___CheckOpenCampaignDirectBonus_b__257_0(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x20
  TerminalPramsManager_c *v7; // x0

  if ( (byte_4B46DB3 & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, action);
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v4);
    byte_4B46DB3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B3EEF0 )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v5);
    byte_4B3EEF0 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  if ( !Instance )
    sub_1BDBAD4(v7, v5);
  CommonUI__OpenCampaignDirectBonus(
    (CommonUI_o *)Instance,
    v7->static_fields->_CampaignDirectBonus_k__BackingField,
    action,
    0LL);
}


void __fastcall TerminalSceneComponent___c___CheckOpenCampaignDirectBonus_b__257_1(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x20
  TerminalPramsManager_c *v7; // x0

  if ( (byte_4B46DB4 & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, action);
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v4);
    byte_4B46DB4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B3EEF0 )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v5);
    byte_4B3EEF0 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  if ( !Instance )
    sub_1BDBAD4(v7, v5);
  CommonUI__OpenCampaignDirectBonusWithTransitionDialog(
    (CommonUI_o *)Instance,
    v7->static_fields->_CampaignDirectBonus_k__BackingField,
    action,
    0LL);
}


void __fastcall TerminalSceneComponent___c___CheckRewardPopupChain_b__255_2(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B46DB1 & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, action);
    byte_4B46DB1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v5);
  CommonUI__StartFriendPointNotification((CommonUI_o *)Instance, action, 0LL);
}


void __fastcall TerminalSceneComponent___c___CheckRewardPopupChain_b__255_6(
        TerminalSceneComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4B46DB2 & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4B46DB2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ClearLoginResultData((CommonUI_o *)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (CommonUI__ReleaseFortuneBonusAssetData((CommonUI_o *)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (CommonUI__ReleaseSelectBonusDialogAsset((CommonUI_o *)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1BDBAD4(Instance, v3);
  }
  CommonUI__ReleaseLoginBonusWithTransitionDialogAssetData((CommonUI_o *)Instance, 0LL);
}


void __fastcall TerminalSceneComponent___c___Fadein_MapDisp_Start_b__199_0(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B46DA7 & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, action);
    byte_4B46DA7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v5);
  CommonUI__StartLoginAndCampaignBonus((CommonUI_o *)Instance, action, 0LL, 201, 0LL);
}


void __fastcall TerminalSceneComponent___c___Fadein_MapDisp_Start_b__199_1(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x20

  if ( (byte_4B46DA8 & 1) == 0 )
  {
    sub_1BDB878(&AvalonSceneManager_TypeInfo, action);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4B46DA8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v7
    || (CommonUI__maskFadein(v7, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, action, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (CommonUI__ClearLoginResultData((CommonUI_o *)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (CommonUI__ReleaseFortuneBonusAssetData((CommonUI_o *)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1BDBAD4(Instance, v6);
  }
  CommonUI__ReleaseLoginBonusWithTransitionDialogAssetData((CommonUI_o *)Instance, 0LL);
}


void __fastcall TerminalSceneComponent___c___Fadein_MapDisp_Start_b__199_6(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x20

  if ( (byte_4B46DA6 & 1) == 0 )
  {
    sub_1BDB878(&AvalonSceneManager_TypeInfo, action);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4B46DA6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v7 )
    sub_1BDBAD4(Instance, v6);
  CommonUI__maskFadein(v7, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, action, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TerminalSceneComponent___c___IsValidGrandBgm_b__213_0(
        TerminalSceneComponent___c_o *this,
        int32_t n,
        const MethodInfo *method)
{
  if ( (byte_4B46DAC & 1) == 0 )
  {
    sub_1BDB878(&CondType_TypeInfo, *(_QWORD *)&n);
    byte_4B46DAC = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(113, n, 0LL, 0, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
ShopEntity_o *__fastcall TerminalSceneComponent___c___OpenExchangeDialogue_b__262_0(
        TerminalSceneComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B46DB5 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_ShopMaster___, *(_QWORD *)&x);
    sub_1BDB878(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v4);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B46DB5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL )
  {
    sub_1BDBAD4(Instance, v7);
  }
  return (ShopEntity_o *)DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                           x,
                           (const MethodInfo_32E1E3C *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
}


bool __fastcall TerminalSceneComponent___c___OpenExchangeDialogue_b__262_1(
        TerminalSceneComponent___c_o *this,
        ShopEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
  return ShopEntity__IsAfterTheFreeShopReleaseDate(x, 0LL);
}


bool __fastcall TerminalSceneComponent___c___OpenExchangeDialogue_b__262_2(
        TerminalSceneComponent___c_o *this,
        ShopEntity_o *x,
        const MethodInfo *method)
{
  bool isQuestNotClearItemClosed; // w8
  bool result; // w0

  if ( !x )
    sub_1BDBAD4(this, 0LL);
  if ( !ShopEntity__isQuestNotClearItemClosed(x, 0, 0LL) )
    return 1;
  isQuestNotClearItemClosed = ShopEntity__isQuestNotClearItemClosed(x, 0, 0LL);
  result = 0;
  if ( isQuestNotClearItemClosed )
    return ShopEntity__IsSoldOut(x, 0LL);
  return result;
}


int32_t __fastcall TerminalSceneComponent___c___OpenExchangeDialogue_b__262_4(
        TerminalSceneComponent___c_o *this,
        ShopEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
  return x->fields.id;
}


// local variable allocation has failed, the output may be wrong!
ShopEntity_o *__fastcall TerminalSceneComponent___c___OpenExchangeDialogue_b__262_5(
        TerminalSceneComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B46DB6 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_ShopMaster___, *(_QWORD *)&x);
    sub_1BDB878(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v4);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B46DB6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL )
  {
    sub_1BDBAD4(Instance, v7);
  }
  return (ShopEntity_o *)DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                           x,
                           (const MethodInfo_32E1E3C *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
}


int32_t __fastcall TerminalSceneComponent___c___OpenExchangeDialogue_b__262_6(
        TerminalSceneComponent___c_o *this,
        ShopEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
  return ShopEntity__GetPrice(x, 0LL);
}


void __fastcall TerminalSceneComponent___c___PlayAutoExecuteQuest_b__232_3(
        TerminalSceneComponent___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  TerminalPramsManager_c *v6; // x0
  int32_t WarId_k__BackingField; // w19
  int32_t QuestId_k__BackingField; // w20
  TerminalSceneComponent___c_c *v9; // x8
  int32_t PhaseCnt_k__BackingField; // w23
  ScriptManager_CallbackFunc_o *_9__232_4; // x21
  Il2CppObject *v12; // x22
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4B46DAE & 1) == 0 )
  {
    sub_1BDB878(&ScriptManager_CallbackFunc_TypeInfo, method);
    sub_1BDB878(&ScriptManager_TypeInfo, v2);
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v3);
    sub_1BDB878(&Method_TerminalSceneComponent___c__PlayAutoExecuteQuest_b__232_4__, v4);
    sub_1BDB878(&TerminalSceneComponent___c_TypeInfo, v5);
    byte_4B46DAE = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B3F84F )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, method);
    byte_4B3F84F = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v6->static_fields->_WarId_k__BackingField;
  if ( !byte_4B3EFD0 )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, method);
    v6 = TerminalPramsManager_TypeInfo;
    byte_4B3EFD0 = 1;
  }
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v6->static_fields->_QuestId_k__BackingField;
  if ( !byte_4B3EFCF )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, method);
    v6 = TerminalPramsManager_TypeInfo;
    byte_4B3EFCF = 1;
  }
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v9 = TerminalSceneComponent___c_TypeInfo;
  PhaseCnt_k__BackingField = v6->static_fields->_PhaseCnt_k__BackingField;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v9 = TerminalSceneComponent___c_TypeInfo;
  }
  _9__232_4 = v9->static_fields->__9__232_4;
  if ( !_9__232_4 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = TerminalSceneComponent___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v9->static_fields->__9;
    _9__232_4 = (ScriptManager_CallbackFunc_o *)sub_1BDBAC4(ScriptManager_CallbackFunc_TypeInfo);
    ScriptManager_CallbackFunc___ctor(
      _9__232_4,
      v12,
      Method_TerminalSceneComponent___c__PlayAutoExecuteQuest_b__232_4__,
      0LL);
    static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    static_fields->__9__232_4 = _9__232_4;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__232_4, (int32_t)_9__232_4, v14, v15);
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__PlayBattleStart(
    WarId_k__BackingField,
    QuestId_k__BackingField,
    PhaseCnt_k__BackingField + 1,
    _9__232_4,
    0,
    0LL,
    -1,
    0,
    0,
    0LL,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalSceneComponent___c___PlayAutoExecuteQuest_b__232_4(
        TerminalSceneComponent___c_o *this,
        bool isExit,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  TerminalSceneComponent___c_c *v9; // x0
  NetworkManager_ResultCallbackFunc_o *_9__232_5; // x19
  Il2CppObject *v11; // x20
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x1
  Il2CppObject *Request_object; // x19
  TerminalPramsManager_c *v17; // x0
  int32_t QuestId_k__BackingField; // w21
  int32_t PhaseCnt_k__BackingField; // w20
  System_Int32_array *SelectRouteArray; // x0
  __int64 v21; // x1

  if ( (byte_4B46DAF & 1) == 0 )
  {
    sub_1BDB878(&Method_NetworkManager_getRequest_BattleScenarioRequest___, isExit);
    sub_1BDB878(&NetworkManager_TypeInfo, v3);
    sub_1BDB878(&NetworkManager_ResultCallbackFunc_TypeInfo, v4);
    sub_1BDB878(&ScriptManager_TypeInfo, v5);
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v6);
    sub_1BDB878(&Method_TerminalSceneComponent___c__PlayAutoExecuteQuest_b__232_5__, v7);
    sub_1BDB878(&TerminalSceneComponent___c_TypeInfo, v8);
    byte_4B46DAF = 1;
  }
  v9 = TerminalSceneComponent___c_TypeInfo;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v9 = TerminalSceneComponent___c_TypeInfo;
  }
  _9__232_5 = v9->static_fields->__9__232_5;
  if ( !_9__232_5 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = TerminalSceneComponent___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v9->static_fields->__9;
    _9__232_5 = (NetworkManager_ResultCallbackFunc_o *)sub_1BDBAC4(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__232_5,
      v11,
      Method_TerminalSceneComponent___c__PlayAutoExecuteQuest_b__232_5__,
      0LL);
    static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    static_fields->__9__232_5 = _9__232_5;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__232_5, (int32_t)_9__232_5, v13, v14);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     _9__232_5,
                     (const MethodInfo_30BC7D4 *)Method_NetworkManager_getRequest_BattleScenarioRequest___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B3EFD0 )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v15);
    byte_4B3EFD0 = 1;
  }
  v17 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v17 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v17->static_fields->_QuestId_k__BackingField;
  if ( !byte_4B3EFCF )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v15);
    v17 = TerminalPramsManager_TypeInfo;
    byte_4B3EFCF = 1;
  }
  if ( !v17->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v17);
    v17 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v17->static_fields->_PhaseCnt_k__BackingField;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  SelectRouteArray = ScriptManager__GetSelectRouteArray(0LL);
  if ( !Request_object )
    sub_1BDBAD4(SelectRouteArray, v21);
  BattleScenarioRequest__beginRequest(
    (BattleScenarioRequest_o *)Request_object,
    QuestId_k__BackingField,
    PhaseCnt_k__BackingField + 1,
    SelectRouteArray,
    0LL);
}


void __fastcall TerminalSceneComponent___c___PlayAutoExecuteQuest_b__232_5(
        TerminalSceneComponent___c_o *this,
        System_String_o *jsonStr,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *v10; // x19
  System_Object_array *v11; // x19
  __int64 v12; // x1
  TerminalPramsManager_c *v13; // x0
  Il2CppObject *Instance; // x0
  __int64 v15; // x1

  if ( (byte_4B46DB0 & 1) == 0 )
  {
    sub_1BDB878(&Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___, jsonStr);
    sub_1BDB878(&JsonManager_TypeInfo, v4);
    sub_1BDB878(&ScriptManager_TypeInfo, v5);
    sub_1BDB878(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v7);
    sub_1BDB878(&StringLiteral_15782/*"["*/, v8);
    sub_1BDB878(&StringLiteral_16038/*"]"*/, v9);
    byte_4B46DB0 = 1;
  }
  v10 = (Il2CppObject *)System_String__Concat_62610508(
                          (System_String_o *)StringLiteral_15782/*"["*/,
                          jsonStr,
                          (System_String_o *)StringLiteral_16038/*"]"*/,
                          0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v11 = JsonManager__DeserializeArray_object_(
          v10,
          (const MethodInfo_30A04A4 *)Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__ClearSelectRouteArray(0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__ReceiveQuestEndResultInfo((BattleResultComponent_resultData_array *)v11, 1, 0LL);
  if ( !byte_4B3F3B7 )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v12);
    byte_4B3F3B7 = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v13 = TerminalPramsManager_TypeInfo;
  }
  v13->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v15);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalSceneComponent___c___RebootToNetworkError_b__219_0(
        TerminalSceneComponent___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B46DAD & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, isDecide);
    byte_4B46DAD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v4);
  ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, 0LL);
}


void __fastcall TerminalSceneComponent___c___StartWindowMessage_b__201_1(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x20

  if ( (byte_4B46DA9 & 1) == 0 )
  {
    sub_1BDB878(&AvalonSceneManager_TypeInfo, action);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4B46DA9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v7 )
    sub_1BDBAD4(Instance, v6);
  CommonUI__maskFadein(v7, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, action, 0LL);
}


void __fastcall TerminalSceneComponent___c___StartWindowMessage_b__201_2(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v4; // x1
  TerminalPramsManager_c *v5; // x0
  System_String_o *QuestWindowMessage_k__BackingField; // x20

  if ( (byte_4B46DAA & 1) == 0 )
  {
    sub_1BDB878(&ScriptManager_TypeInfo, action);
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v4);
    byte_4B46DAA = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B46DD9 )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, action);
    byte_4B46DD9 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  QuestWindowMessage_k__BackingField = v5->static_fields->_QuestWindowMessage_k__BackingField;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__PlayMessage(QuestWindowMessage_k__BackingField, action, 0, 0LL, -1, 0LL);
}


void __fastcall TerminalSceneComponent___c___StartWindowMessage_b__201_3(
        TerminalSceneComponent___c_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v4; // x1
  TerminalPramsManager_c *v5; // x0
  __int64 v6; // x1
  Il2CppObject *v7; // x20
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_4B46DAB & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, action);
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v4);
    byte_4B46DAB = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B406D8 )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, action);
    byte_4B406D8 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  if ( v5->static_fields->_MessageDispType_k__BackingField != 2 )
  {
    if ( !v5->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v5);
    TerminalPramsManager__InitMessageWindowData(0LL);
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( Instance )
    {
      AvalonSceneManager__transitionSceneRefresh(Instance, 34, 1, 0LL, 0, 0LL);
      goto LABEL_22;
    }
LABEL_23:
    sub_1BDBAD4(Instance, v6);
  }
  v7 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B46DDB )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v6);
    byte_4B46DDB = 1;
  }
  Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v7 )
    goto LABEL_23;
  AvalonSceneManager__transitionScene(
    (AvalonSceneManager_o *)v7,
    40,
    1,
    *(Il2CppObject **)(*(_QWORD *)&Instance[1].fields.fadeType + 120LL),
    0LL);
LABEL_22:
  ActionExtensions__Call(action, 0LL);
}


bool __fastcall TerminalSceneComponent___c___WaitStopSEQuestPhaseRewardEffect_b__195_0(
        TerminalSceneComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4B46DA5 & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonTemplate_RewardMiniPopupExecutor__get_Instance__, method);
    byte_4B46DA5 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_RewardMiniPopupExecutor__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v3);
  return RewardMiniPopupExecutor__IsBusy((RewardMiniPopupExecutor_o *)Instance, 0LL);
}


System_String_o *__fastcall TerminalSceneComponent___c___callbackTopLogin_b__217_0(
        TerminalSceneComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  int32_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = x;
  return System_Int32__ToString((int32_t)&v4, 0LL);
}


System_String_o *__fastcall TerminalSceneComponent___c___callbackTopLogin_b__217_1(
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct TerminalSceneComponent_o *_4__this; // x21
  Il2CppObject *Object_object__50417328; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct TerminalSceneComponent_o *v13; // x8
  struct TerminalSceneComponent_o *v14; // x20
  Il2CppObject *ComponentInChildren_object; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  v4 = this;
  if ( (byte_4B46DB7 & 1) == 0 )
  {
    sub_1BDB878(&Method_AssetData_GetObject_GameObject____77074016, data);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponentInChildren_BaseCore___, v5);
    sub_1BDB878(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v7);
    this = (TerminalSceneComponent___c__DisplayClass173_0_o *)sub_1BDB878(&StringLiteral_4765/*"CorePrefab"*/, v8);
    byte_4B46DB7 = 1;
  }
  if ( !data )
    goto LABEL_11;
  _4__this = v4->fields.__4__this;
  Object_object__50417328 = AssetData__GetObject_object__50417328(
                              data,
                              (System_String_o *)StringLiteral_4765/*"CorePrefab"*/,
                              (const MethodInfo_3014EB0 *)Method_AssetData_GetObject_GameObject____77074016);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (TerminalSceneComponent___c__DisplayClass173_0_o *)UnityEngine_Object__Instantiate_object_(
                                                              Object_object__50417328,
                                                              (const MethodInfo_30BDAA4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !_4__this
    || (_4__this->fields.mEarthCoreObj = (struct UnityEngine_GameObject_o *)this,
        sub_1BDB81C((CGThumbnailListItem_o *)&_4__this->fields.mEarthCoreObj, (int32_t)this, v11, v12),
        (v13 = v4->fields.__4__this) == 0LL)
    || (GameObjectExtensions__SafeSetParent_35216896(v13->fields.mEarthCoreObj, v13->fields.mUiRoot, 0LL),
        (v14 = v4->fields.__4__this) == 0LL)
    || (this = (TerminalSceneComponent___c__DisplayClass173_0_o *)v14->fields.mEarthCoreObj) == 0LL )
  {
LABEL_11:
    sub_1BDBAD4(this, data);
  }
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 (UnityEngine_GameObject_o *)this,
                                 (const MethodInfo_3088784 *)Method_UnityEngine_GameObject_GetComponentInChildren_BaseCore___);
  v14->fields.mEarthCore = (struct BaseCore_o *)ComponentInChildren_object;
  sub_1BDB81C((CGThumbnailListItem_o *)&v14->fields.mEarthCore, (int32_t)ComponentInChildren_object, v16, v17);
  ActionExtensions__Call(v4->fields.callback, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass174_0___ctor(
        TerminalSceneComponent___c__DisplayClass174_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass174_0___RegenerateEarthView_b__0(
        TerminalSceneComponent___c__DisplayClass174_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass174_0_o *v2; // x19
  __int64 v3; // x1
  struct TerminalSceneComponent_o *_4__this; // x8
  struct BaseCore_o *mEarthCore; // x20
  System_Collections_Generic_List_MapControl_WarInfo__o *WarInfoAll_OrderReverse; // x21
  long double inited; // q0
  struct TerminalSceneComponent_o *v8; // x8
  System_Action_o *callback; // x0

  v2 = this;
  if ( (byte_4B46DB8 & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonTemplate_QuestTree__get_Instance__, method);
    this = (TerminalSceneComponent___c__DisplayClass174_0_o *)sub_1BDB878(&TerminalPramsManager_TypeInfo, v3);
    byte_4B46DB8 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  mEarthCore = _4__this->fields.mEarthCore;
  this = (TerminalSceneComponent___c__DisplayClass174_0_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !this )
    goto LABEL_17;
  WarInfoAll_OrderReverse = QuestTree__GetWarInfoAll_OrderReverse((QuestTree_o *)this, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B41AC3 )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, method);
    byte_4B41AC3 = 1;
  }
  this = (TerminalSceneComponent___c__DisplayClass174_0_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    inited = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (TerminalSceneComponent___c__DisplayClass174_0_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !mEarthCore
    || (this = (TerminalSceneComponent___c__DisplayClass174_0_o *)((__int64 (__fastcall *)(struct BaseCore_o *, System_Collections_Generic_List_MapControl_WarInfo__o *, bool, Il2CppMethodPointer, long double))mEarthCore->klass->vtable._8_Setup.method)(
                                                                    mEarthCore,
                                                                    WarInfoAll_OrderReverse,
                                                                    BYTE2(this[5].fields.callback->fields.delegates) == 0,
                                                                    mEarthCore->klass->vtable._9_mcbfStartMain.methodPtr,
                                                                    inited),
        (v8 = v2->fields.__4__this) == 0LL)
    || (this = (TerminalSceneComponent___c__DisplayClass174_0_o *)v8->fields.mEarthCore) == 0LL )
  {
LABEL_17:
    sub_1BDBAD4(this, method);
  }
  ((void (__fastcall *)(TerminalSceneComponent___c__DisplayClass174_0_o *, void *))this->klass[1]._1.parent)(
    this,
    this->klass[1]._1.generic_class);
  callback = v2->fields.callback;
  if ( callback )
    ActionExtensions__Call(callback, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass177_0___ctor(
        TerminalSceneComponent___c__DisplayClass177_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass177_0___LoadAsync_b__0(
        TerminalSceneComponent___c__DisplayClass177_0_o *this,
        const MethodInfo *method)
{
  this->fields.isSetupStandServant = 1;
}


void __fastcall TerminalSceneComponent___c__DisplayClass177_0___LoadAsync_b__1(
        TerminalSceneComponent___c__DisplayClass177_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadUISkin = 1;
}


void __fastcall TerminalSceneComponent___c__DisplayClass177_0___LoadAsync_b__10(
        TerminalSceneComponent___c__DisplayClass177_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadEventUI = 1;
}


void __fastcall TerminalSceneComponent___c__DisplayClass177_0___LoadAsync_b__11(
        TerminalSceneComponent___c__DisplayClass177_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadCharaGraphOptionAtlas = 1;
}


void __fastcall TerminalSceneComponent___c__DisplayClass177_0___LoadAsync_b__12(
        TerminalSceneComponent___c__DisplayClass177_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadPartyOrganizationAtlas = 1;
}


bool __fastcall TerminalSceneComponent___c__DisplayClass177_0___LoadAsync_b__13(
        TerminalSceneComponent___c__DisplayClass177_0_o *this,
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


void __fastcall TerminalSceneComponent___c__DisplayClass177_0___LoadAsync_b__2(
        TerminalSceneComponent___c__DisplayClass177_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadAudioAssetStorage = 1;
}


void __fastcall TerminalSceneComponent___c__DisplayClass177_0___LoadAsync_b__3(
        TerminalSceneComponent___c__DisplayClass177_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadBanner = 1;
}


void __fastcall TerminalSceneComponent___c__DisplayClass177_0___LoadAsync_b__4(
        TerminalSceneComponent___c__DisplayClass177_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadFaceAtlas = 1;
}


void __fastcall TerminalSceneComponent___c__DisplayClass177_0___LoadAsync_b__5(
        TerminalSceneComponent___c__DisplayClass177_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadEquipFace = 1;
}


void __fastcall TerminalSceneComponent___c__DisplayClass177_0___LoadAsync_b__6(
        TerminalSceneComponent___c__DisplayClass177_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadFriendshipExceed = 1;
}


void __fastcall TerminalSceneComponent___c__DisplayClass177_0___LoadAsync_b__7(
        TerminalSceneComponent___c__DisplayClass177_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadCommandCode = 1;
}


void __fastcall TerminalSceneComponent___c__DisplayClass177_0___LoadAsync_b__8(
        TerminalSceneComponent___c__DisplayClass177_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadCommandCodeMini = 1;
}


void __fastcall TerminalSceneComponent___c__DisplayClass177_0___LoadAsync_b__9(
        TerminalSceneComponent___c__DisplayClass177_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadEventAtlas = 1;
}


void __fastcall TerminalSceneComponent___c__DisplayClass190_0___ctor(
        TerminalSceneComponent___c__DisplayClass190_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass190_0___SetupStandServant_b__0(
        TerminalSceneComponent___c__DisplayClass190_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass190_0_o *v2; // x19
  struct TerminalSceneComponent_o *_4__this; // x8

  v2 = this;
  if ( this->fields.isSlideIn )
  {
    _4__this = this->fields.__4__this;
    if ( !_4__this
      || (this = (TerminalSceneComponent___c__DisplayClass190_0_o *)_4__this->fields.mTerminalServant) == 0LL )
    {
      sub_1BDBAD4(this, method);
    }
    StandFigureSlideComponent__SlideIn((StandFigureSlideComponent_o *)this, 0LL, 0LL);
  }
  ActionExtensions__Call(v2->fields.endAction, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass190_0___SetupStandServant_b__1(
        TerminalSceneComponent___c__DisplayClass190_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass190_0_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct TerminalSceneComponent_o *_4__this; // x8
  struct TerminalSceneComponent_o *v7; // x8
  long double v8; // q0
  struct TerminalSceneComponent_o *v9; // x8
  struct StandFigureSlideComponent_o *mTerminalServant; // x9
  struct BaseCore_o *mEarthCore; // x8
  __int64 v12; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UserServantEntity_o *NextStandServant; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  long double inited; // q0
  struct TerminalSceneComponent_o *v19; // x8
  int32_t mStandSvtIdx; // w22
  struct TerminalSceneComponent_o *v21; // x8
  struct BaseCore_o *v22; // x22
  struct TerminalSceneComponent_o *v23; // x8
  StandFigureSlideComponent_o *v24; // x19
  System_Action_o *v25; // x21
  struct TerminalSceneComponent_o *v26; // x8
  struct BaseCore_o *v27; // x21
  struct TerminalSceneComponent_o *v28; // x8

  v2 = this;
  if ( (byte_4B46DB9 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v3);
    sub_1BDB878(&Method_TerminalSceneComponent___c__DisplayClass190_1__SetupStandServant_b__2__, v4);
    this = (TerminalSceneComponent___c__DisplayClass190_0_o *)sub_1BDB878(
                                                                &TerminalSceneComponent___c__DisplayClass190_1_TypeInfo,
                                                                v5);
    byte_4B46DB9 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_54;
  this = (TerminalSceneComponent___c__DisplayClass190_0_o *)_4__this->fields.mTerminalServant;
  if ( !this )
    goto LABEL_54;
  if ( !BYTE1(this[1].fields.__4__this) )
  {
    this = (TerminalSceneComponent___c__DisplayClass190_0_o *)StandFigureSlideComponent__IsMoving(
                                                                (StandFigureSlideComponent_o *)this,
                                                                0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v7 = v2->fields.__4__this;
      if ( !v7 )
        goto LABEL_54;
      this = (TerminalSceneComponent___c__DisplayClass190_0_o *)v7->fields.mEarthCore;
      if ( !this )
        goto LABEL_54;
      if ( !BYTE1(this[3].fields.__4__this) )
      {
        *(float *)&v8 = ((float (__fastcall *)(TerminalSceneComponent___c__DisplayClass190_0_o *, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
                          this,
                          this->klass[1]._1.interfaceOffsets);
        if ( *(float *)&v8 >= 0.0 && *(float *)&v8 <= 0.0 )
        {
          v9 = v2->fields.__4__this;
          if ( !v9 )
            goto LABEL_54;
          mTerminalServant = v9->fields.mTerminalServant;
          if ( !mTerminalServant )
            goto LABEL_54;
          mEarthCore = v9->fields.mEarthCore;
          if ( mTerminalServant->fields.mIsFrameIn )
          {
            if ( !mEarthCore )
              goto LABEL_54;
            if ( !mEarthCore->fields.mIsFocusIn )
            {
              v12 = sub_1BDBAC4(TerminalSceneComponent___c__DisplayClass190_1_TypeInfo);
              System_Object___ctor((Il2CppObject *)v12, 0LL);
              if ( v12 )
              {
                *(_QWORD *)(v12 + 24) = v2;
                sub_1BDB81C((CGThumbnailListItem_o *)(v12 + 24), (int32_t)v2, v13, v14);
                this = (TerminalSceneComponent___c__DisplayClass190_0_o *)v2->fields.__4__this;
                if ( this )
                {
                  NextStandServant = TerminalSceneComponent__GetNextStandServant(
                                       (TerminalSceneComponent_o *)this,
                                       method);
                  *(_QWORD *)(v12 + 16) = NextStandServant;
                  sub_1BDB81C((CGThumbnailListItem_o *)(v12 + 16), (int32_t)NextStandServant, v16, v17);
                  v19 = v2->fields.__4__this;
                  if ( v19 )
                  {
                    mStandSvtIdx = v19->fields.mStandSvtIdx;
                    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                      inited = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                    if ( !byte_4B46DD5 )
                    {
                      sub_1BDB878(&TerminalPramsManager_TypeInfo, method);
                      byte_4B46DD5 = 1;
                    }
                    this = (TerminalSceneComponent___c__DisplayClass190_0_o *)TerminalPramsManager_TypeInfo;
                    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                    {
                      inited = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                      this = (TerminalSceneComponent___c__DisplayClass190_0_o *)TerminalPramsManager_TypeInfo;
                    }
                    BYTE2(this[4].fields.__4__this->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.x) = mStandSvtIdx != 0;
                    v21 = v2->fields.__4__this;
                    if ( v21 )
                    {
                      v22 = v21->fields.mEarthCore;
                      if ( !byte_4B41AC3 )
                      {
                        sub_1BDB878(&TerminalPramsManager_TypeInfo, method);
                        this = (TerminalSceneComponent___c__DisplayClass190_0_o *)TerminalPramsManager_TypeInfo;
                        byte_4B41AC3 = 1;
                      }
                      if ( !LODWORD(this[5].fields.__4__this) )
                      {
                        inited = j_il2cpp_runtime_class_init_0(this);
                        this = (TerminalSceneComponent___c__DisplayClass190_0_o *)TerminalPramsManager_TypeInfo;
                      }
                      if ( v22 )
                      {
                        this = (TerminalSceneComponent___c__DisplayClass190_0_o *)((__int64 (__fastcall *)(struct BaseCore_o *, bool, _QWORD, Il2CppMethodPointer, long double))v22->klass->vtable._4_FocusInOut.method)(
                                                                                    v22,
                                                                                    BYTE2(this[4].fields.__4__this->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.x) == 0,
                                                                                    0LL,
                                                                                    v22->klass->vtable._5_Awake.methodPtr,
                                                                                    inited);
                        v23 = v2->fields.__4__this;
                        if ( v23 )
                        {
                          v24 = v23->fields.mTerminalServant;
                          v25 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
                          System_Action___ctor(
                            v25,
                            (Il2CppObject *)v12,
                            Method_TerminalSceneComponent___c__DisplayClass190_1__SetupStandServant_b__2__,
                            0LL);
                          if ( v24 )
                          {
                            StandFigureSlideComponent__SlideOut(v24, v25, 0, 0LL);
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
                v8 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              if ( !byte_4B46DD5 )
              {
                sub_1BDB878(&TerminalPramsManager_TypeInfo, method);
                byte_4B46DD5 = 1;
              }
              this = (TerminalSceneComponent___c__DisplayClass190_0_o *)TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                v8 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                this = (TerminalSceneComponent___c__DisplayClass190_0_o *)TerminalPramsManager_TypeInfo;
              }
              BYTE2(this[4].fields.__4__this->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.x) = 1;
              v26 = v2->fields.__4__this;
              if ( v26 )
              {
                v27 = v26->fields.mEarthCore;
                if ( !byte_4B41AC3 )
                {
                  sub_1BDB878(&TerminalPramsManager_TypeInfo, method);
                  this = (TerminalSceneComponent___c__DisplayClass190_0_o *)TerminalPramsManager_TypeInfo;
                  byte_4B41AC3 = 1;
                }
                if ( !LODWORD(this[5].fields.__4__this) )
                {
                  v8 = j_il2cpp_runtime_class_init_0(this);
                  this = (TerminalSceneComponent___c__DisplayClass190_0_o *)TerminalPramsManager_TypeInfo;
                }
                if ( v27 )
                {
                  this = (TerminalSceneComponent___c__DisplayClass190_0_o *)((__int64 (__fastcall *)(struct BaseCore_o *, bool, _QWORD, Il2CppMethodPointer, long double))v27->klass->vtable._4_FocusInOut.method)(
                                                                              v27,
                                                                              BYTE2(this[4].fields.__4__this->fields.TUTORIAL_SPOT_MESSAGE_POS.fields.x) == 0,
                                                                              0LL,
                                                                              v27->klass->vtable._5_Awake.methodPtr,
                                                                              v8);
                  v28 = v2->fields.__4__this;
                  if ( v28 )
                  {
                    this = (TerminalSceneComponent___c__DisplayClass190_0_o *)v28->fields.mTerminalServant;
                    if ( this )
                    {
                      StandFigureSlideComponent__SlideIn((StandFigureSlideComponent_o *)this, 0LL, 0LL);
                      goto LABEL_53;
                    }
                  }
                }
              }
LABEL_54:
              sub_1BDBAD4(this, method);
            }
          }
        }
      }
    }
  }
}


void __fastcall TerminalSceneComponent___c__DisplayClass190_1___ctor(
        TerminalSceneComponent___c__DisplayClass190_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass190_1___SetupStandServant_b__2(
        TerminalSceneComponent___c__DisplayClass190_1_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  TerminalSceneComponent___c__DisplayClass190_1_o *v3; // x20
  struct TerminalSceneComponent___c__DisplayClass190_0_o *CS___8__locals1; // x8
  TerminalSceneComponent_o *_4__this; // x19
  UserServantEntity_o *usd; // x20

  v3 = this;
  if ( (byte_4B46DBA & 1) == 0 )
  {
    this = (TerminalSceneComponent___c__DisplayClass190_1_o *)sub_1BDB878(&TerminalPramsManager_TypeInfo, method);
    byte_4B46DBA = 1;
  }
  CS___8__locals1 = v3->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_12;
  _4__this = CS___8__locals1->fields.__4__this;
  usd = v3->fields._usd;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B41AC3 )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, method);
    byte_4B41AC3 = 1;
  }
  this = (TerminalSceneComponent___c__DisplayClass190_1_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (TerminalSceneComponent___c__DisplayClass190_1_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !_4__this )
LABEL_12:
    sub_1BDBAD4(this, method);
  TerminalSceneComponent__SetupStandServant(_4__this, usd, BYTE2(this[5].fields.CS___8__locals1[2].monitor), 0LL, v2);
}


void __fastcall TerminalSceneComponent___c__DisplayClass196_0___ctor(
        TerminalSceneComponent___c__DisplayClass196_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass196_0___coFadein_WorldDisp_b__0(
        TerminalSceneComponent___c__DisplayClass196_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.endAct, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass196_0___coFadein_WorldDisp_b__1(
        TerminalSceneComponent___c__DisplayClass196_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalSceneComponent___c__DisplayClass196_0_o *v3; // x19
  __int64 v4; // x1
  System_Action_o *_9__3; // x22
  TerminalSceneComponent_o *_4__this; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  v3 = this;
  if ( (byte_4B46DBB & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    this = (TerminalSceneComponent___c__DisplayClass196_0_o *)sub_1BDB878(
                                                                &Method_TerminalSceneComponent___c__DisplayClass196_0__coFadein_WorldDisp_b__3__,
                                                                v4);
    byte_4B46DBB = 1;
  }
  _9__3 = v3->fields.__9__3;
  _4__this = v3->fields.__4__this;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)v3,
      Method_TerminalSceneComponent___c__DisplayClass196_0__coFadein_WorldDisp_b__3__,
      0LL);
    v3->fields.__9__3 = _9__3;
    sub_1BDB81C((CGThumbnailListItem_o *)&v3->fields.__9__3, (int32_t)_9__3, v7, v8);
  }
  if ( !_4__this )
    sub_1BDBAD4(this, method);
  TerminalSceneComponent__StartWindowMessage(_4__this, _9__3, v2);
}


void __fastcall TerminalSceneComponent___c__DisplayClass196_0___coFadein_WorldDisp_b__2(
        TerminalSceneComponent___c__DisplayClass196_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalSceneComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BDBAD4(0LL, method);
  TerminalSceneComponent__StartWindowMessage(_4__this, 0LL, v2);
}


void __fastcall TerminalSceneComponent___c__DisplayClass196_0___coFadein_WorldDisp_b__3(
        TerminalSceneComponent___c__DisplayClass196_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.endAct, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass197_0___ctor(
        TerminalSceneComponent___c__DisplayClass197_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass197_0___Fadein_MapDisp_b__0(
        TerminalSceneComponent___c__DisplayClass197_0_o *this,
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
    sub_1BDBAD4(_4__this, method);
  }
  v5->fields._FirstFadeTime_k__BackingField = 0.0;
}


void __fastcall TerminalSceneComponent___c__DisplayClass198_0___ctor(
        TerminalSceneComponent___c__DisplayClass198_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass198_0___Fadein_MapDisp_Load_b__0(
        TerminalSceneComponent___c__DisplayClass198_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1BDBAD4(this, method);
  TerminalSceneComponent__Fadein_MapDisp_Start(this->fields.__4__this, this->fields.fade_time, this->fields.end_act, v2);
}


void __fastcall TerminalSceneComponent___c__DisplayClass199_0___ctor(
        TerminalSceneComponent___c__DisplayClass199_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass199_0___Fadein_MapDisp_Start_b__2(
        TerminalSceneComponent___c__DisplayClass199_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct WarEntity_o *war_dat; // x8

  war_dat = this->fields.war_dat;
  if ( !war_dat || (this = (TerminalSceneComponent___c__DisplayClass199_0_o *)this->fields.__4__this) == 0LL )
    sub_1BDBAD4(this, action);
  TerminalSceneComponent__StartEventDailyPoint((TerminalSceneComponent_o *)this, war_dat->fields.eventId, action, v3);
}


void __fastcall TerminalSceneComponent___c__DisplayClass199_0___Fadein_MapDisp_Start_b__3(
        TerminalSceneComponent___c__DisplayClass199_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  struct WarEntity_o *war_dat; // x9

  war_dat = this->fields.war_dat;
  if ( !war_dat || !this->fields.__4__this )
    sub_1BDBAD4(this, method);
  TerminalSceneComponent__FadeInAndTriggerEventEffects(
    this->fields.__4__this,
    this->fields.fade_time,
    war_dat->fields.eventId,
    this->fields.end_act,
    v2);
}


void __fastcall TerminalSceneComponent___c__DisplayClass199_0___Fadein_MapDisp_Start_b__4(
        TerminalSceneComponent___c__DisplayClass199_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_o *_4__this; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (mTerminalList = _4__this->fields.mTerminalList) == 0LL
    || (this = (TerminalSceneComponent___c__DisplayClass199_0_o *)mTerminalList->fields.mQuestBoardListViewManager) == 0LL )
  {
    sub_1BDBAD4(this, action);
  }
  QuestBoardListViewManager__SetMode((QuestBoardListViewManager_o *)this, 4, action, 0, 0, 0, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass199_0___Fadein_MapDisp_Start_b__5(
        TerminalSceneComponent___c__DisplayClass199_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass199_0_o *v4; // x20
  struct TerminalSceneComponent_o *_4__this; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8

  v4 = this;
  if ( (byte_4B46DBC & 1) == 0 )
  {
    this = (TerminalSceneComponent___c__DisplayClass199_0_o *)sub_1BDB878(
                                                                &Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__,
                                                                action);
    byte_4B46DBC = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this
    || (mTerminalMap = _4__this->fields.mTerminalMap) == 0LL
    || (this = (TerminalSceneComponent___c__DisplayClass199_0_o *)mTerminalMap->fields.spotMaskObj) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL),
        (this = (TerminalSceneComponent___c__DisplayClass199_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__)) == 0LL) )
  {
    sub_1BDBAD4(this, action);
  }
  QuestAfterAction__LoadVoice((QuestAfterAction_o *)this, action, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass199_1___ctor(
        TerminalSceneComponent___c__DisplayClass199_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass199_1___Fadein_MapDisp_Start_b__7(
        TerminalSceneComponent___c__DisplayClass199_1_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *IsNullOrEmpty; // x0
  __int64 v6; // x8
  __int64 v7; // x8
  __int64 v8; // x1
  TerminalPramsManager_c *v9; // x0
  const MethodInfo *v10; // x2
  Il2CppObject *Instance; // x19
  struct TerminalSceneComponent___c__DisplayClass199_0_o *CS___8__locals1; // x8

  if ( (byte_4B46DBD & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v3);
    sub_1BDB878(&TerminalSceneComponent_TypeInfo, v4);
    byte_4B46DBD = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4B3EEEF )
  {
    sub_1BDB878(&TerminalSceneComponent_TypeInfo, method);
    byte_4B3EEEF = 1;
  }
  IsNullOrEmpty = (UnityEngine_GameObject_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    IsNullOrEmpty = (UnityEngine_GameObject_o *)TerminalSceneComponent_TypeInfo;
  }
  v6 = **(_QWORD **)&IsNullOrEmpty[7].fields.m_CachedPtr;
  if ( !v6 )
    goto LABEL_30;
  v7 = *(_QWORD *)(v6 + 264);
  if ( !v7 )
    goto LABEL_30;
  IsNullOrEmpty = *(UnityEngine_GameObject_o **)(v7 + 552);
  if ( !IsNullOrEmpty )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive(IsNullOrEmpty, this->fields.oldActive, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B46DD9 )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v8);
    byte_4B46DD9 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  IsNullOrEmpty = (UnityEngine_GameObject_o *)System_String__IsNullOrEmpty(
                                                v9->static_fields->_QuestWindowMessage_k__BackingField,
                                                0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B46DDB )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, method);
      byte_4B46DDB = 1;
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
    sub_1BDBAD4(IsNullOrEmpty, method);
  }
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_30;
  IsNullOrEmpty = (UnityEngine_GameObject_o *)CS___8__locals1->fields.__4__this;
  if ( !IsNullOrEmpty )
    goto LABEL_30;
  TerminalSceneComponent__StartWindowMessage((TerminalSceneComponent_o *)IsNullOrEmpty, 0LL, v10);
}


void __fastcall TerminalSceneComponent___c__DisplayClass202_0___ctor(
        TerminalSceneComponent___c__DisplayClass202_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass202_0___FadeInAndTriggerEventEffects_b__0(
        TerminalSceneComponent___c__DisplayClass202_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( !this->fields.__4__this )
    sub_1BDBAD4(this, method);
  TerminalSceneComponent__FadeInAndTriggerEventEffectsNext(
    this->fields.__4__this,
    this->fields.eventId,
    this->fields.callback,
    v2);
}


void __fastcall TerminalSceneComponent___c__DisplayClass202_0___FadeInAndTriggerEventEffects_b__1(
        TerminalSceneComponent___c__DisplayClass202_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  System_Action_o *_9__3; // x22
  QuestAfterAction_o *v8; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4B46DBE & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v3);
    sub_1BDB878(&Method_TerminalSceneComponent___c__DisplayClass202_0__FadeInAndTriggerEventEffects_b__3__, v4);
    byte_4B46DBE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  _9__3 = this->fields.__9__3;
  v8 = (QuestAfterAction_o *)Instance;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent___c__DisplayClass202_0__FadeInAndTriggerEventEffects_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.__9__3, (int32_t)_9__3, v9, v10);
  }
  if ( !v8 )
    sub_1BDBAD4(Instance, v6);
  QuestAfterAction__Play(v8, _9__3, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass202_0___FadeInAndTriggerEventEffects_b__3(
        TerminalSceneComponent___c__DisplayClass202_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( !this->fields.__4__this )
    sub_1BDBAD4(this, method);
  TerminalSceneComponent__FadeInAndTriggerEventEffectsNext(
    this->fields.__4__this,
    this->fields.eventId,
    this->fields.callback,
    v2);
}


void __fastcall TerminalSceneComponent___c__DisplayClass202_0___FadeInAndTriggerEventEffects_b__4(
        TerminalSceneComponent___c__DisplayClass202_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( !this->fields.__4__this )
    sub_1BDBAD4(this, method);
  TerminalSceneComponent__FadeInAndTriggerEventEffectsNext(
    this->fields.__4__this,
    this->fields.eventId,
    this->fields.callback,
    v2);
}


void __fastcall TerminalSceneComponent___c__DisplayClass202_1___ctor(
        TerminalSceneComponent___c__DisplayClass202_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass202_1___FadeInAndTriggerEventEffects_b__2(
        TerminalSceneComponent___c__DisplayClass202_1_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  struct TerminalSceneComponent___c__DisplayClass202_0_o *CS___8__locals1; // x8

  if ( (byte_4B46DBF & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1BDB878(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v3);
    byte_4B46DBF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  if ( BYTE3(Instance[12].klass) )
  {
    ActionExtensions__Call(this->fields.questAfterActionPlay, 0LL);
    return;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 || !Instance )
LABEL_9:
    sub_1BDBAD4(Instance, v5);
  CommonUI__maskFadein((CommonUI_o *)Instance, CS___8__locals1->fields.fadeTime, this->fields.questAfterActionPlay, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass205_0___ctor(
        TerminalSceneComponent___c__DisplayClass205_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass205_0___FadeInAndTriggerEventEffectsNext_b__0(
        TerminalSceneComponent___c__DisplayClass205_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_o *_4__this; // x8
  TitleInfoControl_o *mTitleInfo; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (mTitleInfo = _4__this->fields.mTitleInfo) == 0LL )
    sub_1BDBAD4(this, method);
  TitleInfoControl__CheckSuperBossHpAnim(mTitleInfo, this->fields.callback, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass205_0___FadeInAndTriggerEventEffectsNext_b__1(
        TerminalSceneComponent___c__DisplayClass205_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  TerminalSceneComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BDBAD4(0LL, method);
  TerminalSceneComponent__SetActionBGColl(_4__this, 0, this->fields.callback, v2);
}


void __fastcall TerminalSceneComponent___c__DisplayClass232_0___ctor(
        TerminalSceneComponent___c__DisplayClass232_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass232_0___PlayAutoExecuteQuest_b__0(
        TerminalSceneComponent___c__DisplayClass232_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass232_0_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct TerminalSceneComponent_o *_4__this; // x8
  ScrTerminalListTop_o *mTerminalList; // x20
  int32_t invoke_impl; // w21
  int m_target; // w24
  System_Action_o *_9__6; // x22
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  v2 = this;
  if ( (byte_4B46DC2 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v3);
    this = (TerminalSceneComponent___c__DisplayClass232_0_o *)sub_1BDB878(
                                                                &Method_TerminalSceneComponent___c__DisplayClass232_0__PlayAutoExecuteQuest_b__6__,
                                                                v4);
    byte_4B46DC2 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_18;
  mTerminalList = _4__this->fields.mTerminalList;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B3EFD0 )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, method);
    byte_4B3EFD0 = 1;
  }
  this = (TerminalSceneComponent___c__DisplayClass232_0_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (TerminalSceneComponent___c__DisplayClass232_0_o *)TerminalPramsManager_TypeInfo;
  }
  invoke_impl = this[3].fields.__9__6->fields.invoke_impl;
  if ( !byte_4B3EFCF )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, method);
    this = (TerminalSceneComponent___c__DisplayClass232_0_o *)TerminalPramsManager_TypeInfo;
    byte_4B3EFCF = 1;
  }
  if ( !LODWORD(this[4].fields.__9__2) )
  {
    j_il2cpp_runtime_class_init_0(this);
    this = (TerminalSceneComponent___c__DisplayClass232_0_o *)TerminalPramsManager_TypeInfo;
  }
  m_target = (int)this[3].fields.__9__6->fields.m_target;
  _9__6 = v2->fields.__9__6;
  if ( !_9__6 )
  {
    _9__6 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__6,
      (Il2CppObject *)v2,
      Method_TerminalSceneComponent___c__DisplayClass232_0__PlayAutoExecuteQuest_b__6__,
      0LL);
    v2->fields.__9__6 = _9__6;
    sub_1BDB81C((CGThumbnailListItem_o *)&v2->fields.__9__6, (int32_t)_9__6, v10, v11);
  }
  if ( !mTerminalList )
LABEL_18:
    sub_1BDBAD4(this, method);
  ScrTerminalListTop__StartWindowMessage_35943932(mTerminalList, invoke_impl, m_target + 1, 2, _9__6, 0, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass232_0___PlayAutoExecuteQuest_b__1(
        TerminalSceneComponent___c__DisplayClass232_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  QuestEntity_o *questEnt; // x0
  struct TerminalSceneComponent_o *_4__this; // x8
  ScrTerminalListTop_o *mTerminalList; // x20
  int32_t name_high; // w21
  int namespaze; // w24
  System_Action_o *_9__2; // x22
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  clsQuestCheck_o *v17; // x19
  TerminalSceneComponent___c_c *v18; // x8
  System_Action_o *_9__232_3; // x20
  Il2CppObject *v20; // x21
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3

  if ( (byte_4B46DC0 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, result);
    sub_1BDB878(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v4);
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v5);
    sub_1BDB878(&Method_TerminalSceneComponent___c__PlayAutoExecuteQuest_b__232_3__, v6);
    sub_1BDB878(&Method_TerminalSceneComponent___c__DisplayClass232_0__PlayAutoExecuteQuest_b__2__, v7);
    sub_1BDB878(&TerminalSceneComponent___c_TypeInfo, v8);
    byte_4B46DC0 = 1;
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
      if ( !byte_4B3EFD0 )
      {
        sub_1BDB878(&TerminalPramsManager_TypeInfo, result);
        byte_4B3EFD0 = 1;
      }
      questEnt = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        questEnt = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
      }
      name_high = HIDWORD(questEnt[1].klass->_1.name);
      if ( !byte_4B3EFCF )
      {
        sub_1BDB878(&TerminalPramsManager_TypeInfo, result);
        questEnt = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
        byte_4B3EFCF = 1;
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
        _9__2 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
        System_Action___ctor(
          _9__2,
          (Il2CppObject *)this,
          Method_TerminalSceneComponent___c__DisplayClass232_0__PlayAutoExecuteQuest_b__2__,
          0LL);
        this->fields.__9__2 = _9__2;
        sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v15, v16);
      }
      if ( mTerminalList )
      {
        ScrTerminalListTop__StartWindowMessage_35943932(mTerminalList, name_high, namespaze + 1, 2, _9__2, 1, 0LL);
        return;
      }
    }
LABEL_28:
    sub_1BDBAD4(questEnt, result);
  }
  questEnt = (QuestEntity_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v17 = (clsQuestCheck_o *)questEnt;
  v18 = TerminalSceneComponent___c_TypeInfo;
  if ( !TerminalSceneComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent___c_TypeInfo);
    v18 = TerminalSceneComponent___c_TypeInfo;
  }
  _9__232_3 = v18->static_fields->__9__232_3;
  if ( !_9__232_3 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = TerminalSceneComponent___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v18->static_fields->__9;
    _9__232_3 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(_9__232_3, v20, Method_TerminalSceneComponent___c__PlayAutoExecuteQuest_b__232_3__, 0LL);
    static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
    static_fields->__9__232_3 = _9__232_3;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__232_3, (int32_t)_9__232_3, v22, v23);
  }
  if ( !v17 )
    goto LABEL_28;
  clsQuestCheck__PlayQuestStartAction(v17, _9__232_3, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass232_0___PlayAutoExecuteQuest_b__2(
        TerminalSceneComponent___c__DisplayClass232_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass232_0_o *v2; // x20
  struct TerminalSceneComponent_o *_4__this; // x8
  struct TerminalSceneComponent_o *v4; // x8
  struct TerminalSceneComponent_o *v5; // x8
  __int64 v6; // x1
  TerminalPramsManager_c *v7; // x0
  int32_t QuestId_k__BackingField; // w21
  __int64 v9; // x1
  TerminalPramsManager_c *v10; // x0
  bool HasFlag; // w0
  __int64 v12; // x1
  TerminalPramsManager_c *v13; // x8
  TerminalPramsManager_c *v14; // x0
  __int64 v15; // x1
  int32_t SpotId; // w21
  struct TerminalSceneComponent_o *v17; // x8
  bool Effect; // w21
  struct TerminalSceneComponent_o *v19; // x8
  ScrTerminalListTop_o *mTerminalList; // x20
  int32_t invoke_impl; // w21

  v2 = this;
  if ( (byte_4B46DC1 & 1) == 0 )
  {
    this = (TerminalSceneComponent___c__DisplayClass232_0_o *)sub_1BDB878(&TerminalPramsManager_TypeInfo, method);
    byte_4B46DC1 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_60;
  this = (TerminalSceneComponent___c__DisplayClass232_0_o *)_4__this->fields.mTerminalMap;
  if ( !this )
    goto LABEL_60;
  this = (TerminalSceneComponent___c__DisplayClass232_0_o *)ScrTerminalMap__IsAllMaskActive(
                                                              (ScrTerminalMap_o *)this,
                                                              0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v4 = v2->fields.__4__this;
    if ( !v4 )
      goto LABEL_60;
    this = (TerminalSceneComponent___c__DisplayClass232_0_o *)v4->fields.mTerminalMap;
    if ( !this )
      goto LABEL_60;
    ScrTerminalMap__AllMaskEnd((ScrTerminalMap_o *)this, 0LL);
  }
  v5 = v2->fields.__4__this;
  if ( !v5 )
    goto LABEL_60;
  this = (TerminalSceneComponent___c__DisplayClass232_0_o *)v5->fields.mTerminalList;
  if ( !this )
    goto LABEL_60;
  ScrTerminalListTop__IsAllTouchEnable((ScrTerminalListTop_o *)this, 0, 0LL, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B3EFD0 )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v6);
    byte_4B3EFD0 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v7->static_fields->_QuestId_k__BackingField;
  if ( !byte_4B417DA )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v6);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4B417DA = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_LastPlayedQuestId_k__BackingField = QuestId_k__BackingField;
  if ( !byte_4B3EFD0 )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v6);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4B3EFD0 = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  TerminalPramsManager__CheckClearSelectedStoryQuestId(v7->static_fields->_QuestId_k__BackingField, 0LL);
  if ( !byte_4B3EFD0 )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v9);
    byte_4B3EFD0 = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  HasFlag = QuestMaster__HasFlag(v10->static_fields->_QuestId_k__BackingField, 0x8000000000LL, 0LL);
  v13 = TerminalPramsManager_TypeInfo;
  if ( HasFlag )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B3EFD0 )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, v12);
      byte_4B3EFD0 = 1;
    }
    v14 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v14 = TerminalPramsManager_TypeInfo;
    }
    SpotId = QuestMaster__GetSpotId(v14->static_fields->_QuestId_k__BackingField, 0LL);
    if ( !byte_4B417DB )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, v15);
      byte_4B417DB = 1;
    }
    v13 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v13 = TerminalPramsManager_TypeInfo;
    }
    v13->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = SpotId;
  }
  if ( !v13->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v13);
  TerminalPramsManager__PlayQuestSave_SaveData(0LL);
  TerminalPramsManager__Save_SaveData(0LL);
  v17 = v2->fields.__4__this;
  if ( !v17 )
    goto LABEL_60;
  this = (TerminalSceneComponent___c__DisplayClass232_0_o *)v17->fields.mTerminalList;
  if ( !this )
    goto LABEL_60;
  Effect = ScrTerminalListTop__IsDisplayGetEffect((ScrTerminalListTop_o *)this, 0LL);
  if ( !byte_4B417DC )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, method);
    byte_4B417DC = 1;
  }
  this = (TerminalSceneComponent___c__DisplayClass232_0_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (TerminalSceneComponent___c__DisplayClass232_0_o *)TerminalPramsManager_TypeInfo;
  }
  BYTE2(this[3].fields.__9__6[1].fields.data) = Effect;
  v19 = v2->fields.__4__this;
  if ( !v19 )
    goto LABEL_60;
  mTerminalList = v19->fields.mTerminalList;
  if ( !byte_4B3EFD0 )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, method);
    this = (TerminalSceneComponent___c__DisplayClass232_0_o *)TerminalPramsManager_TypeInfo;
    byte_4B3EFD0 = 1;
  }
  if ( !LODWORD(this[4].fields.__9__2) )
  {
    j_il2cpp_runtime_class_init_0(this);
    this = (TerminalSceneComponent___c__DisplayClass232_0_o *)TerminalPramsManager_TypeInfo;
  }
  invoke_impl = this[3].fields.__9__6->fields.invoke_impl;
  if ( !byte_4B3EFCF )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, method);
    this = (TerminalSceneComponent___c__DisplayClass232_0_o *)TerminalPramsManager_TypeInfo;
    byte_4B3EFCF = 1;
  }
  if ( !LODWORD(this[4].fields.__9__2) )
  {
    j_il2cpp_runtime_class_init_0(this);
    this = (TerminalSceneComponent___c__DisplayClass232_0_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !mTerminalList )
LABEL_60:
    sub_1BDBAD4(this, method);
  ScrTerminalListTop__RequestBattleSecnario(
    mTerminalList,
    invoke_impl,
    LODWORD(this[3].fields.__9__6->fields.m_target) + 1,
    0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass232_0___PlayAutoExecuteQuest_b__6(
        TerminalSceneComponent___c__DisplayClass232_0_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass232_0_o *v2; // x19
  struct TerminalSceneComponent_o *_4__this; // x8
  ScrTerminalListTop_o *mTerminalList; // x20
  int32_t klass_high; // w22
  int32_t invoke_impl; // w23
  struct TerminalSceneComponent_o *v7; // x8

  v2 = this;
  if ( (byte_4B46DC3 & 1) == 0 )
  {
    this = (TerminalSceneComponent___c__DisplayClass232_0_o *)sub_1BDB878(&TerminalPramsManager_TypeInfo, method);
    byte_4B46DC3 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_22;
  mTerminalList = _4__this->fields.mTerminalList;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B3F84F )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, method);
    byte_4B3F84F = 1;
  }
  this = (TerminalSceneComponent___c__DisplayClass232_0_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (TerminalSceneComponent___c__DisplayClass232_0_o *)TerminalPramsManager_TypeInfo;
  }
  klass_high = HIDWORD(this[3].fields.__9__6->klass);
  if ( !byte_4B3EFD0 )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, method);
    this = (TerminalSceneComponent___c__DisplayClass232_0_o *)TerminalPramsManager_TypeInfo;
    byte_4B3EFD0 = 1;
  }
  if ( !LODWORD(this[4].fields.__9__2) )
  {
    j_il2cpp_runtime_class_init_0(this);
    this = (TerminalSceneComponent___c__DisplayClass232_0_o *)TerminalPramsManager_TypeInfo;
  }
  invoke_impl = this[3].fields.__9__6->fields.invoke_impl;
  if ( !byte_4B3EFCF )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, method);
    this = (TerminalSceneComponent___c__DisplayClass232_0_o *)TerminalPramsManager_TypeInfo;
    byte_4B3EFCF = 1;
  }
  if ( !LODWORD(this[4].fields.__9__2) )
  {
    j_il2cpp_runtime_class_init_0(this);
    this = (TerminalSceneComponent___c__DisplayClass232_0_o *)TerminalPramsManager_TypeInfo;
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
    || (this = (TerminalSceneComponent___c__DisplayClass232_0_o *)v7->fields.mTerminalList) == 0LL )
  {
LABEL_22:
    sub_1BDBAD4(this, method);
  }
  ScrTerminalListTop__StartQuestBeforeFollower((ScrTerminalListTop_o *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass237_0___ctor(
        TerminalSceneComponent___c__DisplayClass237_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass237_0___PlayEventTutorial_b__0(
        TerminalSceneComponent___c__DisplayClass237_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalSceneComponent___c__DisplayClass237_0_o *v3; // x19
  __int64 v4; // x1
  System_Action_o *_9__1; // x22
  TerminalSceneComponent_o *_4__this; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  v3 = this;
  if ( (byte_4B46DC4 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    this = (TerminalSceneComponent___c__DisplayClass237_0_o *)sub_1BDB878(
                                                                &Method_TerminalSceneComponent___c__DisplayClass237_0__PlayEventTutorial_b__1__,
                                                                v4);
    byte_4B46DC4 = 1;
  }
  _9__1 = v3->fields.__9__1;
  _4__this = v3->fields.__4__this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_TerminalSceneComponent___c__DisplayClass237_0__PlayEventTutorial_b__1__,
      0LL);
    v3->fields.__9__1 = _9__1;
    sub_1BDB81C((CGThumbnailListItem_o *)&v3->fields.__9__1, (int32_t)_9__1, v7, v8);
  }
  if ( !_4__this )
    sub_1BDBAD4(this, method);
  TerminalSceneComponent__PlayEventTutorialWithoutAfterAction(_4__this, _9__1, v2);
}


void __fastcall TerminalSceneComponent___c__DisplayClass237_0___PlayEventTutorial_b__1(
        TerminalSceneComponent___c__DisplayClass237_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_o *_4__this; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  TerminalSceneComponent___c__DisplayClass237_0_o *v4; // x19

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (mTerminalList = _4__this->fields.mTerminalList) == 0LL
    || (v4 = this, (this = (TerminalSceneComponent___c__DisplayClass237_0_o *)mTerminalList->fields.mActionBgColl) == 0LL)
    || (this = (TerminalSceneComponent___c__DisplayClass237_0_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)this,
                                                                    0LL)) == 0LL )
  {
    sub_1BDBAD4(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  ActionExtensions__Call(v4->fields.callbackAfter, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass255_0___ctor(
        TerminalSceneComponent___c__DisplayClass255_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass255_0___CheckRewardPopupChain_b__0(
        TerminalSceneComponent___c__DisplayClass255_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ScrTerminalListTop_o *Instance; // x0
  __int64 v8; // x1
  struct TerminalSceneComponent_o *_4__this; // x8
  CommonUI_o *v10; // x21
  struct TerminalSceneComponent_o *v11; // x20
  const MethodInfo *v12; // x2

  if ( (byte_4B46DC5 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_DialogMessageMaster___, action);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B46DC5 = 1;
  }
  Instance = (ScrTerminalListTop_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  v10 = (CommonUI_o *)Instance;
  Instance = _4__this->fields.mTerminalList;
  if ( !Instance )
    goto LABEL_11;
  Instance = (ScrTerminalListTop_o *)ScrTerminalListTop__PopEventSvtGets(Instance, 0LL);
  if ( !v10
    || (CommonUI__SetupLoginResultData(v10, (System_Int32_array *)Instance, 0LL),
        v11 = this->fields.__4__this,
        (Instance = (ScrTerminalListTop_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (Instance = (ScrTerminalListTop_o *)CommonUI__get_CampaignDirectBonus((CommonUI_o *)Instance, 0LL), !v11)
    || (TerminalSceneComponent__SaveCampaignDirectBonusData(
          (TerminalSceneComponent_o *)Instance,
          (CommonUI_CampaignDirectBonusData_array *)Instance,
          v12),
        (Instance = (ScrTerminalListTop_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (ScrTerminalListTop_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_303395C *)Method_DataManager_GetMasterData_DialogMessageMaster___)) == 0LL )
  {
LABEL_11:
    sub_1BDBAD4(Instance, v8);
  }
  DialogMessageMaster__ShowAvailables((DialogMessageMaster_o *)Instance, 1, action, 0, 0, 0, 0, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass255_0___CheckRewardPopupChain_b__1(
        TerminalSceneComponent___c__DisplayClass255_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  System_Action_o *_9__5; // x22
  CommonUI_o *v10; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4B46DC6 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, action);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1BDB878(&Method_TerminalSceneComponent___c__DisplayClass255_0__CheckRewardPopupChain_b__5__, v6);
    byte_4B46DC6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__5 = this->fields.__9__5;
  v10 = (CommonUI_o *)Instance;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)this,
      Method_TerminalSceneComponent___c__DisplayClass255_0__CheckRewardPopupChain_b__5__,
      0LL);
    this->fields.__9__5 = _9__5;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.__9__5, (int32_t)_9__5, v11, v12);
  }
  if ( !v10 )
    sub_1BDBAD4(Instance, v8);
  CommonUI__StartLoginAndCampaignBonus(v10, action, _9__5, -1, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass255_0___CheckRewardPopupChain_b__3(
        TerminalSceneComponent___c__DisplayClass255_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (this = (TerminalSceneComponent___c__DisplayClass255_0_o *)_4__this->fields.mTerminalList) == 0LL )
    sub_1BDBAD4(this, action);
  ScrTerminalListTop__CheckLoginAfterTransitionDialog((ScrTerminalListTop_o *)this, action, 100, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass255_0___CheckRewardPopupChain_b__4(
        TerminalSceneComponent___c__DisplayClass255_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  TerminalPramsManager_c *v9; // x0
  TerminalPramsManager_c *v10; // x0
  int32_t EventID; // w20
  void *Master_object; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  TerminalPramsManager_c *v15; // x0
  TerminalSceneComponent_o *_4__this; // x20
  System_Action_o *v17; // x21
  Il2CppObject *v18; // x22
  struct TerminalSceneComponent___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B46DC7 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_DataManager_GetMaster_EventDetailMaster___, v3);
    sub_1BDB878(&DataManager_TypeInfo, v4);
    sub_1BDB878(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v5);
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v6);
    sub_1BDB878(&Method_TerminalSceneComponent___c__CheckRewardPopupChain_b__255_6__, v7);
    sub_1BDB878(&TerminalSceneComponent___c_TypeInfo, v8);
    byte_4B46DC7 = 1;
  }
  entity = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B3F84F )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, method);
    byte_4B3F84F = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  if ( v9->static_fields->_WarId_k__BackingField < 1 )
  {
    EventID = -1;
  }
  else
  {
    if ( !v9->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v9);
    if ( !byte_4B3F84F )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, method);
      byte_4B3F84F = 1;
    }
    v10 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v10 = TerminalPramsManager_TypeInfo;
    }
    EventID = WarMaster__getEventID(v10->static_fields->_WarId_k__BackingField, 0LL);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !Master_object )
    goto LABEL_39;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
    &entity,
    EventID,
    (const MethodInfo_32E1E88 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B4161C )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v13);
    byte_4B4161C = 1;
  }
  v15 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v15 = TerminalPramsManager_TypeInfo;
  }
  if ( v15->static_fields->_SpotId_k__BackingField < 1
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
    v17 = *(System_Action_o **)(*((_QWORD *)Master_object + 23) + 128LL);
    if ( !v17 )
    {
      if ( !*((_DWORD *)Master_object + 56) )
      {
        j_il2cpp_runtime_class_init_0(Master_object);
        Master_object = TerminalSceneComponent___c_TypeInfo;
      }
      v18 = (Il2CppObject *)**((_QWORD **)Master_object + 23);
      v17 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
      System_Action___ctor(v17, v18, Method_TerminalSceneComponent___c__CheckRewardPopupChain_b__255_6__, 0LL);
      static_fields = TerminalSceneComponent___c_TypeInfo->static_fields;
      static_fields->__9__255_6 = v17;
      sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__255_6, (int32_t)v17, v20, v21);
    }
    if ( _4__this )
    {
      TerminalSceneComponent__CheckOpenCampaignDirectBonus(_4__this, v17, v14);
      goto LABEL_38;
    }
LABEL_39:
    sub_1BDBAD4(Master_object, v13);
  }
LABEL_38:
  ActionExtensions__Call(this->fields.afterChain, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass255_0___CheckRewardPopupChain_b__5(
        TerminalSceneComponent___c__DisplayClass255_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (this = (TerminalSceneComponent___c__DisplayClass255_0_o *)_4__this->fields.mPlayerStatus) == 0LL )
    sub_1BDBAD4(this, method);
  ScrPlayerStatus__mfInitUserData((ScrPlayerStatus_o *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass257_0___ctor(
        TerminalSceneComponent___c__DisplayClass257_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass257_0___CheckOpenCampaignDirectBonus_b__2(
        TerminalSceneComponent___c__DisplayClass257_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  TerminalSceneComponent___c__DisplayClass257_0_o *v4; // x19
  struct TerminalSceneComponent_o *_4__this; // x8
  TerminalPramsManager_c *v6; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  v4 = this;
  if ( (byte_4B46DC8 & 1) == 0 )
  {
    this = (TerminalSceneComponent___c__DisplayClass257_0_o *)sub_1BDB878(&TerminalPramsManager_TypeInfo, action);
    byte_4B46DC8 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    sub_1BDBAD4(this, action);
  _4__this->fields._IsPlayingCampaignDirectBonus_k__BackingField = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B41F4B )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, action);
    byte_4B41F4B = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v6->static_fields;
  static_fields->_CampaignDirectBonus_k__BackingField = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->_CampaignDirectBonus_k__BackingField, 0, (int32_t)method, v3);
  TerminalPramsManager__CampaignDirectBonus_SaveData(0LL);
  ActionExtensions__Call(v4->fields.callback, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass264_0___ctor(
        TerminalSceneComponent___c__DisplayClass264_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass264_0___CheckSaveRouteSelect_b__0(
        TerminalSceneComponent___c__DisplayClass264_0_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  if ( (byte_4B46DC9 & 1) == 0 )
  {
    sub_1BDB878(&ScriptManager_TypeInfo, str);
    byte_4B46DC9 = 1;
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__ClearSelectRouteArray(0LL);
  ScriptManager__ClearSelectRouteArrayInCollection(0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass267_0___ctor(
        TerminalSceneComponent___c__DisplayClass267_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalSceneComponent___c__DisplayClass267_0___CheckMasterMissionReset_b__0(
        TerminalSceneComponent___c__DisplayClass267_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  TerminalSceneComponent_c *v14; // x0
  System_String_o *MASTER_MISSION_RESET_KEY; // x21
  System_String_o *v16; // x0
  Il2CppObject *Instance; // x19
  System_Action_o *v18; // x21

  if ( (byte_4B46DCA & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, isDecide);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1BDB878(&TerminalSceneComponent_TypeInfo, v6);
    sub_1BDB878(&Method_TerminalSceneComponent___c__DisplayClass267_1__CheckMasterMissionReset_b__1__, v7);
    sub_1BDB878(&TerminalSceneComponent___c__DisplayClass267_1_TypeInfo, v8);
    byte_4B46DCA = 1;
  }
  v9 = sub_1BDBAC4(TerminalSceneComponent___c__DisplayClass267_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_8;
  *(_QWORD *)(v9 + 24) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v9 + 24), (int32_t)this, v12, v13);
  *(_BYTE *)(v9 + 16) = isDecide;
  v14 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v14 = TerminalSceneComponent_TypeInfo;
  }
  MASTER_MISSION_RESET_KEY = v14->static_fields->MASTER_MISSION_RESET_KEY;
  v16 = System_Int64__ToString((int64_t)&this->fields, 0LL);
  UnityEngine_PlayerPrefs__SetString(MASTER_MISSION_RESET_KEY, v16, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v18 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    (Il2CppObject *)v9,
    Method_TerminalSceneComponent___c__DisplayClass267_1__CheckMasterMissionReset_b__1__,
    0LL);
  if ( !Instance )
LABEL_8:
    sub_1BDBAD4(v10, v11);
  CommonUI__CloseConfirmDialog_30833860((CommonUI_o *)Instance, v18, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass267_0___CheckMasterMissionReset_b__2(
        TerminalSceneComponent___c__DisplayClass267_0_o *this,
        const MethodInfo *method)
{
  struct TerminalSceneComponent_o *_4__this; // x8
  ScrPlayerStatus_o *mPlayerStatus; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (mPlayerStatus = _4__this->fields.mPlayerStatus) == 0LL )
    sub_1BDBAD4(this, method);
  ScrPlayerStatus__OpenMasterMission(mPlayerStatus, this->fields.callback, -1, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass267_1___ctor(
        TerminalSceneComponent___c__DisplayClass267_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass267_1___CheckMasterMissionReset_b__1(
        TerminalSceneComponent___c__DisplayClass267_1_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent___c__DisplayClass267_1_o *v2; // x20
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  AvalonSceneManager_c *v6; // x8
  CommonUI_o *v7; // x19
  struct TerminalSceneComponent___c__DisplayClass267_0_o *CS___8__locals1; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__2; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct TerminalSceneComponent___c__DisplayClass267_0_o *v13; // x8

  v2 = this;
  if ( (byte_4B46DCB & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&AvalonSceneManager_TypeInfo, v3);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    this = (TerminalSceneComponent___c__DisplayClass267_1_o *)sub_1BDB878(
                                                                &Method_TerminalSceneComponent___c__DisplayClass267_0__CheckMasterMissionReset_b__2__,
                                                                v5);
    byte_4B46DCB = 1;
  }
  if ( v2->fields.isDecide )
  {
    this = (TerminalSceneComponent___c__DisplayClass267_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v6 = AvalonSceneManager_TypeInfo;
    v7 = (CommonUI_o *)this;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v6 = AvalonSceneManager_TypeInfo;
    }
    CS___8__locals1 = v2->fields.CS___8__locals1;
    if ( CS___8__locals1 )
    {
      DEFAULT_FADE_TIME = v6->static_fields->DEFAULT_FADE_TIME;
      _9__2 = CS___8__locals1->fields.__9__2;
      if ( !_9__2 )
      {
        _9__2 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
        System_Action___ctor(
          _9__2,
          (Il2CppObject *)CS___8__locals1,
          Method_TerminalSceneComponent___c__DisplayClass267_0__CheckMasterMissionReset_b__2__,
          0LL);
        CS___8__locals1->fields.__9__2 = _9__2;
        sub_1BDB81C((CGThumbnailListItem_o *)&CS___8__locals1->fields.__9__2, (int32_t)_9__2, v11, v12);
      }
      if ( v7 )
      {
        CommonUI__maskFadeout(v7, 1, DEFAULT_FADE_TIME, _9__2, 0LL);
        return;
      }
    }
LABEL_13:
    sub_1BDBAD4(this, method);
  }
  v13 = v2->fields.CS___8__locals1;
  if ( !v13 )
    goto LABEL_13;
  ActionExtensions__Call(v13->fields.callback, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass268_0___ctor(
        TerminalSceneComponent___c__DisplayClass268_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass268_0___CheckNotificationDialog_b__0(
        TerminalSceneComponent___c__DisplayClass268_0_o *this,
        const MethodInfo *method)
{
  BattleResultBondsComponent_c *v3; // x0

  if ( (byte_4B46DCC & 1) == 0 )
  {
    sub_1BDB878(&BattleResultBondsComponent_TypeInfo, method);
    byte_4B46DCC = 1;
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


void __fastcall TerminalSceneComponent___c__DisplayClass268_0___CheckNotificationDialog_b__2(
        TerminalSceneComponent___c__DisplayClass268_0_o *this,
        const MethodInfo *method)
{
  BattleResultBondsComponent_c *v3; // x0

  if ( (byte_4B46DCD & 1) == 0 )
  {
    sub_1BDB878(&BattleResultBondsComponent_TypeInfo, method);
    byte_4B46DCD = 1;
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


void __fastcall TerminalSceneComponent___c__DisplayClass268_1___ctor(
        TerminalSceneComponent___c__DisplayClass268_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalSceneComponent___c__DisplayClass268_1___CheckNotificationDialog_b__1(
        TerminalSceneComponent___c__DisplayClass268_1_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  struct TerminalSceneComponent___c__DisplayClass268_0_o *CS___8__locals1; // x21
  GetSvtCoin_array *coin; // x20
  System_Action_o *_9__2; // x22
  CommonUI_o *v10; // x19
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4B46DCE & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1BDB878(&Method_TerminalSceneComponent___c__DisplayClass268_0__CheckNotificationDialog_b__2__, v4);
    byte_4B46DCE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  coin = this->fields.coin;
  _9__2 = CS___8__locals1->fields.__9__2;
  v10 = (CommonUI_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)CS___8__locals1,
      Method_TerminalSceneComponent___c__DisplayClass268_0__CheckNotificationDialog_b__2__,
      0LL);
    CS___8__locals1->fields.__9__2 = _9__2;
    sub_1BDB81C((CGThumbnailListItem_o *)&CS___8__locals1->fields.__9__2, (int32_t)_9__2, v11, v12);
  }
  if ( !v10 )
LABEL_8:
    sub_1BDBAD4(Instance, v6);
  CommonUI__CreateServantCoinConfirmDialog(v10, 1, coin, _9__2, 0LL);
}


void __fastcall TerminalSceneComponent__coFadein_WorldDisp_d__196___ctor(
        TerminalSceneComponent__coFadein_WorldDisp_d__196_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall TerminalSceneComponent__coFadein_WorldDisp_d__196__MoveNext(
        TerminalSceneComponent__coFadein_WorldDisp_d__196_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent__coFadein_WorldDisp_d__196_o *v2; // x19
  __int64 v3; // x1
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
  int32_t _1__state; // w8
  struct TerminalSceneComponent_o *_4__this; // x20
  bool result; // w0
  TerminalSceneComponent___c__DisplayClass196_0_o *v24; // x22
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct TerminalSceneComponent_o *v29; // x1
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  Il2CppObject *endAct; // x1
  TerminalPramsManager_c *v33; // x0
  System_Collections_IEnumerator_o *v34; // x0
  System_Action_c *klass; // x8
  __int64 v36; // x8
  TerminalPramsManager_c *v37; // x0
  System_Collections_IEnumerator_o *v38; // x0
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  Il2CppObject *Master_object; // x21
  int v43; // w23
  int32_t delegates_high; // w8
  int monitor; // w23
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct ScrTerminalListTop_o *v47; // x8
  Il2CppObject *v48; // x19
  System_Action_o *v49; // x21
  TerminalPramsManager_c *v50; // x0
  _QWORD *v51; // x0
  System_Reflection_MethodBase_o *v52; // x20
  ScrTerminalListTop_c *v53; // x8
  __int64 v54; // x1
  Il2CppObject *Instance; // x20
  TerminalPramsManager_c *v56; // x0
  ScrTerminalListTop_c *v57; // x0
  float *p_GrandMovieFadeTime; // x8
  System_String_o *ShowingFolderBGM; // x0
  AvalonSceneManager_c *v60; // x8
  Il2CppObject *v61; // x21
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v63; // x0
  __int64 *v64; // x8
  AvalonSceneManager_c *v65; // x0
  System_Action_o *v66; // x19
  struct TerminalSceneComponent___c__DisplayClass196_0_o *_8__1; // x9
  int32_t index; // [xsp+Ch] [xbp-44h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF

  v2 = this;
  if ( (byte_4B46DDD & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&AvalonSceneManager_TypeInfo, v3);
    sub_1BDB878(&BalanceConfig_TypeInfo, v4);
    sub_1BDB878(&Method_DataManager_GetMaster_WarMaster___, v5);
    sub_1BDB878(&DataManager_TypeInfo, v6);
    sub_1BDB878(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v7);
    sub_1BDB878(&System_GC_TypeInfo, v8);
    sub_1BDB878(&ScrTerminalListTop_TypeInfo, v9);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1BDB878(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v11);
    sub_1BDB878(&Method_SingletonTemplate_RewardMiniPopupExecutor__get_Instance__, v12);
    sub_1BDB878(&SoundManager_TypeInfo, v13);
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v14);
    sub_1BDB878(&TerminalSceneComponent_TypeInfo, v15);
    sub_1BDB878(&Method_TerminalSceneComponent___c__DisplayClass196_0__coFadein_WorldDisp_b__0__, v16);
    sub_1BDB878(&Method_TerminalSceneComponent___c__DisplayClass196_0__coFadein_WorldDisp_b__1__, v17);
    sub_1BDB878(&Method_TerminalSceneComponent___c__DisplayClass196_0__coFadein_WorldDisp_b__2__, v18);
    sub_1BDB878(&TerminalSceneComponent___c__DisplayClass196_0_TypeInfo, v19);
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__196_o *)sub_1BDB878(
                                                                    &Method_TerminalSceneComponent__coFadein_WorldDisp_d__196_MoveNext__,
                                                                    v20);
    byte_4B46DDD = 1;
  }
  entity = 0LL;
  index = 0;
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
  }
  else
  {
    result = 0;
    if ( _1__state )
      return result;
    v2->fields.__1__state = -1;
    v24 = (TerminalSceneComponent___c__DisplayClass196_0_o *)sub_1BDBAC4(TerminalSceneComponent___c__DisplayClass196_0_TypeInfo);
    TerminalSceneComponent___c__DisplayClass196_0___ctor(v24, 0LL);
    v2->fields.__8__1 = v24;
    sub_1BDB81C((CGThumbnailListItem_o *)&v2->fields.__8__1, (int32_t)v24, v25, v26);
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__196_o *)v2->fields.__8__1;
    if ( !this )
      goto LABEL_144;
    v29 = v2->fields.__4__this;
    *(_QWORD *)&this->fields.__1__state = v29;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields, (int32_t)v29, v27, v28);
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__196_o *)v2->fields.__8__1;
    if ( !this )
      goto LABEL_144;
    endAct = (Il2CppObject *)v2->fields.endAct;
    this->fields.__2__current = endAct;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.__2__current, (int32_t)endAct, v30, v31);
    v2->fields._isAuto_5__2 = 0;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B41AE0 )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, method);
      byte_4B41AE0 = 1;
    }
    v33 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v33 = TerminalPramsManager_TypeInfo;
    }
    if ( !v33->static_fields->_IsMapReturnFolder_k__BackingField )
    {
      if ( !v33->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v33);
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__196_o *)TerminalPramsManager__IsAuto(0LL);
      v2->fields._isAuto_5__2 = (unsigned __int8)this & 1;
      if ( !_4__this )
        goto LABEL_144;
      TerminalSceneComponent__EndAuto(_4__this, 0LL);
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__196_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_RewardMiniPopupExecutor__get_Instance__);
      if ( !this )
        goto LABEL_144;
      if ( RewardMiniPopupExecutor__IsBusy((RewardMiniPopupExecutor_o *)this, 0LL) )
      {
        v34 = TerminalSceneComponent__WaitStopSEQuestPhaseRewardEffect(_4__this, 0LL);
        UnityEngine_MonoBehaviour__StartCoroutine_70269772((UnityEngine_MonoBehaviour_o *)_4__this, v34, 0LL);
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
    if ( !byte_4B406D7 )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, method);
      byte_4B406D7 = 1;
    }
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__196_o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__196_o *)TerminalPramsManager_TypeInfo;
    }
    if ( HIBYTE(this[2].fields.endAct[1].klass) )
    {
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4B3EEEF )
      {
        sub_1BDB878(&TerminalSceneComponent_TypeInfo, method);
        byte_4B3EEEF = 1;
      }
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__196_o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        this = (TerminalSceneComponent__coFadein_WorldDisp_d__196_o *)TerminalSceneComponent_TypeInfo;
      }
      klass = this[2].fields.endAct->klass;
      if ( !klass )
        goto LABEL_144;
      v36 = *(_QWORD *)&klass->_2.thread_static_fields_offset;
      if ( !v36 )
        goto LABEL_144;
      this = *(TerminalSceneComponent__coFadein_WorldDisp_d__196_o **)(v36 + 552);
      if ( !this )
        goto LABEL_144;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    }
    if ( !_4__this )
      goto LABEL_144;
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__196_o *)_4__this->fields.mTerminalMap;
    if ( !this )
      goto LABEL_144;
    ScrTerminalMap__SetDisp((ScrTerminalMap_o *)this, 0, 0LL);
    if ( _4__this->fields._IsReq_InitEarthRotateY_k__BackingField )
    {
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__196_o *)_4__this->fields.mEarthCore;
      _4__this->fields._IsReq_InitEarthRotateY_k__BackingField = 0;
      if ( !this )
        goto LABEL_144;
      BaseCore__SetRotateY_PointInitAngle((BaseCore_o *)this, 0LL);
    }
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__196_o *)_4__this->fields.mTerminalList;
    if ( !this )
      goto LABEL_144;
    if ( !ScrTerminalListTop__isShowingFolder((ScrTerminalListTop_o *)this, 0LL) )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4B41427 )
      {
        sub_1BDB878(&TerminalPramsManager_TypeInfo, method);
        byte_4B41427 = 1;
      }
      v37 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v37 = TerminalPramsManager_TypeInfo;
      }
      v37->static_fields->_DispState_k__BackingField = 1;
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__196_o *)_4__this->fields.mTitleInfo;
      if ( !this )
        goto LABEL_144;
      TitleInfoControl__SetActiveEventInfo_38884164((TitleInfoControl_o *)this, 1, 16, 0, 0, 0LL, 0LL);
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__196_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_144;
      CommonUI__CheckChangeOtherConnectMarkFromEventId((CommonUI_o *)this, 0, 1, 0LL);
    }
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__196_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this )
      goto LABEL_144;
    CommonUI__SetBgCameraActive((CommonUI_o *)this, 1, 0LL);
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__196_o *)_4__this->fields.mTerminalMap;
    if ( !this )
      goto LABEL_144;
    ScrTerminalMap__ReleaseMap((ScrTerminalMap_o *)this, 1, 0LL);
    if ( !System_GC_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
    System_GC__Collect(0LL);
    if ( v2->fields.isExecuteUnusedAssets )
    {
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__196_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( this )
      {
        AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)this, 0LL, 0LL);
        this = (TerminalSceneComponent__coFadein_WorldDisp_d__196_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( this )
        {
          v38 = AssetManager__WaitForExecutionUnloadUnuseAssets((AssetManager_o *)this, 0LL);
          v2->fields.__2__current = (Il2CppObject *)v38;
          p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
          sub_1BDB81C(p__2__current, (int32_t)v38, v40, v41);
          result = 1;
          LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
          return result;
        }
      }
      goto LABEL_144;
    }
  }
  if ( v2->fields._isAuto_5__2 )
  {
    if ( !_4__this )
      goto LABEL_144;
    this = (TerminalSceneComponent__coFadein_WorldDisp_d__196_o *)_4__this->fields.mTerminalList;
    if ( !this )
      goto LABEL_144;
    if ( ScrTerminalListTop__isShowingFolder((ScrTerminalListTop_o *)this, 0LL) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_WarMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4B3F84F )
      {
        sub_1BDB878(&TerminalPramsManager_TypeInfo, method);
        byte_4B3F84F = 1;
      }
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__196_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        this = (TerminalSceneComponent__coFadein_WorldDisp_d__196_o *)TerminalPramsManager_TypeInfo;
      }
      if ( !Master_object )
        goto LABEL_144;
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__196_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                                      &entity,
                                                                      HIDWORD(this[2].fields.endAct->klass),
                                                                      (const MethodInfo_32E1E88 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_144;
        v43 = (int)entity[1].klass;
        this = (TerminalSceneComponent__coFadein_WorldDisp_d__196_o *)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          this = (TerminalSceneComponent__coFadein_WorldDisp_d__196_o *)BalanceConfig_TypeInfo;
        }
        delegates_high = HIDWORD(this[2].fields.endAct[8].fields.delegates);
        if ( v43 == delegates_high )
          goto LABEL_121;
        if ( !entity )
          goto LABEL_144;
        monitor = (int)entity[3].monitor;
        if ( !LODWORD(this[3].monitor) )
        {
          j_il2cpp_runtime_class_init_0(this);
          delegates_high = BalanceConfig_TypeInfo->static_fields->OrdealCallWarId;
        }
        if ( monitor == delegates_high || !TerminalSceneComponent__IsValidGrandBgm(_4__this, &index, 0LL) )
        {
LABEL_121:
          this = (TerminalSceneComponent__coFadein_WorldDisp_d__196_o *)_4__this->fields.mTerminalList;
          if ( !this )
            goto LABEL_144;
          ShowingFolderBGM = ScrTerminalListTop__GetShowingFolderBGM((ScrTerminalListTop_o *)this, 0LL);
          TerminalSceneComponent__playBgm(_4__this, ShowingFolderBGM, 0LL, 0LL);
        }
        else
        {
          TerminalSceneComponent__PlayGrandBgm(_4__this, index, 0LL, 0LL);
        }
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4B406D7 )
        {
          sub_1BDB878(&TerminalPramsManager_TypeInfo, method);
          byte_4B406D7 = 1;
        }
        this = (TerminalSceneComponent__coFadein_WorldDisp_d__196_o *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          this = (TerminalSceneComponent__coFadein_WorldDisp_d__196_o *)TerminalPramsManager_TypeInfo;
        }
        if ( !HIBYTE(this[2].fields.endAct[1].klass) )
        {
          if ( !entity )
            goto LABEL_144;
          _8__1 = v2->fields.__8__1;
          if ( !_8__1 )
            goto LABEL_144;
          TerminalSceneComponent__FadeInAndTriggerEventEffects(
            _4__this,
            v2->fields.fadeTime,
            (int32_t)entity[6].klass,
            _8__1->fields.endAct,
            0LL);
          return 0;
        }
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v60 = AvalonSceneManager_TypeInfo;
        if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
          v60 = AvalonSceneManager_TypeInfo;
        }
        v61 = (Il2CppObject *)v2->fields.__8__1;
        DEFAULT_FADE_TIME = v60->static_fields->DEFAULT_FADE_TIME;
        v63 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
        v64 = &Method_TerminalSceneComponent___c__DisplayClass196_0__coFadein_WorldDisp_b__2__;
        goto LABEL_137;
      }
    }
  }
  else if ( !_4__this )
  {
    goto LABEL_144;
  }
  this = (TerminalSceneComponent__coFadein_WorldDisp_d__196_o *)_4__this->fields.mTerminalList;
  if ( !this )
    goto LABEL_144;
  this = (TerminalSceneComponent__coFadein_WorldDisp_d__196_o *)ScrTerminalListTop__get_IsActiveBlankEarth(
                                                                  (ScrTerminalListTop_o *)this,
                                                                  0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    mTerminalList = _4__this->fields.mTerminalList;
    if ( !mTerminalList )
      goto LABEL_144;
    if ( !mTerminalList->fields.isBackFromBlankEarthMap )
    {
      this = (TerminalSceneComponent__coFadein_WorldDisp_d__196_o *)TerminalSceneComponent__TryPlayGrandBgm(
                                                                      _4__this,
                                                                      0LL,
                                                                      0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        TerminalSceneComponent__playDefaultBgm(_4__this, 0LL, 0LL);
    }
  }
  v47 = _4__this->fields.mTerminalList;
  if ( !v47 )
LABEL_144:
    sub_1BDBAD4(this, method);
  if ( !v47->fields.isBackFromBlankEarthMap )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B41AC9 )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, method);
      byte_4B41AC9 = 1;
    }
    v50 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v50 = TerminalPramsManager_TypeInfo;
    }
    if ( v50->static_fields->_IsTransFromOrdealCall_k__BackingField )
    {
      v51 = Method_TerminalSceneComponent__coFadein_WorldDisp_d__196_MoveNext__;
      if ( (*((_BYTE *)Method_TerminalSceneComponent__coFadein_WorldDisp_d__196_MoveNext__ + 83) & 2) != 0 )
        v51 = (_QWORD *)sub_1BDB890(Method_TerminalSceneComponent__coFadein_WorldDisp_d__196_MoveNext__);
      v52 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v51, v51[4]);
      v53 = ScrTerminalListTop_TypeInfo;
      if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
        v53 = ScrTerminalListTop_TypeInfo;
      }
      OverwriteAssetSoundName__PlaySe(v52, v53->static_fields->GrandMovieAfterSEName, 0, 0LL);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B41AC9 )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, v54);
      byte_4B41AC9 = 1;
    }
    v56 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v56 = TerminalPramsManager_TypeInfo;
    }
    if ( v56->static_fields->_IsTransFromOrdealCall_k__BackingField )
    {
      v57 = ScrTerminalListTop_TypeInfo;
      if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
        v57 = ScrTerminalListTop_TypeInfo;
      }
      p_GrandMovieFadeTime = &v57->static_fields->GrandMovieFadeTime;
    }
    else
    {
      v65 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v65 = AvalonSceneManager_TypeInfo;
      }
      p_GrandMovieFadeTime = &v65->static_fields->DEFAULT_FADE_TIME;
    }
    DEFAULT_FADE_TIME = *p_GrandMovieFadeTime;
    v61 = (Il2CppObject *)v2->fields.__8__1;
    v63 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    v64 = &Method_TerminalSceneComponent___c__DisplayClass196_0__coFadein_WorldDisp_b__1__;
LABEL_137:
    v66 = v63;
    System_Action___ctor(v63, v61, *v64, 0LL);
    if ( !Instance )
      goto LABEL_144;
    CommonUI__maskFadein((CommonUI_o *)Instance, DEFAULT_FADE_TIME, v66, 0LL);
    return 0;
  }
  v48 = (Il2CppObject *)v2->fields.__8__1;
  v49 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v49, v48, Method_TerminalSceneComponent___c__DisplayClass196_0__coFadein_WorldDisp_b__0__, 0LL);
  TerminalSceneComponent__StartWindowMessage(_4__this, v49, 0LL);
  return 0;
}


Il2CppObject *__fastcall TerminalSceneComponent__coFadein_WorldDisp_d__196__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TerminalSceneComponent__coFadein_WorldDisp_d__196_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn TerminalSceneComponent__coFadein_WorldDisp_d__196__System_Collections_IEnumerator_Reset(
        TerminalSceneComponent__coFadein_WorldDisp_d__196_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BDB88C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BDBAC4(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BDB88C(&Method_TerminalSceneComponent__coFadein_WorldDisp_d__196_System_Collections_IEnumerator_Reset__);
  sub_1BDB9A0(v3, v4);
}


Il2CppObject *__fastcall TerminalSceneComponent__coFadein_WorldDisp_d__196__System_Collections_IEnumerator_get_Current(
        TerminalSceneComponent__coFadein_WorldDisp_d__196_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall TerminalSceneComponent__coFadein_WorldDisp_d__196__System_IDisposable_Dispose(
        TerminalSceneComponent__coFadein_WorldDisp_d__196_o *this,
        const MethodInfo *method)
{
  ;
}